import argparse
import json
from pathlib import Path
import struct
import sys


ROOT = Path(__file__).resolve().parents[2]
PREVIOUS = ROOT / 'work/native-file068'
sys.path.insert(0, str(PREVIOUS))
sys.path.insert(0, str(ROOT / 'toolscripts'))
import singleton_replay
import effect_queue067_worker_reference as worker_reference
from unicorn import arm_const as ar


class Machine(singleton_replay.Machine):
    schedule_worker = worker_reference.Machine.schedule_worker

    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.worker_active = False
        self.worker_pauses = []
        self.worker_context = None
        self.waiting_parent = None
        self.thread_exited = False
        self.thread_closed = False
        self.lifecycle = []

    def interrupt(self, cpu, number, user):
        pc = cpu.reg_read(ar.UC_ARM_REG_PC)
        word = int.from_bytes(bytes(cpu.mem_read(pc - 4, 4)), 'little')
        values = [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(4)]
        if number == 2 and word == 0xef00000a and self.worker_active:
            self.worker_pauses.append({'operation': 'SleepThread', 'pc': pc,
                'registers': [cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) for index in range(8)],
                'tls': self.tls, 'resultSupplied': False})
            cpu.emu_stop()
            return
        if number == 2 and word == 0xef000024:
            if self.worker_active or values[0] != self.thread_contract['handle'] or values[2:] != [0xffffffff, 0xffffffff]:
                raise ValueError('Actual shutdown join ABI differs')
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
        if number == 2 and word == 0xef000023 and self.thread_contract is not None and values[0] == self.thread_contract['handle']:
            if not self.thread_exited or self.thread_closed:
                raise ValueError('Actual shutdown thread close order differs')
            self.thread_closed = True
            self.lifecycle.append({'operation': 'CloseHandle', 'pc': pc, 'args': values})
            cpu.reg_write(ar.UC_ARM_REG_R0, 0)
            return
        super().interrupt(cpu, number, user)

    def shutdown(self):
        self.active = True
        try:
            self.invoke('file_shutdown068', [])
        except ValueError as error:
            if str(error) != 'Texture actual caller return/integer/float ABI differs' or self.waiting_parent is None:
                raise
        self.active = False
        if self.waiting_parent is None or self.worker_context is None:
            raise ValueError('Original shutdown did not wait for its actual live parked worker')
        parent_tls = self.tls
        self.cpu.context_restore(self.worker_context)
        self.tls = self.cpu.reg_read(ar.UC_ARM_REG_C13_C0_3)
        self.worker_active, self.active = True, True
        self.cpu.emu_start(self.cpu.reg_read(ar.UC_ARM_REG_PC), 0, count=1000000)
        self.worker_active, self.active = False, False
        if not self.thread_exited:
            raise ValueError('Original worker did not exit through its actual trampoline')
        self.cpu.context_restore(self.waiting_parent)
        self.tls = parent_tls
        self.cpu.reg_write(ar.UC_ARM_REG_R0, 0)
        self.returned, self.active = False, True
        self.cpu.emu_start(self.cpu.reg_read(ar.UC_ARM_REG_PC), self.stop + 4, count=1000000)
        self.active = False
        if not self.returned or self.cpu.reg_read(ar.UC_ARM_REG_SP) != self.stack + 0xffe0:
            raise ValueError('Original application shutdown did not restore its actual caller frame')
        for index in range(4, 12):
            if self.cpu.reg_read(getattr(ar, 'UC_ARM_REG_R' + str(index))) != 0x65000000 + index:
                raise ValueError('Original shutdown changed callee-saved integer state')
        for index in range(8, 16):
            if self.cpu.reg_read(getattr(ar, 'UC_ARM_REG_D' + str(index))) != 0x3fe0000000000000 + index:
                raise ValueError('Original shutdown changed callee-saved floating state')
        if not self.thread_closed:
            raise ValueError('Original application shutdown retained its thread handle')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    output.mkdir(exist_ok=False)
    component = singleton_replay.singleton_bootstrap.patch_provider.fs_priority.run_component
    component.run(Machine, output / 'bootstrap')
    machine = singleton_replay.INSTANCES[-1]
    try:
        machine.schedule_worker()
        machine.shutdown()
        outcome = {'status': 'actual-original-application-shutdown-returned-after-worker-join'}
    except Exception as error:
        outcome = {'status': 'preserved-original-application-shutdown-frontier', 'error': str(error)}
    machine.active = False
    allocations = machine.allocations()
    report = {**outcome, 'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'entry': 0x10555c, 'mode': 'ARM',
        'bootstrap': str((output / 'bootstrap/report.json').relative_to(ROOT)),
        'managerSingleton': int.from_bytes(machine.read_bytes(0x898154, 4), 'little'),
        'filesystemState': list(struct.unpack('<3I', machine.read_bytes(0x89a4e8, 12))),
        'registryHex': machine.read_bytes(0x8e3470, 512).hex(), 'lifecycle': machine.lifecycle,
        'workerPauses': machine.worker_pauses, 'kernelContracts': machine.kernel_contracts,
        'ipcAttempts': machine.ipc_attempts, 'lastAccess': machine.last_access,
        'allocations': allocations, 'instructionWitnesses': list(machine.witnesses.values()),
        'sourceCreditGranted': 0, 'nativeGameOrOSQualified': False,
        'limits': ['Original SDK/kernel contracts remain synthetic and explicit.',
            'Only original shutdown after cold empty-ROM/patch startup and one idle worker yield is attempted.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: report[key] for key in ['status', 'pc', 'managerSingleton', 'filesystemState']}))
