import json
from pathlib import Path
import shutil
import subprocess
import sys


BASE = Path(__file__).resolve().parent
sys.path.insert(0, str(BASE))
import build


MUTATIONS = [
    ('cache-count', 'filesystem.c', 'EFFECT_FILE_ROM068, 256, 16, 1)', 'EFFECT_FILE_ROM068, 255, 16, 1)'),
    ('patch-name', 'filesystem.c', 'EFFECT_FILE_PATCH068, "patch:", 128, 8', 'EFFECT_FILE_PATCH068, "rom:", 128, 8'),
    ('allocation-order', 'singleton.c', '    effect_file_filesystem_initialize068(state, 1);\n', '')
]


def main():
    output = BASE / 'controls-v1'
    output.mkdir(exist_ok=False)
    rows = []
    for name, filename, old, new in MUTATIONS:
        directory = output / name
        source = directory / 'source'
        source.mkdir(parents=True)
        for path in sorted((BASE / 'source').rglob('*')):
            if path.is_file():
                destination = source / path.relative_to(BASE / 'source')
                destination.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(path, destination)
        target = source / 'src/native/wave068-bootstrap' / filename
        text = target.read_text()
        assert text.count(old) == 1
        text = text.replace(old, new)
        if name == 'allocation-order':
            marker = '        state->manager = manager;\n    }\n}'
            assert text.count(marker) == 1
            text = text.replace(marker, marker[:-1] + '    effect_file_filesystem_initialize068(state, 1);\n}')
        target.write_text(text)
        build.run(directory / 'build', source)
        outcomes = []
        for profile in ['arm', 'windows', 'a64']:
            destination = directory / profile
            argv = [sys.executable, '-B', str(BASE / 'cohort.py'), profile, str(destination), '--build', str(directory / 'build')]
            with (directory / (profile + '.log')).open('wb') as stream:
                result = subprocess.run(argv, stdout=stream, stderr=subprocess.STDOUT, timeout=240)
            observed = json.loads((destination / 'report.json').read_text())
            if result.returncode == 0 or observed['status'] != 'source-observer-mismatch' or observed['semantic']['returned'] != 1:
                raise ValueError('068 ordinary source control did not return through actual bootstrap before observer rejection')
            if observed['audit']['forbiddenAccessAttempts'] or observed['audit']['originalImageConstructorAttempts']:
                raise ValueError('068 control failed because of transport/original access rather than semantic observation')
            outcomes.append({'profile': profile, 'exitCode': result.returncode, 'sourceReturned': True,
                'independentObserverRejected': True, 'report': build.pin(destination / 'report.json')})
        rows.append({'name': name, 'source': build.pin(target), 'oldSource': old, 'newSource': new,
            'build': build.pin(directory / 'build/build.json'), 'outcomes': outcomes})
        print(json.dumps({'control': name, 'profileChecks': len(outcomes)}), flush=True)
    (output / 'report.json').write_text(json.dumps({'status': 'three-returning-source-controls-rejected-on-three-profiles',
        'controls': rows, 'profileChecks': 9, 'sourceCreditGranted': 0}, indent=2) + '\n')


if __name__ == '__main__':
    main()
