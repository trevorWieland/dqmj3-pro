"""Table schemas and the rules that decide a record stride.

A table schema names one parameter file, the fixed record stride it uses, the
fields that have been established for it, and the *witnesses* that make the
stride a measurement rather than a guess.  A witness is a structural fact that
must hold for the true record size and that fails for a wrong one: an index
column that equals the row number, a key column that runs contiguously, a name
column that decodes in every row, a zero-filled record tail, or a column that
never decreases.

``resolve`` only accepts a stride when exactly one candidate satisfies every
witness.  When no candidate or more than one candidate survives it raises, so a
codec can never quietly split a file at the wrong boundary.
"""

import struct

from .fields import Field, describe_fields


class LayoutError(ValueError):
    """Raised when a record stride cannot be established from the file."""


def _u16(body, offset):
    return struct.unpack_from("<H", body, offset)[0]


INTEGER_KINDS = {"u8": ("<B", 1), "u16": ("<H", 2), "u32": ("<I", 4),
                 "s8": ("<b", 1), "s16": ("<h", 2), "s32": ("<i", 4)}


def _row_value(body, row, stride, offset, kind):
    """Return (value, width) for one column of one record, or (None, width)."""
    fmt, size = INTEGER_KINDS[kind]
    if offset < 0 or offset + size > stride:
        return None, size
    return struct.unpack_from(fmt, body, row * stride + offset)[0], size


def index_at(offset=0, kind="u16", plus=0):
    """Witness: the integer at ``offset`` equals the row number (plus ``plus``).

    Returns false for every record when the field does not fit the candidate
    stride, so a stride that splits the field is rejected rather than skipped.
    """
    def check(body, stride, count):
        hits = 0
        for row in range(count):
            value, _size = _row_value(body, row, stride, offset, kind)
            if value is None:
                return False, "%s at +%d does not fit stride %d" % (kind, offset, stride)
            if value == row + plus:
                hits += 1
        return hits == count, "%d/%d rows numbered %d..n" % (hits, count, plus)
    return check


def index_at_zero():
    """Witness: the u16 at offset 0 equals the row number in every record."""
    return index_at(0, "u16")


def u32_index_at_zero():
    """Witness: the u32 at offset 0 equals the row number in every record."""
    return index_at(0, "u32")


def u8_index_at_zero(plus=0):
    """Witness: the u8 at offset 0 equals the row number plus ``plus``."""
    return index_at(0, "u8", plus)


def keys_contiguous_at(offset=0, kind="u16", plus=0):
    """Witness: a key column runs over an unbroken ascending range."""
    def check(body, stride, count):
        keys = []
        for row in range(count):
            value, _size = _row_value(body, row, stride, offset, kind)
            if value is None:
                return False, "%s at +%d does not fit stride %d" % (kind, offset, stride)
            keys.append(value)
        unbroken = (len(set(keys)) == count
                    and all(a <= b for a, b in zip(keys, keys[1:]))
                    and max(keys) - min(keys) + 1 == count
                    and min(keys) == plus)
        return unbroken, "%d keys spanning %d values" % (count, max(keys) - min(keys) + 1)
    return check


def keys_unique_sorted():
    """Witness: the u16 at offset 0 is unique and never decreases."""
    def check(body, stride, count):
        keys = [_u16(body, row * stride) for row in range(count)]
        unique = len(set(keys)) == count
        ordered = all(left <= right for left, right in zip(keys, keys[1:]))
        return unique and ordered, "%d distinct keys, ascending=%s" % (len(set(keys)), ordered)
    return check


def keys_unique():
    """Witness: the u16 at offset 0 is unique across the table, in any order."""
    def check(body, stride, count):
        keys = [_u16(body, row * stride) for row in range(count)]
        return len(set(keys)) == count, "%d distinct keys of %d" % (len(set(keys)), count)
    return check


def keys_contiguous():
    """Witness: the u16 at offset 0 runs over an unbroken ascending range."""
    def check(body, stride, count):
        keys = [_u16(body, row * stride) for row in range(count)]
        unbroken = (len(set(keys)) == count and all(a <= b for a, b in zip(keys, keys[1:]))
                    and max(keys) - min(keys) + 1 == count)
        return unbroken, "%d keys spanning %d values" % (count, max(keys) - min(keys) + 1)
    return check


