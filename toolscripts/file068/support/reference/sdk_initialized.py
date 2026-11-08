import argparse
import json
from pathlib import Path
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import romfs_handle
from unicorn import arm_const as ar


INITIALIZER = []


class Machine(romfs_handle.Machine):
    def write(self, cpu, access, address, size, value, user):
        if self.active and (0x8e33ac <= address < address + size <= 0x8e3670 or 0x88d6c0 <= address < address + size <= 0x88d940):
            row = {'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size,
                'value': value, 'role': 'measured-sdk-filesystem-pool-registry-state'}
            self.allowed_writes.append(row)
            self.last_access = row
            return
        super().write(cpu, access, address, size, value, user)

    def setup(self):
        result = super().setup()
        self.functions['sdk_file_initialize068'] = 0x7087fc
        before = bytes(self.cpu.mem_read(0x8e33ac, 0xc4))
        self.active = True
        try:
            self.invoke('sdk_file_initialize068', [])
        finally:
            self.active = False
        INITIALIZER.append({'entry': 0x7087fc, 'mode': 'ARM', 'returnedToActualCaller': True,
            'stateBeforeHex': before.hex(), 'stateAfterHex': bytes(self.cpu.mem_read(0x8e33ac, 0xc4)).hex(),
            'lockPointer': 0x8e3418, 'lockValueAfter': int.from_bytes(bytes(self.cpu.mem_read(0x8e3418, 4)), 'little'),
            'dependency': self.reference.dependency(0x7087fc), 'globalBytesManuallySeeded': False})
        return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['actualSdkGlobalInitializer'] = INITIALIZER
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['romfs_handle.py', 'ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    report['limits'].append('SDK registry and fixed-pool storage initialize only by executing original0x7087fc; this supplies no SDK source credit.')
    path.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(INITIALIZER))
