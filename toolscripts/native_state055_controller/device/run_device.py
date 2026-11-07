import gzip
import hashlib
import json
from pathlib import Path
import subprocess
import tarfile
import time

ROOT = Path.cwd().resolve()
BASE = ROOT / 'work/controller055-probe'
ADB = ROOT / 'tools/android-platform-tools-37.0.1/adb.exe'
PACKAGE = 'org.dqm.controllerprobe055'
REMOTE = '/data/local/tmp/dqm-controller055-inputs.tar.gz'


def run(arguments, check=True):
    result = subprocess.run([str(ADB), *arguments], capture_output=True)
    if check and result.returncode:
        raise ValueError(result.stderr.decode(errors='replace'))
    return result


platform = {name: run(['shell', 'getprop', name]).stdout.decode().strip() for name in
    ['ro.product.model', 'ro.product.cpu.abilist', 'ro.build.version.sdk', 'ro.dalvik.vm.native.bridge', 'ro.kernel.qemu']}
platform['pageBytes'] = int(run(['shell', 'getconf', 'PAGESIZE']).stdout)
assert platform['ro.product.cpu.abilist'].split(',')[0] == 'arm64-v8a'
assert platform['ro.dalvik.vm.native.bridge'] in ['', '0'] and platform['ro.kernel.qemu'] in ['', '0']
(BASE / 'physical-platform.json').write_text(json.dumps(platform, indent=2) + '\n', encoding='utf-8')
fixtures = BASE / 'case-inputs'
input_archive = BASE / 'case-inputs.tar.gz'
with tarfile.open(input_archive, 'w:gz', compresslevel=9) as output:
    for path in sorted(fixtures.iterdir()):
        output.add(path, arcname='files/' + path.name, recursive=False)
with tarfile.open(input_archive, 'r:gz') as check:
    for member in check.getmembers():
        assert member.isfile() and member.name.startswith('files/') and '..' not in member.name
        expected = (fixtures / Path(member.name).name).read_bytes()
        assert check.extractfile(member).read() == expected
cases = json.loads((fixtures / 'cases.json').read_text())['cases']
assert len(cases) == 569
assert max(len(step['changes']) for case in cases for step in case['calls']) <= 128
run(['push', str(input_archive), REMOTE])
run(['shell', 'run-as', PACKAGE, 'tar', '-xf', REMOTE])
started = run(['shell', 'am', 'start', '-W', '-n', PACKAGE + '/.MaterialActivity', '--es', 'mode', 'run'])
(BASE / 'launch.log').write_bytes(started.stdout + started.stderr)
for attempt in range(120):
    result = run(['exec-out', 'run-as', PACKAGE, 'cat', 'files/report.json'], check=False)
    if result.returncode == 0:
        try:
            report = json.loads(result.stdout)
        except ValueError:
            report = None
        if report is not None:
            (BASE / 'device-report.json').write_bytes(result.stdout)
            break
    time.sleep(1)
else:
    raise ValueError('Controller device report not ready; preserve running process and inspect')
archive = BASE / 'device-capture.tar.gz'
digest, length = hashlib.sha256(), 0
process = subprocess.Popen([str(ADB), 'exec-out', 'run-as', PACKAGE, 'tar', '-cf', '-', 'files'], stdout=subprocess.PIPE)
with gzip.open(archive, 'wb', compresslevel=9) as output:
    for block in iter(lambda: process.stdout.read(1048576), b''):
        digest.update(block)
        length += len(block)
        output.write(block)
assert process.wait() == 0
capture = dict(rawTarBytes=length, rawTarSha256=digest.hexdigest(), compressedBytes=archive.stat().st_size,
               compressedSha256=hashlib.sha256(archive.read_bytes()).hexdigest(), status=report['status'])
(BASE / 'capture-archive.json').write_text(json.dumps(capture, indent=2) + '\n', encoding='utf-8')
assert report['status'] == 'native-controller-corpus-completed', report
assert len(report['cases']) == 569
print(json.dumps(dict(status=report['status'], cases=569, calls=sum(len(row['steps']) for row in report['cases']), capture=capture)))
