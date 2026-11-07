import argparse
import json
import os
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import app_shell_build as tools
import platform_engine_wave002 as frozen
import platform_engine_wave003_packaging as packaging


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'platform/engine-wave003'
WORK = ROOT / 'work/platform-engine-wave003'
EVIDENCE = ROOT / 'evidence/lanes/platform-engine-wave003'
EXPORTS = ['texture_info', 'texture_decode', 'textured_scene_load', 'textured_scene_pixels', 'textured_scene_stat']
CORE = [SOURCE / name for name in ('texture.c', 'archive.c', 'scene.c', 'scene_render.c')] + [ROOT / 'platform/engine-wave002/layout.c']


def inputs():
    tools.validate_inputs()
    lock = json.loads((SOURCE / 'reused-inputs.json').read_text())
    for row in lock['files']:
        if tools.sha(ROOT / row['path']) != row['sha256']:
            raise ValueError('Frozen component input changed: ' + row['path'])
    return lock


def objects(directory, android=False):
    directory.mkdir(parents=True, exist_ok=True)
    result = []
    for path in CORE:
        target = directory / (path.stem + ('.o' if android else '.obj'))
        frozen.compile_object(path, target, android)
        result.append(target)
    return result


def windows():
    work = WORK / 'windows'
    core = objects(work)
    target = work / 'dqm_textures.dll'
    tools.run([tools.LINKER, '-flavor', 'link', '/machine:x64', '/dll', '/noentry', '/nodefaultlib', '/timestamp:0',
               '/out:' + str(target), *['/export:' + name for name in EXPORTS], *core], work / 'core-link.json')
    host = work / 'texture_windows.obj'
    frozen.compile_object(SOURCE / 'texture_windows.c', host)
    libraries = []
    for name in ('kernel32', 'gdi32', 'user32'):
        definition = ROOT / 'platform/app-shell/user32.def' if name == 'user32' else SOURCE / (name + '.def')
        library = work / (name + '.lib')
        tools.run([tools.LINKER, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition), '/out:' + str(library)], work / (name + '-imports.json'))
        libraries.append(library)
    executable = work / 'dqm_texture_components.exe'
    tools.run([tools.LINKER, '-flavor', 'link', '/machine:x64', '/entry:mainCRTStartup', '/nodefaultlib', '/timestamp:0',
               '/subsystem:windows', '/out:' + str(executable), *core, host, *libraries], work / 'app-link.json')
    result = subprocess.run([str(executable), '--headless'], capture_output=True, text=True, timeout=20)
    if result.returncode != 2 or json.loads(result.stdout)['status'] != 'private-asset-unavailable':
        raise ValueError('Public executable unexpectedly has or accepted an original asset')
    return {'executable': tools.pin(executable), 'coreLibrary': tools.pin(target), 'missingPrivateAssetControl': True,
            'guiCompiled': True, 'guiExecution': False, 'nativeGameBuild': False}


def android():
    work = WORK / 'android'
    core = objects(work / 'native', True)
    jni = work / 'native/texture_jni.o'
    frozen.compile_object(SOURCE / 'texture_jni.c', jni, True)
    native, report = packaging.library(work / 'native', [*core, jni])
    result = packaging.package(SOURCE, work / 'package', WORK / 'signing', native)
    result['native'] = report
    return result


def devices():
    adb = ROOT / 'tools/android-platform-tools-37.0.1/adb.exe'
    if not adb.exists():
        return {'adbAvailable': False, 'deviceExecution': False}
    directory = WORK / 'android-home'
    directory.mkdir(parents=True, exist_ok=True)
    environment = os.environ.copy()
    environment['ANDROID_USER_HOME'] = environment['ANDROID_SDK_HOME'] = str(directory)
    try:
        result = subprocess.run([str(adb), '-P', '5043', 'devices', '-l'], capture_output=True, text=True, env=environment, timeout=30)
    finally:
        subprocess.run([str(adb), '-P', '5043', 'kill-server'], capture_output=True, env=environment, timeout=15)
    rows = [row for row in result.stdout.splitlines()[1:] if row.strip()]
    (WORK / 'private-adb.json').write_text(json.dumps({'returncode': result.returncode, 'stdout': result.stdout, 'stderr': result.stderr}, indent=2) + '\n')
    return {'adbAvailable': True, 'adb': tools.pin(adb), 'attachedDevices': len(rows), 'deviceExecution': False}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--skip-android', action='store_true')
    args = parser.parse_args()
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    lock = inputs()
    report = {'schemaVersion': 1, 'status': 'built-platform-components', 'claim': 'Asset-derived textured UI component; no source-only game claim',
              'reusedInputs': lock, 'windows': windows(), 'android': None if args.skip_android else android(),
              'devices': devices(), 'sourceInputs': [tools.pin(path) for path in sorted(SOURCE.iterdir()) if path.is_file() and path.suffix != '.md'],
              'recoveredSourceCreditBytes': 0, 'nativeGameBuild': False}
    (EVIDENCE / 'build.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'windows': report['windows']['executable'],
                      'android': report['android']['apk'] if report['android'] else None}))


if __name__ == '__main__':
    main()
