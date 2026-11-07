import argparse
import json
import struct

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_INS_BX, ARM_OP_IMM, ARM_OP_MEM, ARM_REG_LR, ARM_REG_PC

from native_wave013_common import ROOT, WORK, OUT, MODULE_SHA, record, save, sha


TABLES = [('tokenizer', 0x4bf244, 95, 32, 0x4befe0),
          ('nfa-primary-and-continuation', 0x4c0484, 38, 0, 0x4c0390),
          ('escape', 0x4bf9dc, 95, 32, 0x4bf974)]


def decode_tables(image):
    tables = []
    for name, literal, count, first, reader in TABLES:
        start = struct.unpack_from('<I', image, literal - 0x100000)[0]
        raw = image[start - 0x100000:start - 0x100000 + count * 8]
        if len(raw) != count * 8:
            raise ValueError('Method table escapes measured initialized image')
        rows = []
        for index in range(count):
            target, encoded_adjustment = struct.unpack_from('<II', raw, index * 8)
            if target & 3 or encoded_adjustment != 0:
                raise ValueError('Method entry needs separate mode/virtual/this-adjustment review')
            rows.append({'key': first + index, 'slot': start + index * 8, 'target': target,
                         'mode': 'ARM', 'virtual': False, 'thisAdjustmentBytes': 0})
        tables.append({'name': name, 'readerFunction': reader, 'literalAddress': literal,
                       'literalBytes': 4, 'literalSha256': sha(image[literal - 0x100000:literal - 0x100000 + 4]),
                       'start': start, 'bytes': len(raw), 'sha256': sha(raw), 'entries': rows})
    second = struct.unpack_from('<I', image, 0x4c0da8 - 0x100000)[0]
    if second != tables[1]['start']:
        raise ValueError('NFA secondary reader has a different table')
    return tables


