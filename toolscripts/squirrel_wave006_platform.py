import json
import subprocess

import squirrel_wave006_build as builder
from squirrel_source_wave002 import sha


def build(root, source, output):
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = root / 'tools/clang-21/clang.exe', root / 'tools/clang-21/ld.lld.exe'
    commands = []

    def run(arguments, name, expected=0):
        result = subprocess.run([str(value) for value in arguments], capture_output=True, timeout=90)
        log = result.stdout + result.stderr
        (output / (name + '.log')).write_bytes(log)
        commands.append({'argv': [str(value).replace(str(root), '${ROOT}') for value in arguments], 'returncode': result.returncode, 'logSha256': sha(log)})
        if result.returncode != expected:
            raise ValueError('Host dispatch fixture failed: ' + name)
        return result

    libraries = []
    for name, symbols in (('msvcrt', ('malloc', 'realloc', 'free', 'printf', 'memcpy', 'memset')), ('kernel32', ('ExitProcess',))):
        definition = output / (name + '.def')
        definition.write_text('LIBRARY ' + name + '.dll\nEXPORTS\n' + '\n'.join(symbols) + '\n')
        library = output / (name + '.lib')
        run([linker, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition), '/out:' + str(library)], name)
        libraries.append(library)
    flags = ['--target=x86_64-pc-windows-msvc', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
             '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible', '-I', source]
    objects = []
    for number, path in enumerate(builder.sources() + [source / 'host_runner.c', source / 'host_generators.c']):
        obj = output / (str(number) + '-' + path.stem + '.o')
        run([compiler, *flags, '-c', path, '-o', obj], path.stem)
        objects.append(obj)
    exe = output / 'native-dispatch.exe'
    run([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup', '/subsystem:console',
         '/nodefaultlib', '/out:' + str(exe), *objects, *libraries], 'link')
    observed = json.loads(run([exe], 'execution').stdout)
    if observed['result'] or observed['cases'] != 41 or observed['pointerBytes'] != 8 or observed['objectBytes'] != 16:
        raise ValueError('Unexpected native host typed frame layout/behavior')
    wrong = output / 'wrong-native-call.c'
    wrong.write_text((source / 'execute.c').read_text().replace('0x05000002u, (SqU32)argument', '0x05000004u, (SqU32)argument'))
    wrong_obj = output / 'wrong-native-call.o'
    run([compiler, *flags, '-c', wrong, '-o', wrong_obj], 'wrong-compile')
    wrong_exe = output / 'wrong-dispatch.exe'
    run([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup', '/subsystem:console',
         '/nodefaultlib', '/out:' + str(wrong_exe), wrong_obj, *objects[1:], *libraries], 'wrong-link')
    wrong_observed = json.loads(run([wrong_exe], 'wrong-execution', 3).stdout)
    android = []
    for number, path in enumerate(builder.sources()):
        obj = output / ('android-' + str(number) + '-' + path.stem + '.o')
        run([compiler, '--target=aarch64-linux-android29', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
             '-ffreestanding', '-fno-builtin', '-fPIC', '-I', source, '-c', path, '-o', obj], 'android-' + path.stem)
        content = obj.read_bytes()
        if content[:6] != b'\x7fELF\x02\x01' or int.from_bytes(content[18:20], 'little') != 183:
            raise ValueError('Wrong Android object target')
        android.append({'source': path.relative_to(root).as_posix(), 'sha256': sha(content)})
    return {'windowsObservation': observed, 'windowsExeSha256': sha(exe.read_bytes()),
            'wrongSourceActuallyExecuted': True, 'wrongSourceExitCode': 3, 'wrongSourceObservation': wrong_observed,
            'androidArm64Objects': android, 'androidDeviceExecution': False, 'wholeGameBuild': False, 'commands': commands}
