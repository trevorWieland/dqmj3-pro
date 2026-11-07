import hashlib
import json
from pathlib import Path

from squirrel_state049_verify import verify


ROOT = Path(__file__).resolve().parents[1]
FOLDER = ROOT / 'evidence/lanes/squirrel-state049/stage-v1'


def record(path):
    raw = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(raw),
        'sha256': hashlib.sha256(raw).hexdigest()}


def save(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def run():
    packet_path = FOLDER / 'packet.json'
    packet = json.loads(packet_path.read_text())
    if verify(ROOT, packet_path) != json.loads((FOLDER / 'verification.json').read_text()):
        raise ValueError('049 frozen verification changed')
    manifest_path = FOLDER / 'frozen-manifest.json'
    manifest = json.loads(manifest_path.read_text())
    for row in manifest['files']:
        if record(ROOT / row['path']) != row:
            raise ValueError('049 frozen file changed: ' + row['path'])
    paths = {ROOT / row['path'] for row in [*manifest['files'], *packet['inputs']]}
    paths.update([manifest_path, Path(__file__),
        FOLDER / 'functional-proof-proposal.json', FOLDER / 'functional-registry-proposal.json',
        FOLDER / 'functional-schema-validation.json'])
    handoff = FOLDER / 'coordinator-handoff.json'
    save(handoff, {'schemaVersion': 1, 'status': 'frozen-worker-handoff-pending-independent-replay',
        'producer': record(Path(__file__)), 'packet': record(packet_path),
        'verification': record(FOLDER / 'verification.json'), 'stageManifest': record(manifest_path),
        'functionalProposal': record(FOLDER / 'functional-proof-proposal.json'),
        'candidateFunctions': 13, 'candidateInstructionBytes': 2508,
        'coreAbi': packet['coreAbiManifest'], 'sharedInitialization': packet['sharedInitializationManifest'],
        'elapsedSeconds': packet['elapsedSeconds'], 'recommendedReplayTimeoutSeconds': 2400,
        'reproduction': [
            'tools/python/Scripts/python.exe -u toolscripts/squirrel_state049_packet.py --work work/independent049/run --output work/independent049/proof',
            'tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_state049.py -v'],
        'replayOutputContract': 'Use a fresh proof output directory; preserve the immutable committed packet and manifest.',
        'productionSources': ['source/squirrel-wave049/' + name for name in [
            'base_register.c', 'closure_api.c', 'creation_services.c', 'factory.c',
            'slot_api.c', 'stack_api.c', 'vm_initialize.c']],
        'fixtureSources': ['source/squirrel-wave049/' + name for name in [
            'fixture_layout.c', 'fixture_uninvoked.c', 'new_slot_binding.c']],
        'sourceNameAlias': {'reportSymbol': 'fn_00173d4c', 'sourceSymbol': 'sq_startup_relative049',
            'quotedHeader': record(ROOT / 'source/squirrel-wave049/source_symbols.h')},
        'coverage': [{'symbol': row['symbol'], 'instructionBytes': row['instructionBytes'],
            'observedInstructions': len(row['observedInstructionAddresses']),
            'unobservedInstructions': len(row['unobservedInstructionAddresses'])} for row in packet['functions']],
        'sharedBuildCensusConsumedOrPinned': False,
        'liveFunctionalRegistryConsumedByBehaviorProducer': False,
        'independentCleanReplayClaimed': False, 'sourceCreditGranted': 0,
        'matchingCreditGranted': 0, 'sdkCreditGranted': 0})
    paths.add(handoff)
    target = FOLDER / 'coordinator-handoff-manifest.json'
    save(target, {'schemaVersion': 1, 'status': 'frozen-worker-prerequisites-and-proposal',
        'files': [record(path) for path in sorted(paths)], 'producer': record(Path(__file__)),
        'originalStageManifestPreserved': record(manifest_path), 'sourceCreditGranted': 0})
    print(json.dumps({'handoff': record(handoff), 'manifest': record(target), 'files': len(paths)}))


if __name__ == '__main__':
    run()
