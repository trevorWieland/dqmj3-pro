import argparse
import json
import os
from pathlib import Path
import socket
import subprocess
import time


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/android-os-validation'
EMULATOR = ROOT / 'tools/android-os-emulator/emulator/emulator.exe'
IMAGE = ROOT / 'tools/android-os-images/api36-ps16k/x86_64'
ADB = ROOT / 'tools/android-platform-tools-37.0.1/adb.exe'
SERIAL = 'emulator-5580'
NAME = 'dqm-api36-16k-isolated'


def save(name, value):
    path = WORK / name
    path.parent.mkdir(parents=True, exist_ok=True)
    if name.startswith('private/') and path.exists():
        index = 1
        while path.with_name(path.stem + '-prior-' + str(index) + path.suffix).exists():
            index += 1
        path.rename(path.with_name(path.stem + '-prior-' + str(index) + path.suffix))
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def environment():
    env = os.environ.copy()
    for name, folder in [('ANDROID_AVD_HOME', 'avd'), ('ANDROID_USER_HOME', 'user'),
        ('ANDROID_EMULATOR_HOME', 'user'), ('ANDROID_SDK_HOME', 'sdk-user'), ('TEMP', 'tmp'), ('TMP', 'tmp')]:
        path = WORK / folder
        path.mkdir(parents=True, exist_ok=True)
        env[name] = str(path)
    env['ANDROID_SDK_ROOT'] = str(WORK / 'sdk')
    env['ANDROID_HOME'] = str(WORK / 'sdk')
    env['ANDROID_ADB_SERVER_PORT'] = '5046'
    env['ADB_SERVER_SOCKET'] = 'tcp:localhost:5046'
    return env


def execute(argv, label, timeout=30, input_bytes=None):
    process = subprocess.run([str(item) for item in argv], capture_output=True, timeout=timeout,
        env=environment(), input=input_bytes, creationflags=subprocess.CREATE_NO_WINDOW)
    save('private/' + label + '.json', {'argv': [str(item) for item in argv], 'exitCode': process.returncode,
        'stdout': process.stdout.decode(errors='replace'), 'stderr': process.stderr.decode(errors='replace')})
    return process


def adb(args, label='adb', timeout=30, device=True, input_bytes=None):
    return execute([ADB, '-P', '5046', *(['-s', SERIAL] if device else []), *args], label, timeout, input_bytes)


def occupied(port):
    with socket.socket() as connection:
        connection.settimeout(.2)
        return connection.connect_ex(('127.0.0.1', port)) == 0


def prepare():
    env = environment()
    avd = WORK / 'avd' / (NAME + '.avd')
    avd.mkdir(parents=True, exist_ok=True)
    config = {'AvdId': NAME, 'avd.ini.displayname': NAME, 'abi.type': 'x86_64', 'hw.cpu.arch': 'x86_64',
        'hw.cpu.ncore': '2', 'hw.ramSize': '2048', 'hw.lcd.width': '800', 'hw.lcd.height': '1280',
        'hw.lcd.density': '160', 'hw.lcd.depth': '32', 'hw.gpu.enabled': 'yes', 'hw.gpu.mode': 'swiftshader',
        'image.sysdir.1': IMAGE.as_posix() + '/', 'tag.id': 'google_apis', 'target': 'android-36',
        'disk.dataPartition.size': '2G', 'vm.heapSize': '256', 'showDeviceFrame': 'no',
        'fastboot.forceColdBoot': 'yes', 'PlayStore.enabled': 'false', 'hw.keyboard': 'yes'}
    (avd / 'config.ini').write_text('\n'.join(key + '=' + value for key, value in config.items()) + '\n')
    (avd.parent / (NAME + '.ini')).write_text('avd.ini.encoding=UTF-8\npath=' + str(avd) + '\ntarget=android-36\n')
    save('runtime-config.json', {'avd': str(avd), 'config': config, 'environment': {key: value for key, value in env.items()
        if key.startswith('ANDROID_') or key in ['ADB_SERVER_SOCKET', 'TEMP', 'TMP']},
        'ports': {'adbServer': 5046, 'emulatorConsole': 5580, 'emulatorAdb': 5581},
        'globalSdkAvdEnvironmentChanged': False, 'physicalDevice': False})
    return avd


