import argparse
import hashlib
import json
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[2]
parser = argparse.ArgumentParser()
parser.add_argument('--output', required=True, type=Path)
args = parser.parse_args()
OUT = args.output.resolve()
if OUT.exists() or not OUT.is_relative_to(ROOT / 'work'):
    raise ValueError('Android heap build requires exclusive work output')
OUT.mkdir(parents=True)
COMPILER = ROOT / 'tools/clang-21/clang.exe'
SYSROOT = ROOT / 'tools/android-r30-minimal/toolchains/llvm/prebuilt/windows-x86_64/sysroot'
LIB = SYSROOT / 'usr/lib/aarch64-linux-android/29'
sources = sorted((ROOT / 'src/native/wave062-heap').glob('*.c'))
sources += sorted((ROOT / 'toolscripts/fixtures/sdk062_heap_v1').glob('*.c'))
sources += [ROOT / 'src/native/wave062-sdk/context/mutex062s.c', ROOT / 'toolscripts/fixtures/heap062_android/bridge.c']
argv = [str(COMPILER), '--target=aarch64-linux-android29', '-fuse-ld=lld', '-std=c11', '-O2',
        '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-outline-atomics', '-fPIE', '-pie',
        '-nostdlib', '-Wall', '-Wextra', '-Werror', '-Wl,-z,max-page-size=16384', '-Wl,--build-id=none',
        '-Wl,--dynamic-linker=/system/bin/linker64', '-Wl,-e,_start',
        '-I' + str(ROOT / 'src/native/wave062-heap'), '-I' + str(ROOT / 'src/native/wave062-sdk/include'),
        str(LIB / 'crtbegin_dynamic.o'), *map(str, sources), '-L' + str(LIB), '-lc',
        str(LIB / 'crtend_android.o'), '-o', str(OUT / 'heap062-device')]
result = subprocess.run(argv, capture_output=True)
(OUT / 'build.log').write_bytes(result.stdout + result.stderr)
inputs = sources + [ROOT / 'src/native/wave062-heap/heap062ac.h', ROOT / 'src/native/wave062-sdk/include/sdk062s.h',
                    LIB / 'crtbegin_dynamic.o', LIB / 'crtend_android.o', LIB / 'libc.so', COMPILER]
pins = [dict(path=p.relative_to(ROOT).as_posix(), bytes=p.stat().st_size,
             sha256=hashlib.sha256(p.read_bytes()).hexdigest()) for p in inputs]
(OUT / 'build.json').write_text(json.dumps(dict(argv=argv, exitCode=result.returncode, inputs=pins,
    selectedSingleSdkEnvironmentDefinition=True, oldAllocateTranslationUnitExcluded=True,
    sourceCreditGranted=0, wholeGameClaimed=False), indent=2) + '\n')
if result.returncode:
    raise RuntimeError(result.stderr.decode('utf-8', errors='replace'))
print('Built standalone Android heap source fixture')
