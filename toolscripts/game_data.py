#!/usr/bin/env python3
"""Decode, edit, re-encode and verify DQMJ3 Professional game data.

    game_data.py decode extracted/.../KindParam.tp --out work/KindParam.json
    game_data.py encode work/KindParam.json --out work/KindParam.tp
    game_data.py verify --explain
    game_data.py refs --table KindParam --row 1

The inputs are files extracted from the user's own copy of the game; nothing
here ships game data.  ``verify`` is the important command: it decodes and
re-encodes every table and message archive it can find and reports whether the
bytes came back identical, so an encoder that cannot reproduce its input is
caught before anyone edits anything.
"""

import sys
from pathlib import Path


sys.path.insert(0, str(Path(__file__).resolve().parent))

from gamedata.cli import main  # noqa: E402 - the path set-up above must run first


if __name__ == "__main__":
    sys.exit(main())
