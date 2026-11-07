import difflib
import io
import json
import tokenize
import zipfile

from platform_android_os_build import pin, verify_frozen
from platform_android_os_runtime import ROOT, WORK, occupied


OUT = ROOT / 'evidence/lanes/platform-engine-wave007'


def main():
    verify_frozen()
    source = ROOT / 'platform/engine-wave007'
    baseline = ROOT / 'platform/engine-wave006/MaterialActivity.java'
    old = baseline.read_text(encoding='utf-8')
    new = (source / 'MaterialActivity.java').read_text(encoding='utf-8')
    marker = 'this.role = role; getHolder().addCallback(this);'
    replacement = 'this.role = role; getHolder().setFormat(android.graphics.PixelFormat.RGBA_8888); getHolder().addCallback(this);'
    if old.count(marker) != 1 or new != old.replace(marker, replacement):
        raise ValueError('Java successor is not the measured minimal surface-format change')
    routes = {}
    for name in ['baseline-x86', 'baseline-arm64', 'successor-x86', 'successor-arm64']:
        row = json.loads((WORK / (name + '-qualified.json')).read_text())
        for item in [row['testedApk'], row['probeApk']]:
            if pin(ROOT / item['path']) != item:
                raise ValueError('Qualified Android artifact changed: ' + item['path'])
        routes[name] = row
    if any(routes[name]['asIsPrimarySurfaceSamplesEqual'] != 81 or routes[name]['secondarySurfaceSamplesEqual'] != 81 or
        routes[name]['instrumentationFormatOverrideUsed'] for name in ['successor-x86', 'successor-arm64']):
        raise ValueError('Product successor did not qualify as installed on both routes')
    if any(routes[name]['asIsPrimarySurfaceSamplesEqual'] != 0 for name in ['baseline-x86', 'baseline-arm64']):
        raise ValueError('The retained baseline surface-format observation changed')
    owned = json.loads((WORK / 'owned-process.json').read_text())
    if not owned['stopped'] or any(occupied(port) for port in [5046, 5580, 5581]):
        raise ValueError('Owned emulator/ADB cleanup is incomplete')
    native = ROOT / 'work/platform-engine-wave006/android/native/libdqm_projected.so'
    built = json.loads((WORK / 'successor007-build.json').read_text())
    output = ROOT / built['android']['apk']['path']
    with zipfile.ZipFile(output) as archive:
        if archive.read('lib/arm64-v8a/libdqm_projected.so') != native.read_bytes():
            raise ValueError('ARM64 successor changed frozen native code')
    OUT.mkdir(parents=True, exist_ok=True)
    report = {'schemaVersion': 1, 'status': 'actual-android-os-component-and-rgba-successor-qualified',
        'routes': routes, 'minimalJavaChange': list(difflib.unified_diff(old.splitlines(), new.splitlines(), n=1)),
        'frozenNativeLibraryReusedByteForByte': pin(native), 'allFrozen006SourcesAndEvidencePreserved': True,
        'pageScope': {'libcAndJavaPageSizeBytes': 16384, 'observedProcessKernelPageSizeBytes': 4096,
            'officialX86Userspace16KiBPageEmulation': True, 'physical16KiBKernelOrDeviceQualified': False},
        'executionScope': {'nativeX86DiagnosticOsExecuted': True, 'realArm64PackageThroughObservedNativeBridge': True,
            'nativeArmHardwareExecuted': False, 'physicalAndroidDeviceExecuted': False, 'aynThorExecuted': False,
            'originalGpuPixelsCompared': False, 'nativeFullGameBuilt': False, 'additionalSourceCreditBytes': 0},
        'preservedFindings': [
            {'finding': 'Minimal SDK layout caused official launcher access violation0xc0000005 before guest boot',
                'resolution': 'Repository-local conventional SDK junction view; verified tools/images remain unchanged'},
            {'finding': 'First-boot SystemUI ANR dialog dimmed the first screenshot',
                'resolution': 'Original private screenshot/report retained; dismissed the owned guest dialog before repeat'},
            {'finding': 'Initial emulated LCD was16-bit; changing it to32-bit did not remove SurfaceView RGB565 quantization',
                'resolution': 'Retained unchanged006 baseline and explicit instrumentation diagnosis; minimal product007 requestsRGBA8888 before either Surface is created'},
            {'finding': 'Libc/Java16KiB page size coexists with4KiB smaps kernel pages on this official x86 image',
                'resolution': 'Userspace page emulation and physical-kernel/device claims remain separate'}],
        'cleanup': {'ownedEmulatorAndAdbServerStopped': True, 'isolatedPortsFree': [5046, 5580, 5581],
            'defaultAdb5037InvokedOrStopped': False, 'globalSdkAvdEnvironmentChanged': False},
        'originalPayloadsOrDecodedFramesPublished': False,
        'primarySources': ['https://android.googlesource.com/platform/frameworks/base/+/master/core/java/android/view/SurfaceView.java',
            'https://developer.android.com/guide/practices/page-sizes', 'https://developer.android.com/studio/run/emulator-commandline']}
    (OUT / 'os-validation.json').write_text(json.dumps(report, indent=2) + '\n')
    metadata = {'schemaVersion': 1, 'arm64Successor': built,
        'x86BaselineBuild': json.loads((WORK / 'diagnostic-build.json').read_text()),
        'x86SuccessorBuild': json.loads((WORK / 'diagnostic-successor007-build.json').read_text()),
        'officialEmulatorArchive': json.loads((WORK / 'emulator-tool.json').read_text()),
        'officialImageArchive': json.loads((WORK / 'system-image-tool.json').read_text()),
        'emulatorBinary': pin(ROOT / 'tools/android-os-emulator/emulator/emulator.exe'),
        'imageProperties': pin(ROOT / 'tools/android-os-images/api36-ps16k/x86_64/source.properties')}
    (OUT / 'build.json').write_text(json.dumps(metadata, indent=2) + '\n')
    files = sorted(path for path in source.iterdir() if path.is_file())
    files += sorted((ROOT / 'toolscripts').glob('platform_android_os*.py'))
    files += [OUT / 'os-validation.json', OUT / 'build.json']
    for path in files:
        if path.suffix in ['.py', '.java']:
            text = path.read_text(encoding='utf-8')
            if len(text.splitlines()) > 500:
                raise ValueError('Authored source exceeds500 lines')
            if path.suffix == '.py' and any(item.type == tokenize.COMMENT for item in tokenize.generate_tokens(io.StringIO(text).readline)):
                raise ValueError('Authored code comments are forbidden')
    ready = {'schemaVersion': 1, 'status': 'frozen-android-os-rgba-successor-ready-for-coordinator-review',
        'packet': 'platform-engine-wave007', 'files': [pin(path) for path in files],
        'realAndroidOsExecution': True, 'asInstalledPrimarySamplesPerRoute': 81, 'asInstalledSecondarySamplesPerRoute': 81,
        'shippingArm64ThroughNativeBridge': True, 'physicalDevice': False, 'physical16KiBKernel': False,
        'additionalSourceCreditBytes': 0, 'nativeFullGame': False, 'originalPayloadsPublished': False}
    (OUT / 'ready.json').write_text(json.dumps(ready, indent=2) + '\n')
    print(json.dumps({'status': ready['status'], 'files': len(files), 'readySha256': pin(OUT / 'ready.json')['sha256']}))


if __name__ == '__main__':
    main()
