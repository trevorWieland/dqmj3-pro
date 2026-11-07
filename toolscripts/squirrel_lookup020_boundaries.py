import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-lookup020'
BODIES = [
    ('indexed-get', 0x198578, 612, 8), ('fallback-get', 0x197b18, 1200, 24),
    ('index-error', 0x19828c, 108, 4), ('object-to-byte-string', 0x197fe0, 336, 12),
    ('variadic-error-format', 0x19813c, 240, 4), ('shared-scratch-buffer', 0x1a36d4, 108, 0),
    ('object-type-name-entry-prefix', 0x191f20, 8, 0), ('shared-type-name-dispatch-tail', 0x191f28, 236, 56),
    ('table-metamethod-lookup-candidate', 0x202cf4, 40, 0), ('metamethod-call-controller', 0x18d4fc, 344, 8)]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def pin(path):
    blob = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(blob), 'sha256': sha(blob)}


def measure():
    image = original_image()
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    entries = {row['address']: row for row in census['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True

    def memory(start, length):
        return image[start - 0x100000:start - 0x100000 + length]

    def routine(role, address, size, pool):
        end = address + size
        seeded = address in entries
        if seeded and entries[address]['ranges'] != [{'start': address, 'endExclusive': end, 'bytes': size}]:
            raise ValueError('020 canonical complete extent changed: ' + hex(address))
        instructions = list(decoder.disasm(memory(address, size), address))
        if len(instructions) * 4 != size:
            raise ValueError('020 complete routine did not decode: ' + hex(address))
        literals, outgoing, indirect = [], [], []
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    target = instruction.address + 8 + operand.mem.disp
                    if not end <= target < end + pool:
                        raise ValueError('020 pool extent does not cover literal: ' + hex(instruction.address))
                    literals.append({'instruction': instruction.address, 'address': target, 'bytes': 4, 'sha256': sha(memory(target, 4))})
            if instruction.mnemonic in ['b', 'bl', 'blx'] and instruction.operands:
                operand = instruction.operands[0]
                if operand.type == ARM_OP_IMM:
                    if not address <= operand.imm < end:
                        outgoing.append({'address': instruction.address, 'target': operand.imm,
                            'kind': 'tail' if instruction.mnemonic == 'b' else 'call', 'sha256': sha(instruction.bytes)})
                else:
                    indirect.append({'address': instruction.address, 'operand': instruction.op_str, 'sha256': sha(instruction.bytes)})
        return {'role': role, 'entry': address, 'endExclusive': end, 'mode': 'ARM',
            'instructionBytes': size, 'instructions': len(instructions), 'instructionSha256': sha(memory(address, size)),
            'poolBytes': pool, 'poolSha256': sha(memory(end, pool)), 'literalReferences': literals,
            'outgoingTransfers': outgoing, 'indirectTransfers': indirect, 'frozenCensusEntryPresent': seeded}

    functions = [routine(*row) for row in BODIES]
    candidate = next(row for row in functions if row['entry'] == 0x202cf4)
    if candidate['frozenCensusEntryPresent']:
        raise ValueError('020 candidate unexpectedly already exists in frozen census')
    overlaps = [row['address'] for row in census['functions'] for span in row['ranges']
        if span['start'] < 0x202d1c and 0x202cf4 < span['endExclusive']]
    if overlaps or entries[0x202d1c]['ranges'][0]['start'] != 0x202d1c:
        raise ValueError('020 candidate overlaps existing instruction ownership')
    table, slot = 0x850dac, 0x850dc0
    if struct.unpack('<I', memory(slot, 4))[0] != 0x202cf4:
        raise ValueError('020 actual table slot5 identity changed')
    constructor = routine('original-table-constructor-witness-only', 0x19b998, 104, 4)
    ctor_literal = [row for row in constructor['literalReferences'] if struct.unpack('<I', memory(row['address'], 4))[0] == table]
    if len(ctor_literal) != 1:
        raise ValueError('020 original constructor no longer selects actual wider table')
    ctor_code = list(decoder.disasm(memory(0x19b998, 104), 0x19b998))
    ctor_store = [instruction for instruction in ctor_code if instruction.mnemonic == 'str' and instruction.op_str == 'r0, [r4]']
    if len(ctor_store) != 1:
        raise ValueError('020 table constructor publication witness needs review')
    vt_witness = {'address': table, 'bytes': 48, 'sha256': sha(memory(table, 48)), 'slot': slot,
        'slotBytes': 4, 'slotSha256': sha(memory(slot, 4)), 'slotIndex': 5, 'target': 0x202cf4}
    literal_data = []
    for address in [0x198130, 0x198134, 0x1982fc]:
        start = address - 0x100000
        length = image.index(0, start, start + 256) - start + 1
        literal_data.append({'address': address, 'bytes': length, 'sha256': sha(memory(address, length)), 'kind': 'NUL-terminated-byte-format'})
    names = []
    for reference in functions[7]['literalReferences']:
        address = struct.unpack('<I', memory(reference['address'], 4))[0]
        start = address - 0x100000
        length = image.index(0, start, start + 128) - start + 1
        names.append({'reader': reference['instruction'], 'address': address, 'bytes': length,
            'sha256': sha(memory(address, length)), 'kind': 'NUL-terminated-byte-type-name'})
    record = {'schemaVersion': 1, 'status': 'measured-before-lookup020-source', 'program': 'dqmj3pro',
        'version': 'update-content0', 'programId': '0004000e001acb00', 'module': 'main',
        'moduleSha256': sha(image), 'frozenCensus': pin(census_path), 'functions': functions,
        'uniqueMeasuredInstructionBytes': sum(row['instructionBytes'] for row in functions),
        'sharedTailOwnership': {'entryPrefix': [0x191f20, 0x191f28], 'sharedTailOwner': 0x191f28,
            'sharedTailExtent': [0x191f28, 0x192014], 'physicalInstructionUnionBytes': 244,
            'prefixAloneIsNotACompleteReturningFunction': True, 'duplicateCreditAllowed': False},
        'tableMetamethodVtableWitness': vt_witness,
        'constructorWitness': {'entry': 0x19b998, 'instructionBytes': 104,
            'instructionSha256': constructor['instructionSha256'], 'vtableLoad': ctor_literal[0],
            'vtableStore': ctor_store[0].address, 'sourceOrInventoryCredit': 0},
        'literalData': literal_data, 'typeNameData': names,
        'bindings': {'vmStack': 24, 'vmTop': 48, 'vmBase': 52, 'vmRootTable': 60, 'vmErrorObject': 64,
            'vmShared': 140, 'sharedMetamethodNamesIndirectPointerSlot': 0, 'sharedString015PointerSlot': 20,
            'sharedDefaultDelegateValueOffsets': [84, 92, 100, 108, 116, 124, 132, 148, 156],
            'sharedScratchPointer': 172, 'sharedScratchCapacity': 176,
            'nativeSharedBindingsMustBeDeclaredAndNonoverlapping': True,
            'fullVmSharedClassOrInstanceLayoutQualified': False},
        'measuredNegativeStringIndex': {'absoluteIndexMustBeLessThanLength': True,
            'negativeIndexUsesLengthMinusOriginalNegativeIndex': True,
            'canReadBeyondLogicalText': True, 'qualificationRequiresPhysicallyBackedInitializedBytes': True,
            'unbackedIndicesSignedOverflowAndIntMinExcluded': True},
        'sourceBodiesWrittenAtMeasurement': False, 'cachedOriginalResultsAllowed': False,
        'unknownProviders': ['complete VM call17ffac/Execute', 'formatting runtime',
            'allocation backend', 'unqualified class/instance/delegable lifetime and full portable storage'],
        'widerVtableMustEmbedExactNamed011ThreeSlotPrefix': True,
        'indexingPastExisting019ThreeSlotVtableAllowed': False,
        'inventoryAdmissionGranted': 0, 'acceptedSourceCreditGranted': 0, 'requestedExactBytes': 0,
        'gcWholeVmGameDeviceClaimed': False, 'originalPayloadsPublished': False}
    overlay = {'schemaVersion': 1, 'status': 'pre-source-overlay-candidate-coordinator-review-required',
        'moduleSha256': sha(image), 'frozenCensus': pin(census_path),
        'producer': pin(Path(__file__).resolve()), 'tables': [vt_witness],
        'constructorWitness': record['constructorWitness'],
        'initializedTextRegion': {'start': 0x100000, 'bytes': 7051280, 'sha256': sha(image[:7051280])},
        'functions': [{'canonicalIdentity': {'programId': record['programId'], 'moduleSha256': sha(image),
            'address': 0x202cf4, 'mode': 'ARM'},
            'instructionRanges': [{'start': 0x202cf4, 'endExclusive': 0x202d1c, 'bytes': 40, 'instructions': 10,
                'sha256': candidate['instructionSha256'], 'originalMemorySha256': candidate['instructionSha256']}],
            'literalPoolRanges': [], 'tableWitnesses': [vt_witness],
            'outgoingTransfers': candidate['outgoingTransfers'], 'indirectTransfers': candidate['indirectTransfers'],
            'terminalReturn': {'address': 0x202d18, 'sha256': sha(memory(0x202d18, 4))},
            'tailReturn': {'address': 0x202d14, 'target': 0x1a1dc8, 'sha256': sha(memory(0x202d14, 4))},
            'sourceCreditRequested': 0}],
        'precedingEntryWitness': {'address': 0x202ce0, 'endExclusive': 0x202cf0,
            'terminalInstruction': 0x202cec, 'terminalSha256': sha(memory(0x202cec, 4)), 'unclaimedGapBytes': 4},
        'followingEntryWitness': {'address': 0x202d1c, 'frozenCensusPresent': True,
            'instructionSha256': sha(memory(0x202d1c, 176)), 'sourceCredit': 0},
        'candidatePeerOverlaps': overlaps, 'sharedTailAliases': [], 'newCandidateFunctions': 1,
        'newInstructionUnionBytes': 40, 'inventoryAdmissionGranted': 0, 'sourceCreditGranted': 0,
        'initializedTextByteDenominatorChanged': False, 'coordinatorRegistryChangesRequired': True,
        'sourceBodiesWrittenAtMeasurement': False, 'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if list((ROOT / 'source/squirrel-wave020').glob('*.c')):
        old = json.loads((OUT / 'claim.json').read_text())
        if old['functions'] != functions:
            raise ValueError('Historical020 boundaries changed')
        print(json.dumps({'historicalLookup020MeasurementRevalidated': True}))
        return
    (OUT / 'claim.json').write_text(json.dumps(record, indent=2) + '\n')
    (OUT / 'metamethod-overlay-candidate.json').write_text(json.dumps(overlay, indent=2) + '\n')
    print(json.dumps({'status': record['status'], 'instructionBytes': record['uniqueMeasuredInstructionBytes'],
        'overlayCandidate': pin(OUT / 'metamethod-overlay-candidate.json')}))


if __name__ == '__main__':
    measure()
