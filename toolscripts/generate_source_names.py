import argparse
import json
from pathlib import Path
import re
import sys


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import c_function_definitions


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
        if not c_function_definitions.has_definition(source.read_text(), source_name):
            raise ValueError('Source name has no C definition')
        lines.append('#define ' + symbol + ' ' + source_name)
        names.add(symbol)
    return '\n'.join(lines) + '\n'


def write_generated(target,content):
    raw=target.read_bytes() if target.is_file() else b''
    previous=raw.decode('utf-8').replace('\r\n','\n').replace('\r','\n')
    if previous==content:
        return False
    target.parent.mkdir(parents=True,exist_ok=True)
    if previous and previous.endswith('\n') and content.startswith(previous):
        target.write_bytes(raw+content[len(previous):].encode('utf-8'))
    else:
        target.write_bytes(content.encode('utf-8'))
    return True


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    sys.path.insert(0, str(ROOT / "toolscripts"))
    from report_source_units import CONFIG, UNIT_NAMES, unit_names
    generated = generate(ROOT)
    targets = [(ROOT / 'include/bytematch_names.h', generated)]
    config_path = ROOT / CONFIG
    if config_path.exists():
        targets.append((ROOT / UNIT_NAMES, unit_names(json.loads(config_path.read_text(encoding='utf-8')))))
    for target, content in targets:
        if args.check:
            if not target.is_file() or target.read_text(encoding='utf-8') != content:
                raise ValueError('Generated source names header is stale: ' + target.name)
        else:
            write_generated(target,content)
    print(json.dumps({'mappings': len(generated.splitlines()), 'headers': len(targets), 'buildOutputChanged': False}))
