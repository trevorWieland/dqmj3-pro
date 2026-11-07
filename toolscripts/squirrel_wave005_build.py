import io
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_source_wave002 as prior
import squirrel_wave004_build as previous


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave005'
PLACEMENTS = {**previous.PLACEMENTS, 'fn_0017ffac': 0x17ffac,
              'sq_execute_service': 0x18d65c, 'sq_class_service': 0x198418}


def sources():
    return [SOURCE / 'generic_call.c', SOURCE / 'dispatch_services.c', *previous.sources()]


def build(output, variant='normal'):
    output.mkdir(parents=True, exist_ok=True)
    inputs = sources()
    if variant != 'normal':
        edits = {'wrong-target': ('vm->frame.top - arguments', 'vm->frame.top + arguments'),
                 'bool-raiseerror': ('result, raise_error, 0', 'result, !!raise_error, 0'),
                 'wrong-recursive-arity': ('vm, &constructor, arguments, base', 'vm, &constructor, arguments + 1, base'),
                 'wrong-class-receiver': ('vm->frame.stack + base, result', 'vm->frame.stack + base + 1, result'),
                 'missing-discard-release': ('release_temporary(&discarded);', '(void)discarded;'),
                 'wrong-class-status': ('return returned;', 'return !returned;')}
        old, new = edits[variant]
        text = inputs[0].read_text()
        if text.count(old) != 1:
            raise ValueError('Negative semantic edit is no longer unique')
        changed = output / 'generic_call.c'
        changed.write_text(text.replace(old, new))
        inputs[0] = changed
    commands, objects = [], []
    for path in inputs:
        obj = output / (path.stem + '.o')
        commands.append(prior.command([ROOT / 'tools/clang-21/clang.exe', *prior.FLAGS, '-mfpu=vfp', '-mfloat-abi=softfp',
                                       '-std=c11', '-O2', '-I', SOURCE, '-c', path, '-o', obj], output / (path.stem + '.log')))
        objects.append(obj)
    script = output / 'component.ld'
    body = [f'.text.{name} {hex(address)} : {{ KEEP(*(.text.{name})) }}' for name, address in sorted(PLACEMENTS.items(), key=lambda item: item[1])]
    script.write_text('SECTIONS {\n' + '\n'.join(body) + '\n.rodata 0xa20000 : { *(.rodata*) }\n'
                      '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.text*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    target = output / 'generic-call.elf'
    commands.append(prior.command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--fatal-warnings',
                                   '--build-id=none', '--entry=fn_0017ffac',
                                   *['--defsym=' + key + '=' + hex(value) for key, value in previous.SERVICES.items()],
                                   '-T', script, *objects, '-o', target], output / 'link.log'))
    elf = ELFFile(io.BytesIO(target.read_bytes()))
    sections = [{'address': section['sh_addr'], 'data': section.data()} for section in elf.iter_sections()
                if section['sh_flags'] & 2 and section['sh_size'] and section['sh_type'] != 'SHT_NOBITS']
    functions = {}
    for symbol in elf.get_section_by_name('.symtab').iter_symbols():
        if symbol.name and symbol['st_shndx'] == 'SHN_UNDEF':
            raise ValueError('Unresolved source-only live dependency: ' + symbol.name)
        if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']:
            section = elf.get_section(symbol['st_shndx'])
            functions[symbol.name] = {'address': symbol['st_value'], 'bytes': symbol['st_size'], 'sectionBytes': section['sh_size'],
                                      'data': section.data(), 'sectionSha256': prior.sha(section.data())}
    if set(functions) != set(PLACEMENTS):
        raise ValueError('Generic source dependency closure changed')
    if any(section['sh_type'] in ('SHT_REL', 'SHT_RELA') and section['sh_size'] for section in elf.iter_sections()):
        raise ValueError('Linked generic dispatch retains relocations')
    return {'sections': sections, 'functions': functions, 'commands': commands, 'variant': variant,
            'elfSha256': prior.sha(target.read_bytes()),
            'functionRanges': [(row['address'], row['address'] + row['bytes']) for row in functions.values()]}
