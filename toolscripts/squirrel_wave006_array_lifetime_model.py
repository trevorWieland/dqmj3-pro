from squirrel_wave004_model import STATE, NULL, get, put


class ArrayLifetimeModel:
    def destroy_array(self, array):
        if not get(self.arena, array + 4) & 0x80000000:
            next, previous = get(self.arena, array + 12), get(self.arena, array + 16)
            if previous: put(self.arena, previous + 12, next)
            else: put(self.arena, STATE + 68, next)
            if next: put(self.arena, next + 16, previous)
            put(self.arena, array + 12, 0, 0)
        if get(self.arena, array + 32):
            index = 0
            while index < get(self.arena, array + 28):
                self.release(*self.read(get(self.arena, array + 24) + index * 8))
                index += 1
            self.services.append({'operation': 'deallocate', 'pointer': get(self.arena, array + 24),
                                  'bytes': get(self.arena, array + 32) * 8})
        put(self.arena, array, 0x81d020)
        weak = get(self.arena, array + 8)
        if weak: put(self.arena, weak + 12, NULL, 0)
        self.services.append({'operation': 'deallocate', 'pointer': array, 'bytes': 36})
