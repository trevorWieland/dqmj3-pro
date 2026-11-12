"""Declare the full-corpus source units in ``config/build-units.json``.

Every ``.c`` under ``src/native/decompiled`` becomes one build unit with the
uniform role ``source``. The manifest is read and written as bytes so its line
endings and encoding are not rewritten by text-mode translation. The two old
selected draft directories are dropped: their functions are now emitted by the
same uniform pipeline as every other corpus function, so no unit in the tree is
a selected subset.

The script re-reads what it wrote and checks the census contract the build's
source check enforces: every ``.c`` under the native component roots is declared
exactly once, every header named exists, and the corpus directory is a
registered native component root.
"""

import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CONFIG = ROOT / 'config/build-units.json'
OUTPUT = ROOT / 'src/native/decompiled'
DROPPED = ('src/native/draft001/', 'src/native/draft002/')
ROLE = 'source'


def main():
    text = CONFIG.read_bytes().decode('utf-8')
    config = json.loads(text)
    sources = sorted(OUTPUT.glob('*.c'))
    if not sources:
        raise SystemExit('no emitted units in ' + str(OUTPUT))
    units = []
    for unit in config['units']:
        if unit['source'].startswith(DROPPED):
            continue
        if unit['source'].startswith('src/native/decompiled/'):
            continue
        unit = dict(unit)
        unit['role'] = ROLE
        units.append(unit)
    for source in sources:
        label = source.stem
        header = OUTPUT / (label + '.h')
        if not header.is_file():
            raise SystemExit('missing unit header: ' + str(header))
        units.append({
            'source': source.relative_to(ROOT).as_posix(),
            'headers': [header.relative_to(ROOT).as_posix()],
            'role': ROLE,
        })
    units.sort(key=lambda unit: unit['source'])
    roots = [root for root in config.get('nativeComponentRoots', [])
             if root not in ('src/native/draft001', 'src/native/draft002')
             and root != 'src/native/decompiled']
    roots.append('src/native/decompiled')
    excluded = []
    for row in config.get('excludedSources', []):
        row = dict(row)
        row['reason'] = (row['reason'].replace('byte-exact ', '')
                         .replace('Draft ', 'Earlier '))
        excluded.append(row)
    config['units'] = units
    config['nativeComponentRoots'] = roots
    config['excludedSources'] = excluded
    CONFIG.write_bytes((json.dumps(config, indent=2) + '\n').encode('utf-8'))

    check = json.loads(CONFIG.read_bytes().decode('utf-8'))
    declared = [unit['source'] for unit in check['units']]
    if len(declared) != len(set(declared)):
        raise SystemExit('duplicate unit after manifest edit')
    if len({unit['role'] for unit in check['units']}) != 1:
        raise SystemExit('unit roles are not uniform')
    actual = {path.relative_to(ROOT).as_posix()
              for root in check['nativeComponentRoots']
              for path in (ROOT / root).rglob('*.c')}
    actual.update(path.relative_to(ROOT).as_posix()
                  for wave in check['scope']['waves']
                  for path in (ROOT / 'src/native' / wave).rglob('*.c'))
    censused = {source for source in declared
                if source.startswith('src/native/') and 'third_party' not in source.split('/')}
    censused.update(row['source'] for row in check['excludedSources'])
    if actual != censused:
        raise SystemExit('native source census differs from the declared units')
    for unit in check['units']:
        for header in unit['headers']:
            if not (ROOT / header).is_file():
                raise SystemExit('missing declared header: ' + header)
    print(json.dumps({'units': len(units), 'declared': len(declared),
                      'nativeRoots': check['nativeComponentRoots']}, indent=1))


if __name__ == '__main__':
    sys.exit(main())
