import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import bootstrap_cells
from unicorn import arm_const as ar


class Machine(bootstrap_cells.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf)
        self.kernel_contracts = []
        self.ipc_attempts = []
        self.respond_initialize = respond_initialize

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        registers = [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(8)]
        if number == 2 and word == 0xef00002d:
            pointer = registers[1]
            port = bytes(cpu.mem_read(pointer, 5))
            if port != b'srv:\0' or self.kernel_contracts:
                raise ValueError('Undeclared service-manager ConnectToPort input')
            self.kernel_contracts.append({'operation': 'ConnectToPort', 'svc': 0x2d, 'pc': pc - 4,
                'port': 'srv:', 'actualPortPointer': pointer, 'outHandlePointer': registers[0],
                'suppliedStatus': 0, 'suppliedHandle': 0x6800001, 'physicalServiceExecuted': False})
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            cpu.reg_write(ar.UC_ARM_REG_R1, 0x6800001)
            return
        if number == 2 and word == 0xef000032:
            raw = bytes(cpu.mem_read(self.tls + 0x80, 0x100))
            header = int.from_bytes(raw[:4], 'little')
            words = struct.unpack('<64I', raw)
            row = {'operation': 'SendSyncRequest', 'svc': 0x32, 'pc': pc - 4,
                'handle': registers[0], 'tls': self.tls, 'commandBuffer': self.tls + 0x80,
                'header': header, 'requestWords': list(words), 'requestSHA256': hashlib.sha256(raw).hexdigest(),
                'responseSupplied': False}
            self.ipc_attempts.append(row)
            if self.respond_initialize and len(self.ipc_attempts) == 1 and registers[0] == 0x6800001 and words[:3] == (0x10002, 0x20, 0):
                cpu.mem_write(self.tls + 0x80, struct.pack('<II', 0x10040, 0))
                cpu.reg_write(ar.UC_ARM_REG_R0, 0)
                row.update(responseSupplied=True, suppliedStatus=0, suppliedResult=0,
                    physicalServiceExecuted=False, responseWords=[0x10040, 0])
                return
            raise ValueError('Stopped at actual service-manager IPC without supplying a response')
        super().interrupt(cpu, number, user)


def run(output, respond_initialize):
    output.mkdir(exist_ok=False)
    root = bootstrap_cells.ROOT
    elf = root / 'work/queue067-public-input-v1/full-v1/build/arm/effect_resource.elf'
    machine = Machine(elf, respond_initialize)
    machine.setup()
    machine.active = True
    try:
        result = machine.invoke('file_bootstrap068', [])
        outcome = {'status': 'original-bootstrap-returned-under-explicit-kernel-contract', 'incidentalR0': result}
    except Exception as error:
        outcome = {'status': 'preserved-original-service-manager-IPC-frontier', 'error': str(error)}
    machine.active = False
    report = {**outcome, 'entry': 0x1054f8, 'mode': 'ARM', 'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC),
        'kernelContracts': machine.kernel_contracts, 'ipcAttempts': machine.ipc_attempts,
        'lastAccess': machine.last_access, 'allowedWrites': machine.allowed_writes,
        'callEntries': machine.bootstrap_callers, 'tlsAccesses': machine.tls_accesses,
        'instructionWitnesses': list(machine.witnesses.values()),
        'producer': bootstrap_cells.frontier.pin(Path(__file__)),
        'baseProducers': [bootstrap_cells.frontier.pin(Path(bootstrap_cells.__file__)), bootstrap_cells.frontier.pin(Path(bootstrap_cells.frontier.__file__))],
        'buildInput': bootstrap_cells.frontier.pin(elf),
        'moduleSha256': hashlib.sha256(machine.reference.image).hexdigest(),
        'sourceCreditGranted': 0, 'physicalKernelServiceExecuted': False,
        'nativeGameQualified': False, 'originalInstructionBytesModified': False,
        'limits': ['Explicit synthetic kernel fixture supplies only declared ConnectToPort and optional first Initialize responses.',
            'Every unrecognized kernel/IPC request stops; no FS mount or manager singleton success is inferred.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: report[key] for key in ['status', 'pc', 'kernelContracts', 'ipcAttempts']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    parser.add_argument('--respond-initialize', action='store_true')
    args = parser.parse_args()
    run(args.output.resolve(), args.respond_initialize)
