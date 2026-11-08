import hashlib
import json
from pathlib import Path
import subprocess

W = Path(__file__).resolve().parent
R = next(p for p in W.parents if (p / 'AGENTS.md').is_file())
H = R / 'work/native-asset062-sdk-owner-core-v1/source'
S = W / 'source'
PROFILES = {
    'arm': ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-mfloat-abi=hard', '-mfpu=vfpv2'],
    'windows': ['--target=x86_64-pc-windows-msvc', '-mno-incremental-linker-compatible'],
    'a64': ['--target=aarch64-none-elf'],
}
HEAP = ['heap_registry', 'heap_initialize', 'heap_split', 'heap_allocate',
        'heap_free', 'heap_default', 'heap_proxy', 'heap_object', 'heap_size',
        'heap_sdk', 'fixture_heap', 'fixture_default']
PUBLIC = ['context/mutex062s.c', 'context/context062s.c',
          'context/map062s.c', 'context/map_initialize062s.c',
          'startup/mutex_initialize062u.c']
EXPORTS = ['fixture_heap_layout062ac', 'fixture_heap_reset062ac',
           'fixture_default_bind062ac', 'heap_default_initialize062ac',
           'heap_identity062ac', 'heap_proxy062ac', 'heap_registry062ac',
           'heap_methods062ac', 'heap_environment062ac', 'sdk_environment062s',
           'registry_methods062ad', 'registry_environment062ad',
           'sdk_clock_mutex_methods062u', 'sdk_mutex_class_identity062u',
           'sdk_mutex_tag_identity062u', 'fixture_registry_layout062ad',
           'fixture_registry_root062ad', 'fixture_registry_bind062ad',
           'fixture_registry_owner062ad', 'fixture_registry_locking062ad',
           'fixture_registry_disposer062ad', 'heap_default_free062ac',
           'registry_initialize062ad', 'registry_destroy062ad',
           'registry_register062ad', 'registry_unregister062ad', 'registry_find062ad',
           'fixture_registry_events062ad', 'fixture_registry_event_count062ad',
           'fixture_registry_mutex_methods062ad', 'fixture_registry_observe062ad']


def build(output=None, mutation=None):
    output = output or W / 'build-attempt001'
    output.mkdir(exist_ok=False)
    sources = [H / (name + '062ac.c') for name in HEAP]
    sources += [R / 'src/native/wave062-sdk' / name for name in PUBLIC]
    sources += [S / name for name in ['lookup062ad.c', 'register062ad.c',
                 'remove062ad.c', 'lifetime062ad.c', 'bindings062ad.c',
                 'fixture_registry062ad.c', 'fixture_observer062ad.c']]
    includes = [S, H, R / 'src/native/wave062-sdk/include',
                R / 'src/native/wave062-runtime/include', R / 'src/native/wave062-owner/include']
    commands = []
    for target, flags in PROFILES.items():
        dest = output / target
        dest.mkdir()
        objects = []
        for path in sources:
            path = (mutation or {}).get(path.name, path)
            obj = dest / (path.stem + '.o')
            objects.append(obj)
            argv = [str(R / 'tools/clang-21/clang.exe'), *flags, '-std=c11', '-O2',
                    '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
                    '-ffunction-sections', '-fdata-sections', '-Wall', '-Wextra', '-Werror',
                    '-Dsdk_allocate062s=heap_sdk_allocate062ac',
                    '-Dregistry_observer_acquire_endpoint062ad=sdk_mutex_acquire062s',
                    '-Dregistry_observer_release_endpoint062ad=sdk_mutex_release062s',
                    *['-I' + str(p) for p in includes], '-c', str(path), '-o', str(obj)]
            result = subprocess.run(argv, capture_output=True, text=True)
            commands.append(dict(argv=argv, status=result.returncode,
                                 output=result.stdout + result.stderr,
                                 sourceSha256=hashlib.sha256(path.read_bytes()).hexdigest()))
            if result.returncode:
                raise RuntimeError(commands[-1])
        artifact = dest / ('heap062ac.dll' if target == 'windows' else 'heap062ac.elf')
        if target == 'windows':
            argv = [str(R / 'tools/clang-21/ld.lld.exe'), '-flavor', 'link', '/dll',
                    '/noentry', '/nodefaultlib', '/timestamp:0', '/out:' + str(artifact),
                    *['/export:' + name for name in EXPORTS], *map(str, objects)]
        else:
            argv = [str(R / 'tools/clang-21/ld.lld.exe'), '-Ttext=0x6000000',
                    '-e', 'registry_initialize062ad', '-o', str(artifact), *map(str, objects)]
        result = subprocess.run(argv, capture_output=True, text=True)
        commands.append(dict(argv=argv, status=result.returncode, output=result.stdout + result.stderr))
        if result.returncode:
            raise RuntimeError(commands[-1])
    (output / 'build.json').write_text(json.dumps(commands, indent=2) + '\n')
    return output


if __name__ == '__main__':
    print(build())
