"""Shared preparation for the full-corpus source emission.

Reads the decompiled corpus once and derives the facts the emitter needs:

* the declaration type of every data symbol, from how the corpus uses it;
* the return type of every function, from its definition line;
* the callees and data names each function mentions;
* the original image address of every string literal Ghidra followed.

The result is cached under ``work/full`` so the emitter does not re-read the
corpus on every pass.
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CORPUS = ROOT / 'work/corpus'
CACHE = ROOT / 'work/full'
sys.path.insert(0, str(ROOT / 'toolscripts'))

import corpus_draft as draftlib  # noqa: E402

TEXTS = json.loads((ROOT / 'work/drafter/corpus-text.json').read_text(encoding='utf-8'))
STATE = json.loads((ROOT / 'work/drafter/features.json').read_text(encoding='utf-8'))
RETURNS = STATE['returnTypes']
DEFINITION = re.compile(r'^([A-Za-z_][A-Za-z0-9_ \t\*]*?)\b(?:thunk_)?FUN_([0-9a-f]{8})\s*\(', re.M)


def string_addresses(record):
    found = {}
    for reference in record.get('references', []):
        excerpt = reference.get('excerpt')
        if not excerpt or not excerpt.startswith('"') or reference['access'] not in ('PARAM', 'READ'):
            continue
        try:
            text = json.loads(excerpt)
        except (ValueError, TypeError):
            continue
        found.setdefault(text, []).append(int(reference['to'], 16))
    return {text: sorted(set(addresses)) for text, addresses in found.items()}


def build():
    CACHE.mkdir(parents=True, exist_ok=True)
    usage = {}
    strings = {}
    for index, (address, text) in enumerate(sorted(TEXTS.items())):
        for name, kinds in draftlib.usage_kinds(text).items():
            row = usage.setdefault(name, {'pointer': 0, 'lvalue': 0, 'address': 0})
            for key in row:
                row[key] += kinds[key]
        if '"' in text:
            record = json.loads((CORPUS / 'functions' / (address + '.json')).read_text(encoding='utf-8'))
            found = string_addresses(record)
            if found:
                strings[address] = found
        if index % 5000 == 0:
            print('prep %d/%d' % (index, len(TEXTS)), flush=True)
    data_types = {}
    for name, kinds in usage.items():
        if kinds['pointer']:
            data_types[name] = 'unsigned char *'
        elif kinds['lvalue']:
            data_types[name] = 'undefined4'
        else:
            data_types[name] = 'unsigned char[]'
    (CACHE / 'types.json').write_text(json.dumps({'dataTypes': data_types, 'returnTypes': RETURNS},
                                                 indent=0) + '\n', encoding='utf-8')
    (CACHE / 'strings.json').write_text(json.dumps(strings, indent=0) + '\n', encoding='utf-8')
    print('data symbols %d, string functions %d' % (len(data_types), len(strings)))


if __name__ == '__main__':
    build()
