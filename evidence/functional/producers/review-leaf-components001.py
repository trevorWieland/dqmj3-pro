import hashlib
import json
import sys
from pathlib import Path

ROOT = Path.cwd().resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci


def pin(path):
    path = path.resolve()
    return {'path': path.relative_to(ROOT).as_posix(),
            'sha256': hashlib.sha256(path.read_bytes()).hexdigest(),
            'bytes': path.stat().st_size}


def main():
    replay = ROOT / 'work/clean-replay/bundle003-eb8e1b6'
    accepted = {row['symbol'] for row in ci.accepted_functions(ROOT)}
    config = ci.read(ROOT / 'config/build-units.json')
    headers = {unit['source']: unit['headers'] for unit in config['units']}
    rows, inputs, checked_headers, location_differences = [], [], {}, []
    for wave in [1, 5, 8]:
        relative = f'evidence/lanes/wave{wave:03d}-native/packet.json'
        source_packet = ci.read(ROOT / relative)
        repeated = {row['symbol']: row for row in ci.read(replay / relative)['functions']}
        inputs.extend([pin(ROOT / relative), pin(replay / relative)])
        for row in source_packet['functions']:
            if row['symbol'] in accepted or row['exactObjectSpan'] is not False:
                continue
            if row['exactLinkedSpan'] is not False or not row['behavior']['allPassed']:
                continue
            other = repeated[row['symbol']]
            for key in ['canonicalIdentity', 'originalSpanSha256', 'instructionBytes',
                        'objectSymbolSha256', 'linkedSymbolSha256', 'bodyRelocations',
                        'unresolvedSymbols', 'exactObjectSpan', 'exactLinkedSpan']:
                if row[key] != other[key]:
                    raise ValueError('Independent result differs: ' + row['symbol'] + '/' + key)
            before = json.loads(json.dumps(row['behavior']))
            after = json.loads(json.dumps(other['behavior']))
            if before != after:
                if wave != 5:
                    raise ValueError('Unexpected behavior difference')
                first = before['wrongSourceControl']['negativeLinkedElf'].pop('path')
                second = after['wrongSourceControl']['negativeLinkedElf'].pop('path')
                if Path(second) != replay / Path(first).relative_to(ROOT) or before != after:
                    raise ValueError('Wrong-source binary or observation differs')
                location_differences.append({'symbol': row['symbol'],
                                             'field': 'behavior.wrongSourceControl.negativeLinkedElf.path',
                                             'original': first, 'replayed': second})
            source = ci.native_path(ROOT, row['source']['path'])
            checked_source = pin(source)
            if checked_source['sha256'] != row['source']['sha256']:
                raise ValueError('Source changed: ' + row['symbol'])
            for header in headers[checked_source['path']]:
                checked_headers[header] = pin(ROOT / header)
            rows.append({'canonicalIdentity': row['canonicalIdentity'],
                         'symbol': row['symbol'], 'source': checked_source,
                         'originalInstructionBytes': row['instructionBytes'],
                         'originalSpanSha256': row['originalSpanSha256'],
                         'candidateObjectSpanSha256': row.get('objectSymbolSha256'),
                         'exactObjectSpan': False, 'exactLinkedSpan': False,
                         'functionalConfidence': 'low' if wave == 1 else 'medium',
                         'behavior': other['behavior'], 'evidenceLane': f'wave{wave:03d}-native',
                         'proofSourceRevision': 'eb8e1b63c3713b35dde87925db20cb3836100145',
                         'limits': ['Bounded ARM behavior; native game ABI not established',
                                    'No universal equivalence or source-credit admission']})
    if len(rows) != 48 or sum(row['originalInstructionBytes'] for row in rows) != 1324:
        raise ValueError('Reviewed subset changed')
    result = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-functional-subset',
              'moduleSha256': rows[0]['canonicalIdentity']['moduleSha256'],
              'programId': '0004000e001acb00', 'acceptedSourceCreditGranted': 0,
              'functions': rows, 'headers': list(checked_headers.values()), 'inputPackets': inputs,
              'artifactLocationDifferences': location_differences,
              'independentReplay': pin(ROOT / 'evidence/verification/clean-checkout-bundle003.json'),
              'limits': ['Only behavior-tested nonmatching C is selected from mixed packets',
                         'Fourteen scalar recipes have uncertain original signatures: low confidence',
                         'No new exact-source bytes or native game claims']}
    target = ROOT / 'work/functional-review/leaf-components001.json'
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({'functions': len(rows), 'originalInstructionBytes': 1324,
                      'lowConfidence': 14, 'mediumConfidence': 34}))


if __name__ == '__main__':
    main()
