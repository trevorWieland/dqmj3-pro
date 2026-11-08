import argparse
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import ipc_buffers
from unicorn import arm_const as ar


class Machine(ipc_buffers.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and word == 0xef000032 and len(self.ipc_attempts) == 4:
            words = struct.unpack('<13I', bytes(cpu.mem_read(self.tls + 0x80, 52)))
            handle = cpu.reg_read(ar.UC_ARM_REG_R0)
            if handle != 0x6800002 or words[:10] != (0x8030204, 0, 3, 1, 1, 2, 12, 1, 0, 0x4802) or words[11] != 0x30002:
                raise ValueError('Actual generated RomFS file open layout differs')
            binary_path = bytes(cpu.mem_read(words[12], 12))
            if binary_path != bytes(12):
                raise ValueError('Actual generated RomFS binary path differs')
            response = [0x8030042, 0, 0, 0x6800003]
            self.ipc_attempts.append({'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
                'requestInitializedWords': list(words), 'emptyPathByteInterpreted': False,
                'binaryPathHex': binary_path.hex(), 'responseWords': response,
                'suppliedStatus': 0, 'responseSupplied': True, 'physicalServiceExecuted': False})
            cpu.mem_write(self.tls + 0x80, struct.pack('<4I', *response))
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    service = ipc_buffers.fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['ipc_buffers.py', 'fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    report['limits'].append('Empty archive-path byte is not interpreted; binary path is twelve explicit zero bytes.')
    path.write_text(json.dumps(report, indent=2) + '\n')
