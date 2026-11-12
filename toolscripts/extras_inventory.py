"""Classify the split's ``+`` extra ranges: function entries or continuations?

``config/symbols.txt`` records ranges outside their owner's contiguous extent in
the ``+`` form.  They are not one kind of thing, and treating them as one kind is
what makes the multi-range class look unreachable:

* a **tail-called helper** is a function.  Its entry is the target of a branch
  from a function body, it saves the callee-saved registers it uses, and it
  returns to its caller.  The original source had it as a separate function; the
  census folded it into the caller because nothing ever ``bl``s it (a tail call
  is a ``b``);
* a **cold block** is the owner's own code placed elsewhere.  It is entered with
  the owner's frame live, it uses callee-saved registers or stack slots without
  saving them, and it often branches back into the owner's body;
* a **compiler island** is neither: an interworking veneer (``add ip, pc, #n`` /
  ``bx ip``), an absolute jump slot (``ldr pc, [pc, #-4]``) or a bare return
  shared by several functions.

This module tests each extra and reports the population.  The test is
conservative: an extra that can be read both ways stays an extra and is counted
in the residual, because promoting a cold block would claim a function the image
does not have.

The tests, in order:

``entry``            a branch from a primary range, or from an extra already
                     promoted in this pass, lands on the extra's first byte.
``no-back-edge``     the extra does not branch into its owner's primary extent.
``own-frame``        every callee-saved register it uses is saved by its own
                     prologue, and it does not write the caller's stack frame
                     before adjusting ``sp``.
``ends-cleanly``     the last instruction returns or is an unconditional branch
                     outside the extra.
``no-interior``      it does not branch into the interior of an owned range.
``not-a-bare-return`` it does more than return.
``no-fallthrough``   the preceding owned range does not simply run into it.
``decodes``          the extent decodes exactly in its recorded mode and opens
                     with a plausible instruction.

Promotion is a re-partition, not an edit of the image: the range keeps its
address, mode and size, the owner loses one ``+`` line, and the promoted range
becomes a primary.  The tool refuses to write a split whose owned-byte total
moved, and re-loads the candidate through ``split.load`` before accepting it.
"""

import argparse
import bisect
import json
import sys
from pathlib import Path

import capstone

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import split as split_module

SPLIT = ROOT / 'config/symbols.txt'
CANDIDATE = ROOT / 'work/scratch/symbols.candidate.txt'
IMAGE = ROOT / 'generated/update-content0/code.bin'
HEADER = ROOT / 'generated/update-content0/exheader.bin'
CALLEE_SAVED = {capstone.arm.ARM_REG_R4 + offset: 'r%d' % (4 + offset) for offset in range(8)}


def context(split_path=SPLIT):
    import exheader
    layout = exheader.layout(HEADER.read_bytes())
    text = exheader.segment(layout, 'text')
    functions = split_module.load(split_path, text['address'], text['initializedBytes'])
    return text, functions, IMAGE.read_bytes()


class Range:
    """One owned range with the facts the classification needs."""

    __slots__ = ('name', 'owner', 'address', 'size', 'mode', 'index',
                 'instructions', 'edges', 'uses', 'saved', 'frame_write',
                 'ends', 'complete')

    def __init__(self, name, owner, address, size, mode, index):
        self.name, self.owner, self.address, self.size, self.mode, self.index = (
            name, owner, address, size, mode, index)
        self.instructions = []
        self.edges = []          # (target, mnemonic) for every branch and call
        self.uses = set()        # callee-saved registers read or written
        self.saved = set()       # callee-saved registers pushed by the prologue
        self.frame_write = False
        self.ends = 'other'      # return, tail, bare, other
        self.complete = False


