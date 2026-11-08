import argparse
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import romfs_read
from unicorn import arm_const as ar


SIZES = []


class Machine(romfs_read.Machine):
    def code(self, cpu, address, size, user):
        super().code(cpu, address, size, user)
        if self.active and address == 0x10c464:
            SIZES.append({'pc': address, 'actualRequiredRomFSWorkBytes': cpu.reg_read(ar.UC_ARM_REG_R0)})

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        handle = cpu.reg_read(ar.UC_ARM_REG_R0)
        if number == 2 and word == 0xef000032 and len(self.ipc_attempts) == 6:
            header = int.from_bytes(bytes(cpu.mem_read(self.tls + 0x80, 4)), 'little')
            if handle != 0x6800003 or header != 0x8080000:
                raise ValueError('Measured RomFS header file Close request differs')
            response = [0x8080040, 0]
            self.ipc_attempts.append({'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
                'requestInitializedWords': [header], 'responseWords': response,
                'suppliedStatus': 0, 'responseSupplied': True, 'physicalServiceExecuted': False})
            cpu.mem_write(self.tls + 0x80, struct.pack('<2I', *response))
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        if number == 2 and word == 0xef000023 and handle == 0x6800003:
            if len(self.ipc_attempts) != 7 or any(row['operation'] == 'CloseHandle' for row in self.kernel_contracts):
                raise ValueError('Generated RomFS header handle close order differs')
            self.kernel_contracts.append({'operation': 'CloseHandle', 'pc': pc - 4, 'handle': handle,
                'suppliedStatus': 0, 'physicalServiceExecuted': False})
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['actualSdkGlobalInitializer'] = romfs_read.sdk_initialized_v2.sdk_initialized.INITIALIZER
    report['requiredWorkSizeObservations'] = SIZES
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['romfs_read.py', 'romfs_fixture.py', 'sdk_initialized_v2.py', 'sdk_initialized.py', 'romfs_handle.py', 'ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    path.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(SIZES))
