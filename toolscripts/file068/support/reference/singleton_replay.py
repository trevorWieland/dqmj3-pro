import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import singleton_bootstrap
from unicorn import arm_const as ar


INSTANCES = []


class Machine(singleton_bootstrap.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        INSTANCES.append(self)

    def setup(self):
        result = super().setup()
        self.cold_state = {'managerSingleton': int.from_bytes(self.read_bytes(0x898154, 4), 'little'),
            'filesystemState': list(struct.unpack('<3I', self.read_bytes(0x89a4e8, 12))),
            'registrySHA256': hashlib.sha256(self.read_bytes(0x8e3470, 512)).hexdigest()}
        if self.cold_state['managerSingleton'] or any(self.cold_state['filesystemState']) or self.read_bytes(0x8e3470, 512) != bytes(512):
            raise ValueError('Original filesystem/singleton bootstrap input is not cold')
        return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    report = singleton_bootstrap.patch_provider.fs_priority.run_component.run(Machine, output)
    machine = INSTANCES[0]
    registry = []
    for index in range(32):
        words = struct.unpack('<4I', machine.read_bytes(0x8e3470 + 16 * index, 16))
        if any(words):
            key = words[0] | (words[1] << 32)
            name = key.to_bytes(8, 'big').lstrip(b'\0').decode('ascii')
            registry.append({'index': index, 'scheme': name, 'schemeKey': key, 'devicePointer': words[2], 'flags': words[3]})
    manager = report['managerSingleton']
    if report['status'] != 'original-bootstrap-returned-under-explicit-kernel-contract' or not manager:
        raise ValueError('Actual original singleton bootstrap failed to return and publish a manager')
    if [row['scheme'] for row in registry] != ['rom', 'patch']:
        raise ValueError('Actual original RomFS/patch namespace registrations differ')
    operations, worker = struct.unpack('<2I', machine.read_bytes(manager, 8))
    if not worker or machine.thread_contract is None:
        raise ValueError('Actual original singleton manager lacks its runnable worker')
    report.update(status='actual-original-cold-filesystem-and-singleton-bootstrap-returned',
        coldState=machine.cold_state, registry=registry, managerOperations=operations,
        workerPointer=worker, workerScheduled=False, threadContract=machine.thread_contract,
        actualKernelFrontiers=machine.kernel_frontiers,
        liveAllocations=[{'pointer': row['pointer'], 'logicalBytes': row['record'][0],
            'physicalBytes': row['record'][1], 'alignment': row['record'][2], 'live': bool(row['record'][5])} for row in machine.allocations()])
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: report[key] for key in ['status', 'registry', 'managerSingleton', 'workerPointer', 'workerScheduled', 'threadContract']}))
