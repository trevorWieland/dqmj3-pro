from heap_model062ac import Model


class RegistryModel(Model):
    def __init__(self, base, heap_layout, layout, symbols, seed):
        self.written = set()
        self.object = base + 0x40000
        self.registry = base + 0x1000
        self.l = layout
        self.symbols = symbols
        self.p = layout[0]
        super().__init__(base, heap_layout, size=0x80000,
                         storage_offset=0x40000 + heap_layout[18],
                         storage_bytes=0x20000 - heap_layout[18],
                         heap_offset=0x40000 + heap_layout[19])
        self.put(self.object, symbols['heap_identity062ac'], self.p)
        for i in range(20):
            self.put(self.object + self.p + i, 0, 1)
        self.put(self.object + heap_layout[20], 0, 4)
        lock = self.object + heap_layout[21]
        self.put(lock, 1, 4)
        pointer_offset = (4 + self.p - 1) & -self.p
        self.put(lock + pointer_offset, 0, self.p)
        self.put(lock + pointer_offset + self.p, 0, 4)
        self.put(base + 0x800 + layout[13], base + 0x900, self.p)
        self.put(base + 0x900 + layout[15], base + 0xa00, self.p)
        lock = base + 0xa00 + layout[17]
        self.put(lock, symbols['sdk_clock_mutex_methods062u'], self.p)
        self.put(lock + layout[19], symbols['sdk_mutex_class_identity062u'], self.p)
        self.put(lock + layout[20], 1, 4)
        self.put(lock + layout[20] + layout[26], 0, self.p)
        self.put(lock + layout[20] + layout[27], 0, 4)
        self.put(lock + layout[21], symbols['sdk_mutex_tag_identity062u'], self.p)
        self.put(lock + layout[22], 0, 1)
        for index in [23, 24, 25]:
            self.put(lock + layout[index], 0, 4)
        self.initial = bytes(((i * 29) ^ (i >> 7) ^ seed) & 255 for i in range(0x80000))
        for i, value in enumerate(self.initial):
            if base + i not in self.written:
                self.bytes[i] = value
        self.split = self.bytes[self.heap - base + heap_layout[17]]
        self.records = []
        self.capacity = 0
        self.vector = 0
        self.lookup_lock = 0
        self.observed = False
        self.events = []
        self.depth = 0
        self.disposer = 0
        self.prefix_fields = set()

    def snapshot(self, kind):
        if self.observed:
            self.events.append([kind, len(self.records), self.read(self.base + 0x500, 1)[0],
                                self.depth, 0xffffffff if self.depth else 1,
                                self.records[0][0] if self.records else 256,
                                self.records[-1][0] if self.records else 256])

    def acquire(self):
        self.snapshot(0)
        self.depth += 1
        mutex = self.base + 0xa00 + self.l[17] + self.l[20]
        self.put(mutex, 0xffffffff, 4)
        self.put(mutex + self.l[26], self.base + 0x7f000, self.p)
        self.put(mutex + self.l[27], self.depth, 4)

    def release(self):
        self.snapshot(1)
        self.depth -= 1
        mutex = self.base + 0xa00 + self.l[17] + self.l[20]
        if self.depth == 0:
            self.put(mutex, 1, 4)
            self.put(mutex + self.l[26], 0, self.p)
        self.put(mutex + self.l[27], self.depth, 4)

    def find(self, key):
        if self.lookup_lock:
            self.acquire()
        answer = next((value for k, value in self.records if k == key), 0)
        if self.lookup_lock:
            self.release()
        return answer

    def put(self, address, value, count):
        if hasattr(self, 'written'):
            self.written.update(range(address, address + count))
        super().put(address, value, count)

    def read(self, address, count):
        return bytes(self.bytes[address - self.base:address - self.base + count])

    def write(self, address, data):
        self.bytes[address - self.base:address - self.base + len(data)] = data

    def allocate_records(self, capacity):
        self.controls(0, self.policy & ~1, 0)
        pointer = self.allocate(((capacity * self.l[7] + 3) & -4) + 8, 4)
        if not pointer:
            raise ValueError('qualified registry allocator requires success')
        self.put(pointer, self.disposer, self.p)
        self.prefix_fields.add(pointer)
        self.put(self.object + self.layout[20], len(self.used), 4)
        return pointer + 8

    def dispose_records(self, pointer):
        self.dispose(pointer - 8)
        self.put(self.object + self.layout[20], len(self.used), 4)

    def initialize(self):
        self.put(self.registry, self.symbols['registry_methods062ad'], self.p)
        for index in [4, 5, 6]:
            self.put(self.registry + self.l[index], 0, self.p)
        self.vector = self.allocate_records(32)
        self.capacity = 32
        self.registry_header()
        return self.registry

    def registry_header(self):
        for index, value in [(4, self.vector),
                             (5, self.vector + len(self.records) * self.l[7]),
                             (6, self.vector + self.capacity * self.l[7])]:
            self.put(self.registry + self.l[index], value, self.p)

    def register(self, owner, requested, output):
        self.acquire()
        component = self.read(owner + self.l[11], 1)[0]
        slot = requested
        if slot == 0:
            slot = 15
            while slot and self.find(((component << 4) | slot) & 255):
                slot -= 1
            if slot == 0:
                self.release()
                return 0
        key = ((component << 4) | slot) & 255
        if self.find(key):
            self.release()
            return 0
        index = sum(k < key for k, value in self.records)
        size = self.l[7]
        count = len(self.records)
        if count == self.capacity:
            capacity = max(count + 32, count + count // 2 + count // 8)
            vector = self.allocate_records(capacity)
            for i, (old_key, value) in enumerate(self.records):
                destination = i + (i >= index)
                self.put(vector + destination * size, old_key, 1)
                self.put(vector + destination * size + self.l[9], value, self.p)
            self.put(vector + index * size, key, 1)
            self.put(vector + index * size + self.l[9], owner, self.p)
            self.dispose_records(self.vector)
            self.vector, self.capacity = vector, capacity
        elif index == count:
            self.put(self.vector + count * size, key, 1)
            self.put(self.vector + count * size + self.l[9], owner, self.p)
        else:
            last_key, last_value = self.records[-1]
            self.put(self.vector + count * size, last_key, 1)
            self.put(self.vector + count * size + self.l[9], last_value, self.p)
            moved = self.read(self.vector + index * size, (count - index - 1) * size)
            self.write(self.vector + (index + 1) * size, moved)
            self.put(self.vector + index * size, key, 4)
            self.put(self.vector + index * size + self.l[9], owner, self.p)
        self.records.insert(index, (key, owner))
        self.registry_header()
        if output:
            self.put(output, slot & 255, 1)
        self.release()
        return 1

    def unregister(self, component, slot):
        self.acquire()
        key = ((component << 4) | slot) & 255
        keys = [k for k, value in self.records]
        if not self.find(key):
            self.release()
            return 0
        index = keys.index(key)
        size = self.l[7]
        moved = self.read(self.vector + (index + 1) * size,
                          (len(self.records) - index - 1) * size)
        self.write(self.vector + index * size, moved)
        self.records.pop(index)
        self.registry_header()
        self.release()
        return 1

    def destroy(self):
        self.put(self.registry, self.symbols['registry_methods062ad'], self.p)
        while self.records:
            key = self.records[0][0]
            self.unregister(key >> 4, key & 15)
        self.dispose_records(self.vector)
        return self.registry
