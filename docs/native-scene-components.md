# Native scene components

The published component sources progressively import and render the owner's measured NaviMap resources. They are native Windows/Android components, not playable game builds. They package no original assets, executable images or private inputs.

| Snapshot | Qualified behavior |
| --- | --- |
| `platform/engine-wave002` | Resource worker, scene ownership, checkpoint handling and measured layout geometry |
| `platform/engine-wave003` | Independent BFLIM decoding and the initial textured-material subset |
| `platform/engine-wave004` | All 17 picture materials, original projection/GPU-command qualification and transactional dual views |
| `platform/engine-wave005` | Actual reconstructed material construction driving all 19 material records and all 17 pictures |
| `platform/engine-wave006` | Recovered indexed-trigonometry, matrix and UV-projection C integrated into the measured scene |

The complete constructor at `fn_00554a30` is in `src/native/wave011-material`. Its private reference harness executes original helpers. The separate `helpers` subpacket replaces those executable dependencies with ordinary source C and explicit heap/resource services. Its component vtable is an opaque identity; it does not implement the original virtual class dispatch. No standalone allocator equivalence or additional helper-code credit is claimed.

Construction may produce transient defaults different from the original allocator. The complete constructor overwrites them before use. A read-order observer checks CPU and service reads; a compiled mutation that leaks a transient read is rejected even when the final object is unchanged. The storage and callback contracts exclude observers of incomplete construction, incompatible effective types, unaligned inputs and mutable aliases. Sampler wrap values are 0..2 and filters 0..1; the rejected wrap3 investigation is preserved.

Internal records use the explicitly reviewed four-byte packing profile with real native pointers. Win32/JNI boundaries keep their natural ABI. ARM64 model checks include four-byte-aligned objects that are not eight-byte aligned, above-4GiB addresses, guard preservation, callee-saved state and Android's reserved x18. These model runs do not execute Android's operating system or prove device behavior.

Wave005 compares all constructed materials with original ARM execution using actual BFLIM-derived resource descriptors. An independent float64 renderer and independent texture decoding match every channel of 76,800 framebuffer pixels. Native Windows also verifies 192,000 GDI pixels. A wrong compiled constructor still renders 17 pictures and is rejected by the independent framebuffer reference. Late input, material, texture and heap failures preserve both published views, geometry, material audits, controls and generation.

The ARM64 APK targets API36, supports API29+, and passes signature, ELF-segment and ZIP-entry 16 KiB alignment checks. The activity uses SAF import, app-private caching, display enumeration, `Presentation`, generation-tagged surfaces and one primary clock. Hardware Android/AYN Thor execution remains unverified. Original GPU upload, animation, font/parts rendering, pane-world construction and complete game execution remain outside this snapshot.

The coordinator reran 70 constructor/helper/platform tests and 21 compile-tool guards. All 142 reviewed unit/target compilations pass, including the four material C units under their explicit packing profile. Frozen ready receipts remain unchanged. The isolated `05fb713` committed-tree replay subsequently passed 105 tests and 142 compilations. Constructor and Android-model packets reproduced exactly; helper and scene packets differ only in two COFF timestamp hashes, whose byte-level differences are recorded without binary modification. The native scene executable and core reproduced exactly. APK signing uses a fresh private local key. This evidence remains distinct from matching-source admission and hardware validation.

Each source directory contains its measured scope and reproduction commands. Original archives, decoded resources, binaries, signing material and private execution captures stay under ignored paths. ByteMatch artifacts remain limited to the progress report and reviewed functional companion.

Wave006 adds original-qualified world-context and UV audits. All 35 world contexts, 18 complete projection/SRT matrices and 19 material states agree with original execution under the component composition contract. A separately parsed original-math geometry reference and independent float64 rasterizer match all 307,200 application channels; explicit binary32 rendering also matches. The retained analytic-libm reference has 14 one-level differences at recorded locations, caused by analytic angles versus the original indexed interpolation. This does not qualify the original pane-world constructor or original GPU framebuffer. Twenty-three coordinator tests pass, including rejecting changed compiled constructor/projection/multiply sources and preserving both scenes after a singular projection discovered after all material construction. The actual Android C objects also pass a separate 7,743-call CPU-model run. All hardware/game limits remain.

The minimal Android Java successor and actual operating-system findings are described in [Android OS validation](android-os-validation.md). It fixes RGB565 surface quantization by requesting RGBA8888, with separate direct-x86 and bridged-ARM64 routes. Full native frames and sampled presentation checks retain their distinct scopes. The original activity, physical-device limits and all zero-credit game/source claims remain unchanged.
