import io
import struct
import zipfile
from pathlib import Path

from elftools.elf.elffile import ELFFile
import app_shell_build as tools


def native_android(source, work, objects):
    library = work / 'libdqm_engine.so'
    tools.run([tools.CLANG, '--target=aarch64-linux-android29', '--ld-path=' + str(tools.LINKER),
               '-shared', '-nostdlib', '-Wl,-z,defs,-z,max-page-size=16384,-z,common-page-size=16384,-soname,libdqm_engine.so',
               *objects, '-o', library], work / 'android-link.json')
    elf = ELFFile(io.BytesIO(library.read_bytes()))
    loads = [segment for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    symbols = {symbol.name for symbol in elf.get_section_by_name('.dynsym').iter_symbols() if symbol['st_shndx'] != 'SHN_UNDEF'}
    jni = sorted(name for name in symbols if name.startswith('Java_org_dqm_engine_EngineActivity_'))
    if elf['e_machine'] != 'EM_AARCH64' or len(jni) != 18 or not loads:
        raise ValueError('Android native ABI/JNI closure mismatch')
    if any(segment['p_align'] < 16384 or segment['p_vaddr'] % 16384 != segment['p_offset'] % 16384 for segment in loads):
        raise ValueError('Android ELF 16KiB alignment invalid')
    if not {'fn_00157ff4', 'fn_00173d40'} <= symbols:
        raise ValueError('Recovered stack source absent from Android library')
    return library, {'library': tools.pin(library), 'loadAlignments': [segment['p_align'] for segment in loads],
                     'machine': elf['e_machine'], 'jniSymbols': jni, 'recoveredStackSymbolsPresent': True}


def package(source, work, signing, library, asset):
    classes = work / 'classes'
    classes.mkdir(parents=True, exist_ok=True)
    android_jar = tools.SDK / 'platforms/android-36/android.jar'
    tools.run([tools.JDK / 'bin/javac.exe', '--release', '8', '-Xlint:-options', '-classpath', android_jar,
               '-d', classes, source / 'EngineActivity.java'], work / 'javac.json')
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
    unsigned = work / 'unsigned.apk'
    tools.normalize_zip(base, unsigned, [('classes.dex', dex / 'classes.dex', zipfile.ZIP_DEFLATED),
        ('lib/arm64-v8a/libdqm_engine.so', library, zipfile.ZIP_STORED),
        ('assets/scenes/example.dat', asset, zipfile.ZIP_DEFLATED)])
    aligned = work / 'aligned.apk'
    tools.run([tools.BUILD_TOOLS / 'zipalign.exe', '-P', '16', '-f', '4', unsigned, aligned], work / 'zipalign.json')
    signing.mkdir(parents=True, exist_ok=True)
    key = signing / 'engine-debug.p12'
    if not key.exists():
        tools.run([tools.JDK / 'bin/keytool.exe', '-genkeypair', '-keystore', key, '-storepass', 'android', '-keypass', 'android',
                   '-alias', 'androiddebugkey', '-dname', 'CN=Portable Engine Component,O=Local Development,C=US',
                   '-keyalg', 'RSA', '-keysize', '2048', '-validity', '10000', '-storetype', 'PKCS12'], signing / 'development-key.json')
    apk = work / 'dqm-portable-engine-components.apk'
    signer = [java, '-jar', tools.BUILD_TOOLS / 'lib/apksigner.jar']
    tools.run([*signer, 'sign', '--ks', key, '--ks-pass', 'pass:android', '--key-pass', 'pass:android', '--out', apk, aligned], work / 'sign.json')
    signature = tools.run([*signer, 'verify', '--verbose', '--print-certs', apk], work / 'signature.json').decode()
    tools.run([tools.BUILD_TOOLS / 'zipalign.exe', '-c', '-P', '16', '-v', '4', apk], work / 'aligned-check.json')
    badging = tools.run([tools.BUILD_TOOLS / 'aapt2.exe', 'dump', 'badging', apk], work / 'badging.json').decode()
    if "package: name='org.dqm.engine'" not in badging or "targetSdkVersion:'36'" not in badging:
        raise ValueError('Android component package identity/target mismatch')
    with zipfile.ZipFile(apk) as archive:
        entry = archive.getinfo('lib/arm64-v8a/libdqm_engine.so')
        content = apk.read_bytes()
        names, extras = struct.unpack_from('<HH', content, entry.header_offset + 26)
        offset = entry.header_offset + 30 + names + extras
        if entry.compress_type != zipfile.ZIP_STORED or offset % 16384 or archive.read(entry.filename) != library.read_bytes():
            raise ValueError('Packaged shared library differs or lacks 16KiB ZIP alignment')
        if archive.read('assets/scenes/example.dat') != asset.read_bytes():
            raise ValueError('Authored scene resource differs inside APK')
    return {'apk': tools.pin(apk), 'abi': 'arm64-v8a', 'minimumApi': 29, 'targetApi': 36,
            'signatureVerified': True, 'signatureSummary': signature, 'zipNativeOffset': offset,
            'uncompressedNativeLibrary': True, 'authoredResourcePackaged': True, 'originalGameAssetsPackaged': False,
            'deviceExecution': False}
