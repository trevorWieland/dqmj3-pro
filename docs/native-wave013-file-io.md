# File-backed pattern rules

The separately claimed update ARM function `fn_004c4104` owns the complete 492-byte instruction span `[0x004c4104,0x004c42f0)` and 12 following pool bytes. It connects a measured file/stream view to the frozen normalizer, at-sign scanner and entire tokenizer/NFA/DFA/matcher source graph. The new body is ordinary typed C, with no original executable helpers, output patches, machine interpreter or claimed exact match. All source, object, relocation and linked-span hashes are in `evidence/lanes/wave013-native/file/io/packet.json`.

`pattern_file_view.h` remains the independently frozen prefix/interface: file-buffer pointer at target 36/native 40, candidate-storage pointer at target 44/native 56. It does not identify the whole owning game class. The first prefix byte used here is offset 26, controlling the pre-file at-sign flag pass. Callback slots 9 and 11 receive the unadjusted stream pointer; their native table contains genuine C function pointers, not copied ARM encodings. The verification-only memory provider supplies size/read behavior through compiled C in both reference ARM and source execution. It receives zero recovered-game credit and is excluded from the Android component.

Each of at most 16 candidates is normalized into a raw 128-byte slot (64 UTF16 units), regardless of pointer width. Null candidate detection occurs during this pass, preserving earlier normalized slots. The at-sign pass then updates flags unless the measured bypass byte is nonzero. Both passes precede stream validation, so their side effects survive IO/format errors. The source preserves all three measured 32-bit error values.

The size test has an actual signedness quirk: high-bit sizes pass the positive upper bound. These fixtures qualify them only with returning short reads, including exact requested-count and call-counter comparisons. No successful enormous read is claimed. The file buffer has 16384 raw bytes. Odd successful byte counts compare initialized fixture tail bytes as well; they do not establish the behavior of arbitrary uninitialized storage.

After the UTF16LE BOM check, the original LF path advances its position twice. The first unit after an LF is included in the next pattern but is not itself checked by the outer LF/NUL scanner. A final one-unit unterminated rule is skipped; BOM-only input applies an empty rule. The reconstruction preserves these measured behaviors instead of introducing a conventional line splitter.

There are four separately qualified source observations. Canonical ARM binds each local arena at actual constructor entry, associates writes with that invocation epoch and compares pointer representations plus all defined non-private fixture bytes. The portable ARM helper uses an independently known caller-owned arena. The Windows helper `pattern_process_file_rules` compares the full translated graph with that same independently known live arena. Canonical Windows compares return, persistent normalized/file buffers, flags, provider metrics, immutable inputs and guards; it deliberately makes no scratch-graph or expired-owner identity claim. No native expired object is dereferenced. ARM snapshots inspect raw emulated machine memory, not a C object after lifetime.

The portable API borrows the rule view, candidate strings, flags and stream. The caller supplies one live `FixedArena` and the existing scratch backing storage. Each processed line resets the arena; scratch graph handles do not survive later lines or the invocation. Logical arena requests retain original 16-byte-block budgets while native physical blocks widen to 32 bytes. Raw file/candidate buffers remain raw bytes. Frozen strict complete-field retired-link/quarantine rules remain in force; no partial pointer representation is admitted.

The 103 mixed fixtures cover 0..16 candidates, repeated lines/arena epochs, literal and compiled patterns, fullwidth/kana normalization, at-sign policies, high/invalid flag bits, null candidates, BOM/embedded-NUL errors, short reads, signed size edges and truncation at 63 output units. Candidate inputs in this integration packet are bounded to 120 units; the separate frozen text packet covers all 65536 individual UTF16 values and broader mixed normalization cases. Every unchanged byte of each persistent buffer remains compared. ARM execution checks owned instructions, read/write domains, callee-save registers, SP, flags/interworking and caller-stack preservation. The compiler may rewrite its declared incoming argument slots only with identical values; final caller stack bytes are still equal.

Nine real wrong-source controls compile and return normally on ARM and Windows. They change missing-candidate errors, at-sign policy, BOM handling, signed size gating, short-read validation, LF advancement, final-line handling, raw slot width and invalid-bit masking. Comparisons reject their semantic or defined-memory differences, including a same-return/same-flags extra-read distinction through provider metrics. The proof is finite equivalence evidence, not universal string/file/memory equivalence.

The component also builds as an AArch64 Android API 29 DSO with 16KiB load alignment and no undefined symbols. Its frozen category/case helpers still require qualified nonexecutable Unicode data services. The normalizer tables instead come from the separately frozen public Unicode 17 derivation. No data-byte source credit, native game build, Android device execution or independent clean replay is claimed here. The coordinator owns acceptance and shared integration.

Reproduce with project-local Python:

```text
tools/python/Scripts/python.exe toolscripts/native_wave013_file_io.py
tools/python/Scripts/python.exe toolscripts/native_wave013_file_io_verify.py
tools/python/Scripts/python.exe toolscripts/native_wave013_file_io_functional_proposal.py
```

The attempts record preserves earlier observer/compiler diagnostic attempts and the interrupted first sealing directory. The final producer uses a fresh owned work directory; original inputs and frozen predecessor packets remain unchanged.
