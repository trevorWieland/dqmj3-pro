import argparse
import copy
import hashlib
import json
from pathlib import Path
from unittest.mock import patch

import ci_native_build as ci
import functional_report
import native_census_overlay


ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / 'evidence/lanes/squirrel-frozen-functional'
MODULE = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
REPLAY = 'evidence/verification/source-components-420bcff.json'
PINS = {
    2: 'e283d0f37b51db60db75b21996a4ea5a85f9092d46d90c22582b39e128658f38',
    3: '702ece007cb326a34f437abc47bfac5e28e26fd79c338dee445e1eef9cd2a760',
    4: '307fe83092e7064da07f20f0ee18e917bab5e247c86e3aedbbf291e377848714',
    5: '06991c9d07c05cbc9f93e2180459cc62c1cd413909ce7ddeaa2e51a88345d5c4'}
FUNCTIONS = [
    (2, 0x19d320, 232, 'vector_resize.c'), (2, 0x665a44, 180, 'array_create.c'),
    (3, 0x1b33dc, 340, 'array_controller.c'), (4, 0x196f6c, 1540, 'native_call.c'),
    (4, 0x19d408, 336, 'frame_resize.c'), (4, 0x198230, 92, 'frame_resize.c'),
    (5, 0x17ffac, 500, 'generic_call.c')]


def record(path):
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}


def require(condition, message):
    if not condition:
        raise ValueError(message)


def write(name, data):
    path = OUTPUT / name
    path.write_text(json.dumps(data, indent=2) + '\n', encoding='utf-8')
    return record(path)


