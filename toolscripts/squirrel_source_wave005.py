import argparse
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import squirrel_source_wave002 as prior
import squirrel_wave005_boundaries as boundaries
import squirrel_wave005_build as builder
import squirrel_wave005_model as model
import squirrel_wave005_oracle as oracle
import squirrel_wave005_platform as platform_component


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave005'


def corpus():
    cases = []
    for calls in (0, 4):
        for returned in (0, 1, -1, -666):
            for weak in (False, True):
                cases.append({'calls': calls, 'returnCode': returned, 'weakEnvironment': weak, 'growStack': calls == 4,
                              'outers': 2, 'referenceResult': True, 'oldResultReference': True})
    for length in (0, 1, 5, 16):
        for grow in (False, True):
            cases.append({'handler': 'array', 'length': length, 'growStack': grow, 'calls': 4 if grow else 0,
                          'weakEnvironment': True, 'oldResultReference': True, 'chainLength': 2})
    for flags in (0, 1, 0x80000000, 0x7fc12345, 0xffffffff):
        for success in (0, 1):
            cases.append({'kind': 'script', 'raiseError': flags, 'executeSuccess': success,
                          'referenceResult': True, 'oldResultReference': True})
    for constructor in ('none', 'invalid', 'native', 'script'):
        for returned in ((0, 1, -1, -666) if constructor == 'native' else (0, 1) if constructor == 'script' else (1,)):
            cases.append({'kind': 'class', 'constructor': constructor, 'returnCode': returned,
                          'executeSuccess': int(returned != 0), 'referenceResult': True, 'returnedReferences': 0,
                          'oldResultReference': True, 'raiseError': 0x80000001})
    cases += [{'kind': 'invalid'}, {'nativeDepth': 100}, {'arguments': 1}, {'argumentType': model.NULL}]
    return [{'seed': 0x555200 + index, **fields} for index, fields in enumerate(cases)]


def verify_case(image, component, case):
    rows, arenas = [], []
    for source in (False, True):
        expected, unused = model.model(case, source)
        actual, trace, arena = oracle.execute(image, component, case, source)
        if expected != actual or trace['handlerInactiveFieldReads']:
            raise ValueError('Generic dispatch complete per-model state or inactive-field consumer mismatch')
        rows.append({'expected': expected, 'actual': actual, 'trace': trace})
        arenas.append(arena)
    semantic = lambda row: {key: value for key, value in row.items() if key != 'arenaSha256'}
    if semantic(rows[0]['actual']) != semantic(rows[1]['actual']):
        raise ValueError('Generic source/original semantic state differs')
    frames = rows[0]['actual']['frameAddresses']
    permitted = {frame - model.HEAP + offset + byte for frame in frames for offset in model.INACTIVE_OFFSETS for byte in range(4)}
    differences = {index for index, (left, right) in enumerate(zip(*arenas)) if left != right}
    if differences - permitted:
        raise ValueError('Raw generic state difference escaped indeterminate native-frame fields')
    return {'input': case, 'original': rows[0], 'source': rows[1], 'semanticStateEquivalent': True,
            'rawWholeHeapEqual': not differences, 'rawDifferenceBytes': len(differences),
            'allRawDifferencesConfinedToIndeterminateFields': True}


