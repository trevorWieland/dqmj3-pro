import argparse
import json
from pathlib import Path

import ci_native_build as ci
import squirrel_native_create016_build as builder
import squirrel_native_create016_model as model
import squirrel_native_create016_oracle as oracle
import squirrel_native_create016_android as android
from squirrel_source_wave002 import sha


ROOT, SOURCE = builder.ROOT, builder.SOURCE
RECEIPTS = {
    'squirrel-reference-prefix012/core-ready.json': '04d700df6bb0c3f42c7018302c43a79ba4fa78b11b1d3635d477df6ef57409cd',
    'squirrel-reference-prefix012/mixed-ready.json': 'cb3f79973c57f2c480edbe52e2be8231c0c2baf35fa82d89a7d45e46ca1e0a43',
    'squirrel-prototype-release011/ready.json': '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092',
    'squirrel-native-closure-release013/ready.json': '4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1'}
CONTROLS = ('wrong-capture-slot', 'missing-capture-retain', 'reload-shared-after-allocate',
            'cached-value-before-reallocate', 'late-pop-publication', 'missing-temporary-retain')
DOMAIN_DEAD = {0x177134, 0x177138, 0x17713c, 0x177140, 0x17714c, 0x177150}


def record(path):
    payload = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(payload), 'sha256': sha(payload)}


def validate(case):
    if set(case) != {'captures', 'flags', 'cleanup'} or any(type(value) is not int for value in case.values()):
        raise ValueError('Native creation fields must be exact integers')
    if not 0 <= case['captures'] <= 9 or not 0 <= case['flags'] < 8 or case['cleanup'] not in (0, 1):
        raise ValueError('Native creation escaped its declared bounded storage domain')


def frozen_inputs():
    pins = []
    for name, digest in RECEIPTS.items():
        path = ROOT / 'evidence/lanes' / name
        if record(path)['sha256'] != digest:
            raise ValueError('Native creation frozen receipt changed: ' + name)
        pins.append(record(path))
        ready = ci.read(path)
        records = ready.get('files', []) + ready.get('ownedFiles', []) + ready.get('pins', [])
        if 'ownedFiles' in ready:
            records += ci.read(ROOT / ready['pins'][0]['path'])['inputs']
        for item in records:
            if record(ROOT / item['path']) != item:
                raise ValueError('Native creation frozen input changed: ' + item['path'])
            pins.append(item)
    return pins


def failure_evidence(image, component):
    case = {'captures': 1, 'flags': 0, 'cleanup': 0}
    try:
        oracle.execute(image, component, case, False, 'allocation')
    except RuntimeError as error:
        if 'PC 0x177054' not in str(error) or 'WRITE_UNMAPPED' not in str(error):
            raise
        allocation = {'originalOnly': True, 'faultPc': 0x177054, 'outcome': 'unmapped-null-write', 'sourceExecuted': False}
    else:
        raise ValueError('Original null allocation did not expose its measured fault')
    reallocation, trace, unused = oracle.execute(image, component, case, False, 'reallocation')
    if not reallocation['returned'] or not reallocation['invalidOuterVector'] or (reallocation['outerSize'], reallocation['outerCapacity']) != (1, 4):
        raise ValueError('Original null reallocation no longer exposes the measured invalid owner')
    for mode in ('allocation', 'reallocation'):
        try:
            oracle.execute(image, component, case, True, mode)
        except ValueError as error:
            if 'outside the admitted source domain' not in str(error):
                raise
        else:
            raise ValueError('Unsupported allocator mode reached authored source')
    return {'nullAllocation': allocation, 'nullReallocation': reallocation,
            'sourceFailureModesRejectedBeforeEntry': True, 'allocatorRecoveryClaimed': False}


