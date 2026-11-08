import argparse
import hashlib
import json
from pathlib import Path

from registry_build062ad import W, build
from registry_observer062ad import build as build_observer
from registry_proof062ad import execute


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--out', type=Path, required=True)
    parser.add_argument('--build', type=Path)
    parser.add_argument('--source-only', action='store_true')
    args = parser.parse_args()
    args.out.mkdir(parents=True, exist_ok=False)
    folder = args.build
    rows = []
    try:
        if folder is None:
            folder = build(args.out / 'build')
            if not args.source_only:
                build_observer(folder)
        for seed, flag, disposer in [(622,0,False), (623,128,True),
                                     (624,255,False), (625,1,True)]:
            for target in ['arm', 'windows', 'a64']:
                row = execute(target, folder, seed, flag, disposer, not args.source_only)
                rows.append(row)
                print('registry', target, seed, flag, disposer, 'passed', flush=True)
        result = dict(status='passed', sourceOnly=args.source_only, profiles=rows,
                      sourceCreditGranted=0, sourceArenaObservations=sum(len(x['observations']) for x in rows))
    except BaseException as error:
        result = dict(status='failed', error=repr(error), profiles=rows)
        raise
    finally:
        (args.out / 'report.json').write_text(json.dumps(result, indent=2) + '\n')
        own = sorted((W / 'source').glob('*'))
        own += sorted(W.glob('registry_*.py'))
        (args.out / 'input-identities.json').write_text(json.dumps([
            dict(path=str(path), bytes=path.stat().st_size,
                 sha256=hashlib.sha256(path.read_bytes()).hexdigest())
            for path in own if path.is_file()], indent=2) + '\n')


if __name__ == '__main__':
    main()
