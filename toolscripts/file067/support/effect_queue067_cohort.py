import argparse
import ctypes
import json
import struct
from pathlib import Path
from unicorn import arm_const as arm

import effect_queue067_lifetime as reference
import effect_queue067_source_cpu as cpu
import effect_queue067_native as native
import effect_request066_errors as file_errors
from effect_queue067_observation import Observation


class Original(reference.Machine):
    def __init__(self, elf):
        super().__init__(elf)
        self.q = dict(zip(native.LAYOUT, [8, 4136, 24, 12, 12, 4, 4104, 4108, 4120, 4124, 4128, 4132, 20, 4, 8, 4, 8], strict=True))
        self.functions.update(queue_push067=0x162ad0, queue_clear067=0x147090)
        self.worker_context = None
        self.qstate = self.graph['objects']['queue_fixture067']['address']
        row = self.graph['objects']['effect_queue_fixture_layout067']
        self.f = dict(zip(native.FIXTURE, struct.unpack('<' + 'I' * len(native.FIXTURE), self.read_bytes(row['address'], row['bytes'])), strict=True))

    def write(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'qstate') and self.qstate <= address < address + size <= self.qstate + self.f['bytes']:
            return
        super().write(cpu, access, address, size, value, user)

    def read(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'qstate') and self.qstate <= address < address + size <= self.qstate + self.f['bytes']:
            return
        super().read(cpu, access, address, size, value, user)

    def prepare_session(self, worker_fail=False):
        self.setup()
        self.mount()
        self.invoke('effect_request_trace_files067', [])
        self.manager = self.invoke('cached_sdk_allocate065', [self.sdk_heap, 8, 4])
        if worker_fail:
            self.cpu.mem_write(self.state + self.layout['failAt'], struct.pack('<I', 2))
        self.active = True
        self.invoke('queue_manager_construct067', [self.manager])
        self.active = False
        self.worker = int.from_bytes(self.read_bytes(self.manager + 4, 4), 'little')

    def enqueue(self, prefix='rom'):
        path = self.scratch[0]
        self.cpu.mem_write(path, (prefix + ':/data/Effect/ef00007.pef').encode('utf-16le') + b'\0\0')
        self.active = True
        task = self.invoke('queue_async067', [self.manager, path, 5, self.request_heap, 128])
        self.active = False
        return task

    def step(self):
        if self.worker_context is None:
            self.schedule_worker()
            return
        parent = self.cpu.context_save()
        parent_tls = self.tls
        self.cpu.context_restore(self.worker_context)
        self.tls = self.cpu.reg_read(arm.UC_ARM_REG_C13_C0_3)
        before = len(self.worker_pauses)
        self.worker_active, self.active = True, True
        self.cpu.emu_start(self.cpu.reg_read(arm.UC_ARM_REG_PC), 0, count=2000000)
        self.worker_context = self.cpu.context_save()
        self.worker_active, self.active = False, False
        self.cpu.context_restore(parent)
        self.tls = parent_tls
        if len(self.worker_pauses) != before + 1:
            raise ValueError('Actual worker did not pause once after the next task')

    def destroy(self):
        self.delete_manager(self.manager)
        if getattr(self, 'extra_scheme', None):
            self.mount_active = True
            invoke(self, 'request_unregister066', [self.extra_scheme])
            self.mount_active = False
        self.unmount()


def invoke(machine, name, args):
    if hasattr(machine, 'cpu'):
        machine.active = True
        result = machine.invoke(name, args)
        machine.active = False
        return result
    method = getattr(machine.library, name)
    method.argtypes = [ctypes.c_void_p] * len(args)
    method.restype = ctypes.c_ubyte if name == 'effect_request_ready066' else ctypes.c_void_p if name == 'effect_request_bytes066' else None
    return method(*args)


def ready(machine, task):
    return int(invoke(machine, 'request_ready066' if hasattr(machine, 'cpu') else 'effect_request_ready066', [task]) or 0)


def release(machine, task):
    invoke(machine, 'request_delete066' if hasattr(machine, 'cpu') else 'effect_request_destroy066', [task])


def verify_loaded(machine, task):
    if ready(machine, task) != 1:
        raise ValueError('FIFO worker did not complete the independently selected next task')
    pointer = invoke(machine, 'request_bytes066' if hasattr(machine, 'cpu') else 'effect_request_bytes066', [task])
    if not pointer or machine.read_bytes(pointer, 2048) != native.request.device_reference.generated_file():
        raise ValueError('Worker completed without the actual generated file bytes')


