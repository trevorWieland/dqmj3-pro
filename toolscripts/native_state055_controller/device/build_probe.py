from pathlib import Path
import argparse
import hashlib
import io
import json
import shutil
import sys
import zipfile

root = Path.cwd().resolve()
sys.path.insert(0, str(root / 'toolscripts'))
import app_shell_build as tools
from elftools.elf.elffile import ELFFile

parser = argparse.ArgumentParser()
parser.add_argument('--output', default='work/controller055-probe')
parser.add_argument('--component', default='work/controller055-android-component/libcontroller055.so')
args = parser.parse_args()
base = (root / args.output).resolve()
component = (root / args.component).resolve()
if not base.is_relative_to(root / 'work') or not component.is_relative_to(root / 'work'):
    raise ValueError('Probe files must stay under work/')
source = root / 'toolscripts/native_state055_controller/device'
for name in ['jni', 'classes', 'dex', 'package']:
    (base / name).mkdir(parents=True, exist_ok=True)

def run(argv, name):
    return tools.run(argv, base / (name + '.json'))

child = base / 'component-library/libcontroller055.so'
child.parent.mkdir(parents=True, exist_ok=True)
shutil.copyfile(component, child)
assert hashlib.sha256(child.read_bytes()).hexdigest() == 'b74d845626a16a15a28457b59f06b86c478dcfee5f3aba215f334abcf6ef1263'
obj = base / 'jni/controller_jni.o'
run([tools.CLANG, '--target=aarch64-linux-android29', '-std=c11', '-O2', '-fPIC', '-ffreestanding',
     '-fno-builtin', '-fno-stack-protector', '-Wall', '-Wextra', '-Werror',
     '-I', tools.SDK / 'native-includes', '-I', source, '-I', root / 'src/native/wave055/controller-v5', '-I', root / 'src/native/wave055/controller-deps-v1', '-I', root / 'src/native/wave055',
     '-c', source / 'controller_jni.c', '-o', obj], 'jni-compile')
library = base / 'jni/libdqm_controllerprobe055.so'
run([tools.LINKER, '-m', 'aarch64elf', '--shared', '--no-undefined', '--build-id=none',
     '-soname', library.name, '-z', 'max-page-size=16384', obj, '-L', child.parent, '-l:libcontroller055.so', '-o', library], 'jni-link')
elf_records = []
for path in [child, library]:
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    alignments = [p['p_align'] for p in elf.iter_segments() if p['p_type'] == 'PT_LOAD']
    needed = [t.needed for t in elf.get_section_by_name('.dynamic').iter_tags() if t.entry.d_tag == 'DT_NEEDED']
    assert elf['e_machine'] == 'EM_AARCH64' and min(alignments) >= 16384
    assert needed == ([] if path == child else ['libcontroller055.so'])
    elf_records.append(dict(name=path.name, sha256=hashlib.sha256(path.read_bytes()).hexdigest(), loadAlignments=alignments, needed=needed))
android = tools.SDK / 'platforms/android-36/android.jar'
run([tools.JDK / 'bin/javac.exe', '--release', '8', '-Xlint:-options', '-classpath', android,
     '-d', base / 'classes', source / 'MaterialActivity.java'], 'javac')
jar = base / 'probe.jar'
with zipfile.ZipFile(jar, 'w', zipfile.ZIP_DEFLATED) as output:
    for path in sorted((base / 'classes').rglob('*.class')):
        output.write(path, path.relative_to(base / 'classes').as_posix())
java = tools.JDK / 'bin/java.exe'
run([java, '-cp', tools.BUILD_TOOLS / 'lib/d8.jar', 'com.android.tools.r8.D8', '--release',
     '--min-api', '29', '--lib', android, '--output', base / 'dex', jar], 'd8')
package = base / 'package'
run([tools.BUILD_TOOLS / 'aapt2.exe', 'link', '-I', android, '--manifest', source / 'AndroidManifest.xml',
     '--min-sdk-version', '29', '--target-sdk-version', '36', '-o', package / 'base.apk'], 'aapt2')
tools.normalize_zip(package / 'base.apk', package / 'unsigned.apk', [
    ('classes.dex', base / 'dex/classes.dex', zipfile.ZIP_DEFLATED),
    ('lib/arm64-v8a/libdqm_controllerprobe055.so', library, zipfile.ZIP_STORED),
    ('lib/arm64-v8a/libcontroller055.so', child, zipfile.ZIP_STORED)])
run([tools.BUILD_TOOLS / 'zipalign.exe', '-P', '16', '-f', '4', package / 'unsigned.apk', package / 'aligned.apk'], 'zipalign')
key = root / 'work/platform-engine-wave006/signing/materials-debug.p12'
apk = package / 'dqm-controller-component-probe.apk'
signer = [java, '-jar', tools.BUILD_TOOLS / 'lib/apksigner.jar']
run([*signer, 'sign', '--ks', key, '--ks-pass', 'pass:android', '--key-pass', 'pass:android',
     '--out', apk, package / 'aligned.apk'], 'sign')
run([*signer, 'verify', '--verbose', apk], 'signature')
run([tools.BUILD_TOOLS / 'zipalign.exe', '-c', '-P', '16', '4', apk], 'alignment-check')
receipt = dict(status='built-native-component-probe-not-game', apk=apk.relative_to(root).as_posix(),
               apkSha256=hashlib.sha256(apk.read_bytes()).hexdigest(), libraries=elf_records,
               frozenComponentByteIdentity=True, originalGameImageOrAssetPackaged=False,
               androidOsExecutionConfirmed=False, sourceCreditGranted=0)
(base / 'build.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps(receipt))
