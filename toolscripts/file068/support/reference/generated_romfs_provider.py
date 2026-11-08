import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import romfs_mount_pool_v3
import romfs_fixture
from unicorn import arm_const as ar


class Machine(romfs_mount_pool_v3.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.generated_handles = {}
        self.generated_io = []

    def write(self, cpu, access, address, size, value, user):
        if self.active and address == 0x89a664 and size == 4:
            row = {'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size,
                'value': value, 'role': 'measured-RomFS-device-pool-service-pointer'}
            self.allowed_writes.append(row)
            self.last_access = row
            return
        super().write(cpu, access, address, size, value, user)

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        handle = cpu.reg_read(ar.UC_ARM_REG_R0)
        if number == 2 and word == 0xef000023 and handle in self.generated_handles:
            if self.generated_handles[handle] != 'closed-by-file-api':
                raise ValueError('Generated RomFS kernel handle closes out of order')
            self.generated_handles[handle] = 'retired'
            self.kernel_contracts.append({'operation': 'CloseHandle', 'pc': pc - 4, 'handle': handle,
                'suppliedStatus': 0, 'physicalServiceExecuted': False})
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        if number != 2 or word != 0xef000032 or len(self.ipc_attempts) < 7:
            return super().interrupt(cpu, number, user)
        header = int.from_bytes(bytes(cpu.mem_read(self.tls + 0x80, 4)), 'little')
        event = {'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
            'responseSupplied': True, 'suppliedStatus': 0, 'physicalServiceExecuted': False}
        if handle == 0x6800002 and header == 0x8030204:
            values = struct.unpack('<13I', bytes(cpu.mem_read(self.tls + 0x80, 52)))
            if values[:10] != (0x8030204, 0, 3, 1, 1, 2, 12, 1, 0, 0x4802) or values[11] != 0x30002 or bytes(cpu.mem_read(values[12], 12)) != bytes(12):
                raise ValueError('Generated RomFS repeated OpenFileDirectly input differs')
            if len(self.generated_handles) >= 4:
                raise ValueError('Generated RomFS finite handle budget exhausted')
            result_handle = 0x6800100 + len(self.generated_handles)
            self.generated_handles[result_handle] = 'live'
            response = [0x8030042, 0, 0, result_handle]
            event.update(requestInitializedWords=list(values), emptyPathByteInterpreted=False, newHandle=result_handle)
        elif handle in self.generated_handles and self.generated_handles[handle] == 'live':
            if header == 0x80200c2:
                values = struct.unpack('<6I', bytes(cpu.mem_read(self.tls + 0x80, 24)))
                offset = values[1] | (values[2] << 32)
                count, descriptor, destination = values[3:]
                if count > 16384 or descriptor != (count << 4) | 0xc:
                    raise ValueError('Generated RomFS read buffer descriptor exceeds finite contract')
                stack = self.stack <= destination <= destination + count <= self.stack + 0x10000
                live = any(row['record'][5] and row['pointer'] <= destination <= destination + count <= row['pointer'] + row['record'][1] for row in self.allocations())
                if not (stack or live):
                    raise ValueError('Generated RomFS read destination is not bounded live caller storage')
                data = romfs_fixture.image()[offset:offset + count]
                cpu.mem_write(destination, data)
                response = [0x8020080, 0, len(data)]
                event.update(requestInitializedWords=list(values), suppliedBytes=len(data), offset=offset,
                    suppliedDataSHA256=hashlib.sha256(data).hexdigest(), destination=destination)
            elif header == 0x8040000:
                response = [0x80400c0, 0, len(romfs_fixture.image()), 0]
                event['requestInitializedWords'] = [header]
            elif header == 0x8080000:
                response = [0x8080040, 0]
                self.generated_handles[handle] = 'closed-by-file-api'
                event['requestInitializedWords'] = [header]
            else:
                return super().interrupt(cpu, number, user)
        else:
            return super().interrupt(cpu, number, user)
        if len(self.generated_io) >= 64:
            raise ValueError('Generated RomFS finite IPC budget exhausted')
        event['responseWords'] = response
        self.generated_io.append(event)
        self.ipc_attempts.append(event)
        cpu.mem_write(self.tls + 0x80, struct.pack('<' + 'I' * len(response), *response))
        cpu.reg_write(ar.UC_ARM_REG_R0, 0)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    base = romfs_mount_pool_v3.romfs_mount_frontier.romfs_large
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
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['romfs_mount_pool_v3.py', 'romfs_mount_frontier.py', 'romfs_large.py', 'romfs_close.py', 'romfs_read.py', 'romfs_fixture.py', 'sdk_initialized_v2.py', 'sdk_initialized.py', 'romfs_handle.py', 'ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    report['limits'].append('Generated RomFS provider has four handles and64 requests maximum; all unknown IPC stops, every output destination is bounded live storage.')
    path.write_text(json.dumps(report, indent=2) + '\n')
