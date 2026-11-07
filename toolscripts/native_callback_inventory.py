import json
from pathlib import Path
import struct

import native_census_overlay as legacy

CONFIG = 'config/native-callback-overlays.json'


def word(image, origin, address):
    if address % 4 or not origin <= address <= origin + len(image) - 4:
        raise ValueError('Callback witness instruction outside original image')
    return struct.unpack_from('<I', image, address - origin)[0]


def owned(owner, start, end):
    return any(part['start'] <= start < end <= part['endExclusive'] for part in owner['ranges'])


def preserved_stack_slot(image, origin, start, end, field):
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_JUMP, CS_GRP_CALL
    from capstone.arm_const import ARM_REG_SP, ARM_REG_PC, ARM_OP_MEM, ARM_INS_STR, ARM_INS_STRD
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    decoded = list(decoder.disasm(image[start - origin:end - origin], start))
    if len(decoded) * 4 != end - start:
        raise ValueError('Callback lifetime has undecoded instructions')
    for instruction in decoded:
        unused, writes = instruction.regs_access()
        if ARM_REG_SP in writes or ARM_REG_PC in writes or instruction.group(CS_GRP_JUMP) or instruction.group(CS_GRP_CALL):
            raise ValueError('Callback lifetime changes SP or transfers control before initialization')
        if instruction.mnemonic.startswith('st'):
            memory = [op.mem for op in instruction.operands if op.type == ARM_OP_MEM]
            if (instruction.id not in [ARM_INS_STR, ARM_INS_STRD] or len(memory) != 1
                    or instruction.writeback or memory[0].base != ARM_REG_SP or memory[0].index):
                raise ValueError('Unreviewed memory store in callback lifetime')
            size = 8 if instruction.id == ARM_INS_STRD else 4
            if max(field, memory[0].disp) < min(field + 4, memory[0].disp + size):
                raise ValueError('Stored callback is overwritten before initialization')


