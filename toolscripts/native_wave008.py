import argparse
import importlib.metadata
import importlib.util
import json
import sys
from pathlib import Path

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_INS_BX, ARM_INS_POP, ARM_OP_IMM, ARM_REG_LR, ARM_REG_PC
import unicorn

import native_wave005 as common


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'src/native/wave008'
EVIDENCE = ROOT / 'evidence/lanes/wave008-native'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CLAIM_SHA = '37972ef4c963ad161333be826bcc8497fca068b977140de5da0d478d71b7adee'
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2', '-ffreestanding',
         '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables']
record, digest, save, run, elf_functions = common.record, common.digest, common.save, common.run, common.elf_functions


def load_oracle():
    spec = importlib.util.spec_from_file_location('wave008_oracle', SOURCE / 'oracle.py')
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def closure(code, address):
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    instructions = list(engine.disasm(code, address))
    if sum(instruction.size for instruction in instructions) != len(code):
        raise RuntimeError('Partial ARM instruction decode')
    for instruction in instructions:
        if instruction.id in (ARM_INS_BL, ARM_INS_BLX) or ('[pc' in instruction.op_str):
            raise RuntimeError('Unclosed helper or literal-pool reference')
        if instruction.id == ARM_INS_B:
            target = instruction.operands[0]
            if target.type != ARM_OP_IMM or not address <= target.imm < address + len(code):
                raise RuntimeError('Transfer outside complete leaf body')
        elif instruction.id == ARM_INS_BX:
            if instruction.operands[0].reg != ARM_REG_LR:
                raise RuntimeError('Unsupported indirect transfer')
        elif ARM_REG_PC in instruction.regs_access()[1] and instruction.id != ARM_INS_POP:
            raise RuntimeError('Unsupported program-counter write')
    return {instruction.address for instruction in instructions}


def boundary(original, row, functions):
    address = row['address']
    function = functions[address]
    raw = original[address - 0x100000:row['endExclusive'] - 0x100000]
    if digest(raw) != row['sha256'] or function['ranges'] != row['ghidraRanges'] or function['mode'] != 'ARM':
        raise RuntimeError('Canonical module/body/ranges changed')
    closure(raw, address)
    qualified = []
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    for candidate in row['callerCandidates']:
        caller = functions[candidate['callerFunction']]
        site = candidate['callsite']
        call = original[site - 0x100000:site - 0x100000 + 4]
        if caller['mode'] != 'ARM' or address not in caller['calledFunctionAddresses']:
            raise RuntimeError('Unqualified census caller')
        if not any(span['start'] <= site and site + 4 <= span['endExclusive'] for span in caller['ranges']):
            raise RuntimeError('Caller instruction outside known body')
        instruction = next(engine.disasm(call, site, count=1))
        if digest(call) != candidate['callsiteSha256'] or instruction.id not in (ARM_INS_B, ARM_INS_BL):
            raise RuntimeError('Frozen actual callsite changed')
        if instruction.operands[0].type != ARM_OP_IMM or instruction.operands[0].imm != address:
            raise RuntimeError('Callsite does not reach canonical function')
        qualified.append(candidate)
    if not qualified:
        raise RuntimeError('Missing actual qualified incoming call/tail transfer')
    return raw, {'ghidraRanges': function['ranges'], 'qualifiedActualCallers': qualified,
                 'poolBytes': 0, 'directDependencies': [], 'leafClosure': True}


def wrong_source(text, rows):
    result = text
    for row in sorted(rows, key=lambda item: result.index(item['symbol'] + '('), reverse=True):
        start = result.index(row['symbol'] + '(')
        end = result.index('\n}\n', start)
        body = result[start:end]
        position = body.rfind('    return ')
        field = 'record->' + row['fieldName']
        if row['semanticModel']['kind'] == 'bitmap-set':
            field += '[byte_index]'
        if position < 0:
            raise RuntimeError('Cannot create auditable ordinary-C negative source')
        body = body[:position] + '    ' + field + ' ^= 0x80u;\n' + body[position:]
        result = result[:start] + body + result[end:]
    return result


