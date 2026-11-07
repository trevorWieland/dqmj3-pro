import math
import struct

from squirrel_wave004_model import HEAP, STATE, ARRAY_VTABLE, INTEGER, REF, NULL, get, put
from squirrel_wave006_state import VM


class ContainerModel:
    def indexed_get(self, value, key, destination=VM + 88, raw=False):
        if value[0] == 0x0a000020:
            node = self.table_find(value[1], key)
            if not node:
                delegate = get(self.arena, value[1] + 24)
                if delegate:
                    self.retain(0x0a000020, delegate)
                    found = self.indexed_get((0x0a000020, delegate), key, destination, raw)
                    self.release(0x0a000020, delegate)
                    if found: return True
                if raw: return False
                raise ValueError('Missing table lookup formatting remains unreconstructed')
            found = self.read(node)
            if found[0] == 0x08010000: found = self.read(found[1] + 12)
            self.assign(destination, *found)
            return True
        if value[0] != REF or not key[0] & 0x04000000: raise ValueError('Non-array lookup remains unreconstructed')
        if key[0] == 0x05000004:
            number = struct.unpack('<f', struct.pack('<I', key[1]))[0]
            index = 0 if math.isnan(number) else 2147483647 if number >= 2147483648 else -2147483648 if number < -2147483648 else math.trunc(number)
        else: index = struct.unpack('<i', struct.pack('<I', key[1]))[0]
        if not 0 <= index < get(self.arena, value[1] + 28):
            if raw: return False
            raise ValueError('Lookup failure formatting remains unreconstructed')
        found = self.read(get(self.arena, value[1] + 24) + index * 8)
        if found[0] == 0x08010000: found = self.read(found[1] + 12)
        self.assign(destination, *found)
        return True

    def indexed_set(self, value, key, replacement):
        if value[0] == 0x0a000020:
            node = self.table_find(value[1], key)
            if not node:
                delegate = get(self.arena, value[1] + 24)
                if not delegate: raise ValueError('Missing rooted/delegated table Set remains unreconstructed')
                self.retain(0x0a000020, delegate)
                self.indexed_set((0x0a000020, delegate), key, replacement)
                self.release(0x0a000020, delegate)
                return
            self.assign(node, *replacement)
            return
        if value[0] != REF or not key[0] & 0x04000000: raise ValueError('Non-array/table Set remains unreconstructed')
        if key[0] == 0x05000004:
            number = struct.unpack('<f', struct.pack('<I', key[1]))[0]
            index = 0 if math.isnan(number) else 2147483647 if number >= 2147483648 else -2147483648 if number < -2147483648 else math.trunc(number)
        else: index = struct.unpack('<i', struct.pack('<I', key[1]))[0]
        if not 0 <= index < get(self.arena, value[1] + 28): raise ValueError('Failed Set lifetime remains unreconstructed')
        self.assign(get(self.arena, value[1] + 24) + index * 8, *replacement)

    def vararg_get(self, destination, key):
        frame = get(self.arena, VM + 132)
        packed = get(self.arena, frame + 44)
        count, start = packed & 0xffff, packed >> 16
        if not count: failure, names = "the function doesn't have var args", []
        elif not key[0] & 0x04000000:
            failure, names = "indexing 'vargv' with %s", [{1: 'null', 8: 'bool', 512: 'function'}.get(key[0] & 0xffffff)]
        else:
            if key[0] == 0x05000004:
                value = struct.unpack('<f', struct.pack('<I', key[1]))[0]
                index = 0 if math.isnan(value) else 2147483647 if value >= 2147483648 else -2147483648 if value < -2147483648 else math.trunc(value)
            else: index = struct.unpack('<i', struct.pack('<I', key[1]))[0]
            if 0 <= index < count:
                self.assign(destination, *self.read(get(self.arena, VM + 36) + (start + index) * 8))
                return True
            failure, names = 'vargv index out of range', []
        self.services.append({'operation': 'formatted-error', 'format': failure, 'typeNames': names})
        return False

    def new_array(self, destination, capacity):
        self.services.append({'operation': 'allocate', 'bytes': 36})
        if self.case.get('allocationFails'):
            self.terminal = 'assertion'
            return
        array = self.allocate(36)
        head = get(self.arena, STATE + 68)
        put(self.arena, array, ARRAY_VTABLE, 1, 0, head, 0, STATE, 0, 0, 0)
        if head: put(self.arena, head + 16, array)
        put(self.arena, STATE + 68, array)
        self.assign(destination, REF, array)
        self.release(REF, array)
        capacity = capacity if capacity else 4
        values = self.allocate(capacity * 8)
        self.services.append({'operation': 'reallocate', 'oldBytes': 0, 'newBytes': capacity * 8})
        put(self.arena, array + 24, values, 0, capacity)

    def append_array(self, array, value):
        self.retain(*value)
        pointer, size, capacity = (get(self.arena, array + offset) for offset in (24, 28, 32))
        if size >= capacity:
            enlarged = size * 2 if size else 4
            replacement = self.allocate(enlarged * 8)
            self.services.append({'operation': 'reallocate', 'oldBytes': capacity * 8, 'newBytes': enlarged * 8})
            self.arena[replacement - HEAP:replacement - HEAP + capacity * 8] = self.arena[pointer - HEAP:pointer - HEAP + capacity * 8]
            pointer, capacity = replacement, enlarged
            put(self.arena, array + 24, pointer, size, capacity)
        put(self.arena, array + 28, size + 1)
        self.write(pointer + size * 8, *value)
        self.retain(*value)
        self.release(*value)
