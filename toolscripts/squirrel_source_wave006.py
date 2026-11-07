import argparse
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import squirrel_source_wave002 as prior
import squirrel_wave006_boundaries as boundaries
import squirrel_wave006_build as builder
import squirrel_wave006_cases as cases
import squirrel_wave006_model as model
import squirrel_wave006_oracle as oracle
import squirrel_wave006_platform as platform_component
import squirrel_wave006_fpscr as fpscr
import squirrel_wave006_vtable_seeds as vtable_seeds
from squirrel_wave006_programs import OPCODES, instruction


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave006'


def verify_case(image, component, case, allow_terminal=False):
    results, arenas = [], []
    for source in (False, True):
        actual, trace, arena, witness = oracle.execute(image, component, case, source)
        if not allow_terminal and not trace['returned']:
            raise ValueError('A terminal diagnostic is not a genuine Execute return')
        expected, unused = model.model(case, source, witness if not source else None)
        if actual != expected or trace['handlerInactiveFieldReads']:
            raise ValueError('Execute state, instruction trace or admitted raw-field consumer differs')
        results.append({'actual': actual, 'trace': trace, 'modelMatched': True,
                        'rawModelUsesIndeterminateInputWitness': bool(actual['excludedInactiveBytes']) and not source})
        arenas.append(arena)
    comparable = lambda row: {key: value for key, value in row.items() if key != 'arenaSha256'}
    if comparable(results[0]['actual']) != comparable(results[1]['actual']):
        raise ValueError('Execute source/original independent semantic state differs')
    if results[0]['trace']['allocationObservations'] != results[1]['trace']['allocationObservations']:
        raise ValueError('Reference lifetime at an allocator boundary differs')
    frames = results[0]['actual']['frameAddresses']
    allowed = {frame - model.HEAP + offset + byte for frame in frames for offset in (0, 4, 32, 40) for byte in range(4)}
    different = {index for index, pair in enumerate(zip(*arenas)) if pair[0] != pair[1]}
    if different - allowed:
        raise ValueError('Execute raw difference escaped declared indeterminate native-frame fields')
    return {'input': case, 'original': results[0], 'source': results[1], 'semanticStateEquivalent': True,
            'rawWholeHeapEqual': not different, 'rawDifferenceBytes': len(different),
            'rawDifferenceScope': 'native-frame-instruction-literals-target-root-only'}


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
                     'squirrel_wave005_model.py', 'squirrel_wave005_execute_inventory.py', 'squirrel_source_wave002.py',
                     'squirrel_wave002_boundaries.py', 'squirrel_wave002_oracle.py', 'squirrel_wave002_platform.py')]
    toolchain = [ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe',
                 *sorted((ROOT / 'tools/clang-21').glob('*.dll'))]
    producers = [Path(__file__), *sorted((ROOT / 'toolscripts').glob('squirrel_wave006_*.py'))]
    scope_document = SOURCE / 'README.md'
    pins = [prior.pin(path) for path in sources + dependencies + toolchain + producers + [scope_document]]
    component = builder.build(output / 'normal')
    type_names = oracle.type_name_cases(image, component)
    fpscr_audit = fpscr.audit(image, json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text()),
                            component, oracle.ORIGINAL_RANGES, oracle.EXECUTE_RANGES)
    seed = vtable_seeds.candidate(image, json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text()))
    normal = [verify_case(image, component, case) for case in cases.corpus()]
    assertions = [verify_case(image, component, {'seed': 0x66c999, 'allocationFails': True,
                  'program': [instruction('NEWARRAY', 1), instruction('RETURN', 1, 1)]}, True)]
    if any(row[kind]['trace']['returned'] or row[kind]['actual']['terminal'] != 'assertion'
           for row in assertions for kind in ('original', 'source')):
        raise ValueError('Array allocation assertion became a normal-return case')
    expected_handlers = {row['opcode']: row['originalHandler'] for row in proof['opcodeCorrespondenceCandidates']}
    observed = set()
    for row in normal:
        visited = set(row['original']['trace']['visited'])
        for event in row['original']['actual']['executedInstructions']:
            code = event['opcode']
            if code in expected_handlers:
                if expected_handlers[code] not in visited: raise ValueError('Opcode name lacks an actually executed original handler')
                observed.add(code)
    if observed != set(OPCODES.values()): raise ValueError('An implemented opcode lacks an original/source witness')
    negatives = []
    for index, (variant, fields) in enumerate(cases.negative_inputs().items()):
        wrong = builder.build(output / variant, variant)
        case = {'seed': 0x666900 + index, **fields}
        actual, trace, unused, witness = oracle.execute(image, wrong, case, True)
        expected, unused = model.model(case, True)
        unused, baseline_trace, unused, unused = oracle.execute(image, component, case, True)
        allocation_difference = trace['allocationObservations'] != baseline_trace['allocationObservations']
        if not trace['returned'] or actual == expected and not allocation_difference:
            raise ValueError('Wrong Execute C did not really return and diverge: ' + variant)
        negatives.append({'variant': variant, 'input': case, 'actuallyReturned': True,
                          'semanticDifferenceDetected': True, 'independentStateOrServiceDifferenceDetected': actual != expected,
                          'allocatorObservationDifferenceDetected': allocation_difference, 'elfSha256': wrong['elfSha256']})
    unsupported_case = {'seed': 0x666999, 'program': [instruction(54), instruction('RETURN', 255)]}
    rejected, rejected_trace, unused, unused = oracle.execute(image, component, unsupported_case, True)
    if rejected_trace['returned'] or rejected['terminal'] != 'unsupported': raise ValueError('Unsupported opcode became success')
    platform = platform_component.build(ROOT, SOURCE, output / 'platform')
    for pin in pins:
        if prior.pin(ROOT / pin['path']) != pin: raise ValueError('Execute source/dependency changed during verification')
    report = {'schemaVersion': 1, 'status': 'partial-source-script-execution-checkpoint', 'programId': '0004000e001acb00',
              'moduleSha256': model.sha(image), 'boundaryProof': proof, 'sources': [prior.pin(path) for path in sources],
              'frozenDependencies': [prior.pin(path) for path in dependencies],
              'producer': [prior.pin(path) for path in producers], 'scopeDocument': prior.pin(scope_document),
              'compiler': prior.pin(ROOT / 'tools/clang-21/clang.exe'), 'linker': prior.pin(ROOT / 'tools/clang-21/ld.lld.exe'),
              'toolchainRuntime': [prior.pin(path) for path in toolchain if path.suffix == '.dll'],
              'runtime': {'unicornPython': oracle.unicorn.__version__, 'unicornNative': list(oracle.unicorn.uc_version()),
                          'cpuModel': 'ARM1176-VFP-enabled', 'initialFPSCR': 0, 'preservedFPSCRControlMask': 0x07f79f00},
              'normalCases': normal, 'originalReturns': len(normal), 'sourceReturns': len(normal),
              'separateTerminalAssertions': assertions, 'assertionsIncludedInReturnCounts': False,
              'typeNameHelperCases': type_names, 'helperReturnsNotIncludedInExecuteReturnCount': True,
              'fpscrConsumerAudit': fpscr_audit, 'universalMachineStateEqualityClaimed': False,
              'vtableSeedCandidates': [seed],
              'sourceIndependentFullHeapModelComparisons': len(normal), 'originalIndependentSemanticHeapModelComparisons': len(normal),
              'originalRawNativeFrameWordsUsePreCalleeWitness': True, 'rawWholeMemoryEquivalenceClaimed': False,
              'negativeControls': negatives, 'unsupportedSourceDiagnostic': {'input': unsupported_case, 'actual': rejected,
                  'trace': rejected_trace, 'originalEquivalenceClaimed': False, 'returnCreditGranted': False},
              'observedNamedOpcodes': sorted(observed), 'implementedDispatchEntries': len(observed), 'measuredDispatchEntries': 61,
              'pendingOpcodeEntries': sorted(set(range(61)) - observed), 'nativeCallOpcodeOtherCallableKindsPending': True,
              'generatorAndPositiveTrapPathsPending': True, 'wholeRootComplete': False,
              'additionalPendingSubpaths': ['arithmetic string/metamethod/float remainder', 'negation metamethod',
                  'CALL class/metamethod/generator', 'general object/string comparison',
                  'trap search across native frames and generator cleanup', 'entry modes 1 and 3',
                  'closure missing named-outer errors, allocation failure, prototype finalization and GC/weak-environment lifetimes',
                  'indexed lookup failures, default delegates, classes/instances and general object lookup',
                  'table marked/weak finalization, null keys, delegated new-slot/metamethod cases, allocation failure and complete string/pointer key lifetimes',
                  'array final-owner destruction; string/class/generator iteration and iterator assertions'],
              'floatingPointExceptionStatusEquivalenceClaimed': False,
              'floatingPointExceptionStatusDifferences': [index for index, row in enumerate(normal)
                  if row['original']['trace']['finalFPSCRExceptionStatus'] != row['source']['trace']['finalFPSCRExceptionStatus']],
              'functions': [{'symbol': name, 'sourceSymbolBytes': component['functions'][name]['bytes'],
                             'sourceSectionSha256': component['functions'][name]['sectionSha256']} for name in
                            ('fn_0018d65c', 'fn_00199cb8', 'fn_001994c0', 'fn_001a0cc0')],
              'platform': platform, 'armElfSha256': component['elfSha256'], 'commands': component['commands'],
              'wholeRootSourceCreditGranted': 0, 'sourceCodeCreditGranted': 0, 'wholeGameBuild': False, 'committedSourceReplay': False}
    prior.save(output / 'report.json', report)
    if publish:
        prior.save(ROOT / 'evidence/lanes/squirrel-source-wave006/report.json', report)
        prior.save(ROOT / 'evidence/lanes/squirrel-source-wave006/vtable-seed-candidates.json', {'candidates': [seed]})
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/squirrel-source-wave006/checkpoint-core')
    parser.add_argument('--publish', action='store_true')
    args = parser.parse_args()
    output = args.output.resolve()
    if not output.is_relative_to((ROOT / 'work/squirrel-source-wave006').resolve()): raise ValueError('Output escaped wave006')
    report = execute(output, args.publish)
    print(json.dumps({key: report[key] for key in ('status', 'originalReturns', 'sourceReturns', 'implementedDispatchEntries', 'wholeRootComplete')}))