def execute(output, publish=False):
    output.mkdir(parents=True, exist_ok=True)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    proof = boundaries.verify(ROOT, image)
    sources = sorted(path for path in SOURCE.glob('*') if path.suffix in ('.c', '.h'))
    dependencies = sorted(path for path in (ROOT / 'source/squirrel-wave004').glob('*') if path.suffix in ('.c', '.h'))
    dependencies += [ROOT / 'source/squirrel-wave003' / name for name in ('array_controller.c', 'vm_controller.h')]
    dependencies += [ROOT / 'source/squirrel-wave002' / name for name in ('array_views.h', 'array_create.c', 'vector_resize.c')]
    dependencies += [ROOT / 'src/native/wave005' / name for name in ('vm_views.h', 'chain.c', 'object.c', 'push.c', 'stack.c')]
    dependencies += [ROOT / 'toolscripts' / name for name in ('squirrel_wave004_build.py', 'squirrel_wave004_model.py',
                      'squirrel_wave004_boundaries.py', 'squirrel_source_wave002.py', 'squirrel_wave002_boundaries.py',
                      'squirrel_wave002_oracle.py', 'squirrel_wave002_platform.py')]
    pins = [prior.pin(path) for path in sources + dependencies]
    component = builder.build(output / 'normal')
    cases = [verify_case(image, component, case) for case in corpus()]
    varying = [verify_case(image, component, {'kind': 'class', 'constructor': 'native', 'referenceResult': True,
                 'seed': 0x555288, 'stackSeed': seed}) for seed in (17, 113, 991, 31337)]
    if len({row['original']['actual']['arenaSha256'] for row in varying}) != 4 or len({row['source']['actual']['arenaSha256'] for row in varying}) != 1:
        raise ValueError('Native-frame dead-stack provenance or deterministic source initialization failed')
    terminal = verify_case(image, component, {'handler': 'array', 'allocationFails': True, 'seed': 0x555299})
    if terminal['source']['trace']['returned'] or terminal['source']['actual']['terminal'] != 'assertion':
        raise ValueError('Noreturn allocation assertion became a successful return')
    controls = {'wrong-target': {'kind': 'script'}, 'bool-raiseerror': {'kind': 'script', 'raiseError': 0x7fc12345},
                'wrong-recursive-arity': {'kind': 'class'}, 'wrong-class-receiver': {'kind': 'class'},
                'missing-discard-release': {'kind': 'class', 'referenceResult': True, 'returnedReferences': 0},
                'wrong-class-status': {'kind': 'class', 'constructor': 'invalid'}}
    negatives = []
    for index, (variant, fields) in enumerate(controls.items()):
        wrong = builder.build(output / variant, variant)
        case = {'seed': 0x555300 + index, **fields}
        expected, unused = model.model(case, True)
        actual, trace, unused = oracle.execute(image, wrong, case, True)
        if actual == expected or not trace['returned']:
            raise ValueError('Wrong generic source did not genuinely return and diverge: ' + variant)
        negatives.append({'variant': variant, 'input': case, 'actuallyReturned': True,
                          'semanticDifferenceDetected': True, 'elfSha256': wrong['elfSha256']})
    platform = platform_component.build(ROOT, SOURCE, output / 'platform')
    for pin in pins:
        if prior.pin(ROOT / pin['path']) != pin:
            raise ValueError('Source/dependency changed during generic verification')
    root = component['functions']['fn_0017ffac']
    original = image[0x17ffac - 0x100000:0x1801a4 - 0x100000]
    report = {'schemaVersion': 1, 'status': 'bounded-generic-vm-call-source-verified', 'moduleSha256': model.sha(image),
              'programId': '0004000e001acb00', 'boundaryProof': proof, 'sources': [prior.pin(path) for path in sources],
              'frozenDependencies': [prior.pin(path) for path in dependencies],
              'producer': [prior.pin(path) for path in [Path(__file__), *sorted((ROOT / 'toolscripts').glob('squirrel_wave005_*.py'))]],
              'compiler': prior.pin(ROOT / 'tools/clang-21/clang.exe'), 'linker': prior.pin(ROOT / 'tools/clang-21/ld.lld.exe'),
              'runtime': {'unicornPython': oracle.unicorn.__version__, 'unicornNative': list(oracle.unicorn.uc_version()),
                          'cpuModel': 'ARM1176-VFP-enabled', 'originalVFPDisabledControlMustFault': True},
              'originalInstructionBytes': 500, 'originalLiteralBytes': 4, 'sourceSymbolBytes': root['bytes'],
              'sourceSectionBytes': root['sectionBytes'], 'sourceSectionSha256': root['sectionSha256'],
              'exactCompleteInstructionAndPoolMatch': root['data'] == original,
              'normalCases': cases, 'originalReturns': len(cases) + len(varying), 'sourceReturns': len(cases) + len(varying),
              'completePerModelHeapComparisons': (len(cases) + len(varying)) * 2,
              'indeterminateFrameSeedControls': varying, 'separateNoreturnAssertion': terminal, 'negativeControls': negatives,
              'scriptBytecodeExecutionClaimed': False, 'classAllocationReconstructed': False,
              'classAndExecuteProvidersAreCompiledModeledServices': True, 'sourceOnlyNativeAndArrayDependenciesExecuted': True,
              'rawWholeMemoryEquivalenceClaimed': False, 'semanticStateEquivalenceOnly': True,
              'platform': platform, 'armElfSha256': component['elfSha256'], 'commands': component['commands'],
              'sourceCodeCreditGranted': 0, 'committedSourceReplay': False, 'wholeGameBuild': False}
    prior.save(output / 'report.json', report)
    if publish:
        prior.save(ROOT / 'evidence/lanes/squirrel-source-wave005/report.json', report)
        prior.save(ROOT / 'evidence/lanes/squirrel-source-wave005/execute-milestone.json', proof['nextExecuteMilestone'])
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/squirrel-source-wave005/packet')
    parser.add_argument('--publish', action='store_true')
    args = parser.parse_args()
    output = args.output.resolve()
    if not output.is_relative_to((ROOT / 'work/squirrel-source-wave005').resolve()):
        raise ValueError('Output must stay inside the wave005 work directory')
    result = execute(output, args.publish)
    print(json.dumps({key: result[key] for key in ('status', 'originalReturns', 'sourceReturns', 'sourceCodeCreditGranted')}))
