import struct
import subprocess
import os
import socket

CALLS = ['fixture_heap_reset062ac', 'heap_initialize062ac', 'heap_allocate062ac', 'heap_free062ac',
         'fixture_default_bind062ac', 'fixture_default_callback062ac', 'fixture_default_disabled062ac',
         'heap_default_initialize062ac', 'heap_default_allocate062ac', 'heap_default_free062ac',
         'heap_sdk_allocate062ac', 'heap_sdk_dispose062ac', 'heap_allocation_size062ac',
         'heap_find_containing062ac', 'heap_list_next062ac', 'heap_group_set062ac',
         'heap_policy_set062ac', 'heap_split_set062ac']
SYMBOLS = ['heap_registry062ac', 'heap_registry_initialized062ac', 'heap_identity062ac',
           'heap_methods062ac', 'heap_proxy062ac', 'heap_environment062ac']
CALLS += ['fixture_registry_bind062ad', 'fixture_registry_owner062ad', 'fixture_registry_locking062ad',
          'fixture_registry_disposer062ad', 'fixture_registry_observe062ad', 'registry_initialize062ad',
          'registry_destroy062ad', 'registry_register062ad', 'registry_unregister062ad', 'registry_find062ad']
SYMBOLS += ['registry_methods062ad', 'sdk_clock_mutex_methods062u', 'sdk_mutex_class_identity062u',
            'sdk_mutex_tag_identity062u', 'fixture_registry_layout062ad', 'fixture_registry_mutex_methods062ad',
            'fixture_registry_events062ad', 'fixture_registry_event_count062ad', 'heap_default_free062ac']

ACTIVE = []
ADB = None
REMOTE = None


class Runtime:
    def __init__(self, target, folder):
        if target != 'android-device':
            raise ValueError('Physical adapter target must remain explicit')
        self.p, self.coverage = 8, set()
        namespace = 'dqmj3-registration062-' + str(os.getpid()) + '-' + str(len(ACTIVE))
        self.process = subprocess.Popen([str(ADB), 'shell', '-T', REMOTE, namespace], stdin=subprocess.DEVNULL,
                                        stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        ACTIVE.append(self)
        if self.process.stdout.read(5) != b'READY':
            raise ValueError('Physical source server failed startup')
        self.port = subprocess.check_output([str(ADB), 'forward', 'tcp:0', 'localabstract:' + namespace]).decode().strip()
        self.socket = socket.create_connection(('127.0.0.1', int(self.port)), timeout=15)
        raw = self.exchange(0, [])
        if len(raw) != 96:
            raise ValueError('Native heap handshake size differs')
        self.ram, *self.layout = struct.unpack('<Q22I', raw)
        if self.ram <= 0xffffffff or self.ram % 64 or self.layout[0] != 8:
            raise ValueError('Physical pointer/layout/alignment requirement failed')
        self.bytes_read, self.calls = 0, 0
        self.cpu = ReservedArena(self.ram)

    def receive(self, size):
        chunks = bytearray()
        while len(chunks) < size:
            block = self.socket.recv(size - len(chunks))
            if not block:
                raise ValueError('Physical heap stream ended early: ' + self.process.stderr.read().decode('utf-8', errors='replace'))
            chunks.extend(block)
        return bytes(chunks)

    def exchange(self, operation, words, payload=b''):
        frame = struct.pack('<II', operation, len(words))
        frame += b''.join(struct.pack('<Q', value & 0xffffffffffffffff) for value in words)
        self.socket.sendall(frame + payload)
        status, length = struct.unpack('<II', self.receive(8))
        if status or length > 0x80000:
            raise ValueError('Physical heap protocol rejected request')
        return self.receive(length)

    def call(self, name, arguments):
        self.calls += 1
        return struct.unpack('<Q', self.exchange(1, [CALLS.index(name), *arguments]))[0]

    def symbol(self, name):
        return struct.unpack('<Q', self.exchange(4, [SYMBOLS.index(name)]))[0]

    def load(self, address, size):
        raw = self.exchange(2, [address, size])
        if len(raw) != size:
            raise ValueError('Physical memory read size differs')
        self.bytes_read += size
        return raw

    def store(self, address, data):
        if self.exchange(3, [address, len(data)], data):
            raise ValueError('Physical memory write reply differs')

    def close(self):
        if hasattr(self, 'socket'):
            self.exchange(5, [])
            self.socket.close()
        subprocess.run([str(ADB), 'forward', '--remove', 'tcp:' + self.port], check=True, capture_output=True)
        code = self.process.wait(timeout=15)
        stderr = self.process.stderr.read()
        self.process.stdout.close()
        self.process.stderr.close()
        if code or stderr:
            raise ValueError(('Physical heap process failed', code, stderr.decode('utf-8', errors='replace')))


class ReservedArena:
    def __init__(self, base):
        self.base = base

    def mem_map(self, address, count):
        if address != self.base + 0x20000 or count != 0x60000:
            raise ValueError('Only already-reserved registration arena extension is permitted')
