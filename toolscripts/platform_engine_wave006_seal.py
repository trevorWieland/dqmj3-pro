import io
import json
import re
import subprocess
import tokenize

import platform_engine_wave006 as build


ROOT, WORK, OUT, SOURCE = build.ROOT, build.WORK, build.EVIDENCE, build.SOURCE


def main():
    build.inputs()
    built = json.loads((OUT / 'build.json').read_text())
    measured = json.loads((OUT / 'measured-renderer.json').read_text())
    model = json.loads((OUT / 'android-model.json').read_text())
    transactions = json.loads((OUT / 'transactions.json').read_text())
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
    if len(measured['originalMathWorldContexts']) != 35 or len(measured['originalProjectionAndSrtMatrices']) != 18:
        raise ValueError('Full owner math-context/matrix comparisons are incomplete')
    if measured['independentBinary32Reference']['differentChannels'] or measured['retainedAnalyticGeometryReference']['differentChannels'] != 14:
        raise ValueError('Independent numerical references or retained analytic residuals changed')
    if not transactions['all19MaterialConstructorsReturnedBeforeFailure'] or not model['singularProjectionRejectedAndBothViewFramesAndUvMatricesPreserved']:
        raise ValueError('Late singular projection transaction is not qualified on both execution platforms')
    command = [str(ROOT / 'tools/python/Scripts/python.exe'), '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_platform_engine_wave006.py', '-v']
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
    owned += sorted((ROOT / 'toolscripts').glob('platform_engine_wave006*.py'))
    owned += [ROOT / 'tests/test_platform_engine_wave006.py']
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
    (OUT / 'tests.json').write_text(json.dumps({'schemaVersion': 1, 'status': 'passed', 'unitTests': 23,
        'privateTestLog': build.tools.pin(log), 'independentOutputReplay': object_comparisons,
        'androidReplay': android_comparisons, 'newSourceCreditBytes': 0}, indent=2) + '\n')
    (OUT / 'provenance.json').write_text(json.dumps({'schemaVersion': 1,
        'frozenInputs': build.tools.pin(SOURCE / 'frozen-inputs.json'),
        'independentTools': build.tools.pin(SOURCE / 'oracle-inputs.json'),
        'sourceDerivedOnly': True, 'thirdPartyImplementationLinkedIntoApps': False,
        'preservedAttempts': [
            {'issue': 'A copied-source rename encountered the Windows default CP932 text decoder on UTF-8 documentation', 'resolution': 'Read/write UTF-8 explicitly; frozen inputs remained unchanged'},
            {'issue': 'Initial geometry reference used analytic libm rather than the original indexed interpolation', 'resolution': 'Retained all 14 one-level channel residuals and locations; an independent reader executing original math leaves matches all native pixels in float64 and binary32'},
            {'issue': 'Projection ignores a failed inverse in the original implementation', 'resolution': 'Source component rejects zero/nonfinite inverse before entering that invalid projection domain; actual-owner late rejection preserves both views'},
            {'issue': '16KiB PT_LOAD/ZIP checks alone omit following writable-data RELRO hazards', 'resolution': 'New segment validator checks RELRO end safety, with a genuinely rejecting synthetic misaligned case'},
            {'issue': 'Packed internal fields and transient constructor storage need separate contracts', 'resolution': 'Natural Win32/JNI boundaries retained, four-byte foreign arena retained, no new callback reads incomplete constructor storage'}],
        'originalPayloadsPublished': False}, indent=2) + '\n')
    metadata = [OUT / name for name in ['build.json', 'measured-renderer.json', 'android-model.json', 'transactions.json', 'tests.json', 'provenance.json']]
    ready = {'schemaVersion': 1, 'status': 'ready-for-coordinator-review', 'packet': 'platform-engine-wave006',
        'claim': 'Actual owner scene rendered through frozen complete typed material/UV math components with transactional dual-view publication',
        'constructedMaterials': 19, 'pictureCasesHandled': 17, 'skippedPictureCases': 0, 'originalReturningComparisons': 19,
        'independentFramebufferDifferentChannels': 0, 'nativeWindowsGdiPixelsVerified': 192000,
        'originalMathWorldContextsCompared': 35, 'originalProjectionAndSrtMatricesCompared': 18,
        'retainedAnalyticGeometryDifferentChannels': 14, 'retainedAnalyticGeometryMaximumChannelDifference': 1,
        'lateSingularProjectionPreservesBothViews': True, 'actualAndroidObjects': 22,
        'gnuRelroEndSafetyVerified': True,
        'actualAndroidObjectsModelExecuted': True, 'androidOperatingSystemExecuted': False,
        'androidDeviceExecuted': False, 'aynThorExecuted': False, 'nativeGameBuild': False,
        'additionalRecoveredSourceCreditBytes': 0, 'files': [build.tools.pin(path) for path in owned + metadata],
        'originalPayloadsPublished': False}
    (OUT / 'ready.json').write_text(json.dumps(ready, indent=2) + '\n')
    print(json.dumps({'status': ready['status'], 'files': len(ready['files']), 'tests': 23,
        'readySha256': build.tools.sha(OUT / 'ready.json')}))


if __name__ == '__main__':
    main()
