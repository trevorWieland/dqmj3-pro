import warm_provider
from unicorn import arm_const as ar


class Machine(warm_provider.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.thread_history = []
        self.manager_equal_branches = []

    def code(self, cpu, address, size, user):
        if self.active and address == 0x105530:
            self.manager_equal_branches.append({'old': cpu.reg_read(ar.UC_ARM_REG_R1),
                'new': cpu.reg_read(ar.UC_ARM_REG_R5), 'equal': bool(cpu.reg_read(ar.UC_ARM_REG_CPSR) & 0x40000000)})
        super().code(cpu, address, size, user)

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(cpu.mem_read(pc - 4, 4), 'little')
        if number == 2 and word == 0xef000008:
            values = [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(8)]
            if self.thread_contract is None:
                super().interrupt(cpu, number, user)
                self.thread_history.append(dict(self.thread_contract))
                return
            priority, entry, argument, stack, processor = values[:5]
            if len(self.thread_history) != 1 or priority != 47 or entry != 0x12d640 or argument != stack or stack % 8 or processor != 0xfffffffe:
                raise ValueError('Second worker CreateThread differs from the exact first contract')
            live = [row for row in self.allocations() if row['record'][5] and row['record'][0] == 4136
                and row['pointer'] <= stack < row['pointer'] + row['record'][1]]
            if len(live) != 1 or stack == self.thread_contract['stack']:
                raise ValueError('Second worker stack lacks distinct live target backing')
            contract = {'operation': 'CreateThread', 'handle': 0x6700401, 'entry': entry, 'argument': argument,
                'stack': stack, 'priority': priority, 'processor': processor, 'state': 'runnable-not-yet-scheduled',
                'sourceCreditGranted': 0, 'physicalThreadCreated': False}
            self.thread_history.append(contract)
            self.kernel_frontiers.append({'interrupt': number, 'pc': pc, 'registers': values,
                'tls': self.tls, 'cpsr': cpu.reg_read(ar.UC_ARM_REG_CPSR), 'secondThreadContract': contract})
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            cpu.reg_write(ar.UC_ARM_REG_R1, contract['handle'])
            return
        super().interrupt(cpu, number, user)

    def invoke_joining_old(self):
        self.waiting_parent = None
        self.active = True
        try:
            self.invoke('file_bootstrap068', [])
        except ValueError as error:
            if str(error) != 'Texture actual caller return/integer/float ABI differs' or self.waiting_parent is None:
                raise
        self.active = False
        if self.waiting_parent is None or self.worker_context is None or len(self.thread_history) != 2:
            raise ValueError('Warm replacement failed to wait for its actual old parked worker')
        parent_tls = self.tls
        self.cpu.context_restore(self.worker_context)
        self.tls = self.cpu.reg_read(ar.UC_ARM_REG_C13_C0_3)
        self.worker_active, self.active = True, True
        self.cpu.emu_start(self.cpu.reg_read(ar.UC_ARM_REG_PC), 0, count=1000000)
        self.worker_active, self.active = False, False
        if not self.thread_exited:
            raise ValueError('Old actual worker did not exit during warm replacement')
        self.cpu.context_restore(self.waiting_parent)
        self.tls = parent_tls
        self.cpu.reg_write(ar.UC_ARM_REG_R0, 0)
        self.returned, self.active = False, True
        self.cpu.emu_start(self.cpu.reg_read(ar.UC_ARM_REG_PC), self.stop + 4, count=1000000)
        self.active = False
        if not self.returned or not self.thread_closed or self.cpu.reg_read(ar.UC_ARM_REG_SP) != self.stack + 0xffe0:
            raise ValueError('Warm replacement failed to return after closing its old worker')
        for index in range(4, 12):
            if self.cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) != 0x65000000 + index:
                raise ValueError('Warm replacement changed saved integer state')
        for index in range(8, 16):
            if self.cpu.reg_read(getattr(ar, 'UC_ARM_REG_D' + str(index))) != 0x3fe0000000000000 + index:
                raise ValueError('Warm replacement changed saved floating state')

    def select_and_schedule_new(self):
        if not self.thread_exited or not self.thread_closed:
            raise ValueError('New worker selected before old worker joined and closed')
        self.thread_contract = self.thread_history[1]
        self.thread_exited = False
        self.thread_closed = False
        self.waiting_parent = None
        self.worker_context = None
        parent = self.cpu.context_save()
        parent_tls = self.tls
        worker_tls = 0x7002000
        self.cpu.mem_map(worker_tls, 4096)
        self.tls = worker_tls
        self.cpu.reg_write(ar.UC_ARM_REG_C13_C0_3, worker_tls)
        self.cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x10)
        self.cpu.reg_write(ar.UC_ARM_REG_R0, self.thread_contract['argument'])
        self.cpu.reg_write(ar.UC_ARM_REG_SP, self.thread_contract['stack'])
        self.cpu.reg_write(ar.UC_ARM_REG_LR, 0)
        before = len(self.worker_pauses)
        self.worker_active, self.active = True, True
        self.cpu.emu_start(self.thread_contract['entry'], 0, count=1000000)
        self.worker_context = self.cpu.context_save()
        self.worker_active, self.active = False, False
        if len(self.worker_pauses) != before + 1:
            raise ValueError('New actual worker failed to reach its idle yield')
        self.cpu.context_restore(parent)
        self.tls = parent_tls
