import argparse
import json
from pathlib import Path
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import romfs_mount_frontier
from unicorn import arm_const as ar


class Machine(romfs_mount_frontier.Machine):
    def write(self, cpu, access, address, size, value, user):
        if self.active and (0x8e3370 <= address < address + size <= 0x8e33ac or 0x88d940 <= address < address + size <= 0x88ec40):
            row = {'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size,
                'value': value, 'role': 'measured-RomFS-device-fixed-pool'}
            self.allowed_writes.append(row)
            self.last_access = row
            return
        super().write(cpu, access, address, size, value, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    base = romfs_mount_frontier.romfs_large
    base.ELF = Path(__file__).parent / 'build-v2/arm/effect_resource.elf'
    base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['actualSdkGlobalInitializer'] = base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.INITIALIZER
    report['requiredWorkSizeObservations'] = base.romfs_close.SIZES
    report['buildInput'] = service.bootstrap_cells.frontier.pin(base.ELF.resolve())
    report['qualificationFixtureBuild'] = service.bootstrap_cells.frontier.pin(Path(__file__).parent / 'fixture-build-v2.json')
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['romfs_mount_frontier.py', 'romfs_large.py', 'romfs_close.py', 'romfs_read.py', 'romfs_fixture.py', 'sdk_initialized_v2.py', 'sdk_initialized.py', 'romfs_handle.py', 'ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    path.write_text(json.dumps(report, indent=2) + '\n')
