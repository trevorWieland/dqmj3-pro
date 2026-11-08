import argparse
from pathlib import Path

from bootstrap_file068_replay import run


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path, default=Path.cwd())
    parser.add_argument('--public-root', type=Path)
    parser.add_argument('--intake', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--source-only', action='store_true')
    parser.add_argument('--smoke', action='store_true')
    args = parser.parse_args()
    root = args.root.resolve()
    public = args.public_root.resolve() if args.public_root else root
    intake = args.intake.resolve() if args.intake else root / 'evidence/lanes/native-file-bootstrap068/public-inputs-v1'
    run(root, public, intake, args.output.resolve(), args.source_only, args.smoke)
