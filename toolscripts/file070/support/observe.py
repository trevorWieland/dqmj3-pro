from pathlib import Path
import struct
import sys


ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'work/native-file068-successor-v2'))
import qualifier_observer
from unicorn import arm_const as ar


class Machine(qualifier_observer.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.device_contracts = []
        self.stream_contracts = []
        self.embedded_contracts = []
        self.contract_events = []

    def registers(self):
        return {'sp': self.cpu.reg_read(ar.UC_ARM_REG_SP), 'lr': self.cpu.reg_read(ar.UC_ARM_REG_LR),
            'r0': self.cpu.reg_read(ar.UC_ARM_REG_R0), 'cpsr': self.cpu.reg_read(ar.UC_ARM_REG_CPSR),
            'savedInteger': [self.cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(4, 12)],
            'savedFloat': [self.cpu.reg_read(getattr(ar, 'UC_ARM_REG_D' + str(index))) for index in range(8, 16)]}

    def words(self, pointer, count):
        return list(struct.unpack('<' + 'I' * count, self.read_bytes(pointer, 4 * count)))

    def code(self, cpu, address, size, user):
        if self.active:
            if address == 0x44e000:
                pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
                self.device_contracts.append({'receiver': pointer, 'entry': self.registers(),
                    'before': self.words(pointer, 76), 'children': []})
                self.contract_events.append({'operation': 'device-enter', 'receiver': pointer})
            elif address == 0x44e034:
                pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
                callee = cpu.reg_read(ar.UC_ARM_REG_R1)
                slot = cpu.reg_read(ar.UC_ARM_REG_R5)
                self.device_contracts[-1]['children'].append({'slot': slot, 'receiver': pointer, 'callee': callee})
                self.contract_events.append({'operation': 'child-release', 'slot': slot, 'receiver': pointer, 'callee': callee})
            elif address == 0x44dfc4 and self.device_contracts:
                row = self.device_contracts[-1]
                assert 'return' not in row
                row.update(returned=self.registers(), after=self.words(row['receiver'], 76))
                self.contract_events.append({'operation': 'device-return', 'receiver': row['receiver']})
            elif address == 0x44dc58:
                pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
                words = self.words(pointer, 2)
                pool = int.from_bytes(self.reference.image[0x44dcc4 - 0x100000:0x44dcc8 - 0x100000], 'little')
                self.stream_contracts.append({'receiver': pointer, 'entry': self.registers(), 'before': words,
                    'virtualDestructor': int.from_bytes(self.read_bytes(words[0] + 0x34, 4), 'little'),
                    'pool': pool, 'poolBefore': self.words(pool, 16)})
            elif address == 0x44dc90:
                row = self.stream_contracts[-1]
                row['afterVirtualDestructor'] = self.words(row['receiver'], 2)
            elif address == 0x44e038 and self.stream_contracts:
                row = self.stream_contracts[-1]
                row.update(returned=self.registers(), after=self.words(row['receiver'], 2),
                    poolAfter=self.words(row['pool'], 16))
            elif address == 0x170c3c:
                pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
                self.embedded_contracts.append({'receiver': pointer, 'entry': self.registers(),
                    'before': self.words(pointer, 15)})
                self.contract_events.append({'operation': 'embedded-destructor', 'receiver': pointer})
            elif address in [0x44e060, 0x44e074] and self.embedded_contracts:
                row = self.embedded_contracts[-1]
                row.update(returned=self.registers(), after=self.words(row['receiver'], 15))
        super().code(cpu, address, size, user)
