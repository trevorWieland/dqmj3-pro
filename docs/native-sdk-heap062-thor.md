# Physical Thor heap source execution

The unchanged admitted heap C executes directly as an ARM64 PIE on the connected
AYN Thor, Android API 33, with native bridging disabled. The public build produces
exactly the same executable bytes as the initial typed fixture. It links only
Android libc and uses the public NDK CRT; no original game objects, executable
image or asset loader is included.

```text
tools/python/Scripts/python.exe -B toolscripts/heap062_android/build.py --output work/heap062-device-build
tools/python/Scripts/python.exe -B toolscripts/heap062_android/run.py --build work/heap062-device-build --output work/heap062-device-proof
```

Use exclusive new work directories, the pinned project compiler/Android runtime
files, and the existing project-local ADB tool. The runner verifies deployment
hashes and retires its processes/forwarded sockets. It runs 24 generic allocator,
12 default/SDK, one registry, one setter and one disabled-state profile. All 39
passed: 3,090 native calls, 3,015 complete arena observations and 296,483,678 streamed
bytes checked against the unchanged independent ownership/interval models. Raw
memory dumps are not stored. High 64-bit addresses and native layouts are real.

The thin qualification bridge uses typed C dispatch and an ADB-forwarded abstract
local socket. Initial terminal-stream experiments are preserved as failed
transport attempts. All authored bridge/host/model inputs, native CRT/libc and
compiler identities are recorded. The host rejects original construction and
generated original-image reads even if caught; no such attempts occurred.

The platform declarations follow the Android Bionic
[read/write ABI](https://android.googlesource.com/platform/bionic/+/refs/heads/main/libc/include/unistd.h).
They are fixture transport bindings, with no recovered-source credit. The
existing opaque thread identity and uncontended service fixture remain explicit;
real OS contention/thread startup is unqualified. No physical instruction trace
or additional function admission is claimed.

ELF load segments satisfy 16 KiB alignment. The actual Thor kernel uses 4 KiB pages;
physical 16 KiB-kernel execution remains unproved. This allocator component does not
establish a complete native game, dual-screen renderer or controller behavior.
