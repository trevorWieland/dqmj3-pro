import argparse
import hashlib
import io
import json
import re
import subprocess
from pathlib import Path

from elftools.elf.elffile import ELFFile


ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def write_json(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def validate_ranges(entries, text_start, text_size):
    ordered = sorted(entries, key=lambda row: row['address'])
    cursor = text_start
    symbols = set()
    for row in ordered:
        if not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', row['symbol']):
            raise ValueError('Invalid native symbol')
        if row['symbol'] in symbols or row['mode'] not in ('ARM', 'Thumb'):
            raise ValueError('Duplicate symbol or unknown instruction mode')
        if row['size'] <= 0 or row['address'] < cursor:
            raise ValueError('Empty or overlapping native source intervals')
        if row['address'] + row['size'] > text_start + text_size:
            raise ValueError('Source interval is outside initialized text')
        if row['address'] % (4 if row['mode'] == 'ARM' else 2):
            raise ValueError('Source interval alignment disagrees with instruction mode')
        symbols.add(row['symbol'])
        cursor = row['address'] + row['size']
    return ordered


def inspect_object(row, original):
    path = Path(row['objectPath'])
    if not path.is_absolute():
        path = ROOT / path
    if digest(path) != row['objectSha256']:
        raise ValueError('Frozen native object changed')
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf['e_type'] != 'ET_REL' or elf['e_machine'] != 'EM_ARM' or not elf.little_endian:
        raise ValueError('Expected little-endian ARM relocatable object')
    table = elf.get_section_by_name('.symtab')
    candidates = table.get_symbol_by_name(row['symbol']) or []
    if len(candidates) != 1:
        raise ValueError('Object symbol missing or ambiguous')
    symbol = candidates[0]
    section_index = symbol['st_shndx']
    if not isinstance(section_index, int):
        raise ValueError('Source symbol is not section-defined')
    section = elf.get_section(section_index)
    if section.name != '.text.' + row['symbol']:
        raise ValueError('Source needs an independently owned function section')
    if (symbol['st_value'] & ~1) != 0 or symbol['st_size'] != row['size']:
        raise ValueError('Symbol extent disagrees with complete source range')
    if bool(symbol['st_value'] & 1) != (row['mode'] == 'Thumb'):
        raise ValueError('ELF symbol instruction mode mismatch')
    if section['sh_size'] != row['size'] or section.data() != original:
        raise ValueError('Complete source section differs from original bytes')
    for relocation in elf.iter_sections():
        if relocation['sh_type'] in ('SHT_REL', 'SHT_RELA') and relocation['sh_info'] == section_index:
            if relocation.num_relocations():
                raise ValueError('Relocation-bearing packets need an expanded integration contract')
    return path.resolve(), section.name


def run(command, output):
    completed = subprocess.run(command, capture_output=True, timeout=120)
    output.write_bytes(completed.stdout + completed.stderr)
    if completed.returncode:
        raise ValueError('Genuine compiler/linker command failed: ' + str(completed.returncode))
    return {'argv': command, 'returncode': completed.returncode, 'logSha256': digest(output)}


def integrate(entries, output=None, label='update-content0'):
    if label not in ('base-content0', 'update-content0'):
        raise ValueError('Unknown canonical native module')
    output = Path(output or ROOT / 'work/integration-wave001').resolve()
    if not output.is_relative_to((ROOT / 'work').resolve()):
        raise ValueError('Integration output must stay within repository work/')
    output.mkdir(parents=True, exist_ok=True)
    inventory_path = ROOT / 'evidence/inventory' / (label + '.json')
    inventory = json.loads(inventory_path.read_text(encoding='utf-8'))
    code_path = ROOT / 'generated' / label / 'code.bin'
    if digest(code_path) != inventory['codeSha256']:
        raise ValueError('Native input image differs from frozen inventory')
    image = code_path.read_bytes()
    segments = inventory['layout']['segments']
    base = segments[0]['address']
    for segment in segments:
        if segment['address'] != base + segment['codeBinOffset']:
            raise ValueError('Noncontiguous mappings require a different linker layout')
    text = next(segment for segment in segments if segment['name'] == 'text')
    ordered = validate_ranges(entries, text['address'], text['initializedBytes'])
    if not ordered:
        raise ValueError('A gap-only roundtrip earns no source integration result')
    objects = {}
    for row in ordered:
        offset = row['address'] - base
        path, section = inspect_object(row, image[offset:offset + row['size']])
        objects[row['symbol']] = (path, section)
    gap_source, body, gaps = [], [], []
    cursor = 0

    def gap(start, size):
        if not size:
            return
        name = '.original_gap_' + str(len(gaps))
        gap_source.extend([f'.section {name},"a",%progbits',
                           f'.incbin "{code_path.as_posix()}", {start}, {size}'])
        body.append(f'KEEP(*({name}))')
        gaps.append({'offset': start, 'size': size, 'reconstructedSourceCredit': 0})

    for row in ordered:
        offset = row['address'] - base
        gap(cursor, offset - cursor)
        path, section = objects[row['symbol']]
        body.append(f'KEEP(*({section}))')
        cursor = offset + row['size']
    gap(cursor, len(image) - cursor)
    source = output / 'original-gaps.s'
    source.write_text('\n'.join(gap_source) + '\n', encoding='utf-8')
    script = output / 'module.ld'
    script.write_text('SECTIONS {\n.image ' + hex(base) + ' : {\n' + '\n'.join(body)
                      + '\n}\n/DISCARD/ : { *(.text*) *(.ARM.exidx*) *(.ARM.extab*) '
                      + '*(.comment) *(.note*) *(.llvm_addrsig) *(.data*) *(.bss*) '
                      + '*(.rodata*) *(.ARM.attributes) }\n}\n', encoding='utf-8')
    clang = ROOT / 'tools/clang-21/clang.exe'
    linker = ROOT / 'tools/clang-21/ld.lld.exe'
    commands = [run([str(clang), '--target=arm-none-eabi', '-mcpu=mpcore', '-marm',
                     '-c', str(source), '-o', str(output / 'original-gaps.o')], output / 'assemble.log')]
    unique_objects = sorted({str(path) for path, section in objects.values()})
    linked = output / 'module.elf'
    commands.append(run([str(linker), '-m', 'armelf', '--build-id=none', '-T', str(script),
                         str(output / 'original-gaps.o'), *unique_objects, '-o', str(linked)], output / 'link.log'))
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    section = elf.get_section_by_name('.image')
    if section is None or section['sh_addr'] != base or section.data() != image:
        raise ValueError('Actual linked module image does not match the entire native input')
    symtab = elf.get_section_by_name('.symtab')
    rows = []
    for row in ordered:
        found = symtab.get_symbol_by_name(row['symbol']) or []
        if len(found) != 1 or (found[0]['st_value'] & ~1) != row['address']:
            raise ValueError('Linked source symbol did not land at the genuine target address')
        if found[0]['st_size'] != row['size']:
            raise ValueError('Linked source extent changed')
        rows.append({**row, 'linkedSymbolAddress': found[0]['st_value'], 'actualLinkedBytesMatch': True})
    for row in ordered:
        if digest(objects[row['symbol']][0]) != row['objectSha256']:
            raise ValueError('Native object mutated during integration')
    (output / 'linked-code.bin').write_bytes(section.data())
    report = {'schemaVersion': 1, 'status': 'source-linked-hybrid-module-match',
              'producerSha256': digest(Path(__file__)), 'label': label,
              'programId': inventory['programId'], 'codeSha256': inventory['codeSha256'],
              'inventorySha256': digest(inventory_path), 'moduleBytes': len(image),
              'linkedElfSha256': digest(linked), 'linkedImageSha256': digest(output / 'linked-code.bin'),
              'compilerSha256': digest(clang), 'linkerSha256': digest(linker),
              'sourceLinkedFunctionCount': len(rows), 'sourceLinkedBytes': sum(row['size'] for row in rows),
              'functions': rows, 'retainedOriginalBytes': sum(row['size'] for row in gaps),
              'retainedOriginalGaps': gaps, 'sourceOnlyModule': False, 'commands': commands,
              'acceptanceGrantedByThisTool': False,
              'limits': ['Only complete no-relocation function sections supported',
                         'Source/behavior/boundary proof is independently required by coordinator',
                         'Original gaps and this hybrid match do not establish source-only game coverage']}
    write_json(output / 'report.json', report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--spec', type=Path, required=True)
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    spec = json.loads(args.spec.read_text(encoding='utf-8'))
    report = integrate(spec['functions'], args.output, spec.get('label', 'update-content0'))
    print(json.dumps({key: report[key] for key in ('status', 'sourceLinkedFunctionCount',
                                                  'sourceLinkedBytes', 'sourceOnlyModule')}))


if __name__ == '__main__':
    main()
