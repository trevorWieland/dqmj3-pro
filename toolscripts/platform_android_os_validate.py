import argparse
import hashlib
import json
from pathlib import Path

from platform_android_os_build import pin, verify_frozen
from platform_android_os_runtime import ROOT, WORK, NAME, adb, save


FRAME = 'e9519cf31a3c0e80eac432239931e916290c199354208df88b22ddc69e4c9188'
ARCHIVE = 'a56be941dd4e8b4f71abd12141efd47916ebcf50174379cc86735fd78b8a5099'


def invoke(args, label, timeout=60, payload=None):
    process = adb(args, label, timeout=timeout, input_bytes=payload)
    if process.returncode:
        raise ValueError('Owned emulator command failed: ' + label)
    return process.stdout


def qualify(report, successor, architecture):
    if report['status'] != 'completed' or report['pageSize'] != 16384:
        raise ValueError('Android OS probe did not complete in userspace16KiB mode')
    phases = {row['phase']: row for row in report['phases']}
    required = ['loaded', 'secondary', 'paused', 'paused-stable', 'resumed', 'secondary-removed', 'bad-cache-rejected', 'cold-cache-reloaded']
    if any(name not in phases for name in required):
        raise ValueError('Actual lifecycle/cache phase is missing')
    if any(row['frame0'] != FRAME or row['frame1'] != FRAME or row['stats'][14] != 1 for row in phases.values()):
        raise ValueError('JNI source logical frame or publication generation differs')
    if phases['loaded']['stats'][:14] != [320, 240, 10, 12, 35, 17, 17, 17, 2, 128, 0, 1, 18, 277465]:
        raise ValueError('Actual owner source-rendering scope differs')
    if phases['paused']['active'] or phases['paused-stable']['active'] or phases['paused']['state'][0] != phases['paused-stable']['state'][0]:
        raise ValueError('Real OS HOME/pause did not stop the source clock')
    if not phases['secondary']['secondaryReady'] or not phases['resumed']['secondaryReady'] or phases['secondary-removed']['secondaryReady']:
        raise ValueError('Actual Presentation lifecycle differs')
    if report['cachedArchiveSha256'] != ARCHIVE:
        raise ValueError('Private cached owner resource identity differs')
    if not report['nativeLibraryDir'].endswith('/' + architecture):
        raise ValueError('Android selected an unexpected application ABI')
    if successor and (not report['asIsRequired'] or report.get('diagnosticSurfaceFormatOverride') or
        report['asIsSurfaceSamplesEqual'] != 81 or report['secondaryOsSurfaceSamplesEqual'] != 81):
        raise ValueError('Actual product surface fix did not pass without instrumentation overrides')
    if architecture == 'arm64' and not any('libndk_translation' in line for line in report['nativeMappings']):
        raise ValueError('ARM64 native bridge mapping was not observed')
    return {'jniLogicalFramesEqual': True, 'jniPixelsPerView': 76800, 'views': 2,
        'frameRgbaSha256': FRAME, 'pictureCases': 17, 'materialRecords': 19, 'lifecyclePhases': required,
        'pauseClockStable': True, 'presentationCreatedRemovedAndRecreated': True,
        'rejectedAsyncCachePreservesFrames': True, 'coldPrivateCacheReloads': True,
        'userspacePageSize': report['pageSize'], 'observedKernelPageSizes': report['kernelPageSizes'],
        'physical16KiBKernelClaimed': False, 'osPageEmulation': True,
        'asIsPrimarySurfaceSamplesEqual': report['asIsSurfaceSamplesEqual'], 'primarySurfaceSamples': 81,
        'secondarySurfaceSamplesEqual': report.get('secondaryOsSurfaceSamplesEqual'), 'secondarySurfaceSamples': 81,
        'instrumentationFormatOverrideUsed': bool(report.get('diagnosticSurfaceFormatOverride')),
        'abi': architecture, 'androidNativeBridgeUsed': architecture == 'arm64',
        'physicalDeviceExecuted': False, 'aynThorExecuted': False, 'originalGpuPixelClaim': False,
        'nativeFullGameBuild': False, 'additionalRecoveredSourceCreditBytes': 0}


def run(route, archive_path):
    verify_frozen()
    if invoke(['shell', 'getprop', 'ro.kernel.qemu'], route + '-guest-guard').strip() != b'1':
        raise ValueError('Target is not an emulator guest')
    if NAME.encode() not in invoke(['emu', 'avd', 'name'], route + '-avd-guard'):
        raise ValueError('Target is not the owned isolated AVD')
    successor, arm64 = route.startswith('successor'), route.endswith('arm64')
    package = 'org.dqm.projected' if arm64 else 'org.dqm.projected.diagnostic'
    architecture, abi = ('arm64', 'arm64-v8a') if arm64 else ('x86_64', 'x86_64')
    if arm64:
        artifact = WORK / 'successor007/package/dqm-dual-view-projected.apk' if successor else ROOT / 'work/platform-engine-wave006/android/package/dqm-dual-view-projected.apk'
        kind = 'arm64bridge'
    else:
        artifact = WORK / 'diagnostic-build' / ('successor007/dqm-os-x86_64-diagnostic.apk' if successor else 'dqm-os-x86_64-diagnostic.apk')
        kind = 'x86'
    probe = WORK / 'diagnostic-build' / (kind + '-probe/os-validation-probe.apk')
    raw = archive_path.read_bytes()
    if hashlib.sha256(raw).hexdigest() != ARCHIVE:
        raise ValueError('Private owner resource differs')
    invoke(['install', '-r', '-d', '--no-streaming', '--abi', abi, str(artifact)], route + '-install')
    invoke(['install', '-r', '--no-streaming', str(probe)], route + '-probe-install')
    invoke(['shell', 'run-as', package, 'mkdir', '-p', 'files'], route + '-cache-dir')
    invoke(['exec-in', 'run-as', package, 'dd', 'of=files/navimap.arc', 'bs=8192'], route + '-cache-seed', payload=raw)
    result = invoke(['shell', 'am', 'instrument', '-w', '-e', 'requireAsIs', 'true' if successor else 'false',
        'org.dqm.osvalidation.' + kind + '/org.dqm.osvalidation.Probe'], route + '-instrumentation', timeout=150)
    if b'INSTRUMENTATION_RESULT: status=completed' not in result:
        raise ValueError('Actual OS instrumentation reported a failure')
    payload = invoke(['exec-out', 'run-as', package, 'cat', 'files/os-report.json'], route + '-report')
    report = json.loads(payload)
    save('private/' + route + '-report.json', report)
    summary = qualify(report, successor, architecture)
    summary.update({'schemaVersion': 1, 'route': route, 'testedApk': pin(artifact), 'probeApk': pin(probe),
        'frozenPredecessorsModified': False, 'privateOriginalAssetsPackaged': False})
    save(route + '-qualified.json', summary)
    print(json.dumps({'status': 'actual-android-os-route-qualified', 'route': route,
        'asIsPrimarySamplesEqual': report['asIsSurfaceSamplesEqual'], 'secondarySamplesEqual': report.get('secondaryOsSurfaceSamplesEqual'),
        'physicalDevice': False}), flush=True)
    return summary


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('route', choices=['baseline-x86', 'baseline-arm64', 'successor-x86', 'successor-arm64'])
    parser.add_argument('--archive', type=Path, default=ROOT / 'work/platform-engine-wave006/private/NaviMap.arc')
    arguments = parser.parse_args()
    run(arguments.route, arguments.archive)