def run(folder, output):
    original_path = ROOT / 'generated/update-content0/code.bin'
    image = original_path.read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('Canonical original image differs')
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    if census['codeSha256'] != MODULE_SHA:
        raise ValueError('Frozen census module differs')
    known = {row['address']: row for row in census['functions']}
    metadata_path = folder / 'functions.private.json'
    exported = json.loads(metadata_path.read_text())
    receipt_path = folder / 'receipt.private.json'
    receipt = json.loads(receipt_path.read_text())
    if receipt['exitCode'] != 0 or '-readOnly' not in receipt['argv'] or '-noanalysis' not in receipt['argv']:
        raise ValueError('Candidate overlay was not produced by a successful read-only session')
    if receipt['script'] != record(ROOT / 'toolscripts/native_wave013_overlay.java'):
        raise ValueError('Effective Ghidra overlay producer differs')
    tools = []
    for item in receipt['toolPins']:
        path = ROOT / item['path']
        if path.stat().st_size != item['bytes'] or sha(path.read_bytes()) != item['sha256']:
            raise ValueError('Effective Ghidra tool changed')
        tools.append(item)
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    tables = decode_tables(image)
    targets = {row['target'] for table in tables for row in table['entries']}
    by_address = {row['address']: row for row in exported}
    if not targets <= by_address.keys() | known.keys():
        raise ValueError('Some measured table target lacks an exported function')
    candidates, outgoing = [], []
    for address in sorted(targets - known.keys()):
        row = by_address[address]
        if row['mode'] != 'ARM':
            raise ValueError('Measured method target mode differs')
        ranges, pools, calls, indirect = [], [], [], []
        for extent in row['ranges']:
            raw = image[extent['start'] - 0x100000:extent['endExclusive'] - 0x100000]
            if sha(raw) != extent['ghidraMemorySha256']:
                raise ValueError('Actual Ghidra memory differs from canonical original bytes')
            instructions = list(decoder.disasm(raw, extent['start']))
            if sum(item.size for item in instructions) != len(raw) or any(item.size != 4 for item in instructions):
                raise ValueError('Candidate instruction range is not fully ARM decoded')
            ranges.append({**extent, 'sha256': sha(raw), 'instructions': len(instructions)})
            for instruction in instructions:
                for operand in instruction.operands:
                    if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                        if operand.mem.index or not instruction.mnemonic.startswith('ldr'):
                            raise ValueError('Unreviewed indexed/width PC data reference')
                        width = 2 if instruction.mnemonic.startswith(('ldrh', 'ldrsh')) else 1 if instruction.mnemonic.startswith(('ldrb', 'ldrsb')) else 4
                        location = instruction.address + 8 + operand.mem.disp
                        pools.append({'start': location, 'endExclusive': location + width, 'bytes': width,
                                      'reader': instruction.address, 'sha256': sha(image[location - 0x100000:location - 0x100000 + width]),
                                      'role': 'PC-relative-literal-word' if width == 4 else 'PC-relative-literal'})
                if instruction.id in [ARM_INS_BL, ARM_INS_BLX, ARM_INS_B]:
                    operand = instruction.operands[0]
                    if operand.type != ARM_OP_IMM:
                        indirect.append({'address': instruction.address, 'kind': 'member-dispatch', 'register': instruction.reg_name(operand.reg)})
                    elif instruction.id != ARM_INS_B or not any(part['start'] <= operand.imm < part['endExclusive'] for part in row['ranges']):
                        calls.append({'address': instruction.address, 'target': operand.imm & ~1,
                                      'kind': 'tail' if instruction.id == ARM_INS_B else 'call',
                                      'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + instruction.size])})
                elif instruction.id == ARM_INS_BX and instruction.operands[0].reg != ARM_REG_LR:
                    indirect.append({'address': instruction.address, 'kind': 'member-tail-dispatch',
                                     'register': instruction.reg_name(instruction.operands[0].reg)})
        witnesses = [{'table': table['name'], 'tableStart': table['start'], **entry}
                     for table in tables for entry in table['entries'] if entry['target'] == address]
        overlaps = [{'function': old['address'], 'start': max(part['start'], extent['start']),
                     'endExclusive': min(part['endExclusive'], extent['endExclusive'])}
                    for old in census['functions'] for part in old['ranges'] for extent in ranges
                    if max(part['start'], extent['start']) < min(part['endExclusive'], extent['endExclusive'])]
        if overlaps:
            raise ValueError('Candidate instruction range overlaps frozen census ownership')
        candidates.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                                 'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                                 'address': address, 'mode': 'ARM'},
                           'instructionRanges': ranges, 'literalPoolRanges': pools, 'tableWitnesses': witnesses,
                           'outgoingTransfers': calls, 'indirectTransfers': indirect, 'frozenCensusOverlaps': overlaps,
                           'status': 'table-entry-supported-candidate-awaiting-coordinator-and-behavior-review',
                           'sourceCreditRequested': 0})
        outgoing.extend(calls)
    for candidate in candidates:
        for pool in candidate['literalPoolRanges']:
            if any(max(pool['start'], part['start']) < min(pool['endExclusive'], part['endExclusive'])
                   for item in candidates for part in item['instructionRanges']):
                raise ValueError('Literal pool overlaps candidate instruction ownership')
            if any(max(pool['start'], part['start']) < min(pool['endExclusive'], part['endExclusive'])
                   for item in census['functions'] for part in item['ranges']):
                raise ValueError('Literal pool overlaps frozen instruction ownership')
    overlaps, aliases = [], []
    for index, row in enumerate(candidates):
        for other in candidates[index + 1:]:
            for first in row['instructionRanges']:
                for second in other['instructionRanges']:
                    if max(first['start'], second['start']) < min(first['endExclusive'], second['endExclusive']):
                        overlaps.append({'first': row['canonicalIdentity']['address'], 'second': other['canonicalIdentity']['address']})
    if overlaps:
        raise ValueError('Candidate function instruction ownership overlaps')
    for transfer in outgoing:
        owner = next((row['canonicalIdentity']['address'] for row in candidates
                      if any(part['start'] <= transfer['target'] < part['endExclusive'] for part in row['instructionRanges'])), None)
        if owner is not None and owner != transfer['target']:
            aliases.append({**transfer, 'physicalOwner': owner, 'status': 'shared-tail/interior-entry-no-second-byte-credit'})
    result = {'schemaVersion': 1, 'status': 'candidate-method-dispatch-overlay-not-accepted-census-replacement',
              'producer': record(ROOT / 'toolscripts/native_wave013_method_tables.py'),
              'ghidraProducer': record(ROOT / 'toolscripts/native_wave013_overlay.java'),
              'moduleSha256': MODULE_SHA, 'frozenCensus': record(census_path),
              'effectiveGhidraTools': tools, 'effectiveJdk': record(ROOT / 'tools/app-shell-jdk25/bin/java.exe'),
              'privateRunReceipt': record(receipt_path), 'privateAddressExport': record(metadata_path),
              'readOnlyNoAnalysis': True, 'functionsCreatedOnlyInUnsavedMemory': True,
              'tables': tables, 'functions': candidates, 'newCandidateFunctions': len(candidates),
              'effectiveGhidraLanguages': sorted({row['language'] for row in exported}),
              'actualGhidraMemoryMatchesCanonicalInstructionSpans': True,
              'newInstructionUnionBytes': sum(part['bytes'] for row in candidates for part in row['instructionRanges']),
              'sharedTailAliases': aliases, 'candidatePeerOverlaps': overlaps,
              'initializedTextByteDenominatorChanged': False, 'sourceCreditGranted': 0,
              'limits': ['Census remains a frozen discovered-function baseline, not historical full function closure',
                         'Method entries and full candidate instruction/literal ranges are measured; source/behavior review pending',
                         'Shared tail physical bytes must be credited once even when multiple logical handlers reach them',
                         'Outer compiler/parser dispatch closure and native high-level component remain in progress']}
    save(output, result)
    print(json.dumps({'newCandidateFunctions': len(candidates), 'instructionUnionBytes': result['newInstructionUnionBytes'],
                      'tables': len(tables), 'sharedTailAliases': len(aliases)}))
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--private-export', type=type(WORK), default=WORK / 'survey-overlay-qualified')
    parser.add_argument('--output', type=type(OUT), default=OUT / 'method-dispatch-overlay.json')
    arguments = parser.parse_args()
    if not arguments.private_export.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUT.resolve()):
        raise ValueError('Method overlay paths escape owned lane')
    run(arguments.private_export.resolve(), arguments.output.resolve())
