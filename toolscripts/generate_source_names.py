import argparse
import json
from pathlib import Path
import re


ROOT = Path(__file__).resolve().parents[1]


def generate(root):
    root = root.resolve()
    config = json.loads((root / 'config/source-names.json').read_text())
    inventory = json.loads((root / 'evidence/inventory/update-content0.json').read_text())
    if config['schemaVersion'] != 1 or config['version'] != 'update-content0' or config['moduleSha256'] != inventory['codeSha256']:
        raise ValueError('Source names identify another original module')
    lines, names = [], set()
    for row in config['mappings']:
        symbol, source_name = row['symbol'], row['sourceName']
        if not re.fullmatch(r'fn_[0-9a-f]{8}', symbol) or symbol in names or not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', source_name):
            raise ValueError('Source name mapping is invalid or duplicated')
        source = (root / row['sourcePath']).resolve()
        if not any(source.is_relative_to(root / folder) for folder in ('source', 'src/native')) or not source.is_file():
            raise ValueError('Source name mapping escapes the reviewed source trees')
        if not re.search(r'\b' + re.escape(source_name) + r'\s*\([^)]*\)\s*\{', source.read_text()):
            raise ValueError('Source name has no C definition')
        lines.append('#define ' + symbol + ' ' + source_name)
        names.add(symbol)
    return '\n'.join(lines) + '\n'


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    target = ROOT / 'include/bytematch_names.h'
    generated = generate(ROOT)
    if args.check:
        if not target.is_file() or target.read_text() != generated:
            raise ValueError('Generated source names header is stale')
    else:
        target.parent.mkdir(exist_ok=True)
        target.write_text(generated, encoding='utf-8')
    print(json.dumps({'mappings': len(generated.splitlines()), 'buildOutputChanged': False}))
