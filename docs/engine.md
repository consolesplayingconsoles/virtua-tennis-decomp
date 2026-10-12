# Engine notes

What is known about the game's own code and data, from reading the executable. Addresses are RAM
(linked at `0x8C010000`). Function names are the ones in `functions.txt`, globals the ones in
`globals.txt`. Offsets into structs are hex unless marked.

## Loading

- `fileLoadStart(dest, name, size)` opens `name` with `ADXF_Open` (10 tries) and starts an
  asynchronous `ADXF_ReadNw32` of `size` bytes (0: the whole file) to `dest`; state in
  `fileLoadState` (`+0` busy, `+4` result, `+8` poll count, `+0xC` ADXF handle, `+0x18` name).
  `fileLoadPoll()` returns `+4`: 1 once the read is over (`fileLoadClose` runs then).
  `fileLoadStartSlot`/`fileLoadPollSlot`/`fileLoadCloseSlot` are the same on one of the 76-byte
  slots of `fileLoadSlots`. `fileLoadStartOfs` and `fileLoadStartSlotOfs` add an offset to `dest`.
- `commonLoadStart` resets `commonLoadState` and reads `polygon_COMMON_etc.bin` to `0x8C500000`;
  `commonLoadStep` (a 12-state switch on `commonLoadState`, one step per call, each waiting on
  `fileLoadPoll`) then reads `texture_COMMON_etc.bin` to `0x8CA80000` and registers it
  (`commonEtcTexLoad`), `sprite_COMMON_spr_etc.bin`, `polygon_HUMAN_human.bin` to `0x8C680000`,
  `texture_COMMON_kyaku_FRA.bin` to `0x8CA30000`, `sprite_COMMON_spr_start.bin`, the sound packs,
  the motion files (`motFileLoadStep` until it returns -1) and `sprite_COMMON_spr_title.bin`.
- `commonEtcTexLoad` calls `nlObjPutLoadTexture(model, 0x8C12CBEC)` for the 640 model pointers at
  `0x8C13574C` (all in `polygon_COMMON_etc.bin`); `stageTexLoad` does the same for the court
  models of `stageNo` (one list per stage, 203 to 340 models in the first six).
- Player outfits: `uniformTexLoad(ofs, n, slot)` reads `uniformTexNames[n]`
  (`texture_FUKU_uni<n>.bin`) and `muneTexLoad(ofs, n, slot)` reads `muneTexNames[n]`
  (`texture_COMMON_mune_PL<n>.bin`), both to `0x8CA80000 + ofs` on file slot `slot`, skipping the
  read when the slot already holds that file (`0x8C1891D4[slot]`).

## Motion files

- `motFileTbl`: 40-byte records `{id, name[32], size}`, id 0 `null`, 1 `smotdata_cmn.bin`,
  2 `_boy`, 3 `_emo`, 4 `_emo2`, 5 `_adv`, 6 `_end`, 7 `frmotdata_adv.bin`, 8 `_end`,
  9 `frmotdata_ball.bin`.
- `motFileRequest(id)` queues a record (10 entries, `motFileQueue`). `motFileLoadBegin` sets
  `motLoadAddr` to `0x0CC00000`; `motFileLoadStep` reads the queued files one after another to
  `motLoadAddr` (each rounded up to 32 bytes), stores each base in `motFileAddr[id]`, prints
  `SMOTION OVER !!` past `0x0CDFFFFF` and returns -1 when the queue is empty.
- The game reaches motions as `motFileAddr[1]` (the `smotdata_cmn.bin` base) plus an offset.
  `smotdata_*` hold 16-bit compressed keys; `frmotdata_ball.bin` is float triples.

## Models

- Flat NAOMI records, as in Crazy Taxi (`nlObjPut`): two counts, a bounding sphere, then PowerVR
  words (`0x8000002C`, `0x83000000`, TSP, TCW with address 0 on disc). `polygon_HUMAN_human.bin`
  is 643 such records back to back, no header; the executable points into it with uncached
  addresses (`0x0C680000` + offset), never `0x8C68....`.
- Skeleton nodes: 256-byte structs in the executable (`0x8C138A00`-`0x8C156BFF`, 482 nodes):
  `+0` flags, `+4` model, `+8` position, `+0x14` angles, `+0x20` scale, `+0x2C` child,
  `+0x30` sibling, `+0x38` weld source node, `+0x3C` weld count, `+0x40`/`+0x80` weld tables
  (16 offsets each), `+0xC0` the node's matrix (filled every frame by `playerPut`).
- `charaTbl`: 18 records of 108 bytes (the `PL_PIC` sprite list has 16 players plus `MASTER`
  and `king`). `+0` the character's node array (33 node pointers, e.g. `0x8C156C00`), `+4` a
  float (1.0 for most), `+8`/`+0xC` two racket models (in `polygon_COMMON_etc.bin`: centre about
  2.9 units along x, radius 3.6), `+0x44` ten hand models in `polygon_HUMAN_human.bin` (two
  mirrored sets of five).
- `racketModelTbl` / `racketModelTbl2`: eight more racket-shaped models each.

## Drawing a player

- `playerExec(player)`: moves the player by the motion's root step (`player+0xAE8` += root delta
  times speed), runs `playerControl`, then pushes a matrix, translates to `+0xAE8`, rotates Y by
  `+0xB06` and calls `playerPut`.
- `playerPut(player)` poses the skeleton from the motion (`motionSetCurrent`, `motionRootBone`,
  `motionBone`, `motionBoneOffset`), copies the bone matrices into the nodes (`+0xC0`) and calls
  `playerDrawModel`.
