import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-generator-release008'
FUNCTIONS = [('generator-final-release', 0x202dcc, 0x202df4, 0),
    ('generator-destructor', 0x202e68, 0x202f70, 12)]


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
            raise ValueError('Complete measured generator body differs from canonical census')
        literals, callees = [], []
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    pointer = instruction.address + 8 + operand.mem.disp
                    if not end <= pointer < pointer + 4 <= end + pool:
                        raise ValueError('Generator literal escapes measured pool')
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
    table = image[0x81c358 - 0x100000:0x81c364 - 0x100000]
    if struct.unpack('<3I', table) != (0x202e68, 0, 0x202dcc):
        raise ValueError('Measured generator vtable identity differs')
    report = {'schemaVersion': 1, 'status': 'measured-before-generator-release-source-implementation',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'censusSha256': sha(census_path.read_bytes()), 'functions': rows,
        'completeMeasuredInstructionBytes': 304, 'scalarPointerPoolBytes': 12,
        'generatorVtable': {'address': 0x81c358, 'bytes': 12, 'sha256': sha(table),
            'destructorSlot': 0x81c358, 'releaseSlot': 0x81c360},
        'targetAbi': {'referenceBytes': 20, 'generatorBytes': 120, 'sharedOffset': 20,
            'closureObjectOffset': 24, 'savedStackVectorOffset': 32, 'reverseVarargsVectorOffset': 44,
            'callInfoOffset': 56, 'callInfoBytes': 48, 'savedClosureObjectOffset': 64,
            'trapVectorOffset': 104, 'trapRecordBytes': 16, 'stateByteOffset': 116,
            'destructorReturnsThisPointer': True},
        'readOrderContract': ['Install generator vtable before observer-visible cleanup',
            'Unlink only when the high reference-count bit is clear',
            'Free nonzero-capacity POD trap backing storage first',
            'Release saved CallInfo closure before reverse-varargs and saved-stack vectors',
            'Destroy reverse-varargs before saved-stack vector with callback-aware frozen helpers',
            'Release current main closure after both vectors',
            'Reset base-prefix identity and current weak target before final generator free'],
        'ownership': {'weakPrefix': 'clear target only; weak object is not freed',
            'savedFrame': 'saved closure owns a reference; instruction/literals/generator fields are non-owning',
            'traps': 'plain records; no element reference release', 'state': 'destruction does not write state byte',
            'creationYieldResumeKill': 'exclusive live006 ownership, no new claim'},
        'sourceDependencies': [{'entry': 0x77f3f8, 'lane': 'squirrel-array-release007', 'newCredit': 0},
            {'entry': 0x24d73c, 'lane': 'squirrel-array-release007', 'newCredit': 0}],
        'externalServices': [{'originalThunk': 0x19d680, 'target': 0x30233c,
            'service': 'explicit typed C logical deallocation', 'allocatorRecoveredOrCredited': False}],
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0,
        'coordinatorAdmissionRequired': True, 'duplicatePhysicalCreditAllowed': False,
        'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave008/generator_release.c').exists():
        previous = json.loads((OUT / 'claim.json').read_text())
        identity = ['entry', 'endExclusive', 'instructionSha256', 'poolSha256']
        if previous['moduleSha256'] != report['moduleSha256'] or any(
                any(old[key] != new[key] for key in identity)
                for old, new in zip(previous['functions'], rows, strict=True)):
            raise ValueError('Historical generator claim changed')
        print(json.dumps({'status': 'historical-claim-revalidated-without-rewriting', 'instructionBytes': 304}))
        return
    (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'instructionBytes': 304, 'sourceCodeWritten': False}))


if __name__ == '__main__':
    measure()
