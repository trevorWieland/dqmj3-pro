# Wave 008 — flag mutation and state publication

This lane claims 37 complete ARM functions / 1,024 original instruction bytes. Six functions / 112 bytes match their entire original object and genuinely linked spans. The remaining 31 functions are behavior-tested nonmatching drafts. Accepted-source credit remains zero pending coordinator replay and admission.

The exact candidates are `0x17fcfc` (20B), `0x20b99c` (20B), `0x20b9b0` (20B), `0x24d76c` (16B), `0x309c0c` (20B) and `0x67411c` (16B). They clear an argument mask, set/clear constant flag bits, or clear the high word bit. All other addresses in the frozen claim remain owned drafts, including redundant-instruction originals that modern Clang simplifies.

`claim.json` predates authored source and pins exclusions from waves 001–007. Every claimed interval has a contiguous complete Ghidra body and at least one decoded original B/BL instruction inside a qualified caller body. The verifier rechecks original module, span, census, caller-word and source/layout hashes. It rejects calls, literal references, external branch targets, unresolved symbols and body relocations. These leaf functions have zero measured pool bytes.

The C uses partial typed records with measured field offsets and ordinary flag operations, indexed bit masks, a small bitmap, payload updates followed by dirty flags, and signed-state publication. Each function has its own partial view; neither names nor complete historical classes are recovered. Pointer-bearing host objects use their natural pointer sizes, so a future host port must construct typed logical objects rather than reinterpret original ARM RAM.

The selected open profile is pinned Clang/LLD targeting `arm-none-eabi`, `mpcore`, ARM mode, `-O2`, freestanding function sections and no unwind tables. The two limited source-expression profiles are preserved privately and summarized in `compiler-attempts.json`. No assembly, embedded original code, register transcription, object editing, relocation editing, NOP insertion or compiler-output patching is used. Historical compiler identity remains unknown.

The complete source family is genuinely linked with LLD at canonical function placements. Wrong-source functions are separately compiled from ordinary C with one extra flag XOR before the final return and linked at isolated placements. Source execution uses only these compiled source bodies; original bodies execute separately as immutable validation inputs. The family ELF has no runtime or platform entry point and is not a game executable.

The bounded suite has 2,036 original and 2,036 compiled-source actual sentinel returns. Every owned original and compiled instruction address is observed. Each conditional ARM instruction is additionally sampled against its pre-instruction NZCV state; both predicate outcomes must be observed. All sixteen incoming NZCV combinations occur for every function. Flags after return remain AAPCS volatile.

Each run has fresh randomized registers and two 64KiB surrounding-memory arenas. An independent value-level model predicts return and all memory bytes; field read/write sets are enforced byte by byte. Both arenas must agree in full, including bytes outside the mutated fields. Callee-saved registers, SP, execution mode, the actual return address and live stack boundaries are checked. At most 128 bytes below SP form an explicitly dead ABI frame. Stack-pop returns are admitted only with these runtime guards.

All 37 genuinely compiled wrong-source functions reach the return sentinel before their wrong flag effects are rejected by the independent model. Faults and guard stops are not counted as successful negative-control returns. Twelve unit tests separately protect the nonboolean arguments, signed-state/full-word result distinction, old-bit return, nullable skipped update, bitmap/context pointer distinction, dirty halfword truncation and defined indexing domains.

Observed R0 behavior is explicit. Most functions return the captured outer/inner record handle. `0x63b0d8` returns the embedded context at root + `0x5000`. `0x654c58` returns root + byte index, while its write is a further `0xdc` bytes away. `0x170b94` returns the old low bit. The two dirty setters return the full updated flags word. `0x688818` returns the outer handle on its skipped path and inner handle on update. `0x69e710` / `0x69e748` return the full sign-extended/composed word while storing only its low byte. These contracts do not identify historical C signatures; the packet records that ambiguity.

Admission requires initialized, aligned typed objects and valid owned storage for all accessed fields. Fixture outer and inner objects are separate. Indirect records are nonnull except the two measured nullable replacement functions and the skipped equal-state path of `0x688818`. Its updating path requires a valid inner object. Signed states are in the representable signed-byte domain; tested states include -128, -1, 0, 1, 2 and 127. Flag values, masks, force and enable arguments cover zero, nonzero, high-bit and full-word patterns without inventing boolean normalization.

Unmasked byte bit indices are restricted to 0–7 and the word bit index to 0–31. `0x655760` explicitly masks the full u32 argument to three low bits. The one-based word helper permits 1–32 or its measured 255 sentinel. The relative halfword helper requires mathematical argument minus the initialized byte base in 0–15. The bitmap helper uses a supplied 64-byte array and signed index 0–511; no negative signed-shift or out-of-array pointer claim is made. Bounded tests are not universal equivalence or concurrency proofs.

The first aggregate attempt stopped at a verifier limitation: Clang used a legitimate POP-to-PC epilogue that the static guard initially rejected. Its failure receipt is retained privately. That attempt also held an earlier in-memory oracle while a declared-domain check was tightened on disk, so it is explicitly inadmissible. A subsequent complete replay passed before explicit conditional-predicate instrumentation was added. Final packet inputs and source hashes come from the later fresh replay.

Reproduce from the repository root:

```powershell
& .\tools\python\Scripts\python.exe -m unittest discover -s src/native/wave008 -p test_oracle.py -v
& .\tools\python\Scripts\python.exe .\toolscripts\native_wave008.py --output work/wave008-native/independent-replay
```

An absolute script path and absolute output path also support another working directory. `ready.json` freezes source, oracle, tests, verifier, claim, layout and packet metadata. Original game content and private samples are not copied into tracked source/evidence. This lane proves no integrated module, full engine, native Windows game, native Android game or universal source-coverage percentage.
