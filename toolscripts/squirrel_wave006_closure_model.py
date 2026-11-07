from squirrel_wave004_model import HEAP, STATE, NULL, get, put
from squirrel_wave006_state import VM


class ClosureModel:
    def destroy_closure(self, closure):
        arena = self.arena
        next, previous = get(arena, closure + 12), get(arena, closure + 16)
        if previous: put(arena, previous + 12, next)
        else: put(arena, STATE + 68, next)
        if next: put(arena, next + 16, previous)
        put(arena, closure + 12, 0, 0)
        for offset in (52, 40):
            pointer, size, capacity = (get(arena, closure + offset + index) for index in (0, 4, 8))
            if not capacity: continue
            for index in range(size): self.release(*self.read(pointer + index * 8))
            self.services.append({'operation': 'deallocate', 'pointer': pointer, 'bytes': capacity * 8})
        self.release(*self.read(closure + 32))
        self.release(*self.read(closure + 24))
        put(arena, closure, 0x81d020)
        weak = get(arena, closure + 8)
        if weak: put(arena, weak + 12, NULL, 0)
        self.services.append({'operation': 'deallocate', 'pointer': closure, 'bytes': 64})

    def create_closure(self, destination, function):
        self.services.append({'operation': 'allocate', 'bytes': 64})
        if self.case.get('allocationFails'): raise ValueError('Closure allocation failure is not yet admitted')
        closure = self.allocate(64)
        head = get(self.arena, STATE + 68)
        put(self.arena, closure, 0x8516d0, 0, 0, head, 0, STATE, NULL, 0, 0x08002000, function, 0, 0, 0, 0, 0, 0)
        put(self.arena, function + 4, get(self.arena, function + 4) + 1)
        if head: put(self.arena, head + 16, closure)
        put(self.arena, STATE + 68, closure)
        for count_offset, vector_offset in ((76, 40), (84, 52)):
            count = get(self.arena, function + count_offset)
            if not count: continue
            values = self.allocate(count * 8)
            self.services.append({'operation': 'reallocate', 'oldBytes': 0, 'newBytes': count * 8})
            put(self.arena, closure + vector_offset, values, 0, count)
            size = 0
            for index in range(count):
                if count_offset == 76:
                    descriptor = get(self.arena, function + 80) + index * 20
                    kind = get(self.arena, descriptor) & 255
                    source_index = get(self.arena, descriptor + 16)
                    if kind == 0: value = self.read(self.slot(source_index))
                    elif kind == 2:
                        parent = get(self.arena, get(self.arena, VM + 132) + 12)
                        value = self.read(get(self.arena, parent + 40) + source_index * 8)
                    elif kind == 1:
                        self.write(values + size * 8, NULL, 0)
                        put(self.arena, closure + vector_offset + 4, size + 1)
                        self.indexed_get(self.read(self.slot(0)), self.read(descriptor + 12), values + size * 8)
                        size += 1
                        continue
                    else: continue
                else:
                    source_index = get(self.arena, get(self.arena, function + 88) + index * 4)
                    value = self.read(self.slot(source_index))
                put(self.arena, closure + vector_offset + 4, size + 1)
                self.write(values + size * 8, *value)
                self.retain(*value)
                size += 1
        put(self.arena, closure + 4, 1)
        self.assign(destination, 0x08000100, closure)
        self.release(0x08000100, closure)
