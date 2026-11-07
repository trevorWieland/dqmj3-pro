import argparse
import io
import importlib.metadata
import json
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import squirrel_source_wave002 as prior
import squirrel_wave003_oracle as oracle
import squirrel_wave003_platform as platform_component
import squirrel_wave003_boundaries as boundaries


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave003'
FLAGS = [*prior.FLAGS, '-mfpu=vfp', '-mfloat-abi=softfp']
PLACEMENTS = {'fn_001b33dc': (0x1b33dc, 340, 8), 'fn_0019d320': (0x19d320, 232, 0),
              'fn_00665a44': (0x665a44, 180, 8), 'fn_0019e8c4': (0x19e8c4, 36, 0),
              'fn_00157ff4': (0x157ff4, 16, 0), 'fn_00173d40': (0x173d40, 12, 0),
              'fn_00173d1c': (0x173d1c, 36, 0), 'fn_0019e864': (0x19e864, 96, 0),
              'sq_controller_release_fixture': (oracle.CALLBACK, 0, 0)}


def build(output, variant='normal'):
    output.mkdir(parents=True, exist_ok=True)
    sources = [SOURCE / 'array_controller.c', SOURCE / 'release_fixture.c']
    sources += [ROOT / 'source/squirrel-wave002' / name for name in ('vector_resize.c', 'array_create.c')]
    sources += [ROOT / 'src/native/wave005' / name for name in ('chain.c', 'stack.c', 'push.c', 'object.c')]
    if variant != 'normal':
        old, new = {'wrong-length': ('requested_array_size(length)', '(requested_array_size(length) + 1)'),
                    'wrong-ownership': ('array->reference.references++;', 'array->reference.references += 2;'),
                    'wrong-arity': ('fn_00157ff4(&vm->frame) <= 2', 'fn_00157ff4(&vm->frame) <= 3'),
                    'missing-temporary-release': ('--result.value.reference->references == 0', 'result.value.reference->references == 0')}[variant]
        text = sources[0].read_text()
        if text.count(old) != (2 if variant == 'wrong-length' else 1):
            raise ValueError('Wrong-source transformation no longer identifies the intended semantic edit')
        changed = output / 'array_controller.c'
        changed.write_text(text.replace(old, new))
        sources[0] = changed
    objects, commands = [], []
    for source in sources:
        obj = output / (source.stem + '.o')
        commands.append(prior.command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-std=c11', '-O2', '-I', SOURCE,
                                       '-c', source, '-o', obj], output / (source.stem + '.compile.log')))
        objects.append(obj)
    script = output / 'component.ld'
    body = [f'.text.{name} {hex(address)} : {{ KEEP(*(.text.{name})) }}'
            for name, (address, size, pool) in sorted(PLACEMENTS.items(), key=lambda item: item[1][0])]
    script.write_text('SECTIONS {\n' + '\n'.join(body) + '\n/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) '
                      '*(.text*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    elf_path = output / 'controller.elf'
    commands.append(prior.command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--fatal-warnings',
                                   '--build-id=none', '--entry=fn_001b33dc', '--defsym=sq_allocate=0x2fece8',
                                   '--defsym=sq_reallocate=0x18388c', '--defsym=sq_array_vtable=0x850d74',
                                   '--defsym=sq_assert_array=0x146590', '-T', script, *objects, '-o', elf_path], output / 'link.log'))
    elf = ELFFile(io.BytesIO(elf_path.read_bytes()))
    sections = [{'address': section['sh_addr'], 'data': section.data()} for section in elf.iter_sections()
                if section['sh_flags'] & 2 and section['sh_size'] and section['sh_type'] != 'SHT_NOBITS']
    functions = {}
    for symbol in elf.get_section_by_name('.symtab').iter_symbols():
        if symbol.name and symbol['st_shndx'] == 'SHN_UNDEF':
            raise ValueError('Unresolved live dependency: ' + symbol.name)
        if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']:
            section = elf.get_section(symbol['st_shndx'])
            functions[symbol.name] = {'address': symbol['st_value'], 'bytes': symbol['st_size'],
                                      'sectionBytes': section['sh_size'], 'data': section.data(),
                                      'sectionSha256': prior.sha(section.data())}
    if set(functions) != set(PLACEMENTS):
        raise ValueError('Source component does not contain the complete declared native helper closure')
    if any(section['sh_type'] in ('SHT_REL', 'SHT_RELA') and section['sh_size'] for section in elf.iter_sections()):
        raise ValueError('Source component retains relocation sections')
    return {'sections': sections, 'functions': functions, 'commands': commands, 'variant': variant,
            'elfSha256': prior.sha(elf_path.read_bytes()),
            'functionRanges': [(row['address'], row['address'] + row['bytes']) for row in functions.values()],
            'callbackRange': (oracle.CALLBACK, oracle.CALLBACK + functions['sq_controller_release_fixture']['bytes'])}


