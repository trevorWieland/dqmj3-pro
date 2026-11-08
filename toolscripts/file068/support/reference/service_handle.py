import argparse
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import service_initialize
from unicorn import arm_const as ar


class Machine(service_initialize.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and word == 0xef000032 and len(self.ipc_attempts) == 1:
            raw = bytes(cpu.mem_read(self.tls + 0x80, 20))
            values = struct.unpack('<5I', raw)
            handle = cpu.reg_read(ar.UC_ARM_REG_R0)
            if handle != 0x6800001 or values[0] != 0x50100 or raw[4:12] != b'fs:USER\0' or values[3:] != (7, 0):
                raise ValueError('Actual service-manager GetServiceHandle request differs')
            response = [0x50042, 0, 0, 0x6800002]
            self.ipc_attempts.append({'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
                'requestInitializedWords': list(values), 'serviceName': 'fs:USER',
                'responseWords': response, 'suppliedStatus': 0, 'responseSupplied': True,
                'physicalServiceExecuted': False})
            cpu.mem_write(self.tls + 0x80, struct.pack('<4I', *response))
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    service = service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__)), service.bootstrap_cells.frontier.pin(Path(service_initialize.__file__))]
    report['limits'].append('Only initialized FS:USER GetServiceHandle command words are interpreted.')
    path.write_text(json.dumps(report, indent=2) + '\n')
