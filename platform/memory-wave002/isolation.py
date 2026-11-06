import hashlib
import json
import os
import shutil
import subprocess
import sys
from pathlib import Path


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def relocate(value, before, after):
    if isinstance(value, dict):
        return {key: relocate(item, before, after) for key, item in value.items()}
    if isinstance(value, list):
        return [relocate(item, before, after) for item in value]
    if isinstance(value, str):
        return value.replace(str(before), str(after)).replace(before.as_posix(), after.as_posix())
    return value


def run(root, output, workers=3):
    output = Path(output).resolve()
    if not output.is_relative_to(root / 'work/platform-memory-wave002'):
        raise RuntimeError('Isolated root escapes owned lane')
    if output.exists():
        raise RuntimeError('Isolated root must be a fresh directory')
    output.mkdir(parents=True)
    child = output / 'minimal-root'
    platform = root / 'platform/memory-wave002'
    manifest = json.loads((platform / 'inputs.json').read_text())
    paths = {item['path'] for item in manifest['inputs'] + manifest['toolPins'] if not item['path'].startswith('tools/python/')}
    paths.update((manifest['modulePath'], manifest['descriptorPath'], manifest['runtimeDescriptor']['path'],
                  'toolscripts/platform_memory_wave002.py'))
    paths.update(path.relative_to(root).as_posix() for path in platform.iterdir() if path.is_file())
    inventory = []
    for relative in sorted(paths):
        source, target = root / relative, child / relative
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(source, target)
        inventory.append({'path': relative, 'sha256': sha(target)})
    commands = []
    for argv in ([sys.executable, '-m', 'venv', str(child / 'tools/python')],
                 [str(child / 'tools/python/Scripts/python.exe'), '-m', 'pip', 'install', '--no-index',
                  '--find-links', str(child / 'tools/wheels'), 'capstone==5.0.9', 'unicorn==2.1.4', 'pyelftools==0.33']):
        result = subprocess.run(argv, capture_output=True, timeout=120)
        commands.append({'argv': argv, 'exitCode': result.returncode, 'stdout': result.stdout.decode(errors='replace'),
                         'stderr': result.stderr.decode(errors='replace')})
        if result.returncode:
            raise RuntimeError('Fresh offline venv materialization failed: ' + repr(commands[-1]))
    import importlib.util
    contract_spec = importlib.util.spec_from_file_location('fresh_venv_contracts', platform / 'contracts.py')
    contracts = importlib.util.module_from_spec(contract_spec)
    contract_spec.loader.exec_module(contracts)
    runtime = json.loads((root / manifest['runtimeDescriptor']['path']).read_text())
    preflight = contracts.preflight_tools(child, manifest, runtime)
    rewritten = []
    for relative in ('evidence/lanes/wave002-native/packet.json', 'evidence/lanes/wave003-abi/packet.json'):
        source, target = root / relative, child / relative
        target.parent.mkdir(parents=True, exist_ok=True)
        original = json.loads(source.read_text())
        changed = relocate(original, root, child)
        changed['isolatedRuntimeOutputDirectory'] = str(child / 'work/new-runtime-output')
        target.write_text(json.dumps(changed, indent=2) + '\n')
        if sha(source) == sha(target):
            raise RuntimeError('Runtime receipt path did not differ')
        rewritten.append({'path': relative, 'sourceSha256': sha(source), 'isolatedSha256': sha(target)})
    before = sha(platform / 'inputs.json')
    argv = [str(child / 'tools/python/Scripts/python.exe'), str(child / 'toolscripts/platform_memory_wave002.py'),
            '--capture-native', '--workers', str(workers)]
    environment = dict(os.environ, PYTHONDONTWRITEBYTECODE='1')
    process = subprocess.run(argv, cwd=output, env=environment, capture_output=True, timeout=900)
    (output / 'stdout.log').write_bytes(process.stdout)
    (output / 'stderr.log').write_bytes(process.stderr)
    if process.returncode:
        raise RuntimeError('Isolated replay failed; see ' + str(output / 'stderr.log'))
    report = json.loads((child / 'evidence/lanes/platform-memory-wave002/report.json').read_text())
    if sha(child / 'platform/memory-wave002/inputs.json') != before or sha(platform / 'inputs.json') != before:
        raise RuntimeError('Manifest path pins were refreshed')
    if (report['caseCount'] != 7560 or report['actualOriginalFixtureReturns'] != 7560
            or report['windows']['semanticMismatchCount'] or report['compiledWrongSource']['semanticMismatchCount'] != 7560):
        raise RuntimeError('Isolated replay completeness failure')
    report_path = child / 'evidence/lanes/platform-memory-wave002/report.json'
    corpus_path = child / 'evidence/lanes/platform-memory-wave002/corpus.json'
    receipt = {'status': 'isolated-minimal-root-passed', 'root': str(child), 'exitCode': process.returncode,
               'argv': argv, 'workingDirectory': str(output), 'copiedInputs': inventory,
               'runtimeReceiptRewrites': rewritten, 'unchangedInputManifestSha256': before,
               'functionDescriptorsSha256': sha(child / manifest['descriptorPath']),
               'report': {'path': report_path.relative_to(root).as_posix(), 'sha256': sha(report_path)},
               'corpus': {'path': corpus_path.relative_to(root).as_posix(), 'sha256': sha(corpus_path)},
               'actualOriginalFixtureReturns': 7560, 'windowsActualFixtureReturns': 7560,
               'wrongSourceActualReturns': report['compiledWrongSource']['actualSourceFixtureReturns'],
               'wrongSourceMismatches': report['compiledWrongSource']['semanticMismatchCount'],
               'hostPointerBytes': report['windows']['hostPointerWidth'],
               'androidDefinedFunctions': report['android']['library']['definedFunctionCount'],
               'androidActuallyExecuted': False, 'externalRuntime': manifest['runtimeDescriptor'],
               'freshVenvCreated': True, 'offlinePackagesInstalled': True, 'materializationCommands': commands,
               'freshVenvImmutableInputPreflight': preflight,
               'installerRecordPolicy': 'RECORD raw hashes excluded; effective code/native libraries/METADATA/WHEEL pinned',
               'fullGameBuild': False, 'acceptedSourceCredit': 0}
    (output / 'receipt.json').write_text(json.dumps(receipt, indent=2) + '\n')
    return receipt
