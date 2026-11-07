import math
import struct

from squirrel_wave004_model import HEAP, STATE, NULL, INTEGER, get, put


class TableModel:
    def set_delegate(self, table, delegate):
        cursor = delegate
        while cursor:
            if cursor == table: return False
            cursor = get(self.arena, cursor + 24)
        if delegate: self.retain(0x0a000020, delegate)
        old = get(self.arena, table + 24)
        if old:
            self.release(0x0a000020, old)
            put(self.arena, table + 24, 0)
        put(self.arena, table + 24, delegate)
        return True

    def delegate_operation(self, destination, self_value, delegate):
        names = {1: 'null', 2: 'integer', 4: 'float', 8: 'bool', 32: 'table', 64: 'array', 256: 'function', 512: 'function'}
        failure, arguments = None, []
        if self_value[0] != 0x0a000020:
            failure, arguments = "delegating a '%s'", [names.get(self_value[0] & 0xffffff)]
        elif delegate[0] == 0x0a000020:
            if not self.set_delegate(self_value[1], delegate[1]): failure = 'delegate cycle detected'
        elif delegate[0] == NULL: self.set_delegate(self_value[1], 0)
        else: failure, arguments = "using '%s' as delegate", [names.get(delegate[0] & 0xffffff)]
        if failure:
            self.services.append({'operation': 'formatted-error', 'format': failure, 'typeNames': arguments})
            return False
        self.assign(destination, *self_value)
        return True

    def destroy_table(self, table):
        delegate = get(self.arena, table + 24)
        if delegate: self.release(0x0a000020, delegate)
        put(self.arena, table + 24, 0)
        next, previous = get(self.arena, table + 12), get(self.arena, table + 16)
        if previous: put(self.arena, previous + 12, next)
        else: put(self.arena, STATE + 68, next)
        if next: put(self.arena, next + 16, previous)
        put(self.arena, table + 12, 0, 0)
        nodes, count = get(self.arena, table + 32), get(self.arena, table + 36)
        for index in range(count):
            self.release(*self.read(nodes + index * 20 + 8))
            self.release(*self.read(nodes + index * 20))
        self.services.append({'operation': 'deallocate', 'pointer': nodes, 'bytes': count * 20})
        put(self.arena, table, 0x81d020)
        weak = get(self.arena, table + 8)
        if weak: put(self.arena, weak + 12, NULL, 0)
        self.services.append({'operation': 'deallocate', 'pointer': table, 'bytes': 44})

    def hash_key(self, key):
        tag, value = key
        if tag in (INTEGER, 0x01000008): return value
        if tag == 0x05000004:
            number = struct.unpack('<f', struct.pack('<I', value))[0]
            return (0 if math.isnan(number) else 2147483647 if number >= 2147483648 else -2147483648 if number < -2147483648 else math.trunc(number)) & 0xffffffff
        if tag == 0x08000010: return get(self.arena, value + 24)
        return value >> 3

    def table_find(self, table, key):
        if key[0] == NULL: return 0
        pointer = get(self.arena, table + 32) + (self.hash_key(key) & (get(self.arena, table + 36) - 1)) * 20
        while pointer:
            if self.read(pointer + 8) == key: return pointer
            pointer = get(self.arena, pointer + 16)
        return 0

    def table_nodes(self, table, count):
        nodes = self.allocate(count * 20)
        self.services.append({'operation': 'allocate', 'bytes': count * 20})
        for index in range(count): put(self.arena, nodes + index * 20, NULL, 0, NULL, 0, 0)
        put(self.arena, table + 28, nodes + (count - 1) * 20, nodes, count)

    def table_new(self, destination, requested):
        table = self.allocate(44)
        self.services.append({'operation': 'allocate', 'bytes': 44})
        put(self.arena, table, 0x850dac, 0, 0)
        count = 4
        while requested > count: count *= 2
        self.table_nodes(table, count)
        head = get(self.arena, STATE + 68)
        put(self.arena, table + 12, head, 0, STATE, 0)
        put(self.arena, table + 40, 0)
        if head: put(self.arena, head + 16, table)
        put(self.arena, STATE + 68, table)
        put(self.arena, table + 4, 1)
        self.assign(destination, 0x0a000020, table)
        self.release(0x0a000020, table)

    def table_rehash(self, table, force):
        count = max(4, get(self.arena, table + 36))
        old = get(self.arena, table + 32)
        used = get(self.arena, table + 40)
        if used >= count - count // 4: target = count * 2
        elif used <= count // 4 and count > 4: target = count // 2
        elif force: target = count
        else: return
        self.table_nodes(table, target)
        put(self.arena, table + 40, 0)
        for index in range(count):
            pointer = old + index * 20
            if self.read(pointer + 8)[0] != NULL: self.table_slot(table, self.read(pointer + 8), self.read(pointer))
        for index in range(count):
            self.release(*self.read(old + index * 20 + 8))
            self.release(*self.read(old + index * 20))
        self.services.append({'operation': 'deallocate', 'pointer': old, 'bytes': count * 20})

    def table_slot(self, table, key, value):
        existing = self.table_find(table, key)
        if existing:
            self.assign(existing, *value)
            return
        nodes = get(self.arena, table + 32)
        mask = get(self.arena, table + 36) - 1
        main = nodes + (self.hash_key(key) & mask) * 20
        if self.read(main + 8)[0] != NULL:
            free = get(self.arena, table + 28)
            other = nodes + (self.hash_key(self.read(main + 8)) & mask) * 20
            if main > free and other != main:
                while get(self.arena, other + 16) != main: other = get(self.arena, other + 16)
                put(self.arena, other + 16, free)
                self.assign(free + 8, *self.read(main + 8))
                self.assign(free, *self.read(main))
                put(self.arena, free + 16, get(self.arena, main + 16))
                self.assign(main + 8, NULL, 0)
                self.assign(main, NULL, 0)
                put(self.arena, main + 16, 0)
            else:
                put(self.arena, free + 16, get(self.arena, main + 16))
                put(self.arena, main + 16, free)
                main = free
        self.assign(main + 8, *key)
        while True:
            free = get(self.arena, table + 28)
            if self.read(free + 8)[0] == NULL and not get(self.arena, free + 16):
                self.assign(main, *value)
                put(self.arena, table + 40, get(self.arena, table + 40) + 1)
                return
            if free == nodes: break
            put(self.arena, table + 28, free - 20)
        self.table_rehash(table, True)
        self.table_slot(table, key, value)
