import argparse
import json
from pathlib import Path

import ci_native_build as ci
import squirrel_reference_records012_build as builder
import squirrel_reference_records012_model as model
import squirrel_reference_records012_oracle as oracle
from squirrel_source_wave002 import sha


ROOT, SOURCE = builder.ROOT, builder.SOURCE


def record(path):
    payload = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(payload), 'sha256': sha(payload)}


def validate(case):
    if any(type(case.get(name)) is not int for name in ('group', 'size', 'capacity', 'requested', 'fill_kind')):
        raise ValueError('Record case fields must be exact integers')
    if case['group'] not in (0, 1) or not 0 <= case['size'] <= case['capacity'] <= 64 or not 0 <= case['requested'] <= 64 or case['fill_kind'] not in (0, 1, 2):
        raise ValueError('Record case escaped valid bounded storage')


def execute(output):
    output = output.resolve()
    if not output.is_relative_to(ROOT / 'work/squirrel-reference-prefix012'):
        raise ValueError('Record qualification must remain private to012')
    output.mkdir(parents=True, exist_ok=True)
    core = ci.read(ROOT / 'evidence/lanes/squirrel-reference-prefix012/core-ready.json')
    if record(ROOT / 'evidence/lanes/squirrel-reference-prefix012/core-ready.json')['sha256'] != '04d700df6bb0c3f42c7018302c43a79ba4fa78b11b1d3635d477df6ef57409cd':
        raise ValueError('Frozen reference core receipt differs')
    for item in core['pins']:
        if record(ROOT / item['path']) != item:
            raise ValueError('Frozen reference core metadata changed')
    for item in core['ownedFiles']:
        if record(ROOT / item['path']) != item:
            raise ValueError('Frozen reference core changed: ' + item['path'])
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126':
        raise ValueError('Record original module changed')
    census = ci.read(ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json')
    boundaries = []
    for address, size, name in oracle.ROOTS:
        row = next(item for item in census['functions'] if item['address'] == address)
        if row['textBodyBytes'] != size or row['mode'] != 'ARM' or row['ranges'] != [{'start': address, 'endExclusive': address + size, 'bytes': size}]:
            raise ValueError('Record helper canonical extent differs')
        boundaries.append({'entry': address, 'canonicalName': f'fn_{address:08x}', 'portableName': name,
                           'instructionBytes': size, 'sha256': sha(image[address - 0x100000:address - 0x100000 + size])})
    paths = [SOURCE / name for name in ('record_storage.c', 'record_storage.h', 'record_runtime.c', 'native_record_fixture.c', 'RECORDS.md')]
    paths += list((ROOT / 'toolscripts').glob('squirrel_reference_records012*.py'))
    paths += [ROOT / 'tests/test_squirrel_reference_records012.py', ROOT / 'evidence/lanes/squirrel-reference-prefix012/core-ready.json']
    paths += [ROOT / name for name in ('source/squirrel-wave009/class_release.h', 'source/squirrel-wave008/generator_release.h',
        'source/squirrel-wave007/array_release.h', 'evidence/lanes/squirrel-class-release009/ready.json')]
    core_report = ci.read(ROOT / core['pins'][0]['path'])
    for item in core_report['inputs']:
        if record(ROOT / item['path']) != item:
            raise ValueError('Frozen compiled core input changed: ' + item['path'])
    paths += [ROOT / item['path'] for item in core['pins']]
    pins = sorted({item['path']: item for item in core_report['inputs'] + [record(path) for path in paths]}.values(), key=lambda item: item['path'])
    rows, components, natives, visited = [], {}, {}, set()
    for family in ('legacy', 'opaque'):
        components[family] = component = builder.build_arm(output / ('arm-' + family), dispatch=family)
        natives[family] = native = builder.build_native(output / ('native-' + family), dispatch=family)
        if len(native['observations']) != len(model.cases()):
            raise ValueError('Native record fixture omitted cases')
        for index, case in enumerate(model.cases()):
            validate(case)
            expected, unused = oracle.expected(case, index, component)
            original, original_trace, unused = oracle.execute(image, component, case, index, False)
            source, source_trace, unused = oracle.execute(image, component, case, index, True)
            if original != expected or source != expected or native['observations'][index] != model.model(case, index):
                raise ValueError('Record source/original/host/model comparison failed')
            visited.update(original_trace['visited'])
            rows.append({'family': family, 'case': case, 'passed': True, 'original': original, 'source': source,
                         'originalTrace': original_trace, 'sourceTrace': source_trace})
    controls = []
    for variant in ('missing-call-retain', 'reversed-member-release', 'missing-member-secondary-retain'):
        wrong = builder.build_arm(output / variant / 'arm', variant, 'opaque')
        native = builder.build_native(output / variant / 'native', variant, 'opaque')
        differing = [index for index, case in enumerate(model.cases()) if native['observations'][index] != model.model(case, index)]
        if len(native['observations']) != len(model.cases()) or not differing:
            raise ValueError('Native record control did not return and differ')
        index = differing[0]
        actual, trace, unused = oracle.execute(image, wrong, model.cases()[index], index, True)
        expected, unused = oracle.expected(model.cases()[index], index, wrong)
        if not trace['returned'] or actual == expected:
            raise ValueError('ARM record control did not return and differ')
        if variant == 'reversed-member-release' and actual['arenaSha256'] != expected['arenaSha256']:
            raise ValueError('Member release control lost its same-final-arena property')
        controls.append({'variant': variant, 'caseIndex': index, 'armActuallyReturned': True, 'nativeActuallyReturnedAllCases': True,
                         'nativeDifferences': len(differing), 'semanticDifferenceDetected': True,
                         'sameFinalArena': actual['arenaSha256'] == expected['arenaSha256']})
    if any(record(ROOT / item['path']) != item for item in pins):
        raise ValueError('Record successor inputs changed during qualification')
    body = {address + offset for address, size, unused in oracle.ROOTS for offset in range(0, size, 4)}
    result = {'schemaVersion': 1, 'status': 'bounded-portable-record-storage-successors-verified', 'moduleSha256': sha(image),
        'boundaries': boundaries, 'inputs': pins, 'cases': rows, 'negativeControls': controls,
        'originalReturns': len(rows), 'sourceReturns': len(rows), 'nativeReturns': len(rows),
        'originalInstructionAddressesVisited': len(body & visited), 'originalInstructionAddresses': len(body),
        'unvisitedOriginalInstructionAddresses': sorted(body - visited),
        'armElfSha256': {family: value['elfSha256'] for family, value in components.items()},
        'native': natives, 'frozenCoreChanged': False, 'fullTransitiveGraphClosed': False,
        'acceptedSourceCreditGranted': 0, 'duplicateCanonicalCreditGranted': 0, 'wholeVmCreditGranted': 0,
        'limits': ['nonalias fill, valid bounded storage and successful returning allocator',
                  'record callbacks observe ownership order; broader member-storage mutation cases remain open',
                  'compatible opaque and typed legacy callback families selected explicitly',
                  'no actual mixed object finalizer or VM provider wiring claim', 'Android objects only; no device or game execution']}
    (output / 'report.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/squirrel-reference-prefix012/qualified-records')
    result = execute(parser.parse_args().output)
    print(json.dumps({'originalReturns': result['originalReturns'], 'sourceReturns': result['sourceReturns'], 'nativeReturns': result['nativeReturns']}))
