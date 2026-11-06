import argparse
import json
from pathlib import Path

from module_link import digest, validate_ranges, write_json
from native_bundle002 import LANES
from publish_native_cohort import MODULE_SHA, ROOT, snapshot_hash


def publish(replay_path):
    replay = json.loads(replay_path.read_text())
    if replay['status'] != 'passed' or replay['sharedGeneratedOrWorkInputs'] or replay['sharedToolOrDependencyLinks']:
        raise ValueError('Independent replay did not pass in isolation')
    revision = replay['sourceRevision']
    checkout = Path(replay['replayRoot']).resolve(strict=True)
    if not checkout.is_relative_to(ROOT / 'work/clean-replay'):
        raise ValueError('Independent checkout escaped declared replay root')
    checks_path = checkout / 'evidence/verification/checks.json'
    if digest(checks_path) != replay['checksReceiptSha256']:
        raise ValueError('Independent check receipt changed')
    checks = json.loads(checks_path.read_text())
    required = {'tool-pins', 'intake', 'independent-extraction', 'assets', 'executable-inventory',
                'script-interfaces', 'native-wave001', 'native-wave002', 'native-module-link',
                'native-platforms', 'native-wave003-abi', 'native-wave004', 'native-wave005',
                'native-wave005-controls', 'native-wave006', 'native-bundle002', 'native-memory-platforms', 'tests'}
    passed = {row['name'] for row in checks['checks'] if row['returncode'] == 0}
    if checks['status'] != 'passed' or not required.issubset(passed):
        raise ValueError('Replay omitted required source, return, state, control or platform proof')
    artifacts = {row['path']: row['sha256'] for row in checks['artifacts']}
    report_name = 'evidence/cohorts/bundle002/verification.json'
    report_path = checkout / report_name
    if digest(report_path) != artifacts.get(report_name):
        raise ValueError('Independent integration report changed')
    report = json.loads(report_path.read_text())
    if report['producerSha256'] != snapshot_hash(revision, 'toolscripts/native_bundle002.py'):
        raise ValueError('Cohort producer differs from committed source')
    module = report['moduleIntegration']
    if module['linkedImageSha256'] != MODULE_SHA or module['codeSha256'] != MODULE_SHA:
        raise ValueError('Genuine source-linked module differs from original')
    parent_path = ROOT / 'evidence/cohorts/bundle001/acceptance.json'
    if digest(parent_path) != report['parentAcceptanceSha256'] or digest(checkout / parent_path.relative_to(ROOT)) != digest(parent_path):
        raise ValueError('Parent accepted cohort changed')
    parent = json.loads(parent_path.read_text())
    previous = {row['address']: row for row in parent['functions']}
    inventory = json.loads((checkout / 'evidence/inventory/update-content0.json').read_text())
    text = next(row for row in inventory['layout']['segments'] if row['name'] == 'text')
    rows = validate_ranges(report['functions'], text['address'], text['initializedBytes'])
    if len(rows) != 356 or sum(row['size'] for row in rows) != 4164 or not set(previous).issubset({r['address'] for r in rows}):
        raise ValueError('Cumulative source cohort differs from reviewed closure')
    functions = []
    for row in rows:
        source = Path(row['sourcePath']).as_posix()
        if snapshot_hash(revision, source) != row['sourceSha256'] or digest(ROOT / source) != row['sourceSha256']:
            raise ValueError('C source differs from replayed committed source')
        if row['address'] in previous:
            prior = previous[row['address']]
            if (source, row['sourceSha256'], row['size']) != (
                    prior['sourcePath'], prior['sourceSha256'], prior['instructionBytes']):
                raise ValueError('Previously accepted source changed')
            continue
        functions.append({'programId': '0004000e001acb00', 'moduleSha256': MODULE_SHA,
                          'address': row['address'], 'mode': row['mode'], 'instructionBytes': row['size'],
                          'poolBytes': 0, 'symbol': row['symbol'], 'sourcePath': source,
                          'sourceSha256': row['sourceSha256'], 'originalSpanSha256': row['originalSpanSha256'],
                          'boundedCases': row['behaviorCases'], 'sourceRevision': revision, 'lane': row['lane']})
    if len(functions) != 89 or sum(row['instructionBytes'] for row in functions) != 956:
        raise ValueError('New source intervals differ from reviewed delta')
    destination = ROOT / 'evidence/cohorts/bundle002'
    copies = [(report_name, 'replayed-verification.json')]
    for packet in report['packets']:
        lane = packet['lane']
        name = f'evidence/lanes/{lane}/packet.json'
        if lane not in LANES or digest(checkout / name) != artifacts.get(name) or artifacts[name] != packet['packetSha256']:
            raise ValueError('Replayed source packet changed')
        copies.append((name, 'replayed-' + lane + '-packet.json'))
    platform = 'evidence/lanes/platform-memory-wave001/report.json'
    if digest(checkout / platform) != artifacts.get(platform):
        raise ValueError('Replayed native pointer portability proof changed')
    copies.append((platform, 'replayed-memory-platform-report.json'))
    recovery = json.loads((ROOT / 'recovery.json').read_text())
    if (recovery['acceptedRecoveredFunctions'], recovery['acceptedRecoveredBytes']) != (267, 3208):
        raise ValueError('Publication requires the unchanged 267-function parent ledger')
    if recovery['acceptedCohorts'] != [{'path': parent_path.relative_to(ROOT).as_posix(), 'sha256': digest(parent_path)}]:
        raise ValueError('Parent recovery ledger changed or contains another cohort')
    receipt = {'schemaVersion': 1, 'status': 'accepted', 'cohort': 'bundle002',
               'sourceRevision': revision, 'parentAcceptanceSha256': digest(parent_path),
               'independentReplaySha256': digest(replay_path), 'checksReceiptSha256': digest(checks_path),
               'replayedIntegrationSha256': digest(report_path), 'moduleSha256': MODULE_SHA,
               'acceptedFunctions': 89, 'acceptedInstructionBytes': 956,
               'acceptedPoolBytes': 0, 'acceptedInitializedDataBytes': 0,
               'cumulativeAcceptedFunctions': 356, 'cumulativeAcceptedInstructionBytes': 4164,
               'retainedOriginalBytes': module['retainedOriginalBytes'],
               'historicalCompilerIdentified': False, 'matchingCompiler': 'measured project Clang21/mpcore profiles',
               'sourceOnlyModule': False, 'wholeGameExecution': False, 'domain': report['domain'], 'functions': functions}
    for name, target in copies:
        (destination / target).write_bytes((checkout / name).read_bytes())
    write_json(destination / 'acceptance.json', receipt)
    recovery.update({'acceptedCohorts': [
        {'path': parent_path.relative_to(ROOT).as_posix(), 'sha256': digest(parent_path)},
        {'path': 'evidence/cohorts/bundle002/acceptance.json', 'sha256': digest(destination / 'acceptance.json')}],
        'acceptedRecoveredFunctions': 356, 'acceptedRecoveredBytes': 4164})
    write_json(ROOT / 'recovery.json', recovery)
    return recovery


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--replay', type=Path, default=ROOT / 'evidence/verification/clean-checkout.json')
    print(json.dumps(publish(parser.parse_args().replay), indent=2))
