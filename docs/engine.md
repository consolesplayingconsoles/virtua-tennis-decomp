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

- Flat NAOMI records (`nlObjPut`). `polygon_HUMAN_human.bin` is 680 such
  records back to back, no header (read with the layout below, they cover the file exactly); the executable
  points into it with uncached addresses (`0x0C680000` + offset), never `0x8C68....`.
- Record, as `nlObjPut` (`0x8C0F25B0`) and its renderer (`0x8C0F8942`, reached through the
  table at `0x8C0F2C60`) read it:

| offset | field |
|---|---|
| `+0x00` | type: 0 and 1 go to the renderer entries at `0x8C0F2C78` / `0x8C0F2C7C` (both `0x8C0F8940`) |
| `+0x04` | flags (bit 1 clear: `nlObjPut` first turns the light directions, `0x8C0F2B00`) |
| `+0x08` | bounding sphere: centre x, y, z, radius |
| `+0x18` | meshes, until a 0 word; then one word: the record's element count |

| mesh offset | field |
|---|---|
| `+0x00` | PowerVR parameter control word (`0x8000002C`, `0x8000003C`; negative) |
| `+0x04` / `+0x08` / `+0x0C` | ISP/TSP (`0x83000000`), TSP, TCW (texture address 0 on disc) |
| `+0x10` | mesh bounding sphere (culling) |
| `+0x20` | material (a word, 9 or 12, then colours as floats) |
| `+0x4C` | byte size of the strips (used to skip a culled mesh) |
| `+0x50` | strips; the mesh ends at a word that is 0 (record end) or negative (next mesh) |

- Strip: `flags`, `count`, then the elements. Flag bit 3: a triangle list, `count` triangles
  (3 elements each); otherwise a strip of `count` elements. The other bits pick the renderer's
  path (`0x8C0F8D20`, `0x8C0F9080`, `0x8C0F9510`, `0x8C0F9700`).
- Element, told apart by bit 0 of its first word (`0x8C0F8D42`: `tst #1`):
  - bit 0 set: a vertex, 32 bytes: position x, y, z, normal x, y, z, u, v (floats). Bit 0 of
    `x` is the marker, so every stored `x` has its lowest mantissa bit set.
  - bit 0 clear: a reference, 8 bytes: word 0 = `0x40000000` | offset into the renderer's
    transformed-vertex cache (32 bytes a vertex, negative; from the data, not traced); word 1 =
    byte offset from the end of the reference (`ref + 8`) back to the vertex it repeats (the
    renderer reads the vertex there).

- `charaTbl`: 18 records of 108 bytes (the `PL_PIC` sprite list has 16 players plus `MASTER`
  and `king`). `+0` the character's node array (33 node pointers, e.g. `0x8C156C00`), `+4` a
  float (1.0 for most), `+8`/`+0xC` two racket models (in `polygon_COMMON_etc.bin`: centre about
  2.9 units along x, radius 3.6), `+0x44` ten hand models in `polygon_HUMAN_human.bin` (two
  mirrored sets of five).
- `racketModelTbl` / `racketModelTbl2`: eight more racket-shaped models each.

## Skeleton nodes

256-byte structs in the executable (`0x8C138A00`-`0x8C156BFF`, 482 nodes). No code literal
points into the pool: code reaches nodes through `charaTbl[c].+0` (copied to `player+0x38`) and
the nodes' own links.

| offset | field |
|---|---|
| `+0x00` | part id: 1 in every node. `sklDrawNode` skips ids 29 / 7 / 26-28 by the switches at `0x8C294668` and `0x8C29466C`, so with this data nothing is skipped |
| `+0x04` | model (`0x0C68....`) |
| `+0x08` | bind position, relative to the parent (3 floats) |
| `+0x14` | bind rotation in degrees, x, y, z (3 floats) |
| `+0x20` | scale (3 floats, 1.0; z 1.018 in some nodes) |
| `+0x2C` / `+0x30` / `+0x34` | child / sibling / parent |
| `+0x38` | weld source node (always the parent) |
| `+0x3C` | weld count (at most 16) |
| `+0x40` | 16 byte offsets: a vertex in the weld source's model |
| `+0x80` | 16 byte offsets: a vertex in this node's model |
| `+0xC0` | the node's matrix, 16 floats, column by column (`nlGetMatrix`); written by `playerPut` every frame |