def decode(rows, image, text):
    arm = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    thumb = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
    arm.detail = thumb.detail = True
    origin = text['codeBinOffset'] - text['address']
    for row in rows:
        engine = arm if row.mode == 'arm' else thumb
        instructions = list(engine.disasm(
            image[origin + row.address:origin + row.address + row.size], row.address))
        row.instructions = instructions
        width = 4 if row.mode == 'arm' else 2
        row.complete = bool(instructions) and len(instructions) * width == row.size
        adjusted = False
        for position, instruction in enumerate(instructions):
            read, written = (set(item) for item in instruction.regs_access())
            row.uses |= {CALLEE_SAVED[item] for item in read | written if item in CALLEE_SAVED}
            mnemonic, operands = instruction.mnemonic, instruction.op_str
            if position < 6:
                if mnemonic in ('push', 'stmdb', 'stmfd') and (
                        mnemonic == 'push' or 'sp!' in operands):
                    row.saved |= {CALLEE_SAVED[item] for item in read if item in CALLEE_SAVED}
                    adjusted = True
                elif mnemonic == 'str' and operands.startswith('lr, [sp, #-'):
                    adjusted = True
                elif mnemonic in ('sub', 'subs') and operands.startswith('sp, sp,'):
                    adjusted = True
            for operand in instruction.operands:
                if operand.type == capstone.arm.ARM_OP_IMM and (
                        mnemonic.startswith('b') or mnemonic in ('cbz', 'cbnz')):
                    row.edges.append((operand.imm & ~1, mnemonic))
                if (operand.type == capstone.arm.ARM_OP_MEM
                        and operand.mem.base == capstone.arm.ARM_REG_SP
                        and operand.access & capstone.CS_AC_WRITE
                        and operand.mem.disp >= 0 and not adjusted):
                    row.frame_write = True
        if instructions:
            last = instructions[-1]
            mnemonic, operands = last.mnemonic, last.op_str.strip()
            if (mnemonic == 'bx' and operands == 'lr') or \
                    (mnemonic == 'pop' and 'pc' in operands) or \
                    (mnemonic.startswith('ldm') and 'sp' in operands and 'pc' in operands) or \
                    (mnemonic == 'mov' and operands.replace(' ', '') in ('pc,lr', 'r15,lr')):
                row.ends = 'return'
            elif mnemonic == 'b' and row.edges:
                target = row.edges[-1][0]
                if not row.address <= target < row.address + row.size:
                    row.ends = 'tail'
            if row.ends == 'return' and len(instructions) == 1:
                row.ends = 'bare'
    return rows


def owned_ranges(functions):
    rows = []
    for symbol in functions.symbols:
        rows.append(Range(symbol.name, symbol.name, symbol.address, symbol.size,
                          symbol.mode, 0))
        for index, (address, size) in enumerate(symbol.extras, 1):
            rows.append(Range('%s_r%d' % (symbol.name, index), symbol.name,
                              address, size, symbol.mode, index))
    rows.sort(key=lambda row: row.address)
    return rows


def covering(target, starts, by_start):
    """The owned range containing ``target``, if any."""
    index = bisect.bisect_right(starts, target) - 1
    if index < 0:
        return None
    row = by_start[starts[index]]
    return row if target < row.address + row.size else None


def findings(extra, owner, starts, by_start, sources, promoted):
    """The reasons this extra is not a function entry; none means promote it."""
    reasons = []
    if not [row for row in sources if row.index == 0 or row.name in promoted]:
        reasons.append('no branch from a function body to its first byte')
    if any(owner.address <= target < owner.address + owner.size for target, _ in extra.edges):
        reasons.append('branches back into its owner')
    if any(by_start.get(target) is None and covering(target, starts, by_start) is not None
           for target, _ in extra.edges):
        reasons.append('branches into an owned range interior')
    if extra.ends == 'bare':
        reasons.append('is a bare return island')
    elif extra.ends not in ('return', 'tail'):
        reasons.append('does not end in a return or a tail branch')
    if not extra.uses <= extra.saved:
        reasons.append('uses callee-saved registers it does not save')
    if extra.frame_write:
        reasons.append('writes a stack frame it did not create')
    if not extra.complete:
        reasons.append('does not decode exactly in its recorded mode')
    if extra.instructions and extra.instructions[0].mnemonic in ('andeq', 'udf', 'svceq'):
        reasons.append('first word is not a plausible instruction')
    if extra.mode == 'arm' and extra.address % 4:
        reasons.append('arm entry is not four-byte aligned')
    index = bisect.bisect_left(starts, extra.address) - 1
    if index >= 0:
        previous = by_start[starts[index]]
        if previous.address + previous.size == extra.address and previous.ends not in (
                'return', 'tail'):
            reasons.append('is entered by fallthrough, not by a branch')
    return reasons


