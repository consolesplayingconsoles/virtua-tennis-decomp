# Equivalent functions

Functions whose C behaves like the original on every test case (`tools/equiv.py`: same calls, same final memory, same result). Written by `tools/equiv.py`; the cases are the evidence. Cases that start from a RAM dump (`"dump": "build/ram/<name>.bin"`) need your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/live.py`.

### nlAddVector (`8C0F0520`, 32 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlAddVector.json`
- small integers
- zeros
- signs and fractions
- large values
- vd and vs the same vector
- 3-4-5
- rounding
- opposite signs
- infinity
- vd and vs the same vector

### nlCloseEvent (`8C010A90`, 106 bytes, `src/nlevent.c`)
- equivalent on 6 development and 4 holdout cases, in `tests/nlevent/nlCloseEvent.json`
- null
- only event
- the head
- the tail
- a middle event
- the event to run next
- head with one extra block
- tail with three extra blocks
- middle with two extra blocks, runs next
- only event, extra block

### nlExecuteEvent (`8C010B64`, 38 bytes, `src/nlevent.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/nlevent/nlExecuteEvent.json`
- empty list
- one event
- three events
- stale next-to-run
- two events
- five events

### nlFree (`8C010728`, 182 bytes, `src/heap.c`)
- equivalent on 7 development and 7 holdout cases, in `tests/heap/nlFree.json`
- free a block (previous free, next in use)
- free a block (previous in use, next in use)
- free a block (previous in use, next free)
- free a block (previous free, next free)
- free the first block
- free the last block (previous in use)
- free the last block (previous free)
- previous free, next free, free list reversed
- first block, next free
- only block
- three free neighbours in a row, middle freed
- previous free is the tail of the free list
- next free is in the middle of the free list
- already free block freed again

### nlInitHeapMemory (`8C0105A8`, 50 bytes, `src/heap.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/heap/nlInitHeapMemory.json`
- a 0x1000-byte heap
- a 0x30000-byte heap
- size not a multiple of 4
- a 0x40-byte heap

### nlInnerProduct (`8C0F0590`, 24 bytes, `src/vecmath.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vecmath/nlInnerProduct.json`
- small integers
- zeros
- signs and fractions
- larger values, exact in float (the simulator takes fipr exact)
- 3-4-5
- binary fractions
- opposite signs, exact in float
- infinity

### nlLength (`8C0F05B0`, 32 bytes, `src/vecmath.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vecmath/nlLength.json`
- small integers
- zeros
- signs and fractions
- large values
- 3-4-5
- rounding
- opposite signs
- infinity

### nlMalloc (`8C01060C`, 142 bytes, `src/heap.c`)
- equivalent on 10 development and 8 holdout cases, in `tests/heap/nlMalloc.json`
- 0 bytes (rounds up to 8)
- 1 byte
- exact multiple of 4
- rounds up to a multiple of 4
- takes the whole block (remainder under 16)
- takes the whole block (remainder exactly 16 - splits)
- first fit skips a small block
- first fit skips used blocks
- no block big enough
- takes a block that is not first in the free list
- whole block, middle of the free list
- whole block, tail of the free list
- split the last free block
- empty free list
- huge request
- request 15 over a block
- smallest split, 16 spare
- second free block fits, first does not

### nlScaleVector (`8C0F0690`, 28 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlScaleVector.json`
- small integers, scale 2
- zeros, scale 0
- signs and fractions, scale -0.5
- large values, scale 3
- vd and vs the same vector
- 3-4-5, scale 2
- rounding, scale 0
- opposite signs, scale -0.5
- infinity, scale 3
- vd and vs the same vector

### nlSubVector3op (`8C0F0700`, 32 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlSubVector3op.json`
- small integers
- zeros
- signs and fractions
- large values
- vd is vs1
- 3-4-5
- rounding
- opposite signs
- infinity
- vd is vs1

### set_event (`8C01092C`, 74 bytes, `src/nlevent.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/nlevent/set_event.json`
- empty list
- one event
- size below 20
- allocation fails
- three events
- size 19
- size 20, fails, empty list
