import io
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_source_wave002 as prior


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave004'
PLACEMENTS = {'fn_00196f6c': 0x196f6c, 'fn_0019d408': 0x19d408, 'fn_00198230': 0x198230,
              'fn_001b33dc': 0x1b33dc, 'fn_0019d320': 0xa30000, 'fn_00665a44': 0x665a44,
              'fn_0019e8c4': 0x19e8c4, 'fn_00157ff4': 0x157ff4, 'fn_00173d40': 0x173d40,
              'fn_00173d1c': 0x173d1c, 'fn_0019e864': 0x19e864,
              'sq_wave004_native': 0xa10000, 'sq_wave004_release': 0xa11000, '__aeabi_memclr8': 0xa40000}
SERVICES = {'sq_allocate': 0x2fece8, 'sq_reallocate': 0x18388c, 'sq_array_vtable': 0x850d74,
            'sq_assert_array': 0x146590, 'sq_call_error': 0x19813c, 'sq_call_type_error': 0x1a1010}


def sources():
    paths = [SOURCE / name for name in ('native_call.c', 'frame_resize.c', 'array_adapter.c', 'call_fixture.c', 'runtime.c')]
    paths += [ROOT / 'source/squirrel-wave002' / name for name in ('vector_resize.c', 'array_create.c')]
    paths += [ROOT / 'src/native/wave005' / name for name in ('chain.c', 'stack.c', 'push.c', 'object.c')]
    return paths


def build(output, variant='normal'):
    output.mkdir(parents=True, exist_ok=True)
    inputs = sources()
    if variant != 'normal':
        replacements = {'wrong-depth': ('vm->native_calls > 99', 'vm->native_calls > 100'),
                        'wrong-arity': ('check != arguments', 'check == arguments'),
                        'wrong-previous-base': ('base - old_base', 'base + old_base'),
                        'missing-depth-restore': ('vm->native_calls--;', 'vm->native_calls -= 0;'),
                        'wrong-suspend': ('returned == -666', 'returned == -667'),
                        'missing-result-clear': ('clear_object(top);', '(void)top;')}
        old, new = replacements[variant]
        content = inputs[0].read_text()
        if content.count(old) != 1:
            raise ValueError('Negative source edit no longer uniquely identifies its semantic operation')
        changed = output / 'native_call.c'
        changed.write_text(content.replace(old, new))
        inputs[0] = changed
    objects, commands = [], []
    for path in inputs:
        obj = output / (path.stem + '.o')
        commands.append(prior.command([ROOT / 'tools/clang-21/clang.exe', *prior.FLAGS, '-mfpu=vfp', '-mfloat-abi=softfp',
                                       '-std=c11', '-O2', '-I', SOURCE, '-c', path, '-o', obj], output / (path.stem + '.log')))
        objects.append(obj)
    script = output / 'component.ld'
    entries = [f'.text.{name} {hex(address)} : {{ KEEP(*(.text.{name})) }}'
               for name, address in sorted(PLACEMENTS.items(), key=lambda item: item[1])]
    script.write_text('SECTIONS {\n' + '\n'.join(entries) + '\n.rodata 0xa20000 : { *(.rodata*) }\n'
                      '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.text*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    elf_path = output / 'native-call.elf'
    commands.append(prior.command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--fatal-warnings',
                                   '--build-id=none', '--entry=fn_00196f6c', *['--defsym=' + key + '=' + hex(value) for key, value in SERVICES.items()],
                                   '-T', script, *objects, '-o', elf_path], output / 'link.log'))
    elf = ELFFile(io.BytesIO(elf_path.read_bytes()))
    sections = [{'address': section['sh_addr'], 'data': section.data()} for section in elf.iter_sections()
                if section['sh_flags'] & 2 and section['sh_size'] and section['sh_type'] != 'SHT_NOBITS']
    functions = {}
    for symbol in elf.get_section_by_name('.symtab').iter_symbols():
        if symbol.name and symbol['st_shndx'] == 'SHN_UNDEF':
            raise ValueError('Unresolved live dependency: ' + symbol.name)
        if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']:
            section = elf.get_section(symbol['st_shndx'])
            functions[symbol.name] = {'address': symbol['st_value'], 'bytes': symbol['st_size'],
                                      'sectionBytes': section['sh_size'], 'data': section.data(), 'sectionSha256': prior.sha(section.data())}
    if set(functions) != set(PLACEMENTS):
        raise ValueError('Compiled source does not close the declared dispatch/helper function set')
    if any(section['sh_type'] in ('SHT_REL', 'SHT_RELA') and section['sh_size'] for section in elf.iter_sections()):
        raise ValueError('Linked source component retains relocation sections')
    return {'sections': sections, 'functions': functions, 'commands': commands, 'variant': variant,
            'elfSha256': prior.sha(elf_path.read_bytes()),
            'functionRanges': [(row['address'], row['address'] + row['bytes']) for row in functions.values()]}
