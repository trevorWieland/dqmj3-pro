"""Locating extracted game files, proving round trips, and diffing bytes.

Everything here works on files the user extracted from their own copy of the
game.  Nothing is read from the repository and nothing derived from the game is
written into it: the default search root is ``generated/asset-samples`` because
that is where the project's own extraction step puts content, and every command
accepts an explicit ``--root`` for anybody else's layout.
"""

import os

from . import messages, records
from .schema import LayoutError


DEFAULT_ROOTS = ("generated/asset-samples", "generated")
TABLE_SUFFIXES = (".tp", ".tb")
MESSAGE_SUFFIX = ".mes"


class WorkspaceError(ValueError):
    """Raised when a workspace root or a file in it cannot be used."""


def find_root(start=None):
    """Return the directory that holds extracted content, searching upwards."""
    cursor = os.path.abspath(start or os.getcwd())
    while True:
        for relative in DEFAULT_ROOTS:
            path = os.path.join(cursor, relative)
            if os.path.isdir(path):
                return path
        parent = os.path.dirname(cursor)
        if parent == cursor:
            raise WorkspaceError("no extracted content found; pass --root")
        cursor = parent


def table_files(root):
    """Yield (relative path, absolute path) for every parameter table under root."""
    for directory, _names, files in sorted(os.walk(root)):
        for name in sorted(files):
            if name.lower().endswith(TABLE_SUFFIXES):
                absolute = os.path.join(directory, name)
                yield os.path.relpath(absolute, root).replace(os.sep, "/"), absolute


def message_files(root):
    """Yield (relative path, absolute path) for every message archive under root."""
    for directory, _names, files in sorted(os.walk(root)):
        for name in sorted(files):
            if name.lower().endswith(MESSAGE_SUFFIX):
                absolute = os.path.join(directory, name)
                yield os.path.relpath(absolute, root).replace(os.sep, "/"), absolute


def read(path):
    """Read a file, refusing anything that is not a regular file."""
    if not os.path.isfile(path):
        raise WorkspaceError("not a file: %s" % path)
    with open(path, "rb") as handle:
        return handle.read()


def write(path, data):
    """Write bytes, creating the parent directory when needed."""
    parent = os.path.dirname(os.path.abspath(path))
    if parent:
        os.makedirs(parent, exist_ok=True)
    with open(path, "wb") as handle:
        handle.write(data)


def roundtrip_table(data, schema):
    """Decode and re-encode one table, reporting whether the bytes survived.

    ``resolved`` is false when the record stride could not be established for
    this file at all.  That is not a round-trip failure: the toolchain declined
    to guess, so it makes no claim about the file either way.
    """
    result = {"table": schema.name, "certain": schema.certain, "ok": False,
              "resolved": True}
    try:
        document = records.decode(data, schema)
    except LayoutError as error:
        result["resolved"] = False
        result["error"] = str(error)
        return result
    try:
        rebuilt = records.encode(document, schema)
    except records.CodecError as error:
        result["error"] = str(error)
        return result
    result.update({"layout": schema.layout,
                   "stride": document.get("stride", 0),
                   "count": document.get("count", 0),
                   "witnesses": document.get("witnesses", [])})
    if rebuilt != data:
        result["error"] = "re-encoded bytes differ at offset %s" % _first_index(rebuilt, data)
        return result
    result["ok"] = True
    return result


def roundtrip_messages(data, name):
    """Decode and re-encode one message archive, reporting whether it survived."""
    result = {"table": name, "certain": True, "ok": False}
    try:
        document = messages.decode(data, name)
        rebuilt = messages.encode(document)
    except (messages.MessageError,) as error:
        result["error"] = str(error)
        return result
    result["count"] = document["count"]
    if rebuilt != data:
        result["error"] = "re-encoded bytes differ at offset %s" % _first_index(rebuilt, data)
        return result
    result["ok"] = True
    return result


def _first_index(left, right):
    """Return the first offset at which two byte strings differ, or their length."""
    limit = min(len(left), len(right))
    for index in range(limit):
        if left[index] != right[index]:
            return index
    return limit


def first_difference(before, after):
    """Return (offset, before byte, after byte) for the first differing byte."""
    limit = min(len(before), len(after))
    for index in range(limit):
        if before[index] != after[index]:
            return index, before[index], after[index]
    if len(before) != len(after):
        return limit, None, None
    return None


def differences(before, after):
    """Return every differing offset as (offset, before byte, after byte)."""
    return [(index, before[index], after[index]) for index in range(min(len(before), len(after)))
            if before[index] != after[index]]


def verify(root, schemas):
    """Round-trip every table and message archive under root and report."""
    by_magic = {schema.magic: schema for schema in schemas}
    report = {"root": os.path.abspath(root), "tables": [], "messages": [],
              "failures": [], "uncharacterised": []}
    for relative, absolute in table_files(root):
        data = read(absolute)
        schema = by_magic.get(data[:records.MAGIC_SIZE])
        if schema is None:
            report["uncharacterised"].append(
                {"path": relative, "magic": _magic_text(data),
                 "reason": "no characterised table carries this magic"})
            continue
        result = roundtrip_table(data, schema)
        result["path"] = relative
        if not result["resolved"]:
            report["uncharacterised"].append({"path": relative,
                                              "magic": _magic_text(data),
                                              "reason": result["error"]})
            continue
        report["tables"].append(result)
        if not result["ok"]:
            report["failures"].append(result)
    for relative, absolute in message_files(root):
        result = roundtrip_messages(read(absolute), relative)
        result["path"] = relative
        report["messages"].append(result)
        if not result["ok"]:
            report["failures"].append(result)
    report["tablesIdentical"] = sum(1 for item in report["tables"] if item["ok"])
    report["messagesIdentical"] = sum(1 for item in report["messages"] if item["ok"])
    report["families"] = len({item["table"] for item in report["tables"]})
    report["certainTables"] = sum(1 for item in report["tables"] if item["certain"])
    report["layouts"] = {}
    for item in report["tables"]:
        layout = item.get("layout", "flat")
        report["layouts"][layout] = report["layouts"].get(layout, 0) + 1
    report["ok"] = not report["failures"]
    return report


def _magic_text(data):
    """Return the four-byte magic as printable ASCII and hex for a report."""
    magic = data[:records.MAGIC_SIZE]
    printable = "".join(chr(byte) if 0x20 <= byte < 0x7F else "?"
                        for byte in magic)
    return "%s (%s)" % (printable, magic.hex())


def load_tables(root, schemas):
    """Decode every characterised table under root.

    Returns ``(loaded, skipped)``: documents keyed by schema name, and the
    relative paths whose record stride could not be established.  A table the
    toolchain cannot decode is skipped rather than guessed, so a reference query
    reports on the tables it really read.
    """
    by_magic = {schema.magic: schema for schema in schemas}
    loaded, skipped = {}, {}
    for relative, absolute in table_files(root):
        data = read(absolute)
        schema = by_magic.get(data[:records.MAGIC_SIZE])
        if schema is None:
            continue
        try:
            document = records.decode(data, schema, relative)
        except LayoutError as error:
            skipped[relative] = str(error)
            continue
        if schema.name in loaded:
            continue
        loaded[schema.name] = document
    return loaded, skipped


__all__ = ["WorkspaceError", "differences", "find_root", "first_difference", "load_tables",
           "message_files", "read", "roundtrip_messages", "roundtrip_table", "table_files",
           "verify", "write"]
