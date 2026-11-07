import hashlib
import io
import json
import re
from pathlib import Path

from elftools.elf.elffile import ELFFile

from module_link import digest, run, validate_ranges, write_json


ROOT = Path(__file__).resolve().parents[1]
SUPPORTED_RELOCATIONS = {2: 'R_ARM_ABS32', 3: 'R_ARM_REL32', 10: 'R_ARM_THM_CALL',
                         28: 'R_ARM_CALL', 29: 'R_ARM_JUMP24', 30: 'R_ARM_THM_JUMP24'}


def symbol_name(name):
    if not isinstance(name, str) or not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', name):
        raise ValueError('Graph symbol must be an ordinary C or mangled C++ identifier')
    return name


def describe_object(path, name):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf.elfclass != 32 or not elf.little_endian or elf['e_type'] != 'ET_REL' or elf['e_machine'] != 'EM_ARM':
        raise ValueError('Graph input must be a genuine ARM32 relocatable object')
    table = elf.get_section_by_name('.symtab')
    symbols = [] if table is None else table.get_symbol_by_name(symbol_name(name)) or []
    if len(symbols) != 1 or symbols[0]['st_info']['type'] != 'STT_FUNC':
        raise ValueError('Missing unique compiler-defined function')
    symbol = symbols[0]
    index = symbol['st_shndx']
    if not isinstance(index, int):
        raise ValueError('Owned source function is not section-defined')
    section = elf.get_section(index)
    if (section.name != '.text.' + name or not section['sh_flags'] & 4
            or section['sh_type'] != 'SHT_PROGBITS' or symbol['st_value'] & ~1):
        raise ValueError('Source needs an independently owned complete function section')
    relocations = []
    for relocation_section in elf.iter_sections():
        if relocation_section['sh_type'] not in ('SHT_REL', 'SHT_RELA') or relocation_section['sh_info'] != index:
            continue
        symbols_table = elf.get_section(relocation_section['sh_link'])
        for relocation in relocation_section.iter_relocations():
            kind = relocation['r_info_type']
            target = symbols_table.get_symbol(relocation['r_info_sym'])
            if kind not in SUPPORTED_RELOCATIONS:
                raise ValueError('Unsupported ARM relocation: ' + str(kind))
            if not 0 <= relocation['r_offset'] <= section['sh_size'] - 4:
                raise ValueError('Relocation exceeds complete source section')
            item = {'offset': relocation['r_offset'], 'type': kind,
                    'name': SUPPORTED_RELOCATIONS[kind], 'symbol': symbol_name(target.name),
                    'format': relocation_section['sh_type']}
            if relocation_section['sh_type'] == 'SHT_RELA':
                item['addend'] = relocation['r_addend']
            relocations.append(item)
    return {'section': section.name, 'size': section['sh_size'], 'symbolBytes': symbol['st_size'],
            'mode': 'Thumb' if symbol['st_value'] & 1 else 'ARM',
            'sectionSha256': hashlib.sha256(section.data()).hexdigest(),
            'relocations': sorted(relocations, key=lambda row: (row['offset'], row['type'], row['symbol']))}


def dependencies(entries, image, base):
    owned = {row['symbol']: row for row in entries}
    result = {}
    for row in entries:
        declared = row['dependencies']
        if len({item['symbol'] for item in declared}) != len(declared):
            raise ValueError('Duplicate dependency declaration')
        if {item['symbol'] for item in declared} != {item['symbol'] for item in row['relocations']}:
            raise ValueError('Every actual relocation requires an explicit dependency and vice versa')
        by_name = {item['symbol']: item for item in declared}
        if any(item['type'] in (10, 28, 29, 30) and by_name[item['symbol']]['kind'] != 'function'
               for item in row['relocations']):
            raise ValueError('Call and jump relocations require a function ABI dependency')
        for item in declared:
            name = symbol_name(item['symbol'])
            if item['kind'] not in ('function', 'data') or item['role'] not in ('source', 'retained-original'):
                raise ValueError('Unknown dependency kind or provenance')
            if not isinstance(item.get('abi'), str) or not item['abi'].strip():
                raise ValueError('Dependency needs its measured ABI or data-layout contract')
            address, size = item['address'], item['size']
            if (isinstance(address, bool) or not isinstance(address, int) or isinstance(size, bool)
                    or not isinstance(size, int) or size <= 0 or address < base or address + size > base + len(image)):
                raise ValueError('Dependency lies outside the measured initialized image')
            raw = image[address - base:address - base + size]
            if hashlib.sha256(raw).hexdigest() != item['sha256']:
                raise ValueError('Dependency original extent identity differs')
            if item['kind'] == 'function':
                mode = item['mode']
                if mode not in ('ARM', 'Thumb') or address % (4 if mode == 'ARM' else 2):
                    raise ValueError('Dependency entry mode/alignment differs')
            if item['role'] == 'source':
                source = owned.get(name)
                if (item['kind'] != 'function' or source is None
                        or (address, size, item['mode']) != (source['address'], source['size'], source['mode'])):
                    raise ValueError('Source dependency is absent from the actual source-owned graph')
            elif name in owned:
                raise ValueError('An owned function cannot be disguised as retained original')
            if name in result and result[name] != item:
                raise ValueError('Conflicting canonical dependency declarations')
            result[name] = item
    return result


