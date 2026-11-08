import argparse
import ctypes
import json
import struct
from pathlib import Path
from unicorn import arm_const as ar

import effect_request066_oracle as oracle


LENGTHS = [0, 0x100000000, 0xffffffff00000000, 0x1234567887654321, 0xffffffffffffffff]


def run(build, output):
    if output.exists():
        raise ValueError('Preserve request dispatch and U64 metadata attempt')
    output.mkdir(parents=True)
    rows = []
    machines = {profile: oracle.Native(build / 'windows') if profile == 'windows' else oracle.Machine(profile,
        build / ('arm' if profile == 'original' else profile) / 'effect_resource.elf')
        for profile in ['original', 'arm', 'windows', 'a64']}
    try:
        for profile, machine in machines.items():
            if profile == 'windows':
                machine.library.effect_request_load066.argtypes = [ctypes.c_void_p]
                machine.library.effect_request_length066.argtypes = [ctypes.c_void_p]
                machine.library.effect_request_length066.restype = ctypes.c_ulonglong
            for selector in [3, 5, 255]:
                machine.prepare_case('rom:/data/Effect/ef00007.pef', selector)
                if hasattr(machine, 'cpu'):
                    machine.active = True
                    machine.invoke('request_load066', [machine.task])
                    machine.active = False
                else:
                    machine.library.effect_request_load066(machine.task)
                state = 2 if selector == 3 else 0
                row = {'profile': profile, 'selector': selector,
                    'afterLoad': oracle.logical(oracle.observe(machine, expected_state=state))}
                provider = machine.task + machine.request_layout['embedded']
                length_at = provider + machine.request_layout['dataBytes']
                observed_lengths = []
                for length in LENGTHS:
                    if hasattr(machine, 'cpu'):
                        machine.cpu.mem_write(length_at, struct.pack('<Q', length))
                    else:
                        ctypes.memmove(length_at, struct.pack('<Q', length), 8)
                    before = machine.read_bytes(machine.task, machine.request_layout['taskBytes'])
                    if hasattr(machine, 'cpu'):
                        machine.active = True
                        actual = machine.invoke('request_length066', [provider])
                        if not machine.a64:
                            actual |= machine.cpu.reg_read(ar.UC_ARM_REG_R1) << 32
                        machine.active = False
                    else:
                        actual = machine.library.effect_request_length066(provider)
                    if actual != length or machine.read_bytes(machine.task, machine.request_layout['taskBytes']) != before:
                        raise ValueError('Actual U64 getter ABI or caller-owned metadata preservation differs')
                    observed_lengths.append(actual)
                if hasattr(machine, 'cpu'):
                    machine.cpu.mem_write(length_at, bytes(8))
                else:
                    ctypes.memmove(length_at, bytes(8), 8)
                machine.delete_case()
                row.update(afterDelete=oracle.logical(oracle.observe(machine, True, expected_state=state)), lengths=observed_lengths)
                rows.append(row)
            (output / (profile + '.json')).write_text(json.dumps(rows[-3:], indent=2) + '\n')
        baseline = [{k: v for k, v in row.items() if k != 'profile'} for row in rows[:3]]
        for offset in [3, 6, 9]:
            if [{k: v for k, v in row.items() if k != 'profile'} for row in rows[offset:offset + 3]] != baseline:
                raise ValueError('Original/source dispatch/reset/no-action and metadata observations differ')
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'completedSets': len(rows), 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    report = {'status': 'four-target-selector3-reset-selector5-255-no-action-and-U64-getter', 'sets': len(rows),
        'originalConditions': oracle.reference.conditions.serializable(machines['original'].condition_outcomes),
        'metadataGetterCalls': len(rows) * len(LENGTHS), 'sourceCreditGranted': 0,
        'limits': ['Large U64 values are caller metadata only; no corresponding buffer is allocated or accessed.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