def text_names(kind, width, offset=0):
    """Witness: the name field is empty, full width, or NUL-terminated text.

    A name that fills its whole field carries no terminator, which is common in
    these tables, so a full-width block counts as long as it decodes.
    """
    encoding = "cp932" if kind == "sjis" else "ascii"

    def check(body, stride, count):
        good = 0
        for row in range(count):
            block = body[row * stride + offset:row * stride + offset + width]
            if not any(block):
                good += 1
                continue
            end = block.find(b"\x00")
            if end >= 0 and any(block[end:]):
                continue
            payload = block if end < 0 else block[:end]
            try:
                text = payload.decode(encoding)
            except UnicodeDecodeError:
                continue
            if all(ord(character) >= 0x20 for character in text):
                good += 1
        return good == count, "%d/%d name fields decode" % (good, count)
    return check


def fixed_text(width, offset=0):
    """Witness: a fixed-width field holds printable text with no terminator."""
    def check(body, stride, count):
        good = 0
        for row in range(count):
            block = body[row * stride + offset:row * stride + offset + width]
            if all(0x20 <= byte < 0x7F for byte in block):
                good += 1
        return good == count, "%d/%d fixed text fields are printable" % (good, count)
    return check


def zero_tail(width):
    """Witness: the last ``width`` bytes of every record are zero."""
    def check(body, stride, count):
        hits = sum(1 for row in range(count)
                   if not any(body[row * stride + stride - width:row * stride + stride]))
        return hits == count, "%d/%d record tails are zero" % (hits, count)
    return check


def columns_nondecreasing(offsets, name):
    """Witness: each named u32 column never decreases from row to row."""
    def check(body, stride, count):
        for offset in offsets:
            if offset + 4 > stride:
                return False, "%s column %d does not fit the record" % (name, offset)
            values = [struct.unpack_from("<I", body, row * stride + offset)[0]
                      for row in range(count)]
            if any(left > right for left, right in zip(values, values[1:])):
                return False, "%s column %d decreases" % (name, offset)
        return True, "%s columns never decrease" % name
    return check


def at_least_rows(minimum):
    """Witness: the candidate stride yields at least this many records."""
    def check(body, stride, count):
        return count >= minimum, "%d rows (needs %d)" % (count, minimum)
    return check


def row_count_in(counts):
    """Witness: the candidate stride yields a row count measured elsewhere.

    This is the cross-table count witness: a different file in the same content
    partition declares how many entries the shared identifier space has, so the
    stride is the one that reproduces that count here.  It only says how many
    records there are; it never says what any field means.
    """
    allowed = frozenset(counts)

    def check(body, stride, count):
        return count in allowed, "%d rows (measured counts: %s)" % (
            count, ", ".join(str(item) for item in sorted(allowed)))
    return check


def column_constant(offset, kind, expected):
    """Witness: one integer column holds the same value in every record."""
    def check(body, stride, count):
        for row in range(count):
            value, _size = _row_value(body, row, stride, offset, kind)
            if value is None:
                return False, "%s at +%d does not fit stride %d" % (kind, offset, stride)
            if value != expected:
                return False, "row %d has 0x%x at +%d, expected 0x%x" % (
                    row, value, offset, expected)
        return True, "every row holds 0x%x at +%d" % (expected, offset)
    return check


def value_domain(offset, kind, allowed):
    """Witness: every value of one integer column belongs to a small set."""
    allowed = frozenset(allowed)

    def check(body, stride, count):
        for row in range(count):
            value, _size = _row_value(body, row, stride, offset, kind)
            if value is None:
                return False, "%s at +%d does not fit stride %d" % (kind, offset, stride)
            if value not in allowed:
                return False, "row %d holds 0x%x at +%d, outside the measured set" % (
                    row, value, offset)
        return True, "every row's value at +%d is in {%s}" % (
            offset, ", ".join(str(item) for item in sorted(allowed)))
    return check


