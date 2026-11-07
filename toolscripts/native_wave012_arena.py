import argparse
import ctypes
import hashlib
import importlib.metadata
import io
import json
import sys
from pathlib import Path

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_OP_IMM
import unicorn
from elftools.elf.elffile import ELFFile

import native_wave012_arena_build as build_tools
import native_wave012_arena_model as model
import native_wave012_arena_native as native
import native_wave012_arena_oracle as oracle
from native_wave012_common import ROOT, WORK, OUT, FLAGS, MODULE_SHA, command, record, save, sha


OUTPUT = OUT / 'arena'
SIZES = {0x4c3994: 52, 0x4c39c8: 320}
PRODUCERS = ['native_wave012_common.py', 'native_wave012_arena.py', 'native_wave012_arena_build.py',
             'native_wave012_arena_model.py', 'native_wave012_arena_oracle.py', 'native_wave012_arena_native.py']


def mutations():
    return [('mark-value', 'arena->occupied[start + index] = 1;', 'arena->occupied[start + index] = 2;',
             {'pattern': 'empty', 'next': 0, 'blocks': 1, 'operation': 'allocate'}),
            ('wrap-boundary', 'find_run(arena, 0, initial, blocks)', 'find_run(arena, 0, FIXED_ARENA_SLOTS, blocks)',
             {'pattern': 'empty', 'next': 1, 'blocks': model.CAPACITY, 'operation': 'allocate'}),
            ('cursor', 'arena->next = start + blocks;', 'arena->next = start + blocks - 1;',
             {'pattern': 'empty', 'next': 0, 'blocks': 1, 'operation': 'allocate'}),
            ('free-value', 'arena->occupied[index] = 0;', 'arena->occupied[index] = 1;',
             {'pattern': 'full', 'next': 0, 'start': 1, 'blocks': 1, 'operation': 'free'})]


