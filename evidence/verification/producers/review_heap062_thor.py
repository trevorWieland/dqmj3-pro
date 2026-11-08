import hashlib
import json
from pathlib import Path
import subprocess

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parents[3]
BUILD = ROOT / 'work/heap062-android-public-build-v1'
CAPTURE = ROOT / 'work/heap062-android-public-physical-v1'


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
    require(receipt['status'] == '39-physical-source-profiles-passed' and not receipt['smokeOnly']
            and not receipt['originalReadOrConstructionAttempts'] and not receipt['wholeGameQualified'],
            'Physical heap corpus is incomplete or used original inputs')
    device = receipt['device']
    require(device['model'] == 'AYN Thor' and device['abi'] == 'arm64-v8a'
            and device['architecture'] == 'aarch64' and device['nativeBridge'] == '0'
            and device['qemu'] in ('', '0') and device['kernelPageBytes'] == '4096', 'Physical device profile differs')
    expected = {f'generic-{i}' for i in range(24)} | {f'default-{i}' for i in range(12)} | {'registry', 'setter', 'disabled'}
    require(len(receipt['cases']) == 39 and {row['name'] for row in receipt['cases']} == expected,
            'Physical heap case roster differs')
    for row in receipt['cases']:
        require(pin(CAPTURE / (row['name'] + '.json'))['sha256'] == row['reportSha256']
                and row['pointerBytes'] == 8 and int(row['arenaAddress'], 16) > 0xffffffff
                and int(row['arenaAddress'], 16) % 64 == 0, 'Physical case data or real pointer domain differs')
    require(sum(row['nativeCalls'] for row in receipt['cases']) == 3090
            and sum(row['fullArenaObservations'] for row in receipt['cases']) == 3015
            and sum(row['bytesStreamedAndChecked'] for row in receipt['cases']) == 296483678,
            'Physical arena/native-call corpus count differs')
    for row in receipt['helperAndInterpreterPins']:
        path = ROOT / row['path']
        require(path.stat().st_size == row['bytes'] and pin(path)['sha256'] == row['sha256'],
                'Physical host helper/interpreter changed')
    build = read(BUILD / 'build.json')
    require(build['exitCode'] == 0 and build['oldAllocateTranslationUnitExcluded']
            and build['selectedSingleSdkEnvironmentDefinition'], 'Physical build source selection differs')
    require(pin(BUILD / 'build.json')['sha256'] == receipt['sourceBuildManifestSha256'], 'Physical build receipt changed')
    for row in build['inputs']:
        require(pin(ROOT / row['path']) == row, 'Physical build input changed')
        if row['path'].startswith('src/native/') or row['path'].startswith('toolscripts/fixtures/sdk062_heap_v1/'):
            committed = subprocess.check_output(['git', 'show', '2e4490c:' + row['path']], cwd=ROOT)
            require(hashlib.sha256(committed).hexdigest() == row['sha256'], 'Physical source differs from admitted commit')
    executable = BUILD / 'heap062-device'
    require(pin(executable)['sha256'] == receipt['executableSha256'], 'Physical executable changed')
    with executable.open('rb') as stream:
        elf = ELFFile(stream)
        require(elf.elfclass == 64 and elf['e_machine'] == 'EM_AARCH64' and elf['e_type'] == 'ET_DYN',
                'Physical source executable ABI differs')
        loads = [row for row in elf.iter_segments() if row['p_type'] == 'PT_LOAD']
        require(loads and all(row['p_align'] >= 16384 and (row['p_vaddr'] - row['p_offset']) % 16384 == 0
                             for row in loads), 'Physical executable lacks16KiB ELF alignment')
        needed = [tag.needed for tag in elf.get_section_by_name('.dynamic').iter_tags() if tag.entry.d_tag == 'DT_NEEDED']
        require(needed == ['libc.so'], 'Physical executable has an undeclared runtime dependency')
    output = dict(status='coordinator-reviewed-physical-thor-heap-source-passed', producer=pin(Path(__file__).resolve()),
        sourceCommit='2e4490ceb330dcc46a8e9e280140382523b7e893', rawReceipt=pin(CAPTURE / 'receipt.json'),
        build=pin(BUILD / 'build.json'), executable=pin(executable), device=device,
        profiles=39, nativeCalls=3090, completeArenaObservations=3015, streamedBytesChecked=296483678,
        rawArenaDumpsStored=False, originalReadsOrConstructions=0, nativePointersGenuinelyHigh=True,
        elf16KiBAligned=True, actualKernelPageBytes=4096, physical16KiBKernelClaimed=False,
        simulatedPlatformThreadIdentity=True, actualOSContentionQualified=False,
        sourceInstructionTraceClaimed=False, newSourceCreditGranted=0, wholeNativeGameQualified=False,
        cases=receipt['cases'])
    (ROOT / 'evidence/verification/thor-heap062-physical.json').write_text(json.dumps(output, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({key: output[key] for key in ['status', 'profiles', 'nativeCalls', 'completeArenaObservations', 'streamedBytesChecked']}))


if __name__ == '__main__':
    main()
