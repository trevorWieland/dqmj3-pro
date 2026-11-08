import observe_v2


class Machine(observe_v2.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.leaf_abi = []
        self.getter_abi = []
        self.ipc_abi = []

    def schedule_worker(self):
        self.leaf_abi = []
        self.getter_abi = []
        self.ipc_abi = []
        return super().schedule_worker()

    def code(self, cpu, address, size, user):
        if self.active:
            ar = observe_v2.observe.ar
            if address in [0x44de20, 0x6ceb3c, 0x44e6d8]:
                records = self.leaf_abi if address == 0x44de20 else self.getter_abi if address == 0x6ceb3c else self.ipc_abi
                pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
                records.append({'receiver': pointer, 'entry': self.registers(),
                    'argumentWords': self.words(pointer, 1 if address == 0x44e6d8 else 2)})
            elif address in [0x44dc90, 0x44dc74, 0x44dc80]:
                records = self.leaf_abi if address == 0x44dc90 else self.getter_abi if address == 0x44dc74 else self.ipc_abi
                if records:
                    records[-1]['returned'] = self.registers()
        super().code(cpu, address, size, user)
