import hashlib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-array-release007'
FUNCTIONS = [('array-final-release', 0x665bd4, 0x665bfc, 0), ('array-destructor', 0x665c60, 0x665cc0, 12),
    ('object-vector-destructor', 0x77f3f8, 0x77f478, 0), ('collectable-chain-unlink', 0x24d73c, 0x24d76c, 0)]


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
        blob = image[start - 0x100000:end - 0x100000]
        instructions = list(decoder.disasm(blob, start))
        if len(instructions) * 4 != len(blob):
            raise ValueError('Claimed ARM body does not decode completely')
        literals, callees = [], []
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    pointer = instruction.address + 8 + operand.mem.disp
                    if not end <= pointer < pointer + 4 <= end + pool:
                        raise ValueError('Destructor literal escapes measured pool')
                    literals.append({'instruction': instruction.address, 'literalAddress': pointer,
                        'literalSha256': sha(image[pointer - 0x100000:pointer - 0x100000 + 4])})
            if instruction.mnemonic in ['bl', 'b'] and instruction.operands[0].type == ARM_OP_IMM:
                target = instruction.operands[0].imm
                if not start <= target < end:
                    callees.append(target)
        row = {'role': role, 'entry': start, 'mode': 'ARM', 'endExclusive': end, 'instructionBytes': len(blob),
            'instructionSha256': sha(blob), 'poolBytes': pool,
            'poolSha256': sha(image[end - 0x100000:end - 0x100000 + pool]),
            'literalReferences': literals, 'directCalleesOrTailCalls': sorted(set(callees)),
            'frozenCensusEntryPresent': start in entries}
        if start in entries:
            ranges = entries[start]['ranges']
            if ranges != [{'start': start, 'endExclusive': end, 'bytes': end - start}]:
                raise ValueError('Measured body differs from frozen census extent')
        else:
            if any(span['start'] < end and span['endExclusive'] > start for entry in entries.values() for span in entry['ranges']):
                raise ValueError('New destructor body overlaps another census function')
            row['newFunctionEvidence'] = {'actualVtableSlotAddress': 0x850d74, 'actualVtableTarget': start,
                'terminalReturn': end - 4, 'followingPoolEndsAt': end + pool,
                'followingSeededFunction': 0x665ccc, 'requiresCoordinatorCensusReview': True}
        rows.append(row)
    table = image[0x850d74 - 0x100000:0x850d80 - 0x100000]
    if struct.unpack('<3I', table) != (0x665c60, 0, 0x665bd4):
        raise ValueError('Actual SQArray vtable differs')
    report = {'schemaVersion': 1, 'status': 'measured-before-array-release-source-implementation',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'censusSha256': sha(census_path.read_bytes()), 'functions': rows,
        'completeMeasuredInstructionBytes': sum(row['instructionBytes'] for row in rows), 'scalarPointerPoolBytes': 12,
        'arrayVtable': {'address': 0x850d74, 'bytes': 12, 'sha256': sha(table),
            'destructorSlot': 0x850d74, 'releaseSlot': 0x850d7c},
        'actualCallWitnesses': [{'call': 0x665c88, 'target': 0x24d73c}, {'call': 0x665c90, 'target': 0x77f3f8}],
        'targetAbi': {'arrayBytes': 36, 'referencePrefixBytes': 20, 'sharedPointerOffset': 20,
            'vectorOffset': 24, 'vectorBytes': 12, 'objectStride': 8, 'sharedChainOffset': 68,
            'weakObjectPayloadTypeOffset': 12, 'weakObjectPayloadValueOffset': 16,
            'destructorAndVectorDestructorReturnTheirThisPointer': True},
        'readOrderContract': ['Store array vtable before observer-visible cleanup',
            'Skip chain unlink only for high-bit marked array reference count',
            'Reload vector size and values across virtual element-release callbacks',
            'Deallocate vector using current capacity before weak-object reset',
            'Store weak-prefix vtable and clear weak target before final array deallocation'],
        'sharedOwnership': {'live006ClaimsAnyOfTheseIntervals': False, 'duplicatePhysicalCreditAllowed': False,
            'sharedBaseResetFragment': {'start': 0x233bd8, 'endExclusive': 0x233c04, 'censusOwner': 0x1cdcc4,
                'newFunctionOrAdditionalFragmentCreditClaimed': False}},
        'externalServices': [{'originalThunk': 0x19d680, 'target': 0x30233c, 'service': 'deterministic source deallocation',
            'allocatorRecoveredOrCredited': False}],
        'observerFixtureRequirement': 'Real SQArray release vtable must be distinct from fake generic-reference observer vtable',
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0, 'coordinatorAdmissionRequired': True,
        'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave007/array_release.c').exists():
        previous = json.loads((OUT / 'claim.json').read_text())
        identity = ['entry', 'endExclusive', 'instructionBytes', 'instructionSha256', 'poolBytes', 'poolSha256']
        if previous['moduleSha256'] != report['moduleSha256'] or any(
                any(old[key] != new[key] for key in identity)
                for old, new in zip(previous['functions'], report['functions'], strict=True)):
            raise ValueError('Historical pre-source claim differs from the immutable original')
        print(json.dumps({'status': 'revalidated-historical-claim-without-rewriting-it', 'instructionBytes': 312}))
        return
    (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'completeInstructionBytes': report['completeMeasuredInstructionBytes'],
        'newUnseededDestructorBytes': 96, 'sourceCodeWritten': False}))


if __name__ == '__main__':
    measure()
