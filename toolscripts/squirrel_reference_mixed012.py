import argparse
import json
from pathlib import Path

import ci_native_build as ci
import squirrel_reference_mixed012_build as builder
import squirrel_reference_mixed012_model as model
import squirrel_reference_mixed012_oracle as oracle
from squirrel_source_wave002 import sha


ROOT, SOURCE = builder.ROOT, builder.SOURCE
RECEIPTS = {
    'squirrel-reference-prefix012/core-ready.json': '04d700df6bb0c3f42c7018302c43a79ba4fa78b11b1d3635d477df6ef57409cd',
    'squirrel-prototype-release011/ready.json': '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092',
    'squirrel-native-closure-release013/ready.json': '4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1'}
CONTROLS = ('early-mixed-release', 'skipped-mixed-shrink', 'wrong-mixed-provider')


def record(path):
    payload = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(payload), 'sha256': sha(payload)}


def validate(variant, operation):
    if type(variant) is not int or type(operation) is not int or variant not in range(4) or operation not in range(3):
        raise ValueError('Mixed lifetime case escaped its declared ownership/storage domain')


def frozen_inputs():
    pins = []
    for name, digest in RECEIPTS.items():
        path = ROOT / 'evidence/lanes' / name
        if record(path)['sha256'] != digest:
            raise ValueError('Mixed lifetime frozen receipt changed: ' + name)
        pins.append(record(path))
        ready = ci.read(path)
        records = ready.get('files', []) + ready.get('ownedFiles', []) + ready.get('pins', [])
        if 'ownedFiles' in ready:
            records += ci.read(ROOT / ready['pins'][0]['path'])['inputs']
        for item in records:
            if record(ROOT / item['path']) != item:
                raise ValueError('Mixed lifetime frozen input changed: ' + item['path'])
            pins.append(item)
    return pins


def execute(output):
    output = output.resolve()
    if not output.is_relative_to(ROOT / 'work/squirrel-reference-prefix012'):
        raise ValueError('Mixed lifetime qualification must remain private to 012')
    output.mkdir(parents=True, exist_ok=True)
    pins = frozen_inputs()
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126':
        raise ValueError('Mixed lifetime original module changed')
    paths = [SOURCE / name for name in ('mixed_lifetime_fixture.c', 'mixed_lifetime_fixture.h', 'mixed_runtime.c', 'native_mixed_fixture.c', 'MIXED.md')]
    paths += list((ROOT / 'toolscripts').glob('squirrel_reference_mixed012*.py'))
    paths += [ROOT / 'tests/test_squirrel_reference_mixed012.py']
    pins = sorted({item['path']: item for item in pins + [record(path) for path in paths]}.values(), key=lambda item: item['path'])
    component = builder.arm(output / 'arm')
    native = builder.native(output / 'native')
    android = builder.android(output / 'android-objects')
    if len(native['observations']) != len(model.cases()):
        raise ValueError('Native mixed lifetime fixture omitted cases')
    rows, coverage = [], set()
    for index, (variant, operation) in enumerate(model.cases()):
        validate(variant, operation)
        original, original_trace, original_arena = oracle.execute(image, component, variant, operation, False)
        source, source_trace, source_arena = oracle.execute(image, component, variant, operation, True)
        if original != source or original_arena != source_arena or original['words'] != model.expected(variant, operation):
            raise ValueError('Mixed lifetime original/source complete state differs')
        if native['observations'][index] != {'variant': variant, 'operation': operation, 'words': model.expected(variant, operation)}:
            raise ValueError('Native mixed lifetime model differs')
        coverage.update(original_trace['visited'])
        rows.append({'variant': variant, 'operation': operation, 'original': original, 'source': source,
                     'originalTrace': original_trace, 'sourceTrace': source_trace, 'completeHeapEqual': True})
    controls = []
    for variant in CONTROLS:
        wrong = builder.arm(output / variant / 'arm', variant)
        wrong_native = builder.native(output / variant / 'native', variant)
        differences = [index for index, (case_variant, operation) in enumerate(model.cases())
                       if wrong_native['observations'][index]['words'] != model.expected(case_variant, operation)]
        if len(wrong_native['observations']) != len(model.cases()) or not differences:
            raise ValueError('Mixed lifetime native control failed to return and differ')
        index = differences[0]
        case_variant, operation = model.cases()[index]
        actual, trace, unused = oracle.execute(image, wrong, case_variant, operation, True)
        expected = rows[index]['source']
        if not actual['returned'] or actual == expected:
            raise ValueError('Mixed lifetime ARM control failed to return and differ')
        same = actual['arenaSha256'] == expected['arenaSha256']
        if variant == 'early-mixed-release' and not same:
            raise ValueError('Mixed publication control lost its same-final-heap property')
        controls.append({'variant': variant, 'caseIndex': index, 'sourceArmActuallyReturned': True,
                         'nativeActuallyReturnedAllCases': True, 'nativeDifferences': len(differences),
                         'sameFinalHeap': same, 'semanticDifferenceDetected': True})
    if any(record(ROOT / item['path']) != item for item in pins):
        raise ValueError('Mixed lifetime input changed during qualification')
    result = {'schemaVersion': 1, 'status': 'bounded-actual-native-prototype-mixed-lifetime-composition',
        'moduleSha256': sha(image), 'inputs': pins, 'cases': rows, 'negativeControls': controls,
        'armElfSha256': component['elfSha256'], 'native': native, 'androidArm64Objects': android,
        'originalReturns': len(rows), 'sourceReturns': len(rows), 'nativeReturns': len(rows),
        'originalInstructionAddressesVisited': sorted(coverage), 'completeOwnedHeapCompared': True,
        'vtableNormalization': False, 'sourceOriginalModuleMapped': False, 'originalVtablesPreserved': True,
        'frozenProvidersChanged': False, 'fullTransitiveGraphClosed': False,
        'acceptedSourceCreditGranted': 0, 'duplicateCanonicalCreditGranted': 0, 'wholeVmCreditGranted': 0,
        'limits': ['valid initialized real objects; constructor/factory logic not recovered by this fixture',
                  'native closure callable is null and never invoked; no native-call ABI claim',
                  'logical deallocation observers preserve storage until complete snapshots; allocator not recovered',
                  'prototype names, other compact vectors and weak links are null in this bounded graph',
                  'only exact opaque 011 callback family selected; legacy tables never reinterpreted',
                  'no string encoding or provider assumption; string names are null',
                  'Android objects compile only; no physical Android or game execution']}
    (output / 'report.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/squirrel-reference-prefix012/qualified-mixed')
    result = execute(parser.parse_args().output)
    print(json.dumps({key: result[key] for key in ('originalReturns', 'sourceReturns', 'nativeReturns')}))
