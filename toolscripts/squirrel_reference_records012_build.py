import json
from pathlib import Path
from unittest.mock import patch

import squirrel_reference_prefix012_build as core
import squirrel_reference_records012_model as model
from squirrel_source_wave002 import sha


ROOT, SOURCE = core.ROOT, core.SOURCE


def inputs(output, variant, dispatch):
    paths = core.sources(output, 'normal', dispatch) + [SOURCE / 'record_storage.c', SOURCE / 'record_runtime.c']
    if variant != 'normal':
        text = (SOURCE / 'record_storage.c').read_text(encoding='utf-8')
        old, new = {
            'missing-call-retain': ('sq_prefix_retain(closure.type, closure.value);', '(void)closure;'),
            'reversed-member-release': (
                '            SqPrefixObject012 secondary = record_object(member + __builtin_offsetof(SqClassMember009, secondary));\n            sq_prefix_release(secondary.type, secondary.value);\n            SqPrefixObject012 primary = record_object(member + __builtin_offsetof(SqClassMember009, primary));\n            sq_prefix_release(primary.type, primary.value);',
                '            SqPrefixObject012 primary = record_object(member + __builtin_offsetof(SqClassMember009, primary));\n            sq_prefix_release(primary.type, primary.value);\n            SqPrefixObject012 secondary = record_object(member + __builtin_offsetof(SqClassMember009, secondary));\n            sq_prefix_release(secondary.type, secondary.value);'),
            'missing-member-secondary-retain': ('record_assign(member + __builtin_offsetof(SqClassMember009, secondary), (const unsigned char *)fill + __builtin_offsetof(SqClassMember009, secondary));',
                                               '__builtin_memcpy(member + __builtin_offsetof(SqClassMember009, secondary), (const unsigned char *)fill + __builtin_offsetof(SqClassMember009, secondary), sizeof(SqObject));')}[variant]
        if text.count(old) != 1:
            raise ValueError('Record control no longer selects a unique operation')
        changed = output / 'record_storage.c'
        changed.write_text(text.replace(old, new), encoding='utf-8')
        paths[-2] = changed
    return paths


def build_arm(output, variant='normal', dispatch='legacy'):
    output.mkdir(parents=True, exist_ok=True)
    original = core.sources
    selected = inputs(output, variant, dispatch)
    with patch.object(core, 'sources', side_effect=lambda unused_output, unused_variant, unused_dispatch='legacy': selected):
        result = core.build_arm(output, dispatch=dispatch)
    if core.sources is not original:
        raise ValueError('Record build changed the frozen builder')
    return result


def build_native(output, variant='normal', dispatch='legacy'):
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    commands, libraries = [], []
    for name, exports in (('msvcrt', ('malloc', 'free', 'printf', 'memcpy', 'memset')), ('kernel32', ('ExitProcess',))):
        definition, library = output / (name + '.def'), output / (name + '.lib')
        definition.write_text('LIBRARY ' + name + '.dll\nEXPORTS\n' + '\n'.join(exports) + '\n')
        commands.append(core.command([linker, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition), '/out:' + str(library)], output / (name + '.log')))
        libraries.append(library)
    fields = ('group', 'size', 'capacity', 'requested', 'fill_kind')
    header = 'typedef struct {' + ' '.join('SqU32 ' + name + ';' for name in fields) + '} RecordCase012;\n'
    header += 'static const RecordCase012 record_cases012[] = {\n'
    header += ',\n'.join('{' + ','.join(str(case[name]) + 'u' for name in fields) + '}' for case in model.cases()) + '\n};\n'
    (output / 'record_cases.h').write_text(header)
    objects = []
    selected = inputs(output, variant, dispatch) + [SOURCE / 'native_record_fixture.c']
    for number, source in enumerate(selected):
        obj = output / f'{number}.o'
        commands.append(core.command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O3', '-fstrict-aliasing',
            '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible',
            '-Wall', '-Wextra', '-Werror', '-DPREFIX_OPAQUE_FULL012=' + str(int(dispatch == 'opaque')),
            '-I', SOURCE, '-I', output, '-c', source, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    exe = output / 'records.exe'
    commands.append(core.command([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup',
        '/subsystem:console', '/nodefaultlib', '/out:' + str(exe), *objects, *libraries], output / 'link.log'))
    commands.append(core.command([exe], output / 'execution.log'))
    observations = [json.loads(line) for line in (output / 'execution.log').read_text().splitlines()]
    android = []
    for number, source in enumerate(selected[:-1]):
        obj = output / f'android-{number}.o'
        commands.append(core.command([compiler, '--target=aarch64-linux-android29', '-std=c11', '-O3', '-fstrict-aliasing',
            '-ffreestanding', '-fno-builtin', '-fPIC', '-Wall', '-Wextra', '-Werror',
            '-DPREFIX_OPAQUE_FULL012=' + str(int(dispatch == 'opaque')), '-I', SOURCE,
            '-c', source, '-o', obj], output / f'android-{number}.log'))
        payload = obj.read_bytes()
        if payload[:6] != b'\x7fELF\x02\x01' or int.from_bytes(payload[18:20], 'little') != 183:
            raise ValueError('Record Android object target differs')
        android.append({'source': source.name, 'sha256': sha(payload)})
    return {'observations': observations, 'exeSha256': sha(exe.read_bytes()), 'commands': commands,
            'androidArm64Objects': android, 'androidDeviceExecution': False, 'wholeGameBuild': False}
