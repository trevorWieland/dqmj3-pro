"""Field kinds for the game-data record codecs.

A field is a named byte range inside a fixed-stride record.  Every field knows
how to read its value out of a record and how to write one back, and every
write is validated so that a codec can never emit a value it could not read
back.  Values not described by a field stay in the record as explicit unknown
bytes; the codecs never guess at them.

Japanese text is handled as cp932 (Microsoft Shift-JIS), the superset of
Shift-JIS that the game's own strings use.  Decoding and re-encoding cp932 is
byte-exact for every sequence that decodes, which is what makes the text fields
safe to round-trip.
"""

import struct


JAPANESE_ENCODING = "cp932"
WESTERN_ENCODING = "ascii"

INTEGER_FORMATS = {
    "u8": ("<B", 0, 0xFF),
    "u16": ("<H", 0, 0xFFFF),
    "u32": ("<I", 0, 0xFFFFFFFF),
    "s8": ("<b", -0x80, 0x7F),
    "s16": ("<h", -0x8000, 0x7FFF),
    "s32": ("<i", -0x80000000, 0x7FFFFFFF),
}
FLOAT_FORMATS = {"f32": "<f"}
TEXT_ENCODINGS = {"sjis": JAPANESE_ENCODING, "ascii": WESTERN_ENCODING}
RAW_KIND = "bytes"


class FieldError(ValueError):
    """Raised when a field value cannot be represented in its byte range."""


class Field:
    """One named byte range inside a record.

    ``kind`` is an integer kind, ``f32``, ``sjis``/``ascii`` (fixed-width text)
    or ``bytes`` (an opaque value the schema author could not identify).
    ``width`` is required for the text and ``bytes`` kinds.
    ``refers_to`` names the identifier space the value points into; the
    reference query uses it to find inbound edges.
    """

    def __init__(self, name, offset, kind, width=None, note="", refers_to=None):
        if kind in INTEGER_FORMATS:
            size = struct.calcsize(INTEGER_FORMATS[kind][0])
        elif kind in FLOAT_FORMATS:
            size = struct.calcsize(FLOAT_FORMATS[kind])
        elif kind in TEXT_ENCODINGS or kind == RAW_KIND:
            if width is None or width <= 0:
                raise FieldError("field %r of kind %r needs a width" % (name, kind))
            size = width
        else:
            raise FieldError("unknown field kind %r" % (kind,))
        if offset < 0:
            raise FieldError("field %r has a negative offset" % (name,))
        self.name = name
        self.offset = offset
        self.kind = kind
        self.width = size
        self.note = note
        self.refers_to = refers_to

    @property
    def end(self):
        """Offset one past the last byte this field occupies."""
        return self.offset + self.width

    def read(self, record):
        """Decode this field out of one record."""
        block = record[self.offset:self.end]
        if len(block) != self.width:
            raise FieldError("field %r runs past the end of the record" % self.name)
        if self.kind in INTEGER_FORMATS:
            return struct.unpack(INTEGER_FORMATS[self.kind][0], block)[0]
        if self.kind in FLOAT_FORMATS:
            return struct.unpack(FLOAT_FORMATS[self.kind], block)[0]
        if self.kind in TEXT_ENCODINGS:
            return _decode_text(self.name, block, TEXT_ENCODINGS[self.kind])
        return block.hex()

    def write(self, record, value):
        """Encode one value into this field's byte range."""
        if self.kind in INTEGER_FORMATS:
            low, high = INTEGER_FORMATS[self.kind][1], INTEGER_FORMATS[self.kind][2]
            if not isinstance(value, int) or isinstance(value, bool):
                raise FieldError("field %r wants an integer, got %r" % (self.name, value))
            if not low <= value <= high:
                raise FieldError("field %r wants %d..%d, got %d" % (self.name, low, high, value))
            block = struct.pack(INTEGER_FORMATS[self.kind][0], value)
        elif self.kind in FLOAT_FORMATS:
            if not isinstance(value, (int, float)) or isinstance(value, bool):
                raise FieldError("field %r wants a number, got %r" % (self.name, value))
            block = struct.pack(FLOAT_FORMATS[self.kind], value)
            if struct.unpack(FLOAT_FORMATS[self.kind], block)[0] != value:
                raise FieldError("field %r cannot hold %r exactly" % (self.name, value))
        elif self.kind in TEXT_ENCODINGS:
            block = _encode_text(self.name, value, TEXT_ENCODINGS[self.kind], self.width)
        else:
            block = _decode_raw(self.name, value, self.width)
        record[self.offset:self.end] = block


def _decode_text(name, block, encoding):
    """Decode a fixed-width NUL-padded text field, rejecting stray trailing bytes."""
    end = block.find(b"\x00")
    payload = block if end < 0 else block[:end]
    if end >= 0 and any(block[end:]):
        raise FieldError("field %r has bytes after its terminator" % name)
    try:
        return payload.decode(encoding)
    except UnicodeDecodeError as error:
        raise FieldError("field %r is not valid %s text: %s" % (name, encoding, error)) from None


def _encode_text(name, value, encoding, width):
    """Encode fixed-width NUL-padded text, refusing anything that would not round-trip."""
    if not isinstance(value, str):
        raise FieldError("field %r wants text, got %r" % (name, value))
    try:
        payload = value.encode(encoding)
    except UnicodeEncodeError as error:
        raise FieldError("field %r cannot encode %r as %s: %s"
                         % (name, value, encoding, error)) from None
    if len(payload) > width:
        raise FieldError("field %r holds %d bytes but the value needs %d"
                         % (name, width, len(payload)))
    block = payload + b"\x00" * (width - len(payload))
    if _decode_text(name, block, encoding) != value:
        raise FieldError("field %r does not round-trip the value %r" % (name, value))
    return block


def _decode_raw(name, value, width):
    """Decode a hex byte string into exactly ``width`` bytes."""
    if not isinstance(value, str):
        raise FieldError("field %r wants a hex string, got %r" % (name, value))
    try:
        block = bytes.fromhex(value)
    except ValueError:
        raise FieldError("field %r is not a hex string: %r" % (name, value)) from None
    if len(block) != width:
        raise FieldError("field %r holds %d bytes but the value has %d"
                         % (name, width, len(block)))
    return block


def describe_fields(fields):
    """Return a JSON-friendly description of a record layout for documents."""
    return [{"name": field.name, "offset": field.offset, "kind": field.kind,
             "width": field.width, "note": field.note}
            for field in sorted(fields, key=lambda item: item.offset)]
