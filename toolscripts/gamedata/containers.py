"""Codecs for the two parameter tables that are not a flat record array.

Most ``.tp`` files are a magic followed by ``count * stride`` bytes.  Two
families are different, and both were reported uncharacterised until their
headers were measured:

``indexed`` -- ``AIAction.tp`` and ``RaceAIAction.tp``
    ::

        u32 entryCount
        u32 dataOffset                 == 8 + 4 * entryCount
        entryCount * (u16 offset, u16 length)   -- in u16 words
        u16 poolA[poolWords]
        u16 poolB[poolWords]

    The entries name one range in each of two equal-length pools of u16 words.
    Ranges may be shared: many entries point at the same script.  In every
    measured file the positive ranges tile the pool exactly (``poolWords`` is
    the maximum offset+length), which is the witness that makes the header a
    measurement rather than a coincidence.  The words are operation data whose
    meaning is not established, so they are preserved as u16 values and never
    renamed into opcodes or operands.

``named`` -- ``BattleScriptActionParam``, ``BattleScriptFeatParam``,
``BattleScriptItemParam``
    ::

        u32 slotCount
        u32 dataOffset                 == 8 + 32 * slotCount
        slotCount * char[32]           -- zero-padded ASCII name slots
        fixed-stride records

    The record stride is the one candidate that makes the u16 at +0 equal the
    row number in every record.  ``BattleScriptActionParam`` has 1024 records
    of 64 bytes, the feat and item tables 532 and 512 records of 40 bytes.  The
    slot count is independent of the record count; the toolchain reports both
    and never treats one as the other.

Both codecs preserve every byte they do not name, and both refuse to encode a
document whose header, offsets, lengths or slot padding disagree with the
measured structure.
"""

import json
import struct

from .schema import LayoutError, index_at

DOCUMENT_FORMAT = "dqm-game-data/1"
INDEXED_KIND = "indexed"
NAMED_KIND = "named"
HEADER_SIZE = 8
SLOT_WIDTH = 32
WORD = struct.Struct("<H")
PAIR = struct.Struct("<HH")


