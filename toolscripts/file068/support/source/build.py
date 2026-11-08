import hashlib
import json
from pathlib import Path
import sys


ROOT = Path(__file__).resolve().parents[3]
BASE = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 'toolscripts'))
import effect_queue067_source_build as builder
from native_effect065_build import pin


def run(output, source_root):
    cached = builder.predecessor.cached
    previous_extra, previous_exports = cached.EXTRA, cached.EXPORTS
    cached.EXTRA = previous_extra + ['../wave068-bootstrap/' + name for name in ['filesystem', 'singleton', 'requests']]
    cached.EXPORTS = previous_exports + ['effect_file_bootstrap_initialize068', 'effect_file_bootstrap_shutdown068',
        'effect_file_filesystem_initialize068', 'effect_file_filesystem_shutdown068', 'effect_file_request_async068',
        'effect_file_fixture_prepare068', 'effect_file_fixture_start068', 'effect_file_fixture_observe068',
        'effect_file_fixture_count068', 'effect_file_fixture_trace068']
    try:
        return builder.build(output, {source_root / 'toolscripts/effect065_cached_composed_fixture.c':
            source_root / 'toolscripts/file068_source_fixture.c'}, source_root=source_root)
    finally:
        cached.EXTRA, cached.EXPORTS = previous_extra, previous_exports


if __name__ == '__main__':
    source_root = BASE / 'source'
    previous = ROOT / 'work/native-file068/source-v2'
    copies = []
    for path in sorted(previous.rglob('*')):
        if not path.is_file():
            continue
        destination = source_root / path.relative_to(previous)
        if destination.exists():
            raise ValueError('Preserve staged068 source inputs')
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(path.read_bytes())
        copies.append(pin(destination))
    fixture = source_root / 'toolscripts/file068_source_fixture.c'
    fixture.write_bytes((BASE / 'file068_source_fixture.c').read_bytes())
    result = run(BASE / 'build-v1', source_root)
    (BASE / 'staged-inputs.json').write_text(json.dumps({'existingSourceClosure': copies,
        'newProduction': [pin(path) for path in sorted((source_root / 'src/native/wave068-bootstrap').glob('*'))],
        'newFixture': pin(fixture), 'sourceCreditGranted': 0,
        'originalToolOrArtifactTreesCopied': False}, indent=2) + '\n')
    print(json.dumps({'profiles': list(result['artifacts']), 'sourceCreditGranted': 0}))
