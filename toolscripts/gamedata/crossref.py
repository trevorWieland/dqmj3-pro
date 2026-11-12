"""Cross-reference table names against the game's own scripts and messages.

A name field is much stronger evidence when the same text appears somewhere
else the game reads.  This module builds that evidence offline; it never feeds a
decoded value back into a table and never changes a schema at runtime.

Two independent corpora are scanned:

* every ``.mes`` payload, decoded as UTF-16LE and split on NUL.  The message
  archives mix strings with opaque records and their ``flags`` mapping is not
  established, so this deliberately scans the payload as a byte stream rather
  than claiming to know which entry owns which run.  It answers "does this name
  occur in the message data", not "which message entry is this".
* every Squirrel ``.nut`` file, decoded as cp932.  Battle-script effect names
  occur there verbatim, for example ``EF030_10_TENSION01`` in ``BATTLE044.nut``.

The audit reports counts, not a verdict: a name that does not occur may simply
be stored only in the table.  High overlap is corroboration, never a reason to
rename a field.
"""

import json
import os

from . import workspace

SCRIPT_SUFFIX = ".nut"
MIN_RUN = 2


def message_runs(root):
    """Return the set of UTF-16LE runs found in every message archive."""
    runs = set()
    for _relative, absolute in workspace.message_files(root):
        data = workspace.read(absolute)
        text = data.decode("utf-16-le", errors="ignore")
        for part in text.split("\x00"):
            if len(part) >= MIN_RUN and all(ord(character) >= 0x20 for character in part):
                runs.add(part)
    return runs


def script_text(root):
    """Return one concatenated cp932 text of every Squirrel script under root."""
    pieces = []
    for directory, _names, files in sorted(os.walk(root)):
        for name in sorted(files):
            if not name.lower().endswith(SCRIPT_SUFFIX):
                continue
            with open(os.path.join(directory, name), "rb") as handle:
                pieces.append(handle.read().decode("cp932", errors="replace"))
    return "\n".join(pieces)


def _text_fields(schema):
    """Yield (field name, values) for the text fields of a decoded table."""
    values = [field.name for field in schema.fields
              if field.kind in ("sjis", "ascii")]
    return values


def audit(root, schemas):
    """Return a JSON-friendly cross-reference report for every text field."""
    loaded, _skipped = workspace.load_tables(root, schemas)
    runs = message_runs(root)
    scripts = script_text(root)
    results = []
    for schema in schemas:
        document = loaded.get(schema.name)
        if document is None:
            continue
        rows = document.get("records") or document.get("entries") or []
        for field in _text_fields(schema):
            values = [row.get(field) for row in rows if isinstance(row.get(field), str)]
            values = [value for value in values if value]
            if not values:
                continue
            unique = set(values)
            results.append({
                "table": schema.name,
                "field": field,
                "rows": len(rows),
                "nonEmpty": len(values),
                "unique": len(unique),
                "inMessages": sum(1 for value in unique if value in runs),
                "inScripts": sum(1 for value in unique if value in scripts),
                "examples": sorted(unique)[:3],
            })
        if schema.layout == "named" and document.get("names"):
            names = [name for name in document["names"] if name]
            results.append({
                "table": schema.name,
                "field": "names",
                "rows": document.get("count", 0),
                "nonEmpty": len(names),
                "unique": len(set(names)),
                "inMessages": sum(1 for name in set(names) if name in runs),
                "inScripts": sum(1 for name in set(names) if name in scripts),
                "examples": sorted(set(names))[:3],
            })
    return {"root": os.path.abspath(root), "messageRuns": len(runs),
            "scriptCharacters": len(scripts), "fields": results}


def main(root, schemas, destination=None):
    """Run the audit and print or write its JSON report."""
    report = audit(root, schemas)
    text = json.dumps(report, indent=2, ensure_ascii=False) + "\n"
    if destination:
        workspace.write(destination.encode("utf-8"), text.encode("utf-8"))
    else:
        import sys
        sys.stdout.reconfigure(encoding="utf-8")
        sys.stdout.write(text)
    return 0


__all__ = ["audit", "main", "message_runs", "script_text"]
