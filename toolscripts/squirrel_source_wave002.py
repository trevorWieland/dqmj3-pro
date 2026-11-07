import argparse
import hashlib
import importlib.metadata
import io
import json
import subprocess
import sys
from pathlib import Path

import unicorn
from elftools.elf.elffile import ELFFile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import squirrel_wave002_oracle as oracle
import squirrel_wave002_platform as platform_component
import squirrel_wave002_boundaries as boundaries


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave002'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
ORIGINAL = {'fn_0019d320': (0x19d320, 232, 0), 'fn_00665a44': (0x665a44, 180, 8)}
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-ffreestanding', '-fno-builtin',
         '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
         '-fomit-frame-pointer', '-fno-optimize-sibling-calls', '-fno-stack-protector', '-Wall', '-Wextra', '-Werror']


def sha(data):
    return hashlib.sha256(data).hexdigest()


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': sha(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def command(argv, log):
    result = subprocess.run([str(value) for value in argv], capture_output=True, timeout=120)
    log.write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('Component compilation/link failed: ' + str(log))
    return {'argv': [str(value).replace(str(ROOT), '${ROOT}') for value in argv],
            'returncode': result.returncode, 'logSha256': sha(log.read_bytes())}


def build(output, variant='normal', optimization='-O2'):
    output.mkdir(parents=True, exist_ok=True)
    sources = [SOURCE / 'vector_resize.c', SOURCE / 'array_create.c', SOURCE / 'release_fixture.c',
               ROOT / 'src/native/wave005/chain.c']
    if variant != 'normal':
        index, old, new = {'wrong-reference-increment': (0, 'references++;', 'references += 2;'),
                          'wrong-release-threshold': (0, '--slot->value.reference->references == 0', '--slot->value.reference->references == 1'),
                          'wrong-capacity-publication': (0, 'vector->capacity = capacity;', 'vector->capacity = capacity + 1;'),
                          'wrong-initial-ownership': (1, 'array->reference.references = 0;', 'array->reference.references = 1;')}[variant]
        text = sources[index].read_text()
        if text.count(old) != 1:
            raise ValueError('Wrong-source control did not identify one semantic edit')
        altered = output / sources[index].name
        altered.write_text(text.replace(old, new), encoding='utf-8')
        sources[index] = altered
    objects, commands = [], []
    for source in sources:
        obj = output / (source.stem + '.o')
        commands.append(command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, optimization, '-std=c11', '-I', SOURCE,
                                  '-c', source, '-o', obj], output / (source.stem + '.compile.log')))
        objects.append(obj)
    script = output / 'component.ld'
    script.write_text('SECTIONS {\n'
                      '.text.fn_0019d320 0x19d320 : { KEEP(*(.text.fn_0019d320)) }\n'
                      '.text.fn_0019e8c4 0x19e8c4 : { KEEP(*(.text.fn_0019e8c4)) }\n'
                      '.text.fn_00665a44 0x665a44 : { KEEP(*(.text.fn_00665a44)) }\n'
                      '.text.sq_release_fixture 0xa10000 : { KEEP(*(.text.sq_release_fixture)) }\n'
                      '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.text*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    target = output / 'component.elf'
    commands.append(command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--fatal-warnings',
                              '--build-id=none', '--entry=fn_0019d320', '--defsym=sq_allocate=0x2fece8',
                              '--defsym=sq_reallocate=0x18388c', '--defsym=sq_array_vtable=0x850d74',
                              '-T', script, *objects, '-o', target], output / 'link.log'))
    elf = ELFFile(io.BytesIO(target.read_bytes()))
    sections = [{'address': section['sh_addr'], 'data': section.data()} for section in elf.iter_sections()
                if section['sh_flags'] & 2 and section['sh_size'] and section['sh_type'] != 'SHT_NOBITS']
    table = elf.get_section_by_name('.symtab')
    functions = {}
    for symbol in table.iter_symbols():
        if symbol['st_shndx'] == 'SHN_UNDEF' and symbol.name:
            raise ValueError('Unresolved live source dependency: ' + symbol.name)
        if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']:
            section = elf.get_section(symbol['st_shndx'])
            offset = symbol['st_value'] - section['sh_addr']
            functions[symbol.name] = {'address': symbol['st_value'], 'bytes': symbol['st_size'],
                                      'sectionBytes': section['sh_size'], 'data': section.data()[offset:],
                                      'sectionSha256': sha(section.data())}
    if any(section['sh_type'] in ('SHT_REL', 'SHT_RELA') and section['sh_size'] for section in elf.iter_sections()):
        raise ValueError('Linked source component retains relocations')
    expected = {'fn_0019d320', 'fn_00665a44', 'fn_0019e8c4', 'sq_release_fixture'}
    if set(functions) != expected:
        raise ValueError('Unexpected compiled source function closure')
    return {'sections': sections, 'functions': functions,
            'functionRanges': [(row['address'], row['address'] + row['bytes']) for row in functions.values()],
            'callbackRange': (oracle.CALLBACK, oracle.CALLBACK + functions['sq_release_fixture']['bytes']),
            'elfSha256': sha(target.read_bytes()), 'commands': commands, 'variant': variant, 'optimization': optimization}


