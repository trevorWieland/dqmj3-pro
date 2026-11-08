import hashlib
import json
from pathlib import Path

import native_sdk_inventory as inventory

ROOT = Path(__file__).resolve().parents[1]


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size,
                sha256=hashlib.sha256(path.read_bytes()).hexdigest())


def main():
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    base = read(census_path)
    prior, references = inventory.predecessor.compose(ROOT, base)
    witnesses_path = ROOT / 'evidence/verification/sdk062-original-entry-witnesses.json'
    witnesses = {row['entry']: row for row in read(witnesses_path)['entries']}
    tail_path = ROOT / 'evidence/verification/sdk062-shared-tail-review.json'
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    functions = []
    for address, (mode, size) in sorted(inventory.ENTRIES.items()):
        functions.append(dict(address=address, mode=mode,
            instructionRange=dict(start=address, endExclusive=address + size, bytes=size,
                sha256=hashlib.sha256(image[address - 0x100000:address - 0x100000 + size]).hexdigest()),
            entryWitness=witnesses.get(address)))
    packet = dict(schemaVersion=1, status='coordinator-reviewed-real-SDK-entries-and-shared-tail-ownership',
        moduleSha256=base['codeSha256'], frozenCensus=pin(census_path),
        priorSupplementalInventory=references, producer=pin(Path(__file__).resolve()),
        sourceEvidence=[pin(witnesses_path), pin(tail_path)], functions=functions,
        sharedTailReview=read(tail_path), newCandidateFunctions=11,
        candidateInstructionBytes=270, reassignedExistingInstructionBytes=80,
        newInstructionUnionBytes=190, initializedTextByteDenominatorChanged=False,
        sourceCreditGranted=0, historicalFunctionCompletenessClaim=False)
    result = inventory.validate(base, prior, packet, image)
    if len(prior['functions']) != 26631 or result['functionCount'] != 26642:
        raise ValueError('Unexpected SDK inventory predecessor or result')
    output = ROOT / 'evidence/verification/sdk062-inventory.json'
    review_path = ROOT / 'evidence/verification/sdk062-inventory-review.json'
    if output.exists() or review_path.exists():
        raise ValueError('Never replace a reviewed SDK inventory packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    review = dict(schemaVersion=1, status='approved-for-discovered-function-inventory-only',
        overlay=pin(output), moduleSha256=base['codeSha256'], addedDiscoveredEntries=11,
        resultingDiscoveredEntries=26642, priorDiscoveredEntries=26631,
        reassignedExistingInstructionBytes=80, newlyOwnedInstructionBytes=190,
        parentOwnedPrefixBytes=100, sharedReleaseTailBytes=80,
        completeOriginalTextDenominator=base['initializedTextGrossBytes'],
        initializedTextByteDenominatorChanged=False, sourceCreditGranted=0,
        producer=pin(Path(__file__).resolve()), validator=pin(ROOT / 'toolscripts/native_sdk_inventory.py'),
        originalProgramBytesPatched=False, sourceAdmissionGranted=False,
        historicalFunctionCompletenessClaim=False)
    review_path.write_text(json.dumps(review, indent=2) + '\n', encoding='utf-8')
    config = dict(schemaVersion=1, moduleSha256=base['codeSha256'], baseCensus=pin(census_path),
        overlays=[dict(packet=pin(output), coordinatorReview=pin(review_path),
                       approvedForFunctionInventory=True, sourceCreditGranted=0)])
    path = ROOT / 'config/native-sdk-overlays.json'
    if path.exists():
        raise ValueError('Existing SDK inventory registry must remain unchanged')
    path.write_text(json.dumps(config, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(discoveredEntries=result['functionCount'], newEntries=11,
                         newlyOwnedInstructionBytes=190, sourceCreditGranted=0)))


if __name__ == '__main__':
    main()