def link(objects, rows, linker, work, name, receipts, negative=False):
    script = work / (name + '.ld')
    lines = ['ENTRY(' + rows[0]['symbol'] + ')', 'SECTIONS {']
    for index, row in enumerate(rows):
        address = 0x6000000 + index * 0x1000 if negative else row['address']
        lines += [f'. = 0x{address:x};', f'.text_{row["address"]:08x} : {{ *(.text.{row["symbol"]}) }}']
    lines += ['/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment*) *(.note*) }', '}']
    script.write_text('\n'.join(lines) + '\n')
    elf = work / (name + '.elf')
    run([linker, '-T', script, '-o', elf, *objects], work / (name + '.link.log'), receipts)
    symbols, undefined = elf_functions(elf)
    if undefined or set(symbols) != {row['symbol'] for row in rows}:
        raise RuntimeError('Linked function/undefined-symbol inventory mismatch')
    return elf, symbols


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/wave008-native/build')
    args = parser.parse_args()
    work = args.output.resolve()
    if not work.is_relative_to(ROOT / 'work/wave008-native'):
        raise RuntimeError('Output escapes assigned lane')
    work.mkdir(parents=True, exist_ok=True)
    claim_path, layout_path = EVIDENCE / 'claim.json', EVIDENCE / 'semantic-layouts.json'
    claim, layout = [json.loads(path.read_text()) for path in (claim_path, layout_path)]
    census_path = ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json'
    module_path = ROOT / 'generated/update-content0/code.bin'
    original = module_path.read_bytes()
    if digest(original) != MODULE_SHA or record(claim_path)['sha256'] != CLAIM_SHA:
        raise RuntimeError('Frozen module/claim mismatch')
    if record(census_path)['sha256'] != claim['ghidraFunctionsSha256'] or layout['claimSha256'] != CLAIM_SHA:
        raise RuntimeError('Frozen census/layout mismatch')
    for pin in claim['priorLanePins']:
        if record(ROOT / pin['path'])['sha256'] != pin['sha256']:
            raise RuntimeError('Previously excluded lane changed')
    for unit in layout['units']:
        for kind in ('source', 'header'):
            if record(ROOT / unit[kind])['sha256'] != unit[kind + 'Sha256']:
                raise RuntimeError('Author-reviewed source/layout hash mismatch')
    if record(SOURCE / 'types.h')['sha256'] != layout['typesHeaderSha256']:
        raise RuntimeError('Scalar ABI header changed')
    rows = layout['layouts']
    if {row['address'] for row in rows} != {row['address'] for row in claim['intervals']}:
        raise RuntimeError('Claim/source function inventory mismatch')
    functions = {row['address']: row for row in json.loads(census_path.read_text())['functions']}
    originals, proofs = {}, {}
    for row in rows:
        originals[row['address']], proofs[row['address']] = boundary(original, row, functions)
    clang, linker = [ROOT / ('tools/clang-21/' + name) for name in ('clang.exe', 'ld.lld.exe')]
    receipts, objects, wrong_objects, object_symbols = [], [], [], {}
    run([clang, '--version'], work / 'clang-version.txt', receipts)
    run([linker, '--version'], work / 'lld-version.txt', receipts)
    for unit in layout['units']:
        source = ROOT / unit['source']
        unit_rows = [row for row in rows if row['source'] == unit['source']]
        wrong = work / (source.stem + '.wrong.c')
        wrong.write_text(wrong_source(source.read_text(), unit_rows))
        for file, suffix, output_list in ((source, '', objects), (wrong, '.wrong', wrong_objects)):
            obj = work / (source.stem + suffix + '.o')
            run([clang, *FLAGS, '-I', SOURCE, '-c', file, '-o', obj],
                work / (source.stem + suffix + '.compile.log'), receipts)
            symbols, undefined = elf_functions(obj)
            if undefined or set(symbols) != {row['symbol'] for row in unit_rows}:
                raise RuntimeError('Object source function inventory mismatch')
            if any(symbol['relocations'] for symbol in symbols.values()):
                raise RuntimeError('Unexpected body relocation in closed leaf family')
            output_list.append(obj)
            if not suffix:
                object_symbols.update({symbol: (obj, data) for symbol, data in symbols.items()})
    elf, linked = link(objects, rows, linker, work, 'source-only-family', receipts)
    wrong_elf, wrong_linked = link(wrong_objects, rows, linker, work, 'wrong-source-family', receipts, True)
    save(work / 'build-commands.json', receipts)
    oracle = load_oracle()
    entries, case_records = [], []
    for row in rows:
        address, symbol = row['address'], row['symbol']
        raw, compiled = originals[address], linked[symbol]
        if compiled['address'] != address:
            raise RuntimeError('Real LLD symbol placement differs')
        original_addresses = closure(raw, address)
        source_addresses = closure(compiled['code'], address)
        seen_original, seen_source, traces = set(), set(), []
        predicates = {'original': {}, 'source': {}}
        cases = oracle.vectors(row)
        for index, vector in enumerate(cases):
            case = oracle.prepare(row, vector, address ^ index)
            before = oracle.execute(raw, address, row, case)
            after = oracle.execute(compiled['code'], address, row, case)
            if not before['semanticModelAgreed'] or not after['semanticModelAgreed']:
                save(work / 'failed-case.json', {'row': row, 'case': vector, 'original': before, 'source': after})
                raise RuntimeError('Original or ordinary C disagrees with semantic model: ' + hex(address))
            seen_original.update(before['ownedInstructionAddresses'])
            seen_source.update(after['ownedInstructionAddresses'])
            for side, observation in (('original', before), ('source', after)):
                for pc, outcomes in observation['conditionalPredicates'].items():
                    predicates[side].setdefault(pc, set()).update(outcomes)
            traces.append({'vector': vector, 'seed': case['seed'], 'original': before, 'source': after,
                           'declaredReads': case['readRanges'], 'declaredWrites': case['writeRanges']})
        negative = wrong_linked[symbol]
        closure(negative['code'], negative['address'])
        bad_case = oracle.negative_case(row)
        rejected = oracle.execute(negative['code'], negative['address'], row, bad_case)
        if rejected['semanticModelAgreed'] or not rejected['returnedToSentinel']:
            raise RuntimeError('Genuine wrong-source control not rejected after actual return')
        if seen_original != original_addresses or seen_source != source_addresses:
            save(work / 'uncovered.json', {'address': address, 'original': sorted(original_addresses - seen_original),
                                         'source': sorted(source_addresses - seen_source)})
            raise RuntimeError('Owned instructions remain unobserved in bounded defined domain')
        if any(outcomes != {False, True} for side in predicates.values() for outcomes in side.values()):
            save(work / 'uncovered-predicates.json', {side: {pc: sorted(outcomes) for pc, outcomes in values.items()}
                                                     for side, values in predicates.items()})
            raise RuntimeError('Owned conditional instruction predicate lacks both observed outcomes')
        obj, obj_symbol = object_symbols[symbol]
        exact_object = obj_symbol['code'] == raw and not obj_symbol['relocations']
        exact_linked = compiled['code'] == raw
        behavior = {'cases': len(cases), 'allPassed': True, 'semanticModelAgreed': True,
                    'caseDigest': digest(json.dumps(traces, sort_keys=True).encode()),
                    'originalActualReturns': len(cases), 'sourceActualReturns': len(cases),
                    'wholeArenaEffectModelAgreed': True, 'declaredFieldReadWriteSetsEnforced': True,
                    'allOwnedOriginalAndCompiledInstructionsObserved': True,
                    'conditionalInstructionPredicates': {side: {pc: sorted(outcomes) for pc, outcomes in values.items()}
                                                         for side, values in predicates.items()},
                    'allSixteenInitialNZCVCombinations': True, 'negativeActualReturns': 1,
                    'wrongSourceRejectedAfterActualReturn': True, 'universalEquivalence': False}
        entry = {'canonicalIdentity': {'build': 'owner-archive-update',
                                      'programId': claim['programId'], 'module': claim['module'],
                                      'moduleSha256': MODULE_SHA, 'address': address, 'mode': 'ARM'},
                 'source': record(ROOT / row['source']), 'headers': [record(ROOT / row['header']), record(SOURCE / 'types.h')],
                 'object': record(obj), 'symbol': symbol, 'instructionBytes': row['bytes'], 'poolBytes': 0,
                 'originalSpanSha256': digest(raw), 'bodyRelocations': obj_symbol['relocations'],
                 'objectSymbolBytes': obj_symbol['bytes'], 'objectSpanSha256': digest(obj_symbol['code']),
                 'objectSection': obj_symbol['section'], 'objectSymbolSha256': digest(obj_symbol['code']),
                 'unresolvedSymbols': [],
                 'exactObjectSpan': exact_object, 'linkedElf': record(elf), 'linkedSymbolAddress': compiled['address'],
                 'linkedSymbolBytes': compiled['bytes'], 'linkedSpanSha256': digest(compiled['code']),
                 'linkedSymbolSha256': digest(compiled['code']),
                 'exactLinkedSpan': exact_linked, 'boundary': proofs[address], 'behavior': behavior,
                 'returnType': row['returnType'], 'historicalSignatureKnown': False,
                 'abi': 'AAPCS32; observed full R0 result; typed record/argument domain; flags volatile',
                 'fullModuleIntegrated': False, 'acceptedRecoveredSource': False,
                 'semanticModel': row['semanticModel'],
                 'status': 'candidate-standalone-exact' if exact_object and exact_linked else 'behavior-only-nonmatching',
                 'negativeControl': {'sourceMutation': 'Additional ordinary-C flag XOR 0x80 before final return',
                                     'elf': record(wrong_elf), 'entry': negative['address'], 'observation': rejected}}
        entries.append(entry)
        case_records.append({'address': address, 'cases': traces, 'negativeVector': bad_case['vector'], 'negative': rejected})
        print(f'{symbol}: {len(cases)} paired actual returns, exact={exact_object and exact_linked}', flush=True)
    save(work / 'cases.json', case_records)
    input_paths = [module_path, claim_path, layout_path, census_path, Path(__file__), ROOT / 'toolscripts/native_wave005.py']
    packet = {'schemaVersion': 1, 'lane': 'wave008-native', 'status': 'candidate-requires-independent-coordinator-replay',
              'claimSha256': CLAIM_SHA, 'inputs': [record(path) for path in input_paths],
              'sources': [record(path) for path in sorted(SOURCE.iterdir()) if path.is_file()],
              'script': record(Path(__file__)), 'original': record(module_path),
              'compiler': record(clang), 'linker': record(linker), 'profile': FLAGS,
              'compilerVersion': (work / 'clang-version.txt').read_text(),
              'linkerVersion': (work / 'lld-version.txt').read_text(),
              'configuration': FLAGS, 'historicalCompilerIdentified': False,
              'runtime': {'python': sys.version, 'pythonExecutable': record(Path(sys.executable)),
                          'unicornDistribution': importlib.metadata.version('unicorn'), 'unicornBinding': unicorn.__version__,
                          'unicornNative': unicorn.uc_version(),
                          'capstoneDistribution': importlib.metadata.version('capstone'), 'capstoneNative': capstone.cs_version()},
              'commands': receipts, 'cases': record(work / 'cases.json'),
              'sourceOnlyElf': record(elf), 'wrongSourceElf': record(wrong_elf),
              'negativeSources': [record(path) for path in sorted(work.glob('*.wrong.c'))],
              'negativeObjects': [record(path) for path in wrong_objects],
              'functions': entries, 'exactFunctions': sum(entry['exactObjectSpan'] and entry['exactLinkedSpan'] for entry in entries),
              'exactInstructionBytes': sum(entry['instructionBytes'] for entry in entries if entry['exactObjectSpan'] and entry['exactLinkedSpan']),
              'behaviorOnlyFunctions': sum(not (entry['exactObjectSpan'] and entry['exactLinkedSpan']) for entry in entries),
              'originalInstructionBytesUnderTest': sum(row['bytes'] for row in rows),
              'acceptedCredit': 0, 'nativeWindowsGameBuild': False, 'nativeAndroidGameBuild': False,
              'limitations': ['Bounded leaf memory/return fixtures only; historical signatures unknown',
                              'Pointer/array extents and shift domains are admission preconditions',
                              '31 nonmatching bodies remain drafts irrespective of behavior observations',
                              'Source-only ARM leaf-family ELF has no engine runtime or platform entry point']}
    save(work / 'packet.json', packet)
    print(json.dumps({key: packet[key] for key in ('exactFunctions', 'exactInstructionBytes', 'behaviorOnlyFunctions')}), flush=True)


if __name__ == '__main__':
    main()
