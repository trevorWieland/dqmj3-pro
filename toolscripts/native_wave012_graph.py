import argparse
import ctypes
import hashlib
import io
import json
import time
from pathlib import Path

from elftools.elf.elffile import ELFFile

import native_wave012_graph_build as build_tools
import native_wave012_graph_cases as case_tools
import native_wave012_graph_model as model
import native_wave012_graph_runtime as runtime
from native_wave012_graph_boundaries import NEW, qualify
from native_wave012_graph_mutations import mutations
from native_wave012_common import ROOT, WORK, OUT, FLAGS, MODULE_SHA, command, record, save, sha


OUTPUT = OUT / 'transition-graph'
PRODUCERS = ['native_wave012_common.py', 'native_wave012_graph.py', 'native_wave012_graph_build.py',
             'native_wave012_graph_cases.py', 'native_wave012_graph_model.py', 'native_wave012_graph_memory.py',
             'native_wave012_graph_algorithms.py', 'native_wave012_graph_runtime.py',
             'native_wave012_graph_boundaries.py', 'native_wave012_graph_mutations.py',
             'native_wave012_arena_model.py', 'native_wave012_arena_oracle.py']
SOURCE_NAMES = {0x4c2d98: 'interval_mutation.c', 0x7555f0: 'label_copy.c', 0x755720: 'label_copy.c',
                0x4c1edc: 'epsilon_closure.c', 0x4c2744: 'state_compile.c', 0x4c1de8: 'state_compile.c',
                0x4c2494: 'singleton_transform.c', 0x1010c8: 'memory_ops.c', 0x301a9c: 'memory_ops.c',
                0x17821c: 'memory_ops.c'}


def source_run(graph, entry, specification, seed, thumb=False, flags=0):
    return runtime.execute_arm(graph['blocks'], graph['functions'][entry]['address'], specification, seed,
                               thumb, flags, graph['executableRanges'])


