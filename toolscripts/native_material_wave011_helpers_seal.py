import io
import json
import re
import subprocess
import tokenize

from native_material_wave011_build import ROOT, WORK, pin, save, sha
from native_material_wave011_helpers_build import frozen_constructor, FOLDER


OUT = ROOT / 'evidence/lanes/wave011-material/helpers'


def main():
    frozen_constructor()
    report = json.loads((OUT / 'component.json').read_text())
    for row in report['armBuild']['sources'] + report['armBuild']['headers']:
        if row != pin(ROOT / row['path']):
            raise ValueError('Helper source changed after comparison')
    if report['returningArmComparisons'] != 267 or report['returningNativeWindowsComparisons'] != 267:
        raise ValueError('Returning comparisons incomplete')
    if report['observerCases'] != 69 or not report['casesWithDifferentUnobservedTransientValues']:
        raise ValueError('Transient default qualification incomplete')
    if report['arm64CpuModel']['returningComparisons'] != 534:
        raise ValueError('Actual Android object CPU-model qualification incomplete')
    command = [str(ROOT / 'tools/python/Scripts/python.exe'), '-m', 'unittest', 'discover', '-s', 'tests',
        '-p', 'test_native_material_wave011_helpers.py', '-v']
    process = subprocess.run(command, cwd=ROOT, capture_output=True, timeout=180)
    log = WORK / 'helpers/final-tests.txt'
    log.write_bytes(process.stdout + process.stderr)
    if process.returncode:
        raise ValueError('Helper component tests failed')
    owned = sorted(FOLDER.glob('*')) + sorted((ROOT / 'toolscripts').glob('native_material_wave011_helpers*.py'))
    owned += [ROOT / 'tests/test_native_material_wave011_helpers.py']
    for path in owned:
        if path.suffix not in ['.c', '.h', '.py']:
            continue
        text = path.read_text(encoding='utf-8')
        if len(text.splitlines()) > 500:
            raise ValueError('Authored helper source exceeds 500 lines')
        if path.suffix == '.py':
            if any(token.type == tokenize.COMMENT for token in tokenize.generate_tokens(io.StringIO(text).readline)):
                raise ValueError('Authored Python comments are forbidden')
        else:
            stripped = re.sub(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', '', text)
            if '//' in stripped or '/*' in stripped:
                raise ValueError('Authored C comments are forbidden')
    save(OUT / 'tests.json', {'status': 'passed', 'unitTests': 7, 'privateLog': pin(log),
        'sourceOnlyArmComparisons': 267, 'nativeWindowsComparisons': 267,
        'actualAndroidObjectModelComparisons': 534,
        'wrongSourceReturningControls': 3, 'transientReadObserverQualified': True})
    save(OUT / 'preserved-attempts.json', {'attempts': [
        {'issue': 'First native Windows link required the standard _fltused marker',
            'resolution': 'Authored Windows-only integer marker; zero CRT imports',
            'privateLog': pin(WORK / 'helpers/windows/link-prior-1.json')},
        {'issue': 'Observer subclass first inherited the Unicorn architecture factory instead of concrete ARM CPU',
            'resolution': 'Pinned concrete ARM subclass with hooks installed after CPU-model selection'},
        {'issue': 'Initial observer hook installation preceded CPU-model selection and was rejected by Unicorn',
            'resolution': 'Model selection precedes observer installation'},
        {'issue': 'Initial helper driver multiline expression lacked parentheses',
            'resolution': 'Corrected before any comparison or evidence generation'}]})
    metadata = [OUT / name for name in ['component.json', 'tests.json', 'preserved-attempts.json']]
    save(OUT / 'ready.json', {'schemaVersion': 1, 'status': 'ready-for-coordinator-review',
        'packet': 'wave011-material-source-only-constructor-component', 'frozenConstructor': report['frozenConstructor'],
        'sourceOnlyConstructorComponent': True, 'retainedOriginalInstructionDependencies': [],
        'returningArmComparisons': 267, 'returningNativeWindowsComparisons': 267,
        'actualAndroidObjectModelComparisons': 534,
        'observerCases': report['observerCases'], 'transientDifferencesUnobserved': report['casesWithDifferentUnobservedTransientValues'],
        'returningWrongSourceControls': 3, 'allocatorStandaloneEquivalence': False,
        'requestedAdditionalOriginalSourceBytes': 0, 'nativeGameBuild': False,
        'androidDeviceExecuted': False, 'aynThorExecuted': False, 'coordinatorAdmissionRequired': True,
        'files': [pin(path) for path in owned + metadata], 'originalPayloadsPublished': False})
    print(json.dumps({'status': 'ready-for-coordinator-review', 'packet': 'wave011-material-helpers',
        'readySha256': sha((OUT / 'ready.json').read_bytes())}))


if __name__ == '__main__':
    main()
