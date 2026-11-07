import argparse
import importlib.metadata
import json
import sys
from pathlib import Path

import unicorn

sys.path.insert(0, str(Path(__file__).resolve().parent))
import squirrel_source_wave002 as prior
import squirrel_wave004_boundaries as boundaries
import squirrel_wave004_build as builder
import squirrel_wave004_model as model
import squirrel_wave004_oracle as oracle
import squirrel_wave004_platform as platform_component


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave004'


def corpus():
    cases = []
    for calls in (0, 1, 4):
        for returned in (0, 1, -1, -666):
            cases.append({'calls': calls, 'returnCode': returned, 'seed': 0x444600 + len(cases),
                          'oldResultReference': True, 'referenceResult': True, 'weakEnvironment': True,
                          'outers': 2, 'growStack': calls == 4, 'oldBase': 7, 'base': 3})
    for length in (0, 1, 5, 16):
        for grow in (False, True):
            cases.append({'handler': 'array', 'length': length, 'calls': 4 if grow else 0, 'growStack': grow,
                          'weakEnvironment': True, 'oldResultReference': True, 'chainLength': 2,
                          'seed': 0x444600 + len(cases)})
    for fields in ({'nativeDepth': 100}, {'nativeDepth': 99}, {'arguments': 1}, {'parameterCheck': 2, 'arguments': 3},
                   {'parameterCheck': 2}, {'parameterCheck': 0, 'arguments': 0}, {'argumentType': model.NULL},
                   {'typeMask': -1, 'argumentType': model.NULL}, {'typeMask': 6, 'arguments': 5}):
        cases.append({'seed': 0x444600 + len(cases), **fields})
    return cases


def verify_case(image, component, case):
    outcomes, arenas = [], []
    for source in (False, True):
        expected, unused = model.model(case, source)
        actual, trace, arena = oracle.execute(image, component, case, source)
        if expected != actual or trace['handlerInactiveFieldReads']:
            raise ValueError('Original/source complete per-model arena or raw-field consumer mismatch')
        outcomes.append({'expected': expected, 'actual': actual, 'trace': trace})
        arenas.append(arena)
    original, compiled = [row['actual'] for row in outcomes]
    semantic = lambda row: {key: value for key, value in row.items() if key != 'arenaSha256'}
    if semantic(original) != semantic(compiled):
        raise ValueError('Source and original semantic arenas/services/return differ')
    frame = original['frameAddress']
    permitted = {frame - model.HEAP + offset + byte for offset in model.INACTIVE_OFFSETS for byte in range(4)} if frame is not None else set()
    differences = {index for index, (left, right) in enumerate(zip(*arenas)) if left != right}
    if differences - permitted:
        raise ValueError('Raw source/original difference escaped explicit indeterminate fields')
    return {'input': case, 'original': outcomes[0], 'source': outcomes[1], 'semanticStateEquivalent': True,
            'rawWholeHeapEqual': not differences, 'rawDifferenceBytes': len(differences),
            'allRawDifferencesConfinedToIndeterminateFields': True}


