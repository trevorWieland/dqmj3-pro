import argparse
import json
from pathlib import Path

import ci_native_build as ci
import squirrel_reference_array012_build as builder
import squirrel_reference_array012_model as model
import squirrel_reference_array012_oracle as oracle
import squirrel_reference_array012_android as android
from squirrel_source_wave002 import sha


ROOT, SOURCE = builder.ROOT, builder.SOURCE
RECEIPTS = {
    'squirrel-reference-prefix012/core-ready.json': '04d700df6bb0c3f42c7018302c43a79ba4fa78b11b1d3635d477df6ef57409cd',
    'squirrel-reference-prefix012/mixed-ready.json': 'cb3f79973c57f2c480edbe52e2be8231c0c2baf35fa82d89a7d45e46ca1e0a43',
    'squirrel-prototype-release011/ready.json': '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092',
    'squirrel-native-closure-release013/ready.json': '4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1',
    'squirrel-weak-reference014/ready.json': 'cf161d3eb1630b1272143669774db030327a69616b21b58f6b20c908858c7929',
    'squirrel-array-release007/ready.json': 'b398aa788374c97994be97e6ea40bfed6ed4ab7461585c140f0c103adcd0adce'}
CONTROLS = ('premature-array-free', 'missing-array-unlink', 'premature-array-weak-reset')


def record(path):
    payload = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(payload), 'sha256': sha(payload)}


def validate(case):
    if set(case) != {'variant', 'requested', 'weak_order', 'failed'} or any(type(value) is not int for value in case.values()):
        raise ValueError('Opaque array fields must be exact integers')
    if not 0 <= case['variant'] < 4 or case['requested'] not in (0, 1, 2, 4, 9) or case['weak_order'] not in (0, 1, 2) or case['failed'] not in (0, 1):
        raise ValueError('Opaque array escaped its declared bounded storage domain')


def frozen_inputs():
    pins = []
    for name, digest in RECEIPTS.items():
        path = ROOT / 'evidence/lanes' / name
        if record(path)['sha256'] != digest:
            raise ValueError('Opaque array frozen receipt changed: ' + name)
        pins.append(record(path))
        ready = ci.read(path)
        records = ready.get('files', []) + ready.get('ownedFiles', []) + ready.get('pins', [])
        if 'ownedFiles' in ready:
            records += ci.read(ROOT / ready['pins'][0]['path'])['inputs']
        for item in records:
            if record(ROOT / item['path']) != item:
                raise ValueError('Opaque array frozen input changed: ' + item['path'])
            pins.append(item)
    return pins


