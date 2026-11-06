# Wave 005 — VM stack, object lifetime and chain helpers

Status: ready for coordinator review. The five-function, 196-byte claim closes a useful source component around the earlier private array-controller experiment. Two functions / 28 bytes match exactly. Three functions are explicitly nonmatching behavior-tested drafts and receive zero matching-source credit. Nothing is accepted by this lane's report alone.

| ARM identity | Measured role | Original instruction bytes | Compiled bytes | Exact object / genuine linked span |
|---|---|---:|---:|---|
| `0x157ff4` | Visible VM stack count | 16 | 16 | yes / yes |
| `0x173d40` | Absolute object-stack slot pointer | 12 | 12 | yes / yes |
| `0x173d1c` | Push object onto VM stack | 36 | 36 | no / no |
| `0x19e864` | Object assignment and reference lifetime | 96 | 96 | no / no |
| `0x19e8c4` | Insert reference node at chain front | 36 | 32 | no / no |

`claim.json` predates authored C and excludes all prior lane ownership. The private array root, vector resize, array factory and game reallocator remain unclaimed related controllers. The earlier controller proof is not promoted into this packet.

## Ordinary source and interfaces

The C uses typed VM, tagged-object, reference-node and virtual-release views. It expresses stack indexing, count subtraction, push, assignment with reference accounting, and linked-list insertion directly. It contains no assembly, extracted code, register instruction transcription or compiler-output edits. Numerical object tags and partial target layout offsets are measured; original class names and complete VM definitions are not claimed.

The header asserts the original ARM object stride and relevant offsets. Pointer-bearing logical objects naturally use the host pointer size outside ARM32: for example the port's object stride can differ from the original eight-byte target object. Host portability therefore requires typed logical-object fixtures, not a claim that raw ARM RAM bytes can be reinterpreted unchanged on a 64-bit host. This packet establishes no Windows/Android execution result.

The actual scalar/pointer return contracts are checked for count, slot and assignment. Push and chain insertion are treated as void operations; incidental r0 values are not invented public results. Nonleaf LR and condition flags remain AAPCS volatile state. Every run still requires a genuine sentinel return, preserved callee-save registers, restored SP and the correct CPU mode. Leaf LR is separately checked.

## Compiler and direct dependency closure

The selected public toolchain is the pinned Clang/LLD distribution, ARM `mpcore`, ARM mode, `-O2`, freestanding function sections, omitted frame pointer and disabled sibling-call optimization. Three bounded profile attempts are preserved in `compiler-attempts.json`; matching modern output does not identify the historical compiler.

Push's object contains a genuine `R_ARM_CALL` relocation to the owned assignment helper. It is preserved and resolved by LLD against the source definition. Raw object exactness and the final linked comparison remain distinct; no relocation or instruction bytes are patched. The final five-function ELF has no unresolved direct symbols and contains source implementations for all five helpers. Native comparison uses the immutable original bodies separately. Source execution supplies no original helper machine code.

The release method is an explicit caller-provided vtable callback. A separate, genuinely compiled C fixture increments a release-observation field. Both original and source call that same fixture code through the typed vtable. An observer additionally records destination publication and reference counts at callback entry. This is not an original game destructor or an assertion that all game object lifetimes are reconstructed.

## State proof and negative controls

There are 62 actual original returns and 62 actual source returns across five helpers. Every owned original and compiled instruction address is observed. Each case uses fresh randomized surrounding memory and registers. Checks compare the entire declared VM/object/node arena to an independent state model, enforce bounded field read/write sets, preserve stack bytes outside the declared dead ABI frame, and verify real return/ABI obligations.

The object/push cases cover scalar copies, new references, old-reference retention and deletion, transfers to a different reference, same-node references, full self-assignment and a zero-reference fresh incoming object. Self-assignment must increment the incoming reference before releasing the previous one, avoiding premature release. Deletion cases observe the newly published destination and increased incoming count at the release callback. Chain cases cover empty, one-node and two-node lists, including clearing the new head's previous link and repairing the old head's backlink. Count cases stay within valid nonoverflowing VM counter states; slot cases include negative indices that remain within the supplied underlying array.

Each of five genuinely compiled wrong-source variants returns before semantic rejection: wrong visible count, wrong slot index, wrong top increment, wrong incoming reference increment, and wrong previous-link assignment. Wrong-root objects are linked with the correct other helper implementations; a failing helper dependency is not substituted to manufacture rejection. Unmapped-pointer faults are separately tested and receive zero successful-return credit.

Six unittest controls cover the actual native count body crossing a code-page boundary, self-assignment lifetime, publication seen by release, both chain links, void-return treatment and unmapped-VM rejection. The first runtime attempt failed before execution because the fixture loader mapped only a function's starting code page. The fix maps every intersecting page; the failed receipt remains private under `work/wave005-native/build/attempt-1.json`. No game input or source/object bytes changed for that repair.

The fixture does not establish every possible object graph, arbitrary destructor semantics, concurrency, full VM/script admission, a full source-only executable, game execution, Windows execution or Android execution. Stack bytes below the returned frame are not invented observable outputs; 128 bytes of dead frame are excluded while all live stack boundaries are protected.

## Reproduction

```powershell
& .\tools\python\Scripts\python.exe -m unittest discover -s src/native/wave005 -p test_oracle.py -v
& .\tools\python\Scripts\python.exe .\toolscripts\native_wave005.py
```

An independent work namespace is supported with `--output work/wave005-native/NEW_NAME`. Original, claim, census, source, header, oracle and fixture identities are frozen and checked. The full native Ghidra census is corroborated by direct original caller-word decoding, complete disassembly extents, closed direct dependencies and complete bounded instruction observations.

Public semantic references: the author's [Squirrel 2.2.5 manual and license](https://squirrel-lang.org/doc/squirrel2.html), the author's [historical 2.2.5 release listing](https://sourceforge.net/projects/squirrel/files/squirrel2/squirrel%202.2.5%20stable/), and the author's [current VM source](https://github.com/albertodemichelis/squirrel/blob/master/squirrel/sqvm.cpp). The current source is a version-qualified reference, not proof of identical historical implementation. The old source-archive fetch failed TLS certificate verification; no TLS bypass or source execution was used. No upstream source archive, Nintendo SDK or proprietary compiler is a dependency of this reconstruction.
