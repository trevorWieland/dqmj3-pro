import struct


import device_destructor_reference


class Machine(device_destructor_reference.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.pool_observations = []

    def code(self, cpu, address, size, user):
        if self.active and address in [0x44dfac, 0x44dfc4, 0x44dff0]:
            ar = device_destructor_reference.destructor_reference.ar
            pool = int.from_bytes(self.read_bytes(0x89a664, 4), 'little')
            receiver = cpu.reg_read(ar.UC_ARM_REG_R0 if address == 0x44dfac else ar.UC_ARM_REG_R5)
            words = struct.unpack('<16I', self.read_bytes(pool, 64))
            self.pool_observations.append({'pc': address, 'receiver': receiver, 'pool': pool,
                'poolWords': list(words), 'freeHead': words[9], 'liveCount': words[11],
                'receiverWords': list(struct.unpack('<76I', self.read_bytes(receiver, 304))),
                'callerReturn': cpu.reg_read(ar.UC_ARM_REG_LR)})
        super().code(cpu, address, size, user)
