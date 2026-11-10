"""Decode and encode the fixed-stride parameter tables (``.tp`` and ``.tb``).

Both container families are a four-byte magic followed by a whole number of
fixed-stride records.  A decoded document holds one object per record: the
named fields the schema establishes plus the record's unexplored byte ranges as
hex, keyed by offset.  Encoding writes every named field and every unknown range
back into a fresh record buffer and refuses to finish unless the buffer is
completely covered, so a document can never silently drop or invent bytes.
"""

import json

from .fields import FieldError
from .schema import unknown_segments


DOCUMENT_FORMAT = "dqm-game-data/1"
RECORD_KIND = "records"
MAGIC_SIZE = 4
UNKNOWN_KEY = "unknown"


class CodecError(ValueError):
    """Raised when a document and a file disagree about the byte layout."""


def identify(data, schemas):
    """Return the schema whose magic and suffix match ``data``, or None."""
    if len(data) < MAGIC_SIZE:
        return None
    magic = data[:MAGIC_SIZE]
    for schema in schemas:
        if schema.magic == magic:
            return schema
    return None


def decode(data, schema, source=""):
    """Decode one parameter file into an editable document."""
    if data[:MAGIC_SIZE] != schema.magic:
        raise CodecError("%s: expected magic %r, found %r"
                         % (schema.name, schema.magic, data[:MAGIC_SIZE]))
    body = data[MAGIC_SIZE:]
    stride, count, details = schema.resolve(body)
    gaps = unknown_segments(schema.fields, stride)
    records = []
    for index in range(count):
        record = body[index * stride:(index + 1) * stride]
        entry = {}
        for field in schema.fields:
            try:
                entry[field.name] = field.read(record)
            except FieldError as error:
                raise CodecError("%s record %d: %s" % (schema.name, index, error)) from None
        if gaps:
            entry[UNKNOWN_KEY] = [[offset, record[offset:offset + size].hex()]
                                  for offset, size in gaps]
        records.append(entry)
    document = {"format": DOCUMENT_FORMAT, "kind": RECORD_KIND, "table": schema.name,
                "magic": schema.magic.decode("ascii"), "stride": stride, "count": count,
                "basis": schema.basis, "note": schema.note, "witnesses": details,
                "fields": schema.describe()["fields"], "records": records}
    if source:
        document["source"] = source
    return document


def encode(document, schema):
    """Encode a document back into the bytes of one parameter file."""
    if document.get("format") != DOCUMENT_FORMAT or document.get("kind") != RECORD_KIND:
        raise CodecError("document is not a %s %s document"
                         % (DOCUMENT_FORMAT, RECORD_KIND))
    if document.get("table") != schema.name:
        raise CodecError("document is for table %r, not %r"
                         % (document.get("table"), schema.name))
    stride = document["stride"]
    if stride not in schema.strides:
        raise CodecError("%s: stride %r is not one of %r"
                         % (schema.name, stride, list(schema.strides)))
    if schema.magic.decode("ascii") != document.get("magic"):
        raise CodecError("%s: document magic %r does not match the schema"
                         % (schema.name, document.get("magic")))
    gaps = unknown_segments(schema.fields, stride)
    records = document["records"]
    if len(records) * stride > 0xFFFFFFFF:
        raise CodecError("%s: record count is implausible" % schema.name)
    output = bytearray(schema.magic)
    for index, entry in enumerate(records):
        output += _encode_record(schema, stride, gaps, entry, index)
    return bytes(output)


def _encode_record(schema, stride, gaps, entry, index):
    """Serialise one record, proving that every byte is written exactly once."""
    buffer = bytearray(stride)
    covered = bytearray(stride)
    for field in schema.fields:
        if field.name not in entry:
            raise CodecError("%s record %d: missing field %r"
                             % (schema.name, index, field.name))
        temporary = bytearray(stride)
        try:
            field.write(temporary, entry[field.name])
        except FieldError as error:
            raise CodecError("%s record %d: %s" % (schema.name, index, error)) from None
        buffer[field.offset:field.end] = temporary[field.offset:field.end]
        for position in range(field.offset, field.end):
            if covered[position]:
                raise CodecError("%s record %d: field %r overlaps another field"
                                 % (schema.name, index, field.name))
            covered[position] = 1
    supplied = entry.get(UNKNOWN_KEY, [])
    if bool(supplied) != bool(gaps):
        raise CodecError("%s record %d: the document has %d unknown ranges but the "
                         "schema leaves %d" % (schema.name, index, len(supplied), len(gaps)))
    for (offset, size), item in zip(gaps, supplied):
        if not isinstance(item, list) or len(item) != 2 or item[0] != offset:
            raise CodecError("%s record %d: expected an unknown range at offset %d"
                             % (schema.name, index, offset))
        try:
            block = bytes.fromhex(item[1])
        except (TypeError, ValueError):
            raise CodecError("%s record %d: unknown range at %d is not hex"
                             % (schema.name, index, offset)) from None
        if len(block) != size:
            raise CodecError("%s record %d: unknown range at %d holds %d bytes, not %d"
                             % (schema.name, index, offset, len(block), size))
        buffer[offset:offset + size] = block
        for position in range(offset, offset + size):
            if covered[position]:
                raise CodecError("%s record %d: unknown range at %d overlaps a field"
                                 % (schema.name, index, offset))
            covered[position] = 1
    missing = covered.find(0)
    if missing >= 0:
        raise CodecError("%s record %d: no value covers byte %d"
                         % (schema.name, index, missing))
    return bytes(buffer)


def decode_json(text, schema):
    """Parse a decoded document from its JSON text."""
    try:
        document = json.loads(text)
    except json.JSONDecodeError as error:
        raise CodecError("document is not valid JSON: %s" % error) from None
    if not isinstance(document, dict):
        raise CodecError("document must be a JSON object")
    return document


def load_schema(schemas, name):
    """Return the schema called ``name`` or raise a helpful error."""
    for schema in schemas:
        if schema.name == name:
            return schema
    known = ", ".join(sorted(item.name for item in schemas))
    raise CodecError("unknown table %r; characterised tables are: %s" % (name, known))


def dump_json(document):
    """Serialise a document with one record per line so diffs stay readable."""
    head = {key: value for key, value in document.items() if key != "records"}
    lines = [json.dumps(head, indent=2, ensure_ascii=False)[:-2] + ',\n  "records": [']
    body = ",\n".join("    " + json.dumps(record, ensure_ascii=False, sort_keys=False)
                      for record in document["records"])
    lines.append(body)
    lines.append("  ]\n}")
    return "\n".join(lines) + "\n"


__all__ = ["CodecError", "DOCUMENT_FORMAT", "MAGIC_SIZE", "RECORD_KIND", "decode",
           "decode_json", "dump_json", "encode", "identify", "load_schema"]