def execute(output):
    output = output.resolve()
    if not output.is_relative_to(ROOT / 'work/squirrel-reference-prefix012'):
        raise ValueError('Opaque array qualification must remain private to 012')
    output.mkdir(parents=True, exist_ok=True)
    pins = frozen_inputs()
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126':
        raise ValueError('Opaque array original module changed')
    paths = [SOURCE / name for name in ('array_reference.c', 'array_reference.h', 'array_vtables.c',
        'array_lifetime_fixture.c', 'array_lifetime_fixture.h', 'native_array_fixture.c', 'ARRAYS.md')]
    paths += list((ROOT / 'toolscripts').glob('squirrel_reference_array012*.py'))
    paths += [ROOT / 'tests/test_squirrel_reference_array012.py']
    pins = sorted({item['path']: item for item in pins + [record(path) for path in paths]}.values(), key=lambda item: item['path'])
    component = builder.arm(output / 'arm')
    native = builder.native(output / 'native')
    a64 = builder.android_model(output / 'android-model')
    if native['observations'] != [dict(case, words=model.expected(case)) for case in model.cases()]:
        raise ValueError('Opaque array Windows independent model differs')
    rows, coverage = [], set()
    for case in model.cases():
        validate(case)
        original, original_trace, original_heap = oracle.execute(image, component, case, False)
        source, source_trace, source_heap = oracle.execute(image, component, case, True)
        portable, android_trace, unused = android.execute(a64, case)
        if original != source or original_heap != source_heap or original['words'] != model.expected(case) or portable['words'] != model.expected(case):
            raise ValueError('Opaque array original/source/host64 ownership comparison failed')
        coverage.update(original_trace['visited'])
        rows.append({'case': case, 'original': original, 'source': source, 'android': portable,
                     'originalTrace': original_trace, 'sourceTrace': source_trace, 'androidTrace': android_trace})
    controls = []
    for variant in CONTROLS:
        wrong = builder.arm(output / variant / 'arm', variant)
        wrong_native = builder.native(output / variant / 'native', variant)
        wrong_a64 = builder.android_model(output / variant / 'android', variant)
        differences = [index for index, case in enumerate(model.cases()) if wrong_native['observations'][index]['words'] != model.expected(case)]
        if len(wrong_native['observations']) != len(model.cases()) or not differences:
            raise ValueError('Opaque array host control failed to return and differ')
        index = differences[0]
        case = model.cases()[index]
        actual, trace, unused = oracle.execute(image, wrong, case, True)
        portable, unused_trace, unused = android.execute(wrong_a64, case)
        expected = rows[index]['source']
        if not actual['returned'] or not portable['returned'] or actual == expected or portable['words'] == model.expected(case):
            raise ValueError('Opaque array ARM/AArch64 control failed to return and differ')
        same = actual['arenaSha256'] == expected['arenaSha256']
        if variant != 'missing-array-unlink' and not same:
            raise ValueError('Opaque array publication control lost its same-final-heap property')
        controls.append({'variant': variant, 'case': case, 'armActuallyReturned': True, 'androidModelActuallyReturned': True,
                         'nativeActuallyReturnedAllCases': True, 'nativeDifferences': len(differences),
                         'sameFinalHeap': same, 'semanticDifferenceDetected': True})
    if any(record(ROOT / item['path']) != item for item in pins):
        raise ValueError('Opaque array input changed during qualification')
    boundaries = [{'entry': entry, 'endExclusive': end, 'instructionBytes': end - entry,
        'bodySha256': sha(image[entry - 0x100000:end - 0x100000]), 'newCanonicalCreditGranted': 0}
        for entry, end in ((0x665a44, 0x665af8), (0x665bd4, 0x665bfc), (0x665c60, 0x665cc0))]
    result = {'schemaVersion': 1, 'status': 'bounded-opaque-array-successor-and-actual-mixed-lifetimes-verified',
        'moduleSha256': sha(image), 'boundaries': boundaries, 'inputs': pins, 'cases': rows, 'negativeControls': controls,
        'originalReturns': len(rows), 'sourceReturns': len(rows), 'nativeReturns': len(rows), 'androidModelReturns': len(rows),
        'originalInstructionAddressesVisited': sorted(coverage),
        'armElfSha256': component['elfSha256'], 'native': native, 'android': {'elfSha256': a64['elfSha256'], 'objects': a64['objects']},
        'completeOwnedArmHeapCompared': True, 'independentOwnershipModelCompared': True,
        'vtableNormalization': False, 'sourceOriginalModuleMapped': False, 'originalVtablesPreserved': True,
        'readOnlyFrozenFixtureServiceBindings': True, 'legacyVtableReinterpretation': False,
        'fullTransitiveGraphClosed': False, 'acceptedSourceCreditGranted': 0, 'requestedExactBytes': 0,
        'duplicateCanonicalCreditGranted': 0, 'newCanonicalInstructionBytesClaimed': 0, 'wholeVmCreditGranted': 0,
        'physicalAndroidOrGameExecution': False,
        'limits': ['successful aligned nonoverflow vector allocation; array-object null allocation safely returns null',
                  'ordinary final-owner release of unmarked arrays; GC collector and reentrant mutation not recovered',
                  'exact opaque callback family, actual native013/prototype011/weak014 and source core vectors',
                  'logical disposal preserves physical storage until snapshot; stale dead representations are not live weak references',
                  'no string-provider, complete VM binding or game execution claim',
                  'AArch64 source-object model is not physical Android/device execution']}
    (output / 'report.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/squirrel-reference-prefix012/qualified-array')
    result = execute(parser.parse_args().output)
    print(json.dumps({key: result[key] for key in ('originalReturns', 'sourceReturns', 'nativeReturns', 'androidModelReturns')}))
