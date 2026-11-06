import argparse
import collections
import hashlib
import importlib
import importlib.util
import io
import json
import subprocess
import sys
from pathlib import Path

import capstone
import unicorn
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_OP_IMM
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'src/native/wave005'
EVIDENCE = ROOT / 'evidence/lanes/wave005-native'
DEFAULT_WORK = ROOT / 'work/wave005-native/build'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CLAIM_SHA = 'b758b6e107024c7f1933455a6110efa9d13a50ca72e37160a8b3f081e9ba127f'
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2', '-ffreestanding',
         '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
         '-fomit-frame-pointer', '-fno-optimize-sibling-calls']
UNITS = {0x157ff4: 'stack.c', 0x173d40: 'stack.c', 0x173d1c: 'push.c',
         0x19e864: 'object.c', 0x19e8c4: 'chain.c'}
ROLES = {0x157ff4: 'VM visible stack count', 0x173d40: 'VM absolute stack slot pointer',
         0x173d1c: 'VM object push', 0x19e864: 'Object assignment with reference lifetime',
         0x19e8c4: 'Reference-node front insertion'}
RETURNS = {0x157ff4: 's32 count', 0x173d40: 'object pointer', 0x173d1c: 'void',
           0x19e864: 'destination object pointer', 0x19e8c4: 'void'}


