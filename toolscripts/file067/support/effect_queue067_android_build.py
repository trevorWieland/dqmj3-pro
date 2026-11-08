import argparse
import hashlib
import io
import json
from pathlib import Path
import zipfile

from elftools.elf.elffile import ELFFile
import app_shell_build as tools
import effect_request066_device_reference as synthetic


ROOT = tools.ROOT


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': path.stat().st_size,
        'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}


def build(selection, headers_lock, output):
    if output.exists():
        raise ValueError('Preserve Android queue component build')
    output.mkdir(parents=True)
    lock = json.loads(headers_lock.read_text())
    for row in lock['files']:
        if pin(ROOT / row['path']) != {key: row[key] for key in ['path', 'bytes', 'sha256']}:
            raise ValueError('Official local pthread header closure changed')
    selected = json.loads(selection.read_text())
    sources = []
    for row in selected['sources']:
        path = ROOT / row['path']
        if pin(path) != row:
            raise ValueError('Previously qualified queue component source changed')
        sources.append(ROOT / 'toolscripts/effect_queue067_android_probe.c' if path.name == 'effect_queue067_source_fixture.c' else path)
    sources.append(ROOT / 'toolscripts/effect_queue067_android_pthread.c')
    header_root = ROOT / 'tools/native-queue067-ndk-headers'
    flags = ['--target=aarch64-linux-android29', '--sysroot=' + str(header_root / 'sysroot'),
        '-resource-dir=' + str(header_root / 'lib/clang/21'), '-D_GNU_SOURCE', '-mno-outline-atomics',
        '-std=c11', '-fPIC', '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-fno-unwind-tables',
        '-fno-asynchronous-unwind-tables', '-O2', '-Wall', '-Wextra', '-Werror',
        '-I', ROOT / 'src/native/wave065-resource']
    objects = []
    for index, source in enumerate(sources):
        obj = output / (str(index) + '-' + source.stem + '.o')
        tools.run([tools.CLANG, *flags, '-c', source, '-o', obj], obj.with_suffix('.build.json'))
        objects.append(obj)
    api = ROOT / 'tools/android-r30-minimal/toolchains/llvm/prebuilt/windows-x86_64/sysroot/usr/lib/aarch64-linux-android/29'
    library = output / 'libdqm_queueprobe067.so'
    tools.run([tools.LINKER, '-m', 'aarch64elf', '--shared', '--no-undefined', '--build-id=none',
        '-soname', library.name, '-z', 'max-page-size=16384', '-z', 'common-page-size=16384',
        *objects, '-L', api, '-lc', '-o', library], output / 'link.json')
    elf = ELFFile(io.BytesIO(library.read_bytes()))
    alignments = [row['p_align'] for row in elf.iter_segments() if row['p_type'] == 'PT_LOAD']
    needed = [row.needed for row in elf.get_section_by_name('.dynamic').iter_tags() if row.entry.d_tag == 'DT_NEEDED']
    imports = sorted(row.name for row in elf.get_section_by_name('.dynsym').iter_symbols() if row['st_shndx'] == 'SHN_UNDEF' and row.name)
    expected_imports = ['clock_gettime', 'nanosleep', 'pthread_attr_destroy', 'pthread_attr_getstacksize',
        'pthread_cond_broadcast', 'pthread_cond_destroy', 'pthread_cond_init', 'pthread_cond_timedwait', 'pthread_cond_wait',
        'pthread_create', 'pthread_getattr_np', 'pthread_gettid_np', 'pthread_join', 'pthread_mutex_destroy',
        'pthread_mutex_init', 'pthread_mutex_lock', 'pthread_mutex_unlock', 'pthread_mutexattr_destroy',
        'pthread_mutexattr_init', 'pthread_mutexattr_settype', 'pthread_self']
    if elf['e_machine'] != 'EM_AARCH64' or min(alignments) < 16384 or needed != ['libc.so'] or imports != sorted(expected_imports):
        raise ValueError('Android ELF native ABI/import/dependency/alignment closure differs')
    device_source = ROOT / 'toolscripts/native_queue067_device'
    for name in ['classes', 'dex', 'package']:
        (output / name).mkdir()
    android = tools.SDK / 'platforms/android-36/android.jar'
    tools.run([tools.JDK / 'bin/javac.exe', '--release', '8', '-Xlint:-options', '-classpath', android,
        '-d', output / 'classes', device_source / 'QueueActivity.java'], output / 'javac.json')
    jar = output / 'probe.jar'
    with zipfile.ZipFile(jar, 'w', zipfile.ZIP_DEFLATED) as archive:
        for path in sorted((output / 'classes').rglob('*.class')):
            archive.write(path, path.relative_to(output / 'classes').as_posix())
    java = tools.JDK / 'bin/java.exe'
    tools.run([java, '-cp', tools.BUILD_TOOLS / 'lib/d8.jar', 'com.android.tools.r8.D8', '--release',
        '--min-api', '29', '--lib', android, '--output', output / 'dex', jar], output / 'd8.json')
    package = output / 'package'
    tools.run([tools.BUILD_TOOLS / 'aapt2.exe', 'link', '-I', android, '--manifest', device_source / 'AndroidManifest.xml',
        '--min-sdk-version', '29', '--target-sdk-version', '36', '-o', package / 'base.apk'], output / 'aapt2.json')
    fixture = output / 'queue-fixture.bin'
    fixture.write_bytes(synthetic.generated_file())
    tools.normalize_zip(package / 'base.apk', package / 'unsigned.apk', [
        ('classes.dex', output / 'dex/classes.dex', zipfile.ZIP_DEFLATED),
        ('assets/queue-fixture.bin', fixture, zipfile.ZIP_STORED),
        ('lib/arm64-v8a/' + library.name, library, zipfile.ZIP_STORED)])
    tools.run([tools.BUILD_TOOLS / 'zipalign.exe', '-P', '16', '-f', '4', package / 'unsigned.apk', package / 'aligned.apk'], output / 'zipalign.json')
    key = ROOT / 'work/platform-engine-wave006/signing/materials-debug.p12'
    apk = package / 'dqm-native-queue067-component.apk'
    signer = [java, '-jar', tools.BUILD_TOOLS / 'lib/apksigner.jar']
    tools.run([*signer, 'sign', '--ks', key, '--ks-pass', 'pass:android', '--key-pass', 'pass:android',
        '--out', apk, package / 'aligned.apk'], output / 'sign.json')
    tools.run([*signer, 'verify', '--verbose', apk], output / 'signature.json')
    tools.run([tools.BUILD_TOOLS / 'zipalign.exe', '-c', '-P', '16', '4', apk], output / 'alignment-check.json')
    with zipfile.ZipFile(apk) as archive:
        if archive.read('assets/queue-fixture.bin') != synthetic.generated_file() or archive.read('lib/arm64-v8a/' + library.name) != library.read_bytes():
            raise ValueError('Signed APK changed source component/synthetic fixture bytes')
        if archive.getinfo('lib/arm64-v8a/' + library.name).compress_type != zipfile.ZIP_STORED:
            raise ValueError('Android native library must remain stored')
    receipt = {'status': 'built-real-pthread-Android-component-not-executed', 'apk': pin(apk), 'library': pin(library),
        'selection': pin(selection), 'officialHeadersLock': pin(headers_lock), 'sources': [pin(path) for path in sources],
        'objects': [pin(path) for path in objects], 'syntheticFixture': pin(fixture),
        'nativeImports': imports, 'needed': needed, 'loadAlignments': alignments,
        'libcLinkStub': pin(api / 'libc.so'), 'tools': [pin(path) for path in [tools.CLANG, tools.LINKER]],
        'originalGameImageOrAssetPackaged': False, 'actualAndroidOSExecutionConfirmed': False, 'sourceCreditGranted': 0}
    (output / 'build.json').write_text(json.dumps(receipt, indent=2) + '\n')
    print(json.dumps({'apk': receipt['apk'], 'imports': len(imports), 'headers': len(lock['files'])}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('selection', type=Path)
    parser.add_argument('headers_lock', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    build(args.selection.resolve(), args.headers_lock.resolve(), args.output.resolve())
