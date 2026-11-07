import argparse
import json
from pathlib import Path

import ci_native_build as ci
import squirrel_reference_prefix012_build as builder
import squirrel_reference_prefix012_model as model
import squirrel_reference_prefix012_oracle as oracle
from squirrel_source_wave002 import sha


ROOT = builder.ROOT
MODULE_SHA256 = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def record(path):
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(data), 'sha256': sha(data)}


def checked_case(case):
    for name in ('operation', 'old_kind', 'new_kind', 'alias', 'initial_count', 'size', 'capacity', 'requested', 'callback_action'):
        if type(case.get(name)) is not int:
            raise ValueError('Prefix fixture field must be an exact integer')
    if (not 0 <= case['operation'] <= 2 or not 0 <= case['old_kind'] <= 2 or not 0 <= case['new_kind'] <= 2
            or case['callback_action'] not in (0, 1, 2) or case['callback_action'] and case['operation'] != 2
            or case['alias'] not in (0, 1) or not 0 <= case['size'] <= case['capacity'] <= 64
            or not 0 <= case['requested'] <= 64 or not 0 <= case['initial_count'] <= 0xffffffff
            or case['operation'] == 0 and case['old_kind'] and not case['initial_count']):
        raise ValueError('Prefix fixture is outside valid ownership/storage bounds')


