import argparse
import json
from pathlib import Path

import ci_native_build as ci
from module_link import digest, validate_ranges, write_json
from native_batch import ROOT, load_plan
from native_batch_proof import selection, selection_hash
from native_cohort import MODULE_SHA
from publish_native_cohort import snapshot_hash


PRODUCERS = ('native_batch.py', 'native_batch_proof.py', 'native_batch_replay.py', 'publish_native_batch.py',
             'native_bundle.py', 'native_bundle002.py', 'native_cohort.py', 'module_link.py', 'ci_native_build.py')


def publish(replay_path):
    replay = ci.read(replay_path)
    if (replay['status'] != 'passed' or replay['sharedGeneratedOrWorkInputs'] is not False
            or replay['sharedToolOrDependencyLinks'] is not False):
        raise ValueError('Replay did not pass with independent materialized inputs')
    expected_steps = ['setup', 'fresh-intake', 'wave007', 'wave008', 'prepare', 'parent-and-regression-checks']
    if [row['name'] for row in replay['steps']] != expected_steps or any(row['returncode'] for row in replay['steps']):
        raise ValueError('Replay omitted a required original/source/control/integration check')
    checkout = Path(replay['replayRoot']).resolve(strict=True)
    if not checkout.is_relative_to(ROOT / 'work/clean-replay'):
        raise ValueError('Replay escaped the declared independent root')
    revision = replay['sourceRevision']
    for name in PRODUCERS:
        relative = 'toolscripts/' + name
        expected = snapshot_hash(revision, relative)
        ci.verify(ROOT / relative, expected)
        ci.verify(checkout / relative, expected)
    for step in replay['steps']:
        ci.verify(checkout / step['log'], step['logSha256'])
    plan_path = ROOT / replay['plan']['path']
    ci.verify(plan_path, replay['plan']['sha256'])
    ci.verify(checkout / replay['plan']['path'], replay['plan']['sha256'])
    if snapshot_hash(revision, replay['plan']['path']) != digest(plan_path):
        raise ValueError('Reviewed plan is not the replayed committed plan')
    plan = load_plan(plan_path)
    ci.verify(ROOT / 'recovery.json', plan['parentRecoverySha256'])
    ci.verify(checkout / 'recovery.json', plan['parentRecoverySha256'])
    parents = ci.accepted_functions(ROOT)
    checks_path = checkout / 'evidence/verification/checks.json'
    ci.verify(checks_path, replay['checksReceiptSha256'])
    checks = ci.read(checks_path)
    if checks['status'] != 'passed' or any(row['returncode'] for row in checks['checks']):
        raise ValueError('Independent parent or regression checks failed')
    report_relative = 'evidence/cohorts/' + plan['cohort'] + '/verification.json'
    report_path = checkout / report_relative
    ci.verify(report_path, replay['integrationReceiptSha256'])
    report = ci.read(report_path)
    if (report['producerSha256'] != snapshot_hash(revision, 'toolscripts/native_batch.py')
            or report['proofProducerSha256'] != snapshot_hash(revision, 'toolscripts/native_batch_proof.py')
            or report['plan'] != replay['plan']):
        raise ValueError('Replayed integration is not the committed reviewed producer/plan')
    module = report['moduleIntegration']
    if module['linkedImageSha256'] != MODULE_SHA or module['codeSha256'] != MODULE_SHA:
        raise ValueError('Actual source-linked module differs from the measured original')
    if (module['sourceLinkedFunctionCount'], module['sourceLinkedBytes']) != (
            plan['parentFunctions'] + plan['newFunctions'],
            plan['parentInstructionBytes'] + plan['newInstructionBytes']):
        raise ValueError('Cumulative source closure differs from the plan')
    inventory = ci.read(checkout / 'evidence/inventory/update-content0.json')
    text = next(row for row in inventory['layout']['segments'] if row['name'] == 'text')
    validate_ranges(module['functions'], text['address'], text['initializedBytes'])
    previous = {row['address']: row for row in parents}
    linked = {row['address']: row for row in module['functions']}
    if not set(previous).issubset(linked):
        raise ValueError('Integration dropped accepted source')
    for address, prior in previous.items():
        row = linked[address]
        if (row['symbol'], row['size'], row['sourcePath'], row['sourceSha256']) != (
                prior['symbol'], prior['instructionBytes'], prior['sourcePath'], prior['sourceSha256']):
            raise ValueError('Previously accepted source identity changed')
    functions, copies = [], [(report_path, 'replayed-verification.json'), (checks_path, 'replayed-checks.json')]
    for lane in plan['lanes']:
        record = next(row for row in report['packets'] if row['lane'] == lane['id'])
        packet_path = checkout / record['path']
        ci.verify(packet_path, record['sha256'])
        packet = ci.read(packet_path)
        if selection_hash(selection(checkout, packet)) != lane['selectionSha256']:
            raise ValueError('Independent source selection changed')
        for item in packet.get('sourceInputs', packet.get('sources', [])) + packet.get('headers', []):
            source = ci.native_path(checkout, item['path']).relative_to(checkout).as_posix()
            if snapshot_hash(revision, source) != item['sha256']:
                raise ValueError('Replayed source/header differs from committed snapshot')
            ci.verify(ROOT / source, item['sha256'])
        copies.append((packet_path, 'replayed-' + lane['id'] + '-packet.json'))
        for proof in record['additionalProofs']:
            ci.verify(checkout / proof['path'], proof['sha256'])
            copies.append((checkout / proof['path'], 'replayed-' + lane['id'] + '-boundary.json'))
    for row in report['newFunctions']:
        source = row['sourcePath']
        actual = linked.get(row['address'], {})
        if (row['address'] in previous or any(actual.get(key) != value for key, value in row.items())
                or actual.get('actualLinkedBytesMatch') is not True):
            raise ValueError('New source is absent, overlaps prior credit, or differs from actual linked record')
        if snapshot_hash(revision, source) != row['sourceSha256']:
            raise ValueError('Source differs from committed replay')
        ci.verify(ROOT / source, row['sourceSha256'])
        functions.append({'programId': '0004000e001acb00', 'moduleSha256': MODULE_SHA,
                          'address': row['address'], 'mode': row['mode'], 'instructionBytes': row['size'],
                          'poolBytes': 0, 'symbol': row['symbol'], 'sourcePath': source,
                          'sourceSha256': row['sourceSha256'], 'originalSpanSha256': row['originalSpanSha256'],
                          'boundedCases': row['behaviorCases'], 'behaviorCaseDigest': row['behaviorCaseDigest'],
                          'sourceRevision': revision, 'lane': row['lane']})
    if (len(functions), sum(row['instructionBytes'] for row in functions)) != (
            plan['newFunctions'], plan['newInstructionBytes']):
        raise ValueError('Admission delta differs from reviewed plan')
    destination = ROOT / 'evidence/cohorts' / plan['cohort']
    if (destination / 'acceptance.json').exists():
        raise ValueError('Append-only acceptance already exists')
    destination.mkdir(parents=True, exist_ok=True)
    for source, name in copies:
        (destination / name).write_bytes(source.read_bytes())
    receipt = {'schemaVersion': 1, 'status': 'accepted', 'cohort': plan['cohort'], 'sourceRevision': revision,
               'parentRecoverySha256': plan['parentRecoverySha256'], 'independentReplaySha256': digest(replay_path),
               'checksReceiptSha256': digest(checks_path), 'replayedIntegrationSha256': digest(report_path),
               'plan': replay['plan'], 'moduleSha256': MODULE_SHA, 'acceptedFunctions': len(functions),
               'acceptedInstructionBytes': plan['newInstructionBytes'], 'acceptedPoolBytes': 0,
               'acceptedInitializedDataBytes': 0, 'cumulativeAcceptedFunctions': module['sourceLinkedFunctionCount'],
               'cumulativeAcceptedInstructionBytes': module['sourceLinkedBytes'],
               'sourceOnlyModule': False, 'wholeGameExecution': False, 'universalBehaviorProof': False,
               'domain': report['domain'], 'functions': functions}
    write_json(destination / 'acceptance.json', receipt)
    recovery = ci.read(ROOT / 'recovery.json')
    recovery['acceptedCohorts'].append({'path': (destination / 'acceptance.json').relative_to(ROOT).as_posix(),
                                       'sha256': digest(destination / 'acceptance.json')})
    recovery.update({'acceptedRecoveredFunctions': module['sourceLinkedFunctionCount'],
                     'acceptedRecoveredBytes': module['sourceLinkedBytes']})
    write_json(ROOT / 'recovery.json', recovery)
    return receipt


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--replay', type=Path, required=True)
    receipt = publish(parser.parse_args().replay.resolve())
    print(json.dumps({key: receipt[key] for key in ('cohort', 'acceptedFunctions', 'acceptedInstructionBytes')}))
