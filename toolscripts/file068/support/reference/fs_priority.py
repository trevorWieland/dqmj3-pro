import argparse
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import run_component
from unicorn import arm_const as ar


class Machine(run_component.romfs_constructor_view.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and word == 0xef000032:
            handle = cpu.reg_read(ar.UC_ARM_REG_R0)
            header = int.from_bytes(bytes(cpu.mem_read(self.tls + 0x80, 4)), 'little')
            if handle == 0x6800002 and header == 0x8630000:
                response = [0x8630080, 0, 0]
                self.ipc_attempts.append({'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': handle,
                    'requestInitializedWords': [header], 'responseWords': response,
                    'suppliedPriority': 0, 'responseSupplied': True, 'physicalServiceExecuted': False})
                cpu.mem_write(self.tls + 0x80, struct.pack('<3I', *response))
                cpu.reg_write(ar.UC_ARM_REG_R0, 0)
                return
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run_component.run(Machine, args.output.resolve())
