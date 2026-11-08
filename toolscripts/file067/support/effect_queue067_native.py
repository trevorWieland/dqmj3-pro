import argparse
import ctypes
import json
import struct
from pathlib import Path

import effect_request066_session as request


LAYOUT = ['managerBytes', 'workerBytes', 'storeBytes', 'blockBytes', 'nodeBytes', 'managerWorker', 'running',
    'mutex', 'pending', 'deferred', 'current', 'unknown1024', 'count', 'blockCapacity', 'blockNodes', 'mutexOwner', 'mutexDepth']
FIXTURE = ['bytes', 'creates', 'joins', 'closes', 'locks', 'unlocks', 'sleeps', 'exited', 'nanoseconds', 'worker', 'entry', 'identity', 'ioCount', 'ioEvents']
WIN_NAMES = ['CreateThread', 'WaitForSingleObject', 'CloseHandle', 'CreateMutexW', 'ReleaseMutex', 'CreateEventW',
    'SetEvent', 'ResetEvent', 'Sleep', 'GetCurrentThreadId']


class Native(request.Native):
    def __init__(self, folder):
        super().__init__(folder)
        self.q = dict(zip(LAYOUT, (ctypes.c_uint * len(LAYOUT)).in_dll(self.library, 'effect_queue_layout067'), strict=True))
        self.f = dict(zip(FIXTURE, (ctypes.c_uint * len(FIXTURE)).in_dll(self.library, 'effect_queue_fixture_layout067'), strict=True))
        expected = [16, 4168, 48, 24, 24, 8, 4104, 4112, 4136, 4144, 4152, 4160, 40, 8, 16, 8, 16]
        if list(self.q.values()) != expected:
            raise ValueError('Native queue layout differs from reviewed full-pointer geometry')
        self.library.effect_queue_fixture_state067.restype = ctypes.c_void_p
        self.qstate = self.library.effect_queue_fixture_state067()
        self.library.effect_queue_fixture_initialize067.argtypes = [ctypes.c_uint, ctypes.c_void_p]
        self.library.effect_queue_fixture_manager_allocate067.restype = ctypes.c_void_p
        self.library.effect_queue_manager_construct067.argtypes = [ctypes.c_void_p]
        self.library.effect_queue_manager_construct067.restype = ctypes.c_void_p
        self.library.effect_queue_manager_destroy067.argtypes = [ctypes.c_void_p]
        self.library.effect_queue_request_async067.argtypes = [ctypes.c_void_p, ctypes.c_void_p, ctypes.c_uint, ctypes.c_void_p, ctypes.c_uint]
        self.library.effect_queue_request_async067.restype = ctypes.c_void_p
        self.library.effect_queue_fixture_native_step067.restype = ctypes.c_uint
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        self.api = (ctypes.c_void_p * len(WIN_NAMES))(*[ctypes.cast(getattr(self.kernel, name), ctypes.c_void_p).value for name in WIN_NAMES])

    def prepare_session(self, worker_fail=False):
        self.owner_prepare(request.device_reference.generated_file())
        self.library.effect_request_fixture_bind066()
        self.suffix = ctypes.create_string_buffer('/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.library.effect_request_device_prepare066(self.image, 2048, ctypes.addressof(self.suffix))
        self.library.effect_request_source_files_bind066()
        self.library.effect_queue_fixture_initialize067(1, ctypes.addressof(self.api))
        self.library.effect_request_trace_files067()
        self.manager = self.library.effect_queue_fixture_manager_allocate067()
        if worker_fail:
            ctypes.memmove(self.state + self.layout['failAt'], struct.pack('<I', 2), 4)
        if self.library.effect_queue_manager_construct067(self.manager) != self.manager:
            raise ValueError('Actual native queue constructor changed caller storage identity')
        self.worker = self.pointer(self.manager + self.q['managerWorker'])
        if min(self.manager, self.qstate) <= 0xffffffff or (not worker_fail and self.worker <= 0xffffffff):
            raise ValueError('Windows queue requires actual high native ownership pointers')
        self.paths = []

    def pointer(self, address):
        return int.from_bytes(self.read_bytes(address, 8), 'little')

    def word(self, address):
        return int.from_bytes(self.read_bytes(address, 4), 'little')

    def enqueue(self, prefix='rom'):
        path = ctypes.create_string_buffer((prefix + ':/data/Effect/ef00007.pef').encode('utf-16le') + b'\0\0')
        self.paths.append(path)
        task = self.library.effect_queue_request_async067(self.manager, ctypes.addressof(path), 5, self.request_heap, 128)
        if task and self.library.effect_request_ready066(task) != 0:
            raise ValueError('Native async request completed before genuine worker scheduling')
        return task

    def step(self):
        if self.library.effect_queue_fixture_native_step067() != 0:
            raise ValueError('Real Windows worker failed to signal its actual yield boundary')

    def observe(self):
        worker = self.worker
        row = {'threadToken': self.word(worker), 'threadFlagsHex': self.read_bytes(worker + 4, 4).hex(),
            'running': self.read_bytes(worker + self.q['running'], 1)[0],
            'unknown1009Hex': self.read_bytes(worker + self.q['running'] + 1, 3).hex(),
            'mutex': [self.word(worker + self.q['mutex']), self.pointer(worker + self.q['mutex'] + self.q['mutexOwner']),
                self.word(worker + self.q['mutex'] + self.q['mutexDepth'])],
            'unknown1024Hex': self.read_bytes(worker + self.q['unknown1024'], 4).hex(),
            'pending': bool(self.pointer(worker + self.q['pending'])), 'deferred': bool(self.pointer(worker + self.q['deferred'])),
            'current': bool(self.pointer(worker + self.q['current'])),
            'platform': {name: self.word(self.qstate + self.f[name]) for name in ['creates', 'joins', 'closes', 'locks', 'unlocks', 'sleeps', 'exited']},
            'sleepNs': int.from_bytes(self.read_bytes(self.qstate + self.f['nanoseconds'], 8), 'little')}
        if row['threadFlagsHex'] != '0000a5a5' or row['unknown1009Hex'] != 'a5a5a5' or row['unknown1024Hex'] != 'a5a5a5a5':
            raise ValueError('Native constructor changed explicitly unwritten worker fields')
        if row['mutex'] != [1, 0, 0]:
            raise ValueError('Real native mutex did not return to its quiescent typed state')
        return row


def run(build, output):
    if output.exists():
        raise ValueError('Preserve real Windows file-worker attempt')
    output.mkdir(parents=True)
    machine = Native(build / 'windows')
    try:
        machine.prepare_session()
        task = machine.enqueue()
        before = machine.observe()
        machine.step()
        after = machine.observe()
        data = machine.library.effect_request_bytes066(task)
        if machine.library.effect_request_ready066(task) != 1 or not data or ctypes.string_at(data, 2048) != request.device_reference.generated_file():
            raise ValueError('Real Windows source worker failed to load actual generated file bytes')
        machine.library.effect_request_destroy066(task)
        machine.library.effect_queue_manager_destroy067(machine.manager)
        count = machine.word(machine.state + machine.layout['allocations'])
        records = [list(struct.unpack('<6I', machine.read_bytes(machine.state + machine.layout['records'] + slot * 24, 24))) for slot in range(count)]
        if any(row[5] for row in records):
            raise ValueError('Real Windows thread join/close lifecycle leaked a game-owned allocation')
        lifecycle = {name: machine.word(machine.qstate + machine.f[name]) for name in ['creates', 'joins', 'closes', 'exited']}
        if lifecycle != {'creates': 1, 'joins': 1, 'closes': 1, 'exited': 1}:
            raise ValueError('Native worker thread lifetime differs')
        report = {'status': 'real-Windows-thread-mutex-events-async-file-worker-join-close-returned',
            'before': before, 'after': after, 'lifecycle': lifecycle, 'allocations': records,
            'win32Imports': dict(zip(WIN_NAMES, list(machine.api), strict=True)), 'sourceCreditGranted': 0,
            'limits': ['Explicit scheduler gates serialize this bounded profile.', 'Memory-filesystem provider; no OS filesystem/game bootstrap claim.']}
        (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
        print(json.dumps({'status': report['status'], 'lifecycle': lifecycle}))
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