def execute(output):
    output = output.resolve()
    if not output.is_relative_to(ROOT / 'work/squirrel-native-create016'):
        raise ValueError('Native creation qualification must remain private to 016')
    output.mkdir(parents=True, exist_ok=True)
    pins = frozen_inputs()
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126':
        raise ValueError('Native creation original module changed')
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = ci.read(census_path)
    row = next(item for item in census['functions'] if item['address'] == 0x176fc8)
    if row['mode'] != 'ARM' or row['ranges'] != [{'start': 0x176fc8, 'endExclusive': 0x177154, 'bytes': 396}]:
        raise ValueError('Native creation canonical extent differs')
    paths = list(SOURCE.glob('*.c')) + list(SOURCE.glob('*.h')) + [SOURCE / 'README.md']
    paths += list((ROOT / 'toolscripts').glob('squirrel_native_create016*.py'))
    paths += [ROOT / 'tests/test_squirrel_native_create016.py', census_path,
              ROOT / 'source/squirrel-wave001/upstream/squirrel/sqapi.cpp']
    pins = sorted({item['path']: item for item in pins + [record(path) for path in paths]}.values(), key=lambda item: item['path'])
    component = builder.arm(output / 'arm')
    native = builder.native(output / 'native')
    a64 = builder.android_model(output / 'android-model')
    if native['observations'] != [dict(case, words=model.expected(case)) for case in model.cases()]:
        raise ValueError('Native creation Windows independent model differs')
    rows, coverage = [], set()
    for case in model.cases():
        validate(case)
        original, original_trace, original_heap = oracle.execute(image, component, case, False)
        source, source_trace, source_heap = oracle.execute(image, component, case, True)
        portable, android_trace, unused = android.execute(a64, case)
        if original != source or original_heap != source_heap or original['words'] != model.expected(case) or portable['words'] != model.expected(case):
            raise ValueError('Native creation original/source/host64 ownership comparison failed')
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
            raise ValueError('Native creation host control failed to return and differ')
        index = differences[0]
        case = model.cases()[index]
        actual, trace, unused = oracle.execute(image, wrong, case, True)
        portable, unused_trace, unused = android.execute(wrong_a64, case)
        expected = rows[index]['source']
        if not actual['returned'] or not portable['returned'] or actual == expected or portable['words'] == model.expected(case):
            raise ValueError('Native creation ARM/AArch64 control failed to return and differ')
        same = actual['arenaSha256'] == expected['arenaSha256']
        if variant == 'late-pop-publication' and not same:
            raise ValueError('Native creation publication control lost its same-final-heap property')
        controls.append({'variant': variant, 'case': case, 'armActuallyReturned': True, 'androidModelActuallyReturned': True,
                         'nativeActuallyReturnedAllCases': True, 'nativeDifferences': len(differences),
                         'sameFinalHeap': same, 'semanticDifferenceDetected': True})
    body = set(range(0x176fc8, 0x177154, 4))
    if body - coverage != DOMAIN_DEAD:
        raise ValueError('Native creation reachable instruction closure differs')
    failures = failure_evidence(image, component)
    if any(record(ROOT / item['path']) != item for item in pins):
        raise ValueError('Native creation input changed during qualification')
    boundary = {'entry': 0x176fc8, 'canonicalName': 'fn_00176fc8', 'correspondence': 'sq_newclosure',
        'instructionRanges': row['ranges'], 'instructionBytes': 396, 'bodySha256': sha(image[0x76fc8:0x77154]),
        'literalRange': {'start': 0x177154, 'endExclusive': 0x177160, 'bytes': 12, 'sha256': sha(image[0x77154:0x77160])},
        'knownCallers': [item['address'] for item in census['functions'] if 0x176fc8 in item['calledFunctionAddresses']]}
    result = {'schemaVersion': 1, 'status': 'bounded-native-closure-creation-and-owner-transfer-verified',
        'moduleSha256': sha(image), 'boundary': boundary, 'inputs': pins, 'cases': rows, 'negativeControls': controls,
        'originalReturns': len(rows), 'sourceReturns': len(rows), 'nativeReturns': len(rows), 'androidModelReturns': len(rows),
        'originalRootInstructionsVisited': len(body & coverage), 'originalRootInstructions': len(body),
        'domainUnreachableRootInstructions': sorted(DOMAIN_DEAD), 'failureEvidence': failures,
        'armElfSha256': component['elfSha256'], 'native': native, 'android': {'elfSha256': a64['elfSha256'], 'objects': a64['objects']},
        'completeOwnedArmHeapCompared': True, 'independentOwnershipModelCompared': True,
        'vtableNormalization': False, 'sourceOriginalModuleMapped': False, 'originalVtablesPreserved': True,
        'initializerPrefixQualifiedAsPreconditionOnly': True, 'storedCallableInvoked': False,
        'fullVmStorageBindingClaimed': False, 'fullTransitiveGraphClosed': False,
        'acceptedSourceCreditGranted': 0, 'requestedExactBytes': 0, 'duplicateCanonicalCreditGranted': 0,
        'newCanonicalInstructionBytesProposedForReview': 396, 'wholeVmCreditGranted': 0,
        'physicalAndroidOrGameExecution': False,
        'limits': ['successful aligned nonoverflow allocation and valid bounded active/spare VM stack storage',
                  'declared VM field binding only, no cast to frozen004 or complete native VM type claim',
                  'exact opaque 011 callback family and actual native013/prototype011 finalizers',
                  'prototype other compact vectors, names and weak links null in this composition',
                  'read-only logical disposal and explicitly selected allocator observation mutations',
                  'native callable storage only; no invocation bridge or string-provider assumption',
                  'AArch64 source-object model is not physical Android/game execution']}
    (output / 'report.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/squirrel-native-create016/qualified')
    result = execute(parser.parse_args().output)
    print(json.dumps({key: result[key] for key in ('originalReturns', 'sourceReturns', 'nativeReturns', 'androidModelReturns')}))
