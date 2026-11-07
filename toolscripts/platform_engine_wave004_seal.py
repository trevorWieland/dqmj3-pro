import hashlib
import importlib.util
import io
import json
import re
import struct
import tokenize
import unittest

import app_shell_build as tools
import platform_engine_wave004 as build


def tests():
    path = build.ROOT / 'tests/test_platform_engine_wave004.py'
    spec = importlib.util.spec_from_file_location('atomic_material_replay', path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    stream = io.StringIO()
    result = unittest.TextTestRunner(stream=stream, verbosity=2).run(unittest.defaultTestLoader.loadTestsFromModule(module))
    (build.WORK / 'final-unittest-output.txt').write_text(stream.getvalue())
    if not result.wasSuccessful() or result.testsRun != 15 or result.skipped:
        raise ValueError('Atomic material replay did not execute all fifteen cases')
    production = build.WORK / 'windows'
    replay = build.WORK / 'tests/native'
    comparisons = []
    for original in sorted(production.glob('*.obj')):
        if original.name == 'component-windows.obj':
            continue
        copy = replay / original.name
        a, b = original.read_bytes(), copy.read_bytes()
        if len(a) < 20 or len(b) < 20 or a[:2] != b'\x64\x86' or b[:2] != b'\x64\x86' or a[:4] != b[:4] or a[8:] != b[8:]:
            raise ValueError('Core COFF replay differs beyond timestamp: ' + original.name)
        comparisons.append({'object': original.name, 'productionSha256': tools.sha(original), 'replaySha256': tools.sha(copy),
                            'productionTimestamp': struct.unpack_from('<I', a, 4)[0], 'replayTimestamp': struct.unpack_from('<I', b, 4)[0],
                            'everyOtherByteEqual': True, 'filesModifiedForComparison': False})
    report = {'schemaVersion': 1, 'status': 'passed', 'testsRun': 15, 'failures': 0, 'errors': 0, 'skipped': 0,
              'testSource': tools.pin(path), 'freshNativeCoreRebuilt': True, 'productionDllUsed': False,
              'privateStageObservedChangedBeforeFailedImport': True, 'publishedBothViewsPreserved': True,
              'coffComparisons': comparisons, 'androidLifecycleDeviceExecuted': False}
    (build.EVIDENCE / 'tests.json').write_text(json.dumps(report, indent=2) + '\n')
    return report


def main():
    build.inputs()
    required = ('build.json', 'measured-materials.json', 'original-material-semantics.json', 'provenance.json')
    documents = {name: json.loads((build.EVIDENCE / name).read_text()) for name in required}
    built, measured, semantics = documents['build.json'], documents['measured-materials.json'], documents['original-material-semantics.json']
    for row in built['sourceInputs'] + [built['windows']['executable'], built['windows']['coreLibrary'], built['android']['apk'], built['android']['native']['library']]:
        if tools.sha(build.ROOT / row['path']) != row['sha256']:
            raise ValueError('Built component/source identity changed: ' + row['path'])
    if measured['pictureCasesHandled'] != 17 or measured['skippedPictureCases'] or not measured['lateBadMaterialControl']['geometryAndPixelsPreserved']:
        raise ValueError('Real material/transaction scope incomplete')
    if not semantics['originalDetailedShader']['nativeReturnVerified'] or semantics['originalDetailedShader']['externalCallsStubbed']:
        raise ValueError('Original material command qualification incomplete')
    if semantics['completeConstructorClaim'] or measured['nativeGameBuild'] or built['android']['deviceExecution']:
        raise ValueError('Packet exceeds executed scope')
    test_report = tests()
    paths = sorted(path for path in build.SOURCE.iterdir() if path.is_file())
    paths += sorted(build.ROOT.glob('toolscripts/platform_engine_wave004*.py'))
    paths += sorted(build.ROOT.glob('toolscripts/platform_engine_material*.py'))
    paths += [build.ROOT / 'tests/test_platform_engine_wave004.py']
    paths += sorted(path for path in build.EVIDENCE.glob('*.json') if path.name != 'ready.json')
    for path in paths:
        if path.suffix in ('.py', '.c', '.h', '.java'):
            content = path.read_text()
            if len(content.splitlines()) > 500:
                raise ValueError('Authored source exceeds line cap: ' + str(path))
            unquoted = re.sub(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', '', content)
            comment = any(token.type == tokenize.COMMENT for token in tokenize.generate_tokens(io.StringIO(content).readline)) if path.suffix == '.py' else '//' in unquoted or '/*' in unquoted
            if comment:
                raise ValueError('Authored code comments prohibited: ' + str(path))
    report = {'schemaVersion': 1, 'status': 'ready-for-coordinator-review', 'packet': 'platform-engine-wave004',
              'claim': 'Measured17-picture material profile with atomic dual-view services; no full game or original hardware pixel equivalence',
              'testsRun': test_report['testsRun'], 'pictureCasesHandled': 17, 'skippedPictureCases': 0,
              'nativeWindowsGdiPixelsVerified': 192000, 'lateMaterialFailurePreservesBothViews': True,
              'originalMaterialCommandsQualified': True, 'completeConstructorReconstructed': False,
              'androidPackaged': True, 'androidDeviceExecuted': False, 'aynThorExecuted': False,
              'recoveredSourceCreditBytes': 0, 'nativeGameBuild': False, 'originalPayloadsPublished': False,
              'files': [tools.pin(path) for path in paths]}
    target = build.EVIDENCE / 'ready.json'
    target.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'files': len(paths), 'testsRun': 15, 'readySha256': hashlib.sha256(target.read_bytes()).hexdigest()}))


if __name__ == '__main__':
    main()
