import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_reference_prefix012_build as core
from squirrel_source_wave002 import sha


ROOT, COMMON = core.ROOT, core.SOURCE
SOURCE = ROOT / 'source/squirrel-wave021'


def sources(output,variant):
    if variant not in ('normal','capacity_not_rounded','first_free_off_by_one','set_miss_true','new_slot_missing_retain','new_slot_late_publication','rehash_skip_inactive_release','rehash_ignore_force','delegate_late_retain','delegate_early_publication','destructor_early_weak_reset','release_wrong_size'):
        raise ValueError('Unknown021 control')
    source019=ROOT/'source/squirrel-wave019'
    paths=[source019/name for name in ('table_get.c','table_initialize.c','table_mutation.c','table_lifetime.c','table_vtables.c','fixture_state.c')]
    paths += [SOURCE/name for name in ('table_helpers_fixture.c','table_helpers_services.c')]
    paths += [COMMON/name for name in ('reference_prefix.c','reference_dispatch_opaque.c','mixed_runtime.c')]
    for wave,names in (('011',('prototype_release.c','vtables.c')),('013',('native_closure_release.c','vtables.c')),
                       ('014',('weak_reference.c','vtables.c')),('015',('string.c','bytes.c','vtables.c')),
                       ('017',('script_closure.c','vtables.c'))):
        paths += [ROOT/('source/squirrel-wave'+wave)/name for name in names]
    if variant!='normal':
        filename='table_initialize.c' if variant in ('capacity_not_rounded','first_free_off_by_one') else 'table_get.c' if variant=='set_miss_true' else 'table_mutation.c' if variant.startswith(('new_slot','rehash')) else 'table_lifetime.c'
        original=(source019/filename).read_text(encoding='utf-8');changed=original
        if variant=='capacity_not_rounded':changed=changed.replace('while (requested > count) count *= 2;','if (requested > count) count += 0;')
        if variant=='first_free_off_by_one':changed=changed.replace('nodes + count - 1','nodes + count - 2')
        if variant=='set_miss_true':
            offset=changed.index('_Bool sq_table_set019(')
            changed=changed[:offset]+changed[offset:].replace('if (!node) return 0;','if (!node) return 1;',1)
        if variant=='new_slot_missing_retain':changed=changed.replace('        sq_prefix_retain(main->value.type, main->value.value);\n','')
        if variant=='new_slot_late_publication':
            changed=changed.replace('        main->value.value = value->value;\n        main->value.type = value->type;\n        sq_prefix_retain(main->value.type, main->value.value);\n        sq_prefix_release(previous_type, previous_value);',
                '        sq_prefix_retain(value->type, value->value);\n        sq_prefix_release(previous_type, previous_value);\n        main->value.value = value->value;\n        main->value.type = value->type;')
        if variant=='rehash_skip_inactive_release':changed=changed.replace('        sq_prefix_release(node->key.type, node->key.value);','        if (node->key.type == 0x01000001u) continue;\n        sq_prefix_release(node->key.type, node->key.value);')
        if variant=='rehash_ignore_force':changed=changed.replace('else if (force)','else if (force && 0)')
        if variant=='delegate_late_retain':
            block='    if (delegate) {\n        SqPrefixValue012 value = {.reference = delegate};\n        sq_prefix_retain(0x0a000020u, value);\n    }\n'
            changed=changed.replace(block,'').replace('    table->delegate = delegate;',block+'    table->delegate = delegate;')
        if variant=='delegate_early_publication':changed=changed.replace('        sq_prefix_release(0x0a000020u, value);','        table->delegate = delegate;\n        sq_prefix_release(0x0a000020u, value);')
        if variant=='destructor_early_weak_reset':
            block='    if (table->reference.prefix.weak) {\n        SqPrototypeWeak011 *weak = table->reference.prefix.weak;\n        weak->object.type = 0x01000001u;\n        weak->object.value.reference = 0;\n    }\n'
            changed=changed.replace(block,'').replace('    table->reference.prefix.vtable = &sq_table_vtable019;','    table->reference.prefix.vtable = &sq_table_vtable019;\n'+block)
        if variant=='release_wrong_size':changed=changed.replace('sq_table_deallocate019(table, sizeof(*table));','sq_table_deallocate019(table, sizeof(*table) - 4);')
        if changed==original:raise ValueError('021 semantic control failed to alter source')
        replacement=output/filename;replacement.write_text(changed,encoding='utf-8')
        paths[paths.index(source019/filename)]=replacement
    return paths


CONTROL_CASES={'capacity_not_rounded':(0,9,0),'first_free_off_by_one':(0,4,0),'set_miss_true':(0,4,0),
 'new_slot_missing_retain':(0,4,0),'new_slot_late_publication':(1,4,1),'rehash_skip_inactive_release':(1,8,0),
 'rehash_ignore_force':(2,8,11),'delegate_late_retain':(3,4,1),'delegate_early_publication':(3,4,1),
 'destructor_early_weak_reset':(4,4,0),'release_wrong_size':(0,4,0)}