def execute(output):
    output = output.resolve()
    if not output.is_relative_to(ROOT / 'work/squirrel-reference-prefix012'):
        raise ValueError('Prefix qualification output must stay in its private work root')
    output.mkdir(parents=True, exist_ok=True)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA256:
        raise ValueError('Original module identity differs')
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = {row['address']: row for row in ci.read(census_path)['functions']}
    boundaries = []
    for name, (address, size) in oracle.ORIGINAL.items():
        row = census[address]
        if row['mode'] != 'ARM' or row['textBodyBytes'] != size or row['ranges'] != [{'start': address, 'endExclusive': address + size, 'bytes': size}]:
            raise ValueError('Reference core does not have its complete canonical function extent')
        boundaries.append({'entry': address, 'canonicalName': f'fn_{address:08x}', 'portableName': name,
                           'instructionBytes': size, 'instructionSha256': sha(image[address - 0x100000:address - 0x100000 + size])})
    ready = ROOT / 'evidence/lanes/squirrel-prototype-release011/ready.json'
    if record(ready)['sha256'] != '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092':
        raise ValueError('Frozen prototype011 readiness identity changed')
    if record(ROOT / 'source/squirrel-wave012/reference_types.h')['sha256'] != '64a44751454449783222f7a7c00654a56f569e8f91a10e0621740c8661c3fbae':
        raise ValueError('Frozen common reference types changed')
    files = list(builder.SOURCE.glob('*')) + list((ROOT / 'toolscripts').glob('squirrel_reference_prefix012*.py'))
    files += [ROOT / name for name in ('source/squirrel-wave011/prototype_release.h', 'source/squirrel-wave004/call_views.h',
        'source/squirrel-wave002/array_views.h', 'src/native/wave005/vm_views.h', 'toolscripts/squirrel_source_wave002.py',
        'tools/clang-21/clang.exe', 'tools/clang-21/ld.lld.exe', 'tools/clang-21/libxml2.dll', 'tools/clang-21/libwinpthread-1.dll')]
    files += [census_path, ready, ROOT / 'evidence/lanes/squirrel-reference-prefix012/types-ready.json',
              ROOT / 'tests/test_squirrel_reference_prefix012.py']
    pins = [record(path) for path in files if path.is_file()]
    components = {family: builder.build_arm(output / ('arm-' + family), dispatch=family) for family in ('legacy', 'opaque')}
    natives = {(family, binding): builder.build_native(output / ('native-' + family + '-' + binding), binding=binding, dispatch=family)
               for family in components for binding in ('core', 'legacy')}
    cases, results, visited = model.cases(), [], set()
    for (family, binding), native in natives.items():
        component = components[family]
        if len(native['observations']) != len(cases):
            raise ValueError('Native prefix fixture did not return every case')
        for index, case in enumerate(cases):
            checked_case(case)
            expected, unused = oracle.expected(case, index, component)
            original, original_trace, unused = oracle.execute(image, component, case, index, False, binding)
            source, source_trace, unused = oracle.execute(image, component, case, index, True, binding)
            if original != expected or source != expected or native['observations'][index] != model.model(case, index):
                raise ValueError('Original, portable ARM, native host or independent model differs')
            visited.update(original_trace['visited'])
            results.append({'callbackFamily': family, 'binding': binding, 'case': case, 'passed': True, 'original': original, 'source': source,
                            'originalTrace': original_trace, 'sourceTrace': source_trace})
    controls = []
    for variant in ('wrong-count-offset', 'release-before-publication', 'skipped-shrink-reference', 'legacy-release-before-publication',
                    'legacy-cached-destroy-pointer', 'legacy-cached-destroy-size'):
        folder = output / variant
        binding = 'legacy' if variant.startswith('legacy-') else 'core'
        wrong_arm, wrong_native = builder.build_arm(folder / 'arm', variant), builder.build_native(folder / 'native', variant, binding)
        differing = [index for index, case in enumerate(cases) if wrong_native['observations'][index] != model.model(case, index)]
        if not differing or len(wrong_native['observations']) != len(cases):
            raise ValueError('Native negative did not genuinely return and differ')
        index = differing[0]
        actual, trace, unused = oracle.execute(image, wrong_arm, cases[index], index, True, binding)
        expected, unused = oracle.expected(cases[index], index, wrong_arm)
        if actual == expected or not trace['returned']:
            raise ValueError('ARM negative did not genuinely return and differ')
        same_heap = actual['arenaSha256'] == expected['arenaSha256']
        if variant.endswith('release-before-publication') and not same_heap:
            raise ValueError('Publication negative lost its same-final-arena qualification')
        controls.append({'variant': variant, 'caseIndex': index, 'armActuallyReturned': True,
                         'nativeActuallyReturnedAllCases': True, 'nativeDifferences': len(differing),
                         'sameFinalArmArena': same_heap, 'semanticDifferenceDetected': True,
                         'armElfSha256': wrong_arm['elfSha256'], 'nativeExeSha256': wrong_native['exeSha256']})
    if any(record(ROOT / item['path']) != item for item in pins):
        raise ValueError('Prefix qualification input changed while running')
    instruction_addresses = {address + offset for address, size in oracle.ORIGINAL.values() for offset in range(0, size, 4)}
    report = {'schemaVersion': 1, 'status': 'bounded-portable-reference-core-verified', 'moduleSha256': MODULE_SHA256,
        'inputs': pins, 'boundaries': boundaries, 'cases': results, 'negativeControls': controls,
        'originalReturns': len(results), 'sourceReturns': len(results), 'nativeReturns': len(results),
        'providerBindings': {family + ':' + binding: len(cases) for family, binding in natives},
        'originalInstructionsVisited': len(visited & instruction_addresses), 'originalInstructionCount': len(instruction_addresses),
        'unvisitedOriginalInstructions': sorted(instruction_addresses - visited),
        'armElfSha256': {family: value['elfSha256'] for family, value in components.items()},
        'native': {family + ':' + binding: value for (family, binding), value in natives.items()},
        'armCommands': {family: value['commands'] for family, value in components.items()},
        'explicitOpaquePrototypeAndTypedLegacyDispatch': True, 'explicitUnifiedOpaqueFamilySelection': True, 'prototypeToSqRefCasts': False,
        'frozenProvidersModified': False, 'fullTransitiveGraphClosed': False, 'actualPrototypeFinalizerRecoveredByThisLane': False,
        'wholeVmSourceCreditGranted': 0, 'acceptedSourceCreditGranted': 0, 'wholeGameBuild': False,
        'frozenPrototypeHeaderReady': True, 'actualPrototypeFinalizerNotConsumed': True,
        'limits': ['compatible opaque prototype prefix callback substitutes and genuine typed full-prefix callback substitutes',
                  'no actual prototype or array finalizer claim', 'legacy adapters, other generic containers and mixed-vtable graph remain open',
                  'valid storage, nonalias fill, successful allocator and nonreentrant resize callback domain',
                  'Android objects only; no Android device or whole-game execution']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/squirrel-reference-prefix012/qualified-core')
    result = execute(parser.parse_args().output)
    print(json.dumps({'originalReturns': result['originalReturns'], 'sourceReturns': result['sourceReturns'],
                      'nativeReturns': result['nativeReturns'], 'wholeVmSourceCreditGranted': 0}))