def _words(block):
    """Unpack a byte string that must be a whole number of u16 words."""
    if len(block) % 2:
        raise LayoutError("a pool has an odd byte length (%d)" % len(block))
    return list(struct.unpack("<%dH" % (len(block) // 2), block))


def _pack_words(words, name):
    """Pack a list of u16 words, validating each value."""
    for index, word in enumerate(words):
        if not isinstance(word, int) or isinstance(word, bool) or not 0 <= word <= 0xFFFF:
            raise LayoutError("%s word %d is not a u16: %r" % (name, index, word))
    return struct.pack("<%dH" % len(words), *words)


def _coverage(entries, pool_words):
    """Return (max_end, first_gap) for the union of entry ranges."""
    covered = bytearray(pool_words)
    maximum = 0
    for entry in entries:
        start, length = entry["offset"], entry["length"]
        if start < 0 or length < 0:
            raise LayoutError("an entry has a negative offset or length")
        if start + length > pool_words:
            raise LayoutError("entry at %d length %d runs past the %d-word pool"
                              % (start, length, pool_words))
        maximum = max(maximum, start + length)
        if length:
            covered[start:start + length] = b"\x01" * length
    gap = covered.find(0)
    return maximum, (None if gap < 0 else gap)


def decode_indexed(data, schema):
    """Decode an ``indexed`` container into entries and two word pools."""
    body = data[4:]
    if len(body) < HEADER_SIZE:
        raise LayoutError("%s: body is shorter than the indexed header" % schema.name)
    count, data_offset = struct.unpack_from("<II", body, 0)
    if count == 0:
        raise LayoutError("%s: the indexed header declares no entries" % schema.name)
    expected = HEADER_SIZE + 4 * count
    if data_offset != expected:
        raise LayoutError("%s: data offset %d is not 8 + 4 * %d"
                          % (schema.name, data_offset, count))
    if len(body) <= data_offset:
        raise LayoutError("%s: no pool follows the entry table" % schema.name)
    tail = len(body) - data_offset
    if tail % 4:
        raise LayoutError("%s: %d bytes of pool do not split into two equal pools"
                          % (schema.name, tail))
    pool_words = tail // 4
    entries = [{"offset": PAIR.unpack_from(body, HEADER_SIZE + 4 * row)[0],
                "length": PAIR.unpack_from(body, HEADER_SIZE + 4 * row)[1]}
               for row in range(count)]
    maximum, gap = _coverage(entries, pool_words)
    if gap is not None:
        raise LayoutError("%s: no entry covers word %d of %d, so the pool is not "
                          "fully described by the entry table"
                          % (schema.name, gap, pool_words))
    if maximum != pool_words:
        raise LayoutError("%s: entries reach word %d but the pools hold %d words"
                          % (schema.name, maximum, pool_words))
    first = _words(body[data_offset:data_offset + 2 * pool_words])
    second = _words(body[data_offset + 2 * pool_words:])
    return {"format": DOCUMENT_FORMAT, "kind": INDEXED_KIND, "table": schema.name,
            "magic": schema.magic.decode("ascii"), "count": count,
            "entries": entries, "pools": [first, second],
            "basis": schema.basis, "note": schema.note,
            "witnesses": ["%d entries point into two %d-word pools; the ranges "
                          "cover every word" % (count, pool_words)]}


def encode_indexed(document, schema):
    """Encode an ``indexed`` document back into container bytes."""
    _check_header(document, schema, INDEXED_KIND)
    entries = document.get("entries")
    pools = document.get("pools")
    if not isinstance(entries, list) or not entries:
        raise LayoutError("%s: the document has no entry list" % schema.name)
    if not isinstance(pools, list) or len(pools) != 2:
        raise LayoutError("%s: an indexed document needs exactly two pools" % schema.name)
    count = len(entries)
    if document.get("count") != count:
        raise LayoutError("%s: document says %r entries but holds %d"
                          % (schema.name, document.get("count"), count))
    if len(pools[0]) != len(pools[1]):
        raise LayoutError("%s: the two pools hold %d and %d words"
                          % (schema.name, len(pools[0]), len(pools[1])))
    pool_words = len(pools[0])
    for entry in entries:
        if not isinstance(entry, dict) or set(entry) != {"offset", "length"}:
            raise LayoutError("%s: every entry needs exactly offset and length"
                              % schema.name)
    maximum, gap = _coverage(entries, pool_words)
    if gap is not None:
        raise LayoutError("%s: no entry covers word %d, so encoding would drop it"
                          % (schema.name, gap))
    if maximum != pool_words:
        raise LayoutError("%s: entries reach word %d but the pools hold %d words"
                          % (schema.name, maximum, pool_words))
    table = bytearray()
    for entry in entries:
        table += PAIR.pack(entry["offset"], entry["length"])
    return (schema.magic + struct.pack("<II", count, HEADER_SIZE + 4 * count)
            + bytes(table) + _pack_words(pools[0], "pool A")
            + _pack_words(pools[1], "pool B"))


def decode_named(data, schema):
    """Decode a ``named`` battle-script container."""
    body = data[4:]
    if len(body) < HEADER_SIZE:
        raise LayoutError("%s: body is shorter than the named header" % schema.name)
    slot_count, data_offset = struct.unpack_from("<II", body, 0)
    if slot_count == 0:
        raise LayoutError("%s: the header declares no name slots" % schema.name)
    expected = HEADER_SIZE + SLOT_WIDTH * slot_count
    if data_offset != expected:
        raise LayoutError("%s: data offset %d is not 8 + 32 * %d"
                          % (schema.name, data_offset, slot_count))
    if data_offset > len(body):
        raise LayoutError("%s: the name table runs past the body" % schema.name)
    names = []
    for row in range(slot_count):
        slot = body[HEADER_SIZE + SLOT_WIDTH * row:HEADER_SIZE + SLOT_WIDTH * (row + 1)]
        names.append(_decode_slot(slot, schema.name, row))
    records = body[data_offset:]
    stride, count = _resolve_stride(records, schema)
    decoded = []
    for row in range(count):
        record = records[row * stride:(row + 1) * stride]
        index = WORD.unpack_from(record, 0)[0]
        if index != row:
            raise LayoutError("%s: record %d starts with index %d" % (schema.name, row, index))
        decoded.append({"index": index, "unknown": record[2:].hex()})
    return {"format": DOCUMENT_FORMAT, "kind": NAMED_KIND, "table": schema.name,
            "magic": schema.magic.decode("ascii"), "nameCount": slot_count,
            "names": names, "stride": stride, "count": count,
            "records": decoded, "basis": schema.basis, "note": schema.note,
            "witnesses": ["%d name slots of 32 bytes; the record stride %d makes the "
                          "u16 at +0 equal the row number in all %d records"
                          % (slot_count, stride, count)]}


def _decode_slot(slot, table, row):
    """Decode one 32-byte name slot, refusing bytes after the terminator."""
    end = slot.find(b"\x00")
    payload = slot if end < 0 else slot[:end]
    if end >= 0 and any(slot[end:]):
        raise LayoutError("%s: name slot %d has bytes after its terminator"
                          % (table, row))
    try:
        text = payload.decode("ascii")
    except UnicodeDecodeError:
        raise LayoutError("%s: name slot %d is not ASCII" % (table, row)) from None
    if any(ord(character) < 0x20 for character in text):
        raise LayoutError("%s: name slot %d holds control characters" % (table, row))
    return text


def _resolve_stride(records, schema):
    """Return the one stride whose records number themselves, or raise."""
    survivors = []
    for stride in schema.strides:
        if len(records) % stride:
            continue
        count = len(records) // stride
        if count < 2:
            continue
        ok, detail = index_at(0, "u16")(records, stride, count)
        if ok:
            survivors.append((stride, count, detail))
    if len(survivors) == 1:
        return survivors[0][0], survivors[0][1]
    if not survivors:
        raise LayoutError("%s: no declared stride numbers every record (%s)"
                          % (schema.name, "records are %d bytes" % len(records)))
    raise LayoutError("%s: strides %s all number their records"
                      % (schema.name, ", ".join(str(item[0]) for item in survivors)))


def encode_named(document, schema):
    """Encode a ``named`` document back into container bytes."""
    _check_header(document, schema, NAMED_KIND)
    names = document.get("names")
    if not isinstance(names, list) or not names:
        raise LayoutError("%s: the document has no name slots" % schema.name)
    if document.get("nameCount") != len(names):
        raise LayoutError("%s: document says %r slots but holds %d"
                          % (schema.name, document.get("nameCount"), len(names)))
    stride = document.get("stride")
    if stride not in schema.strides:
        raise LayoutError("%s: stride %r is not one of %r"
                          % (schema.name, stride, list(schema.strides)))
    records = document.get("records")
    if not isinstance(records, list) or len(records) < 2:
        raise LayoutError("%s: the document has no records" % schema.name)
    if document.get("count") != len(records):
        raise LayoutError("%s: document says %r records but holds %d"
                          % (schema.name, document.get("count"), len(records)))
    table = bytearray()
    for row, name in enumerate(names):
        if not isinstance(name, str):
            raise LayoutError("%s: name slot %d is not text" % (schema.name, row))
        try:
            payload = name.encode("ascii")
        except UnicodeEncodeError:
            raise LayoutError("%s: name slot %d is not ASCII" % (schema.name, row)) from None
        if len(payload) >= SLOT_WIDTH:
            raise LayoutError("%s: name slot %d needs %d bytes but the slot holds %d"
                              % (schema.name, row, len(payload) + 1, SLOT_WIDTH))
        table += payload + b"\x00" * (SLOT_WIDTH - len(payload))
    body = bytearray()
    for row, record in enumerate(records):
        if not isinstance(record, dict) or set(record) != {"index", "unknown"}:
            raise LayoutError("%s: every record needs exactly index and unknown"
                              % schema.name)
        if record["index"] != row:
            raise LayoutError("%s: record %d says index %r" % (schema.name, row,
                                                               record["index"]))
        try:
            payload = bytes.fromhex(record["unknown"])
        except (TypeError, ValueError):
            raise LayoutError("%s: record %d unknown bytes are not hex"
                              % (schema.name, row)) from None
        if len(payload) != stride - 2:
            raise LayoutError("%s: record %d holds %d unknown bytes, not %d"
                              % (schema.name, row, len(payload), stride - 2))
        body += WORD.pack(row) + payload
    return (schema.magic + struct.pack("<II", len(names), HEADER_SIZE + SLOT_WIDTH * len(names))
            + bytes(table) + bytes(body))


def _check_header(document, schema, kind):
    """Validate the document envelope shared by both container codecs."""
    if not isinstance(document, dict):
        raise LayoutError("document must be an object")
    if document.get("format") != DOCUMENT_FORMAT or document.get("kind") != kind:
        raise LayoutError("document is not a %s %s document" % (DOCUMENT_FORMAT, kind))
    if document.get("table") != schema.name:
        raise LayoutError("document is for %r, not %r"
                          % (document.get("table"), schema.name))
    if document.get("magic") != schema.magic.decode("ascii"):
        raise LayoutError("%s: document magic %r does not match the schema"
                          % (schema.name, document.get("magic")))


def dump_json(document):
    """Serialise a container document with one record per line."""
    records = document.get("records")
    if records is None:
        return json.dumps(document, indent=2, ensure_ascii=False) + "\n"
    head = {key: value for key, value in document.items() if key != "records"}
    lines = [json.dumps(head, indent=2, ensure_ascii=False)[:-2] + ',\n  "records": [']
    lines.append(",\n".join("    " + json.dumps(record, ensure_ascii=False)
                            for record in records))
    lines.append("  ]\n}")
    return "\n".join(lines) + "\n"


__all__ = ["DOCUMENT_FORMAT", "INDEXED_KIND", "NAMED_KIND", "decode_indexed",
           "decode_named", "dump_json", "encode_indexed", "encode_named"]