def execute(output, publish=False):
    output.mkdir(parents=True, exist_ok=True)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    proof = boundaries.verify(ROOT, image)
    paths = sorted(path for path in SOURCE.glob('*') if path.suffix in ('.c', '.h'))
    dependencies = [ROOT / 'source/squirrel-wave002' / name for name in ('array_views.h', 'array_create.c', 'vector_resize.c')]
    dependencies += [ROOT / 'source/squirrel-wave003' / name for name in ('array_controller.c', 'vm_controller.h')]
    dependencies += [ROOT / 'src/native/wave005' / name for name in ('vm_views.h', 'chain.c', 'object.c', 'stack.c', 'push.c')]
    dependencies += [ROOT / 'toolscripts' / name for name in ('squirrel_source_wave002.py', 'squirrel_wave002_oracle.py',
                                                             'squirrel_wave002_platform.py', 'squirrel_wave002_boundaries.py')]
    pins = [prior.pin(path) for path in paths + dependencies]
    component = builder.build(output / 'normal')
    cases = [verify_case(image, component, case) for case in corpus()]
    terminal = verify_case(image, component, {'handler': 'array', 'allocationFails': True, 'oldResultReference': True, 'seed': 0x444699})
    if terminal['original']['actual']['terminal'] != 'assertion' or terminal['original']['trace']['returned']:
        raise ValueError('Allocation-failure assertion accidentally counted as normal return')
    varying = [verify_case(image, component, {'seed': 0x444688, 'stackSeed': seed, 'referenceResult': True}) for seed in (17, 113, 991, 31337)]
    if len({row['original']['actual']['arenaSha256'] for row in varying}) != 4 or len({row['source']['actual']['arenaSha256'] for row in varying}) != 1:
        raise ValueError('Indeterminate native frame bytes or deterministic portable initialization were not demonstrated')
    if len({row['original']['actual']['semanticArenaSha256'] for row in varying}) != 1:
        raise ValueError('Changing only dead-stack seed changed meaningful native dispatch state')
    negatives = []
    controls = {'wrong-depth': {'nativeDepth': 100}, 'wrong-arity': {'parameterCheck': 2},
                'wrong-previous-base': {'oldBase': 3}, 'missing-depth-restore': {},
                'wrong-suspend': {'returnCode': -666}, 'missing-result-clear': {'referenceResult': True}}
    for index, (variant, fields) in enumerate(controls.items()):
        wrong = builder.build(output / variant, variant)
        case = {'seed': 0x444700 + index, **fields}
        expected, unused = model.model(case, True)
        actual, trace, unused = oracle.execute(image, wrong, case, True)
        if actual == expected or not trace['returned']:
            raise ValueError('Wrong source did not genuinely return and diverge: ' + variant)
        negatives.append({'variant': variant, 'input': case, 'actuallyReturned': True, 'semanticDifferenceDetected': True, 'elfSha256': wrong['elfSha256']})
    platform = platform_component.build(ROOT, SOURCE, output / 'platform')
    for pin in pins:
        if prior.pin(ROOT / pin['path']) != pin:
            raise ValueError('Source/dependency changed during dispatch verification')
    new_roots = []
    for name, address, length in (('fn_00196f6c', 0x196f6c, 1604), ('fn_0019d408', 0x19d408, 336), ('fn_00198230', 0x198230, 92)):
        row = component['functions'][name]
        original = image[address - 0x100000:address - 0x100000 + length]
        new_roots.append({'symbol': name, 'address': address, 'originalCompleteSpanBytes': length,
                          'sourceSymbolBytes': row['bytes'], 'sourceSectionBytes': row['sectionBytes'],
                          'sourceSectionSha256': row['sectionSha256'], 'originalSpanSha256': model.sha(original),
                          'exactCompleteInstructionAndPoolMatch': original == row['data']})
    report = {'schemaVersion': 1, 'status': 'bounded-native-dispatch-source-verified', 'programId': '0004000e001acb00',
              'moduleSha256': model.sha(image), 'boundaryProof': proof, 'sources': [prior.pin(path) for path in paths],
              'frozenDependencies': [prior.pin(path) for path in dependencies], 'functions': new_roots,
              'producer': [prior.pin(path) for path in [Path(__file__), *sorted((ROOT / 'toolscripts').glob('squirrel_wave004_*.py'))]],
              'compiler': prior.pin(ROOT / 'tools/clang-21/clang.exe'), 'linker': prior.pin(ROOT / 'tools/clang-21/ld.lld.exe'),
              'runtime': {'unicornPackage': importlib.metadata.version('unicorn'), 'unicornPython': unicorn.__version__,
                          'unicornNative': list(unicorn.uc_version()), 'cpuModel': 'ARM1176-VFP-enabled'},
              'normalCases': cases, 'primaryCorpusCases': len(cases),
              'originalReturns': len(cases) + len(varying), 'sourceReturns': len(cases) + len(varying),
              'completePerModelHeapComparisons': (len(cases) + len(varying)) * 2, 'separateNoreturnAssertion': terminal,
              'indeterminateFrameSeedControls': varying, 'negativeControls': negatives,
              'rawWholeMemoryEquivalenceClaimed': False, 'semanticStateEquivalenceOnly': True,
              'inactiveFrameFields': ['instruction', 'literals', 'target', 'root'],
              'arbitraryRawFrameObserversExcluded': True, 'platform': platform,
              'armElfSha256': component['elfSha256'], 'commands': component['commands'],
              'sourceCodeCreditGranted': 0, 'committedSourceReplay': False, 'wholeGameBuild': False}
    prior.save(output / 'report.json', report)
    if publish:
        prior.save(ROOT / 'evidence/lanes/squirrel-source-wave004/report.json', report)
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/squirrel-source-wave004/packet')
    parser.add_argument('--publish', action='store_true')
    args = parser.parse_args()
    output = args.output.resolve()
    if not output.is_relative_to((ROOT / 'work/squirrel-source-wave004').resolve()):
        raise ValueError('Output must stay within this lane work directory')
    report = execute(output, args.publish)
    print(json.dumps({key: report[key] for key in ('status', 'originalReturns', 'sourceReturns', 'sourceCodeCreditGranted')}))
