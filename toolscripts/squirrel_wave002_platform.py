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

    def command(arguments, name, must_succeed=True):
        result = subprocess.run([str(value) for value in arguments], capture_output=True, timeout=90)
        (output / (name + '.log')).write_bytes(result.stdout + result.stderr)
        commands.append({'argv': [str(value).replace(str(root), '${ROOT}') for value in arguments],
                         'returncode': result.returncode,
                         'logSha256': hashlib.sha256(result.stdout + result.stderr).hexdigest()})
        if must_succeed and result.returncode:
            raise ValueError('Platform component command failed: ' + name)
        return result

    sources = [source / 'vector_resize.c', source / 'array_create.c', root / 'src/native/wave005/chain.c']
    libraries = []
    for name, symbols in (('msvcrt', ('malloc', 'realloc', 'free', 'printf')), ('kernel32', ('ExitProcess',))):
        definition = output / (name + '.def')
        definition.write_text('LIBRARY ' + name + '.dll\nEXPORTS\n' + '\n'.join(symbols) + '\n')
        library = output / (name + '.lib')
        command([linker, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition), '/out:' + str(library)], name)
        libraries.append(library)
    windows = []
    for path in sources + [source / 'host_runner.c']:
        obj = output / ('windows-' + path.stem + '.o')
        command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-ffreestanding', '-fno-builtin',
                 '-fno-stack-protector', '-ffunction-sections', '-mno-incremental-linker-compatible', '-I', source,
                 '-c', path, '-o', obj], 'windows-' + path.stem)
        windows.append(obj)
    executable = output / 'array-lifecycle.exe'
    command([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup', '/subsystem:console',
             '/nodefaultlib', '/out:' + str(executable), *windows, *libraries], 'windows-link')
    result = command([executable], 'windows-execution')
    observation = json.loads(result.stdout)
    if observation['result'] != 0 or observation['pointerBytes'] != 8 or observation['objectBytes'] != 16 or observation['releaseCallbacks'] != 1:
        raise ValueError('Host typed-array ownership or ABI test failed')
    wrong = output / 'wrong-vector.c'
    text = (source / 'vector_resize.c').read_text()
    wrong.write_text(text.replace('references++;', 'references += 2;'))
    wrong_object = output / 'wrong-vector.o'
    command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-ffreestanding', '-fno-builtin',
             '-fno-stack-protector', '-mno-incremental-linker-compatible', '-I', source,
             '-c', wrong, '-o', wrong_object], 'windows-wrong-compile')
    wrong_exe = output / 'wrong-array-lifecycle.exe'
    command([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup', '/subsystem:console',
             '/nodefaultlib', '/out:' + str(wrong_exe), wrong_object, *windows[1:], *libraries], 'windows-wrong-link')
    negative = command([wrong_exe], 'windows-wrong-execution', must_succeed=False)
    negative_observation = json.loads(negative.stdout)
    if negative.returncode == 0 or negative_observation['result'] != 5:
        raise ValueError('Native wrong-source ownership control did not fail semantically')
    android = []
    for path in sources:
        obj = output / ('android-' + path.stem + '.o')
        command([compiler, '--target=aarch64-linux-android29', '-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-ffreestanding', '-fno-builtin',
                 '-fPIC', '-I', source, '-c', path, '-o', obj], 'android-' + path.stem)
        content = obj.read_bytes()
        if content[:6] != b'\x7fELF\x02\x01' or int.from_bytes(content[18:20], 'little') != 183:
            raise ValueError('Android object has the wrong architecture')
        android.append({'source': path.relative_to(root).as_posix(), 'sha256': hashlib.sha256(content).hexdigest()})
    crt = Path(os.environ['SystemRoot']) / 'System32/msvcrt.dll'
    return {'windowsExecution': observation, 'windowsExeSha256': hashlib.sha256(executable.read_bytes()).hexdigest(),
            'windowsWrongSourceActuallyExecuted': True, 'windowsWrongSourceExitCode': negative.returncode,
            'windowsWrongSourceObservation': negative_observation,
            'windowsCrtSha256': hashlib.sha256(crt.read_bytes()).hexdigest(), 'androidArm64Objects': android,
            'androidExecution': False, 'wholeGameBuild': False, 'commands': commands}
