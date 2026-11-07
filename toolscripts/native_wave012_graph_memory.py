import random
import struct

from native_wave012_arena_model import CAPACITY, apply


SIZE = 0x40000


class Memory:
    def __init__(self, base, pointer_bytes, seed):
        self.base, self.p = base, pointer_bytes
        self.stride = 4 * self.p
        self.data = bytearray(random.Random(seed).randbytes(SIZE))
        self.fields, self.mutable = [], []
        self.building = True
        self.arena = base + 0x200
        self.flags = base + 0x1000
        self.storage = base + 0x8000
        self.context = base + 0x100
        self.table = base + 0x400
        self.state_slot = base + 0x600
        self.result_slot = base + 0x620
        self.target_slot = base + 0x640
        self.members = base + 0x700
        self.label = base + 0x22000
        self.source_label = base + 0x22100
        self.current = base + 0x24000
        self.reserved = 0
        self.setp(self.arena, self.flags)
        self.setp(self.arena + self.p, self.storage)
        self.setu(self.arena + 2 * self.p, 0)
        self.put(self.flags, bytes(CAPACITY))
        self.setp(self.state_slot, self.current)
        self.setp(self.result_slot, base + 0x25000)
        self.setp(self.target_slot, base + 0x26000)

    def permit(self, address, size):
        if not self.base <= address <= address + size <= self.base + SIZE:
            raise ValueError('Graph field outside guarded memory')
        self.fields.append((address, address + size))

    def get(self, address, size):
        self.permit(address, size)
        return bytes(self.data[address - self.base:address - self.base + size])

    def put(self, address, value):
        self.permit(address, len(value))
        self.data[address - self.base:address - self.base + len(value)] = value
        if not self.building:
            self.mutable.append((address, address + len(value)))

    def ptr(self, address):
        return int.from_bytes(self.get(address, self.p), 'little')

    def setp(self, address, value):
        self.put(address, value.to_bytes(self.p, 'little'))

    def uint(self, address, size=4):
        return int.from_bytes(self.get(address, size), 'little')

    def setu(self, address, value, size=4):
        self.put(address, (value & ((1 << (8 * size)) - 1)).to_bytes(size, 'little'))

    def seal(self):
        self.before = bytes(self.data)
        self.building = False

    def head(self, address):
        self.setp(address, address)
        self.setp(address + self.p, address)

    def append(self, head, link):
        previous = self.ptr(head)
        self.setp(link, previous)
        self.setp(link + self.p, head)
        self.setp(head, link)
        self.setp(previous + self.p, link)

    def remove(self, link):
        previous, following = self.ptr(link), self.ptr(link + self.p)
        self.setp(previous + self.p, following)
        self.setp(following, previous)

    def links(self, head):
        result, link = [], self.ptr(head + self.p)
        while link != head:
            if link in result or len(result) >= CAPACITY:
                raise ValueError('Malformed finite intrusive ring')
            result.append(link)
            link = self.ptr(link + self.p)
        return result

    def reserve(self, count):
        slot = self.reserved
        self.reserved += count
        if self.reserved > CAPACITY:
            raise ValueError('Initial graph exceeds fixed arena')
        self.put(self.flags + slot, bytes([1]) * count)
        return self.storage + slot * self.stride

    def allocate(self, count):
        result = apply(self.get(self.flags, CAPACITY), self.uint(self.arena + 2 * self.p), count)
        self.put(self.flags, result['occupied'])
        self.setu(self.arena + 2 * self.p, result['next'])
        return 0 if result['slot'] is None else self.storage + result['slot'] * self.stride

    def free(self, address, count):
        slot = (address - self.storage) // self.stride
        if not 0 <= slot <= slot + count <= CAPACITY:
            raise ValueError('Invalid logical arena release')
        self.put(self.flags + slot, bytes(count))

    def label_init(self, address, kind=1, value=0, destination=0, ranges=(), owner=True):
        self.setp(address, destination)
        self.setu(address + self.p, kind, 1)
        self.setu(address + self.p + 2, value, 2)
        self.head(address + 2 * self.p)
        self.setp(address + 4 * self.p, self.arena if owner else 0)
        for first, last in ranges:
            node = self.reserve(1)
            self.append(address + 2 * self.p, node)
            self.setu(node + 2 * self.p, first, 2)
            self.setu(node + 2 * self.p + 2, last, 2)

    def label_default(self, address):
        self.setp(address, 0)
        self.setu(address + self.p, 1, 1)
        self.head(address + 2 * self.p)
        self.setp(address + 4 * self.p, 0)

    def destroy(self, address):
        if self.ptr(address + 4 * self.p):
            for node in self.links(address + 2 * self.p):
                self.free(node, 1)
            self.setp(address + 4 * self.p, 0)
            self.head(address + 2 * self.p)

    def state_init(self, address):
        data = address + 2 * self.p
        self.head(address)
        self.head(data)
        self.head(data + 3 * self.p)
        for offset in [2 * self.p, 5 * self.p, 6 * self.p]:
            self.setp(data + offset, self.arena)
        self.setp(data + 7 * self.p, 0)
        self.setu(data + 8 * self.p, 0)
        self.setu(data + 8 * self.p + 4, 0, 1)

    def nfa_init(self, count):
        self.source_count = count
        self.setp(self.context, self.arena)
        self.head(self.context + self.p)
        self.setp(self.context + 3 * self.p, self.arena)
        self.setu(self.context + 4 * self.p, count)
        self.setp(self.context + (20 if self.p == 4 else 40), self.table)
        self.sources = [self.base + 0x3000 + index * 0x80 for index in range(count)]
        for index, address in enumerate(self.sources):
            self.setp(self.table + index * self.p, address)
            self.head(address)
            self.head(address + 2 * self.p)
            self.setp(address + 4 * self.p, self.arena)
            self.setu(address + 5 * self.p, index)

    def nfa_edge(self, source, destination, kind=1, value=0, ranges=()):
        edge = self.reserve(2)
        self.append(self.sources[source] + 2 * self.p, edge)
        self.label_init(edge + 2 * self.p, kind, value, self.sources[destination], ranges)
        return edge

    def pending_edge(self, destination, kind=2, value=0, ranges=()):
        edge = self.reserve(2)
        self.append(self.current + 5 * self.p, edge)
        self.label_init(edge + 2 * self.p, kind, value, self.sources[destination], ranges)
        return edge

    def pressure(self, free_slots=None, cursor=0):
        if free_slots is not None:
            self.put(self.flags + self.reserved, bytes([1]) * (CAPACITY - self.reserved))
            for index in range(self.reserved, min(CAPACITY, self.reserved + free_slots)):
                self.setu(self.flags + index, 0, 1)
        self.setu(self.arena + 2 * self.p, cursor)

    def layout(self, operation, entry, arguments, kinds, expected, result_kind):
        return {'before': self.before, 'after': bytes(self.data), 'arguments': arguments,
                'argumentKinds': kinds, 'expectedReturn': expected, 'returnKind': result_kind,
                'mutable': self.mutable, 'readable': self.fields, 'base': self.base,
                'operation': operation, 'canonicalEntry': entry, 'pointerBytes': self.p,
                'physicalBlockBytes': self.stride}