- Bind pose: a node's local matrix is `T(+0x08) * Rz(z) * Ry(y) * Rx(x)` (column vectors,
  angles `+0x14` in degrees, standard right-handed rotations) and its world matrix is the
  parent's times that, from the root (no parent). Proof: with it, every welded vertex on disc
  (4,261 pairs, all nodes) satisfies `src = local * dst` to 0.0002 on average; the next best
  order (`XYZ`) is off by 0.17. The disc models are stored in this pose: welds change nothing
  in it.
- No reader of `+0x08`, `+0x14` or `+0x20` found: `playerPut` fills `+0xC0` only with
  `nlGetMatrix` after motion bones, `sklDrawNode` reads `+0`, `+4`, `+0x2C`, `+0x30`, `+0x38`,
  `+0x3C`, the weld tables and `+0xC0`, and the executable has no degrees-to-angle constant (65536/360, pi/180, 4096/360).
  The bind pose is authoring data; in game the pose comes from motions only.
- Character 0's bind pose is a T-pose, y up, feet at y 0, facing +z: head node (array index 7)
  at y 15.58, hands (14, 15) at x +-7.92, y 14.96. The motion skeleton with every key 0 is
  another figure (legs and spine straight, arms straight up): motions do not start from the
  bind pose.
- `charaTbl[c].+0` lists 33 pointers; the indices `playerPut` and `playerDrawModel` use:

| index | part | index | part |
|---|---|---|---|
| 10 (= 11) | chest, draw root | 6 | pelvis |
| 2 / 3 | waist pieces | 7 | head (`7 + [0x8C294668]`; 29 is a second head) |
| 8 / 12 / 0 / 20 | thigh, shin, ankle, foot | 9 / 13 / 1 / 21 | other leg |
| 5 (= 25) / 18 / 19 / 15 | collar, upper arm, forearm, hand (racket side) | 4 (= 23) / 16 / 17 / 14 | other arm |
| 24 / 22 | shoulder pieces | 26-28 | face parts (null for character 0) |

`charaTbl[c].+4` is the character's size: `playerInit` copies it to the motion player's scale
(`+0x4C`), which multiplies every bone offset.

## Drawing a player

- `playerExec(player)`: moves the player by the motion's root step (`player+0xAE8` += root delta
  times speed), runs `playerControl`, then pushes a matrix, translates to `+0xAE8`, rotates Y by
  `+0xB06` and calls `playerPut`.
- `playerPut(player)` poses the skeleton from the motion (below), stores each node's matrix
  (`+0xC0`) and calls `playerDrawModel`. The matrices include the camera and the player's place:
  they are what `nlObjPut` draws with.
- `playerDrawModel(player)`: the hands (`charaTbl[c].+0x44` models on the matrices of nodes 14
  and 15, shapes from `player+0xD10` and `+0xD14`), the body (`sklDrawNode` from node 10;
  character 16 goes through `0x8C01BA80` instead: the same walk, recursive on siblings, plus a
  camera-facing part `0x0C715568` drawn at node id 7), then the racket: `charaTbl[c].+8`, or `+0xC`
  and hand shape 0 when four players are on court (`0x8C287ACC+0x10` is 4 and two of its
  flags are clear), or `racketModelTbl[player+0xD6C]` (`racketModelTbl2` with four players) when
  `+0xD6C` is not -1.
- `sklDrawNode(node)` (`0x8C01B950`), for the node and then each sibling in turn:

```c
nlLoadMatrix(node->mtx);                          /* +0xC0 */
if (node->weldCount > 0 && node->weldSrc) {
    nlPushMatrix(0);
    nlQuickInvertMatrix();                        /* inverse of a rigid matrix: transpose, -R't */
    nlMultiMatrix(node->weldSrc->mtx);            /* M = inv(node) * src: src space to node space */
    for (i = 0; i < node->weldCount; i++) {
        float *s = (float *)((char *)node->weldSrc->model + node->weldA[i]);   /* +0x40 */
        float *d = (float *)((char *)node->model + node->weldB[i]);            /* +0x80 */
        nlCalcPoint(s, d);                        /* d.pos = M * (s.pos, 1) */
        nlCalcVector(s + 3, d + 3);               /* d.nrm = M * (s.nrm, 0), not renormalised */
        *(unsigned *)d |= 1;                      /* restore the vertex marker in x */
    }
    nlPopMatrix(1);
}
nlObjPut(node->model);
if (node->child) sklDrawNode(node->child);
```

  The model is changed in place in RAM (the loaded `polygon_HUMAN_human.bin`) on every draw.
  Order matters: a node reads its parent's vertices after the parent drew (and welded) them.

