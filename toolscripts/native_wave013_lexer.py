import argparse
import ctypes
import hashlib
import io
import json
import time
from pathlib import Path

from elftools.elf.elffile import ELFFile

import native_wave013_lexer_build as build_tools
import native_wave013_lexer_original as original_tools
import native_wave013_lexer_runtime as runtime
import native_wave013_lexer_memory as model
import native_wave013_lexer_cases as case_tools
from native_wave013_lexer_mutations import mutations
from native_wave013_lexer_boundaries import unreachable_abi_arms, incoming_witnesses
from native_wave013_common import ROOT, WORK, OUT, FLAGS, MODULE_SHA, command, record, save, sha


OUTPUT = OUT / 'tokenizer'
PRODUCERS = ['native_wave013_common.py', 'native_wave013_lexer.py', 'native_wave013_lexer_build.py',
             'native_wave013_lexer_original.py', 'native_wave013_lexer_runtime.py', 'native_wave013_lexer_memory.py',
             'native_wave013_lexer_cases.py', 'native_wave013_lexer_mutations.py', 'native_wave013_lexer_boundaries.py',
             'native_wave012_arena_oracle.py', 'native_wave012_ctor_runtime.py', 'native_wave012_ctor_model.py',
             'native_wave012_arena_model.py']
ENTRIES = {'construct': 0x4bfeb8, 'lex': 0x4befe0, 'property': 0x4c3904, 'compare': 0x1006b6}


def entry(specification):
    return specification.get('entry', ENTRIES.get(specification['operation']))


def arm(graph, canonical, specification, seed, thumb=False, flags=0):
    if 'fn_' + format(canonical, '08x') in graph.get('functions', {}):
        address = graph['functions']['fn_' + format(canonical, '08x')]['address']
    else:
        address = canonical | int(graph['functions'][canonical]['mode'] == 'Thumb')
    return runtime.execute_arm(graph, address, specification, seed, thumb, flags)


