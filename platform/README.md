# Platform port surface

This is the system-service boundary for the reconstruction. It is the rule in
`AGENTS.md` made concrete:

> Every call into Nintendo system services goes through a named interface under
> `platform/`. Reconstructed game code must not call `nn::`, `nw::` or raw
> system primitives directly.

A port should be "implement ten headers", not "search twenty-six thousand
functions". The headers are in [`port/`](port/), each function is named for what
the service does rather than what the SDK calls it, and each declaration says
what it guarantees, how it fails, and how it behaves across threads and time.
The headers are freestanding: no SDK header, no system header, no platform
type.

**Current state.** The interface exists and is compiled into the reconstructed
translation units. No reconstructed C function calls a raw platform primitive
today; the system boundary in the recovered source is carried by injected
service tables, and the measured functions are engine code above that line.
That is a finding, not a shortcut: the headers are where the next wave of
reconstruction must attach, and adding them to the current tree changes no
measured byte (proof below).

## The surface that was found

Measured from the pinned update image (`generated/update-content0/code.bin`,
8,159,232 bytes, 7,051,280 initialized text bytes) and the native census
(`config/symbols.txt`, 26,990 functions after the 2026-11-12 extra-range
promotion; see `docs/2026-11-12-extra-range-inventory.md`). The analysis is
reproducible with the scripts described at the end.

### Raw system calls

| primitive | distinct | sites | functions |
| --- | ---: | ---: | ---: |
| `svc`/`swi` numbers | 32 | 588 | 469 |
| CP15 thread/process-ID reads (`mrc p15`) and writes (`mcr p15`) | — | 349 | 315 |
| `svcSendSyncRequest` (`svc 0x32`) service entries | — | 296 | 292 |

The SVC numbers cover process control, thread create/exit/priority/affinity,
sleep, mutex/semaphore/event create and release, address arbitration, handle
close, synchronous waits, memory query and the IPC send. The CP15 accesses are
the thread pointer and process-ID reads that every SDK mutex, TLS access and IPC
buffer uses; they are the reason the original's `nn::os` layer cannot be
replaced by a naive `std::mutex`.

`svcSendSyncRequest` is the important number. A function that issues it is one
service operation: it fills the thread's IPC buffer at the thread pointer and
asks a service session to execute it. The 292 entry points break down by image
address block:

| block | entries | subsystem |
| --- | ---: | --- |
| `0x0010xxxx`-`0x0019xxxx` | 87 | OS, filesystem, GPU, sound, input, config services |
| `0x0044xxxx`-`0x0045xxxx` | 58 | filesystem archive and file protocol |
| `0x0051xxxx`-`0x0052xxxx` | 147 | online stack (pia, nex, NPF, http, ac, friends, uds) |

286 of the 292 have at least one direct caller in the census; those callers are
288 distinct functions and account for 392 direct call edges. The remaining
entry points are reachable through function tables or are not called at all.
The online block is larger than the operating-system block: a port that wants
online play is not implementing one header, it is porting a protocol stack.
That is why `network.h` is marked optional.

The inventory did not identify a direct PICA200 or DSP register path in the
game's user-mode code. Rendering and audio are mediated by service sessions,
which is consistent with the CTR-SDK user-mode model. That is good news for a
port: the platform replaces the *protocol and its results*, not a register map.
The analysis is a static scan of PC-relative literals and `movw`/`movt` pairs;
it is evidence, not a proof that no indirect register access exists.

### What reconstructed source already names

The 296 authored `.c` files (132 headers, 18,063 physical lines) define 1,362
split functions. Their text contains 100 `fn_*` references that are never
defined in the source; every one is an engine service (Squirrel VM helpers,
message window, motion world, audio-effect bindings, field context queries).
None is a raw CTR-SDK call.

The system boundary is instead represented by 53 unique service-table
declarations with 184 function-pointer capability fields, introduced by earlier
waves so the recovered SDK code could be exercised on Windows and ARM models.
They are the de-facto interface the platform layer formalises:

