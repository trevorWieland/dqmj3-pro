import io

from elftools.elf.elffile import ELFFile

from native_wave012_common import ROOT, FLAGS, command, record, sha


SOURCE = ROOT / 'src/native/wave012/fixed_arena.c'
HEADER = SOURCE.with_suffix('.h')
ADDRESSES = {0x4c3994: 0x900000, 0x4c39c8: 0x901000}


def arm(source, build, receipts):
    build.mkdir(parents=True, exist_ok=True)
    obj, linked, script = build / 'arena.o', build / 'arena.elf', build / 'arena.ld'
    command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-I', HEADER.parent, '-c', source, '-o', obj],
            build / 'compile.log', receipts)
    script.write_text('SECTIONS {\n' + '\n'.join('.text.fn_' + format(original, '08x') + ' ' + hex(placed) +
                      ' : { KEEP(*(.text.fn_' + format(original, '08x') + ')) }' for original, placed in ADDRESSES.items()) +
                      '\n/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--entry=fn_004c39c8',
             '-T', script, obj, '-o', linked], build / 'link.log', receipts)
    elf, original = ELFFile(io.BytesIO(linked.read_bytes())), ELFFile(io.BytesIO(obj.read_bytes()))
    functions = {}
    for address, placed in ADDRESSES.items():
        name = 'fn_' + format(address, '08x')
        symbol = elf.get_section_by_name('.symtab').get_symbol_by_name(name)[0]
        section = elf.get_section(symbol['st_shndx'])
        raw = section.data()
        if symbol['st_value'] != placed or symbol['st_size'] != section['sh_size'] or section['sh_addr'] != placed:
            raise ValueError('Complete genuine source placement differs')
        if original.get_section_by_name('.text.' + name).data() != raw:
            raise ValueError('Closed source body changed under genuine linkage')
        mapping = [(entry.name.split('.')[0], entry['st_value']) for entry in elf.get_section_by_name('.symtab').iter_symbols()
                   if entry['st_shndx'] == symbol['st_shndx'] and entry.name.startswith('$')]
        if mapping != [('$a', placed)]:
            raise ValueError('Unexpected ARM instruction/pool mapping')
        functions[address] = {'symbol': name, 'address': placed, 'bytes': len(raw), 'spanSha256': sha(raw),
                              'raw': raw, 'poolBytes': 0, 'relocations': [], 'completeObjectAndLinkedSpanEqual': True}
    return {'functions': functions, 'object': record(obj), 'linkedElf': record(linked), 'linkerScript': record(script)}


def windows(source, build, receipts):
    build.mkdir(parents=True, exist_ok=True)
    obj, dll = build / 'arena.obj', build / 'arena.dll'
    command([ROOT / 'tools/clang-21/clang.exe', '--target=x86_64-pc-windows-msvc', '-O2', '-std=c11',
             '-ffreestanding', '-fno-builtin', '-Wall', '-Wextra', '-Werror', '-I', HEADER.parent,
             '-c', source, '-o', obj], build / 'compile.log', receipts)
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-flavor', 'link', '/dll', '/noentry', '/machine:x64', '/nodefaultlib',
             '/out:' + str(dll), '/export:fn_004c39c8', '/export:fn_004c3994', obj], build / 'link.log', receipts)
    return dll