def corpus():
    cases = []
    for length in (0, 1, 4, 5, 16, 31):
        for fields in ({'count': 2, 'base': 0}, {'count': 2, 'base': 3, 'floating': True},
                       {'count': 3, 'base': -2}, {'count': 3, 'base': 0, 'referenceFill': True, 'oldResultReference': True, 'chainLength': 2},
                       {'count': 3, 'base': 7, 'floating': True, 'referenceFill': True, 'oldResultReference': True, 'chainLength': 1},
                       {'count': 5, 'base': 0, 'referenceFill': True}):
            value = length + 0.75 if fields.get('floating') else length
            cases.append({'length': value, 'seed': 0x225300 + len(cases), **fields})
    cases.append({'count': 2, 'base': -2, 'floating': True, 'length': -0.0, 'seed': 0x225399})
    return cases


def verify_case(image, component, case):
    expected, arena = oracle.model(case, oracle.prepare(case))
    original, original_trace = oracle.execute(image, component, case, False)
    compiled, source_trace = oracle.execute(image, component, case, True)
    return {'input': case, 'passed': expected == original == compiled, 'expected': expected,
            'original': original, 'source': compiled, 'originalTrace': original_trace, 'sourceTrace': source_trace}


def execute(output, publish):
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if prior.sha(image) != prior.MODULE_SHA:
        raise ValueError('Measured original update changed')
    boundary_proof = boundaries.verify(ROOT, image)
    sources = [prior.pin(path) for path in sorted(SOURCE.glob('*')) if path.suffix in ('.c', '.h')]
    dependencies = [prior.pin(ROOT / 'source/squirrel-wave002' / name) for name in ('array_views.h', 'vector_resize.c', 'array_create.c')]
    dependencies += [prior.pin(ROOT / 'src/native/wave005' / name) for name in ('chain.c', 'stack.c', 'push.c', 'object.c', 'vm_views.h')]
    dependencies += [prior.pin(ROOT / 'toolscripts' / name) for name in ('squirrel_source_wave002.py', 'squirrel_wave002_oracle.py',
                                                                      'squirrel_wave002_platform.py', 'squirrel_wave002_boundaries.py')]
    component = build(output / 'normal')
    root = component['functions']['fn_001b33dc']
    expected_original = image[oracle.ENTRY - 0x100000:oracle.ENTRY - 0x100000 + 348]
    cases = []
    for case in corpus():
        result = verify_case(image, component, case)
        cases.append(result)
        if not result['passed']:
            prior.save(output / 'failed-case.private.json', result)
            raise ValueError('Original/source/independent VM model mismatch')
    assertions = []
    for base in (-2, 0, 7):
        case = {'count': 2, 'base': base, 'length': 5, 'allocationFails': True, 'seed': 0x225400 + base}
        result = verify_case(image, component, case)
        if not result['passed'] or result['sourceTrace']['returned'] or result['source']['terminal'] != 'assertion':
            prior.save(output / 'failed-assertion.private.json', result)
            raise ValueError('Default-arity allocation failure no longer reaches the measured assertion contract')
        assertions.append(result)
    excluded_case = {'count': 3, 'base': 0, 'length': 5, 'allocationFails': True, 'seed': 0x225500}
    excluded = verify_case(image, component, excluded_case)
    if not excluded['passed'] or excluded['sourceTrace']['returned']:
        prior.save(output / 'failed-excluded-path.private.json', excluded)
        raise ValueError('Unsupported fill-arity allocation failure changed; do not grant successful-return credit')
    negatives = []
    negative_case = {'count': 3, 'base': 2, 'length': 5, 'referenceFill': True, 'oldResultReference': True,
                     'chainLength': 2, 'seed': 0x225600}
    wanted, arena = oracle.model(negative_case, oracle.prepare(negative_case))
    for variant in ('wrong-length', 'wrong-ownership', 'wrong-arity', 'missing-temporary-release'):
        wrong = build(output / variant, variant)
        observed, trace = oracle.execute(image, wrong, negative_case, True)
        if not trace['returned'] or observed == wanted:
            raise ValueError('Wrong source did not return and fail semantically: ' + variant)
        negatives.append({'variant': variant, 'actuallyReturned': True, 'semanticDifferenceDetected': True,
                          'elfSha256': wrong['elfSha256'], 'observation': observed})
    for pin in sources + dependencies:
        if prior.pin(ROOT / pin['path']) != pin:
            raise ValueError('Owned or frozen dependency changed during component execution')
    platforms = platform_component.build(ROOT, SOURCE, output / 'platform')
    report = {'schemaVersion': 1, 'status': 'bounded-source-array-builtin-controller-verified',
              'moduleSha256': prior.MODULE_SHA, 'programId': '0004000e001acb00', 'address': oracle.ENTRY,
              'originalInstructionBytes': 340, 'originalPoolBytes': 8, 'originalSpanSha256': prior.sha(expected_original),
              'sourceSymbolBytes': root['bytes'], 'sourceSectionBytes': root['sectionBytes'],
              'sourceSectionSha256': root['sectionSha256'], 'exactCompleteInstructionAndPoolMatch': root['data'] == expected_original,
              'sources': sources, 'frozenDependencies': dependencies, 'compiler': prior.pin(ROOT / 'tools/clang-21/clang.exe'),
              'linker': prior.pin(ROOT / 'tools/clang-21/ld.lld.exe'), 'producer': prior.pin(Path(__file__).resolve()),
              'oracle': prior.pin(Path(oracle.__file__).resolve()), 'commands': component['commands'], 'elfSha256': component['elfSha256'],
              'platformProducer': prior.pin(Path(platform_component.__file__).resolve()), 'platformComponent': platforms,
              'boundaryProducer': prior.pin(Path(boundaries.__file__).resolve()), 'boundaryProof': boundary_proof,
              'unicornPackage': importlib.metadata.version('unicorn'), 'unicornRuntime': oracle.unicorn.__version__,
              'cpu': 'ARM1176 with VFP enabled; R4-R11,D8-D15,SP preserved; allocator clobbers integer/FP caller-volatile registers and NZCV',
              'closedSourceFunctions': sorted(component['functions']), 'cases': cases, 'assertionCases': assertions,
              'excludedFillAllocationFailure': excluded, 'negativeControls': negatives,
              'originalReturns': len(cases), 'sourceReturns': len(cases), 'normalReturnModelComparisons': len(cases) * 2,
              'assertionTerminalComparisons': len(assertions) * 2, 'sourceCodeCreditGranted': 0,
              'wholeGameBuild': False, 'independentCommittedReplay': False,
              'limits': ['Finite length values within0..32, owned stack frames and successful reallocation; arbitrary argument tags excluded.',
                         'Allocator and assertion are explicit runtime contracts; release callback observes publication without mutating VM/object ownership.',
                         'Fill-arity first-allocation failure faults in the measured original and is not a normal-return success.',
                         'The generic shrink branch and final release-of-new-array branch are not reached by valid fresh-array cases.',
                         'Dependencies retain their earlier exact/nonmatching statuses and earn no duplicate credit; no full VM or game completion is claimed.']}
    prior.save(output / 'report.json', report)
    if publish:
        prior.save(ROOT / 'evidence/lanes/squirrel-source-wave003/report.json', report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', default='work/squirrel-source-wave003/build')
    parser.add_argument('--publish', action='store_true')
    args = parser.parse_args()
    output = (ROOT / args.output).resolve()
    if not output.is_relative_to((ROOT / 'work/squirrel-source-wave003').resolve()):
        raise ValueError('Output must remain in the owned wave003 directory')
    report = execute(output, args.publish)
    print(json.dumps({key: report[key] for key in ('status', 'originalReturns', 'sourceReturns', 'sourceSymbolBytes', 'sourceSectionBytes', 'exactCompleteInstructionAndPoolMatch', 'sourceCodeCreditGranted')}))


if __name__ == '__main__':
    main()
