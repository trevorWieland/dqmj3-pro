import argparse
import hashlib
import io
import json
from pathlib import Path
import subprocess
import zipfile

from elftools.elf.elffile import ELFFile
import app_shell_build as tools
from platform_engine_wave006_packaging import validate_segments
from platform_android_os_runtime import ROOT, WORK, environment


PACKAGE = 'org.dqm.projected.diagnostic'
SOURCE = ROOT / 'platform/engine-wave006'
BUILD = WORK / 'diagnostic-build'


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': path.stat().st_size,
        'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}


def run(argv, name):
    result = subprocess.run(list(map(str, argv)), capture_output=True, timeout=120,
        env=environment(), creationflags=subprocess.CREATE_NO_WINDOW)
    log = BUILD / (name + '.json')
    if log.exists():
        index = 1
        while log.with_name(log.stem + '-prior-' + str(index) + log.suffix).exists():
            index += 1
        log.rename(log.with_name(log.stem + '-prior-' + str(index) + log.suffix))
    log.write_text(json.dumps({'argv': list(map(str, argv)), 'exitCode': result.returncode,
        'stdout': result.stdout.decode(errors='replace'), 'stderr': result.stderr.decode(errors='replace')}, indent=2) + '\n')
    if result.returncode:
        raise ValueError('Diagnostic build command failed: ' + name)
    return result.stdout


def verify_frozen():
    ready = json.loads((ROOT / 'evidence/lanes/platform-engine-wave006/ready.json').read_text())
    for row in ready['files']:
        if tools.sha(ROOT / row['path']) != row['sha256']:
            raise ValueError('Frozen006 file differs: ' + row['path'])


def native():
    objects, recipes = [], []
    folder = BUILD / 'native'
    folder.mkdir(parents=True, exist_ok=True)
    records = sorted((ROOT / 'work/platform-engine-wave006/android/native').glob('*.build.json'))
    if len(records) != 22:
        raise ValueError('Frozen diagnostic compile recipe count differs')
    for index, record in enumerate(records):
        argv = json.loads(record.read_text())['argv']
        if argv.count('--target=aarch64-linux-android29') != 1:
            raise ValueError('Frozen recipe is not the shipping Android target')
        captured = Path(argv[argv.index('-c') + 1])
        boundary = next((i for i, part in enumerate(captured.parts) if part in ['platform', 'src']), None)
        if boundary is None:
            raise ValueError('Captured source is outside the known source trees')
        original_root = str(Path(*captured.parts[:boundary]))
        argv = [str(ROOT) + value[len(original_root):] if value.lower().startswith(original_root.lower() + '\\') else value for value in argv]
        source, target = Path(argv[argv.index('-c') + 1]), folder / ('object-' + str(index) + '.o')
        argv[argv.index('--target=aarch64-linux-android29')] = '--target=x86_64-linux-android29'
        argv[argv.index('-o') + 1] = str(target)
        run(argv, 'compile-' + str(index))
        objects.append(target)
        recipes.append({'frozenRecipe': pin(record), 'source': pin(source), 'object': pin(target)})
    library = folder / 'libdqm_projected.so'
    run([tools.CLANG, '--target=x86_64-linux-android29', '--ld-path=' + str(tools.LINKER), '-shared', '-nostdlib',
        '-Wl,-z,defs,-z,max-page-size=16384,-z,common-page-size=16384,-soname,libdqm_projected.so', *objects, '-o', library], 'link')
    elf = ELFFile(io.BytesIO(library.read_bytes()))
    if elf['e_machine'] != 'EM_X86_64':
        raise ValueError('Diagnostic ELF architecture differs')
    alignment = validate_segments([dict(row.header) for row in elf.iter_segments()])
    jni = [row.name for row in elf.get_section_by_name('.dynsym').iter_symbols() if row.name.startswith('Java_org_dqm_projected_MaterialActivity_')]
    if len(jni) != 14:
        raise ValueError('Diagnostic JNI exports differ')
    return library, {'library': pin(library), 'target': 'x86_64-linux-android29', 'shippingArm64Replaced': False,
        'frozenOrdinaryCSourcesUnchanged': True, 'recipes': recipes, 'jniExports': sorted(jni), **alignment}