def corpus():
    cases = []
    for size, capacity in ((0, 0), (0, 4), (1, 4), (4, 4), (5, 8), (8, 8), (16, 32)):
        for requested in sorted({0, size, max(0, size - 1), capacity, capacity + 1}):
            for reference_fill, old_references, external in ((False, False, 0), (True, True, 0), (True, True, 1)):
                cases.append({'root': 'resize', 'size': size, 'capacity': capacity, 'requested': requested,
                              'referenceFill': reference_fill, 'oldReferences': old_references,
                              'externalReferences': external, 'seed': 0x225000 + len(cases)})
    for requested in (0, 1, 4, 5, 17):
        for chain_length in (0, 1, 2):
            cases.append({'root': 'create', 'requested': requested, 'chainLength': chain_length, 'seed': 0x225000 + len(cases)})
    cases.append({'root': 'create', 'requested': 8, 'allocationFails': True, 'chainLength': 2, 'seed': 0x225000 + len(cases)})
    return cases


def verify_case(image, component, case):
    expected, unused = oracle.model(case, oracle.prepare(case))
    original, original_trace = oracle.execute(image, component, case, False)
    compiled, compiled_trace = oracle.execute(image, component, case, True)
    if original != expected or compiled != expected:
        return {'input': case, 'passed': False, 'expected': expected, 'original': original, 'source': compiled,
                'originalTrace': original_trace, 'sourceTrace': compiled_trace}
    return {'input': case, 'passed': True, 'observation': expected,
            'originalTrace': original_trace, 'sourceTrace': compiled_trace}