def run(build, output):
    build.mkdir(parents=True, exist_ok=True)
    OUTPUT.mkdir(parents=True, exist_ok=True)
    inputs = [record(ROOT / ('toolscripts/' + name)) for name in PRODUCERS]
    inputs.extend(record(path) for path in [build_tools.SOURCE, build_tools.HEADER])
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('Canonical original module differs')
    receipts = []
    graph = build_tools.arm(build_tools.SOURCE, build / 'source', receipts)
    references = {address: image[address - 0x100000:address - 0x100000 + size] for address, size in SIZES.items()}
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    functions = {row['address']: row for row in census['functions']}
    if census['codeSha256'] != MODULE_SHA:
        raise ValueError('Frozen census module identity differs')
    rows = []
    for address, raw in references.items():
        instructions = list(engine.disasm(raw, address))
        if len(instructions) * 4 != len(raw) or any('[pc' in instruction.op_str or instruction.id in [ARM_INS_BL, ARM_INS_BLX] for instruction in instructions):
            raise ValueError('Closed original instruction/pool/dependency qualification differs')
        if functions[address]['ranges'] != [{'start': address, 'endExclusive': address + len(raw), 'bytes': len(raw)}]:
            raise ValueError('Qualified original boundary differs from census')
        if any(instruction.id == ARM_INS_B and instruction.operands[0].type == ARM_OP_IMM and
               not address <= instruction.operands[0].imm < address + len(raw) for instruction in instructions):
            raise ValueError('Unexpected outgoing branch in closed arena routine')
        witnesses = []
        for caller in census['functions']:
            if caller['mode'] != 'ARM' or address not in caller['calledFunctionAddresses']:
                continue
            for extent in caller['ranges']:
                for instruction in engine.disasm(image[extent['start'] - 0x100000:extent['endExclusive'] - 0x100000], extent['start']):
                    if instruction.id in [ARM_INS_BL, ARM_INS_BLX] and instruction.operands[0].type == ARM_OP_IMM and instruction.operands[0].imm == address:
                        witnesses.append({'callerFunction': caller['address'], 'callsite': instruction.address,
                                          'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + 4])})
        if not witnesses:
            raise ValueError('Missing actual incoming caller witness')
        rows.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                          'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                          'address': address, 'mode': 'ARM'},
                     'symbol': 'fn_' + format(address, '08x'), 'originalInstructionBytes': len(raw), 'poolBytes': 0,
                     'originalSpanSha256': sha(raw), 'outgoingDependencies': [], 'callerWitnesses': witnesses, 'sourceCreditRequested': 0})
    paths, digest = set(), hashlib.sha256()
    cases = model.fixtures()
    for index, spec in enumerate(cases):
        address = 0x4c39c8 if spec['operation'] == 'allocate' else 0x4c3994
        candidate = graph['functions'][address]
        original = oracle.execute([(address, references[address])], address, spec, index, bool(index & 1), index % 16)
        source = oracle.execute([(candidate['address'], candidate['raw'])], candidate['address'], spec, index, bool(index & 1), index % 16)
        if model.summary(model.apply(model.bitmap(spec), spec['next'], spec['blocks'], spec['operation'], spec.get('start', 0))) != {
                name: original[name] for name in ['slot', 'next', 'occupiedSha256']}:
            raise ValueError('Original source model differs')
        if any(source[name] != original[name] for name in ['slot', 'next', 'occupiedSha256']):
            raise ValueError('Original and source result differ')
        paths.update(original['codePath'])
        digest.update(json.dumps({'spec': spec, 'answer': {name: original[name] for name in ['slot', 'next', 'occupiedSha256']}}, sort_keys=True).encode())
    expected_paths = set().union(*(set(range(address, address + size, 4)) for address, size in SIZES.items()))
    if paths != expected_paths:
        raise ValueError('Every original owned instruction was not reached')
    cross_count = 0
    for spec in [cases[2], cases[0], {'pattern': 'full', 'next': model.CAPACITY, 'blocks': 1, 'operation': 'allocate'},
                 {'pattern': 'full', 'next': 100, 'blocks': 1, 'start': 5, 'operation': 'free'}]:
        address = 0x4c39c8 if spec['operation'] == 'allocate' else 0x4c3994
        candidate = graph['functions'][address]
        for flags in range(16):
            for thumb in [False, True]:
                oracle.execute([(address, references[address])], address, spec, flags, thumb, flags)
                oracle.execute([(candidate['address'], candidate['raw'])], candidate['address'], spec, flags, thumb, flags)
                cross_count += 1
    library_path = build_tools.windows(build_tools.SOURCE, build / 'windows', receipts)
    library = ctypes.CDLL(str(library_path))
    for spec in cases:
        native.execute(library, native.create(spec), spec)
    persistent = native.create({'pattern': 'empty', 'next': 0})
    operations = [('allocate', model.CAPACITY, 0), ('allocate', 1, 0), ('free', model.CAPACITY, 0),
                  ('allocate', model.CAPACITY, 0), ('free', model.CAPACITY, 0), ('allocate', 1, 0),
                  ('allocate', 1, 0), ('free', 1, 0), ('allocate', model.CAPACITY - 2, 0), ('allocate', 1, 0)]
    for operation, blocks, start in operations:
        native.execute(library, persistent, {'operation': operation, 'blocks': blocks, 'start': start})
    negative = []
    for name, before, after, spec in mutations():
        directory = build / 'negative' / name
        directory.mkdir(parents=True, exist_ok=True)
        source = directory / 'wrong.c'
        text = build_tools.SOURCE.read_text()
        if text.count(before) != 1:
            raise ValueError('Ambiguous source mutation')
        source.write_text(text.replace(before, after))
        wrong = build_tools.arm(source, directory / 'arm', receipts)
        address = 0x4c39c8 if spec['operation'] == 'allocate' else 0x4c3994
        candidate = wrong['functions'][address]
        try:
            oracle.execute([(candidate['address'], candidate['raw'])], candidate['address'], spec, 1, True, 15)
        except oracle.SemanticMismatch as failure:
            negative.append({'name': name, 'platform': 'arm-cpu', 'source': record(source), **failure.details})
        else:
            raise ValueError('Wrong source did not return with a semantic failure')
        wrong_library = ctypes.CDLL(str(build_tools.windows(source, directory / 'windows', receipts)))
        try:
            native.execute(wrong_library, native.create(spec), spec)
        except native.SemanticMismatch as failure:
            negative.append({'name': name, 'platform': 'native-windows', 'source': record(source), **failure.details})
        else:
            raise ValueError('Native wrong source did not return with a semantic failure')
    android_obj, shared = build / 'arena.android.o', build / 'libarena.so'
    command([ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android29', '-O2', '-std=c11',
             '-ffreestanding', '-fno-builtin', '-fPIC', '-Wall', '-Wextra', '-Werror', '-c', build_tools.SOURCE,
             '-o', android_obj], build / 'android-compile.log', receipts)
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
             '-soname', 'libarena.so', '-o', shared, android_obj], build / 'android-link.log', receipts)
    elf = ELFFile(io.BytesIO(shared.read_bytes()))
    loads = [segment['p_align'] for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    if elf['e_machine'] != 'EM_AARCH64' or not loads or any(value < 16384 for value in loads):
        raise ValueError('Android component load contract differs')
    for row in rows:
        candidate = graph['functions'][row['canonicalIdentity']['address']]
        row.update({'source': record(build_tools.SOURCE), 'candidateInstructionBytes': candidate['bytes'],
                    'candidateObjectSpanSha256': candidate['spanSha256'], 'candidateLinkedSpanSha256': candidate['spanSha256'],
                    'completeObjectAndLinkedSpanEqual': True, 'exactLinkedSpan': candidate['raw'] == references[row['canonicalIdentity']['address']],
                    'functionalConfidence': 'medium', 'bodyRelocations': [], 'unresolvedSymbols': []})
    packet = {'schemaVersion': 1, 'lane': 'wave012-native-arena', 'status': 'bounded-validated-functional-nonmatching-C',
              'moduleSha256': MODULE_SHA, 'census': record(census_path), 'functions': rows, 'sources': [record(build_tools.SOURCE)],
              'headers': [record(build_tools.HEADER)], 'producers': inputs[:len(PRODUCERS)], 'compilerFlags': FLAGS,
              'compiler': record(ROOT / 'tools/clang-21/clang.exe'), 'linker': record(ROOT / 'tools/clang-21/ld.lld.exe'),
              'object': graph['object'], 'linkedElf': graph['linkedElf'], 'linkerScript': graph['linkerScript'], 'commands': receipts,
              'behavior': {'cases': len(cases), 'caseResultDigest': digest.hexdigest(), 'wholeOriginalInstructionPathCovered': True,
                           'originalInstructionsReached': len(paths), 'flagReturnCrossProductCases': cross_count,
                           'privateFrameBytesExcluded': 512, 'readWriteFootprintsChecked': True,
                           'immutableMetadataPayloadAndGuardsPreserved': True, 'boundedNotUniversalEquivalence': True},
              'logicalArena': {'slots': model.CAPACITY, 'targetBlockBytes': 16, 'host64BlockBytes': native.STRIDE,
                               'requestUnit': 'logical target blocks, not native payload bytes', 'payloadBytesUntouched': True,
                               'hostAdaptation': 'Four pointer-width words per physical block; original logical bitmap/cursor budgets preserved'},
              'ABI': {'allocate': 'void*(FixedArena*, u32 logicalBlocks)', 'free': 'void(FixedArena*, blockStart, u32 logicalBlocks)',
                      'ARMDescriptorBytes': 12, 'host64DescriptorBytes': ctypes.sizeof(native.NativeArena),
                      'ARMNextOffset': 8, 'host64NextOffset': native.NativeArena.next.offset,
                      'calleeSaved': ['r4', 'r5', 'r6', 'r7', 'r8', 'r9', 'r10', 'r11', 'sp'], 'LR': 'caller saved'},
              'negativeControls': negative, 'fixtureSpecifications': cases,
              'platform': {'windowsNativeExecuted': True, 'windowsCases': len(cases), 'windowsDll': record(library_path),
                           'persistentFullCapacityAndReuseOperations': operations, 'truePointersAbove32Bits': True,
                           'androidArm64Api29Built': True, 'androidSharedLibrary': record(shared), 'androidLoadAlignments': loads,
                           'androidDeviceExecuted': False, 'wholeGameBuildOrExecution': False},
              'newFunctionalFunctions': 2, 'functionalOriginalInstructionBytes': 372,
              'exactMatchingFunctions': sum(row['exactLinkedSpan'] for row in rows), 'acceptedSourceCreditGranted': 0,
              'limits': ['Valid nonoverlapping descriptor, full occupancy map and nonnull storage; cursor0..2624',
                         'Allocate takes any u32 count; free takes valid aligned block start and in-bounds count',
                         'Null/wrapping storage, malformed aliasing, concurrent/MMIO inputs unsupported',
                         'Raw payload copying and typed caller budgets require their own qualification',
                         'Logical-slot/native-physical adaptation is explicit; platform components are not games'],
              'runtimeInputs': [record(ROOT / path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
                                'tools/python/Lib/site-packages/capstone/__init__.py',
                                'tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
                                'tools/python/Lib/site-packages/unicorn/__init__.py']],
              'runtime': {'python': sys.version, 'unicornDistribution': importlib.metadata.version('unicorn'),
                          'unicornRuntime': unicorn.__version__, 'capstoneDistribution': importlib.metadata.version('capstone'),
                          'capstoneRuntime': capstone.__version__}}
    if any(record(ROOT / entry['path']) != entry for entry in inputs):
        raise ValueError('Arena source/producer changed during validation')
    save(output, packet)
    save(OUTPUT / 'functional.json', {'functions': [{'name': row['symbol'], 'confidence': 'medium'} for row in rows]})
    print(json.dumps({'functions': 2, 'originalBytes': 372, 'cases': len(cases), 'instructions': len(paths),
                      'negativeControls': len(negative), 'exactMatches': packet['exactMatchingFunctions'], 'windowsExecuted': True}))
    return packet


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=WORK / 'arena-sealed')
    parser.add_argument('--output', type=Path, default=OUTPUT / 'packet.json')
    arguments = parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Arena output escapes lane')
    run(arguments.work.resolve(), arguments.output.resolve())
