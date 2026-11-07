import hashlib
import json
import struct
from pathlib import Path

from bootstrap_public_compiler import contained


CONFIG = 'config/native-function-overlays.json'


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def checked_file(root, item):
    path = contained(root, item['path'])
    raw = path.read_bytes()
    if sha(raw) != item['sha256']:
        raise ValueError('Reviewed inventory overlay input changed: ' + item['path'])
    return raw


def checked(root, item):
    return json.loads(checked_file(root, item))


def merge(parts):
    result = []
    for start, end in sorted(parts):
        if start >= end:
            raise ValueError('Empty inventory range')
        if result and start <= result[-1][1]:
            result[-1] = (result[-1][0], max(end, result[-1][1]))
        else:
            result.append((start, end))
    return result


def overlap(parts, start, end):
    return sum(max(0, min(end, high) - max(start, low)) for low, high in parts)


def validate(base, packet, image):
    module = base['codeSha256']
    if (sha(image) != module or packet['moduleSha256'] != module
            or packet['sourceCreditGranted'] != 0 or packet['initializedTextByteDenominatorChanged'] is not False):
        raise ValueError('Inventory overlay module or credit differs')
    origin = base['initializedTextStart']
    end = origin + base['initializedTextGrossBytes']
    existing = {row['address'] for row in base['functions']}
    additions = packet['functions']
    addresses = [row['canonicalIdentity']['address'] for row in additions]
    if len(set(addresses)) != len(addresses) or existing.intersection(addresses):
        raise ValueError('Inventory overlay duplicates an existing entry')
    owners = merge((part['start'], part['endExclusive']) for row in base['functions'] for part in row['ranges'])
    unclassified = merge((part['start'], part['endExclusive']) for part in base['unclassifiedTextRanges'])
    known = existing | set(addresses)
    witnesses = set()
    for table in packet['tables']:
        encoding = table.get('encoding', 'arm-member-pair')
        if encoding not in ('arm-member-pair', 'vtable-function-pointer'):
            raise ValueError('Unsupported reviewed table encoding')
        stride = 8 if encoding == 'arm-member-pair' else 4
        start, size = table['start'], table['bytes']
        offset = start - origin
        literal = table['literalAddress'] - origin
        if (table['readerFunction'] not in known or not 0 <= offset <= len(image) - size
                or not 0 <= literal <= len(image) - 4 or table['literalBytes'] != 4
                or struct.unpack_from('<I', image, literal)[0] != start
                or sha(image[literal:literal + 4]) != table['literalSha256']
                or sha(image[offset:offset + size]) != table['sha256']
                or size != len(table['entries']) * stride):
            raise ValueError('Method table or reader literal differs')
        slots = set()
        for entry in table['entries']:
            slot = entry['slot']
            if slot in slots or not start <= slot <= start + size - stride or (slot - start) % stride:
                raise ValueError('Method table slot is duplicated or invalid')
            slots.add(slot)
            target = struct.unpack_from('<I', image, slot - origin)[0]
            adjustment = struct.unpack_from('<I', image, slot - origin + 4)[0] if stride == 8 else 0
            if (entry['target'] != target or target not in known or target % 4 or adjustment != 0
                    or entry['mode'] != 'ARM' or entry['virtual'] is not (encoding == 'vtable-function-pointer')
                    or entry['thisAdjustmentBytes'] != 0):
                raise ValueError('Method table target, mode or adjustment differs')
            witnesses.add((table['name'], slot, target))
    seen, normalized, bytes_total = [], [], 0
    for row in additions:
        identity = row['canonicalIdentity']
        address = identity['address']
        if (identity['moduleSha256'] != module or identity['programId'] != '0004000e001acb00'
                or identity['mode'] != 'ARM' or row['sourceCreditRequested'] != 0
                or not any((item['table'], item['slot'], address) in witnesses for item in row['tableWitnesses'])):
            raise ValueError('Supplemental function lacks canonical identity and table witness')
        parts = []
        for part in row['instructionRanges']:
            low, high = part['start'], part['endExclusive']
            size = high - low
            if (not origin <= low < high <= end or low % 4 or size % 4 or size != part['bytes']
                    or part['instructions'] * 4 != size or sha(image[low - origin:high - origin]) != part['sha256']
                    or part.get('ghidraMemorySha256', part.get('originalMemorySha256')) != part['sha256']
                    or overlap(owners, low, high)
                    or overlap(unclassified, low, high) != size or overlap(seen, low, high)):
                raise ValueError('Supplemental instruction range overlaps or differs')
            seen.append((low, high))
            parts.append({'start': low, 'endExclusive': high, 'bytes': size})
            bytes_total += size
        if sum(low <= address < high for low, high in [(part['start'], part['endExclusive']) for part in parts]) != 1:
            raise ValueError('Supplemental entry has no unique instruction extent')
        normalized.append({'address': address, 'mode': 'ARM', 'ranges': parts,
            'textBodyBytes': sum(part['bytes'] for part in parts), 'bodyBytesOutsideInitializedText': 0,
            'entryInstructionDefined': True, 'isThunk': False,
            'calledFunctionAddresses': sorted({item['target'] for item in row['outgoingTransfers']}),
            'acceptedSourceBytes': 0, 'boundaryStatus': 'reviewed-table-target-original-byte-and-shared-tail-witnesses'})
    if (bytes_total != packet['newInstructionUnionBytes'] or len(normalized) != packet['newCandidateFunctions']
            or packet['candidatePeerOverlaps'] != []):
        raise ValueError('Supplemental inventory totals differ')
    pools = []
    for row in additions:
        for part in row['literalPoolRanges']:
            low, high = part['start'], part['endExclusive']
            if (not origin <= low < high <= end or low % 4 or high - low != part['bytes']
                    or sha(image[low - origin:high - origin]) != part['sha256']
                    or overlap(seen, low, high) or overlap(pools, low, high)
                    or not any(span['start'] <= part['reader'] < span['endExclusive'] for span in row['instructionRanges'])):
                raise ValueError('Supplemental literal pool differs or overlaps instructions')
            pools.append((low, high))
    for alias in packet['sharedTailAliases']:
        owner = next((row for row in normalized if row['address'] == alias['physicalOwner']), None)
        if (owner is None or not any(part['start'] <= alias['target'] < part['endExclusive'] for part in owner['ranges'])
                or sha(image[alias['address'] - origin:alias['address'] - origin + 4]) != alias['sha256']):
            raise ValueError('Shared-tail ownership witness differs')
    return normalized


