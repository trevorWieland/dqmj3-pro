import struct
import hashlib


class Observation:
    def __init__(self, machine):
        self.m = machine
        self.p = machine.layout['pointerBytes']
        self.q = machine.q
        self.read = machine.read_bytes
        count = self.word(machine.state + machine.layout['allocations'])
        self.records = [list(struct.unpack('<6I', self.read(machine.state + machine.layout['records'] + slot * 24, 24)))
            for slot in range(count)]
        self.heap = machine.state + machine.layout['heap'] + machine.layout['payloadOffset']
        self.stride = machine.layout['heapStride']

    def word(self, at):
        return int.from_bytes(self.read(at, 4), 'little')

    def pointer(self, at):
        return int.from_bytes(self.read(at, self.p), 'little')

    def token(self, pointer, node=False):
        if pointer == 0:
            return None
        if hasattr(self.m, 'opaque_base') and self.m.opaque_base <= pointer < self.m.opaque_base + 70 * 128:
            if (pointer - self.m.opaque_base) % 128:
                raise ValueError('Opaque caller identity was changed')
            return ['opaque', (pointer - self.m.opaque_base) // 128]
        for slot, row in enumerate(self.records):
            base = self.heap + slot * self.stride
            if base <= pointer <= base + row[1]:
                offset = pointer - base
                if not node and offset:
                    raise ValueError('Owned object pointer is not its actual allocation start')
                if node and offset % self.q['nodeBytes']:
                    raise ValueError('Queue interior pointer lost typed node alignment')
                return [slot, offset // self.q['nodeBytes'] if node else 0]
        raise ValueError('Queue pointer has no independently owned allocation/caller identity')

    def queue(self, store):
        if store == 0:
            return None
        sentinel = self.pointer(store + 4 * self.p)
        blocks, seen = [], set()
        block = self.pointer(store)
        while block:
            if block in seen:
                raise ValueError('Queue block ownership cycle')
            seen.add(block)
            blocks.append({'allocation': self.token(block), 'capacity': self.word(block + self.q['blockCapacity']),
                'nodes': self.token(self.pointer(block + self.q['blockNodes']), True)})
            block = self.pointer(block)
        nodes, seen = [], set()
        previous, node = sentinel, self.pointer(sentinel)
        while node != sentinel:
            if node in seen or len(nodes) >= 128:
                raise ValueError('Queue list failed its bounded acyclic membership contract')
            seen.add(node)
            if self.pointer(node + self.p) != previous:
                raise ValueError('Queue backward link differs from actual forward sequence')
            nodes.append({'node': self.token(node, True), 'task': self.token(self.pointer(node + 2 * self.p))})
            previous, node = node, self.pointer(node)
        if self.pointer(sentinel + self.p) != previous or self.word(store + self.q['count']) != len(nodes):
            raise ValueError('Queue sentinel/tail/count differs')
        if self.read(sentinel + 2 * self.p, self.p) != b'\xa5' * self.p:
            raise ValueError('Queue interpreted or rewrote the unwritten sentinel task field')
        free, node = [], self.pointer(store + self.p)
        while node:
            if node in seen or len(free) >= 128:
                raise ValueError('Live/free queue node membership overlaps or cycles')
            seen.add(node)
            free.append({'node': self.token(node, True), 'previous': self.token(self.pointer(node + self.p), True),
                'retiredTaskIdentity': self.token(self.pointer(node + 2 * self.p))})
            node = self.pointer(node)
        return {'allocation': self.token(store), 'blocks': blocks, 'sentinel': self.token(sentinel, True),
            'free': self.token(self.pointer(store + self.p), True), 'freeNodes': free,
            'unusedBegin': self.token(self.pointer(store + 2 * self.p), True),
            'unusedEnd': self.token(self.pointer(store + 3 * self.p), True), 'nodes': nodes}

    def snapshot(self):
        m, q, worker = self.m, self.q, self.m.worker
        if self.token(m.manager) != [0, 0] or self.token(worker) != [1, 0]:
            raise ValueError('Manager/worker actual owning allocation identities differ')
        if self.pointer(m.manager + q['managerWorker']) != worker:
            raise ValueError('Manager does not own the measured worker')
        if self.word(worker + q['mutex']) != 1 or self.pointer(worker + q['mutex'] + q['mutexOwner']) or self.word(worker + q['mutex'] + q['mutexDepth']):
            raise ValueError('Queue snapshot did not observe an unlocked live typed mutex')
        if self.read(worker + 6, 2) != b'\xa5\xa5' or self.read(worker + q['running'] + 1, 3) != b'\xa5' * 3 or self.read(worker + q['unknown1024'], 4) != b'\xa5' * 4:
            raise ValueError('Constructor or worker changed explicitly unwritten fields')
        return {'threadToken': self.word(worker), 'flags': self.read(worker + 4, 2).hex(),
            'running': self.read(worker + q['running'], 1)[0], 'mutex': [1, 0, 0],
            'pending': self.queue(self.pointer(worker + q['pending'])),
            'deferred': self.token(self.pointer(worker + q['deferred'])), 'current': self.token(self.pointer(worker + q['current'])),
            'tasks': self.tasks(),
            'operations': self.operations(),
            'allocations': [{'logicalBytes': row[0], 'alignment': row[2], 'live': row[5]} for row in self.records]}

    def operations(self):
        events = self.word(self.m.state + self.m.layout['events'])
        allocations = [list(struct.unpack('<6I', self.read(self.m.state + self.m.layout['log'] + index * 24, 24))) for index in range(events)]
        count = self.word(self.m.qstate + self.m.f['ioCount'])
        if count > 64:
            raise ValueError('File provider trace exceeds its initialized bounded storage')
        files = [list(struct.unpack('<10I', self.read(self.m.qstate + self.m.f['ioEvents'] + index * 40, 40))) for index in range(count)]
        return {'allocationReleaseEvents': allocations, 'orderedFileProviderEvents': files}

    def tasks(self):
        layout = {'control': self.p, 'embedded': 2 * self.p, 'provider': 56 if self.p == 4 else 80,
            'heap': self.p, 'alignment': 2 * self.p, 'data': 12 if self.p == 4 else 24,
            'dataBytes': 16 if self.p == 4 else 32, 'reserved': 32 if self.p == 4 else 48,
            'path': self.p}
        rows = []
        for slot, allocation in enumerate(self.records):
            if allocation[0] != 60 or not allocation[5]:
                continue
            task = self.heap + slot * self.stride
            control = self.pointer(task + layout['control'])
            provider = task + layout['embedded']
            if self.pointer(task + layout['provider']) != provider:
                raise ValueError('Live task published a different embedded provider identity')
            if self.pointer(provider + layout['heap']) != self.m.request_heap or self.word(provider + layout['alignment']) != 128:
                raise ValueError('Live task changed its genuine user heap/payload alignment')
            if self.read(control + 2, self.p - 2) != b'\xa5' * (self.p - 2) or self.read(provider + layout['reserved'], 16) != b'\xa5' * 16:
                raise ValueError('Live task changed constructor-unwritten control/provider storage')
            path = self.pointer(control + layout['path'])
            expected = (getattr(self.m, 'expected_prefix', 'rom') + ':/data/Effect/ef00007.pef').encode('utf-16le') + b'\0\0'
            if self.read(path, len(expected)) != expected:
                raise ValueError('Async task lost the independently supplied caller path')
            data = self.pointer(provider + layout['data'])
            lengths = list(struct.unpack('<4I', self.read(provider + layout['dataBytes'], 16)))
            rows.append({'task': [slot, 0], 'control': self.token(control), 'provider': [slot, layout['embedded'] // self.p],
                'stateSelector': self.read(control, 2).hex(), 'pathOwner': self.token(path - 12),
                'pathSha256': hashlib.sha256(self.read(path, len(expected))).hexdigest(), 'data': self.token(data),
                'lengthWords': lengths, 'payloadSha256': hashlib.sha256(self.read(data, lengths[0])).hexdigest() if data and lengths[0] else None})
        return rows

    def guards(self):
        for slot, row in enumerate(self.records):
            base = self.heap + slot * self.stride
            if self.read(base - 128, 128) != b'\xa5' * 128 or self.read(base + row[1], 8192 - row[1] + 128) != b'\xa5' * (8192 - row[1] + 128):
                raise ValueError('Queue allocation changed its full exterior guard bytes')
        if getattr(self.m, 'lifetime_violations', []):
            raise ValueError('Queue program read or wrote a logically retired allocation')
