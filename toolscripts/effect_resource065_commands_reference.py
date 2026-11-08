import hashlib
import json
import struct

import unicorn
from unicorn import arm_const as ar

from native_wave013_file_owner_reference_image import ReferenceImage
from native_effect065_build import ROOT, pin


def run(output):
    if output.exists():
        raise ValueError('Preserve original command-builder measurements')
    output.mkdir(parents=True)
    reference = ReferenceImage()
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(ar.UC_CPU_ARM_11MPCORE)
    cpu.reg_write(ar.UC_ARM_REG_C1_C0_2, 0xf00000)
    cpu.reg_write(ar.UC_ARM_REG_FPEXC, 0x40000000)
    reference.map(cpu)
    base, stack, stop = 0x20000000, 0x30000000, 0x40000000
    cpu.mem_map(base, 0x10000)
    cpu.mem_map(stack, 0x10000)
    cpu.mem_map(stop, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    destination, descriptor = base + 0x4000, base + 0x6000
    witnesses, rows, writes = {}, [], []
    returned = [False]
    def code(uc, address, size, user):
        if address == stop:
            returned[0] = True
            uc.emu_stop()
            return
        owner, instruction = reference.instruction(uc, address, size)
        if owner not in [0x1830e0, 0x6cf79c]:
            raise ValueError('Original command builder executed an unexpected dependency')
        witnesses[address] = {'address': address, 'bytes': size, 'mode': 'ARM', 'owner': owner,
            'sha256': hashlib.sha256(bytes(uc.mem_read(address, size))).hexdigest()}
    def write(uc, access, address, size, value, user):
        if not (destination <= address < address + size <= destination + 512 or
                stack <= address < address + size <= stack + 0x10000):
            raise ValueError('Original command builder changed immutable input/global/outer bytes')
        if destination <= address < destination + 512:
            writes.append((address, size))
    cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, write)
    def invoke(entry, arguments):
        saved = [(getattr(ar, 'UC_ARM_REG_R' + str(index)), 0x65000000 + index) for index in range(4, 12)]
        for register, value in saved:
            cpu.reg_write(register, value)
        for index, value in enumerate(arguments):
            cpu.reg_write(getattr(ar, 'UC_ARM_REG_R' + str(index)), value)
        cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x1f)
        cpu.reg_write(ar.UC_ARM_REG_SP, stack + 0xfff0)
        cpu.reg_write(ar.UC_ARM_REG_LR, stop)
        returned[0] = False
        cpu.emu_start(entry, stop + 4, count=100000)
        if not returned[0] or any(cpu.reg_read(register) != value for register, value in saved) or cpu.reg_read(ar.UC_ARM_REG_SP) != stack + 0xfff0:
            raise ValueError('Original command builder caller ABI/return guard differs')
        result = cpu.reg_read(ar.UC_ARM_REG_R0)
        if not destination <= result <= destination + 512 or (result - destination) % 4:
            raise ValueError('Caller-consumed original command result is not an output end pointer')
        return result
    try:
        for seed in range(4):
            base_units = [0, 0x123456, 0x80000000, 0xffffffff][seed]
            cpu.mem_write(0x8bfbd8, struct.pack('<I', base_units))
            for kind in ['empty', 'binding', 'constant', 'index16', 'index8']:
                raw = bytearray(0x790)
                if kind == 'binding':
                    struct.pack_into('<I', raw, 0x160, (base_units * 8 + 0x100) & 0xffffffff)
                    raw[0x164] = 11
                    struct.pack_into('<I', raw, 0x170, 12)
                    struct.pack_into('<I', raw, 0x1a0, 0)
                if kind == 'constant':
                    raw[0x6a0 + 11 * 20] = 4
                    struct.pack_into('<4I', raw, 0x6a4 + 11 * 20, 0x80000000, 0x3f800000, 0x7fc12345, 0x00000001)
                cpu.mem_write(base, bytes(raw))
                before = bytes([0xa5 if seed & 1 else 0]) * 640
                cpu.mem_write(destination - 64, before)
                index_descriptor = struct.pack('<IIB3x', (base_units * 8 + 32) & 0xffffffff, 37, kind == 'index8')
                cpu.mem_write(descriptor, index_descriptor)
                writes.clear()
                name = 0x6cf79c if kind.startswith('index') else 0x1830e0
                result = invoke(name, [base, destination, descriptor])
                after = bytes(cpu.mem_read(destination - 64, len(before)))
                if after[:64] != before[:64] or after[576:] != before[576:] or bytes(cpu.mem_read(base, len(raw))) != bytes(raw):
                    raise ValueError('Original command builder changed complete input/outer bytes')
                rows.append({'entry': name, 'kind': kind, 'baseUnits': base_units, 'outputPattern': 0xa5 if seed & 1 else 0,
                    'wordCountFromCallerUsedReturn': (result - destination) // 4,
                    'words': list(struct.unpack('<' + 'I' * ((result - destination) // 4), after[64:64 + result - destination])),
                    'completeOutputBackingSha256': hashlib.sha256(after).hexdigest()})
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'pc': cpu.reg_read(ar.UC_ARM_REG_PC),
            'rows': rows, 'witnesses': list(witnesses.values()), 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    record = {'status': 'actual-original-command-generator-ABI-word-and-return-witness', 'sets': len(rows),
        'moduleSha256': hashlib.sha256(reference.image).hexdigest(), 'producer': pin(__import__('pathlib').Path(__file__)),
        'rows': rows, 'witnesses': sorted(witnesses.values(), key=lambda row: row['address']),
        'sourceCreditGranted': 0, 'GPUExecutionQualified': False}
    (output / 'report.json').write_text(json.dumps(record, indent=2) + '\n')
    print(json.dumps({'sets': len(rows), 'wordCounts': sorted({row['wordCountFromCallerUsedReturn'] for row in rows})}))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/resource/commands-reference-v1')
