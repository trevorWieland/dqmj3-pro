import json
import struct

import capstone
from capstone.arm import ARM_OP_MEM, ARM_REG_PC

from native_wave013_common import ROOT, MODULE_SHA, record, sha


def load(canonical_addresses):
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('Canonical original differs')
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    overlay_path = ROOT / 'evidence/lanes/wave013-native/method-dispatch-overlay.json'
    census = json.loads(census_path.read_text())
    overlay = json.loads(overlay_path.read_text())
    if census['codeSha256'] != MODULE_SHA or overlay['moduleSha256'] != MODULE_SHA:
        raise ValueError('Discovery inputs use another module')
    known = {row['address']: {'mode': row['mode'], 'ranges': row['ranges']} for row in census['functions']}
    known.update({row['canonicalIdentity']['address']: {'mode': row['canonicalIdentity']['mode'],
                  'ranges': row['instructionRanges']} for row in overlay['functions']})
    blocks, code, records, data_records = [], [], {}, []
    for address in sorted(canonical_addresses):
        row = known[address]
        decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM if row['mode'] == 'ARM' else capstone.CS_MODE_THUMB)
        decoder.detail = True
        ranges, pools, entries = [], [], []
        for extent in row['ranges']:
            start, end = extent['start'], extent['endExclusive']
            raw = image[start - 0x100000:end - 0x100000]
            instructions = list(decoder.disasm(raw, start))
            if sum(item.size for item in instructions) != len(raw):
                raise ValueError('Original lexer range contains undecoded bytes')
            blocks.append((start, raw))
            code.append((start, end))
            ranges.append({'start': start, 'endExclusive': end, 'bytes': len(raw), 'sha256': sha(raw)})
            entries.extend(item.address for item in instructions)
            for instruction in instructions:
                for operand in instruction.operands:
                    if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                        if operand.mem.index or not instruction.mnemonic.startswith('ldr'):
                            raise ValueError('Unexpected lexer PC data role')
                        location = ((instruction.address + 4) & ~3 if row['mode'] == 'Thumb' else instruction.address + 8) + operand.mem.disp
                        raw_pool = image[location - 0x100000:location - 0x100000 + 4]
                        pools.append({'start': location, 'endExclusive': location + 4, 'bytes': 4, 'sha256': sha(raw_pool)})
                        blocks.append((location, raw_pool))
        records[address] = {'mode': row['mode'], 'instructionRanges': ranges, 'literalPoolRanges': pools,
                            'instructionAddresses': entries}
    for table in overlay['tables']:
        if table['name'] == 'nfa-primary-and-continuation':
            continue
        start, count = table['start'], table['bytes']
        raw = image[start - 0x100000:start - 0x100000 + count]
        blocks.append((start, raw))
        data_records.append({'start': start, 'bytes': count, 'sha256': sha(raw), 'role': table['name'] + '-logical-member-dispatch'})
    table = struct.unpack_from('<I', image, 0x4c3970 - 0x100000)[0]
    raw = image[table - 0x100000:table - 0x100000 + 132 * 8]
    blocks.append((table, raw))
    data_records.append({'start': table, 'bytes': len(raw), 'sha256': sha(raw), 'role': 'property-name-pointer-and-UTF16-count-table'})
    properties = []
    for index in range(132):
        address, count = struct.unpack_from('<II', raw, index * 8)
        if address:
            value = image[address - 0x100000:address - 0x100000 + count * 2]
            blocks.append((address, value))
            data_records.append({'start': address, 'bytes': len(value), 'sha256': sha(value), 'role': 'property-identifier-UTF16'})
            properties.append({'id': index, 'units': list(struct.unpack('<' + 'H' * count, value)), 'consumed': count})
    return {'blocks': blocks, 'executableRanges': code, 'functions': records, 'properties': properties,
            'readonlyData': data_records, 'census': record(census_path), 'overlay': record(overlay_path)}
