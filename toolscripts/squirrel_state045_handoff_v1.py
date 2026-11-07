import hashlib
import json
from pathlib import Path

from squirrel_state045_verify import verify


ROOT = Path(__file__).resolve().parents[1]
LANE = ROOT / 'evidence/lanes/squirrel-state040'
FOLDER = LANE / 'initialization045-v1'


def record(path):
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(data),
            'sha256': hashlib.sha256(data).hexdigest()}


def save(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def run():
    manifest_path = FOLDER / 'frozen-manifest.json'
    manifest = json.loads(manifest_path.read_text())
    packet_path = FOLDER / 'packet.json'
    packet = json.loads(packet_path.read_text())
    if verify(ROOT, packet_path) != json.loads((FOLDER / 'verification.json').read_text()):
        raise ValueError('045 verification changed')
    for item in manifest['files']:
        if record(ROOT / item['path']) != item:
            raise ValueError('045 frozen file changed: ' + item['path'])
    paths = {ROOT / row['path'] for row in manifest['files'] + packet['inputs']}
    paths.update([manifest_path, Path(__file__),
        ROOT / 'toolscripts/squirrel_state040_tables.py',
        LANE / 'core-abi-v1/frozen-manifest.json',
        LANE / 'constructors-v1/frozen-manifest.json',
        LANE / 'initialization045-shared-field-correction-v1.json',
        LANE / 'initialization045-complete-extents.json',
        LANE / 'initialization045-attempts.json'])
    paths.update(FOLDER / name for name in ['functional-proof-proposal.json',
        'functional-registry-proposal.json', 'functional-schema-validation.json'])
    coverage = [{'symbol': row['symbol'], 'instructionBytes': row['instructionBytes'],
        'observedInstructions': len(row['observedInstructionAddresses']),
        'unobservedInstructions': len(row['unobservedInstructionAddresses'])}
        for row in packet['functions']]
    handoff_path = FOLDER / 'coordinator-handoff.json'
    save(handoff_path, {'schemaVersion': 1,
        'status': 'frozen-worker-handoff-pending-independent-coordinator-replay',
        'producer': record(Path(__file__)), 'coreAbi': packet['coreAbiManifest'],
        'stageManifest': record(manifest_path), 'packet': record(packet_path),
        'verification': record(FOLDER / 'verification.json'),
        'functionalProposal': record(FOLDER / 'functional-proof-proposal.json'),
        'candidateFunctions': 4, 'candidateInstructionBytes': 8556,
        'instructionCoverage': coverage, 'elapsedSeconds': packet['elapsedSeconds'],
        'productionSources': ['source/squirrel-wave045/' + name for name in [
            'delegate_create.c', 'memory.c', 'owner_services.c', 'parameter_mask.c',
            'registration_tables.c', 'shared_initialize.c', 'shared_views.c',
            'string_services.c', 'vector_append.c', 'vm_providers.c']],
        'fixtureSources': ['source/squirrel-wave045/' + name for name in [
            'fixture_abi.c', 'fixture_heap.c', 'fixture_layout.c']],
        'reproduction': [
            'tools/python/Scripts/python.exe -u toolscripts/squirrel_state045_packet.py',
            'tools/python/Scripts/python.exe toolscripts/squirrel_state045_functional_proposal.py',
            'tools/python/Scripts/python.exe toolscripts/squirrel_state045_handoff_v1.py'],
        'recommendedReplayTimeoutSeconds': 1800,
        'sharedBuildCensusConsumedOrPinned': False,
        'liveFunctionalRegistryConsumedByBehaviorProducer': False,
        'registrationCrossCheckSnapshot': record(LANE / 'registration-source-registry-snapshot.json'),
        'unsupported': ['Allocation failure and repeated initialization',
            'Invoking the 56 unresolved engine callbacks', 'VM initialization and factory',
            'Concurrent or kernel lock slow paths', 'Unobserved finalizer/assert PCs',
            'Whole-memory or universal equivalence', 'Android OS/device or whole-game execution'],
        'sdkPrivateHeapRepresentationForcedEqual': False,
        'matchingCreditGranted': 0, 'sourceCreditGranted': 0,
        'underlyingSdkCreditGranted': 0, 'independentCleanReplayClaimed': False})
    paths.add(handoff_path)
    target = FOLDER / 'coordinator-handoff-manifest.json'
    save(target, {'schemaVersion': 1, 'status': 'frozen-worker-prerequisites-and-proposal',
        'files': [record(path) for path in sorted(paths)], 'producer': record(Path(__file__)),
        'originalStageManifestPreserved': record(manifest_path),
        'sourceCreditGranted': 0})
    print(json.dumps({'handoff': record(handoff_path), 'manifest': record(target),
                      'files': len(paths), 'coverage': coverage}))


if __name__ == '__main__':
    run()