def integrate(entries, output, label='update-content0', root=ROOT):
    root, output = root.resolve(), Path(output).resolve()
    if label not in ('base-content0', 'update-content0') or not output.is_relative_to(root / 'work'):
        raise ValueError('Graph integration must use a known module and private repository work output')
    inventory_path = root / 'evidence/inventory' / (label + '.json')
    inventory = json.loads(inventory_path.read_text())
    code_path = root / 'generated' / label / 'code.bin'
    if digest(code_path) != inventory['codeSha256']:
        raise ValueError('Measured original image identity differs')
    image = code_path.read_bytes()
    segments = inventory['layout']['segments']
    base = segments[0]['address']
    if any(row['address'] != base + row['codeBinOffset'] for row in segments):
        raise ValueError('Graph integration requires the qualified contiguous loader layout')
    text = next(row for row in segments if row['name'] == 'text')
    ordered = validate_ranges(entries, text['address'], text['initializedBytes'])
    if not ordered:
        raise ValueError('A retained-only image is not a source graph')
    objects = {}
    for row in ordered:
        path = Path(row['objectPath']).resolve(strict=True)
        if not path.is_relative_to(root / 'work') or digest(path) != row['objectSha256']:
            raise ValueError('Frozen source object escaped private work or changed')
        actual = describe_object(path, row['symbol'])
        if any(row.get(key) != value for key, value in actual.items()):
            raise ValueError('Actual compiler section/symbol/relocations differ from frozen packet')
        extents = [row.get(key) for key in ('instructionBytes', 'poolBytes', 'paddingBytes')]
        if any(isinstance(size, bool) or not isinstance(size, int) or size < 0 for size in extents):
            raise ValueError('Source instruction/pool/padding extents must be explicit nonnegative integers')
        if sum(extents) != row['size'] or not 0 < row['symbolBytes'] <= row['size'] or not row['instructionBytes']:
            raise ValueError('Source section ownership is not fully accounted')
        objects[row['symbol']] = path
    closure = dependencies(ordered, image, base)
    output.mkdir(parents=True, exist_ok=True)
    assembly, body, assignments, gaps = [], [], [], []
    cursor = 0

    def gap(start, size):
        if size:
            name = '.original_gap_' + str(len(gaps))
            assembly.extend([f'.section {name},"a",%progbits',
                             f'.incbin "{code_path.as_posix()}", {start}, {size}'])
            body.append(f'KEEP(*({name}))')
            gaps.append({'offset': start, 'size': size, 'reconstructedSourceCredit': 0})

    for row in ordered:
        offset = row['address'] - base
        gap(cursor, offset - cursor)
        body.append(f'KEEP(*({row["section"]}))')
        cursor = offset + row['size']
    gap(cursor, len(image) - cursor)
    for name, item in sorted(closure.items()):
        if item['role'] != 'retained-original':
            continue
        alias = '__retained_' + name
        if alias in closure or alias in objects:
            raise ValueError('Retained dependency alias collides with an owned symbol')
        kind = '%function' if item['kind'] == 'function' else '%object'
        directive = '.thumb_set' if item.get('mode') == 'Thumb' else '.set'
        assembly.extend([f'.global {alias}', f'.type {alias}, {kind}',
                         f'{directive} {alias}, {hex(item["address"])}'])
        assignments.append(f'{name} = {alias};')
    source, script = output / 'original-gaps.s', output / 'module.ld'
    source.write_text('\n'.join(assembly) + '\n')
    script.write_text('\n'.join(assignments) + '\nSECTIONS {\n.image ' + hex(base) + ' : {\n'
                      + '\n'.join(body) + '\n}\n/DISCARD/ : { *(.text*) *(.ARM.exidx*) *(.ARM.extab*) '
                      + '*(.comment) *(.note*) *(.llvm_addrsig) *(.data*) *(.bss*) '
                      + '*(.rodata*) *(.ARM.attributes) }\n}\n')
    clang, linker = [root / ('tools/clang-21/' + name) for name in ('clang.exe', 'ld.lld.exe')]
    lock = json.loads((root / 'tools.lock.json').read_text())
    for tool in (clang, linker):
        expected = next(row['sha256'] for row in lock['files'] if row['path'] == tool.relative_to(root).as_posix())
        if digest(tool) != expected:
            raise ValueError('Graph compiler/linker differs from measured tool lock')
    original = output / 'original-gaps.o'
    commands = [run([str(clang), '--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-c', str(source),
                     '-o', str(original)], output / 'assemble.log')]
    linked = output / 'module.elf'
    commands.append(run([str(linker), '-m', 'armelf', '--build-id=none', '--no-undefined', '-T', str(script),
                         str(original), *sorted({str(path) for path in objects.values()}), '-o', str(linked)],
                        output / 'link.log'))
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    section = elf.get_section_by_name('.image')
    if section is None or section['sh_addr'] != base or section.data() != image:
        raise ValueError('Genuine relocation-resolved module differs from the entire original image')
    table = elf.get_section_by_name('.symtab')
    for row in ordered:
        symbols = table.get_symbol_by_name(row['symbol']) or []
        if (len(symbols) != 1 or symbols[0]['st_value'] != row['address'] | (row['mode'] == 'Thumb')
                or symbols[0]['st_size'] != row['symbolBytes']):
            raise ValueError('Actual linked source symbol address/mode/extent differs')
        if digest(objects[row['symbol']]) != row['objectSha256']:
            raise ValueError('Source object changed during genuine linking')
    for name, item in closure.items():
        symbols = table.get_symbol_by_name(name) or []
        expected = item['address'] | (item.get('mode') == 'Thumb')
        if len(symbols) != 1 or symbols[0]['st_value'] != expected:
            raise ValueError('Actual dependency resolution differs from measured ABI manifest')
    if digest(code_path) != inventory['codeSha256']:
        raise ValueError('Original image changed during graph integration')
    result = {'schemaVersion': 1, 'status': 'source-linked-hybrid-graph-match', 'label': label,
              'programId': inventory['programId'], 'codeSha256': inventory['codeSha256'],
              'linkedImageSha256': hashlib.sha256(section.data()).hexdigest(), 'linkedElfSha256': digest(linked),
              'producerSha256': digest(Path(__file__)), 'compilerSha256': digest(clang), 'linkerSha256': digest(linker),
              'sourceLinkedFunctionCount': len(ordered), 'sourceLinkedBytes': sum(row['size'] for row in ordered),
              'sourceLinkedInstructionBytes': sum(row['instructionBytes'] for row in ordered),
              'sourceLinkedPoolBytes': sum(row['poolBytes'] for row in ordered),
              'sourceLinkedPaddingBytes': sum(row['paddingBytes'] for row in ordered),
              'functions': ordered, 'dependencies': list(closure.values()), 'retainedOriginalGaps': gaps,
              'retainedOriginalBytes': sum(row['size'] for row in gaps), 'commands': commands,
              'sourceOnlyModule': False, 'wholeGameExecution': False, 'acceptanceGrantedByThisTool': False,
              'limits': ['Only the listed named ARM relocations are supported',
                         'Complete boundary, typed ABI and independent behavior proof remain coordinator requirements',
                         'Retained dependencies and gaps earn zero source credit']}
    write_json(output / 'report.json', result)
    return result