- `playerDrawModel(player)`: the hands (`charaTbl[c].+0x44` models on the matrices of nodes 14
  and 15, shapes from `player+0xD10` and `+0xD14`), the body (`sklDrawNode` from node 10;
  character 16 goes through `0x8C01BA80` instead), then the racket: `charaTbl[c].+8`, or `+0xC`
  and hand shape 0 when four players are on court (`0x8C287ACC+0x10` is 4 and two of its
  flags are clear), or `racketModelTbl[player+0xD6C]` (`racketModelTbl2` with four players) when
  `+0xD6C` is not -1.
- `sklDrawNode(node)`: loads `node+0xC0`, welds `+0x3C` vertices from the weld source's model
  (point and normal through the matrices), `nlObjPut(node+4)`, then the child; loops on siblings.

## Player

`Player`: four records of `0xD78` bytes (the motion viewer allocates a task of 0xD90 = 0x18 +
0xD78). Known fields: `+0` the motion player (below), `+0x38` the node array, `+0xAE8` position,
`+0xB00` court side (+1.0 or -1.0), `+0xB06` heading, `+0xB5C` slot, `+0xB64` pad port,
`+0xC58` character (`charaTbl` index), `+0xD44` buttons, `+0xD46` directions (both below).
`playerSetup(player, slot, chara, port)` sets character and port; `playerInit(player, slot)`
places the player.

## Motion player

At `player+0` (also used alone). `motionSet(mp, ofs, loop, skel, chara, base)` (speed in `fr4`)
starts a motion; `motionChange(mp, ofs, frames, loop, base)` blends to a new one over `frames`;
`motionSwitch` changes without a blend; `motionAdvance` steps it (sine-eased blend);
`motionAdvanceSimple` steps without blending; `motionIsEnd` tests flag bit 0 (set when the frame
wrapped or reached the end). The debug motion viewer's labels give the meanings: `hokan` (blend)
`+0x18`/`+0x04`, `hokahokan` `+0x44`/`+0x48`, `frame` `+0x0C`/`+0x30`.

| offset | field |
|---|---|
| `+0x00` | blend weight (float) |
| `+0x04` | blend length in frames, 0 when no blend runs |
| `+0x08` / `+0x0C` | previous / current frame |
| `+0x10` / `+0x14` | previous / current speed |
| `+0x18` | blend counter |
| `+0x1C` / `+0x20` | previous / current motion data |
| `+0x24` / `+0x28` | previous / current loop flag (0 holds the last frame) |
| `+0x2C` / `+0x30` | previous / current frame count (word 0 / float at `+0xC` of the data) |
| `+0x34` | skeleton header; `+0x38` node array; `+0x3C`/`+0x40` from the header |
| `+0x44` | blend started during a blend (`motionRotate2`, `motionRoot2` then) |
| `+0x4C` | scale (1.0) |
| `+0x50` / `+0x54` / `+0x58` | previous / current / skeleton file base |
| `+0x5C` | flags |

`motionSetCurrent(mp)` makes `mp` current (`motionCur`, `motionSkelOfs` = bone offsets, 12 bytes
a bone). Per bone: `motionBoneOffset` (translate to the joint, times `+0x4C`), `motionRotate`
(blended rotation; `motionRotate2` when `+0x44`), `motionRoot` / `motionRoot2` (root position),
`motionRotateRaw` / `motionRootRaw` (unblended). `motionRootAuto` and `motionRotateAuto` choose
between the two variants and have no callers. Helpers: `lerpf(a, b, t)`, `angleLerp(a, b, t)`
(16-bit angles, wraps past 0x8000).

## Input

- `padInit`: `pdInitPeripheral`, then `padPeri[0..3]` = `pdGetPeripheral` of ports A to D.
- `padDirOn(port, dir)`: `dir` is 0x10 up, 0x20 down, 0x40 left, 0x80 right; true on the d-pad
  bit or the stick past 32.
- `playerReadPad(player)` (human players, port `+0xB64`): `+0xD46` = the four direction bits;
  `+0xD44` = 1 when A or C was pressed this frame (`press & 5`), +2 for B or X
  (`press & 0x402`). `playerInputSide` swaps up/down and left/right when the player's court side
  (`+0xB00`) has the sign of the float at `0x8C287960`. Bits are Shinobi's `PDD_DGT_*` values.
- `playerControl(player)` (one 21 KB function) takes the input from `playerReadPad`, from
  `playerCpuInput` (slots marked in `0x8C287AE0`: `0x8C04264A` when `0x8C287ADC` is 2, else
  `0x8C0573F0`) or, in a replay, from `replayInput` (from a table at `0x8C297A3C` when bit 4 of
  `0x8C295DDC` is set), and records each frame's 4 bytes (`+0xD44`, `+0xD46`) to
  `replayInput + slot * 2400 + replayFrame * 4`. The stick (times the court side) drives running;
  the swing states compare the motion frame with a window from the table at `0x8C104194`
  (index `+0xC5C * 216 + +0xC6C * 108 + +0xC74 * 20`).

## Ball

`Ball` (`0x8C291F24`, 0x8C bytes; `0x8C018AF8` restores it together with the four player
records): `+0x0C` position, `+0x34` velocity (one mini game's code, `0x8C0392C0`, reflects `+0x3C`
by -0.8 and pins `+0x14`).
`ballColliInit` builds the ball's collision object `ballColliObj` (`colliObjInit(pos, obj)`,
a float 2.0 in `fr4`); `ballColliSync` copies position and velocity between the two and
re-enters the object (`colliObjEntry`: up to 64 entries in `colliObjList`, `colliObjCount`).

## Still open

- Where the stick steers the shot while a shot button is held (the inputs reach `playerControl`
  as `+0xD44`/`+0xD46`; the code that turns them into the shot target is not traced yet).
- The swing table at `0x8C104194` and the shot types.
