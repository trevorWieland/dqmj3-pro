"""The referential-integrity query.

Adding a monster means touching several files at once.  This module answers the
question a modder actually has: *what else points at the row I am about to
change, and what does this row point at?*  It only reports edges the tables
themselves declare.  Every edge is a field whose schema says which identifier
space it points into (``refers_to``) together with the table that owns that
space (``identifier``), so a reported edge is a value match in a named column,
never a guess about game logic.

Three answers are produced:

``references``
    rows in other tables whose declared reference field equals one of this row's
    identifiers.  These are hard edges and must change with the row.

``outbound``
    rows in other tables that this row points at through its own reference
    fields.  Useful when a modder changes an identifier: everything it pointed
    at has to be re-checked.

``sharedIndex``
    tables whose record count equals this table's and whose first field is the
    row number.  Row *n* of such a table describes the same slot as row *n* of
    this one, because the table itself numbers its records that way.  It is
    reported separately because it is an alignment of numbering, not a pointer.
"""


class ReferenceError(ValueError):
    """Raised when a reference query cannot be answered."""


def identifiers(schema, entry, row_index):
    """Collect (space, value, origin) for the identities this row carries.

    A field counts as the row's identity only when it points into the table's
    own space.  A field pointing somewhere else is an outbound reference, not an
    identity.  When a table declares an identifier but no field carries it, the
    row number is used, which is exact for tables that number their own records.
    """
    found = []
    for field in schema.fields:
        if field.refers_to and field.name in entry and field.refers_to == schema.identifier:
            found.append((field.refers_to, entry[field.name], field.name))
    if schema.identifier is not None and not found:
        found.append((schema.identifier, row_index, "row"))
    return found


def identity(schema, entry, index):
    """Return the value this row is addressed by inside its own identifier space."""
    for field in schema.fields:
        if field.refers_to and field.refers_to == schema.identifier and field.name in entry:
            return entry[field.name]
    return index


def inbound(loaded, schemas, spaces, wanted, skip=None):
    """Find every row in every loaded table that points at one of ``wanted``."""
    by_name = {schema.name: schema for schema in schemas}
    edges = []
    for name, document in sorted(loaded.items()):
        schema = by_name.get(name)
        if schema is None:
            continue
        for field in schema.fields:
            if field.refers_to not in spaces:
                continue
            matches = [index for index, item in enumerate(document["records"])
                       if item.get(field.name) == wanted.get(field.refers_to)
                       and (name, index) != skip]
            if matches:
                edges.append({"table": name, "field": field.name, "space": field.refers_to,
                              "rowCount": len(matches), "rows": matches[:200],
                              "truncated": len(matches) > 200})
    return edges


def targets(loaded, schemas, schema, entry):
    """Resolve the reference fields this row owns into the rows they point at."""
    by_space = {item.identifier: item for item in schemas if item.identifier}
    edges = []
    for field in schema.fields:
        if not field.refers_to or field.name not in entry:
            continue
        owner = by_space.get(field.refers_to)
        if owner is None or owner.name not in loaded:
            continue
        matches = [index for index, item in enumerate(loaded[owner.name]["records"])
                   if identity(owner, item, index) == entry[field.name]]
        if matches:
            edges.append({"table": owner.name, "field": field.name,
                          "space": field.refers_to, "rowCount": len(matches),
                          "rows": matches[:200], "truncated": len(matches) > 200})
    return edges


def shared_index(loaded, schemas, target, row_index):
    """List tables that number their own records and have the same row count."""
    by_name = {schema.name: schema for schema in schemas}
    aligned = []
    for name, document in sorted(loaded.items()):
        if name == target:
            continue
        schema = by_name.get(name)
        if schema is None or len(document["records"]) != len(loaded[target]["records"]):
            continue
        if any(field.name == "index" for field in schema.fields):
            aligned.append({"table": name, "row": row_index,
                            "note": "row %d of a file that numbers its own records"
                                    % row_index})
    return aligned


def query(loaded, schemas, table_name, row_index):
    """Answer the reference query for one row of one table."""
    by_name = {schema.name: schema for schema in schemas}
    if table_name not in loaded:
        raise ReferenceError("table %r is not characterised or not present under the root; "
                             "known tables: %s" % (table_name, ", ".join(sorted(loaded))))
    document = loaded[table_name]
    rows = document["records"]
    if not 0 <= row_index < len(rows):
        raise ReferenceError("%s has %d rows; row %d does not exist"
                             % (table_name, len(rows), row_index))
    schema = by_name[table_name]
    entry = rows[row_index]
    found = identifiers(schema, entry, row_index)
    spaces = {space for space, _value, _origin in found}
    wanted = {space: value for space, value, _origin in found}
    answer = {"table": table_name, "row": row_index, "rowCount": len(rows),
              "rowValues": entry, "identifiers": found,
              "references": inbound(loaded, schemas, spaces, wanted,
                                    skip=(table_name, row_index)),
              "outbound": targets(loaded, schemas, schema, entry),
              "sharedIndex": shared_index(loaded, schemas, table_name, row_index),
              "notes": []}
    if schema.certain is False:
        answer["notes"].append("%s: %s" % (table_name, schema.basis))
    if not answer["references"]:
        answer["notes"].append("no declared reference field points at this row")
    return answer


__all__ = ["ReferenceError", "identifiers", "identity", "inbound", "shared_index",
           "query", "targets"]
