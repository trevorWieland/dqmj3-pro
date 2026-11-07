import argparse
import json
import os
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import app_shell_build as tools
import platform_engine_wave002 as frozen
import platform_engine_wave004_packaging as packaging


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'platform/engine-wave004'
WORK = ROOT / 'work/platform-engine-wave004'
EVIDENCE = ROOT / 'evidence/lanes/platform-engine-wave004'
EXPORTS = ['component_' + name for name in ('reset', 'resume', 'surface', 'request', 'claim', 'complete', 'job_status',
           'button', 'axis', 'touch', 'step', 'state', 'rect', 'scene_stat', 'geometry', 'pixels')]
ALIASES = ['-Dengine_layout_' + name + '=staging_layout_' + name for name in ('reset', 'load', 'count', 'size', 'value')]


def inputs():
    manifest = frozen.verify_inputs()
    ready = json.loads((ROOT / 'evidence/lanes/platform-engine-wave003/ready.json').read_text())
    for row in ready['files']:
        if tools.sha(ROOT / row['path']) != row['sha256']:
            raise ValueError('Frozen wave003 input differs: ' + row['path'])
    lock = json.loads((SOURCE / 'frozen-inputs.json').read_text())
    for row in lock['files']:
        if tools.sha(ROOT / row['path']) != row['sha256']:
            raise ValueError('Frozen engine integration input differs: ' + row['path'])
    return manifest


def compile_object(source, target, android=False, aliases=()):
    flags = ['--target=aarch64-linux-android29', '-fPIC', '-fvisibility=hidden', '-I', tools.SDK / 'native-includes'] if android else ['--target=x86_64-pc-windows-msvc']
    tools.run([tools.CLANG, *flags, *aliases, '-O2', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
               '-Wall', '-Wextra', '-Werror', '-Wno-unused-parameter', '-c', source, '-o', target], target.with_suffix('.build.json'))


def objects(directory, android=False):
    directory.mkdir(parents=True, exist_ok=True)
    manifest = json.loads((ROOT / 'platform/engine-wave002/recovered-inputs.json').read_text())
    rows = [('component', SOURCE / 'component.c', []), ('stage', SOURCE / 'stage.c', ALIASES),
            ('material-render', SOURCE / 'material_render.c', ALIASES),
            ('materials', SOURCE / 'materials.c', []), ('material-sampling', SOURCE / 'material_sampling.c', []),
            ('texture', ROOT / 'platform/engine-wave003/texture.c', []),
            ('archive', ROOT / 'platform/engine-wave003/archive.c', []),
            ('private-layout', ROOT / 'platform/engine-wave002/layout.c', ALIASES),
            ('engine', ROOT / 'platform/engine-wave002/engine.c', ALIASES + ['-Dengine_scene_load=legacy_scene_load']),
            ('resources', ROOT / 'platform/engine-wave002/resources.c', []),
            ('recovered-stack', ROOT / manifest['source']['path'], [])]
    result = []
    for name, source, aliases in rows:
        target = directory / (name + ('.o' if android else '.obj'))
        compile_object(source, target, android, aliases)
        result.append(target)
    return result


def core(directory, extra_exports=()):
    native = objects(directory)
    target = directory / 'dqm_atomic_views.dll'
    tools.run([tools.LINKER, '-flavor', 'link', '/machine:x64', '/dll', '/noentry', '/nodefaultlib', '/timestamp:0',
               '/out:' + str(target), *['/export:' + name for name in [*EXPORTS, *extra_exports]], *native], directory / 'core-link.json')
    return target, native


def windows():
    work = WORK / 'windows'
    library, native = core(work)
    host = work / 'component-windows.obj'
    compile_object(SOURCE / 'component_windows.c', host)
    imports = []
    for name in ('kernel32', 'gdi32', 'user32'):
        source = ROOT / ('platform/app-shell/user32.def' if name == 'user32' else 'platform/engine-wave003/' + name + '.def')
        target = work / (name + '.lib')
        tools.run([tools.LINKER, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(source), '/out:' + str(target)], work / (name + '-imports.json'))
        imports.append(target)
    executable = work / 'dqm_atomic_material_views.exe'
    tools.run([tools.LINKER, '-flavor', 'link', '/machine:x64', '/entry:mainCRTStartup', '/nodefaultlib', '/timestamp:0',
               '/subsystem:windows', '/out:' + str(executable), *native, host, *imports], work / 'app-link.json')
    missing = subprocess.run([str(executable), '--headless'], capture_output=True, text=True, timeout=20)
    if missing.returncode != 2 or json.loads(missing.stdout)['status'] != 'private-asset-unavailable':
        raise ValueError('Original asset unexpectedly present in public executable directory')
    return {'executable': tools.pin(executable), 'coreLibrary': tools.pin(library), 'missingPrivateAssetControl': True,
            'guiCompiled': True, 'interactiveGuiExecuted': False, 'recoveredStackSourceLinked': True}


def android():
    work = WORK / 'android'
    native = objects(work / 'native', True)
    target = work / 'native/material-jni.o'
    compile_object(SOURCE / 'material_jni.c', target, True)
    library, descriptor = packaging.library(work / 'native', [*native, target])
    result = packaging.package(SOURCE, work / 'package', WORK / 'signing', library)
    result['native'] = descriptor
    return result


def devices():
    adb = ROOT / 'tools/android-platform-tools-37.0.1/adb.exe'
    directory = WORK / 'android-home'
    directory.mkdir(parents=True, exist_ok=True)
    environment = os.environ.copy()
    environment['ANDROID_USER_HOME'] = environment['ANDROID_SDK_HOME'] = str(directory)
    try:
        result = subprocess.run([str(adb), '-P', '5044', 'devices', '-l'], capture_output=True, text=True, env=environment, timeout=30)
    finally:
        subprocess.run([str(adb), '-P', '5044', 'kill-server'], capture_output=True, env=environment, timeout=15)
    rows = [row for row in result.stdout.splitlines()[1:] if row.strip()]
    (WORK / 'private-adb.json').write_text(json.dumps({'exitCode': result.returncode, 'stdout': result.stdout, 'stderr': result.stderr}, indent=2) + '\n')
    return {'attachedDevices': len(rows), 'adb': tools.pin(adb), 'deviceExecution': False, 'aynThorExecution': False}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--core-only', action='store_true')
    args = parser.parse_args()
    manifest = inputs()
    if args.core_only:
        target, unused = core(WORK / 'windows')
        print(json.dumps({'status': 'atomic-dual-view-core-built', 'library': tools.pin(target), 'nativeGameBuild': False}))
        return
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    report = {'schemaVersion': 1, 'status': 'atomic-material-platform-components-built', 'windows': windows(), 'android': android(),
              'deviceProbe': devices(), 'recoveredResourceInputs': manifest,
              'sourceInputs': [tools.pin(path) for path in sorted(SOURCE.iterdir()) if path.is_file() and path.suffix != '.md'],
              'sceneScope': 'All17 measured picture materials; static map mirrored for dual-view service integration',
              'recoveredSourceCreditBytes': 0, 'nativeGameBuild': False, 'originalAssetsPackaged': False}
    (EVIDENCE / 'build.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'windows': report['windows']['executable'], 'android': report['android']['apk']}))


if __name__ == '__main__':
    main()