class TableSchema:
    """Everything the codecs need to know about one parameter table."""

    def __init__(self, name, magic, strides, fields=(), witnesses=(), basis="", note="",
                 identifier=None, certain=False, container="tp", layout="flat",
                 candidates="declared", row_numbered=False):
        """Build a schema.

        ``identifier`` names the identifier space this table defines, so that a
        field elsewhere can declare ``refers_to`` it.  ``certain`` records
        whether the record boundary is corroborated by a structural witness
        rather than resting on exact divisibility alone.  ``container`` is the
        file family the table lives in: ``tp`` or ``tb``.  ``layout`` selects
        the codec: ``flat`` for a body of equal records, ``indexed`` for the AI
        action container, ``named`` for the battle-script container.

        ``candidates="divisors"`` makes resolution try every divisor of the
        body in the plausible range instead of only the declared ``strides``.
        That turns "no other divisor fits" from a claim into a check: a witness
        that several divisors satisfy now makes ``resolve`` fail instead of
        silently choosing one.  ``row_numbered`` says a witness proves the
        records number themselves, which the reference query uses to report
        row-aligned tables.
        """
        self.name = name
        self.magic = magic
        self.strides = tuple(strides)
        self.fields = tuple(fields)
        self.witnesses = tuple(witnesses)
        self.basis = basis
        self.note = note
        self.identifier = identifier
        self.certain = certain
        self.container = container
        self.layout = layout
        self.candidates = candidates
        self.row_numbered = row_numbered
        self._check_fields()

    def _check_fields(self):
        """Reject overlapping fields and fields that cannot fit the smallest stride."""
        ordered = sorted(self.fields, key=lambda field: field.offset)
        for previous, current in zip(ordered, ordered[1:]):
            if current.offset < previous.end:
                raise LayoutError("%s: fields %r and %r overlap"
                                  % (self.name, previous.name, current.name))
        for field in self.fields:
            if field.end > min(self.strides):
                raise LayoutError("%s: field %r does not fit stride %d"
                                  % (self.name, field.name, min(self.strides)))
        names = [field.name for field in self.fields]
        if len(set(names)) != len(names):
            raise LayoutError("%s: duplicate field names" % self.name)

    def candidate_strides(self, size):
        """Return the strides this schema will test for a body of ``size`` bytes.

        A field that does not fit a stride rules it out before any witness runs,
        because a record boundary smaller than a measured field cannot be right.
        In ``divisors`` mode every divisor from that floor up to 1024 bytes is a
        candidate, so a witness has to reject all of them but one.
        """
        floor = max([field.end for field in self.fields] or [1])
        if self.candidates != "divisors":
            return [stride for stride in self.strides if stride >= floor]
        return [stride for stride in range(floor, min(size, 1024) + 1) if size % stride == 0]

    def accepts_stride(self, stride):
        """Return whether an encoded document may use ``stride``."""
        floor = max([field.end for field in self.fields] or [1])
        if self.candidates == "divisors":
            return stride >= floor and stride <= 1024
        return stride in self.strides

    def resolve(self, body):
        """Return (stride, count) for this body, or raise when it is ambiguous."""
        survivors = []
        rejected = []
        for stride in self.candidate_strides(len(body)):
            if len(body) % stride:
                rejected.append("stride %d does not divide %d bytes" % (stride, len(body)))
                continue
            count = len(body) // stride
            details = []
            passed = True
            for witness in self.witnesses:
                ok, detail = witness(body, stride, count)
                details.append(detail)
                if not ok:
                    passed = False
                    break
            if passed:
                survivors.append((stride, count, details))
            else:
                rejected.append("stride %d rejected: %s" % (stride, details[-1]))
        if len(survivors) == 1:
            stride, count, details = survivors[0]
            return stride, count, details
        if not survivors:
            raise LayoutError("%s: no candidate stride satisfies the witnesses (%s)"
                              % (self.name, "; ".join(rejected) or "no candidates"))
        raise LayoutError("%s: %d candidate strides satisfy the witnesses: %s"
                          % (self.name, len(survivors),
                             ", ".join(str(item[0]) for item in survivors)))

    def describe(self):
        """JSON-friendly description of this table for a decoded document."""
        return {"table": self.name, "magic": self.magic.decode("ascii"),
                "container": self.container, "layout": self.layout,
                "strides": list(self.strides), "candidates": self.candidates,
                "basis": self.basis, "note": self.note,
                "identifier": self.identifier, "certain": self.certain,
                "rowNumbered": self.row_numbered,
                "fields": describe_fields(self.fields)}


def unknown_segments(fields, stride):
    """Return the (offset, size) gaps of a record that no field covers."""
    segments = []
    cursor = 0
    for field in sorted(fields, key=lambda item: item.offset):
        if field.offset > cursor:
            segments.append((cursor, field.offset - cursor))
        cursor = field.end
    if cursor < stride:
        segments.append((cursor, stride - cursor))
    return segments


__all__ = ["Field", "LayoutError", "TableSchema", "unknown_segments", "at_least_rows",
           "column_constant", "columns_nondecreasing", "fixed_text", "index_at",
           "index_at_zero", "keys_contiguous", "keys_contiguous_at", "keys_unique",
           "keys_unique_sorted", "row_count_in", "text_names", "u32_index_at_zero",
           "u8_index_at_zero", "value_domain", "zero_tail"]