def android(build, receipts):
    objects = []
    for source in build_tools.SOURCES:
        obj = build / (source.stem + '.android.o')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android29', '-O2', '-std=c11',
                 '-ffreestanding', '-fno-builtin', '-fPIC', '-Wall', '-Wextra', '-Werror', '-I', source.parent,
                 '-c', source, '-o', obj], build / (source.stem + '.android.log'), receipts)
        objects.append(obj)
    shared = build / 'libpattern_tokenizer.so'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
             '-soname', 'libpattern_tokenizer.so', '-o', shared, *objects], build / 'android-link.log', receipts)
    elf = ELFFile(io.BytesIO(shared.read_bytes()))
    loads = [segment['p_align'] for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    if elf['e_machine'] != 'EM_AARCH64' or not loads or any(value < 16384 for value in loads):
        raise ValueError('Android tokenizer component load contract differs')
    return shared, loads


def run(build, output):
    build.mkdir(parents=True, exist_ok=True)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    headers = [ROOT / ('src/native/' + name) for name in ['wave013/pattern_tokens.h', 'wave012/fixed_arena.h', 'wave009/interval_set.h']]
    evidence = [ROOT / ('evidence/lanes/' + name) for name in ['wave013-native/method-dispatch-overlay.json',
                'wave013-native/lexer-type-proposal.json', 'wave012-native/arena/packet.json']]
    paths = [ROOT / 'toolscripts' / name for name in PRODUCERS] + build_tools.SOURCES + headers + evidence
    pins = [record(path) for path in paths]
    receipts = []
    graph = build_tools.arm(build / 'source', receipts)
    canonical = sorted(row['canonicalOriginalAddress'] for row in graph['functions'].values() if row['canonicalOriginalAddress'] is not None)
    new = [address for address in canonical if address not in [0x4c3994, 0x4c39c8]]
    original = original_tools.load(canonical)
    overlay = json.loads(evidence[0].read_text())
    dead_proof, excluded = unreachable_abi_arms(original, overlay)
    witnesses = incoming_witnesses(original, overlay, new)
    owned = {address for canonical_address in new for address in original['functions'][canonical_address]['instructionAddresses']}
    reachable = owned - excluded
    library_path = build_tools.windows(build / 'windows', receipts)
    library = ctypes.CDLL(str(library_path))
    reached, digest = set(), hashlib.sha256()
    cases = case_tools.fixtures(original, overlay)
    last_update = time.monotonic()
    for index, specification in enumerate(cases):
        canonical_address = entry(specification)
        seed, thumb, flags = index, bool(index & 1), index % 16
        reference = arm(original, canonical_address, specification, seed, thumb, flags)
        source = arm(graph, canonical_address, specification, seed, thumb, flags)
        runtime.compare_arm(source, reference)
        runtime.execute_windows(library, specification, reference, seed)
        reached.update(reference['codePath'])
        digest.update(json.dumps({'specification': specification, 'result': reference['result'],
                                  'memorySha256': reference['memorySha256']}, sort_keys=True).encode())
        if time.monotonic() - last_update > 20:
            print(json.dumps({'completedCases': index + 1, 'totalCases': len(cases)}), flush=True)
            last_update = time.monotonic()
    if not reachable <= reached or excluded & reached:
        raise ValueError('Reachable coverage or measured dead-arm proof differs: ' + str(sorted(reachable - reached)))
    cross = 0
    for item in mutations():
        specification = item[-1]
        for flags in range(16):
            for thumb in [False, True]:
                reference = arm(original, entry(specification), specification, flags, thumb, flags)
                source = arm(graph, entry(specification), specification, flags, thumb, flags)
                runtime.compare_arm(source, reference)
                cross += 1
    negatives = []
    for name, file_name, before, after, specification in mutations():
        directory = build / 'negative' / name
        directory.mkdir(parents=True, exist_ok=True)
        source_path = directory / file_name
        text = (ROOT / 'src/native/wave013' / file_name).read_text()
        if before not in text:
            raise ValueError('Mutation no longer targets actual source')
        source_path.write_text(text.replace(before, after))
        wrong = build_tools.arm(directory / 'arm', receipts, {file_name: source_path})
        reference = arm(original, entry(specification), specification, 1, True, 15)
        try:
            runtime.compare_arm(arm(wrong, entry(specification), specification, 1, True, 15), reference)
        except runtime.SemanticMismatch as failure:
            negatives.append({'name': name, 'wrongSource': record(source_path), **failure.details})
        else:
            raise ValueError('Wrong source failed to return a genuine semantic mismatch')
        wrong_library = ctypes.CDLL(str(build_tools.windows(directory / 'windows', receipts, {file_name: source_path})))
        try:
            runtime.execute_windows(wrong_library, specification, reference, 1)
        except runtime.SemanticMismatch as failure:
            negatives.append({'name': name, 'wrongSource': record(source_path), **failure.details})
        else:
            raise ValueError('Native wrong source unexpectedly passed')
    shared, loads = android(build, receipts)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    rows = []
    for address in new:
        candidate = graph['functions']['fn_' + format(address, '08x')]
        original_row = original['functions'][address]
        ranges = original_row['instructionRanges']
        original_raw = b''.join(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000] for row in ranges)
        exact = len(ranges) == 1 and not original_row['literalPoolRanges'] and candidate['raw'] == original_raw
        rows.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                          'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                          'address': address, 'mode': original_row['mode']},
                     'symbol': 'fn_' + format(address, '08x'), 'source': candidate['objectOrigin']['source'],
                     'originalInstructionRanges': ranges, 'originalLiteralPoolRanges': original_row['literalPoolRanges'],
                     'originalInstructionBytes': len(original_raw), 'callerWitnesses': witnesses[address],
                     'candidateInstructionAndPoolBytes': candidate['bytes'], 'candidatePoolBytes': candidate['poolBytes'],
                     'candidateMappingSpans': candidate['mappingSpans'], 'candidateObject': candidate['objectOrigin'],
                     'candidateLinkedSpanSha256': candidate['linkedSpanSha256'], 'exactLinkedSpanCandidate': exact,
                     'sourceCreditRequested': 0, 'functionalConfidence': 'medium'})
    packet = {'schemaVersion': 1, 'lane': 'wave013-native-tokenizer', 'status': 'bounded-validated-functional-source-with-exact-candidates',
              'moduleSha256': MODULE_SHA, 'functions': rows, 'sources': [record(path) for path in build_tools.SOURCES],
              'headers': [record(path) for path in headers], 'producers': pins[:len(PRODUCERS)],
              'compiler': record(ROOT / 'tools/clang-21/clang.exe'), 'linker': record(ROOT / 'tools/clang-21/ld.lld.exe'),
              'compilerFlags': FLAGS, 'objects': graph['objects'], 'linkedElf': graph['linkedElf'],
              'linkerScript': graph['linkerScript'], 'commands': receipts, 'evidenceInputs': [record(path) for path in evidence],
              'sourceHelpers': [{'symbol': name, 'bytes': row['bytes'], 'linkedSpanSha256': row['linkedSpanSha256'],
                                 'object': row['objectOrigin'], 'originalFunctionCredit': 0}
                                for name, row in graph['functions'].items() if row['canonicalOriginalAddress'] is None],
              'dependencies': {'arenaValidation': record(evidence[-1]), 'role': 'source', 'newArenaCredit': 0,
                               'retainedOriginalExecutableHelpers': [], 'referenceImmutableData': original['readonlyData'],
                               'sharedTailPhysicalOwnership': overlay['sharedTailAliases']},
              'behavior': {'cases': len(cases), 'caseResultDigest': digest.hexdigest(), 'flagReturnCrossProductCases': cross,
                           'newOriginalInstructions': len(owned), 'reachableOriginalInstructions': len(reachable),
                           'reachableOriginalInstructionsReached': len(reachable & reached), 'allReachableOriginalInstructionsReached': True,
                           'unreachableImmutableTableAbiInstructions': len(excluded), 'unreachableAbiProof': dead_proof,
                           'fullARMDefinedMemoryComparedWithoutTranslation': True,
                           'windowsExpectedState': 'Typed field expectations derived from actual original writes; actual source output is never patched',
                           'windowsMemoryComparedCompletelyIncludingPaddingAndUnusedArenaStorage': True,
                           'ARMReadWriteBoundsAndOwnedExecutionChecked': True, 'privateStackFrameBytesExcluded': 512,
                           'ARMThumbReturnsAndCalleeSavedSpChecked': True, 'boundedNotUniversalEquivalence': True},
              'negativeControls': negatives, 'fixtureSpecifications': cases,
              'ABI': {'TokenBytes': [16, 24], 'LexerBytes': [28, 48], 'tokenLogicalBlocks': 1, 'contextLogicalBlocks': 2,
                      'targetBlockBytes': 16, 'host64BlockBytes': 32, 'maximumFieldIsU16NotPointer': True,
                      'lexerConstructorReturnsFullWidthInputPointer': True, 'rawUTF16UnitCountsAreNotDoubled': True,
                      'methodDispatch': 'Typed logical C dispatch; immutable original member encodings are not native data',
                      'propertyLookup': 'Exact case-sensitive bounded UTF16 identifiers, first match, consumed count written only on success'},
              'platform': {'windowsNativeExecuted': True, 'windowsCases': len(cases), 'windowsDll': record(library_path),
                           'truePointersAbove32Bits': True, 'guardedMemoryPreserved': True,
                           'androidArm64Api29Built': True, 'androidSharedLibrary': record(shared),
                           'androidLoadAlignments': loads, 'androidDeviceExecuted': False, 'wholeGameBuildOrExecution': False},
              'newFunctionalFunctions': len(new), 'functionalOriginalInstructionBytes': sum(row['originalInstructionBytes'] for row in rows),
              'exactMatchingFunctionCandidates': sum(row['exactLinkedSpanCandidate'] for row in rows), 'acceptedSourceCreditGranted': 0,
              'runtimeInputs': [record(ROOT / path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
                  'tools/python/Lib/site-packages/capstone/__init__.py', 'tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
                  'tools/python/Lib/site-packages/unicorn/__init__.py']],
              'limits': ['Finite typed lexer/token fixtures up to256 UTF16 units and8 preexisting tokens; not universal equivalence',
                         'Only fixed measured unadjusted method tables; generic virtual ABI arms are proven unreachable under this module data',
                         'No malformed pointers, corrupted tables, concurrency, MMIO or arbitrary overlapping ownership',
                         'New helpers and shared tails grant no duplicate original-byte credit',
                         'Complete tokenizer component only; outer NFA/parser/compiler/matcher composition and game remain separate']}
    if any(record(ROOT / pin['path']) != pin for pin in pins):
        raise ValueError('Tokenizer input changed during validation')
    save(output, packet)
    save(OUTPUT / 'functional.json', {'functions': [{'name': row['symbol'], 'confidence': 'medium'} for row in rows]})
    print(json.dumps({'newFunctions': len(new), 'originalBytes': packet['functionalOriginalInstructionBytes'],
                      'cases': len(cases), 'reachableInstructions': len(reachable), 'unreachableAbiInstructions': len(excluded),
                      'negativeControls': len(negatives), 'exactCandidates': packet['exactMatchingFunctionCandidates']}), flush=True)
    return packet


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=WORK / 'tokenizer-sealed')
    parser.add_argument('--output', type=Path, default=OUTPUT / 'packet.json')
    arguments = parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Tokenizer output escapes owned lane')
    run(arguments.work.resolve(), arguments.output.resolve())
