import json
import shutil

from platform_android_os_build import pin, verify_frozen
from platform_android_os_runtime import ROOT, WORK
from platform_engine_wave006_packaging import package


def main():
    verify_frozen()
    source = ROOT / 'platform/engine-wave007'
    lock = json.loads((source / 'frozen-inputs.json').read_text())
    for row in lock['files']:
        if pin(ROOT / row['path'])['sha256'] != row['sha256']:
            raise ValueError('RGBA successor input changed')
    folder = WORK / 'successor007'
    signing = folder / 'signing'
    signing.mkdir(parents=True, exist_ok=True)
    original_key = ROOT / 'work/platform-engine-wave006/signing/materials-debug.p12'
    key = signing / 'materials-debug.p12'
    if not key.exists():
        shutil.copyfile(original_key, key)
    elif key.read_bytes() != original_key.read_bytes():
        raise ValueError('Private development signing identity changed')
    library = ROOT / 'work/platform-engine-wave006/android/native/libdqm_projected.so'
    result = package(source, folder / 'package', signing, library)
    report = {'schemaVersion': 1, 'status': 'rgba-successor007-arm64-package-built', 'android': result,
        'nativeLibrary': pin(library), 'javaSource': pin(source / 'MaterialActivity.java'),
        'manifest': pin(source / 'AndroidManifest.xml'), 'frozenNativeLibraryReusedByteForByte': True,
        'frozenJavaModified': False, 'sourceSuccessorSetsSurfaceFormatBeforeAttachment': True,
        'additionalRecoveredSourceCreditBytes': 0, 'physicalDeviceExecution': False}
    (WORK / 'successor007-build.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'apk': result['apk']}))


if __name__ == '__main__':
    main()
