import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-string-lifetime015'
FUNCTIONS = [('string-intern-add-and-inline-grow', 0x16b5f0, 0x16b7d4, 4),
    ('string-create', 0x19ba68, 0x19ba80, 0),
    ('string-table-remove', 0x24d9e0, 0x24da70, 0),
    ('string-final-release-with-shared-remove-tail', 0x24d9cc, 0x24da70, 0),
    ('string-destructor', 0x68f564, 0x68f590, 8)]
HELPERS = [(0x2febd8, 0x2fec34, 4, 'ARM'), (0x1010c8, 0x10113c, 0, 'Thumb'),
    (0x301a9c, 0x301b24, 0, 'ARM'), (0x17821c, 0x178290, 0, 'ARM'),
    (0x301f50, 0x301fa4, 0, 'ARM')]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def measure():
    image = original_image()
    census = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    entries = {row['address']: row for row in json.loads(census.read_text())['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows, unique = [], set()
    for role, start, end, pool in FUNCTIONS:
        body = image[start - 0x100000:end - 0x100000]
        code = list(decoder.disasm(body, start))
        if len(code) * 4 != len(body):
            raise ValueError('String body does not decode completely')
        calls, literals = [], []
        for instruction in code:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    address = instruction.address + 8 + operand.mem.disp
                    if not end <= address < address + 4 <= end + pool:
                        raise ValueError('String literal escapes complete measured pool')
                    literals.append({'instruction': instruction.address, 'address': address,
                        'sha256': sha(image[address - 0x100000:address - 0x100000 + 4])})
            if instruction.mnemonic in ['bl', 'blx', 'b'] and instruction.operands[0].type == ARM_OP_IMM:
                target = instruction.operands[0].imm
                if not start <= target < end:
                    calls.append(target)
        if start in entries and entries[start]['ranges'] != [{'start': start, 'endExclusive': end, 'bytes': end - start}]:
            raise ValueError('Canonical string body differs')
        unique.update(range(start, end))
        rows.append({'role': role, 'entry': start, 'endExclusive': end, 'mode': 'ARM',
            'instructionBytes': len(body), 'instructionSha256': sha(body), 'poolBytes': pool,
            'poolSha256': sha(image[end - 0x100000:end - 0x100000 + pool]),
            'literalReferences': literals, 'directCalleesOrTailCalls': sorted(set(calls)),
            'frozenCensusEntryPresent': start in entries, 'requiresCoordinatorCensusReview': start not in entries,
            'sharedTailOwner': 0x24d9e0 if start == 0x24d9cc else None,
            'uniquePrefixBytes': 20 if start == 0x24d9cc else end - start})
    if len(unique) != 716:
        raise ValueError('String physical union double-counted the shared Remove tail')
    for start, end in [(0x24d9cc, 0x24d9e0), (0x68f564, 0x68f590)]:
        if any(span['start'] < end and span['endExclusive'] > start for entry in entries.values() for span in entry['ranges']):
            raise ValueError('New string entry overlaps another canonical owner')
    if struct.unpack_from('<3I', image, 0x851220 - 0x100000) != (0x68f564, 0, 0x24d9cc):
        raise ValueError('Actual string vtable differs')
    if struct.unpack_from('<I', image, 0x16b7d4 - 0x100000)[0] != 0x851220:
        raise ValueError('String constructor literal differs')
    if struct.unpack_from('<2I', image, 0x68f590 - 0x100000) != (0x81d020, 0x01000001):
        raise ValueError('String base/reset destructor pool differs')
    if struct.unpack_from('<I', image, 0x81d6fc - 0x100000)[0] != 0x24da70:
        raise ValueError('Following Remove entry lacks vtable witness')
    witnesses = {row.address: row for row in decoder.disasm(image[0x16b5f0 - 0x100000:0x16b7d4 - 0x100000], 0x16b5f0)}
    for address, expected in {0x16b62c: ('ldrsb', 'ip, [r2], #1'), 0x16b63c: ('uxth', 'r3, ip'),
            0x16b6d8: ('strb', 'r5, [r0, #0x1c]'), 0x16b6e8: ('ldrsb', 'r1, [sb], #1'),
            0x16b6f8: ('uxth', 'r1, r1')}.items():
        if (witnesses[address].mnemonic, witnesses[address].op_str) != expected:
            raise ValueError('Byte width/sign-extension witness differs')
    helper_rows = []
    for start, end, pool, mode in HELPERS:
        row = entries[start]
        if row['mode'] != mode or row['ranges'] != [{'start': start, 'endExclusive': end, 'bytes': end - start}]:
            raise ValueError('Actual original byte-helper extent differs')
        code = list(Cs(CS_ARCH_ARM, CS_MODE_THUMB if mode == 'Thumb' else CS_MODE_ARM).disasm(image[start - 0x100000:end - 0x100000], start))
        if sum(item.size for item in code) != end - start:
            raise ValueError('Original byte helper is not completely decoded')
        helper_rows.append({'entry': start, 'endExclusive': end, 'mode': mode, 'instructionBytes': end - start,
            'instructionSha256': sha(image[start - 0x100000:end - 0x100000]), 'poolBytes': pool,
            'poolSha256': sha(image[end - 0x100000:end - 0x100000 + pool]), 'newIntervalCredit': 0})
    callers = []
    for index, (word,) in enumerate(struct.iter_unpack('<I', image[:7051280])):
        if word & 0x0f000000 != 0x0b000000:
            continue
        immediate = word & 0xffffff
        if immediate & 0x800000:
            immediate -= 1 << 24
        target = 0x100000 + index * 4 + 8 + immediate * 4
        if target == 0x16b5f0:
            callers.append(0x100000 + index * 4)
    if callers != [0x19ba74, 0x1b30d0]:
        raise ValueError('Intern Add callers differ')
    report = {'schemaVersion': 1, 'status': 'measured-before-string-source-implementation',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'censusSha256': sha(census.read_bytes()), 'functions': rows,
        'logicalBodyBytesIncludingSharedTail': 860, 'uniqueInstructionBytes': 716, 'scalarPointerPoolBytes': 12,
        'physicalTailOwner': {'entry': 0x24d9e0, 'sharedBy': 0x24d9cc, 'sharedInstructionBytes': 144, 'duplicateCredit': 0},
        'actualStringVtable': {'address': 0x851220, 'bytes': 12,
            'sha256': sha(image[0x851220 - 0x100000:0x85122c - 0x100000])},
        'callerWitnesses': [{'callSite': 0x19ba74, 'canonicalOwner': 0x19ba68}, {'callSite': 0x1b30d0, 'canonicalOwner': 0x1b2fbc}],
        'targetAbi': {'prefixBytes': 12, 'stringSharedOffset': 12, 'bucketNextOffset': 16,
            'lengthOffset': 20, 'hashOffset': 24, 'byteStorageOffset': 28, 'nominalAllocationHeaderBytes': 32,
            'tableBucketPointerOffset': 0, 'tableSlotCountOffset': 4, 'tableUsedOffset': 8,
            'sharedStringTablePointerOffset': 20, 'byteSignedForHash': True, 'hashCodeUnitConversionBits': 16},
        'encodingScope': 'Raw8-bit storage; each signed byte converted to unsigned16 for hash; no UTF16 or general Unicode decoder claim',
        'hashFormula': 'U32 seed=length; step=(length>>5)|1; decrement remaining by step but advance source by1 byte per mix',
        'readOrderContract': ['Initial hash selects lookup/insertion bucket; compare full declared byte length',
            'Allocate nominal header32+length and initialize only the measured prefix fields before copying bytes',
            'Terminate with one zero byte; recompute stored hash from current input after allocation/copy',
            'Link inserted value and increase use count before testing crowding',
            'Publish doubled slot count before bucket allocation; clear/migrate then free old buckets',
            'Create publishes shared owner only after Add returns, including cache hits',
            'Remove unlinks and decrements use count, captures length before virtual destructor, then frees captured allocation size'],
        'originalByteHelpers': helper_rows,
        'sharedStateAdapter': {'type': 'SqPrefixState012', 'mechanism': 'byte-copy pointer from opaque unknown bytes at20',
            'portableProvisionerMustReserveStorage': True, 'unalignedTypedPointerOrIncompatibleStateCast': False,
            'fullSharedStatePortableLayoutOrFutureAdjacentFieldNonoverlapQualified': False},
        'missingStringRemoval': {'escapeCallSite': 0x24da6c, 'dependency': 0x146590,
            'observedDependencyEntryIsNop': True, 'originalAbortOrReturnBehaviorQualified': False,
            'includedInAdmittedDomain': False},
        'domain': ['Valid initialized nonempty power-of-two bucket arrays and bounded byte buffers',
            'Successful aligned nonoverlapping allocation and retained-storage disposal providers',
            'Removal target registered in its stored-hash bucket; ordinary typed callbacks return normally'],
        'originalAllocator': 0x2fece8, 'originalDisposal': 0x19d680,
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0,
        'coordinatorAdmissionRequired': True, 'gcWholeVmGameOrDeviceClaimed': False, 'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave015/string.c').exists():
        old = json.loads((OUT / 'claim.json').read_text())
        if old['functions'] != rows:
            raise ValueError('Historical string claim changed')
        print(json.dumps({'status': 'historical-string-claim-revalidated'}))
        return
    (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'uniqueInstructionBytes': 716, 'sourceWritten': False}))


if __name__ == '__main__':
    measure()
