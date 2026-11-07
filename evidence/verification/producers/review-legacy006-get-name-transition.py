import hashlib
import json
from pathlib import Path
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_wave006_build as builder
import squirrel_wave006_platform as platform


def pin(path):
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data)}


baseline_path = ROOT / 'evidence/verification/legacy006-get-name-baseline.json'
baseline = json.loads(baseline_path.read_text())
out = ROOT / 'work/legacy006-get-name-transition'
arm = builder.build(out / 'arm')
native = platform.build(ROOT, builder.SOURCE, out / 'platform')
checks = {'armElfIdentical': arm['elfSha256'] == baseline['armElfSha256'],
    'windowsExeIdentical': native['windowsExeSha256'] == baseline['windowsExeSha256'],
    'wrongWindowsExeIdentical': hashlib.sha256((out / 'platform/wrong-dispatch.exe').read_bytes()).hexdigest() == baseline['wrongWindowsExeSha256'],
    'all40AndroidObjectsIdentical': native['androidArm64Objects'] == baseline['androidArm64Objects'],
    'windows41CasesIdentical': native['windowsObservation'] == baseline['windowsObservation'],
    'wrongWindowsObservationIdentical': native['wrongSourceObservation'] == baseline['wrongWindowsObservation']}
assert all(checks.values())
receipt = {'schemaVersion': 1, 'status': 'legacy-get-name-transition-with-identical-verification-binaries',
    'checks': checks, 'baseline': pin(baseline_path), 'nameDefines': builder.LEGACY_NAME_DEFINES,
    'sourceFiles': [pin(ROOT / path) for path in ['source/squirrel-wave006/table.c',
        'source/squirrel-wave006/delegate.c', 'source/squirrel-wave006/table_release.c',
        'toolscripts/squirrel_wave006_build.py', 'toolscripts/squirrel_wave006_platform.py']],
    'armElfSha256': arm['elfSha256'], 'windowsExeSha256': native['windowsExeSha256'],
    'androidObjects': native['androidArm64Objects'], 'oldNumericFloatEqualityDomainNotExpanded': True,
    'historical1001SourceSnapshotsUnchanged': True, 'sourceCreditGranted': 0, 'wholeVmCreditGranted': 0,
    'producer': pin(Path(__file__).resolve())}
(ROOT / 'evidence/verification/legacy006-get-name-transition.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps(checks))