def generate(report):
    OUTPUT.mkdir(parents=True, exist_ok=True)
    replay = ci.read(ROOT / REPLAY)
    require(record(ROOT / REPLAY)['sha256'] == '0431907a086e0119c19aaa7f8c363b021dac8a0ad83e8163f5a2b5ec67ec2a34', 'Independent committed replay changed')
    require(replay['status'] == 'passed' and replay['freshEnvironment'] is True
            and replay['sharedGeneratedOrWorkInputs'] is False and replay['skippedTests'] == 0, 'Committed replay is not qualified')
    reports, inputs, headers = {}, [record(ROOT / REPLAY)], {}
    for wave, expected in PINS.items():
        path = ROOT / f'evidence/lanes/squirrel-source-wave00{wave}/report.json'
        require(record(path)['sha256'] == expected, 'Frozen report changed')
        data = ci.read(path)
        require(data['moduleSha256'] == MODULE and data['originalReturns'] == data['sourceReturns'] > 0, 'Frozen return accounting differs')
        require(all(row['actuallyReturned'] and row['semanticDifferenceDetected'] for row in data['negativeControls']), 'Frozen semantic controls did not return and fail')
        require(all(row.get('passed', row.get('semanticStateEquivalent')) is True
                    for row in data.get('cases', data.get('normalCases', []))), 'Frozen corpus has a failed comparison')
        require(any(step['name'] == f'squirrel00{wave}' and step['returncode'] == 0 for step in replay['steps']), 'Committed replay omits this producer')
        for item in data.get('sourceInputs', []) + data.get('sources', []) + data.get('dependencies', []) + data.get('frozenDependencies', []):
            if isinstance(item, dict) and item.get('path', '').startswith('source/'):
                require(record(ROOT / item['path'])['sha256'] == item['sha256'], 'Frozen source or declaration changed')
                inputs.append(record(ROOT / item['path']))
                if item['path'].endswith('.h'):
                    headers[item['path']] = record(ROOT / item['path'])
        reports[wave] = data
        inputs.append(record(path))
    existing = ci.read(ROOT / functional_report.CONFIG)
    census, overlays = native_census_overlay.compose(ROOT, ci.read(functional_report.checked(ROOT, existing['census'])))
    canonical = {row['address']: row for row in census['functions']}
    blocked = {row['symbol'] for row in ci.accepted_functions(ROOT)} | {row['name'] for row in existing['functions']}
    proposed = []
    for wave, address, size, filename in FUNCTIONS:
        name, data, original = f'fn_{address:08x}', reports[wave], canonical[address]
        require(name not in blocked and original['mode'] == 'ARM' and original['textBodyBytes'] == size, 'Candidate is admitted, duplicated, or has a different complete extent')
        comparisons = [row for profile in data.get('profiles', []) for row in profile['functions'] if row['symbol'] == name]
        comparisons += [row for row in data.get('functions', []) if row['symbol'] == name]
        if wave in (3, 5):
            comparisons.append(data)
        require(comparisons and all(row['exactCompleteInstructionAndPoolMatch'] is False for row in comparisons), 'Exact candidate needs separate source admission')
        source = record(ROOT / f'source/squirrel-wave00{wave}' / filename)
        require(source in inputs, 'Source definition is outside the frozen evidence')
        entry = next(part['endExclusive'] - address for part in original['ranges'] if part['start'] <= address < part['endExclusive'])
        proposed.append({'symbol': name, 'canonicalIdentity': {'programId': existing['programId'], 'moduleSha256': MODULE, 'address': address, 'mode': 'ARM'},
            'source': source, 'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
            'originalInstructionBytes': size, 'originalInstructionRanges': original['ranges'], 'reportEntryBytes': entry,
            'behavior': {'allPassed': True, 'frozenReport': record(ROOT / f'evidence/lanes/squirrel-source-wave00{wave}/report.json'),
                'originalReturns': data['originalReturns'], 'sourceReturns': data['sourceReturns'],
                'independentCommittedReplay': record(ROOT / REPLAY), 'normallyReturningCompiledControlsRejected': len(data['negativeControls']),
                'scope': 'Bounded valid ARM ownership/ABI cases and native host component execution; explicit fixture services',
                'excludedDomains': ['whole VM or game execution', 'device execution', 'allocator recovery', 'malformed or racing objects',
                    'raw observers of indeterminate inactive CallInfo bytes', 'unrecovered service implementations'],
                'allocatorPreconditions': 'Valid size/capacity/storage, nonoverflow byte sizes, nonalias fill, successful realloc, nonreentrant release',
                'semanticStateComparisonDistinctFromRawMemoryEquality': wave in (4, 5)}})
    packet = write('proof.json', {'schemaVersion': 1, 'moduleSha256': MODULE, 'acceptedSourceCreditGranted': 0,
        'status': 'proposal-for-coordinator-review-only', 'functions': proposed, 'headers': sorted(headers.values(), key=lambda row: row['path']),
        'frozenInputs': sorted({row['path']: row for row in inputs}.values(), key=lambda row: row['path']),
        'allocatorDomainErratum': record(ROOT / 'source/squirrel-wave004/allocator-domain-erratum.md'), 'composedCensusOverlays': overlays})
    registry = {'schemaVersion': 1, 'version': existing['version'], 'programId': existing['programId'], 'moduleSha256': MODULE,
        'census': existing['census'], 'functions': [{'name': row['symbol'], 'confidence': 'medium', 'packet': packet,
            'sourceLookup': 'repository-function-index'} for row in proposed]}
    write('registry-proposal.json', registry)
    result = functional_report.generate(ROOT, report, registry)
    original_read = ci.read
    controls = {}
    for label in ('missing-cold-range', 'wrong-entry-size', 'claimed-exact', 'wrong-canonical-size'):
        altered = copy.deepcopy(original_read(ROOT / packet['path']))
        row = next(item for item in altered['functions'] if item['symbol'] == 'fn_00196f6c')
        if label == 'missing-cold-range': row['originalInstructionRanges'] = row['originalInstructionRanges'][:1]
        elif label == 'wrong-entry-size': row['reportEntryBytes'] += 4
        elif label == 'claimed-exact': row['exactObjectSpan'] = True
        else: row['originalInstructionBytes'] -= 4
        with patch.object(functional_report, 'checked', side_effect=lambda root, item: root / item['path'] if item['path'] == packet['path'] else functional_report.contained(root, item['path'])), patch.object(ci, 'read', side_effect=lambda path: altered if Path(path) == ROOT / packet['path'] else original_read(path)):
            try:
                functional_report.generate(ROOT, report, registry)
            except ValueError:
                controls[label] = True
            else:
                raise ValueError('Functional range/credit negative was accepted')
    write('validation.json', {'schemaVersion': 1, 'proposalOnly': True, 'functionalReportGeneratePassedAgainstActualLocalReport': True,
        'functions': result['functions'], 'completeCanonicalInstructionBytes': sum(row['originalInstructionBytes'] for row in proposed),
        'fragmentedCallNativeEntryBytes': 964, 'fragmentedCallNativeAllInstructionBytes': 1540, 'negativeControlsRejected': controls,
        'productionRegistryEdited': False, 'sourceCreditGranted': 0, 'producer': record(Path(__file__).resolve())})
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--report', type=Path, default=ROOT / 'build/update-content0/report.json')
    args = parser.parse_args()
    print(json.dumps({'proposedFunctions': len(generate(ci.read(args.report))['functions']), 'sourceAdmissionGranted': False}))


if __name__ == '__main__':
    main()
