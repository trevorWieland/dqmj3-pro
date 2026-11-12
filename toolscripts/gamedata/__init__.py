"""Editable game-data toolchain for DQMJ3 Professional.

The package decodes the game's parameter tables and message archives into plain
JSON, encodes them back, and proves the round trip byte for byte.  It never
commits anything derived from the game: inputs come from the user's own
extraction and outputs go wherever the user points them.

Public surface:

``tables.TABLES``
    the registry of characterised tables with their schemas and evidence
``records``
    the fixed-stride ``.tp``/``.tb`` codec
``containers``
    the indexed AI-action and named battle-script codecs
``messages``
    the ``.mes`` message-archive codec
``workspace``
    discovery, verification and byte diffing against a real extraction
``references``
    the referential-integrity query used when adding content
``crossref``
    name corroboration against the game's scripts and message payloads
"""

from . import (containers, crossref, fields, messages, records, references, schema,
               tables, workspace)

__all__ = ["containers", "crossref", "fields", "messages", "records", "references",
           "schema", "tables", "workspace"]