## Posing a player

- Motion data (`smotdata_cmn.bin`, base `motFileAddr[1]`): a motion is a header with its data
  before it. Header: `+0` key count, `+4` root keys (file offset), `+8` rotation keys (file
  offset), `+0xC` keys per frame (float, 0.5: frames = count / it), `+0x10` root tracks a key,
  `+0x14`/`+0x18`/`+0x1C` root divisors x, y, z. Root key: 3 `s16` per track; rotation key: 3
  `s16` (x, y, z) per bone, 19 bones a key.
- Skeleton header (`motionSet`'s `skel` argument; players use `0x12755C`): `+0` per-bone order
  flags (19 words), `+4` bone count (19), `+0x10` bone offsets (`motionSkelOfs`, 3 floats a
  bone). `+0x14` / `+0x18` point at two more words (1, 0) copied to the motion player.
- Angles are 16-bit (`0x10000` = 360 degrees, `fsca`); rotations are `nlRotateAX/AY/AZ`, each
  multiplying the current matrix on the right (`M = M * R`, standard right-handed matrices).
  `motionRotate(b)` (and `motionRotateRaw`): order flag set: `Rz(-z) * Ry(y)`, clear:
  `Ry(y) * Rz(-z)`; then `Rx(x)`. `motionBoneOffset(b)`: `T(ox*s, oy*s, -oz*s)`, `s` the scale
  (`+0x4C`). `motionBone(b)` = offset then rotation. `motionRoot(t)`: `T(x/dx, y/dy, -z/dz)`
  from root track `t`. Blends: per-axis `lerpf` / `angleLerp` between two keys.
- `playerPut`'s chain (indices into the node array; `B(n)` = `motionBone(n)`; push/pop keep the
  parent):

| node | matrix |
|---|---|
| 6 | `H = P * motionRoot(0) * rot(5) * Ry(0x4000) * Rz(-0x4000)`, `P` the player's matrix (`* Scale(-1, 1, 1)` when `player+0xD4C` is set) |
| 8, 12, 0 | `H * B(7)`, `* B(11)`, `* B(0)` |
| 20 | node 0 `* T(1.16 s, -1.04 s, 0)`, tilted by `Rz` when the toe would go under the ground |
| 9, 13, 1, 21 | the same with bones 8, 12, 1 |
| 2 | `S = H * B(2) * Ry(0x8000)`, then `* Rx(...)` from the legs (not for every character) |
| 3 | `H * Rx(...)` |
| 10, 11 | `C = S * B(9)` |
| 5, 25 | `C * B(4)` |
| 18, 19, 15 | `* B(17)`, `* B(18)` (rebuilt from bone 17's offset plus solved angles while the arm reaches), then the hand from bone 14 rebuilt in world space with the wrist turn `player+0xC8C`; for a still pose, `B(17)`, `B(18)`, `B(14)` |
| 4, 23 | `C * B(3)` |
| 16, 17, 14 | `* B(15)`, `* B(16)`, hand from bone 13 (as above) |
| 24, 22 | shoulder pieces, from the arm matrices (`Rx(-0x4000)`, `Rx(0x4000)` plus a twist) |
| 7 | `C * B(6) * Rz(-0x4000)`, then the look-at turns `Rz`, `Ry` |

  Bone 10 (off the racket hand: `motionBone(10)`, or `motionRootBone(1, 10)` when the motion has
  two root tracks) places the racket. Bone offsets equal the nodes' bind positions (z negated):
  bone 7 `(1.560, 0.149, 1.176)` = node 8's `(1.560, 0.149, -1.176)`, bone 11 = node 12 (4.051),
  bone 0 = node 0 (4.459), bone 6 = node 7 (2.249).
- Standing pose: `playerInit` starts `playerMotionTbl[charaTbl[c].+0x34].+0` (looping), with
  `motionSet(player, ofs, 1, 0x12755C, charaTbl[c].+0, motFileAddr[1])`. `+0x34` is 1 or 2:
  `0x89E50` / `0x8B83C`, 55 keys (110 frames), root in place (y 10.7 to 10.73), the ready
  stance. Key 0 through the chain above puts the feet at y 0.0-0.2 and the knees at y 5.5.

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