def kind(extra, reasons):
    """One category per extra, so the residual adds up to the whole population."""
    if not reasons:
        return 'function-entry'
    first = extra.instructions[0] if extra.instructions else None
    if not extra.complete or (first is not None and
                              first.mnemonic in ('andeq', 'udf', 'svceq')):
        return 'undecodable'
    if len(extra.instructions) == 2 and first.mnemonic in ('add', 'adr') \
            and 'ip' in first.op_str and extra.instructions[1].mnemonic == 'bx':
        return 'interworking-veneer'
    if first is not None and first.mnemonic == 'ldr' and first.op_str.startswith('pc, [pc'):
        return 'absolute-jump-slot'
    if extra.ends == 'bare':
        return 'return-island'
    if any(reason in ('branches back into its owner',
                      'uses callee-saved registers it does not save',
                      'writes a stack frame it did not create',
                      'branches into an owned range interior') for reason in reasons):
        return 'continuation'
    if 'no branch from a function body to its first byte' in reasons:
        return 'unreferenced'
    if 'is entered by fallthrough, not by a branch' in reasons:
        return 'fallthrough'
    return 'other'


def classify(rows, functions):
    by_start = {row.address: row for row in rows}
    starts = sorted(by_start)
    inbound = {}
    for row in rows:
        for target, _ in row.edges:
            if target in by_start and by_start[target] is not row:
                inbound.setdefault(target, []).append(row)
    extras = [row for row in rows if row.index]
    promoted = set()
    for _ in range(4):
        changed = False
        for extra in extras:
            if extra.name in promoted:
                continue
            if not findings(extra, functions.by_name[extra.owner], starts, by_start,
                            inbound.get(extra.address, []), promoted):
                promoted.add(extra.name)
                changed = True
        if not changed:
            break
    decisions = {}
    for extra in extras:
        reasons = findings(extra, functions.by_name[extra.owner], starts, by_start,
                           inbound.get(extra.address, []), promoted)
        decisions[extra.name] = {
            'owner': extra.owner, 'address': extra.address, 'size': extra.size,
            'mode': extra.mode, 'kind': kind(extra, reasons),
            'sources': sorted({row.name for row in inbound.get(extra.address, [])
                               if row.index == 0 or row.name in promoted}),
            'reasons': reasons}
    return decisions, promoted


def summarize(decisions, promoted):
    kinds, promoted_bytes, extra_bytes = {}, 0, 0
    for name, decision in decisions.items():
        extra_bytes += decision['size']
        label = 'function-entry' if name in promoted else decision['kind']
        row = kinds.setdefault(label, {'count': 0, 'bytes': 0})
        row['count'] += 1
        row['bytes'] += decision['size']
    promoted_bytes = sum(row['size'] for name, row in decisions.items() if name in promoted)
    return {'extras': len(decisions), 'extraBytes': extra_bytes,
            'promoted': len(promoted), 'promotedBytes': promoted_bytes,
            'kept': len(decisions) - len(promoted),
            'kinds': dict(sorted(kinds.items(), key=lambda item: -item[1]['count']))}


