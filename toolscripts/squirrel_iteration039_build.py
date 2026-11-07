import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_reference_prefix012_build as core
from squirrel_source_wave002 import sha


ROOT, COMMON = core.ROOT, core.SOURCE
SOURCE = ROOT / 'source/squirrel-wave039'


def sources(output,variant):
    from squirrel_iteration039_controls import SPECS
    if variant!='normal'and variant not in SPECS:raise ValueError('039 unknown source variant')
    from squirrel_execute031_build import sources as previous
    paths=previous(output,'normal')
    paths=[p for p in paths if not(p.parent.name=='squirrel-wave031'and p.name in('execute_core.c','call_adapter.c'))]
    result=[SOURCE/name for name in('execute_core.c','call_adapter.c','next.c','step.c','lookup.c','fixture.c','fixture_class.c','fixture_services.c')]+[ROOT/'source/squirrel-wave030'/name for name in('class_table_clone.c','class_initialize.c','class_vectors.c','class_lifetime.c','class_instance_lifetime.c','class_bindings.c','class_vtables.c')]+[ROOT/'source/squirrel-wave034'/name for name in('member_definition.c','meta_names.c','class_dependencies.c')]+paths
    if variant!='normal':
        name,old,new,unused=SPECS[variant];source=SOURCE/name;text=source.read_text(encoding='utf-8')
        if text.count(old)!=1:raise ValueError('039 control must match once')
        target=output/('control-'+name);target.write_text(text.replace(old,new),encoding='utf-8');result=[target if p==source else p for p in result]
    return result



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
            '-I', SOURCE, '-I', ROOT/'source/squirrel-wave028', '-I', ROOT/'source/squirrel-wave020', *(['-Dsq_deallocate=sq_predecessor_deallocate039']if path==ROOT/'source/squirrel-wave031/fixture_services.c'else[]), *(['-Dsq_reallocate=sq_baseline_reallocate031','-Dsq_deallocate=sq_baseline_deallocate031','-Dsq_weak_allocate014=sq_baseline_weak_allocate039','-Dsq_weak_deallocate014=sq_baseline_weak_deallocate039','-Dsq_native_create_allocate016=sq_baseline_native_allocate039','-Dsq_native_closure_deallocate013=sq_baseline_native_deallocate039','-Dsq_prototype_deallocate011=sq_baseline_prototype_deallocate039']if path==ROOT/'source/squirrel-wave028/fixture_services.c'else[]), *(['-Dsq_execute028=sq_execute039','-Dfixture_native_event028=fixture_native_event031']if path==ROOT/'source/squirrel-wave028/fixture.c'else[]), '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    script = output / 'iteration039.ld'
    script.write_text('SECTIONS {\n'
        '.rodata.base 0x81d020 : { KEEP(*(.rodata.sq_prototype_base_vtable011)) }\n'
        '.rodata.prototype 0x81e52c : { KEEP(*(.rodata.sq_prototype_vtable011)) }\n'
        '.rodata.native 0x81e540 : { KEEP(*(.rodata.sq_native_closure_vtable013)) }\n'
        '.rodata.class 0x850d90 : { KEEP(*(.rodata.sq_class_vtable030)) }\n'
        '.rodata.instance 0x81bd48 : { KEEP(*(.rodata.sq_class_instance_vtable030)) }\n'
        '.rodata.table 0x850dac : { KEEP(*(.rodata.sq_table_vtable019)) }\n'
        '.rodata.array 0x850d74 : { KEEP(*(.rodata.sq_opaque_array_vtable012)) }\n'
        '.rodata.script 0x8516d0 : { KEEP(*(.rodata.sq_script_closure_vtable017)) }\n'
        '.rodata.weak 0x8516ec : { KEEP(*(.rodata.sq_weak_vtable014)) }\n'
        '.rodata.string 0x851220 : { KEEP(*(.rodata.sq_string_vtable015)) }\n'
        '.text.baseline_callback 0xa11604 : { KEEP(*(.text.fixture_array_callback028)) }\n'
        '.text.iteration_callback 0xa22000 : { KEEP(*(.text.fixture_iteration_observer039)) }\n'
        '.text.next_callback 0xa23000 : { KEEP(*(.text.fixture_next_key039)) }\n'
        '.text 0xb10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) }\n'
        '.data 0xa40000 : { *(.data*) } .bss : { *(.bss*) *(COMMON) }\n'
        'fixture_original_push039 = 0x173d1c; fixture_original_instance039 = 0x190c50; fixture_original_class_init039 = 0x1a18a8; fixture_original_class_slot039 = 0x1804b4; fixture_original_weak039 = 0x233b7c; fixture_original_string031 = 0x19ba68; fixture_original_register028 = 0x176fc8; fixture_original_array028 = 0x1b33dc; fixture_original_execute028 = 0x18d65c; fixture_original_call028 = 0x17ffac; fixture_original_assign028 = 0x19e864;\n'
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.llvm_addrsig) } }\n')
    elf_path = output / 'iteration039.elf'
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
        from squirrel_iteration039_controls import program as control_program
        program=control_program(output,variant)
    for number, path in enumerate(sources(output, variant) + [program]):
        obj = output / f'{number}.o'
        commands.append(core.command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O3', '-fstrict-aliasing',
            '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible',
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-I', ROOT/'source/squirrel-wave028', '-I', ROOT/'source/squirrel-wave020', *(['-Dsq_deallocate=sq_predecessor_deallocate039']if path==ROOT/'source/squirrel-wave031/fixture_services.c'else[]), *(['-Dsq_reallocate=sq_baseline_reallocate031','-Dsq_deallocate=sq_baseline_deallocate031','-Dsq_weak_allocate014=sq_baseline_weak_allocate039','-Dsq_weak_deallocate014=sq_baseline_weak_deallocate039','-Dsq_native_create_allocate016=sq_baseline_native_allocate039','-Dsq_native_closure_deallocate013=sq_baseline_native_deallocate039','-Dsq_prototype_deallocate011=sq_baseline_prototype_deallocate039']if path==ROOT/'source/squirrel-wave028/fixture_services.c'else[]), *(['-Dsq_execute028=sq_execute039','-Dfixture_native_event028=fixture_native_event031']if path==ROOT/'source/squirrel-wave028/fixture.c'else[]), '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    exe = output / 'iteration039.exe'
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
                   '-I', SOURCE, '-I', ROOT/'source/squirrel-wave028', '-I', ROOT/'source/squirrel-wave020', *(['-Dsq_deallocate=sq_predecessor_deallocate039']if path==ROOT/'source/squirrel-wave031/fixture_services.c'else[]), *(['-Dsq_reallocate=sq_baseline_reallocate031','-Dsq_deallocate=sq_baseline_deallocate031','-Dsq_weak_allocate014=sq_baseline_weak_allocate039','-Dsq_weak_deallocate014=sq_baseline_weak_deallocate039','-Dsq_native_create_allocate016=sq_baseline_native_allocate039','-Dsq_native_closure_deallocate013=sq_baseline_native_deallocate039','-Dsq_prototype_deallocate011=sq_baseline_prototype_deallocate039']if path==ROOT/'source/squirrel-wave028/fixture_services.c'else[]), *(['-Dsq_execute028=sq_execute039','-Dfixture_native_event028=fixture_native_event031']if path==ROOT/'source/squirrel-wave028/fixture.c'else[]), '-c', path, '-o', obj]
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
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-I', ROOT/'source/squirrel-wave028', '-I', ROOT/'source/squirrel-wave020', *(['-Dsq_deallocate=sq_predecessor_deallocate039']if path==ROOT/'source/squirrel-wave031/fixture_services.c'else[]), *(['-Dsq_reallocate=sq_baseline_reallocate031','-Dsq_deallocate=sq_baseline_deallocate031','-Dsq_weak_allocate014=sq_baseline_weak_allocate039','-Dsq_weak_deallocate014=sq_baseline_weak_deallocate039','-Dsq_native_create_allocate016=sq_baseline_native_allocate039','-Dsq_native_closure_deallocate013=sq_baseline_native_deallocate039','-Dsq_prototype_deallocate011=sq_baseline_prototype_deallocate039']if path==ROOT/'source/squirrel-wave028/fixture_services.c'else[]), *(['-Dsq_execute028=sq_execute039','-Dfixture_native_event028=fixture_native_event031']if path==ROOT/'source/squirrel-wave028/fixture.c'else[]), '-c', path, '-o', obj], output / f'{index}.log'))
        objects.append(obj)
        records.append({'source': path.relative_to(ROOT).as_posix(), 'sha256': sha(obj.read_bytes())})
    script = output / 'android-model.ld'
    script.write_text('SECTIONS { .text.baseline_callback 0xa11224 : { KEEP(*(.text.fixture_array_callback028)) } .text.iteration_callback 0xa22000 : { KEEP(*(.text.fixture_iteration_observer039)) } .text.next_callback 0xa23000 : { KEEP(*(.text.fixture_next_key039)) } .text 0xb10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) } '
        '.data 0xa40000 : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } '
        'fixture_original_push039 = 0x173d1c; fixture_original_instance039 = 0x190c50; fixture_original_class_init039 = 0x1a18a8; fixture_original_class_slot039 = 0x1804b4; fixture_original_weak039 = 0x233b7c; fixture_original_string031 = 0x19ba68; fixture_original_register028 = 0x176fc8; fixture_original_array028 = 0x1b33dc; fixture_original_execute028 = 0x18d65c; fixture_original_call028 = 0x17ffac; fixture_original_assign028 = 0x19e864; '
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