def android(build, receipts):
    objects = []
    for source in build_tools.SOURCES:
        obj = build / (source.stem + '.android.o')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android29', '-O2', '-std=c11',
                 '-ffreestanding', '-fno-builtin', '-fPIC', '-Wall', '-Wextra', '-Werror', '-I', source.parent,
                 '-c', source, '-o', obj], build / (source.stem + '.android.log'), receipts)
        objects.append(obj)
    shared = build / 'libtransition_graph.so'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
             '-soname', 'libtransition_graph.so', '-o', shared, *objects], build / 'android-link.log', receipts)
    elf = ELFFile(io.BytesIO(shared.read_bytes()))
    loads = [segment['p_align'] for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    if elf['e_machine'] != 'EM_AARCH64' or not loads or any(value < 16384 for value in loads):
        raise ValueError('Android transition component load contract differs')
    return shared, loads


def run(build, output):
    build.mkdir(parents=True, exist_ok=True)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    headers = [ROOT / ('src/native/' + name) for name in ['wave012/fixed_arena.h', 'wave012/label_ops.h',
               'wave012/compile_graph.h', 'wave009/interval_set.h', 'wave010/match_state.h']]
    dependencies = [ROOT / ('evidence/lanes/' + name) for name in ['wave012-native/arena/packet.json',
                    'wave012-native/constructors/packet.json', 'wave009-native/packet.json',
                    'wave012-native/nfa-state-type-evidence.json']]
    paths = [ROOT / 'toolscripts' / name for name in PRODUCERS] + build_tools.SOURCES + headers + dependencies
    pins = [record(path) for path in paths]
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    qualified, owned, census_pin = qualify(image, build_tools.SIZES)
    receipts = []
    graph = build_tools.arm(build / 'source', receipts)
    original = [(address, image[address - 0x100000:address - 0x100000 + size]) for address, size in build_tools.SIZES.items()]
    library_path = build_tools.windows(build / 'windows', receipts)
    library = ctypes.CDLL(str(library_path))
    reached, digest = set(), hashlib.sha256()
    cases = case_tools.fixtures()
    last_update = time.monotonic()
    for index, specification in enumerate(cases):
        entry = model.OPERATIONS[specification['operation']]
        seed, thumb, flags = index, bool(index & 1), index % 16
        reference = runtime.execute_arm(original, entry | int(entry == 0x1010c8), specification, seed, thumb, flags)
        source = source_run(graph, entry, specification, seed, thumb, flags)
        if reference['memorySha256'] != source['memorySha256'] or reference['result'] != source['result']:
            raise ValueError('Complete original/source graph state differs')
        runtime.execute_windows(library, specification, seed)
        reached.update(reference['codePath'])
        digest.update(json.dumps({'specification': specification, 'result': reference['result'],
                                  'memorySha256': reference['memorySha256']}, sort_keys=True).encode())
        if time.monotonic() - last_update > 20:
            print(json.dumps({'completedCases': index + 1, 'totalCases': len(cases)}), flush=True)
            last_update = time.monotonic()
    if not owned <= reached:
        raise ValueError('Not every new original instruction was reached: ' + str(sorted(owned - reached)))
    cross = 0
    for item in mutations():
        specification = item[-1]
        entry = model.OPERATIONS[specification['operation']]
        for flags in range(16):
            for thumb in [False, True]:
                runtime.execute_arm(original, entry | int(entry == 0x1010c8), specification, flags, thumb, flags)
                source_run(graph, entry, specification, flags, thumb, flags)
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
            source_run(wrong, entry, specification, 1, True, 15)
        except runtime.SemanticMismatch as failure:
            negatives.append({'name': name, 'wrongSource': record(source), **failure.details})
        else:
            raise ValueError('Wrong source failed to return a genuine semantic mismatch')
        wrong_library = ctypes.CDLL(str(build_tools.windows(directory / 'windows', receipts, {file_name: source})))
        try:
            runtime.execute_windows(wrong_library, specification, 1)
        except runtime.SemanticMismatch as failure:
            negatives.append({'name': name, 'wrongSource': record(source), **failure.details})
        else:
            raise ValueError('Native wrong source unexpectedly passed')
    shared, loads = android(build, receipts)
    rows = []
    for address in NEW:
        candidate = graph['functions'][address]
        raw = image[address - 0x100000:address - 0x100000 + build_tools.SIZES[address]]
        rows.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                          'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                          'address': address, 'mode': qualified[address]['originalMode']},
                     'symbol': candidate['symbol'], 'source': record(ROOT / 'src/native/wave012' / SOURCE_NAMES[address]),
                     **qualified[address], 'originalInstructionBytes': len(raw), 'originalSpanSha256': sha(raw),
                     'candidateInstructionAndPoolBytes': candidate['bytes'], 'candidatePoolBytes': candidate['poolBytes'],
                     'candidateMappingSymbols': candidate['mappingSymbols'],
                     'candidateObjectSpanSha256': candidate['objectSpanSha256'],
                     'candidateLinkedSpanSha256': candidate['linkedSpanSha256'],
                     'bodyRelocations': candidate['relocations'], 'exactLinkedSpan': candidate['raw'] == raw,
                     'sourceCreditRequested': 0, 'functionalConfidence': 'medium'})
    packet = {'schemaVersion': 1, 'lane': 'wave012-native-transition-graph',
              'status': 'bounded-validated-functional-nonmatching-C', 'moduleSha256': MODULE_SHA,
              'census': census_pin, 'functions': rows, 'sources': [record(path) for path in build_tools.SOURCES],
              'headers': [record(path) for path in headers], 'producers': pins[:len(PRODUCERS)],
              'compiler': record(ROOT / 'tools/clang-21/clang.exe'), 'linker': record(ROOT / 'tools/clang-21/ld.lld.exe'),
              'compilerFlags': FLAGS, 'objects': graph['objects'], 'linkedElf': graph['linkedElf'],
              'linkerScript': graph['linkerScript'], 'commands': receipts,
              'dependencies': {'evidence': [record(path) for path in dependencies], 'role': 'source',
                               'priorFunctionAddresses': [address for address in build_tools.SIZES if address not in NEW],
                               'newFunctionalCreditForDependencies': 0, 'retainedOriginalHelpers': []},
              'behavior': {'cases': len(cases), 'caseResultDigest': digest.hexdigest(), 'flagReturnCrossProductCases': cross,
                           'newOriginalInstructionsReached': len(owned), 'allNewOriginalInstructionsReached': True,
                           'fullDefinedMemoryCompared': True, 'typedReadWriteFootprintsChecked': True,
                           'privateStackFrameBytesExcluded': 512, 'ARMThumbReturnsAndCalleeSavedSpChecked': True,
                           'executedCandidatePoolBytes': 0, 'executionOutsideOwnedCodeRejected': True,
                           'boundedNotUniversalEquivalence': True},
              'negativeControls': negatives, 'fixtureSpecifications': cases,
              'logicalBudgets': {'rangeNode': 1, 'transition': 2, 'compiledState': 3,
                                 'targetBlockBytes': 16, 'host64PhysicalBlockBytes': 32,
                                 'rawMembershipBytesAreNotDoubled': True},
              'ABI': {'NfaStateBytes': [24, 48], 'NfaIdentifierOffsets': [20, 40],
                      'CompileContextBytes': [24, 48], 'sourceTableOffsets': [20, 40],
                      'memoryCompare': 'Exact signed return; aligned words preserve original weighted second/third-byte differences',
                      'memoryCopy': 'Both entry points return destination plus raw byte count; nonoverlapping buffers',
                      'labelCopyWrapper': 'Boolean R0 return used by actual callers, despite decompiler void prototype',
                      'compiledStateIntern': 'Void, output pointer written separately; only three meaningful input parameters'},
              'platform': {'windowsNativeExecuted': True, 'windowsCases': len(cases), 'windowsDll': record(library_path),
                           'truePointersAbove32Bits': True, 'guardedMemoryPreserved': True,
                           'androidArm64Api29Built': True, 'androidSharedLibrary': record(shared),
                           'androidLoadAlignments': loads, 'androidDeviceExecuted': False, 'wholeGameBuildOrExecution': False},
              'newFunctionalFunctions': len(NEW), 'functionalOriginalInstructionBytes': sum(build_tools.SIZES[a] for a in NEW),
              'exactMatchingFunctions': sum(row['exactLinkedSpan'] for row in rows), 'acceptedSourceCreditGranted': 0,
              'runtimeInputs': [record(ROOT / path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
                  'tools/python/Lib/site-packages/capstone/__init__.py', 'tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
                  'tools/python/Lib/site-packages/unicorn/__init__.py']],
              'limits': ['Finite typed graph fixtures, not universal equivalence',
                         'At most32 NFA states with sources[i].identifier==i, valid destinations and finite owned lists',
                         'Raw byte helper counts at most128, nonoverlapping buffers, aligned secondary copy entry',
                         'No malformed pointers, concurrency, MMIO or nonterminating self-copy without cleanup',
                         'Original partial allocation/mutation and leaks on failure are preserved, without rollback',
                         'Singleton phase only: range/control completion and full parser/compiler driver remain separate']}
    if any(record(ROOT / pin['path']) != pin for pin in pins):
        raise ValueError('Graph input changed during validation')
    save(output, packet)
    save(OUTPUT / 'functional.json', {'functions': [{'name': row['symbol'], 'confidence': 'medium'} for row in rows]})
    print(json.dumps({'functions': len(NEW), 'originalBytes': packet['functionalOriginalInstructionBytes'],
                      'cases': len(cases), 'instructions': len(owned), 'negativeControls': len(negatives),
                      'exactMatches': packet['exactMatchingFunctions'], 'windowsExecuted': True}), flush=True)
    return packet


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=WORK / 'transition-graph-sealed')
    parser.add_argument('--output', type=Path, default=OUTPUT / 'packet.json')
    arguments = parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Graph output escapes exclusive lane')
    run(arguments.work.resolve(), arguments.output.resolve())
