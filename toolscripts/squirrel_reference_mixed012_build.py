import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_reference_prefix012_build as core
from squirrel_source_wave002 import sha


ROOT, SOURCE = core.ROOT, core.SOURCE


def sources(output, variant):
    paths = [SOURCE / name for name in ('reference_prefix.c', 'vector_values.c', 'reference_dispatch_opaque.c',
             'mixed_lifetime_fixture.c', 'mixed_runtime.c')]
    paths += [ROOT / 'source/squirrel-wave011' / name for name in ('prototype_release.c', 'vtables.c')]
    paths += [ROOT / 'source/squirrel-wave013' / name for name in ('native_closure_release.c', 'vtables.c')]
    if variant == 'wrong-mixed-provider':
        paths[2] = SOURCE / 'reference_dispatch.c'
        return paths
    if variant != 'normal':
        index, old, new = {
            'early-mixed-release': (0, '    *destination = incoming;\n    sq_prefix_release(previous.type, previous.value);',
                                      '    sq_prefix_release(previous.type, previous.value);\n    *destination = incoming;'),
            'skipped-mixed-shrink': (1, 'SqU32 index = requested;', 'SqU32 index = requested + 1;')}[variant]
        text = paths[index].read_text(encoding='utf-8')
        if text.count(old) != 1:
            raise ValueError('Mixed lifetime control no longer selects its operation')
        changed = output / paths[index].name
        changed.write_text(text.replace(old, new), encoding='utf-8')
        paths[index] = changed
    return paths


def arm(output, variant='normal'):
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
    script = output / 'mixed.ld'
    script.write_text('SECTIONS {\n'
        '.rodata.base 0x81d020 : { KEEP(*(.rodata.sq_prototype_base_vtable011)) }\n'
        '.rodata.prototype 0x81e52c : { KEEP(*(.rodata.sq_prototype_vtable011)) }\n'
        '.rodata.native 0x81e540 : { KEEP(*(.rodata.sq_native_closure_vtable013)) }\n'
        '.text 0xa10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) }\n'
        '.data 0xa40000 : { *(.data*) } .bss : { *(.bss*) *(COMMON) }\n'
        'fixture_original_assign012 = 0x19e864; fixture_original_resize012 = 0x19d320; fixture_original_destroy012 = 0x77f3f8;\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.llvm_addrsig) } }\n')
    elf_path = output / 'mixed.elf'
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
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    commands, libraries = [], []
    for name, exports in (('msvcrt', ('malloc', 'free', 'printf')), ('kernel32', ('ExitProcess',))):
        definition, library = output / (name + '.def'), output / (name + '.lib')
        definition.write_text('LIBRARY ' + name + '.dll\nEXPORTS\n' + '\n'.join(exports) + '\n')
        commands.append(core.command([linker, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition), '/out:' + str(library)], output / (name + '.log')))
        libraries.append(library)
    objects = []
    for number, path in enumerate(sources(output, variant) + [SOURCE / 'native_mixed_fixture.c']):
        obj = output / f'{number}.o'
        commands.append(core.command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O3', '-fstrict-aliasing',
            '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible',
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    exe = output / 'mixed.exe'
    commands.append(core.command([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup',
        '/subsystem:console', '/nodefaultlib', '/out:' + str(exe), *objects, *libraries], output / 'link.log'))
    commands.append(core.command([exe], output / 'execution.log'))
    rows = [json.loads(line) for line in (output / 'execution.log').read_text().splitlines()]
    return {'observations': rows, 'exeSha256': sha(exe.read_bytes()), 'commands': commands}


def android(output):
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
