# Native file queue 067

This candidate reconstructs the measured manager, asynchronous request factory, FIFO queue, worker loop and joined destruction path. It composes the frozen request066 C and generated 2,048-byte memory-file fixture. It does not initialize the application's manager singleton, mount Nintendo filesystems, replace the kernel, or run the game.

The original update module is `d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126`. Canonical original instruction ranges and PC-relative data reads are in the coverage receipt. No original executable bytes or game assets are part of the Android package. Nothing in this packet admits source or matching credit.

| Original entry | Authored source | Instruction bytes |
|---|---|---:|
| 0010c550 | queue_manager.c: effect_queue_manager_construct067 | 268 |
| 001529b0 | queue_manager.c: effect_queue_request_async067 | 128 |
| 00162ad0 | queue_store.c: effect_queue_push067 | 392 |
| 00117274 | queue_worker.c: effect_queue_worker_run067 | 256 |
| 001173f8 | queue_worker.c: effect_queue_worker_finalize067 | 304 |
| 00147090 | queue_store.c: effect_queue_store_clear067 | 232 |
| 005e0a38 | queue_manager.c: effect_queue_manager_destroy067 | 48 |

These seven canonical bodies total 1,628 instruction bytes. The static helper expressing entry 0015e304 is retained as a dependency; its joined-zero path has not been independently qualified and it is excluded from this proposal. Actual SDK mutex, allocator, thread-create and trampoline instructions execute on the reference side only and receive no source credit.

## Ownership and native storage

| Object | Target logical bytes | Native physical bytes |
|---|---:|---:|
| Manager | 8 | 16 |
| Worker | 4,136 | 4,168 |
| Queue store | 24 | 48 |
| Allocation block | 12 | 24 |
| Queue node | 12 | 24 |

The initial block holds one sentinel. Subsequent tested capacities are 33 and 65. Their target requests remain 396 and 780 bytes; native backing is 792 and 1,560 bytes. Queue nodes and callbacks retain full native pointers. The opaque-pointer growth case enqueues 70 caller identities and clears them before starting the worker; those identities are never presented as executable tasks.

A task remains caller-owned while queued or being loaded. The qualified caller releases a completed task only at the worker's paused boundary. Manager destruction owns the still-pending tasks, the queue's blocks, an optional deferred task, and the worker, then retires its own storage. This corpus never installs a non-null deferred task, so that branch remains unproved. The original read-error path retains a 2,048-byte allocation after publishing error state 2 and null data; the source preserves and reports that leak rather than repairing it.

## C memory-model domain

The selected service tables, memory bindings and generated filesystem are initialized before thread creation and remain unchanged until join. The tested native provider establishes an actual parked-event handshake before returning from creation, so even the diagnostic platform-state snapshot cannot race thread-identity initialization. This handshake and the later start/resume gates are diagnostic scheduling restrictions, not recovered original game synchronization.

Queue links, count, block growth and free-node reuse are accessed under the supplied recursive mutex. Direct queue clearing occurs only before the worker starts, or after join. `running` and `current` use portable C atomic storage. Stop publication therefore does not race the worker's loop test.

Frozen request066's ready/error byte, lengths, path and payload fields remain ordinary non-atomic C. This component permits caller observations before the start gate, after consuming the worker's actual paused-event notification, or after join. The worker does not resume during those observations or task release. Windows event waits and the Android condition-variable mutex release/acquire pairs establish publication of preceding task writes. The caller resumes the worker only after completing its observations and ownership changes. Microsoft's [memory-ordering contract](https://learn.microsoft.com/en-us/windows/win32/sync/synchronization-and-multiprocessor-issues) includes signaling and waiting operations; the Android provider uses the actual pinned bionic pthread types and functions.

Arbitrary concurrent ready polling, concurrent task destruction, concurrent service rebinding and unobserved access to a running worker are unsupported. Physical success does not qualify such accesses. This packet provides no claim that the current request066 API is safe for unrestricted asynchronous application use.

The worker's original 4,096-byte platform-stack field is retained as an explicit OS-private representation. Windows and Android allocate their actual native thread stacks outside the game allocator ledger. Android reports the measured native stack size separately. It does not feed native stack size, native node size or a native handle pointer into an API interpreting original byte counts or U32 tokens.

## Qualification

Nine sets compare actual original ARM, authored ARM, real Windows and high-address AArch64 CPU execution: idle, one task, pending shutdown, FIFO node reuse, opaque growth, a null queued task, task allocation failure, worker allocation failure and asynchronous read error. Observations include queue/free-list/block membership, typed live task/control/provider state, caller path and payload, complete allocation guards, allocation/release order, typed file-provider operation order and joined ownership outcomes. Failed read/size operations do not authorize reading unwritten outputs: the trace records a not-applicable marker for them. Source ARM/AArch64 use compiled provider suspension points and separate genuine CPU contexts; they are CPU-model runs, not Android OS execution.

Seven ordinary-source mutations test FIFO reversal, wrong growth budgets, skipped pending destruction, false file completion, constructor-unwritten storage, native pointer truncation and omitted provider close. The close control compiles a copied wrong dependency without changing the frozen request066 file. They must return through an actual source operation and fail the independent observer. U32 pointer truncation is explicitly inapplicable to the ARM32 profile.

The Android diagnostic uses real bionic pthreads, recursive mutexes and condition variables, with headers copied from the exact official NDK r30 installation. Its ELF imports are explicitly enumerated from `libc.so`; the component and APK native entry use 16 KiB-compatible load/ZIP alignment. Thor's observed 4 KiB page size does not establish execution on a physical 16 KiB-page device. No graphics, dual-screen presentation or game bootstrap follows from this component result.

The source-only copied replay contains only the selected C/header/Python closure and small original-observation receipts. It reuses tools without copying a tool tree or original image. Fresh source execution rejects historical work reads, including caught stat/list/read attempts, and rejects every original-image constructor attempt. Source artifacts must reproduce exactly.

## Reproduction

Run from the repository root with the project Python:

```text
tools/python/Scripts/python.exe toolscripts/effect_queue067_source_build.py work/queue067-review/build
tools/python/Scripts/python.exe toolscripts/effect_queue067_cohort.py work/queue067-review/build work/queue067-review/cohort
tools/python/Scripts/python.exe toolscripts/effect_queue067_controls.py work/queue067-review/cohort work/queue067-review/controls
tools/python/Scripts/python.exe toolscripts/effect_queue067_tiny.py work/queue067-review/build/build.json work/queue067-review/cohort work/queue067-review/tiny
tools/python/Scripts/python.exe -m unittest tests.test_effect_queue067
```

Original execution requires the owner's separately verified private code and ExHeader. Android header acquisition, build, device capture and verification are separate tools with the `effect_queue067_android_` prefix. Device operations must select Thor serial 84c3269f and only the diagnostic package `org.dqm.queueprobe067`. Retain and verify its captures before clearing that package's data.

## Preserved limits and attempts

Earlier attempts preserve compilation/include-path failures, ctypes return-type observer mistakes, a strict original unregistration guard stop, the missing Android fixture heap initialization and an actual diagnostic start/resume race. Their exact predecessor fixture sources and raw physical captures remain private and hash-bound. The later observer does not erase or relabel those attempts.

Fatal allocator/thread/join failures, non-null deferred ownership, capacities beyond the tested 65-node block, arbitrary native concurrency, original singleton/FS/kernel startup, platform priorities and original-stack equivalence remain outside this finite packet. Full initialized-text and overall project denominators do not change.