def execute(output, publish):
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('Native original differs from the frozen update module')
    boundary_proof = boundaries.verify(ROOT, image)
    inputs = [pin(path) for path in sorted(SOURCE.glob('*')) if path.suffix in ('.c', '.h')]
    dependencies = [pin(ROOT / 'src/native/wave005' / name) for name in ('chain.c', 'vm_views.h')]
    attempts = []
    normal = None
    for optimization in ('-O2', '-O1', '-Os'):
        component = build(output / optimization[1:], optimization=optimization)
        compared = []
        for name, (address, instruction_bytes, pool_bytes) in ORIGINAL.items():
            row = component['functions'][name]
            expected = image[address - 0x100000:address - 0x100000 + instruction_bytes + pool_bytes]
            compared.append({'symbol': name, 'address': address, 'originalInstructionBytes': instruction_bytes,
                             'originalPoolBytes': pool_bytes, 'sourceSymbolBytes': row['bytes'],
                             'sourceSectionBytes': row['sectionBytes'], 'originalSpanSha256': sha(expected),
                             'sourceSectionSha256': row['sectionSha256'],
                             'exactCompleteInstructionAndPoolMatch': row['data'] == expected})
        attempts.append({'optimization': optimization, 'elfSha256': component['elfSha256'], 'functions': compared,
                         'commands': component['commands']})
        if optimization == '-O2':
            normal = component
    cases = []
    for case in corpus():
        result = verify_case(image, normal, case)
        cases.append(result)
        if not result['passed']:
            save(output / 'failed-case.private.json', result)
            raise ValueError('Original/source/model mismatch; private failure preserved')
    controls = []
    negative_inputs = {'wrong-reference-increment': {'root': 'resize', 'size': 1, 'capacity': 4, 'requested': 4, 'referenceFill': True, 'seed': 525},
                       'wrong-release-threshold': {'root': 'resize', 'size': 4, 'capacity': 4, 'requested': 0, 'oldReferences': True, 'seed': 526},
                       'wrong-capacity-publication': {'root': 'resize', 'size': 1, 'capacity': 4, 'requested': 5, 'seed': 527},
                       'wrong-initial-ownership': {'root': 'create', 'requested': 5, 'chainLength': 1, 'seed': 528}}
    for variant, case in negative_inputs.items():
        wrong = build(output / variant, variant)
        expected, unused = oracle.model(case, oracle.prepare(case))
        observation, trace = oracle.execute(image, wrong, case, True)
        if observation == expected or not trace['returned']:
            raise ValueError('Wrong source failed to return and differ semantically: ' + variant)
        controls.append({'variant': variant, 'input': case, 'actuallyReturned': True, 'semanticDifferenceDetected': True,
                         'elfSha256': wrong['elfSha256']})
    for reference in inputs + dependencies:
        if pin(ROOT / reference['path']) != reference:
            raise ValueError('Source dependency changed during lane execution')
    platforms = platform_component.build(ROOT, SOURCE, output / 'platform')
    report = {'schemaVersion': 1, 'status': 'bounded-source-array-lifecycle-component-verified',
              'moduleSha256': MODULE_SHA, 'programId': '0004000e001acb00', 'sourceInputs': inputs, 'dependencies': dependencies,
              'compiler': pin(ROOT / 'tools/clang-21/clang.exe'), 'linker': pin(ROOT / 'tools/clang-21/ld.lld.exe'),
              'producer': pin(Path(__file__).resolve()), 'oracle': pin(Path(oracle.__file__).resolve()),
              'platformProducer': pin(Path(platform_component.__file__).resolve()), 'platformComponent': platforms,
              'boundaryProducer': pin(Path(boundaries.__file__).resolve()), 'boundaryProof': boundary_proof,
              'unicornPackage': importlib.metadata.version('unicorn'), 'unicornRuntime': unicorn.__version__,
              'profiles': attempts, 'cases': cases, 'negativeControls': controls,
              'originalReturns': len(cases), 'sourceReturns': len(cases), 'modelComparisons': len(cases) * 2,
              'sourceCodeCreditGranted': 0, 'independentCommittedReplay': False,
              'allocatorScope': 'bounded deterministic realloc/allocate service contract, not reconstructed game allocator',
              'callbackScope': 'genuinely compiled caller-supplied release observer, not original destructor',
              'sourceClosure': 'new vector resize and array factory plus frozen typed chain helper; no original helper instructions execute in source runs',
              'limits': ['Valid bounded vector sizes/capacities and successful reallocation only; fill is external to vector storage.',
                         'Release callback writes only its observation record; arbitrary destructors and callback mutation are unproved.',
                         'Historical type and Squirrel fork identities, full VM execution and platform game builds are unproved.',
                         'No new exact-source acceptance or source-only game credit is granted by this packet.']}
    save(output / 'report.json', report)
    if publish:
        save(ROOT / 'evidence/lanes/squirrel-source-wave002/report.json', report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', default='work/squirrel-source-wave002/build')
    parser.add_argument('--publish', action='store_true')
    args = parser.parse_args()
    output = (ROOT / args.output).resolve()
    if not output.is_relative_to((ROOT / 'work/squirrel-source-wave002').resolve()):
        raise ValueError('Lane output must remain in its owned private work directory')
    report = execute(output, args.publish)
    print(json.dumps({key: report[key] for key in ('status', 'originalReturns', 'sourceReturns', 'modelComparisons', 'sourceCodeCreditGranted')}))


if __name__ == '__main__':
    main()
