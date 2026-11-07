import copy
import hashlib
import json
from pathlib import Path
import struct
import sys

import capstone
from capstone.arm_const import ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG, ARM_REG_PC, ARM_REG_R0, ARM_REG_LR


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_census_overlay as overlay


def read(path):
    return json.loads((ROOT / path).read_text())


def pin(path):
    path = Path(path)
    raw = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


def run():
    candidate_path = ROOT / 'evidence/lanes/squirrel-lookup020/metamethod-overlay-candidate.json'
    candidate = read(candidate_path)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    assert hashlib.sha256(image).hexdigest() == candidate['moduleSha256']
    assert pin(ROOT / candidate['producer']['path']) == candidate['producer']
    census_path = candidate['frozenCensus']['path']
    assert pin(ROOT / census_path) == candidate['frozenCensus']
    raw_base = read(census_path)
    base = copy.deepcopy(raw_base)
    previous = []
    for item in read('config/native-function-overlays.json')['overlays']:
        if item['packet']['path'] == 'evidence/verification/lookup020-function-overlay.json':
            continue
        prior = overlay.checked(ROOT, item['packet'])
        review = overlay.checked(ROOT, item['coordinatorReview'])
        assert review['moduleSha256'] == raw_base['codeSha256'] and review['sourceCreditGranted'] == 0
        rows = overlay.validate(raw_base, prior, image)
        base['functions'].extend(rows)
        previous.append(item['packet'])
    base['functionCount'] = len(base['functions'])
    assert not any(row['address'] == 0x202cf4 for row in raw_base['functions'])
    existing = [row for row in base['functions'] if row['address'] == 0x202cf4]
    if existing:
        assert len(existing) == 1 and existing[0]['textBodyBytes'] == 40
        base['functions'] = [row for row in base['functions'] if row['address'] != 0x202cf4]
        base['functionCount'] -= 1
    assert not any(part['start'] < 0x202d1c and 0x202cf4 < part['endExclusive']
                   for row in base['functions'] for part in row['ranges'])
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md.detail = True
    ctor = candidate['constructorWitness']
    instructions = list(md.disasm(image[ctor['entry']-0x100000:ctor['entry']+ctor['instructionBytes']-0x100000], ctor['entry']))
    assert len(instructions) * 4 == ctor['instructionBytes']
    decoded = {row.address: row for row in instructions}
    load = decoded[ctor['vtableLoad']['instruction']]
    store = decoded[ctor['vtableStore']]
    assert load.mnemonic == 'ldr' and load.operands[1].type == ARM_OP_MEM
    assert load.operands[1].mem.base == ARM_REG_PC
    assert load.address + 8 + load.operands[1].mem.disp == ctor['vtableLoad']['address']
    register = load.operands[0].reg
    assert store.mnemonic == 'str' and store.operands[0].reg == register
    assert store.operands[1].mem.disp == 0
    between = [row for row in instructions if load.address < row.address < store.address]
    assert all(register not in row.regs_access()[1] for row in between)
    this_register = store.operands[1].mem.base
    assert any(row.mnemonic == 'mov' and row.operands[0].reg == this_register and row.operands[1].type == ARM_OP_REG
               and row.operands[1].reg == ARM_REG_R0 for row in instructions if row.address < load.address)
    table = candidate['tables'][0]
    address, size = table['address'], 24
    raw_table = image[address-0x100000:address+size-0x100000]
    assert struct.unpack_from('<I', image, ctor['vtableLoad']['address']-0x100000)[0] == address
    assert hashlib.sha256(image[address-0x100000:address+table['bytes']-0x100000]).hexdigest() == table['sha256']
    entries = []
    for index, target in enumerate(struct.unpack('<6I', raw_table)):
        row = {'key': index, 'slot': address + index * 4, 'target': target,
               'mode': 'ARM' if target else None, 'virtual': True, 'thisAdjustmentBytes': 0}
        if not target:
            row['null'] = True
        entries.append(row)
    assert entries[5]['target'] == 0x202cf4 and table['slot'] == entries[5]['slot']
    function = copy.deepcopy(candidate['functions'][0])
    assert function['canonicalIdentity']['address'] == 0x202cf4
    code = image[0x202cf4-0x100000:0x202d1c-0x100000]
    body = list(md.disasm(code, 0x202cf4))
    assert len(body) == 10 and all(row.size == 4 for row in body)
    external = [(row.address, row.operands[0].imm) for row in body
                if row.group(capstone.CS_GRP_JUMP) and row.operands[0].type == ARM_OP_IMM
                and not 0x202cf4 <= row.operands[0].imm < 0x202d1c]
    assert external == [(0x202d14, 0x1a1dc8)]
    assert body[-1].mnemonic == 'bx' and body[-1].operands[0].reg == ARM_REG_LR
    name = 'sq-table020-reviewed-vtable-prefix-six-slots'
    function['tableWitnesses'] = [{'table': name, 'slot': table['slot'], 'target': 0x202cf4}]
    for transfer in function['outgoingTransfers']:
        if transfer['kind'] == 'tail':
            transfer['kind'] = 'branch'
    packet = {'schemaVersion': 1, 'moduleSha256': candidate['moduleSha256'],
        'frozenCensus': candidate['frozenCensus'], 'producer': pin(Path(__file__).resolve()),
        'boundaryEvidence': pin(candidate_path), 'boundaryProducer': candidate['producer'],
        'tables': [{'name': name, 'encoding': 'vtable-function-pointer', 'readerFunction': ctor['entry'],
            'literalAddress': ctor['vtableLoad']['address'], 'literalBytes': 4,
            'literalSha256': ctor['vtableLoad']['sha256'], 'start': address, 'bytes': size,
            'sha256': hashlib.sha256(raw_table).hexdigest(), 'entries': entries}],
        'functions': [function], 'sourceCreditGranted': 0, 'initializedTextByteDenominatorChanged': False,
        'newCandidateFunctions': 1, 'newInstructionUnionBytes': 40, 'candidatePeerOverlaps': [],
        'sharedTailAliases': [], 'tableExtentClaim': 'Reviewed six-slot prefix only; following bytes are not assigned to this vtable'}
    function['instructionRanges'][0]['priorClassification'] = 'defined-unowned-instruction'
    normalized = overlay.validate(raw_base, packet, image)
    assert len(normalized) == 1 and normalized[0]['textBodyBytes'] == 40
    output = ROOT / 'evidence/verification'
    output.mkdir(parents=True, exist_ok=True)
    target = output / 'lookup020-function-overlay.json'
    target.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    review = {'schemaVersion': 1, 'status': 'independently-reviewed-inventory-only',
        'overlay': pin(target), 'moduleSha256': candidate['moduleSha256'], 'preSourceCandidate': pin(candidate_path),
        'validator': pin(ROOT / 'toolscripts/native_census_overlay.py'), 'producer': pin(Path(__file__).resolve()),
        'previousComposedEntries': base['functionCount'], 'addedDiscoveredEntries': 1, 'newInstructionBytesClassified': 0, 'previouslyDefinedUnownedInstructionBytes': 40,
        'grossInitializedTextBytesUnchanged': 7051280, 'constructorDataflowAndTailReturnDecodedIndependently': True,
        'reviewedVtablePrefixSlots': 6, 'followingVtableExtentUnclaimed': True,
        'producerMutatesSharedRegistry': False, 'sourceCreditGranted': 0}
    (output / 'lookup020-inventory-review.json').write_text(json.dumps(review, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'reviewedNewEntry': hex(0x202cf4), 'instructionBytes': 40, 'registered': False, 'sourceCredit': 0}))


if __name__ == '__main__':
    run()
