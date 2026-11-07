import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_reference_prefix012_build as core
from squirrel_source_wave002 import sha


ROOT, COMMON = core.ROOT, core.SOURCE
SOURCE = ROOT / 'source/squirrel-wave025'


def sources(output,variant):
    if variant!='normal':
        from squirrel_type_error025_controls import SPECS
        if variant not in SPECS:raise ValueError('Unknown025 variant')
    paths=[SOURCE/name for name in('type_error.c','string_concat.c','format.c','native_adapter.c','fixture.c','fixture_services.c')]
    paths +=[COMMON/name for name in('reference_prefix.c','reference_dispatch_opaque.c','vector_values.c','array_reference.c','array_vtables.c','mixed_runtime.c')]
    for wave,names in(('011',('prototype_release.c','vtables.c')),('013',('native_closure_release.c','vtables.c')),('014',('weak_reference.c','vtables.c')),('017',('script_closure.c','vtables.c')),
       ('016',('native_create.c','vm_storage.c')),('020',('lookup_bindings.c','lookup_error.c','lookup_scratch.c','lookup_type_name.c')),('015',('string.c','bytes.c','vtables.c')),
       ('022',('generic_call.c','native_call.c','call_frames.c','vm_storage.c','array_native.c','error_service.c'))):
        paths +=[ROOT/('source/squirrel-wave'+wave)/name for name in names]
    if variant!='normal':
        from squirrel_type_error025_controls import mutate
        paths=[mutate(path,output,variant)for path in paths]
    return paths


def arm(output, variant='normal'):
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    objects, commands = [], []
    for number, path in enumerate(sources(output, variant)):
        obj = output / f'{number}.o'
        commands.append(core.command([compiler, '--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-mfpu=vfp', '-mfloat-abi=softfp', '-std=c11', '-O3',
            '-fstrict-aliasing', '-ffreestanding', '-fno-builtin', '-ffunction-sections', '-fdata-sections',
            '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-Wall', '-Wextra', '-Werror',
            '-I', SOURCE, '-I', ROOT/'source/squirrel-wave020', '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    script = output / 'table019.ld'
    script.write_text('SECTIONS {\n'
        '.rodata.base 0x81d020 : { KEEP(*(.rodata.sq_prototype_base_vtable011)) }\n'
        '.rodata.prototype 0x81e52c : { KEEP(*(.rodata.sq_prototype_vtable011)) }\n'
        '.rodata.native 0x81e540 : { KEEP(*(.rodata.sq_native_closure_vtable013)) }\n'
        '.rodata.array 0x850d74 : { KEEP(*(.rodata.sq_opaque_array_vtable012)) }\n'
        '.rodata.script 0x8516d0 : { KEEP(*(.rodata.sq_script_closure_vtable017)) }\n'
        '.rodata.weak 0x8516ec : { KEEP(*(.rodata.sq_weak_vtable014)) }\n'
        '.rodata.string 0x851220 : { KEEP(*(.rodata.sq_string_vtable015)) }\n'
        '.text 0xa10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) }\n'
        '.data 0xa40000 : { *(.data*) } .bss : { *(.bss*) *(COMMON) }\n'
        'fixture_original_register025 = 0x176fc8; fixture_original_call025 = 0x17ffac; fixture_original_type_error025 = 0x1a1010; fixture_original_concat025 = 0x1a15ec; fixture_original_assign025 = 0x19e864; fixture_original_string025 = 0x19ba68; fixture_original_weak025 = 0x233b7c;\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.llvm_addrsig) } }\n')
    elf_path = output / 'table019.elf'
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
    program=SOURCE/'native_fixture.c'
    if variant!='normal':
        from squirrel_type_error025_controls import program as control_program
        program=control_program(output,variant)
    for number, path in enumerate(sources(output, variant) + [program]):
        obj = output / f'{number}.o'
        commands.append(core.command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O3', '-fstrict-aliasing',
            '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible',
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-I', ROOT/'source/squirrel-wave020', '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    exe = output / 'table019.exe'
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
                   '-I', SOURCE, '-I', ROOT/'source/squirrel-wave020', '-c', path, '-o', obj]
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
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-I', ROOT/'source/squirrel-wave020', '-c', path, '-o', obj], output / f'{index}.log'))
        objects.append(obj)
        records.append({'source': path.relative_to(ROOT).as_posix(), 'sha256': sha(obj.read_bytes())})
    script = output / 'android-model.ld'
    script.write_text('SECTIONS { .text 0xa10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) } '
        '.data 0xa40000 : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } '
        'fixture_original_register025 = 0x176fc8; fixture_original_call025 = 0x17ffac; fixture_original_type_error025 = 0x1a1010; fixture_original_concat025 = 0x1a15ec; fixture_original_assign025 = 0x19e864; fixture_original_string025 = 0x19ba68; fixture_original_weak025 = 0x233b7c; '
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
