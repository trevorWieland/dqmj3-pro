"""The committed native text split, ``config/symbols.txt``.

A unit is a source file, and the functions it implements are the symbols it
defines. The split gives every function of the measured image an address, an
instruction mode, a size and a name. The address is the identity: it is where the
original bytes are and where the compiled function is placed, and the measurement
compares the two there. The name is a label for people -- it may be
``fn_00196b08`` or ``memory_copy`` -- and this file is the one table that binds a
name to an address, so a definition is measured because the table places its
name, not because the spelling of the symbol carries an address.

The split is a partition of the initialized text segment. Primary extents never
overlap and never overlap each other's owners; bytes no function owns (literal
pools, alignment, unclassified text) stay in the denominator and are reported as
retained original bytes.
"""

import hashlib
import re
from pathlib import Path


PRIMARY = re.compile(r'^([0-9a-f]{8}) (arm|thumb) ([1-9][0-9]*) ([A-Za-z_][A-Za-z0-9_]*)$')
EXTRA = re.compile(r'^\+([0-9a-f]{8}) (arm|thumb) ([1-9][0-9]*) ([A-Za-z_][A-Za-z0-9_]*)$')
ALIGNMENT = {'arm': 4, 'thumb': 2}


class Symbol:
    """One function of the measured image."""

    __slots__ = ('name', 'address', 'mode', 'size', 'extras')

    def __init__(self, name, address, mode, size):
        self.name = name
        self.address = address
        self.mode = mode
        self.size = size
        self.extras = []

    def end(self):
        return self.address + self.size

    def __repr__(self):
        return 'Symbol(%s, 0x%08x, %s, %d)' % (self.name, self.address, self.mode, self.size)


class Split:
    """The address-ordered functions of one image."""

    def __init__(self, symbols, digest):
        self.symbols = symbols
        self.digest = digest
        self.by_address = {symbol.address: symbol for symbol in symbols}
        self.by_name = {symbol.name: symbol for symbol in symbols}

    def __len__(self):
        return len(self.symbols)

    def primary_ranges(self):
        return [(symbol.address, symbol.size) for symbol in self.symbols]

    def extra_ranges(self):
        return [(address, size) for symbol in self.symbols for address, size in symbol.extras]

    def gaps(self, start, size):
        """The text ranges within ``start``..``start + size`` that no function owns."""
        return complement(self.primary_ranges(), start, size)


def complement(ranges, start, size):
    """The maximal ranges of ``start``..``start + size`` that the given ranges leave."""
    result, cursor = [], start
    for address, extent in sorted(ranges):
        if address < cursor or address + extent > start + size:
            raise ValueError('Ranges overlap or leave the text segment at 0x%08x' % address)
        if address > cursor:
            result.append((cursor, address - cursor))
        cursor = address + extent
    if cursor < start + size:
        result.append((cursor, start + size - cursor))
    return result


def _aligned(address, mode):
    return address % ALIGNMENT[mode] == 0


def _contained(address, size, start, extent):
    return start <= address and address + size <= start + extent


def load(path, start, extent):
    """Read ``path`` and check that it partitions ``start``..``start + extent``.

    ``start`` and ``extent`` come from the ExHeader code set info, so the split
    cannot disagree with the segment that is actually measured.
    """
    path = Path(path)
    content = path.read_bytes()
    symbols, extras = [], []
    for number, line in enumerate(content.decode('utf-8').splitlines(), 1):
        if not line or line.startswith('#'):
            continue
        match = PRIMARY.match(line)
        extra = EXTRA.match(line)
        if extra:
            address, mode, size, name = (int(extra[1], 16), extra[2], int(extra[3]), extra[4])
            extras.append((number, name, address, mode, size))
            continue
        if not match:
            raise ValueError('%s:%d: unsupported split line: %s' % (path.name, number, line))
        address, mode, size, name = int(match[1], 16), match[2], int(match[3]), match[4]
        if not _aligned(address, mode):
            raise ValueError('%s:%d: %s entry is not %d-aligned' % (path.name, number, mode, ALIGNMENT[mode]))
        if not _contained(address, size, start, extent):
            raise ValueError('%s:%d: function escapes the initialized text segment' % (path.name, number))
        symbols.append(Symbol(name, address, mode, size))
    order = [symbol.address for symbol in symbols]
    if order != sorted(order) or len(order) != len(set(order)):
        raise ValueError('%s: functions must be unique and address-sorted' % path.name)
    if len({symbol.name for symbol in symbols}) != len(symbols):
        raise ValueError('%s: function names must be unique' % path.name)
    for previous, current in zip(symbols, symbols[1:]):
        if previous.end() > current.address:
            raise ValueError('%s: overlapping functions at 0x%08x and 0x%08x'
                             % (path.name, previous.address, current.address))
    result = Split(symbols, hashlib.sha256(content).hexdigest())
    for number, name, address, mode, size in extras:
        if name not in result.by_name:
            raise ValueError('%s:%d: extra range has no owning function' % (path.name, number))
        if address % 2:
            raise ValueError('%s:%d: extra range is not halfword-aligned' % (path.name, number))
        if not _contained(address, size, start, extent):
            raise ValueError('%s:%d: extra range is outside the text segment' % (path.name, number))
        result.by_name[name].extras.append((address, size))
    _check_extra_ranges(path, result)
    return result


def _check_extra_ranges(path, split):
    owned = list(split.primary_ranges())
    for address, size in split.extra_ranges():
        for low, extent in owned:
            if address < low + extent and low < address + size:
                raise ValueError('%s: extra range 0x%08x overlaps function bytes' % (path.name, address))
        owned.append((address, size))


def match(definitions, functions):
    """Resolve compiled definitions to split functions, keyed by the address.

    ``definitions`` is keyed by the symbol a compiler emitted; ``functions`` is
    the split. A definition names a function, and the split is the one table that
    binds that name to an original address, so the match is a table lookup and
    its result is keyed by the address -- the identity the measurement carries
    from here on. The split's declared size and mode travel with the address.
    Whether the compiled size agrees is what the measurement reports, so it is
    not a condition of the match.

    Two definitions that resolve to one address are ambiguous: one original
    function would be measured twice and neither record would be its own. That
    is refused here instead of being resolved by order. ``load`` already refuses
    a split that binds two names to one address; this is the second gate, where
    compiled definitions meet the table.
    """
    matched = {}
    for name in definitions:
        symbol = functions.by_name.get(name)
        if symbol is None:
            continue
        if symbol.address in matched:
            raise ValueError('Two definitions resolve to 0x%08x: %s and %s'
                             % (symbol.address, matched[symbol.address][0], name))
        matched[symbol.address] = (name, symbol)
    return matched
