import argparse
import hashlib
import importlib
import json
from pathlib import Path
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[2]
W = Path(__file__).resolve().parent
parser = argparse.ArgumentParser()
parser.add_argument('--build', required=True, type=Path)
parser.add_argument('--output', required=True, type=Path)
parser.add_argument('--smoke', action='store_true')
args = parser.parse_args()
OUT = args.output.resolve()
if OUT.exists() or not OUT.is_relative_to(ROOT / 'work'):
    raise ValueError('Physical proof requires exclusive output')
OUT.mkdir(parents=True)
sys.pycache_prefix = str(OUT / 'unused-authored-bytecode')
sys.path.insert(0, str(W))
sys.path.insert(0, str(ROOT / 'toolscripts'))
sys.path.insert(0, str(ROOT / 'toolscripts/sdk062_heap_v1'))
ADB = ROOT / 'tools/android-platform-tools-37.0.1/adb.exe'
BUILD = args.build.resolve()
EXE = BUILD / 'heap062-device'
build = json.loads((BUILD / 'build.json').read_bytes())
if build['exitCode'] != 0:
    raise ValueError('Physical source fixture build failed')
for row in build['inputs']:
    source = ROOT / row['path']
    if source.stat().st_size != row['bytes'] or hashlib.sha256(source.read_bytes()).hexdigest() != row['sha256']:
        raise ValueError('Physical source/build input changed')
helper_paths = [W / 'run.py', W / 'device_runtime.py', W / 'build.py']
helper_paths += sorted((ROOT / 'toolscripts/sdk062_heap_v1').glob('*.py'))
helper_paths += [ROOT / 'toolscripts/sdk062_original_v1.py', ROOT / 'toolscripts/inventory.py', Path(sys.executable)]
helper_pins = [dict(path=str(path.relative_to(ROOT)), bytes=path.stat().st_size,
                   sha256=hashlib.sha256(path.read_bytes()).hexdigest()) for path in helper_paths]
sha = hashlib.sha256(EXE.read_bytes()).hexdigest()
remote = '/data/local/tmp/dqmj3-heap062-' + sha[:12]


def adb(*values):
    return subprocess.check_output([str(ADB), *values]).decode('utf-8').strip()


device = dict(model=adb('shell', 'getprop', 'ro.product.model'), api=adb('shell', 'getprop', 'ro.build.version.sdk'),
    abi=adb('shell', 'getprop', 'ro.product.cpu.abi'), architecture=adb('shell', 'uname', '-m'),
    kernelPageBytes=adb('shell', 'getconf', 'PAGE_SIZE'), qemu=adb('shell', 'getprop', 'ro.kernel.qemu'),
    transport=adb('get-devpath'))
device['nativeBridge'] = adb('shell', 'getprop', 'ro.dalvik.vm.native.bridge')
if device['model'] != 'AYN Thor' or device['architecture'] != 'aarch64' or device['abi'] != 'arm64-v8a':
    raise ValueError('Connected device does not match intended physical target')
exists = subprocess.run([str(ADB), 'shell', 'test', '-e', remote]).returncode == 0
if exists:
    if adb('shell', 'sha256sum', remote).split()[0] != sha:
        raise ValueError('Existing remote fixture differs')
else:
    subprocess.run([str(ADB), 'push', str(EXE), remote], check=True, capture_output=True)
    subprocess.run([str(ADB), 'shell', 'chmod', '700', remote], check=True)
if adb('shell', 'sha256sum', remote).split()[0] != sha:
    raise ValueError('Physical deployed fixture hash differs')

violations = []


def audit(event, values):
    if event == 'open' and isinstance(values[0], (str, bytes)):
        path = str(values[0]).replace('\\', '/').lower()
        if '/generated/' in path or path.startswith('generated/') or path.endswith('.cia'):
            violations.append(dict(event=event, path=path))
            raise ValueError('Physical source proof attempted original input read')


