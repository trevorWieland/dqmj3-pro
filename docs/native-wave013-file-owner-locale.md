# Owning-rule locale selection

The two complete update ARM functions in this packet are `fn_004c46e8`, the 544-byte rule-file selector, and `fn_00453b34`, the 224-byte language policy used by that selector. Source is ordinary typed C with an explicit configuration-service interface. The remaining owning-rule allocation, mount, apply and teardown methods are separate work.

Both original functions have discontiguous instruction ranges. The selector owns 40/176/328 instruction-byte fragments and two indexed dispatch tables of 28/44 bytes. Language policy owns 76/108/40 instruction-byte fragments, two 28-byte dispatch tables and four scalar literals. Readers validate every dispatch target against the complete owned instruction ranges. These data bytes are mapped readonly, excluded from executable ranges and receive no instruction/source-byte credit. Frozen census ranges are unchanged.

The SDK region getter has a four-byte NOP entry at `0x00454388`, falling through the 28-byte getter at `0x0045438c`. Both entries are mapped without duplicating physical code. Neither SDK entry earns new function credit. The original oracle executes those instructions, the 56-byte raw region request and the 72-byte raw configuration request. It observes real `svc 0x32` requests using the actual CP15 TLS command buffer, then supplies declared successful configuration-service replies. It never replaces original function bodies.

The measured region header `0x20000` and language block `0xA0002` agree with the public [libctru CFG implementation](https://github.com/devkitPro/libctru/blob/master/libctru/source/services/cfgu.c). This supports the interface naming and wire fields, without asserting a historical compiler/library version. Reference requests must have the expected handle, headers, one-byte size, output descriptor `0x1C` and private-frame output address. The initialized session handle is fixture state, not an actual device/session claim.

Source execution calls genuine compiled C configuration providers with full native pointers. It maps no original executable or data. The source language policy preserves the measured allowed-language masks and fallback values. A guarded U32 shift expresses the original register-shift behavior for byte values above 31 without undefined C shifts. The selector preserves file IDs, pair ordering, count updates and every untouched output byte, including unsupported-region outputs.

The 7,345 finite cases cover every language byte for nine stable region profiles, every region byte with selected languages, and separately labeled synthetic changing-region replies. Changing replies exercise logic that need not be reachable on stable real hardware, including a region-six first query followed by a region-one policy query. They are not evidence that a physical console can change secure region between calls. All services succeed in this packet; diagnostic/error behavior, kernel IPC implementation, device initialization and concurrent binding are outside the qualified domain.

The reference observer records output count at every actual SVC request. Source providers record that same independently known count through a typed pointer. A delayed-initialization mutation returns normally with identical final output count/file IDs, but fails the service observation comparison. Eight further returning mutations change masks, file IDs, pair count/fallbacks, shift behavior, policy query use or untouched outputs. Every mutation is rejected on ARM and actual Windows after normal return.

All 8192 fixture bytes are compared with no masks. ARM checks owned instructions, read/write bounds, callee-save registers, SP, interworking and a 512-byte private frame. Instruction-address coverage is separate from conditional-outcome coverage and universal equivalence. Windows uses addresses above 32 bits. The Android API 29 AArch64 DSO excludes verification providers, links without undefined symbols and uses 16 KiB load alignment. No native game, Android device, source acceptance or independent clean replay is claimed.

Reproduce with project-local Python:

```text
tools/python/Scripts/python.exe toolscripts/native_wave013_file_owner_locale_qualification.py
tools/python/Scripts/python.exe toolscripts/native_wave013_file_owner_locale.py
tools/python/Scripts/python.exe toolscripts/native_wave013_file_owner_locale_verify.py
tools/python/Scripts/python.exe toolscripts/native_wave013_file_owner_locale_functional_proposal.py
```

The typed service table and context must remain live throughout each invocation; bindings are not a synchronization primitive. Shared registries, configuration and predecessor sources/proofs remain unchanged.
