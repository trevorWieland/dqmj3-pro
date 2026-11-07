import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-script-create018'


def sha(value):
    return hashlib.sha256(value).hexdigest()


def measure():
    image = original_image()
    census = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    entries = {row['address']: row for row in json.loads(census.read_text())['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    start, end, pool = 0x196b08, 0x196f58, 20
    if entries[start]['ranges'] != [{'start': start, 'endExclusive': end, 'bytes': end - start}]:
        raise ValueError('Complete creation-controller extent changed')
    body = image[start - 0x100000:end - 0x100000]
    code = list(decoder.disasm(body, start))
    if len(code) * 4 != len(body):
        raise ValueError('Creation controller is not completely decoded')
    literals, calls = [], []
    for instruction in code:
        for operand in instruction.operands:
            if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                address = instruction.address + 8 + operand.mem.disp
                if not end <= address < address + 4 <= end + pool:
                    raise ValueError('Creation literal escapes its complete pool')
                literals.append({'instruction': instruction.address, 'address': address,
                    'sha256': sha(image[address - 0x100000:address - 0x100000 + 4])})
        if instruction.mnemonic in ['bl', 'blx', 'b'] and instruction.operands[0].type == ARM_OP_IMM:
            target = instruction.operands[0].imm
            if not start <= target < end:
                calls.append(target)
    if struct.unpack_from('<5I', image, end - 0x100000) != (0x8516d0, 0x01000001, 0x08002000, 0x8c06e8, 0x08000100):
        raise ValueError('Actual creation identity/type/singleton pool changed')
    decoded = {row.address: row for row in code}
    expected = {0x196b18: ('ldr', 'r6, [r0, #0x8c]'), 0x196b1c: ('mov', 'r0, #0x40'),
        0x196b20: ('bl', '#0x2fece8'), 0x196bd4: ('str', 'r6, [r5, #0x14]'),
        0x196bec: ('ldr', 'sb, [r8, #0x4c]'), 0x196c2c: ('ldrb', 'r0, [r6]'),
        0x196cd4: ('ldr', 'r1, [r7, #0x34]'), 0x196cd8: ('ldr', 'r0, [r7, #0x18]'),
        0x196ce8: ('bl', '#0x198578'), 0x196d00: ('bl', '#0x19828c'),
        0x196d8c: ('ldr', 'r0, [r7, #0x84]'), 0x196d94: ('ldr', 'r0, [r0, #0xc]'),
        0x196e14: ('ldr', 'fp, [r8, #0x54]'), 0x196f08: ('bl', '#0x19e864')}
    for address, pair in expected.items():
        if (decoded[address].mnemonic, decoded[address].op_str) != pair:
            raise ValueError('Creation ABI/ownership witness changed')
    helpers = []
    for entry, role in [(0x19e864, 'object assignment; frozen opaque012 source'),
            (0x19e8c4, 'collectable chain link; same named012 node type'),
            (0x18388c, 'explicit unqualified allocation/reallocation provider'),
            (0x198578, 'unqualified complete VM indexed-get provider'),
            (0x19828c, 'unqualified complete VM indexed-error provider'),
            (0x1a1dc8, 'optional actual original table-hit probe; no source-provider admission')]:
        row = entries[entry]
        helpers.append({'entry': entry, 'role': role, 'mode': row['mode'], 'ranges': row['ranges'],
            'instructionSha256': sha(b''.join(image[span['start'] - 0x100000:span['endExclusive'] - 0x100000] for span in row['ranges'])),
            'newIntervalCredit': 0})
    caller_sites = []
    for index, (word,) in enumerate(struct.iter_unpack('<I', image[:7051280])):
        if word & 0x0f000000 != 0x0b000000:
            continue
        displacement = word & 0xffffff
        if displacement & 0x800000:
            displacement -= 1 << 24
        if 0x100000 + index * 4 + 8 + displacement * 4 == start:
            caller_sites.append(0x100000 + index * 4)
    if caller_sites != [0x18fe40]:
        raise ValueError('Actual Execute creation caller changed')
    record = {'schemaVersion': 1, 'status': 'measured-before-script-create018-source',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'censusSha256': sha(census.read_bytes()),
        'completeController': {'entry': start, 'endExclusive': end, 'mode': 'ARM', 'instructionBytes': len(body),
            'instructionSha256': sha(body), 'poolBytes': pool, 'poolSha256': sha(image[end - 0x100000:end - 0x100000 + pool]),
            'literalReferences': literals, 'directCalleesOrTailCalls': sorted(set(calls))},
        'caller': {'canonicalOwner': 0x18d65c, 'callSite': 0x18fe40, 'operation': 'Execute CLOSURE'},
        'distinctSourceApi': 'sq_script_create018', 'canonicalMappingOwnedByCoordinator': True,
        'targetApi': ['opaque VM pointer', 'actual011/012 destination object pointer', 'actual compact prototype011 pointer'],
        'targetClosureBytes': 64, 'closureTypeAuthority': 'SqScriptClosure017',
        'vmBinding': {'storageAuthority': 'SqNativeCreationStorage016; exact alias only', 'targetStackOffset': 24,
            'stackBaseOffset': 52, 'currentFramePointerOffset': 132, 'targetSharedOffset': 140, 'nativeSharedOffset': 144,
            'targetParentClosureObjectOffset': 8, 'targetParentClosureValueOffset': 12,
            'portableBaseAndCurrentPointerSlotsReservedWithinOpaqueStorage': True,
            'fullVmOrFullCallInfoLayoutQualified': False, 'incompatibleLegacyVmCastAllowed': False},
        'prototypeBinding': {'outerCountOffset': 76, 'outerPointerOffset': 80, 'outerRecordBytes': 20,
            'outerKindUsesLow8Bits': True, 'defaultCountOffset': 84, 'defaultPointerOffset': 88, 'defaultIndexBytes': 4},
        'readOrder': ['Capture shared state before allocation',
            'Initialize only measured fields; prototype temporary retain/assign/release precedes shared/list publication',
            'Link fully initialized closure into captured shared state',
            'Capture outer count before reserve; reload descriptor array each iteration',
            'Kinds0/2 select source before any append growth; kind1 appends NULL then selects receiver/lookup destination',
            'Default count cached before reserve; select each stack default before append growth',
            'Retain temporary new closure, retain/publish destination before releasing old destination, then release temporary'],
        'kindSemantics': {'0': 'local stack value at base+descriptor source integer',
            '1': 'typed externally supplied indexed lookup/error binding; not a reconstructed complete game provider',
            '2': 'actual parent script017 captured value by source integer', 'otherLowBytes': 'skip descriptor without appending'},
        'lookupFailureBehavior': 'Call error provider and returnfalse without publishing destination or releasing the raw linked closure',
        'runtimeNullSingleton': {'address': 0x8c06e8, 'actualOriginalInitializationPrefix': [0x6ff69c, 0x6ff6b0],
            'initializerSha256': sha(image[0x6ff69c - 0x100000:0x6ff6b0 - 0x100000]), 'newIntervalCredit': 0},
        'helpersAndProviderBoundaries': helpers,
        'lookupEvidenceModesMustRemainSeparate': ['local-parent-default paths',
            'explicit lookup/error interface-boundary fixtures', 'optional actual original narrow table/string hit'],
        'cachedOriginalLookupResultsAllowedInAuthoredCode': False, 'completeVmSourceGraphClaimed': False,
        'allocationMustSucceed': True, 'nullPrototypeNullAllocationAndAssert146590BehaviorQualified': False,
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0,
        'coordinatorAdmissionRequired': True, 'gcWholeVmGameOrDeviceClaimed': False, 'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave018/script_create.c').exists():
        old = json.loads((OUT / 'claim.json').read_text())
        if old['completeController'] != record['completeController']:
            raise ValueError('Historical018 controller claim changed')
        print(json.dumps({'status': 'historical018-claim-revalidated'}))
        return
    (OUT / 'claim.json').write_text(json.dumps(record, indent=2) + '\n')
    print(json.dumps({'status': record['status'], 'completeInstructionBytes': 1104, 'poolBytes': 20}))


if __name__ == '__main__':
    measure()
