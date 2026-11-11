"""Classify script-native bodies by the simple instruction shapes they share.

The script API has 628 bindings, and a large part of them are small marshalling
functions with a handful of repeated shapes. This tool reads the original image
and reports which bindings are which shape, so a reconstruction batch is chosen
from measurement instead of by guessing:

  context-get-integer / context-get-bool
      Ten instructions, no argument check: save the VM, load the script
      context, call one engine service, push its answer, return 1. The callee
      and the pushed type are recovered from the two branch targets.

  one-arg-*
      A short function that reads one Squirrel argument through a VM helper,
      checks its status, calls one engine service and pushes the result.

Every candidate is reported with its address, split size, engine callee, pushed
type and whether the callee is a split symbol (so the placement link can resolve
it). Nothing here claims source: it reports shapes the original has.

Usage:
    python toolscripts/script_api_shapes.py [--json]
"""
import argparse
import json
import struct
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import exheader

ROOT = Path(__file__).resolve().parents[1]
IMAGE = ROOT / 'generated/update-content0/code.bin'
HEADER = ROOT / 'generated/update-content0/exheader.bin'
BINDINGS = ROOT / 'config/script-natives.json'
SPLIT = ROOT / 'config/symbols.txt'
PUSH = {0x1580cc: 'integer', 0x158004: 'bool', 0x158070: 'float', 0x158128: 'string'}
GET = {0x157f58: 'integer', 0x157fb0: 'string', 0x157eb4: 'bool', 0x157f00: 'float'}


def symbols():
    """Every split function start: address to (name, mode, size)."""
    by_address = {}
    for line in SPLIT.read_text().splitlines():
        if not line or line.startswith('#') or line.startswith('+'):
            continue
        parts = line.split()
        by_address[int(parts[0], 16)] = {'mode': parts[1], 'size': int(parts[2]), 'name': parts[3]}
    return by_address


def branch(word, at):
    """The target of a direct branch instruction placed at ``at``."""
    offset = word & 0x00ffffff
    if offset & 0x00800000:
        offset -= 0x01000000
    return at + 8 + offset * 4


def context_getter(words, address):
    """Match the ten-instruction context getter and return its facts."""
    if (words[0] != 0xe92d4010 or words[1] != 0xe1a04000
            or (words[2] & 0xfffff000) != 0xe59f0000 or words[3] != 0xe5900000
            or (words[4] & 0xff000000) != 0xeb000000 or words[5] != 0xe1a01000
            or words[6] != 0xe1a00004 or (words[7] & 0xff000000) != 0xeb000000
            or words[8] != 0xe3a00001 or words[9] != 0xe8bd8010):
        return None
    return {'engine': branch(words[4], address + 16), 'push': PUSH.get(branch(words[7], address + 28))}


def one_argument(words, size, address):
    """Match a one-argument marshalling function and report its facts."""
    if size not in (100, 104, 108) or (words[4] & 0xff000000) != 0xeb000000:
        return None
    helper = branch(words[4], address + 16)
    if helper not in GET:
        return None
    pushes = [index for index, word in enumerate(words) if (word & 0xff000000) == 0xeb000000]
    if len(pushes) < 3:
        return None
    push_target = branch(words[pushes[-1]], address + pushes[-1] * 4)
    return {'engine': branch(words[pushes[1]], address + pushes[1] * 4),
            'get': GET[helper], 'push': PUSH.get(push_target)}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--json', action='store_true')
    args = parser.parse_args()
    if not IMAGE.is_file() or not HEADER.is_file():
        raise SystemExit('Missing generated/update-content0 image; run build.py first')
    text = exheader.segment(exheader.layout(HEADER.read_bytes()), 'text')
    image = IMAGE.read_bytes()
    origin = text['codeBinOffset'] - text['address']
    starts = symbols()
    result = {}
    for binding in json.loads(BINDINGS.read_text())['bindings']:
        address = int(binding['address'], 16)
        entry = starts.get(address)
        if entry is None:
            continue
        words = list(struct.unpack('<%dI' % (entry['size'] // 4),
                                   image[origin + address:origin + address + entry['size']]))
        facts = context_getter(words, address) if entry['size'] == 40 else None
        if facts:
            facts['shape'] = 'context-get-%s' % facts['push']
        else:
            facts = one_argument(words, entry['size'], address)
            if facts:
                facts['shape'] = 'one-arg-%s' % facts['push']
        if facts:
            facts.update(identifier=binding['identifier'], address=address, size=entry['size'],
                         engine_split=facts['engine'] in starts)
            result.setdefault(facts['shape'], []).append(facts)
    summary = {shape: len(rows) for shape, rows in sorted(result.items())}
    if args.json:
        print(json.dumps({'summary': summary, 'shapes': result}, indent=2))
    else:
        for shape, count in summary.items():
            resolvable = sum(1 for row in result[shape] if row['engine_split'])
            print('%-22s %3d bindings, %3d with a split callee' % (shape, count, resolvable))
        shapes = Counter(row['shape'] for rows in result.values() for row in rows)
        if shapes:
            print('total classified:', sum(shapes.values()))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