| capability | representative tables |
| --- | --- |
| file/archive open, size, read, close, mount, alias | `PatternFileOwnerServices`, `EffectFileBootstrapServices068`, `EffectFileSdkServices069`, `EffectRequestFiles066`, `ArchiveServices` |
| memory allocate/release | `ResourceHeapServices062`, `HeapMethods062ac`, `MaterialHeapVtable`, `EffectRequestHeapOperations066` |
| threads, mutexes, waits, TLS, arbitration | `EffectQueueServices067`, `SdkPlatform062s`, `SdkMutexMethods062s`, `ArbiterApi062a`, `PatternOwnerSyncServices` |
| clocks, timers, sleeps | `SdkClockMethods062u`, `SdkClockState062u`, timer tables |
| GPU address, flush, transfer, texture, device | `EffectDeviceServices065`, `EffectTextureServices065`, `EffectCachedEngineServices065` |
| service sessions, IPC send, handle close, fatal | `EffectFileSdkServices069`, `EffectFileServices072`, `SdkPlatform062s` |
| object/task/binding lifecycles above the platform line | remaining tables |

The categories overlap where a table serves two purposes; they are a map of
where the boundary already is, not a second census. The table is also the reason
the platform headers can be specific: the names and signatures a porter needs
are already written down, scattered across the tree.

## Headers

| header | replaces | porter must implement |
| --- | --- | --- |
| [`platform.h`](port/platform.h) | common types | no |
| [`memory.h`](port/memory.h) | `nn::os` heap, linear memory, cache ops | yes |
| [`file.h`](port/file.h) | `nn::fs`, archive mounts, read/write IPC | yes |
| [`thread.h`](port/thread.h) | `nn::os` threads, mutexes, events, arbiter, TLS | yes |
| [`time.h`](port/time.h) | `nn::os` tick and sleep | yes |
| [`system.h`](port/system.h) | `nn::os` process/fatal, `nn::srv` sessions | yes |
| [`graphics.h`](port/graphics.h) | GSP/PICA200 command submission and textures | yes for rendering |
| [`audio.h`](port/audio.h) | CSND voices and DSP firmware path | yes for sound |
| [`input.h`](port/input.h) | HID buttons/touch/motion/swkbd | yes for play |
| [`network.h`](port/network.h) | pia/nex/NPF/http/ac/friends | optional |

## What a porter must solve

**Must implement first (the game does not boot without them).**

1. `system.h`: process lifetime, fatal, one named service session mechanism.
2. `memory.h`: a process heap and a physical/linear heap for device buffers.
3. `file.h`: the `rom:`, `patch:`, `data:`, `sdmc:` and `save:` namespaces over
   the port's storage, with 64-bit offsets and the asynchronous read worker.
4. `thread.h` and `time.h`: the file worker, recursive mutexes and the
   monotonic clock. Windows' `WaitOnAddress` returns early and must be looped
   on the predicate, exactly as the measured arbiter does.
5. `input.h`: a frame snapshot, including a keyboard mapping and a controller
   mapping.

**Trivially portable.** `time.h` is one clock. The archive layer is a path
mapper plus a file object; a port can back it with a directory or a package.
`input.h` is a snapshot copy. `memory.h` is a heap wrapper. None of these needs
cycle accuracy.

**Genuinely hard: the PICA200 renderer.** The game's draw path is not a
retained scene graph; it is a command stream built for a 2006-era fixed-function
GPU. A faithful port has to reproduce:

- command-buffer submission order and the split between CPU and GSP;
- tiled textures (8x8 Morton order), the format list in `graphics.h`, and the
  original's swizzle/addressing modes;
- TEV stages, combiner registers and the fixed-function fog/alpha-test state;
- separate vertex and fragment program binaries (DVLP/DVLE), including the
  original's attribute layout and uniform banks;
- two screens, the 400x240 top screen, the 320x240 bottom screen and the 3D
  interleave when enabled;
- framebuffer format, depth range, clear and swap timing.

`graphics.h` deliberately exposes a smaller semantic API (frame, texture,
shader, draw, present) rather than a command encoder. That is a portability
choice: a backend maps those operations to its own GPU. The cost is that the
engine's material layer must be adapted to the smaller API; the alternative,
exposing PICA200 command words, would make every port reimplement the GPU
protocol.

**Genuinely hard: the DSP audio path.** CSND plays hardware voices from wave
buffers; the DSP runs Nintendo firmware for ADPCM decode and mixing. A port has
to reproduce voice allocation and stealing, the 32-voice limit, DSP-ADPCM
decode, streaming loop points, per-bus gain, the audio frame (about 1/60 s) and
the fact that stop takes effect on the next frame. A naive `mixer.play()` call
per sound effect will not preserve the original's voice exhaustion and timing.