def digest(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    return {'path': str(path.resolve()), 'sha256': digest(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2) + '\n', encoding='utf-8')


def run(argv, log, receipts):
    process = subprocess.run([str(x) for x in argv], capture_output=True, timeout=60)
    log.write_bytes(process.stdout + process.stderr)
    receipts.append({'argv': [str(x) for x in argv], 'exitCode': process.returncode, 'log': record(log)})
    if process.returncode:
        raise RuntimeError('Compile/link failure: ' + str(log))


def elf_functions(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf['e_machine'] != 'EM_ARM' or not elf.little_endian:
        raise RuntimeError('Unexpected ELF architecture')
    table = elf.get_section_by_name('.symtab')
    rows = {}
    for symbol in table.iter_symbols():
        if not isinstance(symbol['st_shndx'], int) or not (symbol.name.startswith('fn_') or symbol.name == 'fixture_release'):
            continue
        section = elf.get_section(symbol['st_shndx'])
        offset = symbol['st_value'] - section['sh_addr']
        relocations = []
        for rel in elf.iter_sections():
            if isinstance(rel, RelocationSection) and rel['sh_info'] == symbol['st_shndx']:
                for entry in rel.iter_relocations():
                    relocations.append({'offset': entry['r_offset'], 'type': entry['r_info_type'],
                                        'symbol': table.get_symbol(entry['r_info_sym']).name})
        rows[symbol.name] = {'address': symbol['st_value'], 'bytes': symbol['st_size'],
                            'code': section.data()[offset:offset + symbol['st_size']],
                            'section': section.name, 'sectionBytes': section['sh_size'], 'relocations': relocations}
    undefined = [symbol.name for symbol in table.iter_symbols() if symbol.name and symbol['st_shndx'] == 'SHN_UNDEF']
    return rows, undefined


def boundary_proof(original, claim, census):
    functions = {row['address']: row for row in census['functions']}
    wanted = {row['address'] for row in claim['intervals']}
    sites = collections.defaultdict(list)
    for offset in range(0, census['initializedTextGrossBytes'] - 3, 4):
        word = int.from_bytes(original[offset:offset + 4], 'little')
        if word & 0x0e000000 != 0x0a000000 or word >> 28 == 15:
            continue
        displacement = (word & 0xffffff) << 2
        if displacement & 0x2000000:
            displacement -= 0x4000000
        target = 0x100000 + offset + 8 + displacement
        if target in wanted:
            sites[target].append(0x100000 + offset)
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    result = {}
    for row in claim['intervals']:
        address, size = row['address'], row['bytes']
        raw = original[address - 0x100000:address - 0x100000 + size]
        function = functions[address]
        if digest(raw) != row['sha256'] or function['ranges'] != row['ghidraRanges'] or function['mode'] != 'ARM':
            raise RuntimeError('Canonical complete body boundary changed')
        instructions = list(engine.disasm(raw, address))
        if sum(x.size for x in instructions) != size or any(x.mnemonic.startswith('ldr') and '[pc' in x.op_str for x in instructions):
            raise RuntimeError('Decode/pool closure requires further review')
        incoming = [caller for caller in functions.values() if address in caller['calledFunctionAddresses']]
        caller_proof = None
        for caller in incoming:
            for site in sites[address]:
                if caller['mode'] != 'ARM' or not any(r['start'] <= site and site + 4 <= r['endExclusive'] for r in caller['ranges']):
                    continue
                insn = next(engine.disasm(original[site - 0x100000:site - 0x100000 + 4], site, count=1), None)
                if insn and insn.id in (ARM_INS_B, ARM_INS_BL) and insn.operands[0].type == ARM_OP_IMM and insn.operands[0].imm == address:
                    caller_proof = {'function': caller['address'], 'callsite': site,
                                    'callsiteSha256': digest(original[site - 0x100000:site - 0x100000 + 4])}
                    break
            if caller_proof:
                break
        if not caller_proof:
            raise RuntimeError('No qualified actual direct caller')
        direct = sorted({i.operands[0].imm & ~1 for i in instructions if i.mnemonic in ('bl', 'b')
                         and i.operands and i.operands[0].type == ARM_OP_IMM and not address <= i.operands[0].imm < address + size})
        if set(direct) - wanted:
            raise RuntimeError('Unclosed direct helper transfer')
        result[address] = {'ranges': function['ranges'], 'caller': caller_proof, 'poolBytes': 0,
                           'directDependencies': direct, 'dynamicCallback': address == 0x19e864,
                           'callbackContract': 'Caller-provided typed release callback when old reference reaches zero'}
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=DEFAULT_WORK)
    args = parser.parse_args()
    work = args.output.resolve()
    if not work.is_relative_to(ROOT / 'work/wave005-native'):
        raise RuntimeError('Output escapes lane')
    work.mkdir(parents=True, exist_ok=True)
    original_path = ROOT / 'generated/update-content0/code.bin'
    original = original_path.read_bytes()
    claim_path = EVIDENCE / 'claim.json'
    census_path = ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json'
    claim = json.loads(claim_path.read_text())
    census = json.loads(census_path.read_text())
    if digest(original) != MODULE_SHA or record(claim_path)['sha256'] != CLAIM_SHA or record(census_path)['sha256'] != claim['ghidraFunctionsSha256']:
        raise RuntimeError('Frozen module/claim/census mismatch')
    proof = boundary_proof(original, claim, census)
    claim_rows = {row['address']: row for row in claim['intervals']}
    if set(UNITS) != set(claim_rows):
        raise RuntimeError('Source/claim inventory mismatch')
    oracle_spec = importlib.util.spec_from_file_location('wave005_oracle_runtime', SOURCE / 'oracle.py')
    oracle = importlib.util.module_from_spec(oracle_spec)
    oracle_spec.loader.exec_module(oracle)
    source_pins = [record(path) for path in sorted(SOURCE.iterdir()) if path.is_file()]
    analysis_pins = [record(claim_path), record(census_path)]
    clang, linker = [ROOT / ('tools/clang-21/' + name) for name in ('clang.exe', 'ld.lld.exe')]
    receipts = []
    objects = {}
    wrong_objects = {}
    symbols = {}
    mutations = {'stack.c': [('vm->top - vm->base;', 'vm->top - vm->base + 1;'), ('vm->stack + index;', 'vm->stack + index + 1;')],
                 'push.c': [('vm->top++;', 'vm->top += 2;')],
                 'object.c': [('incoming.reference->references++;', 'incoming.reference->references += 2;')],
                 'chain.c': [('node->previous = 0;', 'node->previous = *head;')]}
    for unit in sorted(set(UNITS.values())):
        source = SOURCE / unit
        obj = work / (source.stem + '.o')
        run([clang, *FLAGS, '-c', source, '-o', obj], work / (source.stem + '.log'), receipts)
        rows, undefined = elf_functions(obj)
        if set(undefined) - {f'fn_{address:08x}' for address in UNITS}:
            raise RuntimeError('Object has undeclared external dependency')
        objects[unit] = obj
        symbols.update({name: dict(row, path=obj, source=source) for name, row in rows.items()})
        wrong = source.read_text()
        for before, after in mutations[unit]:
            if before not in wrong:
                raise RuntimeError('No ordinary wrong-source mutation')
            wrong = wrong.replace(before, after)
        negative = work / (source.stem + '-wrong.c')
        negative.write_text(wrong)
        wrong_obj = work / (source.stem + '-wrong.o')
        run([clang, *FLAGS, '-I', SOURCE, '-c', negative, '-o', wrong_obj], work / (source.stem + '-wrong.log'), receipts)
        wrong_objects[unit] = wrong_obj
    if set(symbols) != {f'fn_{address:08x}' for address in UNITS}:
        raise RuntimeError('Object function inventory incomplete')
    def link(selected, name, negative=False):
        script = work / (name + '.ld')
        placements = {address: 0x6000000 + index * 4096 if negative else address for index, address in enumerate(sorted(UNITS))}
        lines = ['SECTIONS {'] + [f' .text.fn_{address:08x} {hex(target)} : {{ *(.text.fn_{address:08x}) }}' for address, target in placements.items()]
        lines += [' /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) }', '}']
        script.write_text('\n'.join(lines) + '\n')
        elf = work / (name + '.elf')
        run([linker, '-m', 'armelf', '--no-undefined', '--build-id=none', '-T', script, '-o', elf, *selected.values()], work / (name + '.log'), receipts)
        rows, unresolved = elf_functions(elf)
        if unresolved or set(rows) != set(symbols):
            raise RuntimeError('Genuine linked source closure failed')
        return elf, rows, placements
    linked_path, linked, placements = link(objects, 'source-linked')
    negative_links = {}
    for unit in objects:
        negative_links[unit] = link(dict(objects, **{unit: wrong_objects[unit]}), unit[:-2] + '-wrong-linked', True)
    fixture_obj = work / 'fixture.o'
    fixture_elf = work / 'fixture.elf'
    run([clang, *FLAGS, '-c', SOURCE / 'fixture.c', '-o', fixture_obj], work / 'fixture.log', receipts)
    run([linker, '-m', 'armelf', '--no-undefined', '--build-id=none', '-Ttext=0x7000000', '--entry=fixture_release', '-o', fixture_elf, fixture_obj], work / 'fixture-link.log', receipts)
    fixture_symbols, unresolved = elf_functions(fixture_elf)
    if unresolved or set(fixture_symbols) != {'fixture_release'}:
        raise RuntimeError('Fixture callback closure failed')
    if fixture_symbols['fixture_release']['address'] != oracle.CALLBACK or fixture_symbols['fixture_release']['relocations']:
        raise RuntimeError('Fixture callback placement/relocation mismatch')
    callback = fixture_symbols['fixture_release']['code']
    original_images = {address: original[address - 0x100000:address - 0x100000 + row['bytes']] for address, row in claim_rows.items()}
    source_images = {row['address']: row['code'] for row in linked.values()}
    functions = []
    for address, unit in sorted(UNITS.items()):
        symbol = f'fn_{address:08x}'
        raw = original_images[address]
        object_row = symbols[symbol]
        linked_row = linked[symbol]
        if linked_row['address'] != address or linked_row['relocations']:
            raise RuntimeError('Linked function identity/relocation mismatch')
        exact_object = object_row['code'] == raw and object_row['bytes'] == len(raw) and not object_row['relocations']
        exact_linked = linked_row['code'] == raw and linked_row['bytes'] == len(raw)
        observations = []
        original_visited = set()
        source_visited = set()
        inputs = oracle.cases(address)
        for case in inputs:
            actual = oracle.execute(original_images, callback, case)
            compiled = oracle.execute(source_images, callback, case)
            if not actual['semanticModelAgreed'] or not compiled['semanticModelAgreed']:
                raise RuntimeError('Original/source/independent state model mismatch at ' + hex(address))
            original_visited.update(actual['visited'])
            source_visited.update(compiled['visited'])
            observations.append({'definition': case['definition'], 'original': actual, 'source': compiled})
        owned = set(range(address, address + len(raw), 4))
        if not owned <= original_visited:
            raise RuntimeError('Original owned instruction path not fully executed')
        own_source = set(range(address, address + linked_row['bytes'], 4))
        if not own_source <= source_visited:
            raise RuntimeError('Compiled owned instruction path not fully executed')
        negative_path, negative_rows, negative_placements = negative_links[unit]
        negative_images = {row['address']: row['code'] for row in negative_rows.values()}
        negative_case = inputs[1] if address in (0x19e864, 0x19e8c4) else inputs[0]
        negative = oracle.execute(negative_images, callback, negative_case, negative_placements[address])
        if not negative['returnedToSentinel'] or negative['semanticModelAgreed']:
            raise RuntimeError('Wrong source not semantically rejected after actual return')
        behavior = {'cases': len(inputs), 'allPassed': True, 'originalActualReturns': len(inputs),
            'sourceActualReturns': len(inputs), 'semanticModelAgreed': True,
            'caseDigest': digest(json.dumps(observations, sort_keys=True).encode()),
            'ownedInstructionAddresses': sorted(owned), 'sourceOwnedInstructionAddresses': sorted(own_source),
            'calleeSavedAndSpPreserved': True, 'returnContract': RETURNS[address],
            'voidR0Compared': False, 'deadStackFrameBytesIgnored': 128,
            'wrongSourceControl': {'returnedToSentinel': True, 'semanticRejection': True,
                                   'negativeLinkedElf': record(negative_path), 'observation': negative}}
        functions.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
            'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA, 'address': address, 'mode': 'ARM'},
            'source': record(object_row['source']), 'header': record(SOURCE / 'vm_views.h'), 'object': record(object_row['path']),
            'symbol': symbol, 'objectSection': object_row['section'], 'objectSymbolBytes': object_row['bytes'],
            'objectSymbolSha256': digest(object_row['code']), 'originalSpanSha256': digest(raw),
            'instructionBytes': len(raw), 'poolBytes': 0, 'bodyRelocations': object_row['relocations'],
            'unresolvedSymbols': [], 'linkedElf': record(linked_path), 'linkedSymbolAddress': address,
            'linkedSymbolBytes': linked_row['bytes'], 'linkedSymbolSha256': digest(linked_row['code']),
            'exactObjectSpan': exact_object, 'exactLinkedSpan': exact_linked, 'behavior': behavior,
            'semanticRole': ROLES[address], 'abi': RETURNS[address], 'boundaryEvidence': proof[address],
            'status': 'candidate-standalone-exact' if exact_linked else 'behavior-only-nonmatching',
            'fullModuleIntegrated': False, 'acceptedRecoveredSource': False})
        print(json.dumps({'function': hex(address), 'exactObject': exact_object, 'exactLinked': exact_linked, 'cases': len(inputs)}), flush=True)
    if not all(row['exactLinkedSpan'] for row in functions if row['canonicalIdentity']['address'] in (0x157ff4, 0x173d40)):
        raise RuntimeError('Measured matching stack helper profile regressed')
    for pin in source_pins + analysis_pins:
        if record(Path(pin['path'])) != pin:
            raise RuntimeError('Source or analysis input changed during validation')
    if digest(original_path.read_bytes()) != MODULE_SHA:
        raise RuntimeError('Original module changed')
    native_library = Path(importlib.import_module('unicorn.unicorn_py3.unicorn').uclib._name)
    packet = {'schemaVersion': 1, 'lane': 'wave005-native', 'status': 'ready-for-coordinator-review',
        'script': record(Path(__file__)), 'original': record(original_path), 'claim': record(claim_path),
        'boundaryCensus': record(census_path), 'sourceInputs': source_pins,
        'compiler': record(clang), 'linker': record(linker), 'configuration': FLAGS,
        'historicalCompilerIdentified': False, 'functions': functions, 'receipts': receipts,
        'unicorn': {'version': unicorn.__version__, 'cpuModel': 'ARM1176', 'nativeLibrary': record(native_library)},
        'linkedSourceElf': record(linked_path), 'callbackFixtureElf': record(fixture_elf),
        'callbackContract': 'Caller-provided compiled release method; records calls and observed publication/refcount state; no game destructor/lifetime claim',
        'standaloneExactFunctionCount': sum(row['exactLinkedSpan'] for row in functions),
        'standaloneExactInstructionBytes': sum(row['instructionBytes'] for row in functions if row['exactLinkedSpan']),
        'originalActualReturns': sum(row['behavior']['cases'] for row in functions),
        'sourceActualReturns': sum(row['behavior']['cases'] for row in functions),
        'compiledWrongSourceActualReturns': len(functions), 'compiledWrongSourceSemanticRejections': len(functions),
        'acceptedRecoveredSourceFunctions': 0, 'sourceOnlyComponentClosure': True,
        'limitations': ['Callback is a declared caller-provided fixture, not an original game destructor',
                       'Tests cover valid VM/object/list states and explicit alias scenarios, not all possible graphs',
                       'Void functions do not compare incidental r0; AAPCS volatile flags/LR are not invented outputs',
                       'No full-game/VM admission, Windows execution or Android execution proof',
                       'Only exact linked functions may receive matching credit after coordinator acceptance'],
        'reproductionArgv': [sys.executable, str(Path(__file__).resolve()), '--output', str(work)]}
    save(work / 'packet.json', packet)
    if work == DEFAULT_WORK:
        save(EVIDENCE / 'packet.json', packet)
    print(json.dumps({'exactFunctions': packet['standaloneExactFunctionCount'], 'exactBytes': packet['standaloneExactInstructionBytes'],
                      'behaviorFunctions': len(functions), 'originalActualReturns': packet['originalActualReturns']}))


if __name__ == '__main__':
    main()
