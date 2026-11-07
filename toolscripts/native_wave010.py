import argparse
import ctypes
import hashlib
import importlib.metadata
import json
import sys
from pathlib import Path

import capstone
import unicorn
from capstone.arm import ARM_INS_BL, ARM_INS_BLX, ARM_OP_IMM

import native_wave010_build as build_tools
import native_wave010_fixtures as fixtures
import native_wave010_model as model
import native_wave010_native as native
import native_wave010_oracle as oracle
from native_wave009 import ROOT, CENSUS, FLAGS, MODULE_SHA, command, record, save, sha


WORK = ROOT / 'work/wave010-native'
OUT = ROOT / 'evidence/lanes/wave010-native'
CLAIMS = {0x4becdc: 84, 0x4bed30: 416}
DEPENDENCY = 0x780578
PRODUCERS = ['native_wave010.py', 'native_wave010_build.py', 'native_wave010_model.py',
             'native_wave010_oracle.py', 'native_wave010_native.py', 'native_wave010_fixtures.py',
             'native_wave009.py', 'native_wave009_oracle.py', 'module_link_graph.py', 'module_link.py']


def boundaries(image, census):
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    functions = {row['address']: row for row in census['functions']}
    rows = []
    for address, size in CLAIMS.items():
        function = functions[address]
        ranges = [{'start': address, 'endExclusive': address + size, 'bytes': size}]
        if function['mode'] != 'ARM' or function['ranges'] != ranges:
            raise ValueError('Claimed exact original boundary differs')
        raw = image[address - 0x100000:address - 0x100000 + size]
        instructions = list(decoder.disasm(raw, address))
        if len(instructions) != size // 4 or any('[pc' in item.op_str for item in instructions):
            raise ValueError('Original instruction/pool extent differs')
        calls = []
        for instruction in instructions:
            if instruction.id in [ARM_INS_BL, ARM_INS_BLX]:
                if len(instruction.operands) != 1 or instruction.operands[0].type != ARM_OP_IMM:
                    raise ValueError('Unexpected indirect dependency')
                calls.append({'callsite': instruction.address, 'target': instruction.operands[0].imm,
                              'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + 4])})
            elif instruction.mnemonic.startswith('b') and instruction.operands and instruction.operands[-1].type == ARM_OP_IMM:
                if not address <= instruction.operands[-1].imm < address + size:
                    raise ValueError('Unexpected outgoing non-call branch')
        if {row['target'] for row in calls} != (set() if address == 0x4becdc else {0x4becdc, DEPENDENCY}):
            raise ValueError('Original dependency closure differs')
        witnesses = []
        for caller in census['functions']:
            if caller['mode'] != 'ARM' or address not in caller['calledFunctionAddresses']:
                continue
            for extent in caller['ranges']:
                for site in range(extent['start'], extent['endExclusive'] - 3, 4):
                    instruction = next(decoder.disasm(image[site - 0x100000:site - 0x100000 + 4], site, count=1), None)
                    if instruction and instruction.id in [ARM_INS_BL, ARM_INS_BLX] and instruction.operands[0].type == ARM_OP_IMM and instruction.operands[0].imm == address:
                        witnesses.append({'callerFunction': caller['address'], 'callsite': site,
                                          'sha256': sha(image[site - 0x100000:site - 0x100000 + 4])})
        if not witnesses:
            raise ValueError('Missing original caller witness')
        rows.append({'address': address, 'symbol': 'fn_' + format(address, '08x'), 'mode': 'ARM',
                     'bytes': size, 'endExclusive': address + size, 'sha256': sha(raw), 'poolBytes': 0,
                     'ghidraRanges': ranges, 'originalDirectCalls': calls, 'callerWitnesses': witnesses})
    return rows


def layout(build, receipts):
    checks = [('sizeof(MatchState)', 48, 88), ('__builtin_offsetof(MatchState, data) + __builtin_offsetof(MatchStateData, transitions)', 8, 16),
              ('__builtin_offsetof(MatchState, data) + __builtin_offsetof(MatchStateData, result)', 44, 84), ('sizeof(MatchContext)', 8, 16),
              ('__builtin_offsetof(MatchContext, initial)', 4, 8), ('sizeof(MatchEdge)', 28, 56),
              ('__builtin_offsetof(MatchEdge, label)', 8, 16), ('sizeof(MatchLink)', 8, 16),
              ('__builtin_offsetof(MatchLink, next)', 4, 8), ('__builtin_offsetof(IntervalSet, kind)', 4, 8)]
    source = build / 'layout.c'
    source.write_text('#include "match_state.h"\n' + '\n'.join('_Static_assert(' + expression +
                      ' == (sizeof(void *) == 4 ? ' + str(arm) + ' : ' + str(host) + '), "graph layout");'
                      for expression, arm, host in checks) + '\n')
    for target in ['arm-none-eabi', 'x86_64-pc-windows-msvc', 'aarch64-linux-android29']:
        command([ROOT / 'tools/clang-21/clang.exe', '--target=' + target, '-std=c11', '-Wall', '-Wextra', '-Werror',
                 '-I', build_tools.HEADER.parent, '-c', source, '-o', build / ('layout-' + target + '.o')],
                build / ('layout-' + target + '.log'), receipts)
    return [{'expression': expression, 'ARM32': arm, 'host64': host} for expression, arm, host in checks]


def mutations():
    edge, state = fixtures.edge, fixtures.state
    control_case = {'states': [state(0, [edge(4, 1, 0)]), state(1)], 'initial': 0, 'text': []}
    newline_case = {'states': [state(-3, [edge(4, 1, 1)]),
                              state(5, [edge(4, 2, 0), edge(2, 1, 13), edge(2, 1, 10)]), state(17)],
                    'initial': 0, 'text': [13, 10]}
    space_case = {'states': [state(-7, [edge(4, 1, 2), edge(3, 0, ranges=[(1, 65535)])]),
                            state(23, [edge(3, 1, ranges=[(1, 65535)])])], 'initial': 0, 'text': [0xa0]}
    signed_case = {'states': [state(-128)], 'initial': 0, 'text': []}
    return [('control-mask', '(flags & (1u << (unsigned char)edge->label.value.control_bit)) != 0',
             '(flags & (1u << (unsigned char)edge->label.value.control_bit)) == 0', control_case, 'control', 0),
            ('crlf-grouping', 'remaining = *text == 13 && text[1] == 10 ? 2 : 1;', 'remaining = 1;', newline_case, 'match', 0),
            ('nbsp-classification', 'character == 0x3000;', 'character == 0x3000 || character == 0xa0;', space_case, 'match', 0),
            ('signed-result', 'return cursor->state->data.result;', 'return (unsigned char)cursor->state->data.result;', signed_case, 'match', 0)]


def run_packet(build, output):
    build.mkdir(parents=True, exist_ok=True)
    OUT.mkdir(parents=True, exist_ok=True)
    input_pins = [record(ROOT / ('toolscripts/' + name)) for name in PRODUCERS]
    input_pins.extend(record(path) for path in [build_tools.SOURCE, build_tools.HEADER, build_tools.INTERVAL_SOURCE, build_tools.INTERVAL_HEADER, ROOT / 'evidence/lanes/wave009-native/packet.json'])
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    census = json.loads(CENSUS.read_text())
    if sha(image) != MODULE_SHA or census['codeSha256'] != MODULE_SHA:
        raise ValueError('Canonical original image/census identity differs')
    rows = boundaries(image, census)
    dependency_packet = json.loads((ROOT / 'evidence/lanes/wave009-native/packet.json').read_text())
    if not dependency_packet.get('pointerPromotion'):
        raise ValueError('Full-source graph requires validated wave009 pointer promotion')
    claim = {'schemaVersion': 1, 'lane': 'wave010-native', 'programId': '0004000e001acb00',
             'build': 'owner-archive-update', 'module': 'content0/.code-decompressed',
             'moduleSha256': MODULE_SHA, 'census': record(CENSUS), 'intervals': rows,
             'newOriginalInstructionBytes': 500, 'newFunctionCount': 2, 'sourceCreditRequested': 0,
             'behaviorDomain': 'Valid aligned finite typed graphs; 1..16 states, up to 16 edges/state and 16 intervals/edge; acyclic forward control transitions with a low-byte bit index and disabled indices 32..255; up to 64 nonzero UTF16 code units; signed 8-bit results'}
    save(OUT / 'claim.json', claim)
    receipts = []
    graph = build_tools.arm(build_tools.SOURCE, build / 'source', receipts)
    layouts = layout(build, receipts)
    dependency_row = next(row for row in dependency_packet['functions'] if row['canonicalIdentity']['address'] == DEPENDENCY)
    if graph['functions']['fn_00780578']['sectionSha256'] != dependency_row['candidateObjectSpanSha256']:
        raise ValueError('Source-linked membership dependency differs from validated wave009')
    reference = [(0x4becdc, image[0x3becdc:0x3beed0]), (DEPENDENCY, image[0x680578:0x6805e4])]
    cases, controls = fixtures.fixtures(), fixtures.controls()
    paths, digest = set(), hashlib.sha256()
    for operation, collection in [('match', [(case, 0) for case in cases]), ('control', controls)]:
        for index, (case, mask) in enumerate(collection):
            original_entry = 0x4bed30 if operation == 'match' else 0x4becdc
            source_entry = build_tools.PLACEMENTS['fn_' + format(original_entry, '08x')]
            arguments = {'operation': operation, 'mask': mask, 'return_thumb': bool(index & 1), 'flags': index % 16}
            original = oracle.execute(reference, original_entry, case, index, **arguments)
            source = oracle.execute(graph['blocks'], source_entry, case, index, allowed_execution=graph['executable'], **arguments)
            if (original['result'], original['state']) != (source['result'], source['state']):
                raise ValueError('Original/full-source graph result differs')
            paths.update(original['codePath'])
            digest.update(json.dumps({'case': case, 'operation': operation, 'mask': mask,
                                      'result': original['result'], 'state': original['state']}, sort_keys=True).encode())
    expected_paths = set().union(*(set(range(address, address + size, 4)) for address, size in CLAIMS.items()))
    if not expected_paths <= paths:
        raise ValueError('Not every owned original instruction was reached: ' + str(sorted(expected_paths - paths)))
    cross_count = 0
    for operation, case, mask in [('match', cases[0], 0), ('match', cases[6], 0),
                                  ('match', mutations()[2][3], 0), ('control', controls[0][0], 0x80000000)]:
        original_entry = 0x4bed30 if operation == 'match' else 0x4becdc
        for flags in range(16):
            for thumb in [False, True]:
                arguments = {'operation': operation, 'mask': mask, 'return_thumb': thumb, 'flags': flags}
                oracle.execute(reference, original_entry, case, 500 + flags, **arguments)
                oracle.execute(graph['blocks'], build_tools.PLACEMENTS['fn_' + format(original_entry, '08x')], case,
                               500 + flags, allowed_execution=graph['executable'], **arguments)
                cross_count += 1
    library_path = build_tools.windows(build_tools.SOURCE, build / 'windows', receipts)
    library = ctypes.CDLL(str(library_path))
    for case in cases:
        native.execute(library, case)
    for case, mask in controls:
        native.execute(library, case, 'control', mask)
    android = build_tools.android(build_tools.SOURCE, build / 'android', receipts)
    negative = []
    for name, before, after, case, operation, mask in mutations():
        destination = build / 'negative' / name
        destination.mkdir(parents=True, exist_ok=True)
        source = destination / 'wrong.c'
        text = build_tools.SOURCE.read_text()
        if text.count(before) != 1:
            raise ValueError('Wrong-source mutation is ambiguous')
        source.write_text(text.replace(before, after))
        wrong_graph = build_tools.arm(source, destination / 'arm', receipts)
        entry = build_tools.PLACEMENTS['fn_004bed30' if operation == 'match' else 'fn_004becdc']
        try:
            oracle.execute(wrong_graph['blocks'], entry, case, 1, operation, mask, True, 15,
                           allowed_execution=wrong_graph['executable'])
        except oracle.SemanticMismatch as failure:
            negative.append({'name': name, 'platform': 'arm-cpu', 'wrongSource': record(source),
                             'detected': True, **failure.details})
        else:
            raise ValueError('ARM wrong-source control unexpectedly passed')
        wrong_library = ctypes.CDLL(str(build_tools.windows(source, destination / 'windows', receipts)))
        try:
            native.execute(wrong_library, case, operation, mask)
        except native.NativeMismatch as failure:
            negative.append({'name': name, 'platform': 'native-windows', 'wrongSource': record(source),
                             'detected': True, **failure.details})
        else:
            raise ValueError('Native Windows wrong-source control unexpectedly passed')
    outcomes = []
    for row in rows:
        compiled = graph['functions'][row['symbol']]
        exact = compiled['size'] == row['bytes'] and compiled['linkedSpanSha256'] == row['sha256']
        outcomes.append({'canonicalIdentity': {'build': 'owner-archive-update', 'module': 'content0/.code-decompressed',
                                              'programId': '0004000e001acb00', 'moduleSha256': MODULE_SHA,
                                              'address': row['address'], 'mode': 'ARM'},
                         'symbol': row['symbol'], 'source': record(build_tools.SOURCE),
                         'originalBytes': row['bytes'], 'originalInstructionBytes': row['bytes'],
                         'candidateInstructionBytes': compiled['size'], 'poolBytes': 0,
                         'candidateObjectSpanSha256': compiled['sectionSha256'],
                         'candidateLinkedSpanSha256': compiled['linkedSpanSha256'],
                         'originalSpanSha256': row['sha256'],
                         'compilerObject': compiled, 'exactLinkedSpan': exact,
                         'functionalConfidence': 'medium', 'sourceCreditRequested': 0})
    save(OUT / 'behavior-corpus.json', {'matcherCases': cases, 'controlCases': controls,
                                       'caseResultDigest': digest.hexdigest()})
    save(OUT / 'functional.json', {'functions': [{'name': row['symbol'], 'confidence': 'medium'} for row in rows]})
    packet = {'schemaVersion': 1, 'lane': 'wave010-native', 'status': 'bounded-validated-functional-nonmatching-C',
              'programId': '0004000e001acb00', 'moduleSha256': MODULE_SHA, 'claim': record(OUT / 'claim.json'),
              'sources': [record(build_tools.SOURCE), record(build_tools.INTERVAL_SOURCE)],
              'headers': [record(build_tools.HEADER), record(build_tools.INTERVAL_HEADER)],
              'producers': input_pins[:len(PRODUCERS)],
              'compiler': record(ROOT / 'tools/clang-21/clang.exe'), 'linker': record(ROOT / 'tools/clang-21/ld.lld.exe'),
              'compilerFlags': FLAGS, 'historicalCompilerIdentified': False, 'commands': receipts,
              'functions': outcomes, 'sourceGraph': {key: value for key, value in graph.items() if key not in ['blocks', 'executable']},
              'dependency': {'symbol': 'fn_00780578', 'originalAddress': DEPENDENCY, 'originalBytes': 108,
                             'originalSpanSha256': sha(image[0x680578:0x6805e4]), 'role': 'source',
                             'validationPacket': record(ROOT / 'evidence/lanes/wave009-native/packet.json'),
                             'newFunctionalCredit': 0, 'retainedOriginalDependencies': []},
              'ABI': {'cursor': 'mutable state pointer only', 'control': 'void(cursor*, u32 flags)',
                      'matcher': 'signed int(cursor*, const context*, const u16* nulTerminatedText)',
                      'ARM32Layouts': layouts, 'calleeSavedChecked': ['r4', 'r5', 'r6', 'r7', 'r8', 'r9', 'r10', 'r11', 'sp'],
                      'callerSavedUnconstrained': ['r0', 'r1', 'r2', 'r3', 'r12', 'lr'],
                      'returnPCAndARMThumbInterworkingChecked': True, 'noPointerTruncation': True},
              'behavior': {'matcherCases': len(cases), 'independentControlCases': len(controls),
                           'originalOwnedInstructionsCovered': len(expected_paths), 'originalOwnedInstructionsTotal': 125,
                           'allOriginalOwnedInstructionsReached': True, 'flagReturnCrossProductCases': cross_count,
                           'caseResultDigest': digest.hexdigest(), 'allComparedAgainstOriginalAndModel': True,
                           'typedReadAndWriteFootprintsChecked': True, 'graphOutsideCursorPreserved': True,
                           'privateStackFrameBytesExcludedFromEquality': 512, 'executionInstructionLimit': 1000000,
                           'boundedEvidenceNotUniversalEquivalence': True},
              'negativeControls': negative, 'behaviorCorpus': record(OUT / 'behavior-corpus.json'),
              'platform': {'windowsNativeExecuted': True, 'windowsMatcherCases': len(cases), 'windowsControlCases': len(controls),
                           'windowsLibrary': record(library_path), 'guardedMemoryPreserved': True,
                           'truePointersAbove32Bits': True, 'android': android,
                           'wholeGameBuildOrExecution': False},
              'newFunctionalFunctions': 2, 'newFunctionalOriginalBytes': 500,
              'functionalFunctions': 2, 'functionalOriginalInstructionBytes': 500,
              'exactMatchingFunctions': sum(row['exactLinkedSpan'] for row in outcomes), 'acceptedSourceCreditGranted': 0,
              'limits': ['Finite synthetic typed graph/input domain, not universal equivalence',
                         'No malformed, dangling, cyclic-control, concurrent or MMIO graphs',
                         'Whitespace classification is the measured game subset, not Unicode normalization',
                         'Original instruction bytes differ; source graph is linked at separate addresses',
                         'Windows and Android outputs are components, not game builds; Android not device executed'],
              'runtimeInputs': [record(ROOT / path) for path in [
                  'tools/python/Lib/site-packages/capstone/lib/capstone.dll',
                  'tools/python/Lib/site-packages/capstone/__init__.py',
                  'tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
                  'tools/python/Lib/site-packages/unicorn/__init__.py']],
              'runtime': {'python': sys.version, 'cpuModel': 'Unicorn ARM1176', 'unicornDistribution': importlib.metadata.version('unicorn'),
                          'unicornRuntime': unicorn.__version__, 'capstoneDistribution': importlib.metadata.version('capstone'),
                          'capstoneRuntime': capstone.__version__}}
    if any(record(ROOT / item['path']) != item for item in input_pins):
        raise ValueError('A source, producer or dependency packet changed during validation')
    packet['inputPinsUnchangedDuringValidation'] = True
    packet['preservedAttempts'] = record(OUT / 'attempts.json')
    packet['typePromotion'] = record(ROOT / 'evidence/lanes/wave012-native/type-proposal.json')
    packet['ARMBodyAndRelocationInvariance'] = record(ROOT / 'evidence/lanes/wave012-native/shared-type-arm-invariance.json')
    packet['previousPublishedRevision'] = '88de9588e48d44ef931e96554e515d325bff1713'
    packet['previousPacket'] = record(OUT / 'v1-packet.json')
    packet['previousVerification'] = record(OUT / 'v1-verification.json')
    packet['sourceRevision'] = 'working-tree-v2-expanded-types'
    save(output, packet)
    print(json.dumps({'status': packet['status'], 'newFunctions': 2, 'originalBytes': 500,
                      'matcherCases': len(cases), 'controlCases': len(controls), 'exactMatches': packet['exactMatchingFunctions'],
                      'sourceOnlyDependencyGraph': True, 'negativeControls': len(negative), 'windowsExecuted': True}))
    return packet


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=WORK / 'sealed')
    parser.add_argument('--output', type=Path, default=OUT / 'packet.json')
    arguments = parser.parse_args()
    build, output = arguments.work.resolve(), arguments.output.resolve()
    if not build.is_relative_to(WORK.resolve()) or not output.is_relative_to(OUT.resolve()):
        raise ValueError('Wave010 output escapes exclusive lane paths')
    run_packet(build, output)


if __name__ == '__main__':
    main()
