import argparse
import json
from pathlib import Path
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import service_handle
from unicorn import arm_const as ar


class Machine(service_handle.Machine):
    def write(self, cpu, access, address, size, value, user):
        if self.active and address == 0x89a658 and size == 4:
            row = {'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size,
                'value': value, 'role': 'filesystem-service-handle'}
            self.allowed_writes.append(row)
            self.last_access = row
            return
        super().write(cpu, access, address, size, value, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    service = service_handle.service_initialize.service_frontier
    service.Machine = Machine
    service.run(output, False)
    path = output / 'report.json'
    report = json.loads(path.read_text())
    report['kernelContractProducers'] = [service.bootstrap_cells.frontier.pin(Path(__file__)),
        service.bootstrap_cells.frontier.pin(Path(service_handle.__file__)),
        service.bootstrap_cells.frontier.pin(Path(service_handle.service_initialize.__file__))]
    report['limits'].append('Filesystem service handle global allowed as one exact four-byte cell, not a writable-directory grant.')
    path.write_text(json.dumps(report, indent=2) + '\n')
