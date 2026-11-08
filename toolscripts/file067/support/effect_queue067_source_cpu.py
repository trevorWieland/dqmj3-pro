import argparse
import json
import struct
from pathlib import Path
from unicorn import arm_const as arm, arm64_const as a64

import effect_request066_session as request
from effect_queue067_native import LAYOUT, FIXTURE


class Machine(request.Machine):
    def __init__(self, profile, elf):
        super().__init__(profile, elf)
        self.qstate = self.invoke('effect_queue_fixture_state067', [])
        self.q = self.layout_at('effect_queue_layout067', LAYOUT)
        self.f = self.layout_at('effect_queue_fixture_layout067', FIXTURE)
        self.parent_stack = self.stack
        self.worker_stack = self.stack + 0x100000
        self.cpu.mem_map(self.worker_stack, 0x10000)
        self.phase = None
        self.pause = None
        self.ignore_marker = False
        self.worker_context = None

    def layout_at(self, symbol, names):
        row = self.graph['objects'][symbol]
        return dict(zip(names, struct.unpack('<' + 'I' * len(names), self.read_bytes(row['address'], row['bytes'])), strict=True))

    def code(self, cpu, address, size, user):
        super().code(cpu, address, size, user)
        if hasattr(self, 'phase') and self.phase:
            marker = 'effect_queue_fixture_join_yield067' if self.phase == 'join' else 'effect_queue_fixture_yield067'
            if address == self.functions[marker]:
                if self.ignore_marker:
                    self.ignore_marker = False
                else:
                    self.pause = marker
                    cpu.emu_stop()

    def write(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'qstate') and self.qstate <= address < address + size <= self.qstate + self.f['bytes']:
            return
        super().write(cpu, access, address, size, value, user)

    def prepare_session(self, worker_fail=False):
        self.setup()
        self.owner_prepare(request.device_reference.generated_file())
        self.invoke('effect_request_fixture_bind066', [])
        suffix = self.base + 0xf400
        self.cpu.mem_write(suffix, '/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.invoke('effect_request_device_prepare066', [self.image, 2048, suffix])
        self.device_bytes = self.graph['objects']['request_device066']['bytes']
        self.invoke('effect_request_source_files_bind066', [])
        self.invoke('effect_queue_fixture_initialize067', [0, 0])
        self.invoke('effect_request_trace_files067', [])
        self.manager = self.invoke('effect_queue_fixture_manager_allocate067', [])
        if worker_fail:
            self.cpu.mem_write(self.state + self.layout['failAt'], struct.pack('<I', 2))
        self.active = True
        result = self.invoke('effect_queue_manager_construct067', [self.manager])
        self.active = False
        if result != self.manager:
            raise ValueError('Source CPU manager constructor storage identity differs')
        self.worker = self.pointer(self.manager + self.q['managerWorker'])

    def pointer(self, at):
        return int.from_bytes(self.read_bytes(at, self.layout['pointerBytes']), 'little')

    def word(self, at):
        return int.from_bytes(self.read_bytes(at, 4), 'little')

    def enqueue(self, prefix='rom'):
        path = self.scratch[0]
        self.cpu.mem_write(path, (prefix + ':/data/Effect/ef00007.pef').encode('utf-16le') + b'\0\0')
        self.active = True
        task = self.invoke('effect_queue_request_async067', [self.manager, path, 5, self.request_heap, 128])
        ready = self.invoke('request_ready066', [task]) if task else 0
        self.active = False
        if ready:
            raise ValueError('Source CPU async enqueue completed before worker scheduling')
        return task

    def step(self):
        parent = self.cpu.context_save()
        self.invoke('effect_queue_fixture_context067', [1])
        self.stack = self.worker_stack
        self.phase, self.pause, self.active = 'worker', None, True
        if self.worker_context is None:
            try:
                self.invoke('effect_queue_fixture_thread_entry067', [self.qstate])
            except ValueError as error:
                if str(error) != 'Texture actual caller return/integer/float ABI differs' or not self.pause:
                    raise
        else:
            self.cpu.context_restore(self.worker_context)
            self.ignore_marker = True
            self.cpu.emu_start(self.pc(), self.stop + 4, count=2000000)
        self.worker_context = self.cpu.context_save()
        self.phase, self.active, self.stack = None, False, self.parent_stack
        if self.pause != 'effect_queue_fixture_yield067':
            raise ValueError('Source CPU worker failed to reach real compiled provider yield')
        self.invoke('effect_queue_fixture_context067', [0])
        self.cpu.context_restore(parent)

    def pc(self):
        return self.cpu.reg_read(a64.UC_ARM64_REG_PC if self.a64 else arm.UC_ARM_REG_PC)

    def destroy(self):
        self.phase, self.pause, self.active = 'join', None, True
        try:
            self.invoke('effect_queue_manager_destroy067', [self.manager])
        except ValueError as error:
            if str(error) != 'Texture actual caller return/integer/float ABI differs' or not self.pause:
                raise
        parent = self.cpu.context_save()
        if self.pause != 'effect_queue_fixture_join_yield067' or self.worker_context is None:
            raise ValueError('Source CPU teardown did not actually wait for its live worker')
        self.phase, self.active = None, False
        self.invoke('effect_queue_fixture_context067', [1])
        self.stack = self.worker_stack
        self.cpu.context_restore(self.worker_context)
        self.ignore_marker, self.active = True, True
        self.returned = False
        self.cpu.emu_start(self.pc(), self.stop + 4, count=2000000)
        if not self.returned or not self.word(self.qstate + self.f['exited']):
            raise ValueError('Source CPU worker entry did not genuinely return before join')
        self.active, self.stack = False, self.parent_stack
        self.invoke('effect_queue_fixture_context067', [0])
        self.cpu.context_restore(parent)
        self.phase, self.ignore_marker, self.active, self.returned = 'join', True, True, False
        self.cpu.emu_start(self.pc(), self.stop + 4, count=2000000)
        self.phase, self.active = None, False
        if not self.returned:
            raise ValueError('Source CPU joined destructor did not return')
        registers = a64 if self.a64 else arm
        sp = a64.UC_ARM64_REG_SP if self.a64 else arm.UC_ARM_REG_SP
        integer = [(getattr(registers, ('UC_ARM64_REG_X' if self.a64 else 'UC_ARM_REG_R') + str(index)),
            (0x6500000000000000 if self.a64 else 0x65000000) + index) for index in (range(19, 30) if self.a64 else range(4, 12))]
        floating = [(getattr(registers, ('UC_ARM64_REG_D' if self.a64 else 'UC_ARM_REG_D') + str(index)),
            0x3fe0000000000000 + index) for index in range(8, 16)]
        if self.cpu.reg_read(sp) != self.parent_stack + 0xffe0 or any(self.cpu.reg_read(reg) != value for reg, value in integer + floating):
            raise ValueError('Source CPU joined destructor changed actual caller stack/integer/floating ABI')


def run(build, output):
    if output.exists():
        raise ValueError('Preserve authored CPU thread/queue attempt')
    output.mkdir(parents=True)
    rows = []
    for profile in ['arm', 'a64']:
        machine = Machine(profile, build / profile / 'effect_resource.elf')
        try:
            if hasattr(machine, 'reference') or machine.original:
                raise ValueError('Source queue instantiated original executable image')
            machine.prepare_session()
            task = machine.enqueue()
            machine.step()
            machine.active = True
            ready = machine.invoke('request_ready066', [task])
            data = machine.invoke('request_bytes066', [task])
            if ready != 1 or machine.read_bytes(data, 2048) != request.device_reference.generated_file():
                raise ValueError('Source CPU worker did not publish genuine file data')
            machine.invoke('request_delete066', [task])
            machine.active = False
            machine.destroy()
            count = machine.word(machine.state + machine.layout['allocations'])
            records = [list(struct.unpack('<6I', machine.read_bytes(machine.state + machine.layout['records'] + slot * 24, 24))) for slot in range(count)]
            if any(row[5] for row in records) or machine.lifetime_violations:
                raise ValueError('Source CPU lifecycle leaked or accessed retired ownership')
            row = {'profile': profile, 'ready': ready, 'allocations': records,
                'platform': {name: machine.word(machine.qstate + machine.f[name]) for name in ['creates', 'joins', 'closes', 'sleeps', 'exited']}}
            rows.append(row)
            (output / (profile + '.json')).write_text(json.dumps(row, indent=2) + '\n')
            print(json.dumps({'profile': profile, 'platform': row['platform']}), flush=True)
        except Exception as error:
            (output / (profile + '-failure.json')).write_text(json.dumps({'error': str(error), 'pc': machine.pc(),
                'pause': machine.pause, 'phase': machine.phase, 'sourceCreditGranted': 0}, indent=2) + '\n')
            raise
    (output / 'report.json').write_text(json.dumps({'status': 'authored-ARM-high-A64-file-worker-yield-join-returned',
        'profiles': rows, 'sourceCreditGranted': 0}, indent=2) + '\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
