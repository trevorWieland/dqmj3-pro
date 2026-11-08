import hashlib
import json
import struct
import time
from pathlib import Path

import native_effect065_build as build
from native_effect065_shader_oracle import Machine, Native


ROOT = build.ROOT
WORK = ROOT / 'work/native-effect065'


def cases():
    for pattern in range(256):
        yield 'construct', pattern * 0x01010101, (255 - pattern) * 0x01010101, pattern
    for kind in range(256):
        if kind in [5, 6]:
            continue
        for secondary in [0, 1, 2, 127, 128, 255]:
            for orientation in [0, 255]:
                for flags in range(4):
                    pattern = (kind * 17 + secondary * 3 + orientation + flags * 5) & 255
                    high = (kind ^ secondary) & 255
                    key = kind | secondary << 8 | orientation << 16 | high << 24
                    upper = 0xfffffffc if pattern & 1 else 0x80000000
                    yield 'select', key, flags | upper, pattern
    for kind in [5, 6]:
        for orientation in range(256):
            for secondary in [0, 255]:
                for flags in range(4):
                    pattern = (kind + orientation * 7 + secondary + flags) & 255
                    key = kind | secondary << 8 | orientation << 16 | pattern << 24
                    yield 'select', key, flags | 0xfffffffc, pattern


def model_index(key, flags, table):
    kind, secondary, orientation = key & 255, (key >> 8) & 255, (key >> 16) & 255
    if kind in [5, 6]:
        if orientation == 0:
            return 24 if flags & 1 == 0 else 25
        if orientation == 1:
            return 26 if flags & 1 == 0 else 27
        if orientation == 2:
            return 28 if flags & 1 == 0 else 29
        return 0
    wanted = [kind, int(secondary != 0), (flags & 2) >> 1]
    return next((index for index, row in enumerate(table) if row == wanted), 0)


def main(out=None, folder=None):
    out = out or WORK / 'shader-corpus-v2'
    out.mkdir(exist_ok=False)
    started = time.monotonic()
    folder = folder or WORK / 'shader-build-v4'
    machines = [Machine('original'), Machine('arm', folder / 'arm/effect_shader.elf'),
                Native(folder / 'windows/effect_shader.dll'), Machine('a64', folder / 'a64/effect_shader.elf')]
    raw_table = bytes(machines[0].cpu.mem_read(0x8066ac, 288))
    if hashlib.sha256(raw_table).hexdigest() != '6797988ab9c6c3ec0d8b56926a321b8f733cdc10a95c967d5ddef85a0d281ee5':
        raise ValueError('Measured original shader selector data extent differs')
    table = [list(struct.unpack_from('<III', raw_table, offset)) for offset in range(0, len(raw_table), 12)]
    total = 0
    observations = hashlib.sha256()
    pad_changes = [0, 0, 0, 0]
    with (out / 'rows.jsonl').open('w', encoding='utf-8') as stream:
        for operation, key, flags, pattern in cases():
            results = [machine.call(operation, key, flags, pattern) for machine in machines]
            logical = [{name: value for name, value in row.items() if name != 'nativeABIExtraPaddingChanged'} for row in results]
            index = model_index(key, flags, table) if operation == 'select' else None
            expected = {'unknown': pattern * 0x01010101 if operation == 'select' else 0,
                'program': index, 'count': index + 1 if index is not None else 0,
                'ready': int(operation == 'select'), 'padding': (bytes([pattern]) * 3).hex(),
                'keys': [key, flags, *[pattern * 0x01010101] * 4]}
            if any(row != expected for row in logical):
                failure = {'case': total, 'operation': operation, 'key': key, 'flags': flags,
                    'pattern': pattern, 'expected': expected, 'observed': results}
                (out / 'failure.json').write_text(json.dumps(failure, indent=2) + '\n')
                raise ValueError('Original/source/model shader case mismatch')
            for at, result in enumerate(results):
                pad_changes[at] += bool(result['nativeABIExtraPaddingChanged'])
            row = {'case': total, 'operation': operation, 'key': key, 'flags': flags,
                'pattern': pattern, 'logical': expected,
                'nativeABIPaddingChanged': [row['nativeABIExtraPaddingChanged'] for row in results]}
            raw = json.dumps(row, separators=(',', ':')) + '\n'
            stream.write(raw)
            observations.update(raw.encode())
            total += 1
            if total % 2000 == 0:
                print(json.dumps({'casesPassed': total, 'elapsedSeconds': round(time.monotonic() - started, 3)}), flush=True)
    original = machines[0]
    owned = set(range(0x53a688, 0x53a6a0, 4)) | set(range(0x53e2c4, 0x53e3ec, 4))
    report = {'status': 'bounded-four-target-and-enumerated-original-table-model-shader-corpus',
        'cases': total, 'targets': ['actual-original-ARM', 'authored-source-ARM', 'native-Windows', 'high-address-AArch64'],
        'rows': build.pin(out / 'rows.jsonl'), 'rowsSha256': observations.hexdigest(),
        'elapsedSeconds': time.monotonic() - started, 'canonicalInstructionPCs': len(owned),
        'visitedCanonicalPCs': len(owned & original.pcs), 'unhitCanonicalPCs': sorted(owned - original.pcs),
        'nativeABIExtraPaddingChangesByTarget': pad_changes,
        'allOriginalLogicalBindingBytesComparedAfterTypedPointerIdentityTranslation': True,
        'borrowedPoolAndCommandBuffersPreserved': True, 'calleeSavedAndStackGuardsEnforcedOnMachineTargets': True,
        'sourceInputs': [build.pin(ROOT / 'src/native/wave065' / name) for name in ['effect_shader.c', 'effect_shader.h', 'effect_services.h']],
        'producer': build.pin(Path(__file__)), 'observer': build.pin(ROOT / 'toolscripts/native_effect065_shader_oracle.py'),
        'build': build.pin(folder / 'build.json'), 'shaderPoolStartupOrGPUExecutionQualified': False,
        'logicalReadyFlagNameInRowsDenotesCommandsBorrowed': True,
        'remainingCoupledEffectFamilyQualified': False, 'sourceCreditGranted': 0}
    (out / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'cases': total, 'visitedCanonicalPCs': report['visitedCanonicalPCs'],
        'unhitCanonicalPCs': len(report['unhitCanonicalPCs']), 'elapsedSeconds': report['elapsedSeconds']}))


if __name__ == '__main__':
    main()
