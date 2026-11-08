import argparse
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import fs_service_frontier
from unicorn import arm_const as ar


RESPOND_INITIALIZE = False


class Machine(fs_service_frontier.Machine):
    def write(self, cpu, access, address, size, value, user):
        if self.active and address in [0x89a670, 0x89a65c, 0x89a680] and size == 4:
            row = {'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size,
                'value': value, 'role': 'explicit-filesystem-initialization-cell'}
            self.allowed_writes.append(row)
            self.last_access = row
            return
        super().write(cpu, access, address, size, value, user)

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if RESPOND_INITIALIZE and number == 2 and word == 0xef000032 and len(self.ipc_attempts) == 2:
            values = struct.unpack('<3I', bytes(cpu.mem_read(self.tls + 0x80, 12)))
            handle = cpu.reg_read(ar.UC_ARM_REG_R0)
            if handle != 0x6800002 or values != (0x8010042, 0xb0501c8, 0x20):
                raise ValueError('Actual filesystem Initialize request differs')
            response = [0x8010040, 0]
            self.ipc_attempts.append({'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
                'requestInitializedWords': list(values), 'processIdPlaceholderRead': False,
                'responseWords': response, 'suppliedStatus': 0, 'responseSupplied': True,
                'physicalServiceExecuted': False})
            cpu.mem_write(self.tls + 0x80, struct.pack('<2I', *response))
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    parser.add_argument('--respond-fs-initialize', action='store_true')
    args = parser.parse_args()
    RESPOND_INITIALIZE = args.respond_fs_initialize
    output = args.output.resolve()
    service = fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__)),
        service.bootstrap_cells.frontier.pin(Path(fs_service_frontier.__file__)),
        service.bootstrap_cells.frontier.pin(Path(fs_service_frontier.service_handle.__file__)),
        service.bootstrap_cells.frontier.pin(Path(fs_service_frontier.service_handle.service_initialize.__file__))]
    report['respondFilesystemInitialize'] = RESPOND_INITIALIZE
    report['limits'].append('Filesystem startup cell allowances remain four-byte exact addresses; process-ID placeholders remain uninterpreted.')
    path.write_text(json.dumps(report, indent=2) + '\n')
