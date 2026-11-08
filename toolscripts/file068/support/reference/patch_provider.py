import argparse
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import fs_priority
from unicorn import arm_const as ar


class Machine(fs_priority.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and word == 0xef000032 and len(self.ipc_attempts) > 7:
            header = int.from_bytes(bytes(cpu.mem_read(self.tls + 0x80, 4)), 'little')
            if header == 0x8030204 and cpu.reg_read(ar.UC_ARM_REG_R0) == 0x6800002:
                values = struct.unpack('<13I', bytes(cpu.mem_read(self.tls + 0x80, 52)))
                if values[:10] == (0x8030204, 0, 3, 1, 1, 2, 12, 1, 0, 0x4802) and values[11] == 0x30002 and bytes(cpu.mem_read(values[12], 12)) == struct.pack('<3I', 5, 0, 0):
                    if len(self.generated_handles) >= 4:
                        raise ValueError('Generated patch RomFS handle budget exhausted')
                    result_handle = 0x6800100 + len(self.generated_handles)
                    self.generated_handles[result_handle] = 'live'
                    response = [0x8030042, 0, 0, result_handle]
                    event = {'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': 0x6800002,
                        'requestInitializedWords': list(values), 'binaryPathHex': '050000000000000000000000',
                        'emptyPathByteInterpreted': False, 'newHandle': result_handle,
                        'responseWords': response, 'responseSupplied': True,
                        'physicalServiceExecuted': False, 'suppliedStatus': 0}
                    self.generated_io.append(event)
                    self.ipc_attempts.append(event)
                    cpu.mem_write(self.tls + 0x80, struct.pack('<4I', *response))
                    cpu.reg_write(ar.UC_ARM_REG_R0, 0)
                    return
        super().interrupt(cpu, number, user)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    fs_priority.run_component.run(Machine, args.output.resolve())
