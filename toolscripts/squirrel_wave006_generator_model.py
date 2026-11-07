from squirrel_wave004_model import HEAP, STATE, NULL, get, put
from squirrel_wave006_state import VM, SCRIPT, RESULT


class GeneratorModel:
    def destroy_generator(self, generator):
        if not get(self.arena, generator + 4) & 0x80000000:
            next, previous = get(self.arena, generator + 12), get(self.arena, generator + 16)
            if previous: put(self.arena, previous + 12, next)
            else: put(self.arena, STATE + 68, next)
            if next: put(self.arena, next + 16, previous)
            put(self.arena, generator + 12, 0, 0)
        capacity = get(self.arena, generator + 112)
        if capacity: self.services.append({'operation': 'deallocate', 'pointer': get(self.arena, generator + 104), 'bytes': capacity * 16})
        self.release(*self.read(generator + 64))
        for offset in (44, 32):
            if not get(self.arena, generator + offset + 8): continue
            index = 0
            while index < get(self.arena, generator + offset + 4):
                self.release(*self.read(get(self.arena, generator + offset) + index * 8))
                index += 1
            self.services.append({'operation': 'deallocate', 'pointer': get(self.arena, generator + offset),
                                  'bytes': get(self.arena, generator + offset + 8) * 8})
        self.release(*self.read(generator + 24))
        put(self.arena, generator, 0x81d020)
        weak = get(self.arena, generator + 8)
        if weak: put(self.arena, weak + 12, NULL, 0)
        self.services.append({'operation': 'deallocate', 'pointer': generator, 'bytes': 120})

    def create_generator(self, previous_top, script=SCRIPT, target=None):
        generator = self.allocate(120)
        self.services.append({'operation': 'allocate', 'bytes': 120})
        put(self.arena, generator, 0x81c358, 0, 0, 0, 0, STATE, NULL, 0, 0, 0, 0, 0, 0, 0)
        self.arena[generator - HEAP + 56:generator - HEAP + 116] = bytes(60)
        put(self.arena, generator + 64, NULL, 0)
        self.assign(generator + 24, 0x08000100, script)
        head = get(self.arena, STATE + 68)
        put(self.arena, generator + 12, head, 0)
        if head: put(self.arena, head + 16, generator)
        put(self.arena, STATE + 68, generator)
        self.arena[generator - HEAP + 116] = 0
        self.yield_generator(generator)
        frame = get(self.arena, VM + 132)
        self.return_frame(1, get(self.arena, frame + 32))
        put(self.arena, generator + 4, 1)
        self.assign(RESULT if target is None else self.slot(target), 0x08000400, generator)
        self.release(0x08000400, generator)
        self.clear_stack(previous_top)
        return generator

    def yield_generator(self, generator):
        state = self.arena[generator - HEAP + 116]
        if state in (1, 2):
            self.services.append({'operation': 'formatted-error', 'format': 'internal vm error, yielding dead generator' if state == 1 else 'internal vm error, yielding a dead generator', 'typeNames': []})
            return False
        frame = get(self.arena, VM + 132)
        put(self.arena, generator + 56, get(self.arena, frame), get(self.arena, frame + 4))
        self.assign(generator + 64, *self.read(frame + 8))
        self.arena[generator - HEAP + 72:generator - HEAP + 104] = self.arena[frame - HEAP + 16:frame - HEAP + 48]
        size = get(self.arena, VM + 48) - get(self.arena, VM + 52)
        values, old_size, capacity = (get(self.arena, generator + offset) for offset in (32, 36, 40))
        if size > capacity:
            replacement = self.allocate(size * 8)
            self.services.append({'operation': 'reallocate', 'oldBytes': capacity * 8, 'newBytes': size * 8})
            if capacity: self.arena[replacement - HEAP:replacement - HEAP + capacity * 8] = self.arena[values - HEAP:values - HEAP + capacity * 8]
            values, capacity = replacement, size
            put(self.arena, generator + 32, values, old_size, capacity)
        if old_size < size:
            for index in range(old_size, size):
                put(self.arena, values + index * 8, NULL, 0)
                put(self.arena, generator + 36, index + 1)
        else:
            for index in range(size, old_size): self.release(*self.read(values + index * 8))
            put(self.arena, generator + 36, size)
        for index in range(size):
            slot = self.slot(index)
            self.assign(values + index * 8, *self.read(slot))
            self.assign(slot, NULL, 0)
        packed = get(self.arena, frame + 44)
        count, start = packed & 0xffff, packed >> 16
        pointer, length, capacity = (get(self.arena, generator + offset) for offset in (44, 48, 52))
        for index in reversed(range(count)):
            if length >= capacity:
                enlarged = length * 2 if length else 4
                replacement = self.allocate(enlarged * 8)
                self.services.append({'operation': 'reallocate', 'oldBytes': capacity * 8, 'newBytes': enlarged * 8})
                if capacity: self.arena[replacement - HEAP:replacement - HEAP + capacity * 8] = self.arena[pointer - HEAP:pointer - HEAP + capacity * 8]
                pointer, capacity = replacement, enlarged
                put(self.arena, generator + 44, pointer, length, capacity)
            value = self.read(get(self.arena, VM + 36) + (start + index) * 8)
            length += 1
            put(self.arena, generator + 48, length)
            self.write(pointer + (length - 1) * 8, *value)
            self.retain(*value)
        put(self.arena, generator + 72, 0)
        self.transfer_traps(VM + 120, generator + 104, get(self.arena, generator + 76))
        self.arena[generator - HEAP + 116] = 1
        return True

    def resume_generator(self, generator, target):
        state = self.arena[generator - HEAP + 116]
        if state in (0, 2):
            self.services.append({'operation': 'formatted-error', 'format': 'resuming active generator' if state == 0 else 'resuming dead generator', 'typeNames': []})
            return False
        count, allocated = get(self.arena, VM + 100), get(self.arena, VM + 104)
        if count == allocated: raise ValueError('Resumed frame growth not admitted yet')
        old_base, old_top = get(self.arena, VM + 52), get(self.arena, VM + 48)
        frame = get(self.arena, VM + 96) + count * 48
        put(self.arena, VM + 132, frame)
        put(self.arena, frame, get(self.arena, generator + 56), get(self.arena, generator + 60))
        self.assign(frame + 8, *self.read(generator + 64))
        self.arena[frame - HEAP + 16:frame - HEAP + 48] = self.arena[generator - HEAP + 72:generator - HEAP + 104]
        put(self.arena, VM + 100, count + 1)
        put(self.arena, VM + 52, old_top)
        put(self.arena, frame + 32, target)
        put(self.arena, frame + 16, generator)
        vargs = get(self.arena, generator + 48)
        put(self.arena, frame + 44, vargs)
        self.transfer_traps(generator + 104, VM + 120, get(self.arena, generator + 76))
        size = get(self.arena, generator + 36)
        values = get(self.arena, generator + 32)
        for index in range(size):
            self.assign(self.slot(index), *self.read(values + index * 8))
            self.assign(values, NULL, 0)
        pointer, length, capacity = (get(self.arena, VM + offset) for offset in (36, 40, 44))
        while get(self.arena, generator + 48):
            gen_size = get(self.arena, generator + 48)
            if length >= capacity:
                enlarged = length * 2 if length else 4
                replacement = self.allocate(enlarged * 8)
                self.services.append({'operation': 'reallocate', 'oldBytes': capacity * 8, 'newBytes': enlarged * 8})
                if capacity: self.arena[replacement - HEAP:replacement - HEAP + capacity * 8] = self.arena[pointer - HEAP:pointer - HEAP + capacity * 8]
                pointer, capacity = replacement, enlarged
                put(self.arena, VM + 36, pointer, length, capacity)
            value = self.read(get(self.arena, generator + 44) + (gen_size - 1) * 8)
            length += 1
            put(self.arena, VM + 40, length)
            self.write(pointer + (length - 1) * 8, *value)
            self.retain(*value)
            put(self.arena, generator + 48, gen_size - 1)
            self.release(*value)
        put(self.arena, frame + 44, vargs | ((length - vargs) << 16))
        put(self.arena, VM + 48, old_top + size)
        put(self.arena, frame + 28, old_top - old_base)
        put(self.arena, frame + 24, old_top - old_base)
        self.arena[generator - HEAP + 116] = 0
        if self.case.get('debug'): self.debug(ord('c'), 0)
        return True


    def transfer_traps(self, source, destination, count):
        for unused in range(count):
            pointer, length, capacity = (get(self.arena, destination + offset) for offset in (0, 4, 8))
            if length >= capacity:
                enlarged = length * 2 if length else 4
                replacement = self.allocate(enlarged * 16)
                self.services.append({'operation': 'reallocate', 'oldBytes': capacity * 16, 'newBytes': enlarged * 16})
                if capacity: self.arena[replacement - HEAP:replacement - HEAP + capacity * 16] = self.arena[pointer - HEAP:pointer - HEAP + capacity * 16]
                pointer, capacity = replacement, enlarged
                put(self.arena, destination, pointer, length, capacity)
            previous = get(self.arena, source) + (get(self.arena, source + 4) - 1) * 16
            self.arena[pointer - HEAP + length * 16:pointer - HEAP + (length + 1) * 16] = self.arena[previous - HEAP:previous - HEAP + 16]
            put(self.arena, destination + 4, length + 1)
            put(self.arena, source + 4, get(self.arena, source + 4) - 1)
