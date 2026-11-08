import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_provider_inventory as inventory


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def write(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def main():
    frozen = json.loads((ROOT / 'config/native-callback-overlays.json').read_bytes())['baseCensus']
    base = json.loads((ROOT / frozen['path']).read_bytes())
    composed, prior = inventory.predecessor.compose(ROOT, base)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    origin = base['initializedTextStart']
    functions = []
    for kind, profile in inventory.PROFILES.items():
        address, size = profile['address'], profile['size']
        classification = ('unclassified' if kind == 'snapshot-array-constructor'
                          else 'defined-unowned-instruction')
        functions.append(dict(canonicalIdentity=dict(programId='0004000e001acb00',
            moduleSha256=base['codeSha256'], address=address, mode=profile['mode']),
            witnessKind=kind, instructionRange=dict(start=address, endExclusive=address + size,
                bytes=size, instructions=size // (2 if profile['mode'] == 'Thumb' else 4),
                sha256=inventory.legacy.sha(image[address - origin:address - origin + size]),
                priorClassification=classification),
            witnessRanges=[dict(start=start, bytes=count,
                sha256=inventory.legacy.sha(image[start - origin:start - origin + count]))
                for start, count in profile['witnesses']], sourceCreditRequested=0))
    public = ROOT / 'evidence/lanes/native-asset062/stage-v1'
    packet = dict(schemaVersion=1, status='reviewed-provider-entries-with-original-caller-provenance',
        moduleSha256=base['codeSha256'], frozenCensus=frozen,
        initializedTextByteDenominatorChanged=False, sourceCreditGranted=0,
        newCandidateFunctions=3, newInstructionUnionBytes=88, functions=functions,
        sourceEvidence=[pin(public / name) for name in ['seed-reference-claim.json',
            'manager-query-claim.json', 'lifetime-reference-claim.json']],
        producer=pin(Path(__file__).resolve()))
    additions = inventory.validate(base, composed, packet, image)
    output = ROOT / 'evidence/verification/asset062-provider-inventory.json'
    write(output, packet)
    review = dict(schemaVersion=1, moduleSha256=base['codeSha256'], overlay=pin(output),
        addedDiscoveredEntries=len(additions), previousDiscoveredEntries=len(composed['functions']),
        resultingDiscoveredEntries=len(composed['functions']) + len(additions),
        initializedTextGrossBytes=base['initializedTextGrossBytes'],
        initializedTextByteDenominatorChanged=False, newInstructionOwnershipBytes=88,
        historicalFunctionCompletenessClaim=False, sourceCreditGranted=0,
        producer=pin(Path(__file__).resolve()), validator=pin(ROOT / 'toolscripts/native_provider_inventory.py'))
    checked = ROOT / 'evidence/verification/asset062-provider-inventory-review.json'
    write(checked, review)
    write(ROOT / inventory.CONFIG, dict(schemaVersion=1, moduleSha256=base['codeSha256'],
        baseCensus=frozen, overlays=[dict(packet=pin(output), coordinatorReview=pin(checked),
            approvedForFunctionInventory=True, sourceCreditGranted=0)]))
    result, references = inventory.compose(ROOT, base)
    if result['functionCount'] != review['resultingDiscoveredEntries']:
        raise ValueError('Composed provider census differs from reviewed additions')
    print(json.dumps(dict(added=len(additions), functions=result['functionCount'],
                         instructionOwnershipBytes=88, sourceCreditGranted=0)))


if __name__ == '__main__':
    main()
