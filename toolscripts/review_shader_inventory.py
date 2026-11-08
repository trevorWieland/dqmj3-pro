import hashlib
import json
from pathlib import Path

import native_shader_inventory as inventory

ROOT = Path(__file__).resolve().parents[1]


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data),
                sha256=hashlib.sha256(data).hexdigest())


def main():
    base_pin = read(ROOT / 'config/native-file-overlays.json')['baseCensus']
    base = inventory.legacy.checked(ROOT, base_pin)
    composed, _ = inventory.predecessor.compose(ROOT, base)
    witness_path = ROOT / 'evidence/verification/shader-callable-witnesses.json'
    witness = read(witness_path)
    inventory.legacy.checked_file(ROOT, witness['producer'])
    result = inventory.validate(base, composed, witness,
                                (ROOT / 'generated/update-content0/code.bin').read_bytes())
    review = dict(schemaVersion=1, status='coordinator-approved-original-shader-callable-inventory-only',
        moduleSha256=base['codeSha256'], overlay=pin(witness_path), producer=pin(Path(__file__).resolve()),
        validator=pin(ROOT / 'toolscripts/native_shader_inventory.py'), addedDiscoveredEntries=1,
        resultingDiscoveredEntries=result['functionCount'], newInstructionUnionBytes=112, excludedPoolBytes=8,
        sourceCreditGranted=0, exactMatchingBytesUnchanged=5128, initializedTextByteDenominatorChanged=False,
        historicalFunctionCompletenessClaim=False)
    review_path = ROOT / 'evidence/verification/shader-callable-inventory-review.json'
    config_path = ROOT / inventory.CONFIG
    if review_path.exists() or config_path.exists():
        raise ValueError('Preserve existing shader inventory review/configuration')
    review_path.write_text(json.dumps(review, indent=2) + '\n', encoding='utf-8')
    config = dict(schemaVersion=1, moduleSha256=base['codeSha256'], baseCensus=base_pin,
        overlays=[dict(packet=pin(witness_path), coordinatorReview=pin(review_path),
                       approvedForFunctionInventory=True, sourceCreditGranted=0)])
    config_path.write_text(json.dumps(config, indent=2) + '\n', encoding='utf-8')
    current, _ = inventory.compose(ROOT, base)
    if current['functionCount'] != composed['functionCount'] + 1:
        raise ValueError('Shader inventory composition changed outside its one unmatched callable')
    print(json.dumps(dict(discoveredFunctions=current['functionCount'], instructionBytes=112,
                         excludedPoolBytes=8, sourceCreditGranted=0)))


if __name__ == '__main__':
    main()
