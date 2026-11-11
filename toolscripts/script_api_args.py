"""Report every argument a script binding takes, read from its own bytes.

`script_api_shapes.py` says which bindings are the same shape. This tool reads
the facts a reconstruction needs from the original image, per binding:

  * the shared name address - the pool word in the binding's error path that
    points at the binding's own name string;
  * the source file and the failed-operation text - the two literals the error
    path builds with `add r0/r1, pc, #imm`;
  * the source line - the literal the error path loads into r3, either a `mov`
    immediate or a pool word;
  * the argument helper, the index it reads, and the narrowing the binding
    performs before the engine call (`and #0xff`, `sxtb`, `sxth`, `uxth`);
  * the engine service it calls and the push helper it uses, including the
    engine-specific push helpers that are not `sq_push*`;
  * whether it returns 0, 1 or the result of `sq_suspendvm`.

Nothing here claims source. It reports what the original does, so a batch of
bindings can be described and generated from measurement instead of guessed.

Usage:
    python toolscripts/script_api_args.py [--json] [--constants] [binding ...]
"""
import argparse
import json
import struct
import sys
from pathlib import Path

import capstone

sys.path.insert(0, str(Path(__file__).resolve().parent))
import exheader
import script_api_shapes as shapes

ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / 'generated/update-content0/code.bin'
HEADER = ROOT / 'generated/update-content0/exheader.bin'
BINDINGS = ROOT / 'config/script-natives.json'

HELPERS = {0x157f58: ('get', 'integer'), 0x157fb0: ('get', 'string'),
           0x157eb4: ('get', 'bool'), 0x157f00: ('get', 'float'),
           0x1580cc: ('push', 'integer'), 0x158004: ('push', 'bool'),
           0x158070: ('push', 'float'), 0x158128: ('push', 'string'),
           0x1581d0: ('throw', None), 0x148918: ('fail', None),
           0x1638b0: ('suspend', None)}
MASKS = {'and': 'u8', 'sxtb': 's8', 'sxth': 's16', 'uxth': 'u16'}


def string_at(image, origin, address, text):
    """The NUL-terminated ASCII string at an image address, if it holds one."""
    if not (text['address'] <= address < text['address'] + text['initializedBytes']):
        return None
    raw = image[origin + address:origin + address + 64].split(b'\x00')[0]
    return raw.decode('ascii') if raw and all(32 <= byte < 127 for byte in raw) else None


def facts(image, origin, text, disassembler, address, size, identifier):
    """The reconstruction facts of one binding, read from its instruction stream."""
    result = {'identifier': identifier, 'address': address, 'size': size, 'file': None,
              'operation': None, 'nameAddress': None, 'line': None, 'get': None,
              'narrow': None, 'engine': None, 'push': None, 'pushHelper': None,
              'reads': None, 'suspend': False, 'virtual': False, 'returns': None}
    instructions = list(disassembler.disasm(image[origin + address:origin + address + size],
                                            address))
    calls = []
    for index, insn in enumerate(instructions):
        if insn.mnemonic == 'ldr' and '[pc,' in insn.op_str:
            target = insn.address + 8 + insn.operands[1].mem.disp
            value = struct.unpack_from('<I', image, origin + target)[0]
            register = insn.reg_name(insn.operands[0].reg)
            if register == 'r2' and value > 0x00700000:
                result['nameAddress'] = value
            elif register == 'r3':
                result['line'] = value
        elif insn.mnemonic == 'add' and '[pc,' not in insn.op_str and 'pc' in insn.op_str:
            value = string_at(image, origin, insn.address + 8 + insn.operands[2].imm, text)
            if value is None:
                continue
            register = insn.reg_name(insn.operands[0].reg)
            if register == 'r0':
                result['operation'] = value
            elif register == 'r1':
                result['file'] = value
        elif insn.mnemonic == 'mov' and insn.op_str.startswith('r3, #'):
            result['line'] = int(insn.op_str.split('#')[1], 16)
        elif insn.mnemonic == 'mov' and insn.op_str.startswith('r0, #'):
            result['returns'] = int(insn.op_str.split('#')[1], 16)
        elif (insn.mnemonic == 'and' and insn.operands[2].type == capstone.arm.ARM_OP_IMM
              and insn.operands[2].imm == 0xff):
            result['narrow'] = MASKS['and']
        elif insn.mnemonic in ('sxtb', 'sxth', 'uxth'):
            result['narrow'] = MASKS[insn.mnemonic]
        elif insn.mnemonic == 'blx':
            result['virtual'] = True
        elif insn.mnemonic == 'bl' and insn.op_str.startswith('#'):
            calls.append((index, int(insn.op_str[1:], 16)))
    for index, target in calls:
        kind, value = HELPERS.get(target, ('engine', None))
        if kind == 'get':
            result['get'] = value
        elif kind == 'push':
            result['push'] = value
        elif kind == 'suspend':
            result['suspend'] = True
            result['returns'] = 'suspend'
        elif kind == 'engine':
            previous = instructions[index - 1]
            pushes = previous.mnemonic == 'mov' and previous.op_str == 'r0, r4'
            if pushes:
                result['push'] = 'engine helper'
                result['pushHelper'] = target
            elif result['engine'] is None:
                result['engine'] = target
            else:
                result['reads'] = result['engine']
                result['engine'] = target
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--json', action='store_true')
    parser.add_argument('--constants', action='store_true',
                        help='emit config/script-constants.json entries')
    parser.add_argument('bindings', nargs='*')
    args = parser.parse_args()
    if not IMAGE.is_file() or not HEADER.is_file():
        raise SystemExit('Missing generated/update-content0 image; run build.py first')
    text = exheader.segment(exheader.layout(HEADER.read_bytes()), 'text')
    image = IMAGE.read_bytes()
    origin = text['codeBinOffset'] - text['address']
    starts = shapes.symbols()
    disassembler = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    disassembler.detail = True
    wanted = set(args.bindings)
    rows = []
    for binding in json.loads(BINDINGS.read_text())['bindings']:
        address = int(binding['address'], 16)
        entry = starts.get(address)
        if entry is None or (wanted and binding['identifier'] not in wanted):
            continue
        row = facts(image, origin, text, disassembler, address, entry['size'],
                    binding['identifier'])
        row['callSites'] = binding.get('callSites', 0)
        rows.append(row)
    if args.constants:
        for row in sorted((row for row in rows if row['nameAddress']),
                          key=lambda row: row['identifier']):
            print('    {"name": "kName_%s", "address": "0x%08x", "text": "%s"},'
                  % (row['identifier'], row['nameAddress'], row['identifier']))
        return 0
    if args.json:
        print(json.dumps(rows, indent=2))
        return 0
    print('%-28s %-10s %-7s %-5s %-6s %-9s %-10s %s'
          % ('binding', 'address', 'get', 'narrow', 'line', 'returns', 'push', 'engine'))
    for row in rows:
        engine = 'vtable' if row['virtual'] else '0x%08x' % (row['engine'] or 0)
        print('%-28s 0x%08x %-7s %-5s 0x%-4s %-9s %-10s %s'
              % (row['identifier'], row['address'], row['get'] or '-', row['narrow'] or '-',
                 format(row['line'], '04x') if row['line'] else '-',
                 row['returns'] if row['returns'] is not None else '-',
                 row['push'] or '-', engine))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
