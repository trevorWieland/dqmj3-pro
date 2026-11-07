import hashlib
import importlib.util
import io
import json
import re
import struct
import tokenize
import unittest
from pathlib import Path

import app_shell_build as tools
import platform_engine_wave003 as build


def pin(path):
    return tools.pin(path)


def run_tests():
    path = build.ROOT / 'tests/test_platform_engine_wave003.py'
    spec = importlib.util.spec_from_file_location('texture_component_replay', path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    stream = io.StringIO()
    result = unittest.TextTestRunner(stream=stream, verbosity=2).run(unittest.defaultTestLoader.loadTestsFromModule(module))
    (build.WORK / 'final-unittest-output.txt').write_text(stream.getvalue())
    if not result.wasSuccessful() or result.testsRun != 11 or result.skipped:
        raise ValueError('Native component replay did not execute all eleven cases successfully')
    matches = []
    for source in build.CORE:
        production = build.WORK / 'windows' / (source.stem + '.obj')
        replay = build.WORK / 'tests/native' / (source.stem + '.obj')
        first, second = production.read_bytes(), replay.read_bytes()
        if len(first) < 20 or len(second) < 20 or first[:2] != b'\x64\x86' or second[:2] != b'\x64\x86' or first[:4] != second[:4] or first[8:] != second[8:]:
            raise ValueError('Clean replay COFF bytes differ beyond timestamp: ' + source.name)
        matches.append({'sourcePath': source.relative_to(build.ROOT).as_posix(), 'productionObjectSha256': tools.sha(production),
                        'replayObjectSha256': tools.sha(replay), 'productionCoffTimestamp': struct.unpack_from('<I', first, 4)[0],
                        'replayCoffTimestamp': struct.unpack_from('<I', second, 4)[0],
                        'allBytesExceptCoffTimestampEqual': True, 'filesModifiedForComparison': False})
    report = {'schemaVersion': 1, 'status': 'passed', 'testsRun': result.testsRun, 'failures': len(result.failures),
              'errors': len(result.errors), 'skipped': len(result.skipped), 'testSource': pin(path),
              'cleanCoreRebuild': True, 'productionDllUsedByTests': False, 'productionAndReplayCoffComparisons': matches,
              'scope': 'Native Windows decoder, archive, static compositing and atomic replacement; Android lifecycle unexecuted',
              'preSealHarnessRepairs': ['Initial APK allowlist omitted generated resources and signing records',
                                       'Frame preservation harness initially serialized uint32 values through bytes(list), corrected to raw pointer bytes',
                                       'Whole COFF comparison initially rejected compile timestamps; final check records both complete hashes and excludes only timestamp metadata without modifying files',
                                       'Comment gate initially treated the Java MIME string literal as a comment; final gate removes quoted literals before checking']}
    (build.EVIDENCE / 'tests.json').write_text(json.dumps(report, indent=2) + '\n')
    return report


def main():
    build.inputs()
    for name in ('build.json', 'measured-textures.json', 'provenance.json'):
        if not (build.EVIDENCE / name).is_file():
            raise ValueError('Required packet evidence absent: ' + name)
    built = json.loads((build.EVIDENCE / 'build.json').read_text())
    measured = json.loads((build.EVIDENCE / 'measured-textures.json').read_text())
    for row in built['sourceInputs'] + [built['windows']['executable'], built['windows']['coreLibrary'], built['android']['apk'], built['android']['native']['library']]:
        if tools.sha(build.ROOT / row['path']) != row['sha256']:
            raise ValueError('Built packet identity differs: ' + row['path'])
    if measured['comparedTexturePixels'] != 277465 or measured['differingTextureRgbaBytes'] or measured['bindings']['unresolvedTextureReferences']:
        raise ValueError('Measured texture closure differs')
    if measured['native']['drawnPictures'] != 13 or measured['native']['pictures'] != 17 or measured['native']['originalRenderEquivalenceClaim']:
        raise ValueError('Static preview scope differs')
    if built['nativeGameBuild'] or measured['nativeGameBuild'] or built['android']['deviceExecution'] or measured['originalPayloadsPublished']:
        raise ValueError('Packet claims exceed executed scope')
    tests = run_tests()
    paths = sorted(path for path in build.SOURCE.iterdir() if path.is_file())
    paths += sorted(build.ROOT.glob('toolscripts/platform_engine_wave003*.py'))
    paths += sorted(build.ROOT.glob('toolscripts/platform_engine_texture*.py'))
    paths += [build.ROOT / 'tests/test_platform_engine_wave003.py']
    paths += sorted(path for path in build.EVIDENCE.glob('*.json') if path.name != 'ready.json')
    for path in paths:
        if path.suffix in ('.py', '.c', '.h', '.java'):
            content = path.read_text()
            if len(content.splitlines()) > 500:
                raise ValueError('Authored source exceeds line cap: ' + str(path))
            unquoted = re.sub(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', '', content)
            comments = any(token.type == tokenize.COMMENT for token in tokenize.generate_tokens(io.StringIO(content).readline)) if path.suffix == '.py' else '//' in unquoted or '/*' in unquoted
            if comments:
                raise ValueError('Authored code comments prohibited: ' + str(path))
    ready = {'schemaVersion': 1, 'status': 'ready-for-coordinator-review', 'packet': 'platform-engine-wave003',
             'claim': 'Measured private-asset textured native component; no full-game or original-render equivalence claim',
             'testsRun': tests['testsRun'], 'textureDependenciesResolved': 10, 'comparedTexturePixels': 277465,
             'renderedPictures': 13, 'totalPictures': 17, 'nativeWindowsGdiExecuted': True,
             'androidPackaged': True, 'androidDeviceExecuted': False, 'recoveredSourceCreditBytes': 0,
             'nativeGameBuild': False, 'originalPayloadsPublished': False, 'files': [pin(path) for path in paths]}
    target = build.EVIDENCE / 'ready.json'
    target.write_text(json.dumps(ready, indent=2) + '\n')
    print(json.dumps({'status': ready['status'], 'files': len(paths), 'testsRun': tests['testsRun'], 'readySha256': hashlib.sha256(target.read_bytes()).hexdigest()}))


if __name__ == '__main__':
    main()