def run_case(machine, case):
    machine.prepare_session(case == 'worker-allocation-failure')
    if case == 'worker-allocation-failure':
        before = Observation(machine)
        if machine.worker != 0 or len(before.records) != 1 or before.records[0][0] != 8:
            raise ValueError('Actual failed worker allocation changed manager ownership')
        name = 'queue_manager_delete067' if isinstance(machine, Original) else 'effect_queue_manager_destroy067'
        invoke(machine, name, [machine.manager])
        if isinstance(machine, Original):
            machine.unmount()
        after = Observation(machine)
        after.guards()
        if any(row[5] for row in after.records):
            raise ValueError('Worker allocation failure leaked its caller-owned manager')
        return {'case': case, 'operations': after.operations(), 'finalBudgets': [{'logicalBytes': row[0], 'alignment': row[2], 'live': row[5]} for row in after.records]}
    if case == 'file-read-error':
        file_errors.configure(machine, {'prefix': 'data', 'read': -11})
        machine.expected_prefix = 'data'
    if case == 'factory-task-allocation-failure':
        if hasattr(machine, 'cpu'):
            machine.cpu.mem_write(machine.state + machine.layout['failAt'], struct.pack('<I', 4))
        else:
            ctypes.memmove(machine.state + machine.layout['failAt'], struct.pack('<I', 4), 4)
    snapshots = [Observation(machine).snapshot()]
    count = {'idle': 0, 'single': 1, 'pending-shutdown': 3, 'reuse': 3, 'opaque-growth': 0,
        'null-task': 0, 'factory-task-allocation-failure': 1, 'file-read-error': 1}[case]
    tasks = [machine.enqueue(getattr(machine, 'expected_prefix', 'rom')) for _ in range(count)]
    if any(not task for task in tasks) and case != 'factory-task-allocation-failure':
        raise ValueError('Successful task allocator unexpectedly returned NULL')
    if case == 'factory-task-allocation-failure' and tasks != [0 if hasattr(machine, 'cpu') else None]:
        raise ValueError('Actual factory task-allocation failure did not enqueue NULL')
    if case == 'null-task':
        invoke(machine, 'queue_push067' if isinstance(machine, Original) else 'effect_queue_push067', [machine.worker, 0])
    if case == 'opaque-growth':
        if hasattr(machine, 'cpu'):
            machine.opaque_base = machine.scratch[0]
        else:
            machine.opaque = (ctypes.c_ubyte * (70 * 128))()
            machine.opaque_base = ctypes.addressof(machine.opaque)
        for index in range(70):
            name = 'queue_push067' if isinstance(machine, Original) else 'effect_queue_push067'
            invoke(machine, name, [machine.worker, machine.opaque_base + index * 128])
        snapshots.append(Observation(machine).snapshot())
        name = 'queue_clear067' if isinstance(machine, Original) else 'effect_queue_store_clear067'
        invoke(machine, name, [machine.worker + machine.q['pending']])
    snapshots.append(Observation(machine).snapshot())
    machine.step()
    if tasks and tasks[0]:
        if case == 'file-read-error':
            if ready(machine, tasks[0]) != 2 or invoke(machine, 'request_bytes066' if hasattr(machine, 'cpu') else 'effect_request_bytes066', [tasks[0]]):
                raise ValueError('Actual asynchronous read error changed state2/NULL-data publication')
        else:
            verify_loaded(machine, tasks[0])
        if any(ready(machine, task) != 0 for task in tasks[1:]):
            raise ValueError('Worker changed a later queued task before the next scheduling step')
        release(machine, tasks.pop(0))
    snapshots.append(Observation(machine).snapshot())
    if case == 'reuse':
        before = Observation(machine).snapshot()['pending']['free']
        tasks.append(machine.enqueue())
        current = Observation(machine).snapshot()
        if current['pending']['nodes'][-1]['node'] != before:
            raise ValueError('Enqueue did not reuse the actually retired list node')
        snapshots.append(current)
        for task in tasks:
            machine.step()
            verify_loaded(machine, task)
            release(machine, task)
            snapshots.append(Observation(machine).snapshot())
    Observation(machine).guards()
    if isinstance(machine, native.Native):
        machine.library.effect_queue_manager_destroy067(machine.manager)
    else:
        machine.destroy()
    machine.finalization_returned = True
    final = Observation(machine)
    final.guards()
    live = [row for row in final.records if row[5]]
    if live and (case != 'file-read-error' or len(live) != 1 or live[0][0] != 2048):
        raise ValueError('Queue/worker teardown retained a live task or block allocation')
    return {'case': case, 'snapshots': snapshots, 'operations': final.operations(),
        'finalBudgets': [{'logicalBytes': row[0], 'alignment': row[2], 'live': row[5]} for row in final.records]}


def run(build, output, cases=None):
    if output.exists():
        raise ValueError('Preserve coupled queue/worker corpus')
    output.mkdir(parents=True)
    rows = []
    cases = cases or ['idle', 'single', 'pending-shutdown', 'reuse', 'opaque-growth', 'null-task',
        'factory-task-allocation-failure', 'worker-allocation-failure', 'file-read-error']
    for case in cases:
        expected = None
        for profile in ['original', 'arm', 'windows', 'a64']:
            machine = Original(build / 'arm/effect_resource.elf') if profile == 'original' else native.Native(build / 'windows') if profile == 'windows' else cpu.Machine(profile, build / profile / 'effect_resource.elf')
            try:
                row = run_case(machine, case)
                if expected is None:
                    expected = row
                elif row != expected:
                    (output / ('mismatch-' + case + '-' + profile + '.json')).write_text(json.dumps({'expected': expected, 'actual': row}, indent=2) + '\n')
                    raise ValueError('Actual original/source typed queue graph or complete budget/lifetime differs')
                rows.append({'profile': profile, **row})
                (output / (case + '-' + profile + '.json')).write_text(json.dumps(row, indent=2) + '\n')
            except Exception as error:
                (output / 'failure.json').write_text(json.dumps({'case': case, 'profile': profile, 'error': str(error), 'completed': len(rows), 'sourceCreditGranted': 0}, indent=2) + '\n')
                raise
        print(json.dumps({'case': case, 'profilesPassed': 4}), flush=True)
    (output / 'report.json').write_text(json.dumps({'status': 'actual-original-source-ARM-Windows-highA64-manager-queue-lifetime-graphs-match',
        'caseSets': len(cases), 'profileCases': len(rows), 'sourceCreditGranted': 0,
        'limits': ['Opaque70-pointer growth case does not execute those identities as tasks.', 'Explicit gated native scheduling; no arbitrary-concurrency or OS-filesystem bootstrap claim.']}, indent=2) + '\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--cases', nargs='+')
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve(), args.cases)