def parse_split():
    """The header, the primary lines in order, and each primary's extra lines.

    The file's own line ending is kept: the committed split is CRLF, and writing
    it back with LF would rewrite every line and hide the actual change.
    """
    raw = SPLIT.read_bytes()
    newline = '\r\n' if b'\r\n' in raw else '\n'
    header, primaries = [], []
    for line in raw.decode('utf-8').splitlines():
        if not line:
            continue
        if line.startswith('#'):
            header.append(line)
            continue
        if line.startswith('+'):
            address, mode, size, _ = line[1:].split()
            primaries[-1]['extras'].append(
                {'line': line, 'address': int(address, 16), 'mode': mode,
                 'size': int(size)})
            continue
        address, mode, size, name = line.split()
        primaries.append({'line': line, 'address': int(address, 16), 'mode': mode,
                          'size': int(size), 'name': name, 'extras': []})
    return newline, header, primaries


def rewrite(text, promoted, apply):
    """Remove the promoted ``+`` lines and add their primary lines.

    The rewrite is checked three ways before it is accepted: the owned-byte
    total is unchanged, no primary overlaps another, and ``split.load`` accepts
    the candidate file.  The candidate is written under ``work/`` first; the
    committed split is replaced only with ``--apply``.
    """
    newline, header, primaries = parse_split()
    before = sum(row['size'] for row in primaries) + sum(
        extra['size'] for row in primaries for extra in row['extras'])
    added = []
    for row in primaries:
        kept = []
        for index, extra in enumerate(row['extras'], 1):
            if '%s_r%d' % (row['name'], index) in promoted:
                added.append({'line': '%08x %s %d fn_%08x' % (
                    extra['address'], extra['mode'], extra['size'], extra['address']),
                    'address': extra['address'], 'mode': extra['mode'],
                    'size': extra['size'], 'name': 'fn_%08x' % extra['address'],
                    'extras': []})
            else:
                kept.append(extra)
        row['extras'] = kept
    merged = sorted(primaries + added, key=lambda row: row['address'])
    for previous, current in zip(merged, merged[1:]):
        if previous['address'] + previous['size'] > current['address']:
            raise SystemExit('promotion would overlap 0x%08x and 0x%08x'
                             % (previous['address'], current['address']))
    primary_bytes = sum(row['size'] for row in merged)
    extra_bytes = sum(extra['size'] for row in merged for extra in row['extras'])
    if primary_bytes + extra_bytes != before:
        raise SystemExit('promotion changed the owned-byte total: %d -> %d'
                         % (before, primary_bytes + extra_bytes))
    header[-1] = ('# functions: %d  primary bytes: %d  extra bytes: %d  '
                  'uncovered text bytes: %d'
                  % (len(merged), primary_bytes, extra_bytes,
                     text['initializedBytes'] - primary_bytes))
    entries = []
    for row in merged:
        entries.append(row['line'])
        entries.extend(extra['line'] for extra in row['extras'])
    output = newline.join(header + entries) + newline
    CANDIDATE.parent.mkdir(parents=True, exist_ok=True)
    CANDIDATE.write_bytes(output.encode('utf-8'))
    candidate = split_module.load(CANDIDATE, text['address'], text['initializedBytes'])
    if len(candidate.symbols) != len(merged):
        raise SystemExit('candidate split has %d functions, expected %d'
                         % (len(candidate.symbols), len(merged)))
    if apply:
        SPLIT.write_bytes(output.encode('utf-8'))
        print('wrote ' + str(SPLIT.relative_to(ROOT)))
    else:
        print('candidate: ' + str(CANDIDATE.relative_to(ROOT)))
    return {'functions': len(merged), 'primaryBytes': primary_bytes,
            'extraBytes': extra_bytes,
            'uncoveredTextBytes': text['initializedBytes'] - primary_bytes}