def apk(library, java_source=SOURCE, output_dir=None):
    folder = output_dir or BUILD
    folder.mkdir(parents=True, exist_ok=True)
    source = folder / 'source'
    source.mkdir(exist_ok=True)
    manifest = source / 'AndroidManifest.xml'
    text = (java_source / 'AndroidManifest.xml').read_text()
    text = text.replace('package="org.dqm.projected"', 'package="' + PACKAGE + '"')
    text = text.replace('android:name=".MaterialActivity"', 'android:name="org.dqm.projected.MaterialActivity"')
    text = text.replace('DQM UV Projection Views', 'DQM x86 OS Diagnostic')
    manifest.write_text(text)
    classes = folder / 'classes'
    classes.mkdir(exist_ok=True)
    android_jar = tools.SDK / 'platforms/android-36/android.jar'
    run([tools.JDK / 'bin/javac.exe', '--release', '8', '-Xlint:-options', '-classpath', android_jar,
        '-d', classes, java_source / 'MaterialActivity.java'], 'javac')
    jar = folder / 'classes.jar'
    with zipfile.ZipFile(jar, 'w', compression=zipfile.ZIP_DEFLATED) as archive:
        for path in sorted(classes.rglob('*.class')):
            archive.write(path, path.relative_to(classes).as_posix())
    dex = folder / 'dex'
    dex.mkdir(exist_ok=True)
    java = tools.JDK / 'bin/java.exe'
    run([java, '-cp', tools.BUILD_TOOLS / 'lib/d8.jar', 'com.android.tools.r8.D8', '--release', '--min-api', '29',
        '--lib', android_jar, '--output', dex, jar], 'd8')
    base = folder / 'base.apk'
    run([tools.BUILD_TOOLS / 'aapt2.exe', 'link', '-I', android_jar, '--manifest', manifest,
        '--min-sdk-version', '29', '--target-sdk-version', '36', '-o', base], 'aapt2')
    unsigned, aligned, output = folder / 'unsigned.apk', folder / 'aligned.apk', folder / 'dqm-os-x86_64-diagnostic.apk'
    tools.normalize_zip(base, unsigned, [('classes.dex', dex / 'classes.dex', zipfile.ZIP_DEFLATED),
        ('lib/x86_64/libdqm_projected.so', library, zipfile.ZIP_STORED)])
    run([tools.BUILD_TOOLS / 'zipalign.exe', '-P', '16', '-f', '4', unsigned, aligned], 'zipalign')
    key = BUILD / 'diagnostic-debug.p12'
    if not key.exists():
        run([tools.JDK / 'bin/keytool.exe', '-genkeypair', '-keystore', key, '-storepass', 'android', '-keypass', 'android',
            '-alias', 'androiddebugkey', '-dname', 'CN=Isolated OS Diagnostic,O=Local Development,C=US',
            '-keyalg', 'RSA', '-keysize', '2048', '-validity', '10000', '-storetype', 'PKCS12'], 'keytool')
    signer = [java, '-jar', tools.BUILD_TOOLS / 'lib/apksigner.jar']
    run([*signer, 'sign', '--ks', key, '--ks-pass', 'pass:android', '--key-pass', 'pass:android', '--out', output, aligned], 'sign')
    run([*signer, 'verify', '--verbose', output], 'signature')
    run([tools.BUILD_TOOLS / 'zipalign.exe', '-c', '-P', '16', '-v', '4', output], 'zipalign-check')
    with zipfile.ZipFile(output) as archive:
        if any(name.startswith('assets/') for name in archive.namelist()) or archive.read('lib/x86_64/libdqm_projected.so') != library.read_bytes():
            raise ValueError('Diagnostic APK contents differ')
    return {'apk': pin(output), 'manifest': pin(manifest), 'javaSource': pin(java_source / 'MaterialActivity.java'),
        'package': PACKAGE, 'activity': 'org.dqm.projected.MaterialActivity', 'abi': 'x86_64',
        'diagnosticOnly': True, 'shippingArm64ArtifactModified': False, 'originalAssetsPackaged': False}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--successor007', action='store_true')
    arguments = parser.parse_args()
    BUILD.mkdir(parents=True, exist_ok=True)
    verify_frozen()
    if arguments.successor007:
        receipt = json.loads((WORK / 'diagnostic-build.json').read_text())['native']
        library = ROOT / receipt['library']['path']
        if pin(library) != receipt['library']:
            raise ValueError('Frozen diagnostic native library differs')
        artifact = apk(library, ROOT / 'platform/engine-wave007', BUILD / 'successor007')
    else:
        library, receipt = native()
        artifact = apk(library)
    report = {'schemaVersion': 1, 'native': receipt, 'android': artifact, 'javaSuccessor007': arguments.successor007}
    name = 'diagnostic-successor007-build.json' if arguments.successor007 else 'diagnostic-build.json'
    (WORK / name).write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': 'separate-x86_64-os-diagnostic-built', 'apk': report['android']['apk']}))


if __name__ == '__main__':
    main()
