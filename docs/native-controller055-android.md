# Controller execution on physical Android

The unchanged source controller library executed on the physical AYN Thor: Android 13/API 33, ARM64, native bridge disabled, 4,096-byte kernel pages. All 569 programs and 596 calls passed full caller-arena, controller-global, ordered storage-callback and context-observation comparisons against the independent model. Captured executed code and read-only segments match the built library bytes. The source library has no external dependencies or undefined symbols and uses 16 KiB-aligned load segments. A physical 16 KiB-page kernel was not tested.

The first comparison exposed a qualification-model assumption. Earlier fixtures used fixed 256-byte-aligned bases; the real Android arena was naturally aligned with base modulo 256 equal to 224. The unchanged C allocator rounds absolute addresses, while the old model rounded relative offsets. The failure and capture remain preserved. The separate model-v2 correction changes only that alignment calculation and its importing model. All 1,138 earlier fixed-base comparisons remain identical, and 192 independent checks cover 32 naturally aligned base residues. No executed source, memory, register, returned observation or captured byte was altered to obtain agreement.

The Android system linker loads the actual shared library. The JNI adapter supplies declared synthetic caller objects and the same bounded storage provider used in the source qualification. Native pointers remain eight bytes above 4 GiB. Floating control is checked and preserved; raw floating status is captured without a cross-backend status-equality claim. This does not qualify the original production allocator, complete game-owner initialization, a GPU renderer or a native game build. The screenshot was black, so no visible UI or display-pixel claim is made.

Use the workspace Python, pinned compiler and Android/JDK tooling already configured by the project. The component build reads no game image. Corpus verification additionally requires the trusted original extraction for the independently checked initialized category data.

```text
tools/python/Scripts/python.exe toolscripts/build_controller055_android.py
tools/python/Scripts/python.exe toolscripts/native_state055_controller/device/build_probe.py
tools/android-platform-tools-37.0.1/adb.exe install -r work/controller055-probe/package/dqm-controller-component-probe.apk
tools/android-platform-tools-37.0.1/adb.exe shell am start -W -n org.dqm.controllerprobe055/.MaterialActivity --es mode inspect
tools/python/Scripts/python.exe toolscripts/native_state055_controller/device/check_model.py
tools/python/Scripts/python.exe toolscripts/native_state055_controller/device/prepare_cases.py
tools/python/Scripts/python.exe toolscripts/native_state055_controller/device/run_device.py
tools/python/Scripts/python.exe toolscripts/native_state055_controller/device/verify_device.py
```

Use a fresh work output directory; preserve existing receipts and failed attempts before another run. The fixture preparation verifies the live process address and refuses a changed process. The runner retains a compressed capture and exact raw-tar size/hash. Verify the capture and input archive before pruning raw fixture copies. Clear only the diagnostic package's generated data after verification; other applications and saves are outside this workflow. The diagnostic sources and models receive no recovered-game-source credit.