def manifest(promoted, decisions, functions):
    """The promotion list, with the byte accounting before and after.

    The split now carries the promoted entries as primaries, so the list is not
    derivable from the committed split alone.  Keeping it makes the change
    reviewable, lets the corpus export be asked for exactly these entries, and
    states the invariant a reader can check: promotion moves bytes from the
    extra column to the primary column and changes nothing else.
    """
    rows = [{'owner': decisions[name]['owner'], 'address': decisions[name]['address'],
             'mode': decisions[name]['mode'], 'size': decisions[name]['size']}
            for name in sorted(promoted, key=lambda item: decisions[item]['address'])]
    before = {'functions': len(functions),
              'primaryBytes': sum(symbol.size for symbol in functions.symbols),
              'extraBytes': sum(size for _, size in functions.extra_ranges())}
    before['ownedBytes'] = before['primaryBytes'] + before['extraBytes']
    moved = sum(row['size'] for row in rows)
    after = {'functions': before['functions'] + len(rows),
             'primaryBytes': before['primaryBytes'] + moved,
             'extraBytes': before['extraBytes'] - moved,
             'ownedBytes': before['ownedBytes']}
    return {'schema': 'dqmj3-promoted-extras-v1',
            'source': 'config/symbols.txt extra ranges verified by extras_inventory.py',
            'count': len(rows), 'bytes': moved, 'before': before, 'after': after,
            'extras': rows}


def seeds(document):
    """The corpus-export seed schema for the promoted entries.

    The Ghidra export reads ``functionSeeds`` with an address, a mode, a body
    range list and a body byte count.  A promoted entry is one contiguous range
    of its own, so it seeds exactly like a census function.
    """
    return {'schema': 'dqmj3-corpus-seeds-v1', 'functionCount': document['count'],
            'functionSeeds': [{'address': row['address'],
                               'mode': 'ARM' if row['mode'] == 'arm' else 'Thumb',
                               'ranges': [[row['address'], row['address'] + row['size']]],
                               'textBodyBytes': row['size'], 'calls': []}
                              for row in document['extras']]}


def main(argv=None):
    parser = argparse.ArgumentParser()
    parser.add_argument('--split', default=str(SPLIT),
                        help='split to classify (default: the committed split)')
    parser.add_argument('--report', help='write the per-extra decision table here')
    parser.add_argument('--manifest', help='write the promotion list here')
    parser.add_argument('--seeds', help='write the corpus-export seed document here')
    parser.add_argument('--seed-from-manifest',
                        help='write the seed document from a promotion manifest '
                             '(the committed manifest no longer has extra ranges to classify)')
    parser.add_argument('--apply', action='store_true',
                        help='replace config/symbols.txt with the candidate')
    args = parser.parse_args(argv)
    text, functions, image = context(args.split)
    rows = decode(owned_ranges(functions), image, text)
    decisions, promoted = classify(rows, functions)
    summary = summarize(decisions, promoted)
    print(json.dumps(summary, indent=2))
    if args.report:
        Path(args.report).write_text(json.dumps(
            {'summary': summary, 'promoted': sorted(promoted), 'extras': decisions},
            indent=1) + '\n', encoding='utf-8')
        print('wrote ' + args.report)
    if args.manifest:
        document = manifest(promoted, decisions, functions)
        Path(args.manifest).write_text(json.dumps(document, indent=1) + '\n', encoding='utf-8')
        print('wrote ' + args.manifest)
    if args.seeds:
        document = manifest(promoted, decisions, functions)
        Path(args.seeds).write_text(json.dumps(seeds(document), indent=1) + '\n',
                                     encoding='utf-8')
        print('wrote ' + args.seeds)
    if args.seed_from_manifest:
        document = json.loads(Path(args.seed_from_manifest).read_text(encoding='utf-8'))
        target = Path(args.seeds) if args.seeds else Path('work/scratch/promoted-seeds.json')
        target.write_text(json.dumps(seeds(document), indent=1) + '\n', encoding='utf-8')
        print('wrote ' + str(target))
    if args.split == str(SPLIT):
        # The rewrite reads the committed split; classifying an older copy is a
        # reporting run only.
        print(json.dumps(rewrite(text, promoted, args.apply), indent=2))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
