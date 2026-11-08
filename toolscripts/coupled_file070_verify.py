import argparse
import json
from pathlib import Path

import coupled_file070_inputs as inputs
from coupled_file070_replay import verify_journal


def verify(root, output):
    ready = json.loads((output / 'ready.json').read_text())
    if ready['status'] != 'coupled069070-public-transport-passed' or ready['smoke']:
        raise ValueError('Coupled070 completed full pipeline is required')
    expected_count = 83 if ready['sourceOnly'] else 87
    if len(ready['children']) != expected_count:
        raise ValueError('Coupled070 pipeline child roster incomplete')
    manifest = json.loads((output / 'manifest.json').read_text())
    expected_imports = {'sdk': {'arm': 23, 'windows': 23, 'a64': 23}, 'branch': {'arm': 24, 'windows': 22, 'a64': 24}}
    counts = {'positiveProfiles': 0, 'returningControls': 0, 'boundaryProbes': 0, 'originalProfiles': 0, 'builds': 0}
    for selected in ready['children']:
        label = selected['child']
        row = json.loads((output / ('receipt-' + label + '.json')).read_text())
        terminal = verify_journal(output / ('journal-' + label + '.jsonl'), bool(row['probe']))
        if terminal != selected['postExitJournal'] or not row['immutableInputsUnchanged'] or not row['bytecodePrefixAbsent']:
            raise ValueError('Coupled070 terminal or immutable receipt differs')
        target = output / 'tiny' if row['tiny'] else output
        for path, identity in row['inputPins'].items(): inputs.checked(Path(path), identity)
        for imported in row['freshSourceImports']:
            path = Path(imported['actualSource'])
            if not path.is_relative_to(target / 'code') or imported['bytecodeCacheUsed']:
                raise ValueError('Coupled070 helper import was not fresh selected source')
            inputs.checked(path, imported)
        for value in row['audit']['readPaths']:
            path = Path(value)
            if path.is_relative_to(root / 'work') and not path.is_relative_to(output):
                raise ValueError('Coupled070 child read historical workspace')
            if row['tiny'] and any(path.is_relative_to(output / name) for name in ['code', 'source', 'metadata']):
                raise ValueError('Coupled070 tiny child read parent selected inputs')
            if row['mode'] != 'original' and path.is_relative_to(root / 'generated'):
                raise ValueError('Coupled070 source child read original image')
        if row['probe']:
            counts['boundaryProbes'] += 1
            journal = [json.loads(line) for line in (output / ('journal-' + label + '.jsonl')).read_text().splitlines()]
            if not any(item['event'].startswith('rejected-') for item in journal):
                raise ValueError('Coupled070 boundary rejection was not journaled')
            if row['probe'].startswith('late-'):
                receipt_index = next(index for index, item in enumerate(journal) if item['event'] == 'receipt-written')
                if row['status'] != 'passed' or not any(item['event'].startswith('rejected-') for item in journal[receipt_index + 1:]):
                    raise ValueError('Coupled070 late caught rejection did not follow clean receipt')
        elif row['mode'] in ['source', 'control']:
            count = expected_imports[row['family']][row['profile']]
            if row['actualFreshImportCount'] != count:
                raise ValueError('Coupled070 actual per-platform import count differs')
            source_report = json.loads(Path(row['result']['report']).read_text())
            rejected = row['mode'] == 'control'
            if not source_report['sourceReturned'] or bool(source_report['mismatch']) != rejected:
                raise ValueError('Coupled070 source observer result differs')
            counts['returningControls' if rejected else 'positiveProfiles'] += 1
        elif row['mode'] == 'original': counts['originalProfiles'] += 1
        elif row['mode'] in ['build', 'control-build']:
            if len(row['exactArtifacts']) != 133: raise ValueError('Coupled070 exact artifact roster incomplete')
            counts['builds'] += 1
    expected = {'positiveProfiles': 24, 'returningControls': 30, 'boundaryProbes': 15,
        'originalProfiles': 0 if ready['sourceOnly'] else 4, 'builds': 14}
    if counts != expected: raise ValueError('Coupled070 qualified scope counts differ: ' + str(counts))
    return {'status': 'all-coupled070-post-exit-receipts-and-selected-inputs-verified', **counts,
        'actualPerPlatformSourceImportCounts': expected_imports, 'selectedCHeaderInputs': len(manifest['productionAndFixtures']),
        'sourceCreditGranted': 0, 'matchingCreditGranted': 0}


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path, default=Path.cwd())
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(verify(args.root.resolve(), args.output.resolve()), indent=2))
