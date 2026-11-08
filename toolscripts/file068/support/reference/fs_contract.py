import argparse
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import fs_initialize_frontier
from unicorn import arm_const as ar


RESPOND_PRIORITY = False


class Machine(fs_initialize_frontier.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and word == 0xef000032 and len(self.ipc_attempts) == 2:
            values = struct.unpack('<3I', bytes(cpu.mem_read(self.tls + 0x80, 12)))
            handle = cpu.reg_read(ar.UC_ARM_REG_R0)
            if handle != 0x6800002 or values != (0x8610042, 0xb0501c8, 0x20):
                raise ValueError('Measured filesystem InitializeWithSdkVersion request differs')
            response = [0x8610040, 0]
        elif RESPOND_PRIORITY and number == 2 and word == 0xef000032 and len(self.ipc_attempts) == 3:
            values = struct.unpack('<2I', bytes(cpu.mem_read(self.tls + 0x80, 8)))
            handle = cpu.reg_read(ar.UC_ARM_REG_R0)
            if handle != 0x6800002 or values != (0x8620040, 0):
                raise ValueError('Measured filesystem SetPriority request differs')
            response = [0x8620040, 0]
        else:
            return super().interrupt(cpu, number, user)
        self.ipc_attempts.append({'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
            'requestInitializedWords': list(values), 'processIdPlaceholderRead': False,
            'responseWords': response, 'suppliedStatus': 0, 'responseSupplied': True,
            'physicalServiceExecuted': False})
        cpu.mem_write(self.tls + 0x80, struct.pack('<2I', *response))
        cpu.reg_write(ar.UC_ARM_REG_R0, 0)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    parser.add_argument('--respond-priority', action='store_true')
    args = parser.parse_args()
    RESPOND_PRIORITY = args.respond_priority
    output = args.output.resolve()
    service = fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    report['respondPriority'] = RESPOND_PRIORITY
    report['limits'].append('Only measured InitializeWithSdkVersion0x861 and optional SetPriority0x862 receive synthetic responses.')
    path.write_text(json.dumps(report, indent=2) + '\n')
