import argparse
import json
import struct
from pathlib import Path
from unicorn import arm_const as ar

import effect_request066_device_reference as device


def run(build, output):
    if output.exists():
        raise ValueError('Preserve actual game cache-miss request attempt')
    output.mkdir(parents=True)
    machine = device.Machine(build / 'arm/effect_resource.elf')
    machine.setup()
    try:
        machine.mount()
        machine.invoke('effect_request_cache_miss_prepare066', [1])
        manager = machine.base + 0xf000
        machine.cpu.mem_write(manager, struct.pack('<II', 0x66000001, 0))
        bindings = {'managerGlobal': 0x898154, 'preferredHeapGlobal': 0x890f30,
            'managerPointer': manager, 'userHeapPointer': machine.request_heap,
            'scope': 'Explicit application service input views; no application-manager constructor/bootstrap claim.'}
        machine.cpu.mem_write(0x898154, struct.pack('<I', manager))
        machine.cpu.mem_write(0x890f30, struct.pack('<I', machine.request_heap))
        returned = machine.execute()
    except Exception as error:
        report = {'status': 'preserved-genuine-game-cache-miss-stop', 'error': str(error),
            'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'cpsr': machine.cpu.reg_read(ar.UC_ARM_REG_CPSR),
            'events': machine.events, 'instructionWitnesses': sorted(machine.witnesses.values(), key=lambda row: row['address']),
            'sourceCreditGranted': 0}
        (output / 'failure.json').write_text(json.dumps(report, indent=2) + '\n')
        raise
    report = {'status': 'actual-original-game-cache-miss-file-task-XBB-preview-resource-returned',
        'rawReturnedR0': returned, 'fixtureRawHex': machine.read_bytes(machine.cached_state, machine.cached_layout['bytes']).hex(),
        'applicationServiceBindings': bindings, 'instructionWitnesses': sorted(machine.witnesses.values(), key=lambda row: row['address']),
        'allocations': machine.allocations(), 'sourceCreditGranted': 0, 'wholeGameStartupQualified': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'rawReturnedR0': returned, 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
