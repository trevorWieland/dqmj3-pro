import ctypes
import gzip
import hashlib
import json
from pathlib import Path
import struct
import sys
import tarfile
from elftools.elf.elffile import ELFFile

ROOT = Path.cwd().resolve()
BASE = ROOT / 'work/controller055-probe'
sys.path.insert(0, str(ROOT / 'toolscripts'))
sys.path.insert(0, str(ROOT / 'toolscripts/native_state055_controller'))
from controller5_native_storage import rows

archive = BASE / 'device-capture.tar.gz'
capture = json.loads((BASE / 'capture-archive.json').read_text())
digest, size = hashlib.sha256(), 0
with gzip.open(archive, 'rb') as stream:
    for block in iter(lambda: stream.read(1048576), b''):
        digest.update(block)
        size += len(block)
assert size == capture['rawTarBytes'] and digest.hexdigest() == capture['rawTarSha256']
hashes, small = {}, {}
with tarfile.open(archive, 'r:gz') as stream:
    for member in stream:
        if not member.isfile():
            continue
        data = stream.extractfile(member).read()
        assert member.name.startswith('files/') and '..' not in member.name
        name = member.name[len('files/'):]
        hashes[name] = hashlib.sha256(data).hexdigest()
        if len(data) <= 20000:
            small[name] = data
report = json.loads((BASE / 'device-report.json').read_text())
expected = json.loads((BASE / 'expected-v2.json').read_text())
assert report['status'] == 'native-controller-corpus-completed' and len(report['cases']) == len(expected['cases']) == 569
with (BASE / 'component-library/libcontroller055.so').open('rb') as stream:
    elf = ELFFile(stream)
    loads = [part for part in elf.iter_segments() if part['p_type'] == 'PT_LOAD']
    readonly = [7 + index for index, part in enumerate(loads) if not part['p_flags'] & 2]
    file_readonly = {7 + index: hashlib.sha256(part.data() + bytes(part['p_memsz'] - part['p_filesz'])).hexdigest()
                     for index, part in enumerate(loads) if not part['p_flags'] & 2}
first_readonly = {}
checked = []
for index, (actual, wanted) in enumerate(zip(report['cases'], expected['cases'])):
    cold = actual['cold']
    cold_name = cold['name']
    assert cold['addresses'][0] == expected['arenaAddress'] > 0xffffffff
    assert hashes[cold_name + '-region-0.bin'] == wanted['cold']['arenaSha256']
    assert hashes[f'case-{index}.bin'] == wanted['cold']['arenaSha256']
    assert hashes[cold_name + '-region-2.bin'] == wanted['cold']['controlSha256']
    assert cold['addresses'][8:11] == [*wanted['cold']['pair'], wanted['cold']['stage']]
    assert len(actual['steps']) == len(wanted['steps'])
    for region in readonly:
        value = hashes[f'{cold_name}-region-{region}.bin']
        if region not in first_readonly:
            first_readonly[region] = value
        assert first_readonly[region] == value
        assert file_readonly[region] == value
    for step, (observation, target) in enumerate(zip(actual['steps'], wanted['steps'])):
        name = observation['name']
        values = observation['addresses']
        assert observation['status'] == 0 and values[1] == 1 and values[14] == 0
        assert values[0] == expected['arenaAddress'] and values[2:8] == [8, 262144, 96, 2280, 4016, 792]
        assert observation['layout'] == [2280, 4016, 4872, 40, 240, 792, 4116, 0, 8, 16, 24, 32, 48, 56, 8, 16]
        assert hashes[name + '-region-0.bin'] == target['arenaSha256'], (index, wanted['label'], step, 'arena')
        assert hashes[name + '-region-2.bin'] == target['controlSha256'], (index, wanted['label'], step, 'control')
        assert values[8:11] == [*target['pair'], target['stage']]
        assert values[12] == values[13] and not values[12] & ((3 << 22) | (1 << 24) | (1 << 25) | 0x9f00)
        count = values[11]
        observed = rows(small[name + '-region-3.bin'], count)
        fingerprints = struct.unpack('<' + str(count) + 'I', small[name + '-region-4.bin'][:4 * count])
        for position, row in enumerate(observed):
            row['contextFingerprint'] = fingerprints[position]
        assert observed == target['storageEvents'], (index, wanted['label'], step, 'storage-observations')
        for region in readonly:
            assert hashes[f'{name}-region-{region}.bin'] == first_readonly[region]
        assert hashes[name + '-region-5.bin'] == hashes[cold_name + '-region-5.bin']
    checked.append(dict(label=wanted['label'], calls=len(actual['steps']), wholeArenasEqual=True,
                        wholeGlobalsEqual=True, orderedStorageObservationsEqual=True,
                        codeAndReadonlySegmentsUnchanged=True, floatingControlPreserved=True))
result = dict(status='physical-android-controller-corpus-verified', programs=len(checked),
    calls=sum(row['calls'] for row in checked), cases=checked, nativePointerBytes=8,
    actualArenaAddress=expected['arenaAddress'], librarySha256=hashlib.sha256((BASE / 'component-library/libcontroller055.so').read_bytes()).hexdigest(),
    fullCallerArenaIndependentModelEquality=True, orderedCallbackIndependentModelEquality=True,
    executedReadonlySegmentsMatchBuiltLibrary=True,
    decodedPhysicalGpuOrWholeGameClaimed=False, floatingStatusEqualityClaimed=False,
    physical16KiBKernelClaimed=False, capture=capture)
(BASE / 'validation-v2.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
print(json.dumps({k: v for k, v in result.items() if k not in ['cases', 'capture']}))
