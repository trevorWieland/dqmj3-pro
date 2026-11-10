"""Decode and encode the message archives (``.mes``).

A message archive is a little-endian container::

    u32 count
    count * (u32 flags, u32 byteOffset)   -- the entry table
    payload                               -- text and/or opaque records

The entry table ends exactly where the first payload byte begins, which the
decoder checks.  An offset of zero means the entry has no payload.

Not every entry points at text.  Some archives mix NUL-terminated UTF-16LE
strings with opaque four-byte records, and the ``flags`` word is what tells the
two apart in the game's own loader -- a fact this toolchain has not established.
It therefore decides by evidence instead: an entry is a string when a terminated
UTF-16LE run starts at its offset and ends no later than the next entry.  Every
other entry keeps its raw offset and is carried through untouched.

Payload bytes that no string occupies are stored as explicit gaps, each with the
offset it started at, so re-encoding an unedited document reproduces the
original file byte for byte and editing one string only moves the bytes after
it.  When a string changes length, the offsets of opaque entries are translated
through the gaps they live in, and the encode refuses if an opaque offset cannot
be placed.
"""

import struct


DOCUMENT_FORMAT = "dqm-game-data/1"
MESSAGE_KIND = "messages"
ENTRY_FORMAT = "<II"
ENTRY_SIZE = 8
HEADER_SIZE = 4
TERMINATOR = b"\x00\x00"


class MessageError(ValueError):
    """Raised when a message archive does not match the documented layout."""


def looks_like_archive(data):
    """Cheap structural test for the message container."""
    if len(data) < HEADER_SIZE + ENTRY_SIZE:
        return False
    count = struct.unpack_from("<I", data, 0)[0]
    if not 1 <= count <= (len(data) - HEADER_SIZE) // ENTRY_SIZE:
        return False
    array_end = HEADER_SIZE + count * ENTRY_SIZE
    offsets = [struct.unpack_from(ENTRY_FORMAT, data, HEADER_SIZE + index * ENTRY_SIZE)[1]
               for index in range(count)]
    live = [offset for offset in offsets if offset]
    return bool(live) and min(live) >= array_end


def decode(data, name=""):
    """Decode one message archive into an editable document."""
    count = struct.unpack_from("<I", data, 0)[0]
    array_end = HEADER_SIZE + count * ENTRY_SIZE
    if array_end > len(data):
        raise MessageError("%s: entry table needs %d bytes but the file has %d"
                           % (name, array_end, len(data)))
    rows = [struct.unpack_from(ENTRY_FORMAT, data, HEADER_SIZE + index * ENTRY_SIZE)
            for index in range(count)]
    live = sorted({offset for _flags, offset in rows if offset})
    if live and min(live) < array_end:
        raise MessageError("%s: a payload starts at %d, inside the entry table ending at %d"
                           % (name, min(live), array_end))
    spans = _find_strings(data, live, name)
    gaps = _collect_gaps(data, spans, array_end)
    entries = []
    for flags, offset in rows:
        entry = {"flags": flags, "offset": offset}
        if offset in spans:
            entry["text"] = spans[offset][0]
        elif offset:
            entry["text"] = None
        else:
            entry["text"] = ""
        entries.append(entry)
    return {"format": DOCUMENT_FORMAT, "kind": MESSAGE_KIND, "table": name,
            "count": count, "entries": entries, "gaps": gaps,
            "note": "an entry whose text is null points at opaque payload; it is "
                    "carried through untouched and never edited"}


def _find_strings(data, offsets, name):
    """Return {offset: (text, end)} for every offset that really holds a string."""
    spans = {}
    for index, offset in enumerate(offsets):
        limit = offsets[index + 1] if index + 1 < len(offsets) else len(data)
        found = _try_string(data, offset, limit)
        if found is not None:
            spans[offset] = found
    return spans


def _try_string(data, offset, limit):
    """Read a terminated UTF-16LE string that ends at or before ``limit``."""
    if offset % 2:
        return None
    position = offset
    while position + 2 <= limit:
        if data[position:position + 2] == TERMINATOR:
            try:
                text = data[offset:position].decode("utf-16-le")
            except UnicodeDecodeError:
                return None
            if "\x00" in text:
                return None
            return text, position + 2
        position += 2
    return None


def _collect_gaps(data, spans, start):
    """Return the uncovered byte ranges as [{offset, hex}] with a trailing range."""
    gaps = []
    cursor = start
    for offset in sorted(spans):
        if offset < cursor:
            raise MessageError("overlapping strings at offset %d" % offset)
        gaps.append({"offset": cursor, "hex": data[cursor:offset].hex()})
        cursor = spans[offset][1]
    gaps.append({"offset": cursor, "hex": data[cursor:].hex()})
    return gaps


def encode(document):
    """Encode a message document back into archive bytes."""
    if document.get("format") != DOCUMENT_FORMAT or document.get("kind") != MESSAGE_KIND:
        raise MessageError("document is not a %s %s document"
                           % (DOCUMENT_FORMAT, MESSAGE_KIND))
    entries = document["entries"]
    count = document["count"]
    if len(entries) != count:
        raise MessageError("document says %d entries but holds %d" % (count, len(entries)))
    texts = {}
    for entry in entries:
        if entry["offset"] and entry["text"] is not None:
            texts.setdefault(entry["offset"], entry["text"])
    gaps = document["gaps"]
    if len(gaps) != len(texts) + 1:
        raise MessageError("document needs %d gaps but holds %d"
                           % (len(texts) + 1, len(gaps)))
    array_end = HEADER_SIZE + count * ENTRY_SIZE
    blob = bytearray()
    relocated, gap_start = {}, {}
    for index, original in enumerate(sorted(texts)):
        gap_start[index] = array_end + len(blob)
        blob += bytes.fromhex(gaps[index]["hex"])
        relocated[original] = array_end + len(blob)
        blob += _payload(texts[original])
    gap_start[len(texts)] = array_end + len(blob)
    blob += bytes.fromhex(gaps[-1]["hex"])
    table = bytearray()
    for entry in entries:
        offset = _destination(entry, relocated, gaps, gap_start)
        table += struct.pack(ENTRY_FORMAT, entry["flags"], offset)
    return struct.pack("<I", count) + bytes(table) + bytes(blob)


def _payload(text):
    """Encode one string with its terminator."""
    if "\x00" in text:
        raise MessageError("a message contains a NUL character")
    try:
        return text.encode("utf-16-le") + TERMINATOR
    except UnicodeEncodeError as error:
        raise MessageError("a message cannot be encoded: %s" % error) from None


def _destination(entry, relocated, gaps, gap_start):
    """Return the new offset for one entry, translating opaque payload offsets."""
    original = entry["offset"]
    if not original:
        return 0
    if original in relocated:
        return relocated[original]
    for index, gap in enumerate(gaps):
        start = gap["offset"]
        size = len(gap["hex"]) // 2
        if start <= original < start + size:
            return gap_start[index] + (original - start)
    raise MessageError("opaque payload at offset %d lives inside a string and cannot move"
                       % original)


__all__ = ["MessageError", "looks_like_archive", "decode", "encode"]
