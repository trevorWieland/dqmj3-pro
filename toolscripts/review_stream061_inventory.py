import hashlib
import json
from pathlib import Path

import native_callback_inventory as callbacks
import native_census_overlay as legacy

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / 'evidence/verification/stream061-callback-inventory.json'
REVIEW = ROOT / 'evidence/verification/stream061-callback-inventory-review.json'
BOUNDARY = ROOT / 'evidence/lanes/native-stream061/stage-v1/asset-boundary-claim.json'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def instruction_sha(image, address):
    return hashlib.sha256(image[address - 0x100000:address - 0x100000 + 4]).hexdigest()


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def produce():
    config = read(ROOT / legacy.CONFIG)
    base = read(ROOT / config['baseCensus']['path'])
    current, old_overlays = legacy.compose(ROOT, base)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    boundary = read(BOUNDARY)
    assert boundary['moduleSha256'] == base['codeSha256']
    functions = {row['address']: row for row in boundary['functions']}
    assert functions[0x44c578]['inSeededCensus'] and functions[0x44c74c]['inSeededCensus']
    assert not functions[0x44c728]['inSeededCensus'] and not functions[0x44c72c]['inSeededCensus']
    witnesses = []
    for name, target, literal, load, store, field in [
        ('asset-allocator', 0x44c72c, 0x44c638, 0x44c59c, 0x44c5a4, 32),
        ('asset-disposer', 0x44c728, 0x44c63c, 0x44c5a8, 0x44c5ac, 36)]:
        assert any(row['slot'] == literal and row['target'] == target for row in boundary['callbackEntryWitnesses'])
        witnesses.append(dict(id=name, kind='arm-stack-stream058-callback', readerFunction=0x44c578,
            literalAddress=literal, target=target, loadInstruction=load, storeInstruction=store,
            streamFieldOffset=field, originalStreamBytes=56, initializerEntry=0x733c00,
            initializerArgumentSetup=0x44c5c4, initializerCall=0x44c5c8,
            literalSha256=instruction_sha(image, literal), loadSha256=instruction_sha(image, load),
            storeSha256=instruction_sha(image, store), setupSha256=instruction_sha(image, 0x44c5c4),
            callSha256=instruction_sha(image, 0x44c5c8)))
    additions = []
    for address, name, prior in [(0x44c728, 'asset-disposer', 'unclassified'),
                                 (0x44c72c, 'asset-allocator', 'defined-unowned-instruction')]:
        source = functions[address]
        assert len(source['ranges']) == 1
        part = source['ranges'][0]
        assert part['start'] == address and part['bytes'] == (4 if address == 0x44c728 else 32)
        additions.append(dict(canonicalIdentity=dict(programId='0004000e001acb00', moduleSha256=base['codeSha256'],
            address=address, mode='ARM'), instructionRanges=[dict(part, instructions=part['bytes'] // 4,
            priorClassification=prior)], storedCallbackWitnessIds=[name], sourceCreditRequested=0))
    packet = dict(schemaVersion=1, moduleSha256=base['codeSha256'], frozenCensus=config['baseCensus'],
        producer=pin(Path(__file__)), boundaryProducer=pin(ROOT / 'toolscripts/native_stream061/measure061.py'),
        boundaryEvidence=pin(BOUNDARY), storedCallbackWitnesses=witnesses, functions=additions,
        newCandidateFunctions=2, newInstructionUnionBytes=36,
        initializedTextByteDenominatorChanged=False, sourceCreditGranted=0)
    result = callbacks.validate(base, current, packet, image)
    assert len(result) == 2 and len(current['functions']) == 26626
    write(OUTPUT, packet)
    review = dict(schemaVersion=1, moduleSha256=base['codeSha256'], overlay=pin(OUTPUT),
        addedDiscoveredEntries=2, previousDiscoveredEntries=26626, resultingDiscoveredEntries=26628,
        initializedTextGrossBytes=7051280, initializedTextByteDenominatorChanged=False,
        newInstructionOwnershipBytes=36, historicalFunctionCompletenessClaim=False,
        sourceCreditGranted=0, producer=pin(Path(__file__)), validator=pin(ROOT / 'toolscripts/native_callback_inventory.py'))
    write(REVIEW, review)
    registry = dict(schemaVersion=1, moduleSha256=base['codeSha256'], baseCensus=config['baseCensus'],
        overlays=[dict(packet=pin(OUTPUT), coordinatorReview=pin(REVIEW),
                       approvedForFunctionInventory=True, sourceCreditGranted=0)])
    write(ROOT / callbacks.CONFIG, registry)
    composed, references = callbacks.compose(ROOT, base)
    assert len(composed['functions']) == 26628 and composed['initializedTextGrossBytes'] == 7051280
    assert len(references) == len(old_overlays) + 1
    print(json.dumps(dict(discoveredEntries=26628, addedEntries=2, newInstructionOwnershipBytes=36,
                          initializedTextGrossBytes=7051280, sourceCreditGranted=0)))


if __name__ == '__main__': produce()
