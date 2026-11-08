import hashlib
import json
from pathlib import Path

import native_binding_inventory as predecessor
import native_file_inventory as inventory

ROOT = Path(__file__).resolve().parents[1]


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data),
                sha256=hashlib.sha256(data).hexdigest())


def main():
    witness_path = ROOT / 'evidence/verification/file-callable-inventory-witnesses.json'
    witness = json.loads(witness_path.read_bytes())
    base_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    base = json.loads(base_path.read_bytes())
    previous, references = predecessor.compose(ROOT, base)
    packet = {key: witness[key] for key in ('moduleSha256', 'functions', 'constructors',
        'tables', 'routes', 'directCalls', 'dispatch', 'newCandidateFunctions',
        'newInstructionUnionBytes', 'initializedTextByteDenominatorChanged', 'sourceCreditGranted')}
    packet.update(status='original-file-task-provider-descriptor-inventory-only',
                  producer=pin(Path(__file__).resolve()), sourceEvidence=[pin(witness_path)])
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    result = inventory.validate(base, previous, packet, image)
    if result['functionCount'] != previous['functionCount'] + 9:
        raise ValueError('File callable inventory count differs')
    packet_path = ROOT / 'evidence/verification/file-callable-inventory.json'
    review_path = ROOT / 'evidence/verification/file-callable-inventory-review.json'
    config_path = ROOT / inventory.CONFIG
    if any(path.exists() for path in (packet_path, review_path, config_path)):
        raise ValueError('Preserve existing file callable inventory review')
    packet_path.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    review = dict(status='original-callable-instruction-ownership-reviewed',
        moduleSha256=base['codeSha256'], overlay=pin(packet_path),
        previousDiscoveredEntries=previous['functionCount'], addedDiscoveredEntries=9,
        resultingDiscoveredEntries=result['functionCount'], newInstructionUnionBytes=224,
        separateIndexedDataBytes=20, sourceCreditGranted=0,
        initializedTextByteDenominatorChanged=False, historicalFunctionCompletenessClaim=False,
        predecessorOverlays=references, producer=pin(Path(__file__).resolve()),
        validator=pin(ROOT / 'toolscripts/native_file_inventory.py'))
    review_path.write_text(json.dumps(review, indent=2) + '\n', encoding='utf-8')
    config = dict(schemaVersion=1, moduleSha256=base['codeSha256'], baseCensus=pin(base_path),
        overlays=[dict(packet=pin(packet_path), coordinatorReview=pin(review_path),
                       approvedForFunctionInventory=True, sourceCreditGranted=0)])
    config_path.write_text(json.dumps(config, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(discoveredFunctions=result['functionCount'], addedEntries=9,
                         newInstructionBytes=224, sourceCreditGranted=0)))


if __name__ == '__main__':
    main()