**Optional and large: the online stack.** 147 of 292 service entries are pia,
nex, NPF, http, ac, friends and uds. `network.h` declares the minimum for a
port that keeps online play; a port that drops it returns
`DQM3_ERR_UNSUPPORTED` from `dqm3_network_initialize`. Save data and local play
do not depend on it.

**Out of scope for this interface, and why.** Camera, IR, NFC, the eShop and
the system applets are not reached by the reconstructed source. `input.h` has
one applet-shaped exception, `dqm3_input_text`, because name entry is
game-visible and every port needs a policy for it. Everything else can be
stubbed until a reconstructed function needs it.

## Zero-cost proof

The rule is only credible if the interface costs nothing on the original
target. Two builds of the same commit were compared: one before any include was
added, one after the interface was compiled into 98 translation units.

Baseline: `6825a5f`, output `work/baseline-build`.
After: same tree plus `platform/port/` and the includes, output
`work/platform-build`.

The measured result is identical:

- `report.json` is byte-identical:
  `266cd00e374efd1a1dfaeb5f7c4f45f9c91e1831fe8c3150d609c0a9120615fa`,
  with `total_code=7051280 matched_code=20480 matched_functions=1134 units=124`.
- the **linked image is byte-identical**:
  `29a4fe90788e9422fe8e0768c4c99a3fd6d4201022f7b0fe96e3b1fc8dddf930`,
  8,159,232 bytes, the same 1,175 source functions, 1,134 measured functions,
  22,068 instruction bytes, 1,460 data bytes, and the same 41 differing
  functions.
- all 929 compiled `.o` files are identical after replacing the one string
  that legitimately differs, the build output directory (`work/baseline-build`
  versus `work/platform-build`) that armcc embeds in each object's metadata.
  Zero object differences remain; the includes add declarations only, and no
  macro, `static inline`, initializer or layout changes in measured mode.
- `link.json` and `object-map.json` differ only in the output paths they
  record (`queuePath`, `linkedImage`, `placement.image`); every measured field
  is equal, as the identical image hash shows.

If a future change to the interface makes any measured function differ, the
design is wrong. The correct response is to fix the design, not to adjust the
measurement; the reconstruction's credit rule already enforces that.

### How to add a call site

1. Find the service the function uses in the corresponding header.
2. Replace the raw call (`fn_XXXXXXXX`, IPC word, SVC, register access) with the
   `dqm3_*` name.
3. In `DQMJ3_PLATFORM_BACKEND_ORIGINAL` mode, bind the name to the split symbol
   with a preprocessor alias (as `thread.h` and `system.h` do for the two
   verified mutex operations and the break path). An alias emits exactly the
   original `bl`; a wrapper does not.
4. Rebuild and compare the object bytes. A changed object means the alias
   signature, storage layout or argument order is wrong.
5. Only then add the split address to the verified table in the header, with
   the instruction witness that proves the mapping.

The interface is not allowed to become a second implementation. It is a naming
and contract layer over the original addresses; the port implementation is the
only other body of code.

## Reproducing the inventory

The counts come from three disposable inputs, none of which is part of this
change: the split in `config/symbols.txt`, the per-function corpus under
`work/corpus/`, and the measured image under `generated/update-content0/`. The
method was:

- walk every split function's extents and decode them with Capstone, counting
  `svc`/`swi` numbers and `mrc`/`mcr p15` accesses;
- read the corpus callee lists to find which functions issue `svc 0x32` and
  how many distinct callers reach each of those entries;
- group the entries by their image address block, which separates the OS,
  filesystem and online libraries;
- parse the authored headers for the service-table declarations and their
  function-pointer fields, then classify those fields by the capability they
  name;
- compare the authored source text against the split and the source census to
  find the 100 undefined `fn_*` references and the 1,362 measured names.

The analysis scripts and the before-build receipts were kept under `work/` and
are not committed: they are measurement helpers, not build inputs. The build is
still `build.py`; the source is still `src/native`; the platform interface is
`platform/port`.

## Earlier platform experiments

The other directories under `platform/` are earlier Windows/Android experiment
waves (`app-shell`, `engine-wave002` through `engine-wave007`, `memory-wave001`
and `memory-wave002`, `filesystem-service075`, `kernel32.def`,
`native-inputs.json`, `runner.c`). They are portable-build experiments for
recovered functions and app-shell code. They are not the system-service
boundary and are not included by reconstructed source. Their READMEs and frozen
inputs still describe those separate results; the original top-level text is
kept verbatim in [README-experiments.md](README-experiments.md).
