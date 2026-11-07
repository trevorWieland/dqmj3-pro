import io
import struct
import zipfile

from elftools.elf.elffile import ELFFile
import app_shell_build as tools


def library(work, objects):
    target = work / 'libdqm_textures.so'
    tools.run([tools.CLANG, '--target=aarch64-linux-android29', '--ld-path=' + str(tools.LINKER), '-shared', '-nostdlib',
               '-Wl,-z,defs,-z,max-page-size=16384,-z,common-page-size=16384,-soname,libdqm_textures.so',
               *objects, '-o', target], work / 'native-link.json')
    elf = ELFFile(io.BytesIO(target.read_bytes()))
    loads = [segment for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    symbols = {symbol.name for symbol in elf.get_section_by_name('.dynsym').iter_symbols() if symbol['st_shndx'] != 'SHN_UNDEF'}
    jni = sorted(name for name in symbols if name.startswith('Java_org_dqm_textures_TextureActivity_'))
    expected = sorted('Java_org_dqm_textures_TextureActivity_' + name for name in ('loadArchive', 'framePixels', 'sceneStat'))
    if elf['e_machine'] != 'EM_AARCH64' or jni != expected or not loads:
        raise ValueError('Native Android component ABI/JNI closure differs')
    if any(row['p_align'] < 16384 or row['p_vaddr'] % 16384 != row['p_offset'] % 16384 for row in loads):
        raise ValueError('Native Android component lacks 16KiB ELF alignment')
    return target, {'library': tools.pin(target), 'machine': elf['e_machine'], 'jniSymbols': jni,
                    'loadAlignments': [row['p_align'] for row in loads]}


def package(source, work, signing, native):
    work.mkdir(parents=True, exist_ok=True)
    classes = work / 'classes'
    classes.mkdir(exist_ok=True)
    android_jar = tools.SDK / 'platforms/android-36/android.jar'
    tools.run([tools.JDK / 'bin/javac.exe', '--release', '8', '-Xlint:-options', '-classpath', android_jar,
               '-d', classes, source / 'TextureActivity.java'], work / 'javac.json')
    class_jar = work / 'classes.jar'
    with zipfile.ZipFile(class_jar, 'w', compression=zipfile.ZIP_DEFLATED) as archive:
        for path in sorted(classes.rglob('*.class')):
            info = zipfile.ZipInfo(path.relative_to(classes).as_posix(), (1980, 1, 1, 0, 0, 0))
            info.compress_type = zipfile.ZIP_DEFLATED
            archive.writestr(info, path.read_bytes())
    dex = work / 'dex'
    dex.mkdir(exist_ok=True)
    java = tools.JDK / 'bin/java.exe'
    tools.run([java, '-cp', tools.BUILD_TOOLS / 'lib/d8.jar', 'com.android.tools.r8.D8', '--release', '--min-api', '29',
               '--lib', android_jar, '--output', dex, class_jar], work / 'd8.json')
    base = work / 'base.apk'
    tools.run([tools.BUILD_TOOLS / 'aapt2.exe', 'link', '-I', android_jar, '--manifest', source / 'AndroidManifest.xml',
               '--min-sdk-version', '29', '--target-sdk-version', '36', '-o', base], work / 'aapt2.json')
    unsigned, aligned = work / 'unsigned.apk', work / 'aligned.apk'
    tools.normalize_zip(base, unsigned, [('classes.dex', dex / 'classes.dex', zipfile.ZIP_DEFLATED),
        ('lib/arm64-v8a/libdqm_textures.so', native, zipfile.ZIP_STORED)])
    tools.run([tools.BUILD_TOOLS / 'zipalign.exe', '-P', '16', '-f', '4', unsigned, aligned], work / 'zipalign.json')
    signing.mkdir(parents=True, exist_ok=True)
    key = signing / 'textures-debug.p12'
    if not key.exists():
        tools.run([tools.JDK / 'bin/keytool.exe', '-genkeypair', '-keystore', key, '-storepass', 'android', '-keypass', 'android',
                   '-alias', 'androiddebugkey', '-dname', 'CN=Textured Resource Component,O=Local Development,C=US',
                   '-keyalg', 'RSA', '-keysize', '2048', '-validity', '10000', '-storetype', 'PKCS12'], signing / 'development-key.json')
    apk = work / 'dqm-textured-resources.apk'
    signer = [java, '-jar', tools.BUILD_TOOLS / 'lib/apksigner.jar']
    tools.run([*signer, 'sign', '--ks', key, '--ks-pass', 'pass:android', '--key-pass', 'pass:android', '--out', apk, aligned], work / 'sign.json')
    tools.run([*signer, 'verify', '--verbose', '--print-certs', apk], work / 'signature.json')
    tools.run([tools.BUILD_TOOLS / 'zipalign.exe', '-c', '-P', '16', '-v', '4', apk], work / 'aligned-check.json')
    badging = tools.run([tools.BUILD_TOOLS / 'aapt2.exe', 'dump', 'badging', apk], work / 'badging.json').decode()
    if "package: name='org.dqm.textures'" not in badging or "targetSdkVersion:'36'" not in badging:
        raise ValueError('Android package identity differs')
    with zipfile.ZipFile(apk) as archive:
        entry = archive.getinfo('lib/arm64-v8a/libdqm_textures.so')
        content = apk.read_bytes()
        names, extras = struct.unpack_from('<HH', content, entry.header_offset + 26)
        offset = entry.header_offset + 30 + names + extras
        if entry.compress_type != zipfile.ZIP_STORED or offset % 16384 or archive.read(entry.filename) != native.read_bytes():
            raise ValueError('APK library identity/alignment differs')
        allowed = {'AndroidManifest.xml', 'resources.arsc', 'classes.dex', entry.filename, 'META-INF/MANIFEST.MF', 'META-INF/ANDROIDD.SF', 'META-INF/ANDROIDD.RSA'}
        if set(archive.namelist()) - allowed:
            raise ValueError('Unexpected APK content; no original assets may be packaged')
        with zipfile.ZipFile(base) as generated:
            if archive.read('resources.arsc') != generated.read('resources.arsc'):
                raise ValueError('AAPT2 generated resource table changed during packaging')
    return {'apk': tools.pin(apk), 'abi': 'arm64-v8a', 'minimumApi': 29, 'targetApi': 36,
            'signatureVerified': True, 'zipNativeOffset': offset, 'uncompressedNativeLibrary': True,
            'originalAssetsPackaged': False, 'deviceExecution': False, 'safImportImplemented': True}
