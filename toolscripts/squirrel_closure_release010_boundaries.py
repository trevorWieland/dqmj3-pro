import hashlib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-closure-release010'
FUNCTIONS = [('script-closure-final-release', 0x6a7610, 0x6a7638, 0),
    ('script-closure-destructor', 0x6a769c, 0x6a7774, 12)]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def measure(amend=False):
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
            if instructions[-1].mnemonic != 'pop' or 'pc' not in instructions[-1].op_str or struct.unpack_from('<I', image, 0x8516f4 - 0x100000)[0] != end + pool:
                raise ValueError('New closure destructor lacks its return and neighboring vtable entry witnesses')
            row['newFunctionEvidence'] = {'actualVtableSlotAddress': 0x8516d0, 'actualVtableTarget': start,
                'terminalReturn': end - 4, 'followingPoolEndsAt': end + pool,
                'followingEntry': 0x6a7780, 'followingEntryVtableReleaseSlot': 0x8516f4,
                'followingEntryIsSeeded': False, 'nextSeededFunction': 0x6a7914,
                'requiresCoordinatorCensusReview': True}
        rows.append(row)
    table = image[0x8516d0 - 0x100000:0x8516dc - 0x100000]
    if struct.unpack('<3I', table) != (0x6a769c, 0, 0x6a7610):
        raise ValueError('Actual SQClosure vtable differs')
    report = {'schemaVersion': 1, 'status': 'measured-before-closure-release-source-implementation',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'censusSha256': sha(census_path.read_bytes()), 'functions': rows,
        'completeMeasuredInstructionBytes': sum(row['instructionBytes'] for row in rows), 'scalarPointerPoolBytes': 12,
        'closureVtable': {'address': 0x8516d0, 'bytes': 12, 'sha256': sha(table),
            'destructorSlot': 0x8516d0, 'releaseSlot': 0x8516d8,
            'additionalSlotsOutsideFinalOwnerScope': [{'slot': 0x8516dc, 'target': 0x6a756c},
                {'slot': 0x8516e0, 'target': 0x6a7638}]},
        'actualCallWitnesses': [{'call': 0x6a76c4, 'target': 0x24d73c},
            {'call': 0x6a76cc, 'target': 0x77f3f8}, {'call': 0x6a76d8, 'target': 0x77f3f8}],
        'targetAbi': {'closureBytes': 64, 'referencePrefixBytes': 20, 'sharedPointerOffset': 20,
            'environmentObjectOffset': 24, 'prototypeObjectOffset': 32, 'outerVectorOffset': 40,
            'defaultVectorOffset': 52, 'objectStride': 8, 'sharedChainOffset': 68,
            'destructorReturnsThisPointer': True},
        'readOrderContract': ['Install script-closure identity before observer-visible cleanup',
            'Skip unlink only when reference count high bit is set',
            'Destroy default vector before outer vector with fresh pointer/size reads across callbacks',
            'Release current prototype object before current environment object',
            'Install base-prefix identity and clear current weak target before closure disposal'],
        'sourceDependencies': [{'entry': 0x77f3f8, 'lane': 'squirrel-array-release007', 'newCredit': 0},
            {'entry': 0x24d73c, 'lane': 'squirrel-array-release007', 'newCredit': 0}],
        'ownership': {'live006HasInlineSemanticDraft': True, 'live006AdmittedIntervalCredit': 0,
            'standaloneFinalOwnerTransferredToWave010': True, 'prototypeFinalizationOrGcClaimed': False,
            'actualPrototypeWeakPrefixBytes': 12, 'genericReferenceViewBytes': 20,
            'prefixCompatibilityRequiresExplicitFutureIntegration': True},
        'adjacentUnseededCleanup': {'start': 0x6a7638, 'endExclusive': 0x6a7698, 'poolBytes': 4,
            'actualTableSlot': 0x8516e0, 'calledByClaimedFamily': False, 'newSourceOrBoundaryCredit': 0},
        'externalServices': [{'originalThunk': 0x19d680, 'service': 'typed C logical deallocation',
            'allocatorRecoveredOrCredited': False}, {'service': 'typed normally returning polymorphic reference callbacks'}],
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0, 'coordinatorAdmissionRequired': True,
        'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave010/closure_release.c').exists():
        previous = json.loads((OUT / 'claim.json').read_text())
        identity = ['entry', 'endExclusive', 'instructionBytes', 'instructionSha256', 'poolBytes', 'poolSha256']
        if previous['moduleSha256'] != report['moduleSha256'] or any(
                any(old[key] != new[key] for key in identity)
                for old, new in zip(previous['functions'], report['functions'], strict=True)):
            raise ValueError('Historical pre-source claim differs from the immutable original')
        if amend:
            backup = ROOT / 'work/squirrel-closure-release010/private/initial-pre-source-claim.json'
            if backup.exists():
                raise ValueError('Initial closure claim amendment must be explicit and single-use')
            backup.write_bytes((OUT / 'claim.json').read_bytes())
            report['status'] = 'measured-closure-family-with-explicit-post-source-boundary-amendment'
            report['sourceCodeWrittenAtMeasurement'] = True
            report['boundaryAmendment'] = {'initialBodyAndPoolHashesUnchanged': True,
                'initialClaimPrecededSource': True, 'correctionFollowedSourceCreation': True,
                'initialClaimSha256': sha(backup.read_bytes()),
                'correction': 'Following6a7780 entry has a neighboring vtable witness but is unseeded; nearest following seeded entry is6a7914',
                'initialMetadataRetainedPrivately': True}
            (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
            print(json.dumps({'status': report['status'], 'instructionBytes': 256}))
            return
        print(json.dumps({'status': 'revalidated-historical-claim-without-rewriting-it', 'instructionBytes': 256}))
        return
    (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'completeInstructionBytes': report['completeMeasuredInstructionBytes'],
        'newUnseededDestructorBytes': 216, 'sourceCodeWritten': False}))


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('--amend-boundary-evidence', action='store_true')
    measure(parser.parse_args().amend_boundary_evidence)
