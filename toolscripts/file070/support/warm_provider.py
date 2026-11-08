from pathlib import Path
import struct
import sys


ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'work/native-file069-device-destructor-v1'))
import observe_v3
from unicorn import arm_const as ar


class Machine(observe_v3.Machine):
    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(cpu.mem_read(pc - 4, 4), 'little')
        if number == 2 and word == 0xef000032 and cpu.reg_read(ar.UC_ARM_REG_R0) == 0x6800002 and len(self.generated_handles) >= 4:
            values = struct.unpack('<13I', bytes(cpu.mem_read(self.tls + 0x80, 52)))
            if values[0] == 0x8030204:
                selector = bytes(cpu.mem_read(values[12], 12))
                if values[:10] != (0x8030204, 0, 3, 1, 1, 2, 12, 1, 0, 0x4802) or values[11] != 0x30002 or selector not in [bytes(12), struct.pack('<3I', 5, 0, 0)]:
                    raise ValueError('Warm finite OpenFileDirectly protocol differs')
                if len(self.generated_handles) >= 12:
                    raise ValueError('Warm generated-provider finite12-handle budget exhausted')
                handle = 0x6800100 + len(self.generated_handles)
                self.generated_handles[handle] = 'live'
                response = [0x8030042, 0, 0, handle]
                event = {'operation': 'SendSyncRequest', 'pc': pc - 4, 'handle': 0x6800002,
                    'requestInitializedWords': list(values), 'binaryPathHex': selector.hex(),
                    'emptyPathByteInterpreted': False, 'newHandle': handle, 'responseWords': response,
                    'responseSupplied': True, 'suppliedStatus': 0, 'physicalServiceExecuted': False,
                    'fixtureDomain': 'Same generated empty80B RomFS; extended finite12 total handles for warm startup.'}
                self.generated_io.append(event)
                self.ipc_attempts.append(event)
                cpu.mem_write(self.tls + 0x80, struct.pack('<4I', *response))
                cpu.reg_write(ar.UC_ARM_REG_R0, 0)
                return
        super().interrupt(cpu, number, user)
