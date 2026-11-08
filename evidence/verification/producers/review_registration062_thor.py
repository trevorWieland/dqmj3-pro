import gc
import hashlib
import json
from pathlib import Path
import subprocess
import zipfile
from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parents[3]
BUILD = ROOT / 'work/registration062-android-build-v1'
CAPTURE = ROOT / 'work/registration062-thor-full-v1'
BASELINE = ROOT / 'work/registration062-public-parent-v2'


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def main():
    receipt = read(CAPTURE / 'receipt.json')
    require(receipt['status'] == 'four-physical-registration-source-profiles-passed' and not receipt['smokeOnly']
            and not receipt['originalReadOrConstructionAttempts'] and not receipt['wholeGameQualified'],
            'Physical registration corpus failed or used original inputs')
    device = receipt['device']
    require(device['model'] == 'AYN Thor' and device['abi'] == 'arm64-v8a' and device['architecture'] == 'aarch64'
            and device['nativeBridge'] == '0' and device['qemu'] in ('', '0') and device['kernelPageBytes'] == '4096',
            'Physical device identity or execution domain differs')
    archive = read(BASELINE / 'report-archive.json')
    require(pin(BASELINE / archive['archive'])['sha256'] == archive['sha256'], 'Desktop baseline archive differs')
    member = next(r for r in archive['members'] if r['member'] == 'sourceOnly/report.json')
    with zipfile.ZipFile(BASELINE / archive['archive']) as stream:
        data = stream.read(member['member'])
    require(len(data) == member['bytes'] and hashlib.sha256(data).hexdigest() == member['sha256'], 'Baseline report differs')
    desktop = json.loads(data)
    del data
    expected = {(622, 0, False), (623, 128, True), (624, 255, False), (625, 1, True)}
    require(len(receipt['cases']) == 4 and {(r['seed'], r['lookupLock'], r['disposer']) for r in receipt['cases']} == expected,
            'Physical registration profile roster differs')
    for row in receipt['cases']:
        path = CAPTURE / ('profile-' + str(row['profile']) + '.json')
        require(pin(path)['sha256'] == row['reportSha256'] and row['pointerBytes'] == 8
                and int(row['arenaAddress'], 16) > 0xffffffff and int(row['arenaAddress'], 16) % 64 == 0,
                'Physical case hash or real pointer domain differs')
        actual = read(path)
        reference = next(r for r in desktop['profiles'] if r['target'] == 'windows' and r['seed'] == row['seed'])
        require(actual['lookupLock'] == reference['lookupLock'] and actual['capturedDisposer'] == reference['capturedDisposer']
                and actual['orderedMutexCallbackCount'] == reference['orderedMutexCallbackCount']
                and not actual['originalPcs'] and actual['originalAuthoredEndpointsMapped'] is None,
                'Physical callback or original-execution domain differs')
        require(len(actual['observations']) == len(reference['observations']) == 493, 'Physical complete arena corpus differs')
        for observed, old in zip(actual['observations'], reference['observations'], strict=True):
            require(observed['completeIndependentArenaModel'] and observed['fullArenaBytes'] == 0x80000,
                    'Physical observation lacks a complete independent model')
            fingerprint = hashlib.sha256(json.dumps(observed['namedLiveOwnershipProjection'], sort_keys=True,
                                                     separators=(',', ':')).encode()).hexdigest()
            require(fingerprint == observed['namedLiveOwnershipFingerprint'], 'Physical ownership-role fingerprint differs')
            comparable = lambda r: {k: v for k, v in r.items() if k not in ('sourceRawArenaSha256', 'originalRawArenaSha256')}
            require(comparable(observed) == comparable(old), 'Physical/Windows semantic observations differ')
    del desktop
    gc.collect()
    for row in receipt['helperAndInterpreterPins']:
        actual = pin(ROOT / row['path'])
        require(all(actual[k] == row[k] for k in ('bytes', 'sha256')), 'Physical helper or interpreter differs')
    require(all(pin(ROOT / r['path'])['sha256'] == r['sha256'] for r in receipt['importedAuthoredSources']),
            'Imported public helper changed')
    require(all(not r['path'].startswith('work/') for r in receipt['importedAuthoredSources']), 'Private helper imported')
    build = read(BUILD / 'build.json')
    require(build['exitCode'] == 0 and build['selectedSingleSdkEnvironmentDefinition']
            and build['oldAllocateTranslationUnitExcluded']
            and pin(BUILD / 'build.json')['sha256'] == receipt['sourceBuildManifestSha256'], 'Physical build differs')
    for row in build['inputs']:
        require(pin(ROOT / row['path']) == row, 'Physical build input changed')
        if row['path'].startswith(('src/native/', 'toolscripts/fixtures/sdk062_')):
            committed = subprocess.check_output(['git', 'show', '9e61dd4:' + row['path']], cwd=ROOT)
            require(hashlib.sha256(committed).hexdigest() == row['sha256'], 'Physical source differs from admitted source')
    executable = BUILD / 'registration062-device'
    require(pin(executable)['sha256'] == receipt['executableSha256'], 'Physical executable differs')
    with executable.open('rb') as stream:
        elf = ELFFile(stream)
        require(elf.elfclass == 64 and elf['e_machine'] == 'EM_AARCH64' and elf['e_type'] == 'ET_DYN', 'ELF ABI differs')
        loads = [r for r in elf.iter_segments() if r['p_type'] == 'PT_LOAD']
        require(loads and all(r['p_align'] >= 16384 and (r['p_vaddr'] - r['p_offset']) % 16384 == 0 for r in loads),
                'Physical ELF lacks 16KiB alignment')
        needed = [t.needed for t in elf.get_section_by_name('.dynamic').iter_tags() if t.entry.d_tag == 'DT_NEEDED']
        require(needed == ['libc.so'], 'Undeclared physical runtime dependency')
    calls = sum(r['nativeCalls'] for r in receipt['cases'])
    observations = sum(r['completeArenaObservations'] for r in receipt['cases'])
    result = dict(status='coordinator-reviewed-physical-thor-registration-source-passed',
        sourceCommit='9e61dd4d22a0669ed90508fa5c130e266e1ea112', producer=pin(Path(__file__).resolve()),
        rawReceipt=pin(CAPTURE / 'receipt.json'), build=pin(BUILD / 'build.json'), executable=pin(executable),
        device=device, profiles=4, nativeCalls=calls, completeArenaObservations=observations,
        streamedBytesChecked=sum(r['bytesStreamedAndChecked'] for r in receipt['cases']),
        orderedMutexCallbacks=sum(r['orderedMutexCallbacks'] for r in receipt['cases']),
        windowsProjectionObservationsMatched=1972, rawWindowsArenaEqualityClaimed=False,
        simulatedPlatformThreadIdentity=True, actualOSContentionQualified=False, sourceInstructionTraceClaimed=False,
        actualKernelPageBytes=4096, elf16KiBAligned=True, physical16KiBKernelClaimed=False,
        originalReadsOrConstructions=0, newSourceCreditGranted=0, constructorDestructorAdmissionGranted=False,
        wholeNativeGameQualified=False, cases=receipt['cases'])
    require(calls == 3088 and observations == 1972, 'Physical totals differ')
    (ROOT / 'evidence/verification/thor-registration062-physical.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({k: result[k] for k in ('status', 'profiles', 'nativeCalls', 'completeArenaObservations', 'streamedBytesChecked')}))


if __name__ == '__main__':
    main()
