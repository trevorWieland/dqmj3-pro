import math
import struct

from squirrel_wave004_model import HEAP_BYTES, ARRAY_VTABLE, INACTIVE_OFFSETS

from squirrel_wave006_state import State as BaseState, prepare, SCRIPT, FUNCTION, CODE, LITERALS, CAPTURES, DEFAULTS, VARARGS, CALLABLE, EXTRA, VM, HEAP, FRAMES, FIXTURE, RESULT, CLOSURE, NULL, REF, INTEGER, get, put, sha
from squirrel_wave006_container_model import ContainerModel
from squirrel_wave006_closure_model import ClosureModel
from squirrel_wave006_table_model import TableModel
from squirrel_wave006_iteration_model import IterationModel
from squirrel_wave006_generator_model import GeneratorModel
from squirrel_wave006_array_lifetime_model import ArrayLifetimeModel


class State(ArrayLifetimeModel, GeneratorModel, IterationModel, TableModel, ClosureModel, ContainerModel, BaseState):
    def compare_values(self, left, right):
        if left[0] == right[0]:
            if left[1] == right[1]: return 0
            if left[0] == INTEGER:
                return struct.unpack('<i', struct.pack('<I', (left[1] - right[1]) & 0xffffffff))[0]
            if left[0] == 0x05000004:
                a, b = (struct.unpack('<f', struct.pack('<I', row[1]))[0] for row in (left, right))
                return -1 if a < b else 1
            raise ValueError('Object/string comparison service not yet reconstructed')
        if left[0] & right[0] & 0x04000000:
            a, b = [struct.unpack('<f', struct.pack('<f', struct.unpack('<i', struct.pack('<I', bits))[0]))[0]
                    if tag == INTEGER else struct.unpack('<f', struct.pack('<I', bits))[0] for tag, bits in (left, right)]
            return 0 if a == b else -1 if b > a else 1
        if left[0] == NULL: return -1
        if right[0] == NULL: return 1
        raise ValueError('Non-numeric comparison error service not yet reconstructed')

    def arithmetic(self, operation, left, right, destination=VM + 88):
        if left[0] == INTEGER and right[0] == INTEGER:
            a, b = left[1], right[1]
            x, y = (struct.unpack('<i', struct.pack('<I', value))[0] for value in (a, b))
            if operation == ord('+'): result = a + b
            elif operation == ord('-'): result = a - b
            elif operation == ord('*'): result = a * b
            elif operation in (ord('/'), ord('%')):
                if not b:
                    self.services.append({'operation': 'formatted-error', 'format': 'division by zero' if operation == ord('/') else 'modulo by zero', 'typeNames': []})
                    return False
                quotient = (abs(x) // abs(y)) * (-1 if (x < 0) != (y < 0) else 1)
                result = quotient if operation == ord('/') else x - quotient * y
            else: result = 0xdeadbeef
            if destination is None: self.arithmetic_result = (INTEGER, result & 0xffffffff)
            else: self.scalar(destination, INTEGER, result & 0xffffffff)
            return True
        values = []
        for tag, bits in (left, right):
            if tag == INTEGER:
                integer = struct.unpack('<i', struct.pack('<I', bits))[0]
                value = struct.unpack('<f', struct.pack('<f', float(integer)))[0]
            else: value = struct.unpack('<f', struct.pack('<I', bits))[0]
            values.append(value)
        x, y = values
        if operation == ord('+'): result = x + y
        elif operation == ord('-'): result = x - y
        elif operation == ord('*'): result = x * y
        elif operation == ord('/'):
            result = x / y if y else math.copysign(math.inf, x * math.copysign(1.0, y)) if x else math.nan
        else: result = 15.0
        try: encoded = struct.pack('<f', result)
        except OverflowError: encoded = struct.pack('<f', math.copysign(math.inf, result))
        value = (0x05000004, struct.unpack('<I', encoded)[0])
        if destination is None: self.arithmetic_result = value
        else: self.scalar(destination, *value)
        return True

    def numerical(self, op, a0, a1, a2, a3):
        names = {1: 'null', 2: 'integer', 4: 'float', 8: 'bool', 16: 'string', 32: 'table',
                 64: 'array', 128: 'userdata', 256: 'function', 512: 'function', 1024: 'generator',
                 2048: 'userdata', 4096: 'thread', 8192: 'function', 16384: 'class', 32768: 'instance', 65536: 'weakref'}
        right = self.read(self.slot(a1))
        left = self.read(self.slot(a2)) if op == 18 else right
        failure, arguments = None, []
        if op == 18:
            if left[0] != INTEGER or right[0] != INTEGER:
                failure, arguments = "bitwise op between '%s' and '%s'", [names.get(left[0] & 0xffffff), names.get(right[0] & 0xffffff)]
            else:
                a, b = left[1], right[1]
                amount = b & 255
                if a3 == 0: bits = a & b
                elif a3 == 2: bits = a | b
                elif a3 == 3: bits = a ^ b
                elif a3 == 4: bits = (a << amount) & 0xffffffff if amount < 32 else 0
                elif a3 == 5:
                    signed = a - 0x100000000 if a & 0x80000000 else a
                    bits = (signed >> min(amount, 32)) & 0xffffffff
                elif a3 == 6: bits = a >> amount if amount < 32 else 0
                else: failure = 'internal vm error bitwise op failed'
        elif right[0] == INTEGER: bits = (-right[1] if op == 45 else ~right[1]) & 0xffffffff
        elif op == 45 and right[0] == 0x05000004:
            self.scalar(self.slot(a0), right[0], right[1] ^ 0x80000000)
            return True
        else:
            failure = "attempt to negate a %s" if op == 45 else "attempt to perform a bitwise op on a %s"
            arguments = [names.get(right[0] & 0xffffff)]
        if failure:
            self.services.append({'operation': 'formatted-error', 'format': failure, 'typeNames': arguments})
            return False
        self.scalar(self.slot(a0), INTEGER, bits)
        return True

    def start_call(self, script=SCRIPT, count=None, base=None, target=None, tail=False):
        arena, case = self.arena, self.case
        count = case.get('arguments', 1) if count is None else count
        function = get(arena, script + 36)
        parameters = get(arena, function + 60)
        base = case.get('frameBase', 4) if base is None else base
        initial_arguments = count
        old_base, old_top = get(arena, VM + 52), get(arena, VM + 48)
        defaults = get(arena, function + 84)
        default_values = get(arena, script + 52)
        difference = parameters - count
        if parameters != count:
            if defaults and count < parameters and difference <= defaults:
                for index in range(defaults - difference, defaults):
                    self.assign(get(arena, VM + 24) + (base + count) * 8, *self.read(default_values + index * 8))
                    count += 1
            elif arena[function - HEAP + 33] and count >= parameters:
                for index in range(count - parameters):
                    source = get(arena, VM + 24) + (base + parameters + index) * 8
                    value = self.read(source)
                    pointer, size, capacity = get(arena, VM + 36), get(arena, VM + 40), get(arena, VM + 44)
                    if size >= capacity:
                        capacity = size * 2 if size else 4
                        replacement = self.allocate(capacity * 8)
                        old_bytes = get(arena, VM + 44) * 8
                        self.services.append({'operation': 'reallocate', 'oldBytes': old_bytes, 'newBytes': capacity * 8})
                        arena[replacement - HEAP:replacement - HEAP + old_bytes] = arena[pointer - HEAP:pointer - HEAP + old_bytes]
                        pointer = replacement
                    put(arena, VM + 36, pointer, size + 1, capacity)
                    self.write(pointer + size * 8, *value)
                    self.retain(*value)
                    self.assign(source, NULL, 0)
            else:
                self.services.append({'operation': 'error', 'message': 'wrong number of parameters'})
                return False
        if not tail:
            frame = get(arena, VM + 96) + get(arena, VM + 100) * 48
            arena[frame - HEAP:frame - HEAP + 48] = bytes(48)
            put(arena, frame, 0, 0, NULL, 0, 0, 0, base - old_base, old_top - old_base,
                old_top - initial_arguments if target is None else target, 1, 0, 0)
            put(arena, VM + 100, get(arena, VM + 100) + 1)
            put(arena, VM + 132, frame)
        else:
            frame = get(arena, VM + 132)
            put(arena, frame + 36, get(arena, frame + 36) + 1)
        self.assign(frame + 8, 0x08000100, script)
        put(arena, frame, function + 96, get(arena, function + 56))
        put(arena, frame + 44, (get(arena, VM + 40) - (count - parameters)) << 16 | (count - parameters))
        window = get(arena, function + 28)
        new_top = base + window
        size = get(arena, VM + 28)
        if new_top + window * 2 > size:
            pointer = self.resize(get(arena, VM + 24), size + window * 2, 8, size,
                                  lambda address: put(arena, address, NULL, 0))
            put(arena, VM + 24, pointer, size + window * 2, size + window * 2)
        put(arena, VM + 48, new_top, base)
        if case.get('debug'): self.debug(ord('c'), 0)
        return True

    def false(self, value):
        tag, bits = value
        if tag == 0x05000004:
            return struct.unpack('<f', struct.pack('<I', bits))[0] == 0.0
        return bits == 0

    def slot(self, index):
        return get(self.arena, VM + 24) + (get(self.arena, VM + 52) + index) * 8

    def call_native(self, a0, a1, a2, a3, opcode=6):
        arena = self.arena
        self.assign(VM + 88, *self.read(self.slot(a1)))
        stack_base = get(arena, VM + 52) + a2
        function = get(arena, self.read(VM + 88)[1] + 36) if self.read(VM + 88)[0] == 0x08000100 else 0
        tail = opcode == 5 and function and not arena[function - HEAP + 32]
        if tail:
            frame = get(arena, VM + 132)
            self.vararg_pop(frame)
            for index in range(a3): self.assign(self.slot(index), *self.read(self.slot(a2 + index)))
            stack_base, a0 = get(arena, VM + 52), get(arena, frame + 32)
        callable = list(self.read(VM + 88))
        self.retain(*callable)
        if callable[0] == 0x08000100:
            previous_top = get(arena, VM + 48)
            success = self.start_call(callable[1], a3, stack_base, a0, tail)
            if success and arena[function - HEAP + 32]: self.create_generator(previous_top, callable[1], a0)
            self.release(*callable)
            return 0 if success else -1
        saved = self.case
        self.case = {**saved, 'base': get(arena, VM + 52) + a2, 'arguments': a3,
                     'handler': 'array' if saved.get('nativeArray') else 'fixture',
                     'returnCode': saved.get('nativeReturn', 1)}
        if saved.get('nativeArray'):
            self.case['length'] = self.read(self.slot(a2 + 1))[1]
        previous_frames = len(self.frames)
        passed = super().native(callable, 2)
        self.case = saved
        if len(self.frames) > previous_frames and not self.source and self.witnesses is not None:
            witness = self.witnesses[self.native_index]
            for offset, value in zip((0, 4, 32, 40), witness): put(arena, self.frames[-1] + offset, value)
        self.native_index += 1
        if self.terminal != 'returned': return None
        if not passed:
            self.release(*callable)
            return -1
        suspended = not saved.get('nativeArray') and saved.get('nativeReturn', 1) == -666
        if suspended:
            frame = get(arena, VM + 132)
            put(arena, VM + 148, 1, get(arena, frame + 40), a0, 0, get(arena, frame + 44))
            self.assign(RESULT, *callable)
        elif a0 != 0xffffffff:
            self.assign(self.slot(a0), *callable)
        self.release(*callable)
        return int(suspended)

    def unwind(self):
        arena = self.arena
        error = self.read(VM + 64)
        self.retain(*error)
        old_top = get(arena, VM + 48)
        if get(arena, VM + 132):
            if self.case.get('notifyAll') or not self.traps and self.case.get('raiseError', 1):
                put(arena, FIXTURE + 728, get(arena, FIXTURE + 728) + 1, *error)
            if self.traps:
                unwound = 0
                while get(arena, VM + 132):
                    frame = get(arena, VM + 132)
                    if get(arena, frame + 20):
                        pointer = get(arena, VM + 120) + (get(arena, VM + 124) - 1) * 16
                        base, top, code, target = struct.unpack_from('<IIII', arena, pointer - HEAP)
                        put(arena, frame, code)
                        put(arena, VM + 48, top, base)
                        self.assign(self.slot(target), *error)
                        put(arena, VM + 124, get(arena, VM + 124) - 1)
                        put(arena, frame + 20, get(arena, frame + 20) - 1)
                        self.traps -= 1
                        self.clear_stack(old_top)
                        self.release(*error)
                        return 1
                    if self.read(frame + 8)[0] != 0x08000100 and unwound: break
                    self.vararg_pop(frame)
                    self.pop_frame()
                    unwound += 1
            while get(arena, VM + 100):
                frame = get(arena, VM + 132)
                root = get(arena, frame + 40)
                base = get(arena, VM + 52) - get(arena, frame + 24)
                put(arena, VM + 48, base + get(arena, frame + 28), base)
                self.vararg_pop(frame)
                count = get(arena, VM + 100) - 1
                put(arena, VM + 100, count)
                self.clear(frame + 8)
                current = get(arena, VM + 96) + (count - 1) * 48 if count else 0
                put(arena, VM + 132, current)
                if root or current and self.read(current + 8)[0] != 0x08000100: break
            self.clear_stack(old_top)
        self.assign(VM + 64, *error)
        self.release(*error)
        return 0

    def pop_frame(self):
        count = get(self.arena, VM + 100) - 1
        put(self.arena, VM + 100, count)
        self.clear(get(self.arena, VM + 132) + 8)
        put(self.arena, VM + 132, get(self.arena, VM + 96) + (count - 1) * 48 if count else 0)

    def push_trap(self, a0, a1):
        arena = self.arena
        pointer, size, capacity = get(arena, VM + 120), get(arena, VM + 124), get(arena, VM + 128)
        if size >= capacity:
            enlarged = size * 2 if size else 4
            replacement = self.allocate(enlarged * 16)
            self.services.append({'operation': 'reallocate', 'oldBytes': capacity * 16, 'newBytes': enlarged * 16})
            arena[replacement - HEAP:replacement - HEAP + capacity * 16] = arena[pointer - HEAP:pointer - HEAP + capacity * 16]
            pointer, capacity = replacement, enlarged
        frame = get(arena, VM + 132)
        put(arena, VM + 120, pointer, size + 1, capacity)
        put(arena, pointer + size * 16, get(arena, VM + 52), get(arena, VM + 48), get(arena, frame) + a1 * 8, a0)
        put(arena, frame + 20, get(arena, frame + 20) + 1)
        self.traps += 1

    def execute(self):
        arena, case = self.arena, self.case
        self.traps = 0
        depth = get(arena, VM + 144)
        if depth > 99:
            self.services.append({'operation': 'error', 'message': 'Native stack overflow'})
            return 0
        put(arena, VM + 144, depth + 1)
        if case.get('mode', 2) == 0:
            previous_top = get(arena, VM + 48)
            self.assign(VM + 88, 0x08000100, SCRIPT)
            if not self.start_call():
                if not get(arena, VM + 132): put(arena, FIXTURE + 728, 1, *self.read(VM + 64))
                put(arena, VM + 144, depth)
                return 0
            if case.get('generatorFunction'):
                self.create_generator(previous_top)
                put(arena, VM + 144, depth)
                return 1
            put(arena, get(arena, VM + 132) + 40, 1)
        else:
            frame = get(arena, VM + 132)
            put(arena, frame + 40, get(arena, VM + 152), get(arena, VM + 164))
            put(arena, VM + 148, 0)
        for unused in range(256):
            frame = get(arena, VM + 132)
            pointer = get(arena, frame)
            a1, op, a0, a2, a3 = struct.unpack_from('<iBBBB', arena, pointer - HEAP)
            put(arena, frame, pointer + 8)
            self.steps.append({'address': pointer, 'opcode': op})
            if op >= 61: continue
            if op == 0:
                if case.get('debug'): self.debug(ord('l'), a1)
            elif op in (1, 4):
                literals = get(arena, frame + 4)
                self.assign(self.slot(a0), *self.read(literals + a1 * 8))
                if op == 4: self.assign(self.slot(a2), *self.read(literals + a3 * 8))
            elif op in (2, 3): self.scalar(self.slot(a0), INTEGER if op == 2 else 0x05000004, a1 & 0xffffffff)
            elif op in (10, 23):
                self.assign(self.slot(a0), *self.read(self.slot(a1)))
                if op == 23: self.assign(self.slot(a2), *self.read(self.slot(a3)))
            elif op in (7, 8, 9, 14):
                preparing, literal = op in (7, 8), op in (8, 9)
                key = self.read(get(arena, frame + 4) + a1 * 8) if literal else self.read(self.slot(a1 if preparing else a2))
                value = self.read(self.slot(a2 if preparing or literal else a1))
                self.indexed_get(value, key)
                if preparing: self.assign(self.slot(a3), *value)
                self.assign(self.slot(a0), *self.read(VM + 88))
            elif op == 20:
                for index in range(max(0, a1)): self.assign(self.slot(a0 + index), NULL, 0)
            elif op == 21: self.assign(self.slot(a0), *self.read(VM + 56))
            elif op == 22: self.assign(self.slot(a0), 0x01000008, int(a1 != 0))
            elif op == 27:
                script = get(arena, frame + 12)
                self.assign(self.slot(a0), *self.read(get(arena, script + 40) + a1 * 8))
            elif op == 28: self.scalar(self.slot(a0), INTEGER, get(arena, frame + 44) & 0xffff)
            elif op == 29:
                if not self.vararg_get(self.slot(a0), self.read(self.slot(a1))):
                    if self.unwind(): continue
                    put(arena, VM + 144, depth)
                    return 0
            elif op == 31:
                self.new_array(self.slot(a0), a1)
                if self.terminal != 'returned': return None
            elif op == 30: self.table_new(self.slot(a0), a1)
            elif op == 50:
                value = self.read(self.slot(a1))
                if value[0] != 0x08000400: raise ValueError('Invalid resume receiver formatting not admitted yet')
                if not self.resume_generator(value[1], a0):
                    if self.unwind(): continue
                    put(arena, VM + 144, depth)
                    return 0
                self.traps += get(arena, get(arena, VM + 132) + 20)
            elif op == 49:
                generator = get(arena, frame + 16)
                if not generator: raise ValueError('Yield assertion is not a normal return')
                if a1 != 255: self.assign(VM + 88, *self.read(self.slot(a1)))
                if not self.yield_generator(generator): raise ValueError('Yield state error not admitted yet')
                self.traps -= get(arena, frame + 20)
                if a1 != 255: self.assign(self.slot(a1), *self.read(VM + 88))
                if self.return_frame(a0, a1):
                    self.assign(RESULT, *self.read(VM + 88))
                    put(arena, VM + 144, depth)
                    return 1
            elif op == 12:
                if not self.delete_operation(self.slot(a0), self.read(self.slot(a1)), self.read(self.slot(a2))):
                    if self.unwind(): continue
                    put(arena, VM + 144, depth)
                    return 0
            elif op == 51:
                jump = self.foreach(self.read(self.slot(a0)), self.slot(a2), self.slot(a2 + 1), self.slot(a2 + 2), a1)
                active = get(arena, VM + 132)
                put(arena, active, get(arena, active) + jump * 8)
            elif op == 52:
                object_type, generator = self.read(self.slot(a0))
                if object_type != 0x08000400: raise ValueError('PostForeach assertion is outside normal returns')
                if arena[generator - HEAP + 116] == 2: put(arena, frame, get(arena, frame) + (a1 - 1) * 8)
            elif op == 53:
                if not self.delegate_operation(self.slot(a0), self.read(self.slot(a1)), self.read(self.slot(a2))):
                    if self.unwind(): continue
                    put(arena, VM + 144, depth)
                    return 0
            elif op == 13:
                self.indexed_set(self.read(self.slot(a1)), self.read(self.slot(a2)), self.read(self.slot(a3)))
                if a0 != a3: self.assign(self.slot(a0), *self.read(self.slot(a3)))
            elif op == 11:
                self.table_slot(self.read(self.slot(a1))[1], self.read(self.slot(a2)), self.read(self.slot(a3)))
                if a0 != a3: self.assign(self.slot(a0), *self.read(self.slot(a3)))
            elif op == 32:
                value = self.read(get(arena, frame + 4) + a1 * 8) if a3 else self.read(self.slot(a1))
                self.append_array(self.read(self.slot(a0))[1], value)
            elif op == 48:
                parent = get(arena, frame + 12)
                function = get(arena, parent + 36)
                prototype = get(arena, get(arena, function + 72) + a1 * 8 + 4)
                self.create_closure(self.slot(a0), prototype)
            elif op == 24 or op in (25, 26) and self.false(self.read(self.slot(a0))) == (op == 26):
                put(arena, frame, get(arena, frame) + a1 * 8)
            elif op in (43, 44):
                if self.false(self.read(self.slot(a2))) == (op == 43):
                    self.assign(self.slot(a0), *self.read(self.slot(a2)))
                    put(arena, frame, get(arena, frame) + a1 * 8)
            elif op == 46: self.assign(self.slot(a0), 0x01000008, int(self.false(self.read(self.slot(a1)))))
            elif op in (15, 16, 40):
                left = self.read(self.slot(a2))
                right = self.read(get(arena, frame + 4) + a1 * 8) if op != 40 and a3 else self.read(self.slot(a1))
                if op == 40:
                    comparison = self.compare_values(left, right)
                    value = {0: comparison > 0, 2: comparison >= 0, 3: comparison < 0, 4: comparison <= 0}[a3]
                else:
                    value = left[1] == right[1] if left[0] == right[0] else self.compare_values(left, right) == 0 if left[0] & right[0] & 0x04000000 else False
                    if op == 16: value = not value
                self.assign(self.slot(a0), 0x01000008, int(value))
            elif op in (18, 45, 47):
                if not self.numerical(op, a0, a1, a2, a3):
                    if self.unwind(): continue
                    put(arena, VM + 144, depth)
                    return 0
            elif op == 41:
                found = self.indexed_get(self.read(self.slot(a1)), self.read(self.slot(a2)), raw=True)
                self.assign(self.slot(a0), 0x01000008, int(found))
            elif op in (35, 37, 39):
                increment = (INTEGER, struct.unpack('<b', bytes([a3]))[0] & 0xffffffff)
                destination = self.slot(a0) if op != 39 else None
                right = self.read(self.slot(a2)) if op == 35 else increment
                if not self.arithmetic(a3 if op == 35 else ord('+'), self.read(self.slot(a1)), right, destination):
                    if self.unwind(): continue
                    put(arena, VM + 144, depth)
                    return 0
                if op == 39:
                    self.assign(self.slot(a0), *self.read(self.slot(a1)))
                    self.assign(self.slot(a1), *self.arithmetic_result)
                else: self.assign(self.slot(a1), *self.read(destination))
            elif op == 17:
                if not self.arithmetic(a3, self.read(self.slot(a2)), self.read(self.slot(a1))):
                    if self.unwind(): continue
                    put(arena, VM + 144, depth)
                    return 0
                self.assign(self.slot(a0), *self.read(VM + 88))
            elif op in (5, 6):
                suspend = self.call_native(a0, a1, a2, a3, op)
                if self.terminal != 'returned': return None
                if suspend < 0:
                    outcome = self.unwind()
                    if outcome: continue
                    put(arena, VM + 144, depth)
                    return outcome
                if suspend:
                    put(arena, VM + 144, depth)
                    return 1
            elif op == 56: self.push_trap(a0, a1)
            elif op == 57:
                for unused in range(a0):
                    put(arena, VM + 124, get(arena, VM + 124) - 1)
                    put(arena, frame + 20, get(arena, frame + 20) - 1)
                    self.traps -= 1
            elif op == 58:
                self.assign(VM + 64, *self.read(self.slot(a0)))
                if self.unwind(): continue
                put(arena, VM + 144, depth)
                return 0
            elif op == 19:
                generator = get(arena, frame + 16)
                if generator:
                    arena[generator - HEAP + 116] = 2
                    index = 0
                    while index < get(arena, generator + 36):
                        self.release(*self.read(get(arena, generator + 32) + index * 8))
                        index += 1
                    put(arena, generator + 36, 0)
                    self.clear(generator + 24)
                if self.return_frame(a0, a1):
                    self.assign(RESULT, *self.read(VM + 88))
                    put(arena, VM + 144, depth)
                    return 1
            elif op in (25, 26): pass
            else:
                put(arena, EXTRA, 1, op)
                self.terminal = 'unsupported'
                return None
        raise ValueError('Synthetic program did not terminate within bounded instruction count')


def model(case, source=False, witnesses=None):
    state = State(case, source, witnesses)
    returned = state.execute()
    canonical = bytearray(state.arena)
    frames = sorted(set(state.frames))
    for frame in frames:
        for offset in (0, 4, 32, 40): put(canonical, frame + offset, 0)
    return {'arenaSha256': sha(state.arena), 'semanticArenaSha256': sha(canonical), 'services': state.services,
            'return': returned, 'terminal': state.terminal, 'frameAddresses': frames,
            'excludedInactiveBytes': len(frames) * 16, 'executedInstructions': state.steps}, state.arena
