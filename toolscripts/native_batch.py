import argparse
import json
from pathlib import Path

import ci_native_build as ci
from module_link import digest, integrate, write_json
from native_batch_proof import boundary, selection, selection_hash
from native_bundle import compile_sources
from native_cohort import MODULE_SHA, ROOT, verify_record


def load_plan(path, root=ROOT):
    path = path.resolve(strict=True)
    if not path.is_relative_to(root / 'config/native-batches'):
        raise ValueError('Batch plan must be repository-owned configuration')
    plan = ci.read(path)
    if plan['schemaVersion'] != 1 or not plan['lanes'] or plan['cohort'] != path.stem:
        raise ValueError('Invalid batch plan identity')
    if len({lane['id'] for lane in plan['lanes']}) != len(plan['lanes']):
        raise ValueError('Duplicate batch lane')
    if any(lane['id'] not in ('wave007-native', 'wave008-native') for lane in plan['lanes']):
        raise ValueError('Batch includes an unreviewed lane')
    return plan


def prepare(plan_path):
    plan = load_plan(plan_path)
    if digest(ROOT / 'recovery.json') != plan['parentRecoverySha256']:
        raise ValueError('Append-only parent recovery ledger changed')
    parents = ci.accepted_functions(ROOT)
    if (len(parents), sum(row['instructionBytes'] for row in parents)) != (
            plan['parentFunctions'], plan['parentInstructionBytes']):
        raise ValueError('Parent source counts disagree with reviewed plan')
    output = ROOT / 'work/native-batches' / plan['cohort']
    ci.compile_accepted(ROOT, output / 'parent')
    parent_module = ci.read(output / 'parent/integration/report.json')
    previous = {row['symbol']: row for row in parents}
    entries = []
    for row in parent_module['functions']:
        prior = previous[row['symbol']]
        entries.append({**row, 'sourcePath': prior['sourcePath'], 'sourceSha256': prior['sourceSha256'],
                        'originalSpanSha256': prior['originalSpanSha256'], 'previouslyAccepted': True})
    census_path = ROOT / plan['census']['path']
    ci.verify(census_path, plan['census']['sha256'])
    census = ci.read(census_path)
    if census['codeSha256'] != MODULE_SHA:
        raise ValueError('Independent census belongs to another module')
    catalogue = {row['address']: row for row in census['functions']}
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    packets, receipts, new = [], [], []
    for lane in plan['lanes']:
        path = ROOT / 'evidence/lanes' / lane['id'] / 'packet.json'
        packet = ci.read(path)
        chosen = selection(ROOT, packet)
        if selection_hash(chosen) != lane['selectionSha256'] or (len(chosen), sum(
                row['instructionBytes'] for row in chosen)) != (lane['functions'], lane['instructionBytes']):
            raise ValueError('Replayed selection differs from reviewed source intervals')
        records = packet.get('sourceInputs', packet.get('sources', [])) + packet.get('headers', [])
        objects, compiled = compile_sources(packet, records, output / lane['id'])
        receipts.extend(compiled)
        proofs = []
        for row in packet['functions']:
            if not row['exactObjectSpan'] or not row['exactLinkedSpan']:
                continue
            address, size, proof = boundary(ROOT, lane['id'], packet, row, image, catalogue)
            if proof and proof not in proofs:
                proofs.append(proof)
            source = verify_record(row['source'])
            obj = objects[source]
            new.append({'address': address, 'size': size, 'symbol': row['symbol'], 'mode': 'ARM',
                        'objectPath': str(obj), 'objectSha256': digest(obj),
                        'sourcePath': source.relative_to(ROOT).as_posix(), 'sourceSha256': row['source']['sha256'],
                        'originalSpanSha256': row['originalSpanSha256'], 'behaviorCases': row['behavior']['cases'],
                        'behaviorCaseDigest': row['behavior']['caseDigest'], 'lane': lane['id'],
                        'previouslyAccepted': False})
        packets.append({'lane': lane['id'], 'path': path.relative_to(ROOT).as_posix(),
                        'sha256': digest(path), 'selectionSha256': selection_hash(chosen),
                        'additionalProofs': proofs})
    if (len(new), sum(row['size'] for row in new)) != (plan['newFunctions'], plan['newInstructionBytes']):
        raise ValueError('New source counts disagree with reviewed plan')
    module = integrate(entries + new, output / 'module')
    result = {'schemaVersion': 1, 'status': 'verified-ready-for-independent-replay', 'cohort': plan['cohort'],
              'producerSha256': digest(Path(__file__)),
              'proofProducerSha256': digest(ROOT / 'toolscripts/native_batch_proof.py'),
              'plan': {'path': plan_path.relative_to(ROOT).as_posix(), 'sha256': digest(plan_path)},
              'parentRecoverySha256': plan['parentRecoverySha256'], 'moduleSha256': MODULE_SHA,
              'census': plan['census'], 'packets': packets, 'newFunctions': new,
              'moduleIntegration': module, 'compileReceipts': receipts,
              'acceptedSourceCreditGranted': False, 'sourceOnlyModule': False, 'wholeGameExecution': False,
              'domain': 'Bounded nonalias aligned typed RAM fixtures; exact linked intervals; no universal behavior claim'}
    target = ROOT / 'evidence/cohorts' / plan['cohort'] / 'verification.json'
    write_json(target, result)
    print(json.dumps({'status': result['status'], 'newFunctions': len(new),
                      'newInstructionBytes': sum(row['size'] for row in new),
                      'sourceLinkedFunctions': module['sourceLinkedFunctionCount'],
                      'sourceLinkedBytes': module['sourceLinkedBytes']}), flush=True)
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--plan', type=Path, required=True)
    prepare(parser.parse_args().plan.resolve())
