import argparse
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import service_frontier
from unicorn import arm_const as ar


class Machine(service_frontier.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and word == 0xef000032 and not self.ipc_attempts:
            header, descriptor = struct.unpack('<II', bytes(cpu.mem_read(self.tls + 0x80, 8)))
            handle = cpu.reg_read(ar.UC_ARM_REG_R0)
            if handle != 0x6800001 or (header, descriptor) != (0x10002, 0x20):
                raise ValueError('Actual service-manager Initialize request differs')
            row = {'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
                'requestInitializedWords': [header, descriptor], 'processIdPlaceholderRead': False,
                'responseWords': [0x10040, 0], 'suppliedStatus': 0, 'responseSupplied': True,
                'physicalServiceExecuted': False}
            self.ipc_attempts.append(row)
            cpu.mem_write(self.tls + 0x80, struct.pack('<II', 0x10040, 0))
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    service_frontier.Machine = Machine
    service_frontier.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['kernelContractProducer'] = service_frontier.bootstrap_cells.frontier.pin(Path(__file__))
    report['limits'].append('RegisterClient process-id descriptor placeholder is not an initialized application scalar.')
    path.write_text(json.dumps(report, indent=2) + '\n')
