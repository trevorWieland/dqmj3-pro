import argparse
import json
import zipfile

from platform_android_os_build import BUILD, PACKAGE, pin, run, tools
from platform_android_os_probe import PROBE
from platform_android_os_runtime import ROOT, WORK


def build(shipping=False):
    target_package = 'org.dqm.projected' if shipping else PACKAGE
    kind = 'arm64bridge' if shipping else 'x86'
    folder = BUILD / (kind + '-probe')
    folder.mkdir(exist_ok=True)
    source, classes, dex = folder / 'source', folder / 'classes', folder / 'dex'
    for path in [source, classes, dex]:
        path.mkdir(parents=True, exist_ok=True)
    java = source / 'Probe.java'
    java.write_text(PROBE.replace(PACKAGE, target_package), encoding='utf-8')
    manifest = source / 'AndroidManifest.xml'
    probe_package = 'org.dqm.osvalidation.' + kind
    manifest.write_text('<manifest xmlns:android="http://schemas.android.com/apk/res/android" package="' + probe_package + '" android:versionCode="1">\n'
        '<uses-sdk android:minSdkVersion="29" android:targetSdkVersion="36"/>\n'
        '<application android:label="Isolated OS validation" android:debuggable="true"/>\n'
        '<instrumentation android:name="org.dqm.osvalidation.Probe" android:targetPackage="' + target_package + '" android:functionalTest="true"/>\n</manifest>\n')
    android_jar = tools.SDK / 'platforms/android-36/android.jar'
    run([tools.JDK / 'bin/javac.exe', '--release', '8', '-Xlint:-options', '-classpath', android_jar,
        '-d', classes, java], 'probe-javac')
    jar = folder / 'probe.jar'
    with zipfile.ZipFile(jar, 'w', zipfile.ZIP_DEFLATED) as archive:
        for path in classes.rglob('*.class'):
            archive.write(path, path.relative_to(classes).as_posix())
    command = tools.JDK / 'bin/java.exe'
    run([command, '-cp', tools.BUILD_TOOLS / 'lib/d8.jar', 'com.android.tools.r8.D8', '--release', '--min-api', '29',
        '--lib', android_jar, '--output', dex, jar], 'probe-d8')
    base, unsigned, output = folder / 'base.apk', folder / 'unsigned.apk', folder / 'os-validation-probe.apk'
    run([tools.BUILD_TOOLS / 'aapt2.exe', 'link', '-I', android_jar, '--manifest', manifest, '-o', base], 'probe-aapt2')
    tools.normalize_zip(base, unsigned, [('classes.dex', dex / 'classes.dex', zipfile.ZIP_DEFLATED)])
    key = ROOT / 'work/platform-engine-wave006/signing/materials-debug.p12' if shipping else BUILD / 'diagnostic-debug.p12'
    run([command, '-jar', tools.BUILD_TOOLS / 'lib/apksigner.jar', 'sign', '--ks', key,
        '--ks-pass', 'pass:android', '--key-pass', 'pass:android', '--out', output, unsigned], 'probe-sign')
    run([command, '-jar', tools.BUILD_TOOLS / 'lib/apksigner.jar', 'verify', output], 'probe-signature')
    (WORK / ('instrumentation-' + kind + '-build.json')).write_text(json.dumps({'apk': pin(output), 'javaSource': pin(java),
        'probePackage': probe_package, 'targetPackage': target_package, 'targetFrozenJavaAndCModified': False, 'probeOnly': True}, indent=2) + '\n')
    print(json.dumps({'status': 'isolated-os-instrumentation-built', 'apk': pin(output)}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--shipping-arm64', action='store_true')
    build(parser.parse_args().shipping_arm64)
