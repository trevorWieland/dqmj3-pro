import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-class-release009'
FUNCTIONS = [('class-final-release', 0x665ee0, 0x665f20, 0),
    ('class-destructor', 0x666144, 0x666380, 4), ('class-finalize', 0x665f20, 0x66613c, 8),
    ('member-vector-resize', 0x1a51e0, 0x1a5308, 4)]


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
        instructions = list(decoder.disasm(body, start))
        if len(instructions) * 4 != len(body) or entries[start]['ranges'] != [
                {'start': start, 'endExclusive': end, 'bytes': end - start}]:
            raise ValueError('Complete measured class body differs from canonical census')
        literals, callees = [], []
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    pointer = instruction.address + 8 + operand.mem.disp
                    if not end <= pointer < pointer + 4 <= end + pool:
                        raise ValueError('Class literal escapes measured pool')
                    literals.append({'instruction': instruction.address, 'address': pointer,
                        'sha256': sha(image[pointer - 0x100000:pointer - 0x100000 + 4])})
            if instruction.mnemonic in ['bl', 'b'] and instruction.operands[0].type == ARM_OP_IMM:
                target = instruction.operands[0].imm
                if not start <= target < end:
                    callees.append(target)
        rows.append({'role': role, 'entry': start, 'endExclusive': end, 'mode': 'ARM',
            'instructionBytes': len(body), 'instructionSha256': sha(body), 'poolBytes': pool,
            'poolSha256': sha(image[end - 0x100000:end - 0x100000 + pool]),
            'literals': literals, 'directCalleesOrTailCalls': sorted(set(callees)),
            'canonicalCensusExtentVerified': True})
    table = image[0x850d90 - 0x100000:0x850d9c - 0x100000]
    if struct.unpack('<3I', table) != (0x666144, 0, 0x665ee0):
        raise ValueError('Measured class vtable identity differs')
    report = {'schemaVersion': 1, 'status': 'measured-before-class-release-source-implementation',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'censusSha256': sha(census_path.read_bytes()), 'functions': rows,
        'completeMeasuredInstructionBytes': 1472, 'scalarPointerPoolBytes': 16,
        'classVtable': {'address': 0x850d90, 'bytes': 12, 'sha256': sha(table),
            'destructorSlot': 0x850d90, 'releaseSlot': 0x850d98},
        'targetAbi': {'referenceBytes': 20, 'classBytes': 92, 'sharedOffset': 20,
            'memberTableOffset': 24, 'baseClassOffset': 28, 'firstMemberVectorOffset': 32,
            'secondMemberVectorOffset': 44, 'objectVectorOffset': 56, 'attributesOffset': 68,
            'typeTagOffset': 76, 'releaseHookOffset': 80, 'lockedByteOffset': 84, 'instanceBytesOffset': 88,
            'memberRecordBytes': 16, 'destructorReturnsThisPointer': True},
        'readOrderContract': ['Optional release hook sees intact class before virtual-destructor lookup',
            'Reload virtual destructor after release hook returns',
            'Install class identity then unlink unmarked collectable',
            'Finalize attributes, first member vector, second member vector and object vector',
            'Release and clear member table before releasing and clearing base class',
            'Destroy residual attributes and object/member vector backing storage',
            'Within each member record release second object before first, caching current record across callbacks',
            'Reload vector size and backing pointer between records',
            'Reset base identity and weak target before final92-byte disposal'],
        'globalNullPrecondition': {'address': 0x8c06e8, 'bytes': 8, 'type': 0x01000001, 'payload': 0,
            'onDiskBytesAreUninitializedZeros': True, 'originalInitializerPrefix': 0x6ff69c,
            'prefixEndExclusive': 0x6ff6b0, 'prefixSha256': sha(image[0x6ff69c - 0x100000:0x6ff6b0 - 0x100000]),
            'prefixExecutionIsPreconditionEvidenceOnly': True},
        'unreachableTemporaryCleanup': {'reason': 'Local fill member records hold fixed NULL tags and zero payloads; callbacks do not receive their unexposed stack storage',
            'constantNullType': 0x01000001, 'referenceFlag': 0x08000000,
            'requiresStaticReachabilityProof': True, 'patchedOriginalExecutionAllowed': False},
        'sourceDependencies': [{'entry': 0x19e864, 'lane': 'native-wave005', 'newCredit': 0},
            {'entry': 0x24d73c, 'lane': 'squirrel-array-release007', 'newCredit': 0}],
        'sharedBaseReset': {'start': 0x233bd8, 'endExclusive': 0x233c04, 'censusOwner': 0x1cdcc4,
            'newFunctionOrFragmentCredit': 0},
        'externalServices': [{'originalThunk': 0x19d680, 'service': 'typed C logical deallocation'},
            {'originalThunk': 0x18388c, 'service': 'typed C bounded reallocation'},
            {'service': 'typed release hook and polymorphic reference callbacks'}],
        'constructorAndVmClassOperationsClaimed': False,
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0,
        'coordinatorAdmissionRequired': True, 'duplicatePhysicalCreditAllowed': False,
        'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave009/class_release.c').exists():
        previous = json.loads((OUT / 'claim.json').read_text())
        identity = ['entry', 'endExclusive', 'instructionSha256', 'poolSha256']
        if previous['moduleSha256'] != report['moduleSha256'] or any(
                any(old[key] != new[key] for key in identity)
                for old, new in zip(previous['functions'], rows, strict=True)):
            raise ValueError('Historical class claim changed')
        print(json.dumps({'status': 'historical-claim-revalidated-without-rewriting', 'instructionBytes': 1472}))
        return
    (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'instructionBytes': 1472, 'sourceCodeWritten': False}))


if __name__ == '__main__':
    measure()
