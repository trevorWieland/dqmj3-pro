import hashlib
import json
from pathlib import Path

import native_heap_inventory as inventory

ROOT = Path(__file__).resolve().parents[1]


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(raw), sha256=hashlib.sha256(raw).hexdigest())


def main():
    base_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    base = read(base_path)
    before, _ = inventory.predecessor.compose(ROOT, base)
    folder = ROOT / 'evidence/lanes/native-sdk-heap062/inventory-v1'
    witness_path = folder / 'proposal-v1.json'
    witness = read(witness_path)
    frozen = read(folder / 'ready-v1.json')
    for row in frozen['pins']:
        actual = pin(folder / row['path'])
        if any(actual[key] != row[key] for key in ('bytes', 'sha256')):
            raise ValueError('Heap sealed reference producer or witness differs')
    reference = ROOT / 'work/heap062-inventory-root-replay-v1'
    for name in ['propose.py', 'proposal-v1.json', 'ready-v1.json']:
        if (reference / name).read_bytes() != (folder / name).read_bytes():
            raise ValueError('Independent coordinator original-entry/tail replay differs')
    result = inventory.validate(base, before, witness, (ROOT / 'generated/update-content0/code.bin').read_bytes())
    unchanged = {row['address']: row for row in before['functions'] if row['address'] != 0x105408}
    if any(row != unchanged[row['address']] for row in result['functions'] if row['address'] in unchanged):
        raise ValueError('Heap repair altered unrelated canonical entries')
    if sum(row['textBodyBytes'] for row in result['functions']) != sum(row['textBodyBytes'] for row in before['functions']):
        raise ValueError('Heap repair changed owned instruction-byte denominator')
    receipt = dict(status='coordinator-reviewed-byte-balanced-heap-initializer-inventory-repair',
        overlay=pin(witness_path), producer=pin(Path(__file__).resolve()),
        validator=pin(ROOT / 'toolscripts/native_heap_inventory.py'), moduleSha256=base['codeSha256'],
        addedDiscoveredEntries=1, resultingDiscoveredEntries=result['functionCount'],
        beforeDiscoveredEntries=before['functionCount'], historicalOwnerBytesBefore=364,
        historicalOwnerBytesAfter=204, detachedEntryBytes=160, excludedPoolBytes=16,
        ownedInstructionByteSumUnchanged=True, grossInitializedTextBytes=7051280,
        grossDenominatorChange=0, sourceCreditGranted=0,
        independentReferenceReplay=dict(executions=16, exactProposalBytesMatched=True,
            receipt=pin(reference / 'ready-v1.json'),
            readySha256='16864dc8db8c24f5c137d312885ccdda8d271a34e620ca564444513529fa94c9'),
        fullStartupExecuted=False, historicalFunctionInventoryComplete=False)
    target = ROOT / 'evidence/verification/heap-initializer-inventory-review.json'
    target.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
    config = dict(schemaVersion=1, moduleSha256=base['codeSha256'], baseCensus=pin(base_path), overlays=[dict(
        packet=pin(witness_path), referenceProducer=pin(folder / 'propose.py'), coordinatorReview=pin(target),
        approvedForFunctionInventory=True, sourceCreditGranted=0)])
    (ROOT / inventory.CONFIG).write_text(json.dumps(config, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(receipt))


if __name__ == '__main__':
    main()