def sdk_layout():
    sdk = WORK / 'sdk'
    sdk.mkdir(parents=True, exist_ok=True)
    links = {'emulator': ROOT / 'tools/android-os-emulator/emulator', 'platform-tools': ADB.parent,
        'platforms': ROOT / 'tools/app-shell-sdk36/platforms', 'build-tools': ROOT / 'tools/app-shell-sdk36/build-tools',
        'system-images/android-36/google_apis_ps16k/x86_64': IMAGE}
    for name, target in links.items():
        path = sdk / name
        path.parent.mkdir(parents=True, exist_ok=True)
        if path.exists():
            if path.resolve() != target.resolve():
                raise ValueError('Repository SDK view points to an unexpected tool')
        else:
            quote = lambda value: "'" + str(value).replace("'", "''") + "'"
            script = 'New-Item -ItemType Junction -Path ' + quote(path) + ' -Target ' + quote(target) + ' | Out-Null'
            result = execute(['powershell.exe', '-NoProfile', '-NonInteractive', '-Command', script], 'sdk-junction-' + name.replace('/', '-'))
            if result.returncode:
                raise ValueError('Cannot create repository-local SDK view')


def start():
    sdk_layout()
    avd = prepare()
    if any(occupied(port) for port in [5046, 5580, 5581]):
        raise ValueError('Isolated Android ports already occupied; no unrelated service will be replaced')
    result = adb(['start-server'], 'start-adb-server', device=False)
    if result.returncode:
        raise ValueError('Isolated ADB server failed')
    argv = [EMULATOR, '-avd', NAME, '-sysdir', IMAGE.as_posix() + '/', '-kernel', IMAGE / 'kernel-ranchu',
        '-ramdisk', IMAGE / 'ramdisk.img', '-ports', '5580,5581', '-no-window', '-no-audio',
        '-gpu', 'swiftshader', '-no-snapshot', '-no-boot-anim', '-accel', 'on', '-memory', '2048', '-cores', '2',
        '-camera-back', 'none', '-camera-front', 'none', '-crash-report-mode', 'disabled', '-show-kernel', '-no-boot-anim']
    private = WORK / 'private'
    private.mkdir(exist_ok=True)
    for path in [private / 'emulator.stdout.txt', private / 'emulator.stderr.txt']:
        if path.exists():
            index = 1
            while path.with_name(path.stem + '-prior-' + str(index) + path.suffix).exists():
                index += 1
            path.rename(path.with_name(path.stem + '-prior-' + str(index) + path.suffix))
    stdout, stderr = open(private / 'emulator.stdout.txt', 'wb'), open(private / 'emulator.stderr.txt', 'wb')
    process = subprocess.Popen([str(item) for item in argv], env=environment(), stdout=stdout, stderr=stderr,
        stdin=subprocess.DEVNULL, creationflags=subprocess.CREATE_NO_WINDOW)
    save('owned-process.json', {'pid': process.pid, 'argv': [str(item) for item in argv], 'serial': SERIAL,
        'startedUnixSeconds': time.time(), 'adbServerWasUnoccupiedBeforeStart': True, 'hidden': True,
        'noWindow': True, 'profile': str(avd), 'stopped': False})
    print(json.dumps({'status': 'isolated-headless-emulator-launched', 'pid': process.pid, 'ports': [5046, 5580, 5581]}))


def status():
    devices = adb(['devices', '-l'], 'devices', device=False)
    print(devices.stdout.decode(errors='replace').strip())
    boot = adb(['shell', 'getprop', 'sys.boot_completed'], 'boot', timeout=10)
    print(json.dumps({'bootCompleted': boot.stdout.strip() == b'1', 'adbExitCode': boot.returncode}))


def stop():
    marker = WORK / 'owned-process.json'
    if not marker.is_file():
        raise ValueError('No owned emulator marker; refusing broad cleanup')
    owned = json.loads(marker.read_text())
    adb(['emu', 'kill'], 'owned-emulator-kill', timeout=15)
    time.sleep(2)
    adb(['kill-server'], 'owned-server-kill', timeout=15, device=False)
    owned.update({'stopped': True, 'remainingOwnedPorts': [port for port in [5046, 5580, 5581] if occupied(port)]})
    save('owned-process.json', owned)
    print(json.dumps({'status': 'owned-emulator-and-server-stop-requested', 'remainingPorts': owned['remainingOwnedPorts']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('action', choices=['prepare', 'start', 'status', 'stop'])
    args = parser.parse_args()
    {'prepare': prepare, 'start': start, 'status': status, 'stop': stop}[args.action]()
