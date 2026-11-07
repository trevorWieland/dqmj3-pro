import hashlib
import json
from pathlib import Path
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_closure_release010_build as build


out = ROOT / 'work/legacy010-source-name-transition'
sections, symbols, functions, arm = build.arm(out / 'arm')
dll = build.windows(out / 'windows')
android_sections, android_symbols, android = build.android(out / 'android')
old_path = ROOT / 'evidence/lanes/squirrel-closure-release010/execution.json'
old = json.loads(old_path.read_text())
checks = {'armElfIdentical': arm['linkedElf']['sha256'] == old['armBuild']['linkedElf']['sha256'],
    'windowsDllIdentical': hashlib.sha256(dll.read_bytes()).hexdigest() == old['nativeLibrary']['sha256'],
    'androidSharedLibraryIdentical': android['sharedLibrary']['sha256'] == old['androidBuild']['sharedLibrary']['sha256'],
    'androidModelElfIdentical': android['modelElf']['sha256'] == old['androidBuild']['modelElf']['sha256']}
assert all(checks.values())
receipt = {'schemaVersion': 1, 'status': 'legacy-source-names-changed-with-identical-verification-binaries',
    'checks': checks, 'nameDefines': build.NAME_DEFINES, 'legacySourceNamesOnly': True,
    'modern017FrozenFilesChanged': False, 'originalInstructionCreditGranted': 0,
    'armBuild': arm, 'windowsDll': build.pin(dll), 'androidBuild': android,
    'sourceFiles': [build.pin(ROOT / path) for path in ['source/squirrel-wave010/closure_release.c',
        'source/squirrel-wave010/closure_release.h', 'source/squirrel-wave010/vtables.c',
        'toolscripts/squirrel_closure_release010_build.py']],
    'historicalExecution': build.pin(old_path), 'producer': build.pin(Path(__file__).resolve())}
(ROOT / 'evidence/verification/legacy010-name-transition-binaries.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps(checks))
