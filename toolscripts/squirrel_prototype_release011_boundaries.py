import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-prototype-release011'
FUNCTIONS = [('prototype-final-release', 0x299114, 0x29936c, 0),
    ('prototype-destructor', 0x299424, 0x2994a0, 4)]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def measure():
    image = original_image()
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    entries = {row['address']: row for row in census['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows = []
    for role, start, end, pool in FUNCTIONS:
        body = image[start - 0x100000:end - 0x100000]
        decoded = list(decoder.disasm(body, start))
        if len(decoded) * 4 != len(body):
            raise ValueError('Prototype body does not decode completely as ARM')
        literal_refs, calls = [], []
        for instruction in decoded:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    address = instruction.address + 8 + operand.mem.disp
                    if not end <= address < address + 4 <= end + pool:
                        raise ValueError('Prototype literal escapes measured pool')
                    literal_refs.append({'instruction': instruction.address, 'address': address,
                        'sha256': sha(image[address - 0x100000:address - 0x100000 + 4])})
            if instruction.mnemonic in ['bl', 'b'] and instruction.operands[0].type == ARM_OP_IMM:
                target = instruction.operands[0].imm
                if not start <= target < end:
                    calls.append(target)
        row = {'role': role, 'entry': start, 'endExclusive': end, 'mode': 'ARM',
            'instructionBytes': len(body), 'instructionSha256': sha(body), 'poolBytes': pool,
            'poolSha256': sha(image[end - 0x100000:end - 0x100000 + pool]),
            'literalReferences': literal_refs, 'directCalleesOrTailCalls': sorted(set(calls)),
            'frozenCensusEntryPresent': start in entries}
        if start in entries:
            if entries[start]['ranges'] != [{'start': start, 'endExclusive': end, 'bytes': end - start}]:
                raise ValueError('Prototype release differs from complete canonical extent')
        else:
            if entries[0x29936c]['ranges'][-1]['endExclusive'] != start:
                raise ValueError('Prototype destructor lacks its preceding canonical boundary witness')
            if any(span['start'] < end and span['endExclusive'] > start for entry in entries.values() for span in entry['ranges']):
                raise ValueError('New prototype destructor overlaps an existing function')
            if decoded[-1].mnemonic != 'b' or decoded[-1].operands[0].imm != 0x233bd8:
                raise ValueError('New prototype destructor lacks measured base-reset tail return')
            if struct.unpack_from('<I', image, 0x81e54c - 0x100000)[0] != end + pool:
                raise ValueError('Following entry lacks its neighboring table witness')
            row['newFunctionEvidence'] = {'actualVtableSlot': 0x81e52c,
                'precedingCanonicalEntry': 0x29936c, 'precedingCanonicalEnd': entries[0x29936c]['ranges'][-1]['endExclusive'],
                'tailReturnCall': end - 4, 'tailReturnTarget': 0x233bd8,
                'followingPoolEnd': end + pool, 'followingUnseededEntry': 0x2994a4,
                'followingEntryTableWitness': 0x81e54c, 'nextSeededEntry': 0x299518,
                'requiresCoordinatorCensusReview': True}
        rows.append(row)
    table = image[0x81e52c - 0x100000:0x81e538 - 0x100000]
    if struct.unpack('<3I', table) != (0x299424, 0, 0x299114):
        raise ValueError('Actual prototype vtable differs')
    if struct.unpack_from('<I', image, 0x1a9040 - 0x100000)[0] != 0x81e52c:
        raise ValueError('Actual compiler-builder vtable literal differs')
    constructor = {row.address: row for row in decoder.disasm(image[0x1a8b84 - 0x100000:0x1a8bc0 - 0x100000], 0x1a8b84)}
    for address, expected in {0x1a8b84: ('bl', '#0x2fece8'), 0x1a8b98: ('str', 'r1, [r2, #4]'),
            0x1a8b9c: ('ldr', 'r2, [pc, #0x49c]'), 0x1a8ba4: ('str', 'r2, [r0]'),
            0x1a8ba8: ('stm', 'lr, {r1, ip}')}.items():
        if (constructor[address].mnemonic, constructor[address].op_str) != expected:
            raise ValueError('Measured compiler-builder constructor witness differs')
    report = {'schemaVersion': 1, 'status': 'measured-before-prototype-release-source-implementation',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'censusSha256': sha(census_path.read_bytes()), 'functions': rows,
        'completeMeasuredInstructionBytes': 724, 'scalarPointerPoolBytes': 4,
        'prototypeVtable': {'address': 0x81e52c, 'bytes': 12, 'sha256': sha(table)},
        'factoryWitness': {'entry': 0x1a8b1c, 'allocationCall': 0x1a8b84, 'vtableLoad': 0x1a8b9c,
            'vtableLiteral': 0x1a9040, 'vtableStore': 0x1a8ba4, 'sourceOrIntervalCredit': 0},
        'targetAbi': {'prefixBytes': 12, 'countOffset': 4, 'weakOffset': 8,
            'sourceNameOffset': 12, 'nameOffset': 20, 'stackSizeOffset': 28,
            'generatorByteOffset': 32, 'varargsByteOffset': 33, 'localCountOffset': 36, 'localsOffset': 40,
            'lineCountOffset': 44, 'linesOffset': 48, 'literalCountOffset': 52, 'literalsOffset': 56,
            'parameterCountOffset': 60, 'parametersOffset': 64, 'functionCountOffset': 68, 'functionsOffset': 72,
            'outerCountOffset': 76, 'outersOffset': 80, 'defaultCountOffset': 84, 'defaultsOffset': 88,
            'instructionCountOffset': 92, 'instructionsOffset': 96,
            'objectBytes': 8, 'instructionBytes': 8, 'outerBytes': 20, 'localBytes': 20, 'lineBytes': 8,
            'collectableLinksExist': False, 'destructorReturnsThisPointer': True},
        'readOrderContract': ['Release literal objects before parameter objects before child-function objects',
            'Release outer source object before outer name, caching current record across its callback',
            'Release local-name objects after outer records',
            'Reload each count and backing pointer across element callbacks',
            'Compute compact whole-allocation byte count after vector callbacks but before virtual destructor',
            'Destructor installs prototype identity, releases name before source name, then resets base and weak target',
            'Use captured allocation byte count for one final free after destructor callbacks'],
        'compactAllocation': {'fixedTargetHeaderBytes': 96,
            'order': ['instructions', 'literals', 'parameters', 'functions', 'outers', 'lines', 'locals', 'defaults'],
            'separateOwnedVectorFrees': False, 'nativeTypedTailsMustRemainNaturallyAligned': True},
        'sharedBaseReset': {'start': 0x233bd8, 'endExclusive': 0x233c04, 'censusOwner': 0x1cdcc4,
            'newFunctionOrFragmentCredit': 0},
        'referenceContract': 'Named12-byte prefix and exact opaque-pointer vtable bridges; no prototype-to-collectable cast',
        'externalServices': [{'originalThunk': 0x19d680, 'service': 'typed C whole-allocation disposal',
            'allocatorRecoveredOrCredited': False}, {'service': 'exact typed normally returning opaque-reference callbacks'}],
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0,
        'coordinatorAdmissionRequired': True, 'gcOrWholeVmOrDeviceClaimed': False, 'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave011/prototype_release.c').exists():
        previous = json.loads((OUT / 'claim.json').read_text())
        for old, new in zip(previous['functions'], rows, strict=True):
            if any(old[key] != new[key] for key in ['entry', 'endExclusive', 'instructionSha256', 'poolSha256']):
                raise ValueError('Historical prototype claim differs')
        print(json.dumps({'status': 'historical-prototype-claim-revalidated', 'instructionBytes': 724}))
        return
    (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'instructionBytes': 724, 'sourceCodeWritten': False}))


if __name__ == '__main__':
    measure()
