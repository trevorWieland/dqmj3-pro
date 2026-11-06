import argparse
import hashlib
import json
import subprocess
from pathlib import Path

from module_link import digest, validate_ranges, write_json


ROOT = Path(__file__).resolve().parents[1]
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def snapshot_hash(revision, name):
    raw = subprocess.check_output(['git', '-C', str(ROOT), 'show', revision + ':' + name])
    return hashlib.sha256(raw).hexdigest()


def publish(replay_path):
    replay = json.loads(replay_path.read_text(encoding='utf-8'))
    if replay['status'] != 'passed' or replay['sharedGeneratedOrWorkInputs'] or replay['sharedToolOrDependencyLinks']:
        raise ValueError('Independent replay did not pass in isolation')
    source_revision = replay['sourceRevision']
    checkout = Path(replay['replayRoot']).resolve(strict=True)
    if not checkout.is_relative_to(ROOT / 'work/clean-replay'):
        raise ValueError('Replay root is outside the declared private replay namespace')
    checks_path = checkout / 'evidence/verification/checks.json'
    if digest(checks_path) != replay['checksReceiptSha256']:
        raise ValueError('Independent check receipt changed after replay')
    checks = json.loads(checks_path.read_text())
    required = {'tool-pins', 'intake', 'independent-extraction', 'assets', 'executable-inventory',
                'script-interfaces', 'native-wave001', 'native-wave002', 'native-module-link',
                'native-platforms', 'tests'}
    completed = {row['name'] for row in checks['checks'] if row['returncode'] == 0}
    if checks['status'] != 'passed' or not required.issubset(completed):
        raise ValueError('Independent replay omitted a required source/cohort/platform check')
    artifacts = {row['path']: row['sha256'] for row in checks['artifacts']}
    report_path = checkout / 'evidence/cohorts/bundle001/verification.json'
    if digest(report_path) != artifacts.get('evidence/cohorts/bundle001/verification.json'):
        raise ValueError('Replayed source integration report changed')
    report = json.loads(report_path.read_text())
    if report['producerSha256'] != snapshot_hash(source_revision, 'toolscripts/native_bundle.py'):
        raise ValueError('Cohort producer is not the committed replay source')
    module = report['moduleIntegration']
    if module['linkedImageSha256'] != MODULE_SHA or module['codeSha256'] != MODULE_SHA:
        raise ValueError('Replayed full native module differs from owner input')
    inventory = json.loads((checkout / 'evidence/inventory/update-content0.json').read_text())
    text = next(row for row in inventory['layout']['segments'] if row['name'] == 'text')
    rows = validate_ranges(report['functions'], text['address'], text['initializedBytes'])
    if len(rows) != 267 or sum(row['size'] for row in rows) != 3208:
        raise ValueError('First accepted source closure differs from reviewed cohort')
    functions = []
    for row in rows:
        source = Path(row['sourcePath']).as_posix()
        if snapshot_hash(source_revision, source) != row['sourceSha256']:
            raise ValueError('Accepted C source is absent from the immutable source snapshot')
        if digest(ROOT / source) != row['sourceSha256']:
            raise ValueError('Working accepted source changed during publication')
        functions.append({'programId': '0004000e001acb00', 'moduleSha256': MODULE_SHA,
                          'address': row['address'], 'mode': row['mode'], 'instructionBytes': row['size'],
                          'poolBytes': 0, 'symbol': row['symbol'], 'sourcePath': source,
                          'sourceSha256': row['sourceSha256'], 'originalSpanSha256': row['originalSpanSha256'],
                          'boundedCases': row['behaviorCases'], 'sourceRevision': source_revision})
    destination = ROOT / 'evidence/cohorts/bundle001'
    destination.mkdir(parents=True, exist_ok=True)
    for relative, name in [('evidence/cohorts/bundle001/verification.json', 'replayed-verification.json'),
                           ('evidence/lanes/wave001-native/packet.json', 'replayed-wave001-packet.json'),
                           ('evidence/lanes/wave002-native/packet.json', 'replayed-wave002-packet.json'),
                           ('evidence/lanes/platform-wave001/report.json', 'replayed-platform-report.json')]:
        (destination / name).write_bytes((checkout / relative).read_bytes())
    receipt = {'schemaVersion': 1, 'status': 'accepted', 'cohort': 'bundle001',
               'sourceRevision': source_revision, 'independentReplaySha256': digest(replay_path),
               'checksReceiptSha256': digest(checks_path), 'replayedIntegrationSha256': digest(report_path),
               'moduleSha256': MODULE_SHA, 'acceptedFunctions': len(functions),
               'acceptedInstructionBytes': sum(row['instructionBytes'] for row in functions),
               'acceptedPoolBytes': 0, 'acceptedInitializedDataBytes': 0,
               'retainedOriginalBytes': module['retainedOriginalBytes'],
               'historicalCompilerIdentified': False, 'matchingCompiler': 'measured project Clang21/mpcore profile',
               'sourceOnlyModule': False, 'wholeGameExecution': False,
               'domain': 'Frozen aligned valid-memory leaf fixtures and exact native bytes; no universal platform claim',
               'functions': functions}
    write_json(destination / 'acceptance.json', receipt)
    recovery = {'schemaVersion': 1, 'status': 'accepted-partial-native-reconstruction',
                'acceptedCohorts': [{'path': 'evidence/cohorts/bundle001/acceptance.json',
                                     'sha256': digest(destination / 'acceptance.json')}],
                'acceptedRecoveredFunctions': len(functions),
                'acceptedRecoveredBytes': sum(row['instructionBytes'] for row in functions),
                'overallSourceCoveragePercent': None, 'targetSourceCoveragePercent': 95,
                'executableInventoryComplete': False,
                'knownUpdateInitializedBytes': sum(row['initializedBytes'] for row in inventory['layout']['segments']),
                'sourceOnlyExecutableProof': False, 'sourceOnlyContainerProof': False,
                'nativeWindowsGameBuild': False, 'androidGameBuild': False,
                'androidDeviceExecution': False, 'aynThorValidation': False}
    write_json(ROOT / 'recovery.json', recovery)
    return recovery


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--replay', type=Path, default=ROOT / 'evidence/verification/clean-checkout.json')
    args = parser.parse_args()
    print(json.dumps(publish(args.replay), indent=2))


if __name__ == '__main__':
    main()
