import argparse
import collections
import hashlib
import importlib
import io
import json
import random
import re
import struct
import subprocess
import sys
from pathlib import Path

import capstone
import unicorn
from capstone.arm import ARM_CC_AL, ARM_INS_B, ARM_INS_BL, ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG, ARM_REG_LR, ARM_REG_R0
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from unicorn.arm_const import *


ROOT = Path(__file__).resolve().parents[1]
EVIDENCE = ROOT / 'evidence/lanes/wave004-native'
DEFAULT_WORK = ROOT / 'work/wave004-native/build'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CLAIM_SHA = '9e0544095d4b5d9dddbb90e8be60a2ab14751de4a76c1c1526932c862ecefa09'
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2', '-ffreestanding',
         '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables']
REGS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4,
        UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9,
        UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    return {'path': str(path.resolve()), 'sha256': digest(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def run(argv, log, receipts):
    result = subprocess.run([str(x) for x in argv], capture_output=True, timeout=60)
    log.write_bytes(result.stdout + result.stderr)
    receipts.append({'argv': [str(x) for x in argv], 'exitCode': result.returncode, 'log': record(log)})
    if result.returncode:
        raise RuntimeError('Compiler/linker failure: ' + str(log))


def inspect_elf(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf['e_machine'] != 'EM_ARM' or not elf.little_endian:
        raise RuntimeError('Unexpected ELF architecture')
    symbols = elf.get_section_by_name('.symtab')
    result = {}
    for symbol in symbols.iter_symbols():
        if not symbol.name.startswith('fn_') or not isinstance(symbol['st_shndx'], int):
            continue
        section = elf.get_section(symbol['st_shndx'])
        offset = symbol['st_value'] - section['sh_addr']
        relocations = []
        for rel in elf.iter_sections():
            if isinstance(rel, RelocationSection) and rel['sh_info'] == symbol['st_shndx']:
                relocations += [{'offset': row['r_offset'], 'type': row['r_info_type']} for row in rel.iter_relocations()]
        if symbol.name in result:
            raise RuntimeError('Duplicate function symbol')
        result[symbol.name] = {'address': symbol['st_value'], 'bytes': symbol['st_size'],
            'section': section.name, 'sectionBytes': section['sh_size'], 'relocations': relocations,
            'code': section.data()[offset:offset + symbol['st_size']]}
    if any(row.name and row['st_shndx'] == 'SHN_UNDEF' for row in symbols.iter_symbols()):
        raise RuntimeError('Undeclared function dependency')
    return result


def boundaries(claim, original, census, independent):
    if independent['claimSha256'] != CLAIM_SHA or independent['codeSha256'] != MODULE_SHA:
        raise RuntimeError('Independent boundary input mismatch')
    reviewed = {row['address']: row for row in independent['functions']}
    if set(reviewed) != {row['address'] for row in claim['intervals']}:
        raise RuntimeError('Independent boundary inventory incomplete')
    callers = {row['address']: row for row in census['functions']}
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    result = {}
    for row in claim['intervals']:
        address = row['address']
        raw = original[address - 0x100000:address - 0x100000 + 8]
        body = list(engine.disasm(raw, address))
        if digest(raw) != row['sha256'] or len(body) != 2 or sum(x.size for x in body) != 8:
            raise RuntimeError('Complete original body differs')
        load, ret = body
        operands = load.operands
        if load.mnemonic != row['load'] or load.cc != ARM_CC_AL or load.writeback or len(operands) != 2:
            raise RuntimeError('Getter load interpretation mismatch')
        if operands[0].type != ARM_OP_REG or operands[0].reg != ARM_REG_R0 or operands[1].type != ARM_OP_MEM:
            raise RuntimeError('Getter register interpretation mismatch')
        memory = operands[1].mem
        if memory.base != ARM_REG_R0 or memory.index or memory.disp != row['fieldOffset']:
            raise RuntimeError('Getter structural field mismatch')
        if ret.mnemonic != 'bx' or ret.cc != ARM_CC_AL or ret.operands[0].reg != ARM_REG_LR:
            raise RuntimeError('Missing actual unconditional return')
        proof = reviewed[address]
        if proof['mode'] != 'ARM' or proof['ranges'] != [{'start': address, 'endExclusive': address + 8, 'bytes': 8}]:
            raise RuntimeError('Fresh Ghidra body boundary mismatch')
        site = proof['callsite']
        caller = callers[proof['callerFunction']]
        if caller['mode'] != 'ARM' or not any(x['start'] <= site and site + 4 <= x['endExclusive'] for x in caller['ranges']):
            raise RuntimeError('Caller instruction outside independent caller extent')
        call = list(engine.disasm(original[site - 0x100000:site - 0x100000 + 4], site))
        if len(call) != 1 or call[0].id not in (ARM_INS_B, ARM_INS_BL) or call[0].operands[0].type != ARM_OP_IMM or call[0].operands[0].imm != address:
            raise RuntimeError('Actual original caller transfer disagrees')
        result[address] = dict(proof, callsiteSha256=digest(original[site - 0x100000:site - 0x100000 + 4]),
                               poolBytes=0, remaining='Indirect entries and original historical class semantics not globally proved')
    return result


def execute(code, address, layout, value, seed, geometry, wrong=False, invalid=False):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    cpu.mem_map(address & ~4095, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(address, code)
    sentinel = 0x5000000
    cpu.mem_map(sentinel, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(0x2000000, 8192)
    cpu.mem_map(0x3000000, 8192, unicorn.UC_PROT_READ)
    rng = random.Random(seed)
    memory = bytearray(rng.randbytes(8192))
    stack = rng.randbytes(8192)
    offset = geometry + layout['fieldOffset']
    width = layout['width']
    memory[offset:offset + width] = (value & ((1 << (8 * width)) - 1)).to_bytes(width, 'little')
    wrong_offset = geometry + layout['wrongFieldOffset']
    memory[wrong_offset:wrong_offset + width] = (90).to_bytes(width, 'little')
    model = int.from_bytes(memory[offset:offset + width], 'little', signed=layout['signed']) & 0xffffffff
    cpu.mem_write(0x3000000, bytes(memory))
    cpu.mem_write(0x2000000, stack)
    initial = [rng.getrandbits(32) for _ in REGS]
    pointer = 0x3000000 + geometry
    initial[0] = pointer if not invalid else 0
    initial[-2:] = [0x2001000, sentinel]
    flags = (rng.getrandbits(4) << 28) | 0x10
    cpu.reg_write(UC_ARM_REG_CPSR, flags)
    for register, data in zip(REGS, initial):
        cpu.reg_write(register, data)
    reads, writes, visited = [], [], []
    def instruction(uc, pc, size, unused):
        if not address <= pc < address + len(code):
            raise RuntimeError('Unexpected instruction address')
        visited.append(pc)
    cpu.hook_add(unicorn.UC_HOOK_CODE, instruction)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, a, size, data, user: reads.append([a, size]))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, a, size, data, user: writes.append([a, size]))
    cpu.emu_start(address, sentinel, count=16, timeout=100000)
    if cpu.reg_read(UC_ARM_REG_PC) != sentinel:
        raise RuntimeError('No actual return within execution bounds')
    final = [cpu.reg_read(register) for register in REGS]
    if final[4:12] != initial[4:12] or final[-2:] != initial[-2:] or cpu.reg_read(UC_ARM_REG_CPSR) != flags:
        raise RuntimeError('Callee-save/SP/LR/flags violation')
    wanted_offset = layout['wrongFieldOffset'] if wrong else layout['fieldOffset']
    if reads != [[pointer + wanted_offset, width]] or writes:
        raise RuntimeError('Read-set/side-effect mismatch after return')
    if cpu.mem_read(0x3000000, 8192) != memory or cpu.mem_read(0x2000000, 8192) != stack:
        raise RuntimeError('Memory snapshot changed')
    return {'result': final[0], 'model': model, 'registers': final, 'cpsr': flags,
            'reads': reads, 'visited': visited, 'returnedToSentinel': True}


def prove(layout, native, compiled, bad, bad_address):
    rng = random.Random(layout['address'])
    edges = [0, 1, 0x7f, 0x80, 0xff, 0x7fff, 0x8000, 0xffff, 0x7fffffff, 0x80000000, 0xffffffff, 0xa55a91c3]
    values = edges + [rng.getrandbits(32) for _ in range(16)]
    cases, visited = [], set()
    for index, (value, geometry) in enumerate((value, geometry) for value in values for geometry in (0, 0x1fc)):
        original = execute(native, layout['address'], layout, value, index + layout['address'], geometry)
        source = execute(compiled, layout['address'], layout, value, index + layout['address'], geometry)
        if original != source or original['result'] != original['model']:
            raise RuntimeError('Original/C/semantic-model mismatch')
        visited.update(original['visited'])
        cases.append({'value': value, 'geometry': geometry, 'result': original['result'],
                      'observationSha256': digest(json.dumps(original, sort_keys=True).encode())})
    if visited != {layout['address'], layout['address'] + 4}:
        raise RuntimeError('Incomplete owned-instruction execution')
    wrong = execute(bad, bad_address, layout, 53, 0x335004, 0, wrong=True)
    if wrong['result'] == wrong['model']:
        raise RuntimeError('Compiled wrong-field source escaped semantic rejection')
    invalid = []
    for name, code in [('original', native), ('source', compiled)]:
        try:
            execute(code, layout['address'], layout, 0, 1, 0, invalid=True)
        except unicorn.UcError as error:
            if error.errno != unicorn.UC_ERR_READ_UNMAPPED:
                raise
            invalid.append({'artifact': name, 'error': error.errno, 'actualReturns': 0})
        else:
            raise RuntimeError('Invalid root pointer returned')
    return {'address': layout['address'], 'cases': len(cases), 'allPassed': True,
            'originalActualReturns': len(cases), 'sourceActualReturns': len(cases),
            'caseDigest': digest(json.dumps(cases, sort_keys=True).encode()),
            'ownedInstructionAddresses': sorted(visited), 'calleeSavedSpLrPreserved': True,
            'semanticModelAgreed': True, 'writes': [], 'readContract': {'offset': layout['fieldOffset'], 'width': layout['width']},
            'wrongSourceControl': {'kind': 'genuinely-compiled-wrong-field', 'returnedToSentinel': True,
                'actualReturn': wrong['result'], 'expectedReturn': wrong['model'], 'semanticRejection': True},
            'invalidPointerControls': invalid}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=DEFAULT_WORK)
    args = parser.parse_args()
    work = args.output.resolve()
    if not work.is_relative_to(ROOT / 'work/wave004-native'):
        raise RuntimeError('Output path escapes lane')
    work.mkdir(parents=True, exist_ok=True)
    original_path = ROOT / 'generated/update-content0/code.bin'
    original = original_path.read_bytes()
    claim_path = EVIDENCE / 'claim.json'
    spec_path = EVIDENCE / 'semantic-layouts.json'
    boundary_path = EVIDENCE / 'boundary.json'
    census_path = ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json'
    if digest(original) != MODULE_SHA or record(claim_path)['sha256'] != CLAIM_SHA:
        raise RuntimeError('Canonical module/claim changed')
    claim, spec, independent, census = [json.loads(path.read_text()) for path in (claim_path, spec_path, boundary_path, census_path)]
    if spec['claimSha256'] != CLAIM_SHA or record(census_path)['sha256'] != claim['ghidraFunctionsSha256']:
        raise RuntimeError('Structural source/caller identity changed')
    analysis_pins = [record(path) for path in (claim_path, spec_path, boundary_path, census_path)]
    proof = boundaries(claim, original, census, independent)
    layouts = {row['address']: row for row in spec['layouts']}
    if set(layouts) != set(proof):
        raise RuntimeError('Source/boundary inventory incomplete')
    source = ROOT / spec['units'][0]['source']
    header = ROOT / spec['units'][0]['header']
    types = source.parent / 'types.h'
    if record(source)['sha256'] != spec['units'][0]['sourceSha256'] or record(header)['sha256'] != spec['units'][0]['headerSha256'] or record(types)['sha256'] != spec['typesHeaderSha256']:
        raise RuntimeError('Frozen ordinary source/header changed')
    source_pins = [record(path) for path in (source, header, types, source.parent / 'BoundarySurvey.java')]
    clang, linker = [ROOT / ('tools/clang-21/' + name) for name in ('clang.exe', 'ld.lld.exe')]
    receipts = []
    obj = work / 'views.o'
    run([clang, *FLAGS, '-c', source, '-o', obj], work / 'compile.log', receipts)
    objects = inspect_elf(obj)
    if set(objects) != {row['symbol'] for row in layouts.values()}:
        raise RuntimeError('Object function inventory incomplete')
    for address, row in layouts.items():
        item = objects[row['symbol']]
        raw = original[address - 0x100000:address - 0x100000 + 8]
        if item['code'] != raw or item['bytes'] != 8 or item['sectionBytes'] != 8 or item['relocations']:
            raise RuntimeError('Complete object mismatch: ' + row['symbol'])
    wrong_header = work / 'views-wrong.h'
    wrong_lines = ['#include "types.h"']
    for view in {row['view']: row for row in layouts.values()}.values():
        wrong_lines.append('typedef struct {')
        if view['fieldOffset']:
            wrong_lines.append(f'    u8 unknown_0000[{view["fieldOffset"]}];')
        wrong_lines += [f'    {view["fieldType"]} {view["field"]};', f'    u8 gap[{16 - view["width"]}];',
                        f'    {view["fieldType"]} wrong_field;', f'}} {view["view"]};']
    wrong_header.write_text('\n'.join(wrong_lines) + '\n')
    wrong_source = work / 'views-wrong.c'
    wrong_source.write_text(re.sub(r'record->field_[0-9a-f]+', 'record->wrong_field', source.read_text()).replace('"views.h"', '"views-wrong.h"'))
    wrong_obj = work / 'views-wrong.o'
    run([clang, *FLAGS, '-I', source.parent, '-c', wrong_source, '-o', wrong_obj], work / 'wrong-compile.log', receipts)
    def link(object_path, name, negative=False):
        script = work / (name + '.ld')
        lines = ['SECTIONS {']
        for index, (address, row) in enumerate(sorted(layouts.items())):
            target = 0x6000000 + index * 0x40 if negative else address
            lines.append(f' .text.{row["symbol"]} {hex(target)} : {{ *(.text.{row["symbol"]}) }}')
        lines += [' /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) }', '}']
        script.write_text('\n'.join(lines) + '\n')
        elf = work / (name + '.elf')
        run([linker, '-m', 'armelf', '--no-undefined', '--build-id=none', '-T', script, '-o', elf, object_path], work / (name + '.log'), receipts)
        return elf, inspect_elf(elf)
    linked_path, linked = link(obj, 'source-linked')
    wrong_path, wrong = link(wrong_obj, 'wrong-linked', True)
    if set(linked) != set(objects) or set(wrong) != set(objects):
        raise RuntimeError('Linked function inventory incomplete')
    rows = []
    for number, (address, layout) in enumerate(sorted(layouts.items()), 1):
        raw = original[address - 0x100000:address - 0x100000 + 8]
        body = linked[layout['symbol']]
        if body['address'] != address or body['bytes'] != 8 or body['code'] != raw or body['relocations']:
            raise RuntimeError('Genuine linked complete span mismatch')
        bad = wrong[layout['symbol']]
        behavior = prove(layout, raw, body['code'], bad['code'], bad['address'])
        rows.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
            'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA, 'address': address, 'mode': 'ARM'},
            'source': record(source), 'header': record(header), 'headers': [record(header), record(types)], 'object': record(obj),
            'symbol': layout['symbol'], 'objectSection': objects[layout['symbol']]['section'], 'objectSymbolBytes': 8,
            'objectSymbolSha256': digest(raw), 'originalSpanSha256': digest(raw), 'instructionBytes': 8, 'poolBytes': 0,
            'bodyRelocations': [], 'unresolvedSymbols': [], 'linkedElf': record(linked_path), 'linkedSymbolAddress': address,
            'linkedSymbolBytes': 8, 'linkedSymbolSha256': digest(raw), 'exactObjectSpan': True, 'exactLinkedSpan': True,
            'semanticLayout': layout, 'boundaryEvidence': proof[address], 'behavior': behavior,
            'abi': 'AAPCS32; aligned valid partial-record pointer r0; typed field promoted to u32/s32 return',
            'status': 'candidate-standalone-exact', 'fullModuleIntegrated': False, 'acceptedRecoveredSource': False})
        if number % 8 == 0 or number == len(layouts):
            print(json.dumps({'functionsVerified': number, 'total': len(layouts)}), flush=True)
    for pin in source_pins + analysis_pins:
        if record(Path(pin['path'])) != pin:
            raise RuntimeError('Frozen source/analysis input changed during validation')
    if digest(original_path.read_bytes()) != MODULE_SHA:
        raise RuntimeError('Original executable changed')
    library = Path(importlib.import_module('unicorn.unicorn_py3.unicorn').uclib._name)
    packet = {'schemaVersion': 1, 'lane': 'wave004-native', 'status': 'ready-for-coordinator-review',
        'script': record(Path(__file__)), 'original': record(original_path), 'claim': record(claim_path),
        'semanticLayouts': record(spec_path), 'boundaryCensus': record(census_path), 'independentBoundaries': record(boundary_path),
        'sourceInputs': source_pins, 'compiler': record(clang), 'linker': record(linker), 'configuration': FLAGS,
        'historicalCompilerIdentified': False, 'functions': rows, 'receipts': receipts,
        'unicorn': {'version': unicorn.__version__, 'cpuModel': 'ARM1176', 'nativeLibrary': record(library)},
        'linkedSourceElf': record(linked_path), 'wrongLinkedElf': record(wrong_path),
        'standaloneExactFunctionCount': len(rows), 'standaloneExactInstructionBytes': 8 * len(rows),
        'originalActualReturns': sum(row['behavior']['originalActualReturns'] for row in rows),
        'sourceActualReturns': sum(row['behavior']['sourceActualReturns'] for row in rows),
        'compiledWrongSourceActualReturns': len(rows), 'compiledWrongSourceSemanticRejections': len(rows),
        'acceptedRecoveredSourceFunctions': 0, 'instructionBudget': 16, 'executionTimeoutMicroseconds': 100000,
        'limitations': ['Fresh Ghidra entry/body/caller proof does not close all indirect aliases',
                       'Partial field views do not recover full class names or object lifetime',
                       'Bounded aligned memory fixtures are not universal equivalence',
                       'Coordinator owns module integration, independent replay and accepted coverage'],
        'reproductionArgv': [sys.executable, str(Path(__file__).resolve()), '--output', str(work)]}
    save(work / 'packet.json', packet)
    if work == DEFAULT_WORK:
        save(EVIDENCE / 'packet.json', packet)
    print(json.dumps({'exactFunctions': len(rows), 'exactBytes': len(rows) * 8,
                      'actualOriginalReturns': packet['originalActualReturns'], 'wrongSemanticRejections': len(rows)}))


if __name__ == '__main__':
    main()
