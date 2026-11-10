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


def index_at_zero():
    """Witness: the u16 at offset 0 equals the row number in every record."""
    def check(body, stride, count):
        hits = sum(1 for row in range(count) if _u16(body, row * stride) == row)
        return hits == count, "%d/%d rows numbered 0..n-1" % (hits, count)
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


class TableSchema:
    """Everything the codecs need to know about one parameter table."""

    def __init__(self, name, magic, strides, fields=(), witnesses=(), basis="", note="",
                 identifier=None, certain=False, container="tp"):
        """Build a schema.

        ``identifier`` names the identifier space this table defines, so that a
        field elsewhere can declare ``refers_to`` it.  ``certain`` records
        whether the record boundary is corroborated by a structural witness
        rather than resting on exact divisibility alone.  ``container`` is the
        file family the table lives in: ``tp`` or ``tb``.
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

    def resolve(self, body):
        """Return (stride, count) for this body, or raise when it is ambiguous."""
        survivors = []
        rejected = []
        for stride in self.strides:
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
                "container": self.container, "strides": list(self.strides),
                "basis": self.basis, "note": self.note,
                "identifier": self.identifier, "certain": self.certain,
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
           "columns_nondecreasing", "fixed_text", "index_at_zero", "keys_contiguous",
           "keys_unique",
           "keys_unique_sorted", "text_names", "zero_tail"]