sys.addaudithook(audit)
oracle = importlib.import_module('sdk062_original_v1')


def forbidden_original(*values, **keywords):
    violations.append(dict(event='original-constructor'))
    raise ValueError('Physical source proof attempted original execution')


oracle.Original = forbidden_original
runtime = importlib.import_module('device_runtime')
runtime.ADB, runtime.REMOTE = ADB, remote
modules = {name: importlib.import_module('heap_' + name + '_proof062ac' if name != 'generic'
           else 'heap_proof062ac') for name in ['generic', 'default', 'registry', 'setter', 'disabled']}
for module in modules.values():
    module.Runtime = runtime.Runtime
cases, scope = [], 'failed'
started = time.time()


def run_case(name, action):
    before = len(runtime.ACTIVE)
    try:
        report = action()
        if len(runtime.ACTIVE) != before + 1:
            raise ValueError('Physical case did not own exactly one process')
        instance = runtime.ACTIVE[-1]
        path = OUT / (name + '.json')
        path.write_text(json.dumps(report, indent=2) + '\n')
        cases.append(dict(name=name, reportSha256=hashlib.sha256(path.read_bytes()).hexdigest(),
            pointerBytes=instance.p, arenaAddress=hex(instance.ram), nativeCalls=instance.calls,
            bytesStreamedAndChecked=instance.bytes_read,
            fullArenaObservations=len(report.get('observations', report.get('events', report.get('rows', []))))))
        print(json.dumps(cases[-1]), flush=True)
    finally:
        for instance in runtime.ACTIVE[before:]:
            instance.close()


try:
    generic = modules['generic']
    values = [(f, g, p, s) for f in [0, 1] for g in [0, 263, 65535] for p in [0, 1] for s in [0, 1]]
    for i, (flags, group, policy, split) in enumerate(values[:1] if args.smoke else values):
        run_case('generic-' + str(i), lambda i=i, f=flags, g=group, p=policy, s=split:
            generic.execute('android-device', W, f, g, p, s, generic.program(5462 + i)))
    if not args.smoke:
        defaults = [(sdk, skew, False) for sdk in [False, True] for skew in [0, 1, 3, 7]]
        defaults += [(True, skew, True) for skew in [0, 1, 3, 7]]
        for i, (sdk, skew, callback) in enumerate(defaults):
            run_case('default-' + str(i), lambda i=i, sdk=sdk, skew=skew, callback=callback:
                modules['default'].execute('android-device', W, 5862 + i, sdk, None, skew, callback))
        for name in ['registry', 'setter', 'disabled']:
            run_case(name, lambda name=name: modules[name].run('android-device', W))
    if violations:
        raise ValueError('Persistent physical proof original access attempt')
    scope = 'smoke-only-passed' if args.smoke else '39-physical-source-profiles-passed'
finally:
    for row, source in zip(helper_pins, helper_paths):
        if hashlib.sha256(source.read_bytes()).hexdigest() != row['sha256']:
            scope = 'failed-input-changed'
    receipt = dict(status=scope, device=device, executableSha256=sha, sourceBuildManifestSha256=hashlib.sha256((BUILD / 'build.json').read_bytes()).hexdigest(),
        smokeOnly=args.smoke, cases=cases, originalReadOrConstructionAttempts=violations,
        callerBytesStreamedRatherThanStored=True, elapsedSeconds=time.time() - started,
        physical16KiBKernelClaimed=False, simulatedPlatformThreadIdentity=True,
        actualOSContentionQualified=False, sourceInstructionTraceClaimed=False, wholeGameQualified=False,
        helperAndInterpreterPins=helper_pins, binaryProtocol='ADB-forwarded-abstract-local-socket',
        bridgeSourceSha256=hashlib.sha256((ROOT / 'toolscripts/fixtures/heap062_android/bridge.c').read_bytes()).hexdigest())
    (OUT / 'receipt.json').write_text(json.dumps(receipt, indent=2) + '\n')
print(scope)
