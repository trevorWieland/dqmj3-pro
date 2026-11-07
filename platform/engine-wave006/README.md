# Recovered UV projection in the measured native scene

This component integrates the frozen wave014 typed C texture-coordinate projection, affine inverse/multiply and indexed trigonometry/SRT with the frozen wave011 material constructor/helpers. Actual owner NaviMap SARC/FLYT/BFLIM resources pass through the source heap/resource services. All 19 materials are constructed and all 17 picture cases render. The two texture-free font materials are constructed; fonts, parts, animation and gameplay remain outside the component.

The component authors its planar FLYT hierarchy and uses the recovered trig/multiply leaves to compose world matrices. It supplies an explicit identity draw view and a 320 by 240 viewport to the recovered texture-coordinate projection. This does not recover the original pane-world constructor, camera setup, virtual draw dispatcher or GPU uploader. No additional original-source bytes are claimed by this integration.

Each picture's material and mapping come from the completely returned source constructor object. Projected coordinates now use the complete recovered projection, including its inverse and SRT dependencies. Basic coordinates use the recovered SRT. All matrices are finite-checked before sampling. A projected zero world scale is rejected before the original projection's undefined inverse-failure path can run. No source heap or resource callback has been expanded to inspect incomplete constructor storage.

The heap is exclusive caller-owned foreign or established-compatible memory with at least four-byte alignment. Windows provides VirtualAlloc memory; Android retains an exclusive direct ByteBuffer. Internal structs retain four-byte packing, while Win32 and JNI boundaries retain their natural platform ABI. No underaligned packed pointer-member address escapes to an API requiring natural pointer alignment. Original texture physical addresses, loader orientation, alternate mip loading and GPU hardware behavior are not reproduced: immutable descriptors provide actual logical decoded dimensions/format, software texture handles, canonical orientation zero and no alternate image.

Geometry, all 19 scalar material audits, every per-picture UV matrix and complete pixels publish through one bank swap for both views. Published storage contains no SDK pointers. Bad layouts/materials/textures, unsupported operations, heap exhaustion, aliasing and singular projected geometry preserve both views and controls. The actual-owner singular control rejects after all 19 constructors have returned, preserving both generations, frames, geometry and material/UV audits.

All 19 complete source material states match original ARM constructor execution with the same actual resource descriptors. All 35 world contexts match original indexed-trig/multiply execution in the component's authored composition order. All 18 texture-coordinate matrices match full original projection/SRT execution byte-for-byte. These original executions are private verification only; no original instructions are linked or mapped in source execution.

The independent reference uses a separate FLYT hierarchy reader, original math-leaf results, independently decoded textures and vectorized NumPy rasterization. Both its float64 and explicit binary32 variants match every application RGBA channel across all 76,800 pixels, SHA-256 `e9519cf31a3c0e80eac432239931e916290c199354208df88b22ddc69e4c9188`. A separate retained analytic-libm geometry reference differs in 14 channels by one level; the receipt preserves every location and signed delta. Owner pane rotations include 60, -65 and 118 degrees, for which analytic sine/cosine differs from the original indexed interpolation. Holding original UV matrices fixed and replacing that geometry math removes all residuals. None of these references is an original GPU framebuffer comparison.

The real Windows executable loads the private owner archive through the source resource queue and verifies 192,000 GDI RGB pixels across both views and letterboxes. Separately compiled wrong-constructor, wrong-projection-scale and wrong-multiply sources all return normally and process 17 pictures, but their framebuffers are rejected by the independent reference. No object/instruction patching or metadata-only negative is used.

The actual Android objects are linked independently and executed in a Cortex-A72 flat CPU model. The source scene renderer, allocator, resource services and recovered math execute as C. Archive/arena addresses exceed four GiB and the arena is four- but not eight-byte aligned. Both view frames and complete material/UV audits must match Windows, including rejection, touch and pause controls. This CPU model does not run Android, a device, AYN Thor or a game.

The ARM64 APK uses minimum API29 and target API36. Validation checks its 14 JNI exports, native ELF load alignment, GNU_RELRO end safety, uncompressed ZIP placement, signatures and original-asset exclusion. A synthetic misaligned RELRO with following writable storage must reject. The alignment rule follows the current [official Android page-size guidance](https://developer.android.com/guide/practices/page-sizes): the RELRO end must be 16 KiB aligned when writable data follows in its LOAD segment. The activity retains SAF import, app-private atomic caching, display enumeration, Presentation, surface generations, one primary clock and controller/touch routing. The isolated device probe found no attached device; physical lifecycle/dual-display behavior remains unverified.

Verification-only NumPy and texture2ddecoder wheels retain their frozen hashes and BSD/MIT license provenance. They are not packaged or linked. Originals, decoded images and private runtime assets remain under `work/platform-engine-wave006`; public evidence contains source, counts, hashes, scope and the small residual-location metadata.

Reproduce from the repository root:

    tools/python/Scripts/python.exe toolscripts/platform_engine_wave006.py
    tools/python/Scripts/python.exe toolscripts/platform_engine_wave006_measure.py
    tools/python/Scripts/python.exe toolscripts/platform_engine_wave006_transaction.py
    tools/python/Scripts/python.exe toolscripts/platform_engine_wave006_android_model.py
    tools/python/Scripts/python.exe -m unittest discover -s tests -p test_platform_engine_wave006.py -v
    tools/python/Scripts/python.exe toolscripts/platform_engine_wave006_seal.py

All predecessor packets remain frozen. Publication and source admission belong to the coordinator.
