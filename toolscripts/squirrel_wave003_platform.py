import hashlib
import json
import os
import subprocess
from pathlib import Path


def build(root, source, output):
    output.mkdir(parents=True, exist_ok=True)
    compiler = root / 'tools/clang-21/clang.exe'
    linker = root / 'tools/clang-21/ld.lld.exe'
    commands = []

    def run(arguments, name, expected_exit=0):
        result = subprocess.run([str(value) for value in arguments], capture_output=True, timeout=90)
        (output / (name + '.log')).write_bytes(result.stdout + result.stderr)
        commands.append({'argv': [str(value).replace(str(root), '${ROOT}') for value in arguments],
                         'returncode': result.returncode, 'logSha256': hashlib.sha256(result.stdout + result.stderr).hexdigest()})
        if result.returncode != expected_exit:
            raise ValueError('Host controller component failed: ' + name)
        return result

    sources = [source / 'array_controller.c']
    sources += [root / 'source/squirrel-wave002' / name for name in ('vector_resize.c', 'array_create.c')]
    sources += [root / 'src/native/wave005' / name for name in ('chain.c', 'stack.c', 'push.c', 'object.c')]
    libraries = []
    for name, symbols in (('msvcrt', ('malloc', 'realloc', 'free', 'printf')), ('kernel32', ('ExitProcess',))):
        definition = output / (name + '.def')
        definition.write_text('LIBRARY ' + name + '.dll\nEXPORTS\n' + '\n'.join(symbols) + '\n')
        library = output / (name + '.lib')
        run([linker, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition), '/out:' + str(library)], name)
        libraries.append(library)
    flags = ['--target=x86_64-pc-windows-msvc', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
             '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible', '-I', source]
    objects = []
    for path in sources:
        obj = output / (path.stem + '.o')
        run([compiler, *flags, '-c', path, '-o', obj], path.stem)
        objects.append(obj)
    observations = []
    executables = []
    for assertion in (0, 1):
        runner = output / ('runner-' + str(assertion) + '.o')
        run([compiler, *flags, '-DASSERT_CASE=' + str(assertion), '-c', source / 'host_runner.c', '-o', runner], 'runner-' + str(assertion))
        exe = output / ('controller-' + str(assertion) + '.exe')
        run([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup', '/subsystem:console',
             '/nodefaultlib', '/out:' + str(exe), *objects, runner, *libraries], 'link-' + str(assertion))
        execution = run([exe], 'execution-' + str(assertion), 37 if assertion else 0)
        observations.append(json.loads(execution.stdout))
        executables.append({'assertionCase': bool(assertion), 'sha256': hashlib.sha256(exe.read_bytes()).hexdigest()})
    wrong = output / 'wrong_controller.c'
    wrong.write_text((source / 'array_controller.c').read_text().replace('array->reference.references++;', 'array->reference.references += 2;'))
    wrong_object = output / 'wrong_controller.o'
    run([compiler, *flags, '-c', wrong, '-o', wrong_object], 'wrong-controller')
    wrong_exe = output / 'wrong-controller.exe'
    run([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup', '/subsystem:console',
         '/nodefaultlib', '/out:' + str(wrong_exe), wrong_object, *objects[1:], output / 'runner-0.o', *libraries], 'wrong-link')
    wrong_result = run([wrong_exe], 'wrong-execution', 3)
    negative = json.loads(wrong_result.stdout)
    if observations[0]['result'] or observations[0]['objectBytes'] != 16 or observations[0]['publicationReferences'] != 2 or observations[1].get('valid') != 1:
        raise ValueError('Native host VM/publication/assertion contract differs')
    android = []
    for path in sources:
        obj = output / ('android-' + path.stem + '.o')
        run([compiler, '--target=aarch64-linux-android29', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
             '-ffreestanding', '-fno-builtin', '-fPIC', '-I', source, '-c', path, '-o', obj], 'android-' + path.stem)
        content = obj.read_bytes()
        if content[:6] != b'\x7fELF\x02\x01' or int.from_bytes(content[18:20], 'little') != 183:
            raise ValueError('Wrong Android object architecture')
        android.append({'source': path.relative_to(root).as_posix(), 'sha256': hashlib.sha256(content).hexdigest()})
    crt = Path(os.environ['SystemRoot']) / 'System32/msvcrt.dll'
    return {'windowsObservations': observations, 'windowsExecutables': executables,
            'windowsCrtSha256': hashlib.sha256(crt.read_bytes()).hexdigest(),
            'wrongOwnershipActuallyExecuted': True, 'wrongOwnershipExitCode': 3, 'wrongObservation': negative,
            'androidArm64Objects': android, 'androidExecution': False, 'wholeGameBuild': False, 'commands': commands}
