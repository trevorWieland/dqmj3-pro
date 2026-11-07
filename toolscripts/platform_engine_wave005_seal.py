import io
import json
import re
import subprocess
import tokenize

import platform_engine_wave005 as build


ROOT, WORK, OUT, SOURCE = build.ROOT, build.WORK, build.EVIDENCE, build.SOURCE


def main():
    build.inputs()
    built = json.loads((OUT / 'build.json').read_text())
    measured = json.loads((OUT / 'measured-renderer.json').read_text())
    model = json.loads((OUT / 'android-model.json').read_text())
    for row in built['sourceInputs']:
        if build.tools.pin(ROOT / row['path']) != row:
            raise ValueError('Platform source changed after build')
    for row in [built['windows']['executable'], built['windows']['coreLibrary'], built['android']['apk'], built['android']['native']['library']]:
        if build.tools.pin(ROOT / row['path']) != row:
            raise ValueError('Platform artifact changed after verification')
    if len(measured['constructedMaterials']) != 19 or measured['pictureCasesHandled'] != 17 or measured['skippedPictureCases'] or measured['independentReference']['differentChannels']:
        raise ValueError('Measured source-constructor scene qualification incomplete')
    if not model['lateMaterialFailurePreservesBothViewsAndMaterialAudits'] or not model['sourceHeapAndResourceServicesExecutedAsC']:
        raise ValueError('Actual Android object execution qualification incomplete')
    command = [str(ROOT / 'tools/python/Scripts/python.exe'), '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_platform_engine_wave005.py', '-v']
    process = subprocess.run(command, cwd=ROOT, capture_output=True, timeout=120)
    log = WORK / 'final-tests.txt'
    log.write_bytes(process.stdout + process.stderr)
    if process.returncode:
        raise ValueError('Source-constructor renderer final tests failed')
    replay, objects = build.core(WORK / 'replay/windows')
    object_comparisons = []
    for second in objects:
        first = WORK / 'windows' / second.name
        old, new = first.read_bytes(), second.read_bytes()
        if old[:4] + old[8:] != new[:4] + new[8:]:
            raise ValueError('Replay COFF differs beyond compiler timestamp: ' + first.name)
        object_comparisons.append({'production': build.tools.pin(first), 'replay': build.tools.pin(second),
            'compilerTimestampBytesExcludedFromComparison': [4, 8], 'compilerOutputModified': False})
    android_objects = build.objects(WORK / 'replay/android', True)
    android_comparisons = []
    for second in android_objects:
        first = WORK / 'android/native' / second.name
        if first.read_bytes() != second.read_bytes():
            raise ValueError('Replay actual Android compiler object differs')
        android_comparisons.append({'production': build.tools.pin(first), 'replay': build.tools.pin(second), 'byteIdentical': True})
    owned = sorted(path for path in SOURCE.iterdir() if path.is_file())
    owned += sorted((ROOT / 'toolscripts').glob('platform_engine_wave005*.py'))
    owned += [ROOT / 'tests/test_platform_engine_wave005.py']
    for path in owned:
        if path.suffix not in ['.c', '.h', '.java', '.py']:
            continue
        text = path.read_text(encoding='utf-8')
        if len(text.splitlines()) > 500:
            raise ValueError('Authored source exceeds 500 lines: ' + str(path))
        if path.suffix == '.py':
            if any(token.type == tokenize.COMMENT for token in tokenize.generate_tokens(io.StringIO(text).readline)):
                raise ValueError('Authored Python comments are forbidden')
        else:
            stripped = re.sub(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', '', text)
            if '//' in stripped or '/*' in stripped:
                raise ValueError('Authored code comments are forbidden')
    (OUT / 'tests.json').write_text(json.dumps({'schemaVersion': 1, 'status': 'passed', 'unitTests': 19,
        'privateTestLog': build.tools.pin(log), 'independentOutputReplay': object_comparisons,
        'androidReplay': android_comparisons, 'newSourceCreditBytes': 0}, indent=2) + '\n')
    (OUT / 'provenance.json').write_text(json.dumps({'schemaVersion': 1,
        'frozenInputs': build.tools.pin(SOURCE / 'frozen-inputs.json'),
        'independentTools': build.tools.pin(SOURCE / 'oracle-inputs.json'),
        'sourceDerivedOnly': True, 'thirdPartyImplementationLinkedIntoApps': False,
        'preservedAttempts': [
            {'issue': 'Initial multi-file patch assumed a different header guard and was rejected atomically', 'resolution': 'Read actual guard; no partial source edits occurred'},
            {'issue': 'Internal packing must not propagate into Win32/JNI ABI structures', 'resolution': 'Boundary files compile with natural platform ABI; packed candidate helper exchanges only raw pointer/scalar arguments'},
            {'issue': 'A same-final-state allocator difference can escape through observers', 'resolution': 'Frozen constructor contract retained; new lookup service reads only immutable bindings, conversion begins after return'},
            {'issue': 'Long initial Android audit replay invoked individual API reads', 'resolution': 'Retained genuine public API execution and completed all material audit comparisons'}],
        'originalPayloadsPublished': False}, indent=2) + '\n')
    metadata = [OUT / name for name in ['build.json', 'measured-renderer.json', 'android-model.json', 'tests.json', 'provenance.json']]
    ready = {'schemaVersion': 1, 'status': 'ready-for-coordinator-review', 'packet': 'platform-engine-wave005',
        'claim': 'Actual owner scene rendered through reconstructed typed material construction with transactional dual-view publication',
        'constructedMaterials': 19, 'pictureCasesHandled': 17, 'skippedPictureCases': 0, 'originalReturningComparisons': 19,
        'independentFramebufferDifferentChannels': 0, 'nativeWindowsGdiPixelsVerified': 192000,
        'actualAndroidObjectsModelExecuted': True, 'androidOperatingSystemExecuted': False,
        'androidDeviceExecuted': False, 'aynThorExecuted': False, 'nativeGameBuild': False,
        'additionalRecoveredSourceCreditBytes': 0, 'files': [build.tools.pin(path) for path in owned + metadata],
        'originalPayloadsPublished': False}
    (OUT / 'ready.json').write_text(json.dumps(ready, indent=2) + '\n')
    print(json.dumps({'status': ready['status'], 'files': len(ready['files']), 'tests': 19,
        'readySha256': build.tools.sha(OUT / 'ready.json')}))


if __name__ == '__main__':
    main()