def compose(root, base):
    root = Path(root)
    path = root / CONFIG
    if not path.exists():
        return base, []
    registry = json.loads(path.read_text())
    if registry['schemaVersion'] != 1 or registry['moduleSha256'] != base['codeSha256']:
        raise ValueError('Unsupported reviewed inventory overlay registry')
    if checked(root, registry['baseCensus']) != base:
        raise ValueError('Reviewed base census differs from supplied inventory')
    image = (root / 'generated/update-content0/code.bin').read_bytes()
    result = dict(base)
    result['functions'] = list(base['functions'])
    references = []
    for item in registry['overlays']:
        if item['approvedForFunctionInventory'] is not True or item['sourceCreditGranted'] != 0:
            raise ValueError('Inventory overlay lacks explicit review')
        packet = checked(root, item['packet'])
        review = checked(root, item['coordinatorReview'])
        if (review['moduleSha256'] != base['codeSha256'] or review['overlay'] != item['packet']
                or review['addedDiscoveredEntries'] != packet['newCandidateFunctions']
                or review['sourceCreditGranted'] != 0):
            raise ValueError('Supplemental inventory review differs')
        checked_file(root, review['producer'])
        checked_file(root, review['validator'])
        checked_file(root, packet['producer'])
        if 'ghidraProducer' in packet:
            checked_file(root, packet['ghidraProducer'])
        else:
            checked_file(root, packet['boundaryProducer'])
            checked(root, packet['boundaryEvidence'])
        if packet['frozenCensus'] != registry['baseCensus']:
            raise ValueError('Supplemental inventory uses another frozen census')
        checked(root, registry['baseCensus'])
        result['functions'].extend(validate(result, packet, image))
        references.append(item['packet'])
    result['functions'].sort(key=lambda row: row['address'])
    view = {'schemaVersion': 3, 'view': 'reviewed-discovered-function-ownership',
        'codeSha256': base['codeSha256'], 'initializedTextStart': base['initializedTextStart'],
        'initializedTextGrossBytes': base['initializedTextGrossBytes'],
        'functionCount': len(result['functions']), 'functions': result['functions'],
        'supplementalInventory': references,
        'baseAnalysisStatistics': {key: value for key, value in base.items() if not isinstance(value, (dict, list))},
        'historicalFunctionCompletenessClaim': False}
    return view, references