def validate(base, composed, packet, image):
    origin = base['initializedTextStart']
    end = origin + base['initializedTextGrossBytes']
    if (legacy.sha(image) != base['codeSha256'] or packet['moduleSha256'] != base['codeSha256']
            or packet['sourceCreditGranted'] != 0 or packet['initializedTextByteDenominatorChanged'] is not False):
        raise ValueError('Callback inventory identity or denominator changed')
    current = {row['address']: row for row in composed['functions']}
    owners = legacy.merge((p['start'], p['endExclusive']) for row in current.values() for p in row['ranges'])
    unclassified = legacy.merge((p['start'], p['endExclusive']) for p in base['unclassifiedTextRanges'])
    instructions = legacy.merge((p['start'], p['endExclusive']) for p in base.get('instructionRanges', []))
    data = legacy.merge((p['start'], p['endExclusive']) for p in base.get('definedDataRanges', []))
    rows = packet['functions']
    addresses = [row['canonicalIdentity']['address'] for row in rows]
    if len(set(addresses)) != len(addresses) or set(addresses) & current.keys():
        raise ValueError('Duplicate callback inventory entry')
    witnesses = set()
    for witness in packet['storedCallbackWitnesses']:
        if witness['kind'] != 'arm-stack-stream058-callback':
            raise ValueError('Unsupported callback witness kind')
        owner = current.get(witness['readerFunction'])
        load, store = witness['loadInstruction'], witness['storeInstruction']
        setup, call = witness['initializerArgumentSetup'], witness['initializerCall']
        literal, target = witness['literalAddress'], witness['target']
        field = witness['streamFieldOffset']
        if (owner is None or owner['mode'] != 'ARM' or field not in [32, 36]
                or witness['originalStreamBytes'] != 56 or witness['initializerEntry'] != 0x733c00
                or witness['initializerEntry'] not in current or target not in addresses
                or not load < store < setup < call or not owned(owner, load, call + 4)):
            raise ValueError('Callback reader or original stream ABI differs')
        instruction = word(image, origin, load)
        if instruction & 0xfffff000 != 0xe59f0000 or load + 8 + (instruction & 0xfff) != literal:
            raise ValueError('Callback literal is not the measured AL LDR r0 from PC')
        if store - load not in [4, 8] or (store - load == 8 and word(image, origin, load + 4) != 0xe1a01004):
            raise ValueError('Loaded callback register is not preserved before store')
        if word(image, origin, store) != (0xe58d0000 | field):
            raise ValueError('Callback is not stored in the original SP-based stream field')
        if word(image, origin, setup) != 0xe1a0000d or word(image, origin, setup - 4) != 0xe3a03038:
            raise ValueError('Initializer does not receive the measured SP stream and 56-byte ABI')
        branch = word(image, origin, call)
        displacement = branch & 0xffffff
        if displacement & 0x800000: displacement -= 0x1000000
        if branch >> 24 != 0xeb or call + 8 + displacement * 4 != witness['initializerEntry']:
            raise ValueError('Callback stream is not passed to the qualified initializer')
        if word(image, origin, literal) != target:
            raise ValueError('Stored callback literal target differs')
        preserved_stack_slot(image, origin, store + 4, setup + 4, field)
        for key, address in [('literalSha256', literal), ('loadSha256', load), ('storeSha256', store),
                             ('setupSha256', setup), ('callSha256', call)]:
            if legacy.sha(image[address - origin:address - origin + 4]) != witness[key]:
                raise ValueError('Callback witness bytes changed')
        witnesses.add((witness['id'], target))
    additions, seen, total = [], [], 0
    for row in rows:
        identity = row['canonicalIdentity']
        address = identity['address']
        if (identity['programId'] != '0004000e001acb00' or identity['moduleSha256'] != base['codeSha256']
                or identity['mode'] != 'ARM' or row['sourceCreditRequested'] != 0
                or not any((name, address) in witnesses for name in row['storedCallbackWitnessIds'])):
            raise ValueError('Callback entry lacks canonical identity and a stored-pointer witness')
        if len(row['instructionRanges']) != 1:
            raise ValueError('Only reviewed contiguous leaf callback extents are supported')
        part = row['instructionRanges'][0]
        low, high = part['start'], part['endExclusive']
        size = high - low
        classification = part['priorClassification']
        valid_classification = (legacy.overlap(unclassified, low, high) == size if classification == 'unclassified'
            else classification == 'defined-unowned-instruction' and legacy.overlap(instructions, low, high) == size
                 and legacy.overlap(unclassified, low, high) == 0 and legacy.overlap(data, low, high) == 0)
        if (not origin <= low == address < high <= end or low % 4 or size % 4 or size != part['bytes']
                or part['instructions'] * 4 != size or not valid_classification
                or legacy.overlap(owners, low, high) or legacy.overlap(seen, low, high)
                or legacy.sha(image[low - origin:high - origin]) != part['sha256']
                or word(image, origin, high - 4) != 0xe12fff1e):
            raise ValueError('Callback extent, prior ownership or returning leaf boundary differs')
        seen.append((low, high))
        total += size
        additions.append(dict(address=address, mode='ARM', ranges=[dict(start=low, endExclusive=high, bytes=size)],
            textBodyBytes=size, bodyBytesOutsideInitializedText=0, entryInstructionDefined=True,
            isThunk=False, calledFunctionAddresses=[], acceptedSourceBytes=0,
            boundaryStatus='reviewed-stored-callback-literal-and-original-returning-leaf'))
    if len(additions) != packet['newCandidateFunctions'] or total != packet['newInstructionUnionBytes']:
        raise ValueError('Callback inventory totals differ')
    return additions


def compose(root, base):
    root = Path(root)
    composed, references = legacy.compose(root, base)
    path = root / CONFIG
    if not path.exists(): return composed, references
    registry = json.loads(path.read_text(encoding='utf-8'))
    if registry['schemaVersion'] != 1 or registry['moduleSha256'] != base['codeSha256']:
        raise ValueError('Unsupported callback inventory registry')
    if legacy.checked(root, registry['baseCensus']) != base:
        raise ValueError('Callback inventory changed the immutable base census')
    result = dict(composed)
    result['functions'] = list(composed['functions'])
    references = list(references)
    image = (root / 'generated/update-content0/code.bin').read_bytes()
    for item in registry['overlays']:
        if item['approvedForFunctionInventory'] is not True or item['sourceCreditGranted'] != 0:
            raise ValueError('Callback inventory lacks coordinator review')
        packet, review = legacy.checked(root, item['packet']), legacy.checked(root, item['coordinatorReview'])
        if (packet['frozenCensus'] != registry['baseCensus'] or review['overlay'] != item['packet']
                or review['moduleSha256'] != base['codeSha256'] or review['sourceCreditGranted'] != 0
                or review['addedDiscoveredEntries'] != packet['newCandidateFunctions']):
            raise ValueError('Callback review differs from its frozen packet')
        for value in [packet['producer'], packet['boundaryProducer'], packet['boundaryEvidence'], review['producer'], review['validator']]:
            legacy.checked_file(root, value)
        result['functions'].extend(validate(base, result, packet, image))
        references.append(item['packet'])
    result['functions'].sort(key=lambda row: row['address'])
    result['functionCount'] = len(result['functions'])
    result['supplementalInventory'] = references
    result['historicalFunctionCompletenessClaim'] = False
    return result, references
