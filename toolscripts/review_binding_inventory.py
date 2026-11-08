import hashlib
import json
from pathlib import Path

import native_binding_inventory as inventory

ROOT = Path(__file__).resolve().parents[1]
EVIDENCE = ROOT / 'evidence/verification/sdk-runtime-binding-entry-witnesses.json'


def pin(path):
    raw = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(raw), sha256=hashlib.sha256(raw).hexdigest())


def main():
    config = json.loads((ROOT / 'config/native-sdk-overlays.json').read_bytes())
    base = json.loads((ROOT / config['baseCensus']['path']).read_bytes())
    composed, _ = inventory.predecessor.compose(ROOT, base)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    origin = base['initializedTextStart']
    evidence = json.loads(EVIDENCE.read_bytes())
    if evidence['moduleSha256'] != base['codeSha256'] or evidence['sourceCreditGranted'] != 0:
        raise ValueError('Measured binding entry evidence identifies another image or claims credit')
    functions = []
    for address, (size, slot) in inventory.ENTRIES.items():
        raw = image[address - origin:address - origin + size]
        functions.append(dict(address=address, mode='ARM', slot=slot,
            instructionRange=dict(start=address, endExclusive=address + size, bytes=size, sha256=hashlib.sha256(raw).hexdigest())))
    routes = []
    caller = evidence['actualGameCaller']
    witnesses = next(row['witnesses'] for row in evidence['actualCallAndConstructorWitnesses'] if row['entry'] == caller['entry'])
    for call in caller['calls']:
        load = max(row['address'] for row in witnesses if row.get('possibleSlot') == call['slot'] and row['address'] < call['address'])
        routes.append(dict(caller=caller['entry'], load=load, transfer=call['address'], slot=call['slot'],
            target=inventory.predecessor.word(image, origin, inventory.TABLE + call['slot'] * 4)))
    for row in evidence['virtualControllerRoutes']:
        routes.append(dict(caller=row['caller'], load=row['load']['address'],
            transfer=row.get('call', row.get('tail'))['address'], slot=row['slot'], target=row['target']))
    for row in routes:
        low, high = row['load'], row['transfer'] + 4
        row['instructions'] = dict(start=low, endExclusive=high, bytes=high - low,
            sha256=hashlib.sha256(image[low - origin:high - origin]).hexdigest())
    packet = dict(schemaVersion=1, moduleSha256=base['codeSha256'], newCandidateFunctions=7,
        newInstructionUnionBytes=300, initializedTextByteDenominatorChanged=False, sourceCreditGranted=0,
        constructors=evidence['constructorInstalls'], routes=routes, functions=functions,
        sourceEvidence=[pin(EVIDENCE)], producer=pin(Path(__file__).resolve()))
    result = inventory.validate(base, composed, packet, image)
    if result['functionCount'] != composed['functionCount'] + 7:
        raise ValueError('Binding inventory entry count differs')
    output = ROOT / 'evidence/verification/sdk-runtime-binding-inventory.json'
    review_path = ROOT / 'evidence/verification/sdk-runtime-binding-inventory-review.json'
    if output.exists() or review_path.exists():
        raise ValueError('Preserve completed binding inventory artifacts')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    review = dict(status='independently-validated-binding-entry-inventory', moduleSha256=base['codeSha256'],
        overlay=pin(output), addedDiscoveredEntries=7, newlyOwnedInstructionBytes=300,
        resultingDiscoveredEntries=result['functionCount'], initializedTextByteDenominatorChanged=False,
        sourceCreditGranted=0, producer=pin(Path(__file__).resolve()), validator=pin(Path(inventory.__file__).resolve()))
    review_path.write_text(json.dumps(review, indent=2) + '\n', encoding='utf-8')
    registry = dict(schemaVersion=1, moduleSha256=base['codeSha256'], baseCensus=config['baseCensus'],
        overlays=[dict(packet=pin(output), coordinatorReview=pin(review_path), approvedForFunctionInventory=True, sourceCreditGranted=0)])
    target = ROOT / inventory.CONFIG
    if target.exists():
        raise ValueError('Preserve existing binding inventory registry')
    target.write_text(json.dumps(registry, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(addedEntries=7, newlyOwnedBytes=300, discoveredEntries=result['functionCount'], sourceCredit=0)))


if __name__ == '__main__':
    main()
