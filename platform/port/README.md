# Platform interface: headers and contracts

This directory is the system-service boundary for the reconstruction. It is a
header-only interface: no `.c` file here is compiled into the measured image,
and none of these headers emits a function, a variable or a table.

```c
#include "../../platform/port/thread.h"

dqm3_thread_mutex_lock(&mutex);
```

Reconstructed code includes the header for the service it uses and calls the
`dqm3_*` name. It does not include an SDK header, name an `nn::`/`nw::`
symbol, write a split address, execute an `svc`, or touch a hardware register.

## Headers

| header | subsystem | portable? |
| --- | --- | --- |
| `platform.h` | common types, result codes, tick conversion | n/a |
| `memory.h` | process/linear/custom heaps, cache maintenance | easy |
| `file.h` | archive mounts, positional file I/O, async reads | easy to medium |
| `thread.h` | threads, recursive mutexes, semaphores, events, arbiter, TLS | medium |
| `time.h` | one monotonic clock and sleeping | trivial |
| `system.h` | process lifetime, fatal, named service sessions, system info | medium |
| `graphics.h` | PICA200 command submission, textures, shaders, display | hard |
| `audio.h` | CSND voices and the DSP path | hard |
| `input.h` | buttons, touch, circle pad, motion, text entry | easy to medium |
| `network.h` | optional online stack (pia/nex/NPF) | very hard, optional |

A backend implements the declarations in each header it supports. Headers that
are not implemented should return `DQM3_ERR_UNSUPPORTED` from their
initialisation entry point, which is a defined outcome rather than a crash.

## Conventions

- Results are `Dqm3Result`: `DQM3_OK` or a negative `DQM3_ERR_*`. A backend
  must not invent positive error values.
- A function that returns a handle uses `DQM3_HANDLE_INVALID`; one that returns
  a pointer uses `NULL`; one that returns a count returns 0. The header says
  which, and the out-parameter carries the detail.
- Times are nanoseconds on one monotonic clock (`Dqm3Time`). The measured
  original tick rate, 268,111,856 Hz, is available as
  `DQM3_TICKS_PER_SECOND` for code that must keep the original arithmetic.
- Threading rules are per object: a file handle or texture is owned by one
  thread; a mutex or service session is usable from any thread. The header
  states the rule at the object, not in a general sentence.
- Storage owned by the caller is passed as a pointer; the backend never frees
  it. Storage owned by the backend is returned as an opaque handle and is
  released with the matching `destroy`/`close`/`release` call.
- No header includes a system header. A port's implementation file includes
  whatever its platform requires; the interface stays freestanding.

## The original-image backend

`DQMJ3_PLATFORM_BACKEND_ORIGINAL` is the mode in which a `dqm3_*` name resolves
to the measured split function that implements that service. The mechanism is a
preprocessor alias to the split symbol, not a wrapper: the compiler emits the
same `bl` the original emitted, so the measured function stays byte-identical.
`thread.h` and `system.h` carry the first two verified aliases; the other
headers stay declarations until a call site and its split address are proved.
`DQMJ3_PLATFORM_BACKEND_PORTABLE` selects the declarations for a port backend.
With neither macro defined the headers are declarations only, which is the mode
the reconstruction build currently uses. See the top-level `platform/README.md`
for the proof obligation that goes with converting a call site.
