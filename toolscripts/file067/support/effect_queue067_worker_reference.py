import argparse
import json
import struct
from pathlib import Path
from unicorn import arm_const as ar

import effect_queue067_reference as manager


class Machine(manager.Machine):
    def __init__(self, elf):
        super().__init__(elf, True)
        self.functions.update(queue_async067=0x1529b0)
        self.worker_active = False
        self.worker_pauses = []

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        instruction = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        if number == 2 and instruction == 0xef00000a and self.worker_active:
            values = [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(8)]
            self.worker_pauses.append({'operation': 'SleepThread', 'pc': pc, 'registers': values,
                'tls': cpu.reg_read(ar.UC_ARM_REG_C13_C0_3), 'resultSupplied': False})
            cpu.emu_stop()
            return
        super().interrupt(cpu, number, user)

    def schedule_worker(self):
        contract = self.thread_contract
        parent = self.cpu.context_save()
        parent_tls = self.tls
        worker_tls = 0x7001000
        self.cpu.mem_map(worker_tls, 4096)
        self.tls = worker_tls
        self.cpu.reg_write(ar.UC_ARM_REG_C13_C0_3, worker_tls)
        self.cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x10)
        self.cpu.reg_write(ar.UC_ARM_REG_R0, contract['argument'])
        self.cpu.reg_write(ar.UC_ARM_REG_SP, contract['stack'])
        self.cpu.reg_write(ar.UC_ARM_REG_LR, 0)
        self.worker_active, self.active = True, True
        self.cpu.emu_start(contract['entry'], 0, count=1000000)
        self.worker_context = self.cpu.context_save()
        self.worker_active, self.active = False, False
        if len(self.worker_pauses) != 1:
            raise ValueError('Actual file worker did not reach its measured yield boundary')
        self.cpu.context_restore(parent)
        self.tls = parent_tls
        if self.cpu.reg_read(ar.UC_ARM_REG_C13_C0_3) != parent_tls:
            raise ValueError('Scheduler failed to restore actual parent TLS')


def run(build, output):
    if output.exists():
        raise ValueError('Preserve real async queue/worker frontier')
    output.mkdir(parents=True)
    machine = Machine(build / 'arm/effect_resource.elf')
    try:
        machine.setup()
        machine.mount()
        owner = machine.invoke('cached_sdk_allocate065', [machine.sdk_heap, 8, 4])
        machine.active = True
        machine.invoke('queue_manager_construct067', [owner])
        machine.active = False
        worker = int.from_bytes(machine.read_bytes(owner + 4, 4), 'little')
        path = machine.scratch[0]
        machine.cpu.mem_write(path, 'rom:/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        machine.active = True
        task = machine.invoke('queue_async067', [owner, path, 5, machine.request_heap, 128])
        before = machine.invoke('request_ready066', [task])
        machine.active = False
        if before != 0:
            raise ValueError('Real enqueue loaded task before its worker was scheduled')
        machine.schedule_worker()
        machine.active = True
        ready = machine.invoke('request_ready066', [task])
        data = machine.invoke('request_bytes066', [task])
        low = machine.invoke('request_length066', [task + 8])
        high = machine.cpu.reg_read(ar.UC_ARM_REG_R1)
        machine.active = False
        if ready != 1 or (high << 32 | low) != 2048 or machine.read_bytes(data, 2048) != manager.predecessor.generated_file():
            raise ValueError('Actual scheduled file worker did not publish genuine provider bytes')
        report = {'status': 'actual-original-manager-async-enqueue-worker-file-session-returned-to-yield',
            'managerPointer': owner, 'workerPointer': worker, 'taskPointer': task, 'readyBefore': before, 'readyAfter': ready,
            'threadContract': machine.thread_contract, 'workerPauses': machine.worker_pauses,
            'workerRawHex': machine.read_bytes(worker, 0x1028).hex(), 'allocations': machine.allocations(),
            'instructionWitnesses': list(machine.witnesses.values()), 'sourceCreditGranted': 0,
            'nativeGameOrOSQualified': False, 'threadDestructionQualified': False}
        (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
        print(json.dumps({'status': report['status'], 'readyBefore': before, 'readyAfter': ready}))
    except Exception as error:
        report = {'status': 'preserved-actual-async-worker-frontier', 'error': str(error),
            'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'cpsr': machine.cpu.reg_read(ar.UC_ARM_REG_CPSR),
            'workerPauses': machine.worker_pauses, 'kernelFrontiers': machine.kernel_frontiers,
            'allocations': machine.allocations(), 'instructionWitnesses': list(machine.witnesses.values()),
            'sourceCreditGranted': 0}
        (output / 'failure.json').write_text(json.dumps(report, indent=2) + '\n')
        print(json.dumps({'status': report['status'], 'error': str(error), 'pc': report['pc']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
