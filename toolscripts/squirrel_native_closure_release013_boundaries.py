import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-native-closure-release013'
FUNCTIONS = [('native-closure-final-release', 0x299518, 0x299540, 0),
    ('native-closure-destructor', 0x2995a4, 0x299698, 12)]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def measure():
    image = original_image()
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    entries = {row['address']: row for row in json.loads(census_path.read_text())['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows = []
    for role, start, end, pool in FUNCTIONS:
        body = image[start - 0x100000:end - 0x100000]
        decoded = list(decoder.disasm(body, start))
        if len(decoded) * 4 != len(body):
            raise ValueError('Native-closure body does not decode completely')
        literals, calls = [], []
        for instruction in decoded:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    address = instruction.address + 8 + operand.mem.disp
                    if not end <= address < address + 4 <= end + pool:
                        raise ValueError('Native-closure literal escapes measured pool')
                    literals.append({'instruction': instruction.address, 'address': address,
                        'sha256': sha(image[address - 0x100000:address - 0x100000 + 4])})
            if instruction.mnemonic in ['bl', 'b'] and instruction.operands[0].type == ARM_OP_IMM:
                target = instruction.operands[0].imm
                if not start <= target < end:
                    calls.append(target)
        row = {'role': role, 'entry': start, 'endExclusive': end, 'mode': 'ARM',
            'instructionBytes': len(body), 'instructionSha256': sha(body), 'poolBytes': pool,
            'poolSha256': sha(image[end - 0x100000:end - 0x100000 + pool]),
            'literalReferences': literals, 'directCalleesOrTailCalls': sorted(set(calls)),
            'frozenCensusEntryPresent': start in entries}
        if start in entries:
            if entries[start]['ranges'] != [{'start': start, 'endExclusive': end, 'bytes': end - start}]:
                raise ValueError('Native release differs from complete canonical extent')
        else:
            if any(span['start'] < end and span['endExclusive'] > start for entry in entries.values() for span in entry['ranges']):
                raise ValueError('New native destructor overlaps a canonical function')
            if decoded[-1].mnemonic != 'pop' or 'pc' not in decoded[-1].op_str:
                raise ValueError('New native destructor lacks its terminal return')
            if struct.unpack_from('<I', image, 0x81e564 - 0x100000)[0] != end + pool:
                raise ValueError('Following entry lacks its neighboring vtable witness')
            row['newFunctionEvidence'] = {'actualVtableSlot': 0x81e540, 'terminalReturn': end - 4,
                'poolEnd': end + pool, 'followingUnseededEntry': 0x2996a4,
                'followingEntryTableWitness': 0x81e564, 'nextSeededEntry': 0x2996ac,
                'precedingCleanupEntry': 0x299540, 'precedingCleanupTableWitness': 0x81e550,
                'requiresCoordinatorCensusReview': True}
        rows.append(row)
    table = image[0x81e540 - 0x100000:0x81e54c - 0x100000]
    if struct.unpack('<3I', table) != (0x2995a4, 0, 0x299518):
        raise ValueError('Actual native-closure vtable differs')
    if struct.unpack_from('<I', image, 0x177154 - 0x100000)[0] != 0x81e540:
        raise ValueError('Actual constructor vtable literal differs')
    constructor = {row.address: row for row in decoder.disasm(image[0x176fe0 - 0x100000:0x17704c - 0x100000], 0x176fe0)}
    for address, expected in {0x176fe0: ('mov', 'r0, #0x48'), 0x176fe4: ('bl', '#0x2fece8'),
            0x176ff4: ('ldr', 'r2, [pc, #0x158]'), 0x177000: ('str', 'r2, [r7]'),
            0x177038: ('str', 'r5, [r1, #0x3c]')}.items():
        if (constructor[address].mnemonic, constructor[address].op_str) != expected:
            raise ValueError('Native-closure constructor witness differs')
    report = {'schemaVersion': 1, 'status': 'measured-before-native-closure-source-implementation',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'censusSha256': sha(census_path.read_bytes()), 'functions': rows,
        'completeMeasuredInstructionBytes': 284, 'scalarPointerPoolBytes': 12,
        'nativeClosureVtable': {'address': 0x81e540, 'bytes': 12, 'sha256': sha(table),
            'additionalUnqualifiedSlots': [{'slot': 0x81e54c, 'target': 0x2994a4}, {'slot': 0x81e550, 'target': 0x299540}]},
        'constructorWitness': {'entry': 0x176fc8, 'allocationCall': 0x176fe4, 'vtableLoad': 0x176ff4,
            'vtableLiteral': 0x177154, 'vtableStore': 0x177000, 'nativeCallableStore': 0x177038,
            'sourceOrIntervalCredit': 0},
        'targetAbi': {'closureBytes': 72, 'collectableBytes': 20, 'commonNoncollectablePrefixBytes': 12,
            'sharedOffset': 20, 'parameterCheckOffset': 24, 'typeChecksOffset': 28,
            'outerVectorOffset': 40, 'environmentOffset': 52, 'callableOffset': 60, 'nameOffset': 64,
            'typeMaskScalarBytes': 4, 'objectBytes': 8, 'sharedChainOffset': 68,
            'destructorReturnsThisPointer': True},
        'readOrderContract': ['Install native-closure identity before observer-visible cleanup',
            'Unlink only when collectable count high bit is clear', 'Release name before environment',
            'Destroy current outer vector after both owned header objects',
            'Read and free current POD type-check storage after outer callbacks',
            'Reset base identity and current weak target before final closure disposal'],
        'nativeCallableInvokedByLifetime': False, 'podElementDestructorHasObservableEffects': False,
        'sharedTypes': {'header': 'source/squirrel-wave012/reference_types.h',
            'sha256': '64a44751454449783222f7a7c00654a56f569e8f91a10e0621740c8661c3fbae',
            'collectable': 'SqPrefixCollectable012', 'commonPrefix': 'SqPrototypePrefix011'},
        'reusedPhysicalIntervals': [{'entry': 0x24d73c, 'newCredit': 0}, {'entry': 0x77f3f8, 'newCredit': 0}],
        'externalServices': [{'originalThunk': 0x19d680, 'service': 'typed C retained allocation disposal',
            'allocatorRecoveredOrCredited': False}, {'service': 'exact normally returning opaque-prefix virtual callbacks'}],
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0,
        'coordinatorAdmissionRequired': True, 'gcOrWholeVmOrDeviceClaimed': False, 'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave013/native_closure_release.c').exists():
        previous = json.loads((OUT / 'claim.json').read_text())
        for old, new in zip(previous['functions'], rows, strict=True):
            if any(old[key] != new[key] for key in ['entry', 'endExclusive', 'instructionSha256', 'poolSha256']):
                raise ValueError('Historical native-closure claim differs')
        print(json.dumps({'status': 'historical-native-closure-claim-revalidated', 'instructionBytes': 284}))
        return
    (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'instructionBytes': 284, 'sourceCodeWritten': False}))


if __name__ == '__main__':
    measure()
