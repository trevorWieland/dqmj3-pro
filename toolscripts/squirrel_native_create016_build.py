import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_reference_prefix012_build as core
from squirrel_source_wave002 import sha


ROOT, COMMON = core.ROOT, core.SOURCE
SOURCE = ROOT / 'source/squirrel-wave016'


def sources(output, variant):
    paths = [SOURCE / name for name in ('native_create.c', 'vm_storage.c', 'fixture.c')]
    paths += [COMMON / name for name in ('reference_prefix.c', 'reference_dispatch_opaque.c', 'mixed_runtime.c')]
    paths += [ROOT / 'source/squirrel-wave011' / name for name in ('prototype_release.c', 'vtables.c')]
    paths += [ROOT / 'source/squirrel-wave013' / name for name in ('native_closure_release.c', 'vtables.c')]
    if variant != 'normal':
        index, old, new = {
            'wrong-capture-slot': (0, 'sq_native_creation_top016(vm);', 'sq_native_creation_top016(vm) - (free_variables - index - 1);'),
            'missing-capture-retain': (0, '    sq_prefix_retain(destination->type, destination->value);', '    (void)destination;'),
            'reload-shared-after-allocate': (0, '    closure->reference.prefix.vtable =', '    state = sq_native_creation_shared016(vm);\n    closure->reference.prefix.vtable ='),
            'cached-value-before-reallocate': (0, '    if (vector->capacity <= vector->size) {', '    SqPrefixObject012 cached = *incoming;\n    if (vector->capacity <= vector->size) {'),
            'late-pop-publication': (1, '    publish_top(vm, top);\n    SqPrefixObject012 empty;', '    SqPrefixObject012 empty;'),
            'missing-temporary-retain': (0, '    sq_prefix_retain(temporary.type, temporary.value);', '    (void)temporary;')}[variant]
        text = paths[index].read_text(encoding='utf-8')
        if text.count(old) != 1:
            raise ValueError('Native creation control lost its unique operation')
        text = text.replace(old, new)
        if variant == 'cached-value-before-reallocate':
            text = text.replace('*destination = *incoming;', '*destination = cached;')
        if variant == 'late-pop-publication':
            text = text.replace('    sq_prefix_assign(values(vm) + top, &empty);', '    sq_prefix_assign(values(vm) + top, &empty);\n    publish_top(vm, top);')
        changed = output / paths[index].name
        changed.write_text(text, encoding='utf-8')
        paths[index] = changed
    return paths


