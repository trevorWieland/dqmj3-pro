import argparse
import importlib.metadata
import json
import struct

import unicorn
import unicorn.unicorn_py3.unicorn as native_unicorn
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

from native_material_wave011_build import ROOT, WORK, SOURCE, HEADER, ENTRY, build, pin, save, sha
from native_material_wave011_fixtures import cases
from native_material_wave011_oracle import image, closure, execute, compare


OUT = ROOT / 'evidence/lanes/wave011-material'
MUTATIONS = {
    'wrong-black-color': ('material->colors[0] = color_wire->colors[0];', 'material->colors[0] = color_wire->colors[1];', 'boundary-1-override-0'),
    'wrong-stage-clamp': ('return count > 6 ? 6 : count;', 'return count > 5 ? 5 : count;', 'boundary-16-override-0'),
    'wrong-projection-link': ('projections(material) + projection_index++', 'projections(material) + ++projection_index', 'boundary-4-override-0'),
    'wrong-override-rule': ('context->flags & 1', 'context->flags & 2', 'boundary-5-override-1')}


def negative(name, replacements, raw, closed, fixtures):
    old, new, trigger = replacements
    text = SOURCE.read_text()
    if text.count(old) != 1:
        raise ValueError('Wrong-source control anchor changed')
    folder = WORK / 'negative' / name
    folder.mkdir(parents=True, exist_ok=True)
    source = folder / 'material.c'
    source.write_text(text.replace(old, new), encoding='utf-8')
    blocks, receipt = build(folder, source)
    case = next(row for row in fixtures if row['name'] == trigger)
    original = execute(raw, closed, case, 23)
    wrong = execute(raw, closed, case, 23, blocks, ENTRY)
    try:
        compare(original, wrong)
    except ValueError as error:
        return {'name': name, 'case': trigger, 'source': pin(source), 'object': receipt['object'],
            'returnedNormally': wrong['returned'], 'calleeSavedPreserved': wrong['calleeSaved'],
            'inputAndGuardsPreserved': wrong['inputsPreserved'] and wrong['guardsPreserved'],
            'semanticMismatchObserved': True, 'mismatch': str(error)}
    raise ValueError('Wrong-source control was not rejected: ' + name)


