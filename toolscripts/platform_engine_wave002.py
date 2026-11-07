import argparse
import hashlib
import json
import os
import struct
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import app_shell_build as tools
import platform_engine_packaging as packaging


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'platform/engine-wave002'
WORK = ROOT / 'work/platform-engine-wave002'
EVIDENCE = ROOT / 'evidence/lanes/platform-engine-wave002'
EXPORTS = ['engine_reset', 'engine_resume', 'engine_surface', 'engine_step', 'engine_button', 'engine_axis',
           'engine_touch', 'engine_rect', 'engine_snapshot', 'engine_request', 'engine_claim', 'engine_path',
           'engine_complete', 'engine_checkpoint', 'engine_restore', 'engine_resource_status',
           'fn_00157ff4', 'fn_00173d40']
EXPORTS += ['engine_layout_count', 'engine_layout_size', 'engine_layout_value', 'engine_layout_load']


def scene_bytes():
    payload = b'DQM2SCN1' + struct.pack('<IIIII', 400, 240, 100, 120, 3)
    value = 2166136261
    for byte in payload:
        value = ((value ^ byte) * 16777619) & 0xffffffff
    return payload + struct.pack('<I', value)


def verify_inputs():
    tools.validate_inputs()
    manifest = json.loads((SOURCE / 'recovered-inputs.json').read_text())
    for key in ('acceptance', 'source', 'header'):
        row = manifest[key]
        if tools.sha(ROOT / row['path']) != row['sha256']:
            raise ValueError('Frozen recovered resource-stack input changed')
    receipt = json.loads((ROOT / manifest['acceptance']['path']).read_text())
    accepted = {row['symbol']: row for row in receipt['functions']}
    if receipt['status'] != 'accepted' or len(manifest['functions']) != 2:
        raise ValueError('Resource-stack cohort is not admitted')
    for row in manifest['functions']:
        if accepted.get(row['symbol']) != row or row['sourcePath'] != manifest['source']['path']:
            raise ValueError('Recovered resource-stack identity differs from immutable acceptance')
    return manifest


def compile_object(path, output, android=False):
    flags = ['--target=aarch64-linux-android29', '-fPIC', '-I', tools.SDK / 'native-includes'] if android else ['--target=x86_64-pc-windows-msvc']
    tools.run([tools.CLANG, *flags, '-O2', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
               '-Wall', '-Wextra', '-Werror', '-Wno-unused-parameter', '-c', path, '-o', output], output.with_suffix('.build.json'))


def build_windows(manifest, output):
    output.mkdir(parents=True, exist_ok=True)
    objects = {}
    for name, path in [('engine', SOURCE / 'engine.c'), ('resources', SOURCE / 'resources.c'),
                       ('layout', SOURCE / 'layout.c'),
                       ('recovered-stack', ROOT / manifest['source']['path']),
                       ('windows', SOURCE / 'engine_windows.c'), ('io', SOURCE / 'windows_io.c')]:
        objects[name] = output / (name + '.obj')
        compile_object(path, objects[name])
    libraries = []
    for name in ('kernel32', 'user32', 'gdi32'):
        definition = SOURCE / (name + '.def') if name in ('kernel32', 'gdi32') else ROOT / 'platform/app-shell' / (name + '.def')
        library = output / (name + '.lib')
        tools.run([tools.LINKER, '-flavor', 'link', '/lib', '/machine:x64', '/def:' + str(definition),
                   '/out:' + str(library)], output / (name + '-imports.json'))
        libraries.append(library)
    executable = output / 'dqm_portable_engine.exe'
    tools.run([tools.LINKER, '-flavor', 'link', '/machine:x64', '/entry:mainCRTStartup', '/nodefaultlib',
               '/timestamp:0', '/subsystem:windows', '/out:' + str(executable), *objects.values(), *libraries], output / 'app-link.json')
    library = output / 'dqm_engine_core.dll'
    tools.run([tools.LINKER, '-flavor', 'link', '/machine:x64', '/dll', '/noentry', '/nodefaultlib', '/timestamp:0',
               '/out:' + str(library), *['/export:' + name for name in EXPORTS],
               objects['engine'], objects['resources'], objects['layout'], objects['recovered-stack']], output / 'core-link.json')
    asset = output / 'assets/scenes/example.dat'
    asset.parent.mkdir(parents=True, exist_ok=True)
    asset.write_bytes(scene_bytes())
    corrupt = asset.with_name('corrupt.dat')
    corrupt.write_bytes(scene_bytes()[:-1] + bytes([scene_bytes()[-1] ^ 1]))
    native = json.loads(tools.run([executable, '--headless'], output / 'native-execution.json'))
    negative = json.loads(tools.run([executable, '--headless', '--negative-asset'], output / 'corrupt-asset-control.json'))
    if native['status'] != 'native-engine-services-passed' or native['simulationTicks'] != 60 or negative['status'] != 'rejected-corrupt-asset':
        raise ValueError('Native engine service integration failed')
    return {'executable': tools.pin(executable), 'coreLibrary': tools.pin(library), 'nativeExecution': native,
            'corruptAssetControl': negative, 'guiCompiled': True, 'guiExecution': False,
            'workerThreadFileIoExecuted': True, 'diskCheckpointRoundtripExecuted': True}, asset


