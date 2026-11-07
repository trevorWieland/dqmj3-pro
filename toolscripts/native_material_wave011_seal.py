import io
import json
import re
import subprocess
import tokenize

from native_material_wave011_build import ROOT, WORK, SOURCE, HEADER, build, pin, save, sha


OUT = ROOT / 'evidence/lanes/wave011-material'


def main():
    report = json.loads((OUT / 'constructor.json').read_text())
    if report['build']['source'] != pin(SOURCE) or report['build']['header'] != pin(HEADER):
        raise ValueError('Constructor source changed after measurements')
    if report['tests']['returningComparisons'] != 267 or len(report['tests']['wrongSourceControls']) != 4:
        raise ValueError('Constructor qualification is incomplete')
    log = WORK / 'final-tests.txt'
    result = subprocess.run([str(ROOT / 'tools/python/Scripts/python.exe'), '-m', 'unittest', 'discover',
        '-s', 'tests', '-p', 'test_native_material_wave011.py', '-v'], cwd=ROOT, capture_output=True, timeout=180)
    log.write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('Constructor final tests failed')
    owned = [SOURCE, HEADER, SOURCE.parent / 'README.md', ROOT / 'tests/test_native_material_wave011.py']
    owned += sorted((ROOT / 'toolscripts').glob('native_material_wave011*.py'))
    for path in owned:
        if path.suffix not in ['.c', '.h', '.py']:
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
                raise ValueError('Authored C comments are forbidden')
    tools = [ROOT / 'toolscripts/platform_engine_texture_reference.py', ROOT / 'toolscripts/module_link_graph.py', ROOT / 'toolscripts/module_link.py']
    save(OUT / 'tests.json', {'status': 'passed', 'unitTests': 3, 'returningComparisons': 267,
        'compiledReturningWrongSourceControls': 4, 'privateTestLog': pin(log),
        'sourceOnlyHelperGraph': False, 'gameBuild': False})
    save(OUT / 'preserved-attempts.json', {'attempts': [
        {'issue': 'Initial context-layout assertion found omitted halfword padding at 0x2a',
            'resolution': 'Explicit reserved2a field; ARM context flags offset 0x2c now asserted',
            'originalDiagnosticRetention': 'First diagnostic was observed in tool output before per-attempt log rotation was added'},
        {'issue': 'Absolute Thumb symbol direct call emitted linker interworking warning',
            'resolution': 'Ordinary typed volatile function-pointer dispatch; all subsequent builds have zero diagnostics',
            'privateOriginalLog': pin(WORK / 'build/link-prior-1.json')},
        {'issue': 'Research import initially disassembled Thumb array helper as ARM',
            'resolution': 'Canonical census mode and actual Thumb execution used; decompiler text never defines the ABI'},
        {'issue': 'Early synthetic wraps included value3, which reads an unspecified original GPU-helper stack slot',
            'resolution': 'Although initial bounded comparisons agreed, this is not a valid source-level service contract; corpus and qualified domain now require wrap0..2'}]})
    metadata = [OUT / name for name in ['constructor.json', 'tests.json', 'preserved-attempts.json']]
    save(OUT / 'ready.json', {'schemaVersion': 1, 'status': 'ready-for-coordinator-review',
        'packet': 'wave011-material-constructor', 'function': 'fn_00554a30', 'originalInstructionBytes': 3020,
        'originalPoolBytes': 8, 'candidateSourceFunctionComplete': True,
        'returningComparisons': 267, 'compiledReturningWrongSourceControls': 4,
        'requestedExactBytes': 0, 'requestedFunctionalCandidateBytes': 3020,
        'retainedOriginalHelpersInPrivateOracle': True, 'sourceOnlyHelperGraph': False,
        'nativeGameBuild': False, 'androidDeviceExecuted': False, 'coordinatorAdmissionRequired': True,
        'files': [pin(path) for path in owned + metadata], 'readOnlyInputs': [pin(path) for path in tools],
        'originalPayloadsPublished': False})
    print(json.dumps({'status': 'ready-for-coordinator-review', 'packet': 'wave011-material-constructor',
        'readySha256': sha((OUT / 'ready.json').read_bytes())}))


if __name__ == '__main__':
    main()
