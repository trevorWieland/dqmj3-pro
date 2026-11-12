"""Command-line front end: decode, encode, verify and refs.

The commands are deliberately small and composable so that a modder can work in
a shell: decode a table to JSON, edit one number, encode it back, and diff the
result against the original.  ``verify`` is the safety net and the proof: it
round-trips every table and message archive under the extraction root and
reports, per file, whether the bytes came back identical.
"""

import argparse
import json
import sys

from . import containers, crossref, messages, records, references, tables, workspace


def _schema_by_name(name):
    """Return the characterised schema called ``name``."""
    return records.load_schema(tables.TABLES, name)


def _document_for(data, path):
    """Decode whatever kind of game-data file ``data`` is."""
    if path.lower().endswith(workspace.MESSAGE_SUFFIX):
        return messages.decode(data, path.replace("\\", "/"))
    schema = records.identify(data, tables.TABLES)
    if schema is None:
        raise records.CodecError("%s: no characterised table has the magic %r; "
                                 "run `verify` to see which tables are known"
                                 % (path, data[:records.MAGIC_SIZE]))
    return records.decode(data, schema, path.replace("\\", "/"))


def _emit(document, destination):
    """Write a decoded document as JSON to a path or to standard output."""
    if document["kind"] == records.RECORD_KIND:
        text = records.dump_json(document)
    elif document["kind"] in (containers.INDEXED_KIND, containers.NAMED_KIND):
        text = containers.dump_json(document)
    else:
        text = json.dumps(document, indent=2, ensure_ascii=False) + "\n"
    if destination:
        workspace.write(destination.encode("utf-8"), text.encode("utf-8"))
        return 0
    sys.stdout.reconfigure(encoding="utf-8")
    sys.stdout.write(text)
    return 0


def command_list(args):
    """Print the registry: what is decoded, how, and how firmly."""
    for schema in tables.TABLES:
        stride = "/".join(str(item) for item in schema.strides)
        layout = "" if schema.layout == "flat" else schema.layout + " "
        print("%-26s %sstride %-6s %-2s %-8s %s"
              % (schema.name, layout, stride, schema.container,
                 "certain" if schema.certain else "declared",
                 ", ".join(field.name for field in schema.fields) or "(no fields)"))
    print("\nUncharacterised families: %d (see docs/game-data-toolchain.md)"
          % len(tables.UNCHARACTERISED))
    return 0


def command_decode(args):
    """Decode one file into an editable JSON document."""
    data = workspace.read(args.path)
    document = _document_for(data, args.path)
    return _emit(document, args.out)


def command_encode(args):
    """Encode an edited JSON document back into game-data bytes."""
    with open(args.document, encoding="utf-8") as handle:
        text = handle.read()
    document = json.loads(text)
    kind = document.get("kind")
    if kind == records.RECORD_KIND:
        data = records.encode(document, _schema_by_name(document["table"]))
    elif kind in (containers.INDEXED_KIND, containers.NAMED_KIND):
        data = records.encode(document, _schema_by_name(document["table"]))
    elif kind == messages.MESSAGE_KIND:
        data = messages.encode(document)
    else:
        raise records.CodecError("document has no recognised kind (%r)" % (kind,))
    if args.out:
        workspace.write(args.out, data)
    else:
        sys.stdout.buffer.write(data)
    return 0


def command_verify(args):
    """Round-trip every table and archive under the extraction root."""
    root = args.root or workspace.find_root()
    report = workspace.verify(root, tables.TABLES)
    if args.explain:
        for item in report["tables"]:
            shape = ("stride %s" % item.get("stride") if item.get("stride")
                     else item.get("layout", "flat"))
            print("%-52s %-10s %-14s rows %-6s %s"
                  % (item["path"], "identical" if item["ok"] else "FAILED",
                     shape, item.get("count", "?"),
                     "certain" if item.get("certain") else "declared"))
            if not item["ok"]:
                print("    %s" % item.get("error", ""))
        for item in report["uncharacterised"]:
            print("%-52s %-10s %-14s %s"
                  % (item["path"], "opaque", item["magic"], item["reason"]))
        for item in report["messages"]:
            print("%-52s %-10s %-14s rows %s"
                  % (item["path"], "identical" if item["ok"] else "FAILED", "messages",
                     item.get("count", "?")))
    print("root            %s" % report["root"])
    print("tables          %d files, %d families, %d byte-identical, %d failed"
          % (len(report["tables"]), report["families"], report["tablesIdentical"],
             len(report["tables"]) - report["tablesIdentical"]))
    print("confidence      %d certain, %d declared"
          % (report["certainTables"],
             len(report["tables"]) - report["certainTables"]))
    print("layouts         %s"
          % ", ".join("%s %d" % (name, count)
                      for name, count in sorted(report["layouts"].items())))
    print("messages        %d checked, %d byte-identical, %d failed"
          % (len(report["messages"]), report["messagesIdentical"],
             len(report["messages"]) - report["messagesIdentical"]))
    print("uncharacterised %d files (left undecoded rather than guessed)"
          % len(report["uncharacterised"]))
    if args.json:
        workspace.write(args.json.encode("utf-8"),
                        (json.dumps(report, indent=2, ensure_ascii=False) + "\n").encode("utf-8"))
    for failure in report["failures"]:
        print("FAIL %s: %s" % (failure["path"], failure.get("error", "")))
    return 0 if report["ok"] else 1


