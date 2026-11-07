import argparse
import json
import pickle
from pathlib import Path

from native_wave013_common import ROOT, record, save


def run(previous, current):
    before = pickle.loads(previous.read_bytes())
    after = pickle.loads(current.read_bytes())
    rows = []
    for profile, index in [('arm', 0), ('a64', 2)]:
        first, second = before[index], after[index]
        if set(first['functions']) != set(second['functions']):
            raise ValueError('049 names header changed the function set')
        functions = []
        for name in sorted(first['functions']):
            left, right = first['functions'][name], second['functions'][name]
            if any(left[key] != right[key] for key in ['address', 'bytes', 'linkedSpanSha256', 'mappingSpans']):
                raise ValueError('049 names header changed linked code: ' + name)
            a, b = left['objectOrigin'], right['objectOrigin']
            if any(a[key] != b[key] for key in ['section', 'bytes', 'sha256', 'relocations']):
                raise ValueError('049 names header changed an object body/pool or relocation: ' + name)
            functions.append({'symbol': name, 'bytes': right['bytes'],
                'linkedSpanSha256': right['linkedSpanSha256'], 'objectSectionSha256': b['sha256'],
                'genuineRelocationsUnchanged': True})
        if first['linkedElf']['sha256'] != second['linkedElf']['sha256']:
            raise ValueError('049 names header changed the complete linked ELF')
        rows.append({'profile': profile, 'completeLinkedElfSha256': second['linkedElf']['sha256'],
            'completeLinkedElfUnchanged': True, 'functions': functions})
    target = ROOT / 'evidence/lanes/squirrel-state049/names-header-object-invariance.json'
    save(target, {'schemaVersion': 1, 'status': 'quoted-source-name-alias-preserves-actual-source-output',
        'producer': record(Path(__file__)), 'previousGraphs': record(previous), 'currentGraphs': record(current),
        'quotedHeader': record(ROOT / 'source/squirrel-wave049/source_symbols.h'),
        'reportSymbol': 'fn_00173d4c', 'sourceSymbol': 'sq_startup_relative049',
        'profiles': rows, 'matchingOrSourceCreditGranted': 0})
    print(json.dumps({'output': record(target), 'functionsPerProfile': len(rows[0]['functions']),
        'completeArmAndAarch64ElfsUnchanged': True}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--previous', type=Path, required=True)
    parser.add_argument('--current', type=Path, required=True)
    args = parser.parse_args()
    run(args.previous.resolve(), args.current.resolve())
