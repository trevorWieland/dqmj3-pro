import io
import json
import subprocess
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_reference_prefix012_model as model
from squirrel_source_wave002 import sha


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave012'


def command(arguments, log):
    result = subprocess.run([str(value) for value in arguments], capture_output=True, timeout=120)
    log.write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('Prefix component command failed: ' + str(log))
    return {'argv': [str(value).replace(str(ROOT), '${ROOT}') for value in arguments], 'returncode': 0,
            'logSha256': sha(result.stdout + result.stderr)}


def sources(output, variant, dispatch='legacy'):
    paths = [SOURCE / name for name in ('reference_prefix.c', 'vector_values.c', 'prefix_fixture.c', 'reference_dispatch.c', 'legacy_storage.c')]
    if dispatch not in ('legacy', 'opaque'):
        raise ValueError('Unknown callback family selection')
    if dispatch == 'opaque': paths[3] = SOURCE / 'reference_dispatch_opaque.c'
    if variant in ('legacy-cached-destroy-pointer', 'legacy-cached-destroy-size'):
        text = paths[4].read_text(encoding='utf-8')
        marker = 'SqVector *sq_prefix_vector_destroy_legacy(SqVector *vector)\n{\n'
        if text.count(marker) != 1:
            raise ValueError('Legacy destroy provider changed')
        before, body = text.split(marker)
        if variant.endswith('pointer'):
            body = '    unsigned char *cached = read_values(vector);\n' + body
            body = body.replace('read_object(read_values(vector) + index * sizeof(SqObject))', 'read_object(cached + index * sizeof(SqObject))')
        else:
            body = '    SqU32 cached = read_word(vector, __builtin_offsetof(SqVector, size));\n' + body
            body = body.replace('index < read_word(vector, __builtin_offsetof(SqVector, size));', 'index < cached;')
        changed = output / paths[4].name
        changed.write_text(before + marker + body, encoding='utf-8')
        paths[4] = changed
        return paths
    if variant != 'normal':
        index, old, new = {
            'wrong-count-offset': (0, '__builtin_offsetof(SqPrototypePrefix011, references)', '(__builtin_offsetof(SqPrototypePrefix011, references) + 4)'),
            'release-before-publication': (0, '    *destination = incoming;\n    sq_prefix_release(previous.type, previous.value);',
                                            '    sq_prefix_release(previous.type, previous.value);\n    *destination = incoming;'),
            'skipped-shrink-reference': (1, 'SqU32 index = requested;', 'SqU32 index = requested + 1;'),
            'legacy-release-before-publication': (4, '    __builtin_memcpy(destination, &incoming, sizeof(incoming));\n    sq_prefix_release(previous.type, previous.value);',
                                                 '    sq_prefix_release(previous.type, previous.value);\n    __builtin_memcpy(destination, &incoming, sizeof(incoming));')}[variant]
        text = paths[index].read_text(encoding='utf-8')
        expected = 2 if variant == 'wrong-count-offset' else 1
        if text.count(old) != expected:
            raise ValueError('Prefix semantic negative no longer selects its operation')
        changed = output / paths[index].name
        changed.write_text(text.replace(old, new), encoding='utf-8')
        paths[index] = changed
    return paths


