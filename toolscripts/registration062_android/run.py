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
sys.path.insert(0, str(ROOT / 'toolscripts/sdk062_registration_v1'))
ADB = ROOT / 'tools/android-platform-tools-37.0.1/adb.exe'
BUILD = args.build.resolve()
EXE = BUILD / 'registration062-device'
build = json.loads((BUILD / 'build.json').read_bytes())
if build['exitCode'] != 0:
    raise ValueError('Physical source fixture build failed')
for row in build['inputs']:
    source = ROOT / row['path']
    if source.stat().st_size != row['bytes'] or hashlib.sha256(source.read_bytes()).hexdigest() != row['sha256']:
        raise ValueError('Physical source/build input changed')
helper_paths = [W / 'run.py', W / 'device_runtime.py', W / 'build.py']
helper_paths += sorted((ROOT / 'toolscripts/sdk062_registration_v1').glob('*.py'))
helper_paths += sorted((ROOT / 'toolscripts/sdk062_heap_v1').glob('*.py'))
helper_paths += [ROOT / 'toolscripts/sdk062_original_v1.py', ROOT / 'toolscripts/inventory.py', Path(sys.executable)]
helper_pins = [dict(path=str(path.relative_to(ROOT)), bytes=path.stat().st_size,
                   sha256=hashlib.sha256(path.read_bytes()).hexdigest()) for path in helper_paths]
sha = hashlib.sha256(EXE.read_bytes()).hexdigest()
remote = '/data/local/tmp/dqmj3-registration062-' + sha[:12]


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
        if ('/generated/' in path or path.startswith('generated/') or path.endswith('.cia')
                or ('/work/native-' in path)):
            violations.append(dict(event=event, path=path))
            raise ValueError('Physical source proof attempted original input read')


sys.addaudithook(audit)
import importlib.machinery
prior_loader = importlib.machinery.SourceFileLoader.get_code


def fresh_source(loader, name):
    if Path(loader.path).is_relative_to(ROOT):
        return loader.source_to_code(loader.get_data(loader.path), loader.path)
    return prior_loader(loader, name)


importlib.machinery.SourceFileLoader.get_code = fresh_source
oracle = importlib.import_module('sdk062_original_v1')


def forbidden_original(*values, **keywords):
    violations.append(dict(event='original-constructor'))
    raise ValueError('Physical source proof attempted original execution')


oracle.Original = forbidden_original
runtime = importlib.import_module('device_runtime')
runtime.ADB, runtime.REMOTE = ADB, remote
heap_runtime = importlib.import_module('heap_runtime062ac')
for name in ['heap_model062ac', 'registry_build062ad', 'registry_model062ad', 'registry_observer062ad']:
    importlib.import_module(name)
proof = importlib.import_module('registry_proof062ad')
proof.Runtime = runtime.Runtime
sys.path[:] = [p for p in sys.path if not str(p).replace('\\', '/').lower().startswith(str(ROOT / 'work').replace('\\', '/').lower())]
cases, scope = [], 'failed'
started = time.time()
parameters = [(622, 0, False), (623, 128, True), (624, 255, False), (625, 1, True)]
try:
    for index, (seed, locking, disposer) in enumerate(parameters[:1] if args.smoke else parameters):
        before = len(runtime.ACTIVE)
        try:
            report = proof.execute('android-device', W, seed, locking, disposer, False)
            instance = runtime.ACTIVE[-1]
            if len(runtime.ACTIVE) != before + 1:
                raise ValueError('Physical registration case must own exactly one process')
            path = OUT / ('profile-' + str(index) + '.json')
            path.write_text(json.dumps(report, indent=2) + '\n')
            cases.append(dict(profile=index, seed=seed, lookupLock=locking, disposer=disposer,
                reportSha256=hashlib.sha256(path.read_bytes()).hexdigest(), pointerBytes=instance.p,
                arenaAddress=hex(instance.ram), nativeCalls=instance.calls,
                bytesStreamedAndChecked=instance.bytes_read, completeArenaObservations=len(report['observations']),
                orderedMutexCallbacks=report['orderedMutexCallbackCount']))
            print(json.dumps(cases[-1]), flush=True)
        finally:
            for instance in runtime.ACTIVE[before:]:
                instance.close()
    if violations:
        raise ValueError('Persistent physical original/private-history access violation')
    scope = 'smoke-only-passed' if args.smoke else 'four-physical-registration-source-profiles-passed'
finally:
    for row, source in zip(helper_pins, helper_paths):
        if hashlib.sha256(source.read_bytes()).hexdigest() != row['sha256']:
            scope = 'failed-input-changed'
    imported = []
    for module in list(sys.modules.values()):
        filename = getattr(module, '__file__', None)
        if not filename:
            continue
        path = Path(filename).resolve()
        if path.suffix == '.py' and path.is_relative_to(ROOT) and not path.is_relative_to(ROOT / 'tools'):
            if path.is_relative_to(ROOT / 'work'):
                scope = 'failed-private-helper-import'
            imported.append(dict(path=path.relative_to(ROOT).as_posix(), sha256=hashlib.sha256(path.read_bytes()).hexdigest()))
    receipt = dict(status=scope, device=device, executableSha256=sha,
        sourceBuildManifestSha256=hashlib.sha256((BUILD / 'build.json').read_bytes()).hexdigest(),
        cases=cases, smokeOnly=args.smoke, originalReadOrConstructionAttempts=violations,
        elapsedSeconds=time.time() - started, helperAndInterpreterPins=helper_pins,
        importedAuthoredSources=imported, freshSourceImports=True, callerArenaBytesStreamedRatherThanStored=True,
        physical16KiBKernelClaimed=False, simulatedPlatformThreadIdentity=True, actualOSContentionQualified=False,
        sourceInstructionTraceClaimed=False, wholeGameQualified=False,
        bridgeSourceSha256=hashlib.sha256((ROOT / 'toolscripts/fixtures/registration062_android/bridge.c').read_bytes()).hexdigest())
    (OUT / 'receipt.json').write_text(json.dumps(receipt, indent=2) + '\n')
print(scope)
