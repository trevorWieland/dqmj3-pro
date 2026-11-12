"""Find byte-identical function groups: one reconstructed body, many addresses.

A C++ template instantiated once per element type compiles to the same machine
code at each address, so a single reconstruction can pay for every member of the
group. This tool answers which groups exist and what one body is worth.

The measurement that matters is the one the split does not show: a function's
symbol extent covers its instructions, and a function that loads constants by
PC-relative offset carries those words immediately after it, where the split
attributes them to whatever symbol comes next. Grouping on the extent alone
therefore reports families that are not byte identical -- an initializer that
writes a different global in each copy groups with the *instructions* equal and
the pool words different. This tool hashes the extent plus the window that
follows it, bounded by the next split symbol, so a reported group is a group of
functions whose whole compiled extent agrees.

Only pool-free bodies can be credited from one reconstruction, and this is the
tool that says which those are.
"""

import argparse
import collections
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import exheader
import split as split_module

VERSION = 'update-content0'
SPLIT = 'config/symbols.txt'


def load(root):
    generated = Path(root) / 'generated' / VERSION
    image = (generated / 'code.bin').read_bytes()
    layout = exheader.layout((generated / 'exheader.bin').read_bytes())
    text = exheader.segment(layout, 'text')
    functions = split_module.load(Path(root) / SPLIT, text['address'],
                                  text['initializedBytes'])
    return image, text['codeBinOffset'] - text['address'], functions


def credited(path, root):
    """The names a permute scan reports byte exact, if a scan is available."""
    names = set()
    if not path:
        return names
    for line in Path(path).read_text(encoding='utf-8').splitlines():
        try:
            row = json.loads(line)
        except ValueError:
            continue
        if row.get('exact'):
            names.add(row['name'])
    return names


def families(root, minimum, window, skip):
    image, origin, functions = load(root)
    ordered = sorted(functions.symbols, key=lambda item: item.address)
    groups = collections.defaultdict(list)
    for index, symbol in enumerate(ordered):
        if symbol.size < minimum or symbol.name in skip:
            continue
        start = origin + symbol.address
        following = ordered[index + 1].address if index + 1 < len(ordered) else None
        room = (following - symbol.address) if following is not None else window
        span = symbol.size + min(window, max(0, room - symbol.size))
        digest = hashlib.sha256(image[start:start + span]).hexdigest()
        groups[(symbol.size, span, digest)].append(symbol)
    rows = []
    for (size, span, digest), members in groups.items():
        if len(members) < 2:
            continue
        members.sort(key=lambda item: item.address)
        rows.append({'size': size, 'span': span, 'pool': span - size,
                     'members': len(members), 'bytes': size * len(members),
                     'sha256': digest,
                     'addresses': ['%08x' % item.address for item in members],
                     'names': [item.name for item in members]})
    rows.sort(key=lambda row: -row['bytes'])
    return rows


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--root', default=str(ROOT))
    parser.add_argument('--minimum', type=int, default=32,
                        help='shortest body to report, in bytes')
    parser.add_argument('--window', type=int, default=64,
                        help='literal-pool bytes to hash after each extent')
    parser.add_argument('--scan', help='permute --scan JSONL; groups it marks exact are skipped')
    parser.add_argument('--json', help='write the groups here')
    arguments = parser.parse_args(argv)
    rows = families(arguments.root, arguments.minimum, arguments.window,
                    credited(arguments.scan, arguments.root))
    if arguments.json:
        Path(arguments.json).write_text(json.dumps(rows, indent=1), encoding='utf-8')
    print('groups %d, functions %d, bytes %d'
          % (len(rows), sum(row['members'] for row in rows),
             sum(row['bytes'] for row in rows)))
    for row in rows:
        print('%6d +%-3d x%-3d %8d  %s  %s'
              % (row['size'], row['pool'], row['members'], row['bytes'],
                 row['sha256'][:12], ' '.join(row['addresses'][:6])))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
