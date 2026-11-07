import ctypes
import hashlib
import struct

from unicorn import Uc, UC_ARCH_ARM, UC_HOOK_CODE, UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_C1_C0_2, UC_ARM_REG_CPSR, UC_ARM_REG_D8, UC_ARM_REG_FPEXC
from unicorn.arm_const import UC_ARM_REG_FPSCR, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R4
from unicorn.arm_const import UC_ARM_REG_S0, UC_ARM_REG_SP
from native_wave014_vectors import ADDRESSES, ENTRIES, memory
from native_wave014_build import ROOT, sha


RAM, STACK, STOP = 0x2000000, 0x6000000, 0xfff0000
IMAGE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def original_image():
    for path in [ROOT / 'generated/update-content0/code.bin',
        ROOT / 'work/native-ci-local-validation/private/generated/update-content0/code.bin']:
        if path.is_file():
            blob = path.read_bytes()
            if sha(blob) != IMAGE_SHA:
                raise ValueError('Original image identity differs')
            return blob
    raise FileNotFoundError('Owner update image is unavailable')


class Arm:
    def __init__(self, blocks, symbols, executable):
        self.blocks, self.symbols, self.executable = blocks, symbols, executable
        self.coverage, self.calls = set(), 0

    def execute(self, case):
        data, args, s0, out, size = memory(case, RAM)
        machine = Uc(UC_ARCH_ARM, UC_MODE_ARM)
        for address, blob in self.blocks:
            start, end = address & -4096, (address + len(blob) + 4095) & -4096
            machine.mem_map(start, end - start)
            machine.mem_write(address, blob)
        machine.mem_map(RAM, 0x20000)
        machine.mem_write(RAM, bytes(data))
        machine.mem_map(STACK, 0x20000)
        machine.mem_map(STOP, 4096)
        machine.reg_write(UC_ARM_REG_CPSR, 0x10)
        machine.reg_write(UC_ARM_REG_C1_C0_2, machine.reg_read(UC_ARM_REG_C1_C0_2) | 0xf00000)
        machine.reg_write(UC_ARM_REG_FPEXC, 0x40000000)
        machine.reg_write(UC_ARM_REG_FPSCR, 0)
        sp = STACK + 0x10000
        machine.reg_write(UC_ARM_REG_SP, sp)
        machine.reg_write(UC_ARM_REG_LR, STOP)
        for index in range(8):
            machine.reg_write(UC_ARM_REG_R4 + index, 0x41000000 + index * 101)
            machine.reg_write(UC_ARM_REG_D8 + index, 0x3ff0000000000000 + index * 131)
        for index, value in enumerate(args[:4]):
            machine.reg_write(UC_ARM_REG_R0 + index, value)
        for index, value in enumerate(args[4:]):
            machine.mem_write(sp + index * 4, struct.pack('<I', value & 0xffffffff))
        if s0 is not None:
            machine.reg_write(UC_ARM_REG_S0, s0)
        returned, steps = False, 0
        def step(cpu, address, instruction_size, context):
            nonlocal returned, steps
            if address == STOP:
                returned = True
                cpu.emu_stop()
                return
            if not any(start <= address < end for start, end in self.executable):
                raise ValueError('Execution escaped declared executable regions at ' + hex(address))
            self.coverage.add(address)
            steps += 1
            if steps > 100000:
                raise ValueError('Bounded math call did not return')
        machine.hook_add(UC_HOOK_CODE, step)
        machine.emu_start(self.symbols[ENTRIES[case['operation']]], STOP + 4, count=100001)
        if not returned or machine.reg_read(UC_ARM_REG_SP) != sp:
            raise ValueError('Math call failed to return with preserved stack')
        for index in range(8):
            if machine.reg_read(UC_ARM_REG_R4 + index) != 0x41000000 + index * 101:
                raise ValueError('Callee-saved general register changed')
            if machine.reg_read(UC_ARM_REG_D8 + index) != 0x3ff0000000000000 + index * 131:
                raise ValueError('Callee-saved VFP register changed')
        after = bytes(machine.mem_read(RAM, len(data)))
        if after[:out] != data[:out] or after[out + size:] != data[out + size:]:
            raise ValueError('Math call modified memory outside its output span')
        self.calls += 1
        status = machine.reg_read(UC_ARM_REG_R0) if case['operation'] == 'inverse' else None
        return after[out:out + size], status, steps


def original():
    return Arm([(0x100000, original_image())], {ENTRIES[key]: value for key, value in ADDRESSES.items()},
        [(0x100000, 0x100000 + 7051280)])


class Windows:
    def __init__(self, path):
        self.module = ctypes.CDLL(str(path))
        for operation, name in ENTRIES.items():
            function = getattr(self.module, name)
            count = {'multiply': 3, 'inverse': 2, 'trig': 2, 'srt': 3, 'projection': 4}[operation]
            argument_types = [ctypes.c_void_p] * count
            if operation == 'trig':
                argument_types.append(ctypes.c_float)
            if operation == 'projection':
                argument_types += [ctypes.c_uint32, ctypes.c_int, ctypes.c_uint32]
            function.argtypes = argument_types
            function.restype = ctypes.c_int if operation == 'inverse' else None

    def execute(self, case):
        allocation = ctypes.create_string_buffer(0x20008)
        base = ((ctypes.addressof(allocation) + 7) & -8) + 4
        data, args, s0, out, size = memory(case, base, 8)
        ctypes.memmove(base, bytes(data), len(data))
        if s0 is not None:
            args.append(struct.unpack('<f', struct.pack('<I', s0))[0])
        status = getattr(self.module, ENTRIES[case['operation']])(*args)
        after = ctypes.string_at(base, len(data))
        if after[:out] != data[:out] or after[out + size:] != data[out + size:]:
            raise ValueError('Native math call modified memory outside its output span')
        return after[out:out + size], status, None


def compare(oracle, candidate, cases, label):
    digest, records = hashlib.sha256(), []
    for case in cases:
        expected, expected_status, original_steps = oracle.execute(case)
        actual, actual_status, source_steps = candidate.execute(case)
        if actual != expected or actual_status != expected_status:
            return {'passed': False, 'case': case['id'], 'operation': case['operation'],
                'expectedHex': expected.hex(), 'actualHex': actual.hex(),
                'expectedStatus': expected_status, 'actualStatus': actual_status}
        digest.update(case['id'].encode() + expected)
        records.append({'case': case['id'], 'operation': case['operation'], 'bytes': len(expected),
            'originalSteps': original_steps, 'sourceSteps': source_steps})
    return {'passed': True, 'label': label, 'cases': len(records), 'outputSha256': digest.hexdigest(),
        'allBytewiseEqual': True, 'allReturned': True, 'boundedWrites': True, 'calleeSavedArmState': True,
        'records': records}
