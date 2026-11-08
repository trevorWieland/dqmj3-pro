import json
from pathlib import Path
import struct

import native_callback_inventory as predecessor

legacy = predecessor.legacy
CONFIG = 'config/native-provider-overlays.json'
PROFILES = {
    'seed-interworking-tail': dict(address=0x100670, mode='Thumb', size=44,
        owners=[(0x107aac, 0x107aac, 0x107ab8), (0x107aac, 0x100668, 0x100670)],
        witnesses=[(0x107aac, 12), (0x100668, 8), (0x107ab8, 4)],
        words={0x107aac: 0xe59f1004, 0x107ab0: 0xe5810000,
               0x100668: 0xe28fc001, 0x10066c: 0xe12fff1c},
        halves={0x10069a: 0xbd30}, branch=(0x107ab4, 0x100668)),
    'manager-vtable-query': dict(address=0x6cb234, mode='ARM', size=20,
        owners=[(0x6b6530, 0x6b6550, 0x6b6564), (0x3dcee4, 0x3dcef0, 0x3dcef8)],
        witnesses=[(0x6b6550, 20), (0x3dcef0, 8), (0x3dcf1c, 4), (0x831bfc, 4)],
        words={0x3dcef0: 0xe59f1024, 0x3dcef4: 0xe4801010,
               0x6b6550: 0xe5940000, 0x6b6554: 0xe1a01006,
               0x6b6558: 0xe5903018, 0x6b655c: 0xe1a00004,
               0x6b6560: 0xe12fff33, 0x3dcf1c: 0x831be4,
               0x831bfc: 0x6cb234, 0x6cb244: 0xe12fff1e}, halves={}),
    'snapshot-array-constructor': dict(address=0x664800, mode='ARM', size=24,
        owners=[(0x662a34, 0x662a34, 0x662a44), (0x7013f8, 0x101a14, 0x101a1c), (0x101a1c, 0x101a1c, 0x101a3e)],
        witnesses=[(0x662a34, 24), (0x101a14, 42), (0x664818, 4)],
        words={0x662a34: 0xe59f2008, 0x662a38: 0xe59f1008,
               0x662a3c: 0xe3a03002, 0x662a44: 2696, 0x662a48: 0x664800,
               0x101a14: 0xe28fc001, 0x101a18: 0xe12fff1c,
               0x664814: 0xe8bd8010, 0x664818: 2696,
               0x66480c: 0xeb000000 | (((0x301f50 - 0x66480c - 8) // 4) & 0xffffff)},
        halves={0x101a1c: 0xb5ff, 0x101a20: 0x001c, 0x101a22: 0x0017,
                0x101a24: 0x000e, 0x101a2c: 0x0028, 0x101a2e: 0x47b0,
                0x101a30: 0x19ed, 0x101a32: 0x0020, 0x101a34: 0x1e64,
                0x101a36: 0xd2f9, 0x101a3c: 0xbdf0}, branch=(0x662a40, 0x101a14))}


def integer(image, origin, address, size=4):
    if address % size or not origin <= address <= origin + len(image) - size:
        raise ValueError('Provider witness outside original image or misaligned')
    return int.from_bytes(image[address - origin:address - origin + size], 'little')


def witness(base, current, row, image):
    profile = PROFILES.get(row['witnessKind'])
    identity = row['canonicalIdentity']
    if (profile is None or identity['address'] != profile['address']
            or identity['mode'] != profile['mode']):
        raise ValueError('Unsupported measured provider identity')
    origin = base['initializedTextStart']
    for owner, start, end in profile['owners']:
        if owner not in current or not predecessor.owned(current[owner], start, end):
            raise ValueError('Provider caller or veneer is not owned by the measured function')
    for address, expected in profile['words'].items():
        if integer(image, origin, address) != expected:
            raise ValueError('Provider literal/register/call witness differs')
    for address, expected in profile['halves'].items():
        if integer(image, origin, address, 2) != expected:
            raise ValueError('Provider Thumb mode, callback flow or return differs')
    if 'branch' in profile:
        address, target = profile['branch']
        instruction = integer(image, origin, address)
        displacement = instruction & 0xffffff
        if displacement & 0x800000: displacement -= 0x1000000
        if instruction >> 24 != 0xea or address + 8 + displacement * 4 != target:
            raise ValueError('Provider is not reached through the measured unconditional tail')
    parts = row['witnessRanges']
    if [(p['start'], p['bytes']) for p in parts] != profile['witnesses']:
        raise ValueError('Provider witness ranges omitted or changed')
    for part in parts:
        start, size = part['start'], part['bytes']
        if (not origin <= start < start + size <= origin + len(image)
                or legacy.sha(image[start - origin:start - origin + size]) != part['sha256']):
            raise ValueError('Provider original witness bytes changed')
    return profile


def validate(base, composed, packet, image):
    if (legacy.sha(image) != base['codeSha256'] or packet['moduleSha256'] != base['codeSha256']
            or packet['sourceCreditGranted'] != 0 or packet['initializedTextByteDenominatorChanged'] is not False):
        raise ValueError('Provider inventory identity, denominator or source credit changed')
    origin = base['initializedTextStart']
    limit = origin + base['initializedTextGrossBytes']
    current = {row['address']: row for row in composed['functions']}
    owners = legacy.merge((p['start'], p['endExclusive']) for row in current.values() for p in row['ranges'])
    unclassified = legacy.merge((p['start'], p['endExclusive']) for p in base['unclassifiedTextRanges'])
    defined = legacy.merge((p['start'], p['endExclusive']) for p in base['instructionRanges'])
    data = legacy.merge((p['start'], p['endExclusive']) for p in base['definedDataRanges'])
    additions, seen, bytes_count = [], [], 0
    for row in packet['functions']:
        identity = row['canonicalIdentity']
        address = identity['address']
        if (address in current or address in seen or row['sourceCreditRequested'] != 0
                or identity['programId'] != '0004000e001acb00'
                or identity['moduleSha256'] != base['codeSha256']):
            raise ValueError('Duplicate provider entry or different canonical identity')
        profile = witness(base, current, row, image)
        part = row['instructionRange']
        start, end = part['start'], part['endExclusive']
        size = end - start
        width = 2 if identity['mode'] == 'Thumb' else 4
        category = part['priorClassification']
        classified = (legacy.overlap(unclassified, start, end) == size if category == 'unclassified'
            else category == 'defined-unowned-instruction' and legacy.overlap(defined, start, end) == size
                 and not legacy.overlap(unclassified, start, end) and not legacy.overlap(data, start, end))
        if (not origin <= start == address < end <= limit or start % width
                or size != profile['size'] or size != part['bytes'] or size % width
                or part['instructions'] != size // width or not classified
                or legacy.overlap(owners, start, end)
                or legacy.sha(image[start - origin:end - origin]) != part['sha256']):
            raise ValueError('Provider instruction extent, boundary, classification or ownership differs')
        from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB
        instructions = list(Cs(CS_ARCH_ARM, CS_MODE_THUMB if width == 2 else CS_MODE_ARM).disasm(
            image[start - origin:end - origin], start))
        if len(instructions) != part['instructions'] or sum(i.size for i in instructions) != size:
            raise ValueError('Provider extent contains undecoded or differently sized instructions')
        seen.append(address)
        bytes_count += size
        additions.append(dict(address=address, mode=identity['mode'],
            ranges=[dict(start=start, endExclusive=end, bytes=size)], textBodyBytes=size,
            bodyBytesOutsideInitializedText=0, entryInstructionDefined=True, isThunk=False,
            calledFunctionAddresses=[0x301f50] if address == 0x664800 else [], acceptedSourceBytes=0,
            boundaryStatus='reviewed-original-provider-entry-and-return-with-callsite-provenance'))
    if len(additions) != packet['newCandidateFunctions'] or bytes_count != packet['newInstructionUnionBytes']:
        raise ValueError('Provider inventory totals differ')
    return additions


def compose(root, base):
    root = Path(root)
    result, references = predecessor.compose(root, base)
    path = root / CONFIG
    if not path.exists(): return result, references
    registry = json.loads(path.read_text(encoding='utf-8'))
    if (registry['schemaVersion'] != 1 or registry['moduleSha256'] != base['codeSha256']
            or legacy.checked(root, registry['baseCensus']) != base):
        raise ValueError('Provider registry changed the immutable base census')
    result = dict(result)
    result['functions'], references = list(result['functions']), list(references)
    image = (root / 'generated/update-content0/code.bin').read_bytes()
    for entry in registry['overlays']:
        if entry['approvedForFunctionInventory'] is not True or entry['sourceCreditGranted'] != 0:
            raise ValueError('Provider overlay lacks coordinator approval')
        packet, review = legacy.checked(root, entry['packet']), legacy.checked(root, entry['coordinatorReview'])
        if (packet['frozenCensus'] != registry['baseCensus'] or review['overlay'] != entry['packet']
                or review['moduleSha256'] != base['codeSha256'] or review['sourceCreditGranted'] != 0
                or review['addedDiscoveredEntries'] != packet['newCandidateFunctions']):
            raise ValueError('Provider inventory review does not match frozen packet')
        for pin in [packet['producer'], review['producer'], review['validator'], *packet['sourceEvidence']]:
            legacy.checked_file(root, pin)
        result['functions'].extend(validate(base, result, packet, image))
        references.append(entry['packet'])
    result['functions'].sort(key=lambda row: row['address'])
    result['functionCount'] = len(result['functions'])
    result['supplementalInventory'] = references
    result['historicalFunctionCompletenessClaim'] = False
    return result, references
