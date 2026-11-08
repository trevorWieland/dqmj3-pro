import hashlib
from pathlib import Path
import struct
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import destructor_reference


class Machine(destructor_reference.Machine):
    def code(self, cpu, address, size, user):
        if self.active and 0x44e000 <= address < address + size <= 0x44e07c:
            ar = destructor_reference.ar
            if size != 4 or cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
                raise ValueError('Actual SDK device destructor instruction mode differs')
            if any(max(start, 0x44e000) < min(end, 0x44e07c) for start, end, owner in self.reference.ranges):
                raise ValueError('SDK device destructor reference view overlaps frozen ownership')
            raw = bytes(cpu.mem_read(address, size))
            if raw != self.reference.image[address - 0x100000:address - 0x100000 + size]:
                raise ValueError('Actual SDK device destructor instruction bytes differ')
            if address == 0x44e000:
                pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
                words = struct.unpack('<76I', self.read_bytes(pointer, 304))
                self.device_destructor_entries = getattr(self, 'device_destructor_entries', [])
                self.device_destructor_entries.append({'pointer': pointer, 'words': list(words),
                    'children': [{'slot': index, 'pointer': value,
                        'destroyCallee': int.from_bytes(self.read_bytes(int.from_bytes(self.read_bytes(value, 4), 'little') + 0x30, 4), 'little')}
                        for index, value in enumerate(words[3:8]) if value]})
            destructor_reference.conditions.observe(cpu, address, size, 'ARM', self.condition_outcomes)
            self.pcs.add(address)
            self.witnesses[address] = {'address': address, 'bytes': size, 'mode': 'ARM',
                'owner': 'reference-only-SDK-device-destructor', 'entry': 0x44e000,
                'sha256': hashlib.sha256(raw).hexdigest()}
            return
        super().code(cpu, address, size, user)