def fixture_options(path,variant):
    if path.name=='fixture_state.c':return ['-Dfixture_identity019=fixture_base_identity019']
    if path.name=='native_table_helpers.c' and variant!='normal':
        return ['-DSQ_HELPER_ONLY_'+name+'='+str(value)for name,value in zip(('MODE','REQUESTED','FLAGS'),CONTROL_CASES[variant])]
    return []


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
            '-I', SOURCE, '-I', ROOT/'source/squirrel-wave019', *fixture_options(path,variant), '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    script = output / 'table019.ld'
    script.write_text('SECTIONS {\n'
        '.rodata.base 0x81d020 : { KEEP(*(.rodata.sq_prototype_base_vtable011)) }\n'
        '.rodata.prototype 0x81e52c : { KEEP(*(.rodata.sq_prototype_vtable011)) }\n'
        '.rodata.native 0x81e540 : { KEEP(*(.rodata.sq_native_closure_vtable013)) }\n'
        '.rodata.table 0x850dac : { KEEP(*(.rodata.sq_table_vtable019)) }\n'
        '.rodata.script 0x8516d0 : { KEEP(*(.rodata.sq_script_closure_vtable017)) }\n'
        '.rodata.weak 0x8516ec : { KEEP(*(.rodata.sq_weak_vtable014)) }\n'
        '.rodata.string 0x851220 : { KEEP(*(.rodata.sq_string_vtable015)) }\n'
        '.text 0xa10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) }\n'
        '.data 0xa40000 : { *(.data*) } .bss : { *(.bss*) *(COMMON) }\n'
        'fixture_original_initialize019 = 0x19b998; fixture_original_new_slot019 = 0x19b728; fixture_original_set019 = 0x19b414; fixture_original_get019 = 0x1a1dc8; fixture_original_assign019 = 0x19e864; fixture_original_release019 = 0x666518; fixture_original_string_create019 = 0x19ba68; fixture_original_string_release019 = 0x24d9cc; fixture_original_weak_create019 = 0x233b7c; fixture_original_rehash021 = 0x19b4ec; fixture_original_delegate021 = 0x19e2e8; fixture_original_native_release021 = 0x299518;\n'
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
    for number, path in enumerate(sources(output, variant) + [SOURCE / 'native_table_helpers.c']):
        obj = output / f'{number}.o'
        commands.append(core.command([compiler, '--target=x86_64-pc-windows-msvc', '-std=c11', '-O3', '-fstrict-aliasing',
            '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-mno-incremental-linker-compatible',
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-I', ROOT/'source/squirrel-wave019', *fixture_options(path,variant), '-c', path, '-o', obj], output / f'{number}.log'))
        objects.append(obj)
    exe = output / 'table019.exe'
    commands.append(core.command([linker, '-flavor', 'link', '/timestamp:0', '/machine:x64', '/entry:mainCRTStartup',
        '/subsystem:console', '/nodefaultlib', '/out:' + str(exe), *objects, *libraries], output / 'link.log'))
    commands.append(core.command([exe], output / 'execution.log'))
    rows = [json.loads(line) for line in (output / 'execution.log').read_text().splitlines()]
    return {'observations': rows, 'exeSha256': sha(exe.read_bytes()), 'commands': commands}


def android(output,variant="normal"):
    output = output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    results = []
    for index, path in enumerate(sources(output, variant)):
        obj = output / f'{index:02d}-{path.stem}.o'
        command = [ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android', '-ffreestanding',
                   '-fno-builtin', '-fno-stack-protector', '-O2', '-std=c11', '-Wall', '-Wextra', '-Werror',
                   '-I', SOURCE, '-I', ROOT/'source/squirrel-wave019', *fixture_options(path,variant), '-c', path, '-o', obj]
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
            '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-I', ROOT/'source/squirrel-wave019', *fixture_options(path,variant), '-c', path, '-o', obj], output / f'{index}.log'))
        objects.append(obj)
        records.append({'source': path.relative_to(ROOT).as_posix(), 'sha256': sha(obj.read_bytes())})
    script = output / 'android-model.ld'
    script.write_text('SECTIONS { .text 0xa10000 : { *(.text*) } .rodata 0xa30000 : { *(.rodata*) } '
        '.data 0xa40000 : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } '
        'fixture_original_initialize019 = 0x19b998; fixture_original_new_slot019 = 0x19b728; fixture_original_set019 = 0x19b414; fixture_original_get019 = 0x1a1dc8; fixture_original_assign019 = 0x19e864; fixture_original_release019 = 0x666518; fixture_original_string_create019 = 0x19ba68; fixture_original_string_release019 = 0x24d9cc; fixture_original_weak_create019 = 0x233b7c; fixture_original_rehash021 = 0x19b4ec; fixture_original_delegate021 = 0x19e2e8; fixture_original_native_release021 = 0x299518; '
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
