import argparse
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import fs_contract
from unicorn import arm_const as ar


OBSERVATIONS = []


class Machine(fs_contract.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and word == 0xef000032 and len(self.ipc_attempts) == 4:
            words = struct.unpack('<13I', bytes(cpu.mem_read(self.tls + 0x80, 52)))
            if words[0] != 0x8030204 or words[9] != 0x4802 or words[11] != 0x30002:
                raise ValueError('Actual bounded filesystem path command layout differs')
            OBSERVATIONS.append({'pc': pc - 4, 'handle': cpu.reg_read(ar.UC_ARM_REG_R0),
                'commandWords': list(words), 'buffers': [
                    {'descriptor': words[9], 'pointer': words[10], 'bytes': 1, 'hex': bytes(cpu.mem_read(words[10], 1)).hex()},
                    {'descriptor': words[11], 'pointer': words[12], 'bytes': 12, 'hex': bytes(cpu.mem_read(words[12], 12)).hex()}],
                'source': 'actual-original-initializer-caller-stack', 'kernelResponseSupplied': False})
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    fs_contract.RESPOND_PRIORITY = True
    service = fs_contract.fs_initialize_frontier.fs_service_frontier.service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['boundedPathBufferObservations'] = OBSERVATIONS
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__))]
    report['kernelContractProducers'] += [service.bootstrap_cells.frontier.pin(Path(__file__).parent / name) for name in ['fs_contract.py', 'fs_initialize_frontier.py', 'fs_service_frontier.py', 'service_handle.py', 'service_initialize.py']]
    report['limits'].append('Two exact command descriptors bound observer reads to one and twelve caller-stack bytes.')
    path.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(OBSERVATIONS))
