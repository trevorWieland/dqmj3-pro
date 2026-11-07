import argparse
import ctypes
import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_OP_IMM
import hashlib
import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile

import native_wave012_ctor_build as build_tools
import native_wave012_ctor_model as model
import native_wave012_ctor_runtime as runtime
from native_wave012_common import ROOT, WORK, OUT, FLAGS, MODULE_SHA, command, record, save, sha


OUTPUT = OUT / 'constructors'
NEW = [0x7555b4, 0x7555cc, 0x755798, 0x7557bc, 0x4bff74, 0x4bfedc]
PRODUCERS = ['native_wave012_common.py', 'native_wave012_constructors.py', 'native_wave012_ctor_build.py',
             'native_wave012_ctor_model.py', 'native_wave012_ctor_runtime.py',
             'native_wave012_arena_model.py', 'native_wave012_arena_oracle.py']


def mutations():
    return [('character', 'label_ops.c', 'set->value.character = character;', 'set->value.character = character + 1;',
             {'operation': 'single', 'character': 65535}),
            ('default-kind', 'label_ops.c', 'set->kind = INTERVAL_SET_EPSILON;', 'set->kind = INTERVAL_SET_CONTROL;',
             {'operation': 'default_a', 'nodes': 3}),
            ('destroy-previous', 'label_ops.c', 'head->previous = head;', 'head->previous = head->next;',
             {'operation': 'destroy', 'nodes': 3, 'owner': True}),
            ('state-result', 'state_storage.c', 'data->result = 0;', 'data->result = 1;',
             {'operation': 'state_default'}),
            ('clear-byte', 'state_storage.c', 'data->members[index] = 0;', 'data->members[index] = 1;',
             {'operation': 'state_init', 'members': 17, 'clear': 1, 'pattern': 'empty', 'next': 0})]


