from squirrel_wave004_model import NULL, INTEGER, get, HEAP
from squirrel_wave006_state import VM


class IterationModel:
    def foreach(self, self_value, key, value, iterator, exit_position):
        if self_value[0] == 0x08000400:
            generator = self_value[1]
            if self.arena[generator - HEAP + 116] == 2: return exit_position
            current = self.read(iterator)
            if current[0] not in (NULL, INTEGER): raise ValueError('Generator iterator is outside the qualified domain')
            position = (current[1] + 1) & 0xffffffff if current[0] == INTEGER else 0
            self.scalar(key, INTEGER, position)
            self.scalar(iterator, INTEGER, position)
            self.resume_generator(generator, (value - get(self.arena, VM + 24)) // 8 - get(self.arena, VM + 52))
            return 0
        current = self.read(iterator)
        if current[0] == NULL: position = 0
        elif current[0] == INTEGER: position = current[1]
        else: raise ValueError('Iterator type assertion is outside normal returns')
        if self_value[0] == 0x08000040:
            if position >= get(self.arena, self_value[1] + 28): return exit_position
            self.scalar(key, INTEGER, position)
            element = self.read(get(self.arena, self_value[1] + 24) + position * 8)
        elif self_value[0] == 0x0a000020:
            if position & 0x80000000: raise ValueError('Negative table iterator index is not admitted')
            count = get(self.arena, self_value[1] + 36)
            nodes = get(self.arena, self_value[1] + 32)
            while position < count and self.read(nodes + position * 20 + 8)[0] == NULL: position += 1
            if position >= count: return exit_position
            self.assign(key, *self.read(nodes + position * 20 + 8))
            element = self.read(nodes + position * 20)
        else: raise ValueError('Non-array/table iteration remains unreconstructed')
        if element[0] == 0x08010000: element = self.read(element[1] + 12)
        self.assign(value, *element)
        self.scalar(iterator, INTEGER, position + 1)
        return 1