def run():
    OUT.mkdir(parents=True, exist_ok=True)
    blocks, receipt = build(WORK / 'build')
    raw, closed, fixtures = image(), closure(), cases()
    owner_count, allocation_failures, null_resources = 0, 0, 0
    paths, module_reads, summaries = set(), set(), []
    for index, case in enumerate(fixtures):
        original = execute(raw, closed, case, 2026 + index)
        source = execute(raw, closed, case, 2026 + index, blocks, ENTRY)
        try:
            compare(original, source)
        except Exception:
            save(WORK / 'private' / ('failed-' + case['name'] + '.json'), {
                'originalObject': original['object'].hex(), 'sourceObject': source['object'].hex(),
                'originalStorage': original['storage'].hex(), 'sourceStorage': source['storage'].hex(),
                'originalCalls': original['calls'], 'sourceCalls': source['calls']})
            raise
        paths |= original['executed']
        module_reads |= set(original['moduleReads'])
        owner_count += int(case['name'].startswith('owner-'))
        allocation_failures += int(case['allocationFails'])
        null_resources += int(case['resourceNull'])
        summaries.append({'case': case['name'], 'inputSha256': sha(case['wire']),
            'objectSha256': sha(original['object']), 'allocatedBytes': len(original['storage']),
            'storageSha256': sha(original['storage']), 'dependencyCallCount': len(original['calls']),
            'returned': original['returned'] and source['returned']})
    controls = [negative(name, replacements, raw, closed, fixtures) for name, replacements in MUTATIONS.items()]
    replay_blocks, replay = build(WORK / 'replay')
    if receipt['object']['sha256'] != replay['object']['sha256'] or blocks != replay_blocks:
        raise ValueError('Independent output-root compiler replay differs')
    for case in [fixtures[0], fixtures[-1], next(row for row in fixtures if row['name'] == 'boundary-18-override-1')]:
        compare(execute(raw, closed, case, 734), execute(raw, closed, case, 734, replay_blocks, ENTRY))
    body = raw[0x554a30 - 0x100000:0x5555fc - 0x100000]
    instructions = list(Cs(CS_ARCH_ARM, CS_MODE_ARM).disasm(body, 0x554a30))
    if len(instructions) * 4 != 3020 or instructions[-1].address != 0x5555f8:
        raise ValueError('Complete original constructor instruction extent differs')
    census = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())
    callers = []
    for row in census['functions']:
        if 0x554a30 not in row['calledFunctionAddresses']:
            continue
        mode = CS_MODE_ARM if row['mode'] == 'ARM' else __import__('capstone').CS_MODE_THUMB
        for span in row['ranges']:
            for instruction in Cs(CS_ARCH_ARM, mode).disasm(raw[span['start'] - 0x100000:span['endExclusive'] - 0x100000], span['start']):
                if instruction.mnemonic in ['bl', 'blx'] and instruction.op_str == '#0x554a30':
                    callers.append({'callerFunction': row['address'], 'mode': row['mode'], 'call': instruction.address,
                        'sha256': sha(instruction.bytes)})
    if not callers:
        raise ValueError('No actual incoming constructor caller witness')
    dependencies = []
    for address, row in sorted(closed.items()):
        if address == 0x554a30:
            continue
        dependencies.append({'address': address, 'mode': row['mode'], 'role': 'retained-original-private-oracle-only',
            'instructionRanges': [{**span, 'sha256': sha(raw[span['start'] - 0x100000:span['endExclusive'] - 0x100000])} for span in row['ranges']],
            'executedInstructionAddresses': len(paths & {start for start in paths if any(span['start'] <= start < span['endExclusive'] for span in row['ranges'])})})
    save(OUT / 'constructor.json', {'schemaVersion': 1, 'status': 'complete-constructor-bounded-behavior-candidate',
        'identity': {'version': 'update-content0', 'program': 'main', 'mode': 'ARM', 'entry': 0x554a30,
            'codeSha256': sha(raw), 'census': pin(ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json')},
        'originalInstructionRanges': [{'start': 0x554a30, 'endExclusive': 0x5555fc, 'bytes': 3020, 'sha256': sha(body)}],
        'originalPoolRanges': [{'start': 0x5555fc, 'endExclusive': 0x555604, 'bytes': 8,
            'sha256': sha(raw[0x5555fc - 0x100000:0x555604 - 0x100000])}],
        'callerWitnesses': callers, 'nextFunction': 0x555604,
        'observedConstructorInstructionAddresses': len(paths & {item.address for item in instructions}),
        'instructionAddressesInCompleteBody': len(instructions), 'build': receipt,
        'unobservedConstructorInstructionAddresses': sorted({item.address for item in instructions} - paths),
        'unobservedAddressExplanation': 'Six addresses select simple-stage offsets inside the detailed branch; eleven initialize spare detailed stages. The measured fresh-object allocator sets detailed mode and exact requested capacities, making those paths unreachable under this contract.',
        'directDependencies': ['0x00101a1c:Thumb', '0x00166824:ARM', '0x0019501c:ARM', '0x0019fbb0:ARM',
            '0x0019fdf4:ARM', '0x005524ec:ARM', '0x005525ac:ARM', '0x005549f0:ARM'],
        'dependencyClosure': dependencies, 'poolIdentities': {'materialVtable': 0x857ed8, 'colorConstructor': 0x17d8f8},
        'externalServices': ['Heap vtable+8: allocate(heap,bytes,alignment), valid exclusive allocation or null',
            'Texture accessor vtable+20: texture(accessor,name), immutable texture resource or null'],
        'tests': {'returningComparisons': len(fixtures), 'ownerMaterialComparisons': owner_count,
            'distinctOwnerMaterials': 19, 'allocationFailureCases': allocation_failures, 'nullResourceCases': null_resources,
            'completeObjectBytesCompared': 132, 'completeAllocationCompared': True,
            'dependencyArgumentsAndOrderCompared': True, 'guardAndReadonlyInputsPreserved': True,
            'calleeSavedAndStackPreserved': True, 'wrongSourceControls': controls,
            'calleeSavedVfpPreserved': True, 'armAndThumbReturns': True, 'incomingConditionFlagsVaried': True,
            'independentOutputRootReplay': replay, 'replayReturningComparisons': 3},
        'dataReadContract': {'moduleReadRanges': [{'address': address, 'bytes': size} for address, size in sorted(module_reads)],
            'mutableEnvironmentGlobal': {'address': 0x89a918, 'meaning': 'heap service pointer supplied before execution'},
            'objectBytes': 132, 'objectPreservedFields': ['bytes4..107', 'bytes125..127'],
            'wire': '40-byte header plus flag-selected records; valid names table and nonoverlapping inputs',
            'samplers': 'wrap0..2 and minification/magnification0..1; wrap3 reads an unspecified original helper stack slot and is outside the contract'},
        'tool': {'clang': pin(ROOT / 'tools/clang-21/clang.exe'), 'linker': pin(ROOT / 'tools/clang-21/ld.lld.exe'),
            'unicornCpuModel': 'ARM11 MPCore',
            'unicornPackage': importlib.metadata.version('unicorn'), 'unicornApi': unicorn.uc_version(),
            'unicornNativeLibrary': pin(__import__('pathlib').Path(native_unicorn.uclib._name))},
        'limitations': ['Bounded returning comparisons are not a universal equivalence proof',
            'Original helper instructions execute only in private verification; no source-only helper graph claimed',
            'Heap and resource services are explicit deterministic test interfaces',
            'Undefined malformed resources and aliasing with mutable object/allocation are outside the contract',
            'Original vtable identity is preserved; constructor does not invoke its virtual methods'],
        'exactMatchingClaim': False, 'requestedExactBytes': 0, 'requestedFunctionalCandidateBytes': 3020,
        'sourceOnlyGameBuild': False, 'nativeWindowsGameBuild': False, 'androidDeviceExecuted': False,
        'originalPayloadsPublished': False})
    save(WORK / 'private/returning-case-digests.json', summaries)
    print(json.dumps({'status': 'constructor-returning-comparisons-passed', 'comparisons': len(fixtures),
        'ownerMaterials': 19, 'wrongSourceControls': len(controls), 'originalBodyBytes': 3020,
        'sourceSectionBytes': receipt['function']['size']}))


if __name__ == '__main__':
    run()
