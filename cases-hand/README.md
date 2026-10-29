# Cases supplied by hand

`<function>.json`: a list of cases (the same form as `tests/gen_*/<function>.json`) that step 5 uses as the candidate pool for that function
instead of drawing: the original is run on each, the ones it finishes on are kept, and the pick is by coverage (tools/5-generated/gen_equiv/gen_drv.py `hand_cases`).

For functions whose loops end only on particular values, where drawing finds no case that ends. Say below how a file was made.

- `_div64.json`, `emotFaceMorph.json`: 30 cases each, from a search of random small values (0, 1, 2, 3, 4, 5, 8, 12, 16, 32, 64, 66, 0x100) for the
  registers, pointers into three zeroed-then-filled RAM blocks for r4-r7, and 48 call answers from the same values (plus -1 for emotFaceMorph),
  keeping the ones the original finishes on (168 of 408 and 54 of 280 finished). 2026-10-28.
- `menuListDraw.json`, `menuResultDraw.json`: 30 cases each, from the same search. The original finishes on every vector tried (14,390 and 14,180) and always in the same
  number of steps (895 and 818): these functions read nothing from the registers, so the cases differ only in memory and call answers. 2026-10-29.