def run(build, output):
    build.mkdir(parents=True, exist_ok=True)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    input_paths = [ROOT / ('toolscripts/' + name) for name in PRODUCERS]
    input_paths += [*build_tools.SOURCES, ROOT / 'src/native/wave012/fixed_arena.h', ROOT / 'src/native/wave012/label_ops.h',
                    ROOT / 'src/native/wave009/interval_set.h', ROOT / 'src/native/wave010/match_state.h',
                    ROOT / 'evidence/lanes/wave012-native/arena/packet.json']
    pins = [record(path) for path in input_paths]
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('Canonical original module differs')
    receipts = []
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    known = {row['address']: row for row in census['functions']}
    if census['codeSha256'] != MODULE_SHA:
        raise ValueError('Original census module differs')
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    qualified = {}
    for address in NEW:
        size = build_tools.SIZES[address]
        if known[address]['ranges'] != [{'start': address, 'bytes': size, 'endExclusive': address + size}]:
            raise ValueError('Original constructor boundary differs')
        raw = image[address - 0x100000:address - 0x100000 + size]
        instructions = list(decoder.disasm(raw, address))
        calls = []
        for instruction in instructions:
            if '[pc' in instruction.op_str:
                raise ValueError('Constructor pool requires separate qualification')
            if instruction.id in [ARM_INS_BL, ARM_INS_BLX]:
                if instruction.operands[0].type != ARM_OP_IMM or instruction.operands[0].imm not in build_tools.SIZES:
                    raise ValueError('Unknown original constructor dependency')
                calls.append({'callsite': instruction.address, 'target': instruction.operands[0].imm,
                              'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + 4])})
            elif instruction.id == ARM_INS_B and not address <= instruction.operands[0].imm < address + size:
                raise ValueError('Unexpected outgoing constructor branch')
        if len(instructions) * 4 != size:
            raise ValueError('Incomplete original instruction decoding')
        witnesses = []
        for caller in census['functions']:
            if caller['mode'] != 'ARM' or address not in caller['calledFunctionAddresses']:
                continue
            for extent in caller['ranges']:
                for instruction in decoder.disasm(image[extent['start'] - 0x100000:extent['endExclusive'] - 0x100000], extent['start']):
                    if instruction.id in [ARM_INS_BL, ARM_INS_BLX] and instruction.operands[0].type == ARM_OP_IMM and instruction.operands[0].imm == address:
                        witnesses.append({'callerFunction': caller['address'], 'callsite': instruction.address,
                                          'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + 4])})
        if not witnesses:
            raise ValueError('Constructor lacks actual incoming caller witness')
        qualified[address] = {'originalCalls': calls, 'callerWitnesses': witnesses}
    graph = build_tools.arm(build / 'source', receipts)
    original = [(address, image[address - 0x100000:address - 0x100000 + size]) for address, size in build_tools.SIZES.items()]
    library_path = build_tools.windows(build / 'windows', receipts)
    library = ctypes.CDLL(str(library_path))
    paths, digest = set(), hashlib.sha256()
    cases = model.fixtures()
    for index, specification in enumerate(cases):
        entry = model.OPERATIONS[specification['operation']]
        arguments = (specification, index, bool(index & 1), index % 16)
        reference = runtime.execute_arm(original, entry, *arguments)
        source = runtime.execute_arm(graph['blocks'], build_tools.PLACEMENTS[entry], *arguments)
        if reference['memorySha256'] != source['memorySha256'] or reference['result'] != source['result']:
            raise ValueError('Complete original/source constructor state differs')
        runtime.execute_windows(library, specification, index)
        paths.update(reference['codePath'])
        digest.update(json.dumps({'specification': specification, 'result': reference['result'],
                                  'memorySha256': reference['memorySha256']}, sort_keys=True).encode())
    owned = set().union(*(set(range(address, address + build_tools.SIZES[address], 4)) for address in NEW))
    if not owned <= paths:
        raise ValueError('Not every new original instruction was reached')
    cross = 0
    for specification in [cases[0], {'operation': 'destroy', 'nodes': 3, 'owner': True},
                           {'operation': 'state_init', 'members': 17, 'clear': 1, 'pattern': 'empty', 'next': 0},
                           {'operation': 'state_init', 'members': 17, 'clear': 0, 'pattern': 'full', 'next': 0}]:
        entry = model.OPERATIONS[specification['operation']]
        for flags in range(16):
            for thumb in [False, True]:
                runtime.execute_arm(original, entry, specification, flags, thumb, flags)
                runtime.execute_arm(graph['blocks'], build_tools.PLACEMENTS[entry], specification, flags, thumb, flags)
                cross += 1
    negatives = []
    for name, file_name, before, after, specification in mutations():
        directory = build / 'negative' / name
        directory.mkdir(parents=True, exist_ok=True)
        source = directory / file_name
        text = (ROOT / 'src/native/wave012' / file_name).read_text()
        if before not in text:
            raise ValueError('Mutation no longer targets actual source')
        source.write_text(text.replace(before, after))
        wrong = build_tools.arm(directory / 'arm', receipts, {file_name: source})
        entry = model.OPERATIONS[specification['operation']]
        try:
            runtime.execute_arm(wrong['blocks'], build_tools.PLACEMENTS[entry], specification, 1, True, 15)
        except runtime.SemanticMismatch as failure:
            negatives.append({'name': name, 'wrongSource': record(source), **failure.details})
        else:
            raise ValueError('Compiled wrong constructor failed to return a semantic mismatch')
        wrong_library = ctypes.CDLL(str(build_tools.windows(directory / 'windows', receipts, {file_name: source})))
        try:
            runtime.execute_windows(wrong_library, specification, 1)
        except runtime.SemanticMismatch as failure:
            negatives.append({'name': name, 'wrongSource': record(source), **failure.details})
        else:
            raise ValueError('Native wrong constructor unexpectedly passed')
    android_objects = []
    for source in build_tools.SOURCES:
        obj = build / (source.stem + '.android.o')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android29', '-O2', '-std=c11',
                 '-ffreestanding', '-fno-builtin', '-fPIC', '-Wall', '-Wextra', '-Werror', '-c', source, '-o', obj],
                build / (source.stem + '-android.log'), receipts)
        android_objects.append(obj)
    shared = build / 'libconstructors.so'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
             '-soname', 'libconstructors.so', '-o', shared, *android_objects], build / 'android-link.log', receipts)
    elf = ELFFile(io.BytesIO(shared.read_bytes()))
    loads = [segment['p_align'] for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    if elf['e_machine'] != 'EM_AARCH64' or not loads or any(value < 16384 for value in loads):
        raise ValueError('Android constructor component load contract differs')
    rows = []
    for address in NEW:
        candidate = graph['functions'][address]
        raw = image[address - 0x100000:address - 0x100000 + build_tools.SIZES[address]]
        rows.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                          'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                          'address': address, 'mode': 'ARM'},
                     'symbol': candidate['symbol'], 'source': record(ROOT / 'src/native/wave012' / ('state_storage.c' if address in [0x4bff74, 0x4bfedc] else 'label_ops.c')),
                     **qualified[address], 'originalInstructionBytes': len(raw), 'originalSpanSha256': sha(raw),
                     'candidateInstructionBytes': candidate['bytes'], 'candidateObjectSpanSha256': candidate['objectSpanSha256'],
                     'candidateLinkedSpanSha256': candidate['linkedSpanSha256'], 'poolBytes': 0,
                     'bodyRelocations': candidate['relocations'], 'exactLinkedSpan': candidate['raw'] == raw,
                     'sourceCreditRequested': 0, 'functionalConfidence': 'medium'})
    packet = {'schemaVersion': 1, 'lane': 'wave012-native-constructors', 'status': 'bounded-validated-functional-nonmatching-C',
              'moduleSha256': MODULE_SHA, 'census': record(census_path), 'functions': rows, 'sources': [record(path) for path in build_tools.SOURCES],
              'headers': pins[len(PRODUCERS) + len(build_tools.SOURCES):-1], 'producers': pins[:len(PRODUCERS)],
              'compiler': record(ROOT / 'tools/clang-21/clang.exe'), 'linker': record(ROOT / 'tools/clang-21/ld.lld.exe'),
              'compilerFlags': FLAGS, 'objects': graph['objects'], 'linkedElf': graph['linkedElf'],
              'linkerScript': graph['linkerScript'], 'commands': receipts,
              'dependencies': {'arenaValidation': record(ROOT / 'evidence/lanes/wave012-native/arena/packet.json'),
                               'role': 'source', 'newFunctionalCredit': 0, 'retainedOriginalHelpers': []},
              'behavior': {'cases': len(cases), 'caseResultDigest': digest.hexdigest(), 'flagReturnCrossProductCases': cross,
                           'newOriginalInstructionsReached': len(owned), 'allNewOriginalInstructionsReached': True,
                           'fullDefinedMemoryCompared': True, 'typedReadWriteFootprintsChecked': True,
                           'privateStackFrameBytesExcluded': 512, 'ARMThumbReturnsAndCalleeSavedSpChecked': True,
                           'boundedNotUniversalEquivalence': True},
              'negativeControls': negatives, 'fixtureSpecifications': cases,
              'logicalBudgets': {'rangeNode': 1, 'transition': 2, 'compiledState': 3,
                                 'targetBlockBytes': 16, 'host64PhysicalBlockBytes': 32,
                                 'CSizeAssertionsCoverAllThreeTypes': True, 'rawMembershipBytesAreNotDoubled': True},
              'ABI': {'singletonAndDefaultConstructors': 'void; R0 not interpreted as a formal return',
                      'rangeDestructor': 'IntervalSet* returns input pointer', 'statePayloadConstructor': 'void',
                      'statePayloadInitializer': 'int boolean; count is raw membership bytes',
                      'ARMSetNodeDataBytes': [20, 12, 40], 'host64SetNodeDataBytes': [40, 24, 72]},
              'platform': {'windowsNativeExecuted': True, 'windowsCases': len(cases), 'windowsDll': record(library_path),
                           'truePointersAbove32Bits': True, 'guardedMemoryPreserved': True,
                           'androidArm64Api29Built': True, 'androidSharedLibrary': record(shared),
                           'androidLoadAlignments': loads, 'androidDeviceExecuted': False, 'wholeGameBuildOrExecution': False},
              'newFunctionalFunctions': 6, 'functionalOriginalInstructionBytes': 392,
              'exactMatchingFunctions': sum(row['exactLinkedSpan'] for row in rows), 'acceptedSourceCreditGranted': 0,
              'runtimeInputs': [record(ROOT / path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
                  'tools/python/Lib/site-packages/capstone/__init__.py', 'tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
                  'tools/python/Lib/site-packages/unicorn/__init__.py']],
              'limits': ['Finite valid typed graph/arena fixtures, not universal equivalence',
                         'At most16 range nodes and128 raw membership bytes; no malformed, concurrent or MMIO graphs',
                         'Constructor initialization retains untouched payload/padding and may discard old ownership without release',
                         'Failure preserves original partial mutation; no transactional rollback is added',
                         'Native physical blocks widen while original logical budgets and raw payload byte counts stay distinct']}
    if any(record(ROOT / pin['path']) != pin for pin in pins):
        raise ValueError('Constructor input changed during validation')
    save(output, packet)
    save(OUTPUT / 'functional.json', {'functions': [{'name': row['symbol'], 'confidence': 'medium'} for row in rows]})
    print(json.dumps({'functions': 6, 'originalBytes': 392, 'cases': len(cases), 'instructions': len(owned),
                      'negativeControls': len(negatives), 'exactMatches': packet['exactMatchingFunctions'], 'windowsExecuted': True}))
    return packet


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=WORK / 'constructors-sealed')
    parser.add_argument('--output', type=Path, default=OUTPUT / 'packet.json')
    arguments = parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Constructor output escapes exclusive lane')
    run(arguments.work.resolve(), arguments.output.resolve())
