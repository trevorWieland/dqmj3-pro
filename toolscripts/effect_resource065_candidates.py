import hashlib
import json
import struct

import capstone
from capstone import arm

import native_effect065_build as common


ROOT = common.ROOT


def run(output):
    if output.exists():
        raise ValueError('Preserve the resource entry candidate packet')
    output.mkdir(parents=True)
    protocol_path = ROOT / 'work/native-effect065/resource/constructor-reference-v1/report.json'
    protocol = json.loads(protocol_path.read_text())
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    module_hash = hashlib.sha256(image).hexdigest()
    if module_hash != census['codeSha256'] or module_hash != protocol['moduleSha256']:
        raise ValueError('Resource entry module identities differ')
    known = {row['address']: row for row in census['functions']}
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    witnesses = []
    source_function = known[0x53fe5c]
    for part in source_function['ranges']:
        for instruction in decoder.disasm(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000], part['start']):
            for operand in instruction.operands:
                if operand.type == arm.ARM_OP_MEM and operand.mem.base == arm.ARM_REG_PC and not operand.mem.index:
                    location = instruction.address + 8 + operand.mem.disp
                    if location in [0x540404, 0x540408]:
                        target = struct.unpack_from('<I', image, location - 0x100000)[0]
                        witnesses.append({'owner': 0x53fe5c, 'readerPC': instruction.address, 'literalAddress': location,
                            'target': target, 'literalBytes': 4,
                            'readerSha256': hashlib.sha256(instruction.bytes).hexdigest(),
                            'literalSha256': hashlib.sha256(image[location - 0x100000:location - 0x100000 + 4]).hexdigest()})
    if {(row['literalAddress'], row['target']) for row in witnesses} != {(0x540404, 0x15d258), (0x540408, 0x15d210)}:
        raise ValueError('Resource actual constructor table readers differ')
    if struct.unpack_from('<I', image, 0x15d27c - 0x100000)[0] != 0x16771c:
        raise ValueError('Nested no-op constructor literal differs')
    records = []
    observed = {row['address'] for row in protocol['witnesses']}
    for address, size, next_entry in [(0x15d210, 12, 0x15d21c), (0x15d258, 36, 0x15d280), (0x16771c, 4, 0x167720)]:
        prior = next(row for row in protocol['candidates'] if row['entry'] == address)
        if prior['knownEntry'] or prior['priorInstructionOwnership']:
            raise ValueError('Resource candidate duplicates existing measured instruction ownership')
        if any(pc not in observed for pc in range(address, address + size, 4)):
            raise ValueError('Resource constructor candidate contains unobserved instructions')
        item = {'entry': address, 'mode': 'ARM', 'symbol': 'fn_' + format(address, '08x'),
            'sourcePath': 'src/native/wave065-resource/effect_vertex.c',
            'instructionRanges': [{'start': address, 'endExclusive': address + size, 'bytes': size,
                'sha256': hashlib.sha256(image[address - 0x100000:address - 0x100000 + size]).hexdigest()}],
            'nextMeasuredEntry': next_entry, 'priorInstructionOwnership': [],
            'allInstructionPCsActuallyObserved': True, 'PCRelativeData': [], 'approvedForSharedInventory': False,
            'sourceCreditGranted': 0, 'returnSemanticsQualified': False}
        if address == 0x15d258:
            item['PCRelativeData'] = [{'start': 0x15d27c, 'endExclusive': 0x15d280, 'bytes': 4,
                'sha256': hashlib.sha256(image[0x15d27c - 0x100000:0x15d280 - 0x100000]).hexdigest(),
                'target': 0x16771c, 'readerPC': 0x15d264}]
        records.append(item)
    packet = {'status': 'reference-qualified-constructor-entry-candidates-for-coordinator-review',
        'producer': common.pin(__import__('pathlib').Path(__file__)), 'moduleSha256': module_hash,
        'seededCensus': common.pin(census_path), 'protocol': common.pin(protocol_path),
        'constructorTableWitnesses': witnesses, 'functions': records,
        'instructionBytes': 52, 'literalDataBytes': 4, 'grossInitializedTextDenominatorChange': 0,
        'sourceCreditGranted': 0, 'sharedInventoryEdited': False}
    (output / 'packet.json').write_text(json.dumps(packet, indent=2) + '\n')
    print(json.dumps(common.pin(output / 'packet.json')))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/resource/constructor-candidates-v1')
