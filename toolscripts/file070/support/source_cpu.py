import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import effect_queue067_source_cpu as predecessor
from unicorn import arm_const as arm, arm64_const as a64


class Machine(predecessor.Machine):
    def __init__(self, profile, elf):
        super().__init__(profile, elf)
        self.branch_pause = None
        self.branch_ignore = None
        self.branch_contexts = {}
        self.branch_stacks = {0: self.worker_stack, 1: self.worker_stack + 0x20000}
        self.cpu.mem_map(self.branch_stacks[1], 0x10000)
        for name, row in self.graph['functions'].items():
            if name.startswith(('effect_file_', 'effect_branch_')):
                self.functions[name] = row['address']

    def argument(self):
        return self.cpu.reg_read(a64.UC_ARM64_REG_X0 if self.a64 else arm.UC_ARM_REG_R0)

    def code(self, cpu, address, size, user):
        super().code(cpu, address, size, user)
        if self.active and hasattr(self, 'branch_pause'):
            for label, name in [('sleep', 'effect_branch_fixture_sleep_yield070'), ('join', 'effect_branch_fixture_join_yield070')]:
                if address == self.functions.get(name):
                    token = (label, self.argument())
                    if self.branch_ignore == token:
                        self.branch_ignore = None
                    else:
                        self.branch_pause = token
                        cpu.emu_stop()

    def write(self, cpu, access, address, size, value, user):
        if self.active:
            for name in ['file_fixture068', 'teardown_fixture068', 'branch_fixture070']:
                row = self.graph['objects'].get(name)
                if row and row['address'] <= address < address + size <= row['address'] + row['bytes']:
                    return
        super().write(cpu, access, address, size, value, user)

    def schedule(self, index):
        parent = self.cpu.context_save()
        self.invoke('effect_branch_fixture_context070', [index])
        self.stack = self.branch_stacks[index]
        self.branch_pause, self.active = None, True
        try:
            self.invoke('effect_branch_fixture_thread_entry070', [index])
        except ValueError as error:
            if str(error) != 'Texture actual caller return/integer/float ABI differs' or self.branch_pause != ('sleep', index):
                raise
        if self.branch_pause != ('sleep', index):
            raise ValueError('Compiled source worker failed to reach its actual indexed sleep marker')
        self.branch_contexts[index] = self.cpu.context_save()
        self.active, self.stack = False, self.parent_stack
        self.invoke('effect_branch_fixture_context070', [2])
        self.cpu.context_restore(parent)

    def complete_worker(self, index):
        if index not in self.branch_contexts:
            raise ValueError('Source join lacks a genuinely paused compiled worker context')
        self.active = False
        self.invoke('effect_branch_fixture_context070', [index])
        self.stack = self.branch_stacks[index]
        self.cpu.context_restore(self.branch_contexts[index])
        self.branch_ignore, self.branch_pause = ('sleep', index), None
        self.active, self.returned = True, False
        self.cpu.emu_start(self.pc(), self.stop + 4, count=2000000)
        if not self.returned:
            raise ValueError('Source worker did not genuinely return from its compiled entry')
        self.active, self.stack = False, self.parent_stack
        self.invoke('effect_branch_fixture_context070', [2])

    def action(self, name):
        self.branch_pause, self.active = None, True
        try:
            self.invoke(name, [])
        except ValueError as error:
            if str(error) != 'Texture actual caller return/integer/float ABI differs' or not self.branch_pause:
                raise
        while self.branch_pause and self.branch_pause[0] == 'join':
            token = self.branch_pause
            parent = self.cpu.context_save()
            self.complete_worker(token[1])
            self.cpu.context_restore(parent)
            self.branch_ignore, self.branch_pause = token, None
            self.returned, self.active = False, True
            self.cpu.emu_start(self.pc(), self.stop + 4, count=2000000)
        self.active = False
        if not self.returned:
            raise ValueError('Compiled source action did not restore its genuine caller')
        registers = a64 if self.a64 else arm
        sp = a64.UC_ARM64_REG_SP if self.a64 else arm.UC_ARM_REG_SP
        integers = [(getattr(registers, ('UC_ARM64_REG_X' if self.a64 else 'UC_ARM_REG_R') + str(index)),
            (0x6500000000000000 if self.a64 else 0x65000000) + index) for index in (range(19, 30) if self.a64 else range(4, 12))]
        floats = [(getattr(registers, ('UC_ARM64_REG_D' if self.a64 else 'UC_ARM_REG_D') + str(index)),
            0x3fe0000000000000 + index) for index in range(8, 16)]
        if self.cpu.reg_read(sp) != self.parent_stack + 0xffe0 or any(self.cpu.reg_read(reg) != value for reg, value in integers + floats):
            raise ValueError('Source branch action changed caller stack/integer/floating state')