def build_arm(output, variant='normal', dispatch='legacy'):
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    objects, commands = [], []
    for number, source in enumerate(sources(output, variant, dispatch)):
        obj = output / f'{number}.o'
        commands.append(command([compiler, '--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-std=c11', '-O3',
            '-fstrict-aliasing', '-DPREFIX_OPAQUE_FULL012=' + str(int(dispatch == 'opaque')), '-ffreestanding', '-fno-builtin', '-ffunction-sections', '-fdata-sections',
            '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-Wall', '-Wextra', '-Werror', '-I', SOURCE,
            '-c', source, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    script = output / 'layout.ld'
    script.write_text('SECTIONS { .text 0xa10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) } '
        '.data 0xa40000 : { *(.data*) } .bss : { *(.bss*) *(COMMON) } '
        'sq_reallocate = 0x18388c; sq_deallocate = 0x19d680; sq_prefix_unhandled012 = 0xa80000; /DISCARD/ : { *(.ARM.exidx*) *(.comment*) } }\n')
    elf = output / 'prefix.elf'
    commands.append(command([linker, '-flavor', 'gnu', '-m', 'armelf', '-T', script, *objects, '-o', elf], output / 'link.log'))
    data = elf.read_bytes()
    parsed = ELFFile(io.BytesIO(data))
    sections = [{'name': section.name, 'address': section['sh_addr'], 'data': section.data(), 'size': section['sh_size']}
                for section in parsed.iter_sections() if section['sh_flags'] & 2 and section['sh_size']]
    symbols = {symbol.name: {'address': symbol['st_value'], 'bytes': symbol['st_size']}
               for symbol in parsed.get_section_by_name('.symtab').iter_symbols() if symbol.name and symbol['st_shndx'] != 'SHN_UNDEF'}
    functions = {symbol.name: {'address': symbol['st_value'], 'bytes': symbol['st_size']}
                 for symbol in parsed.get_section_by_name('.symtab').iter_symbols()
                 if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']}
    if parsed['e_type'] != 'ET_EXEC' or parsed['e_machine'] != 'EM_ARM' or any(section['sh_type'] in ('SHT_REL', 'SHT_RELA') for section in parsed.iter_sections()):
        raise ValueError('Prefix component is not a closed linked ARM program')
    return {'sections': sections, 'symbols': symbols, 'functions': functions, 'elfSha256': sha(data), 'commands': commands}


def build_native(output, variant='normal', binding='core', dispatch='legacy'):
    if binding not in ('core', 'legacy'):
        raise ValueError('Unknown portable reference provider selection')
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    commands, libraries = [], []
    for name, exports in (('msvcrt', ('malloc', 'free', 'printf', 'memcpy', 'memset')), ('kernel32', ('ExitProcess',))):
        definition, library = output / (name + '.def'), output / (name + '.lib')
        definition.write_text('LIBRARY ' + name + '.dll\nEXPORTS\n' + '\n'.join(exports) + '\n')
        commands.append(command([linker, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition), '/out:' + str(library)], output / (name + '.log')))
        libraries.append(library)
    fields = ('operation', 'old_kind', 'new_kind', 'alias', 'initial_count', 'size', 'capacity', 'requested', 'callback_action')
    header = 'typedef struct { ' + ' '.join('SqU32 ' + field + ';' for field in fields) + ' } PrefixCase012;\n'
    header += 'static const PrefixCase012 prefix_cases012[] = {\n'
    header += ',\n'.join('{' + ','.join(str(case[field]) + 'u' for field in fields) + '}' for case in model.cases()) + '\n};\n'
    (output / 'prefix_cases.h').write_text(header)
    objects = []
    for number, source in enumerate(sources(output, variant, dispatch) + [SOURCE / 'native_prefix_fixture.c']):
        obj = output / f'{number}.o'
        commands.append(command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O3', '-fstrict-aliasing',
            '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible',
            '-Wall', '-Wextra', '-Werror', '-DPREFIX_OPAQUE_FULL012=' + str(int(dispatch == 'opaque')), '-DPREFIX_LEGACY012=' + str(int(binding == 'legacy')),
            '-I', SOURCE, '-I', output, '-c', source, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    exe = output / 'prefix.exe'
    commands.append(command([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup',
        '/subsystem:console', '/nodefaultlib', '/out:' + str(exe), *objects, *libraries], output / 'link.log'))
    commands.append(command([exe], output / 'execution.log'))
    observations = [json.loads(line) for line in (output / 'execution.log').read_text().splitlines()]
    android = []
    for number, source in enumerate(sources(output, variant, dispatch)):
        obj = output / f'android-{number}.o'
        commands.append(command([compiler, '--target=aarch64-linux-android29', '-std=c11', '-O3', '-fstrict-aliasing',
            '-DPREFIX_OPAQUE_FULL012=' + str(int(dispatch == 'opaque')), '-ffreestanding', '-fno-builtin', '-fPIC', '-Wall', '-Wextra', '-Werror', '-I', SOURCE,
            '-c', source, '-o', obj], output / f'android-{number}.log'))
        payload = obj.read_bytes()
        if payload[:6] != b'\x7fELF\x02\x01' or int.from_bytes(payload[18:20], 'little') != 183:
            raise ValueError('Prefix Android object has the wrong target')
        android.append({'source': source.name, 'sha256': sha(payload)})
    return {'observations': observations, 'exeSha256': sha(exe.read_bytes()), 'commands': commands,
            'androidArm64Objects': android, 'androidDeviceExecution': False, 'wholeGameBuild': False}
