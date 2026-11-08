import argparse
import json
import struct
from pathlib import Path
from unicorn import arm_const as ar

import effect_queue067_worker_reference as predecessor


class Machine(predecessor.Machine):
    def __init__(self, elf):
        super().__init__(elf)
        self.functions.update(queue_manager_delete067=0x5e0a38)
        self.waiting_parent = None
        self.thread_exited = False
        self.thread_closed = False
        self.lifecycle = []

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        values = [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(4)]
        if number == 2 and word == 0xef000024:
            if self.worker_active or values[0] != self.thread_contract['handle'] or values[2:] != [0xffffffff, 0xffffffff]:
                raise ValueError('Actual file-worker join ABI differs')
            self.lifecycle.append({'operation': 'WaitSynchronization', 'pc': pc, 'args': values,
                'workerExitedBeforeWait': self.thread_exited})
            if not self.thread_exited:
                self.waiting_parent = cpu.context_save()
                cpu.emu_stop()
            else:
                cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        if number == 2 and word == 0xef000009 and self.worker_active:
            self.thread_exited = True
            self.lifecycle.append({'operation': 'ExitThread', 'pc': pc, 'tls': self.tls})
            cpu.emu_stop()
            return
        if number == 2 and word == 0xef000023:
            if values[0] != self.thread_contract['handle'] or not self.thread_exited or self.thread_closed:
                raise ValueError('Actual file-worker close handle/lifetime differs')
            self.thread_closed = True
            self.lifecycle.append({'operation': 'CloseHandle', 'pc': pc, 'args': values})
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        super().interrupt(cpu, number, user)

    def delete_manager(self, owner):
        self.active = True
        try:
            self.invoke('queue_manager_delete067', [owner])
        except ValueError as error:
            if str(error) != 'Texture actual caller return/integer/float ABI differs' or self.waiting_parent is None:
                raise
        self.active = False
        if self.waiting_parent is None:
            raise ValueError('Actual manager deletion did not wait for its live worker')
        parent_tls = self.tls
        self.cpu.context_restore(self.worker_context)
        self.tls = self.cpu.reg_read(ar.UC_ARM_REG_C13_C0_3)
        self.worker_active, self.active = True, True
        self.cpu.emu_start(self.cpu.reg_read(ar.UC_ARM_REG_PC), 0, count=1000000)
        self.worker_active, self.active = False, False
        if not self.thread_exited:
            raise ValueError('Actual worker did not complete its trampoline and ExitThread')
        self.cpu.context_restore(self.waiting_parent)
        self.tls = parent_tls
        self.cpu.reg_write(ar.UC_ARM_REG_R0, 0)
        self.returned, self.active = False, True
        self.cpu.emu_start(self.cpu.reg_read(ar.UC_ARM_REG_PC), self.stop + 4, count=1000000)
        self.active = False
        if not self.returned or self.cpu.reg_read(ar.UC_ARM_REG_SP) != self.stack + 0xffe0:
            raise ValueError('Actual joined manager deletion failed to return to caller')
        for index in range(4, 12):
            if self.cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) != 0x65000000 + index:
                raise ValueError('Joined manager changed integer callee-saved state')
        for index in range(8, 16):
            if self.cpu.reg_read(getattr(ar, 'UC_ARM_REG_D' + str(index))) != 0x3fe0000000000000 + index:
                raise ValueError('Joined manager changed floating callee-saved state')
        if not self.thread_closed:
            raise ValueError('Joined manager did not close its actual thread handle')


def run(build, output):
    if output.exists():
        raise ValueError('Preserve actual manager join/lifetime attempt')
    output.mkdir(parents=True)
    machine = Machine(build / 'arm/effect_resource.elf')
    try:
        machine.setup()
        machine.mount()
        owner = machine.invoke('cached_sdk_allocate065', [machine.sdk_heap, 8, 4])
        machine.active = True
        machine.invoke('queue_manager_construct067', [owner])
        machine.active = False
        path = machine.scratch[0]
        machine.cpu.mem_write(path, 'rom:/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        machine.active = True
        task = machine.invoke('queue_async067', [owner, path, 5, machine.request_heap, 128])
        machine.active = False
        machine.schedule_worker()
        machine.active = True
        ready = machine.invoke('request_ready066', [task])
        machine.invoke('request_delete066', [task])
        machine.active = False
        if ready != 1:
            raise ValueError('Actual worker task did not complete before caller release')
        machine.delete_manager(owner)
        machine.unmount()
        if any(row['record'][5] for row in machine.allocations()):
            raise ValueError('Actual drained manager lifecycle retained a live allocation')
        report = {'status': 'actual-original-file-manager-enqueue-load-yield-caller-release-join-exit-close-returned',
            'lifecycle': machine.lifecycle, 'workerPauses': machine.worker_pauses, 'allocations': machine.allocations(),
            'instructionWitnesses': list(machine.witnesses.values()), 'sourceCreditGranted': 0,
            'nativeOSOrGameQualified': False}
        (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
        print(json.dumps({'status': report['status'], 'lifecycle': machine.lifecycle}))
    except Exception as error:
        report = {'status': 'preserved-actual-file-manager-lifetime-frontier', 'error': str(error),
            'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'lifecycle': machine.lifecycle,
            'workerPauses': machine.worker_pauses, 'allocations': machine.allocations(),
            'instructionWitnesses': list(machine.witnesses.values()), 'sourceCreditGranted': 0}
        (output / 'failure.json').write_text(json.dumps(report, indent=2) + '\n')
        print(json.dumps({'status': report['status'], 'error': str(error), 'pc': report['pc']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