def build_android(manifest, output, asset):
    native = output / 'native'
    native.mkdir(parents=True, exist_ok=True)
    objects = []
    for name, source in [('engine', SOURCE / 'engine.c'), ('resources', SOURCE / 'resources.c'),
                         ('layout', SOURCE / 'layout.c'),
                         ('recovered-stack', ROOT / manifest['source']['path']), ('jni', SOURCE / 'jni.c')]:
        obj = native / (name + '.o')
        compile_object(source, obj, True)
        objects.append(obj)
    library, descriptor = packaging.native_android(SOURCE, native, objects)
    package = packaging.package(SOURCE, output / 'package', WORK / 'signing', library, asset)
    package['native'] = descriptor
    return package


def probe_devices():
    adb = ROOT / 'tools/android-platform-tools-37.0.1/adb.exe'
    if not adb.is_file():
        return {'adbAvailable': False, 'attachedDevices': 0, 'deviceExecution': False}
    android_home = WORK / 'android-home'
    android_home.mkdir(parents=True, exist_ok=True)
    environment = os.environ.copy()
    environment['ANDROID_USER_HOME'] = str(android_home)
    environment['ANDROID_SDK_HOME'] = str(android_home)
    result = subprocess.run([str(adb), '-P', '5042', 'devices', '-l'], capture_output=True, text=True, env=environment, timeout=30)
    subprocess.run([str(adb), '-P', '5042', 'kill-server'], capture_output=True, env=environment, timeout=15)
    lines = [line.split() for line in result.stdout.splitlines()[1:] if line.strip()]
    devices = [{'serialSha256': hashlib.sha256(row[0].encode()).hexdigest(), 'state': row[1]} for row in lines if len(row) >= 2]
    return {'adbAvailable': True, 'adb': tools.pin(adb), 'serverPort': 5042, 'projectLocalAndroidHome': True,
            'probeExitCode': result.returncode, 'attachedDevices': len(devices), 'devices': devices, 'deviceExecution': False}


def build():
    output = WORK / 'build'
    output.mkdir(parents=True, exist_ok=True)
    manifest = verify_inputs()
    source_pins = [tools.pin(path) for path in sorted(SOURCE.iterdir()) if path.is_file()]
    windows, asset = build_windows(manifest, output / 'windows')
    android = build_android(manifest, output / 'android', asset)
    devices = probe_devices()
    verify_inputs()
    if source_pins != [tools.pin(ROOT / row['path']) for row in source_pins]:
        raise ValueError('Platform engine source changed during build')
    report = {'schemaVersion': 1, 'status': 'portable-engine-service-components-built-and-tested',
              'producer': tools.pin(Path(__file__)), 'packagingProducer': tools.pin(ROOT / 'toolscripts/platform_engine_packaging.py'),
              'sources': source_pins, 'recoveredInputs': manifest, 'windows': windows, 'android': android, 'deviceProbe': devices,
              'componentServices': ['bounded asynchronous scene-resource loading', 'recovered typed VM stack job operations',
                                    'validated resource/checkpoint formats', 'single-owner fixed-step simulation',
                                    'two logical views and Android presentation-display routing', 'touch/controller and lifecycle state guards'],
              'authoredSceneAsset': {'sha256': hashlib.sha256(scene_bytes()).hexdigest(), 'bytes': len(scene_bytes()), 'containsOriginalGameData': False},
              'acceptedRecoveredSourceCredit': 0, 'fullNativeWindowsGame': False, 'fullNativeAndroidGame': False,
              'androidDeviceExecution': False, 'aynThorValidated': False,
              'limitations': ['Authored scene is a platform-service workload, not reconstructed DQMJ3 gameplay',
                              'Default packages contain only the authored scene; measured private layout integration is validated separately',
                              'Original game textures/fonts/materials/animations, game scripts and full game simulation are not integrated',
                              'Android execution/lifecycle/dual-display behavior requires an attached device',
                              'Windows GUI code compiled; headless native filesystem/worker/simulation/checkpoint path executed'],
              'reproductionArgv': ['tools/python/Scripts/python.exe', 'toolscripts/platform_engine_wave002.py']}
    tools.save(output / 'report.json', report)
    tools.save(EVIDENCE / 'report.json', report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.parse_args()
    report = build()
    print(json.dumps({'status': report['status'], 'nativeWindowsServicesExecuted': True,
                      'androidArm64PackageBuilt': True, 'attachedAndroidDevices': report['deviceProbe']['attachedDevices'], 'fullGameBuild': False}))


if __name__ == '__main__':
    main()