def arm(output, variant='normal'):
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    objects, commands = [], []
    for number, path in enumerate(sources(output, variant)):
        obj = output / f'{number}.o'
        commands.append(core.command([compiler, '--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-std=c11', '-O3',
            '-fstrict-aliasing', '-ffreestanding', '-fno-builtin', '-ffunction-sections', '-fdata-sections',
            '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-Wall', '-Wextra', '-Werror',
            '-I', SOURCE, '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    script = output / 'native-create.ld'
    script.write_text('SECTIONS {\n'
        '.rodata.base 0x81d020 : { KEEP(*(.rodata.sq_prototype_base_vtable011)) }\n'
        '.rodata.prototype 0x81e52c : { KEEP(*(.rodata.sq_prototype_vtable011)) }\n'
        '.rodata.native 0x81e540 : { KEEP(*(.rodata.sq_native_closure_vtable013)) }\n'
        '.text.callable 0xa0ff00 : { KEEP(*(.text.fixture_native_callable016)) }\n'
        '.text 0xa10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) }\n'
        '.data 0xa40000 : { *(.data*) } .bss : { *(.bss*) *(COMMON) }\n'
        'fixture_original_create016 = 0x176fc8; fixture_original_pop016 = 0x17ff68;\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.llvm_addrsig) } }\n')
    elf_path = output / 'native-create.elf'
    commands.append(core.command([linker, '-flavor', 'gnu', '-m', 'armelf', '--no-undefined', '-T', script, *objects, '-o', elf_path], output / 'link.log'))
    payload = elf_path.read_bytes()
    elf = ELFFile(io.BytesIO(payload))
    sections = [{'name': section.name, 'address': section['sh_addr'], 'size': section['sh_size'], 'flags': section['sh_flags'],
                 'data': section.data()} for section in elf.iter_sections() if section['sh_flags'] & 2 and section['sh_size']]
    symbols = {symbol.name: symbol['st_value'] for symbol in elf.get_section_by_name('.symtab').iter_symbols() if symbol.name and symbol['st_shndx'] != 'SHN_UNDEF'}
    functions = [{'name': symbol.name, 'address': symbol['st_value'], 'size': symbol['st_size']}
                 for symbol in elf.get_section_by_name('.symtab').iter_symbols() if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']]
    for name, address in (('sq_prototype_base_vtable011', 0x81d020), ('sq_prototype_vtable011', 0x81e52c), ('sq_native_closure_vtable013', 0x81e540)):
        if symbols[name] != address:
            raise ValueError('Mixed source table placement differs')
    return {'sections': sections, 'symbols': symbols, 'functions': functions, 'elfSha256': sha(payload), 'commands': commands}


def native(output, variant='normal'):
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    commands, libraries = [], []
    for name, exports in (('msvcrt', ('malloc', 'free', 'printf')), ('kernel32', ('ExitProcess',))):
        definition, library = output / (name + '.def'), output / (name + '.lib')
        definition.write_text('LIBRARY ' + name + '.dll\nEXPORTS\n' + '\n'.join(exports) + '\n')
        commands.append(core.command([linker, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition), '/out:' + str(library)], output / (name + '.log')))
        libraries.append(library)
    objects = []
    for number, path in enumerate(sources(output, variant) + [SOURCE / 'native_fixture.c']):
        obj = output / f'{number}.o'
        commands.append(core.command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O3', '-fstrict-aliasing',
            '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible',
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    exe = output / 'native-create.exe'
    commands.append(core.command([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup',
        '/subsystem:console', '/nodefaultlib', '/out:' + str(exe), *objects, *libraries], output / 'link.log'))
    commands.append(core.command([exe], output / 'execution.log'))
    rows = [json.loads(line) for line in (output / 'execution.log').read_text().splitlines()]
    return {'observations': rows, 'exeSha256': sha(exe.read_bytes()), 'commands': commands}


def android(output):
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    results = []
    for index, path in enumerate(sources(output, 'normal')):
        obj = output / f'{index:02d}-{path.stem}.o'
        command = [ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android', '-ffreestanding',
                   '-fno-builtin', '-fno-stack-protector', '-O2', '-std=c11', '-Wall', '-Wextra', '-Werror',
                   '-I', SOURCE, '-c', path, '-o', obj]
        core.command(command, output / f'{index}.log')
        results.append({'source': path.relative_to(ROOT).as_posix(), 'sha256': sha(obj.read_bytes())})
    return results


def android_model(output, variant='normal'):
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    objects, commands, records = [], [], []
    for index, path in enumerate(sources(output, variant)):
        obj = output / f'{index}.o'
        commands.append(core.command([compiler, '--target=aarch64-linux-android', '-std=c11', '-O3',
            '-fstrict-aliasing', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
            '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-c', path, '-o', obj], output / f'{index}.log'))
        objects.append(obj)
        records.append({'source': path.relative_to(ROOT).as_posix(), 'sha256': sha(obj.read_bytes())})
    script = output / 'android-model.ld'
    script.write_text('SECTIONS { .text 0xa10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) } '
        '.data 0xa40000 : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } '
        'fixture_original_create016 = 0x176fc8; fixture_original_pop016 = 0x17ff68; '
        '/DISCARD/ : { *(.eh_frame*) *(.comment*) *(.llvm_addrsig) } }')
    elf_path = output / 'android-model.elf'
    commands.append(core.command([linker, '-flavor', 'gnu', '-m', 'aarch64elf', '--no-undefined', '-T', script, *objects, '-o', elf_path], output / 'link.log'))
    payload = elf_path.read_bytes()
    elf = ELFFile(io.BytesIO(payload))
    sections = [{'name': section.name, 'address': section['sh_addr'], 'size': section['sh_size'], 'flags': section['sh_flags'],
                 'data': section.data()} for section in elf.iter_sections() if section['sh_flags'] & 2 and section['sh_size']]
    symbols = {symbol.name: symbol['st_value'] for symbol in elf.get_section_by_name('.symtab').iter_symbols() if symbol.name and symbol['st_shndx'] != 'SHN_UNDEF'}
    functions = [{'name': symbol.name, 'address': symbol['st_value'], 'size': symbol['st_size']}
                 for symbol in elf.get_section_by_name('.symtab').iter_symbols() if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']]
    return {'sections': sections, 'symbols': symbols, 'functions': functions, 'elfSha256': sha(payload), 'objects': records, 'commands': commands}