def command_refs(args):
    """Report what else points at one row of one table."""
    root = args.root or workspace.find_root()
    loaded, skipped = workspace.load_tables(root, tables.TABLES)
    answer = references.query(loaded, tables.TABLES, args.table, args.row)
    if skipped:
        answer["skippedTables"] = skipped
    text = json.dumps(answer, indent=2, ensure_ascii=False) + "\n"
    if args.out:
        workspace.write(args.out.encode("utf-8"), text.encode("utf-8"))
    else:
        sys.stdout.reconfigure(encoding="utf-8")
        sys.stdout.write(text)
    return 0


def command_diff(args):
    """List every byte that differs between two files of the same length."""
    before = workspace.read(args.before)
    after = workspace.read(args.after)
    changes = workspace.differences(before, after)
    print("before %d bytes, after %d bytes, %d bytes differ"
          % (len(before), len(after), len(changes)))
    if len(before) != len(after):
        print("lengths differ, so the files are not a single-field edit")
        return 1
    for offset, old, new in changes:
        print("  offset %d (0x%x): 0x%02x -> 0x%02x" % (offset, offset, old, new))
    return 0


def command_evidence(args):
    """Cross-reference decoded names against scripts and message archives."""
    root = args.root or workspace.find_root()
    return crossref.main(root, tables.TABLES, args.out)


def build_parser():
    """Assemble the argument parser."""
    parser = argparse.ArgumentParser(
        prog="game_data.py",
        description="Decode, edit and re-encode DQMJ3 Professional game data.")
    parser.add_argument("--root", default=None,
                        help="directory holding an extraction (the one containing data/)")
    commands = parser.add_subparsers(dest="command", required=True)

    listing = commands.add_parser("list", help="show the characterised tables")
    listing.set_defaults(handler=command_list)

    decode = commands.add_parser("decode", help="decode a .tp/.tb/.mes file to JSON")
    decode.add_argument("path")
    decode.add_argument("--out", default=None, help="write here instead of stdout")
    decode.set_defaults(handler=command_decode)

    encode = commands.add_parser("encode", help="encode an edited JSON document")
    encode.add_argument("document")
    encode.add_argument("--out", default=None, help="write here instead of stdout")
    encode.set_defaults(handler=command_encode)

    verify = commands.add_parser("verify", help="round-trip every table under the root")
    verify.add_argument("--explain", action="store_true", help="one line per file")
    verify.add_argument("--json", default=None, help="write the full report here")
    verify.set_defaults(handler=command_verify)

    refs = commands.add_parser("refs", help="list what references a row")
    refs.add_argument("--table", required=True)
    refs.add_argument("--row", required=True, type=int)
    refs.add_argument("--out", default=None, help="write here instead of stdout")
    refs.set_defaults(handler=command_refs)

    diff = commands.add_parser("diff", help="show which bytes differ between two files")
    diff.add_argument("before")
    diff.add_argument("after")
    diff.set_defaults(handler=command_diff)

    evidence = commands.add_parser(
        "evidence", help="cross-reference table names against scripts and messages")
    evidence.add_argument("--out", default=None, help="write the report here")
    evidence.set_defaults(handler=command_evidence)
    return parser


def main(argv=None):
    """Run one command and return its exit status."""
    args = build_parser().parse_args(argv)
    try:
        return args.handler(args)
    except (records.CodecError, messages.MessageError, references.ReferenceError,
            workspace.WorkspaceError, ValueError, OSError) as error:
        print("error: %s" % error, file=sys.stderr)
        return 1


__all__ = ["build_parser", "main"]
