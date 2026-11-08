import hashlib
import json
import struct

import capstone
import unicorn
from unicorn import arm_const as ar

from native_wave013_file_owner_reference_image import ReferenceImage
from native_effect065_build import ROOT, pin


ENTRIES = [(0x15d210, 12, 'ARM'), (0x15d258, 36, 'ARM'), (0x16771c, 4, 'ARM'), (0x101a1c, 34, 'Thumb')]


def run(output):
    if output.exists():
        raise ValueError('Preserve the original resource constructor protocol')
    output.mkdir(parents=True)
    reference = ReferenceImage()
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(ar.UC_CPU_ARM_11MPCORE)
    reference.map(cpu)
    base, stack, stop = 0x20000000, 0x30000000, 0x40000000
    cpu.mem_map(base, 0x10000)
    cpu.mem_map(stack, 0x10000)
    cpu.mem_map(stop, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    candidates, allowed = [], {}
    for start, size, mode in ENTRIES:
        raw = reference.image[start - 0x100000:start - 0x100000 + size]
        decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB if mode == 'Thumb' else capstone.CS_MODE_ARM)
        decoded = list(decoder.disasm(raw, start))
        if sum(instruction.size for instruction in decoded) != size:
            raise ValueError('Resource constructor reference candidate fails complete decoding')
        overlap = [{'start': low, 'endExclusive': high, 'owner': owner} for low, high, owner in reference.ranges
                   if max(start, low) < min(start + size, high)]
        candidates.append({'entry': start, 'mode': mode, 'bytes': size, 'sha256': hashlib.sha256(raw).hexdigest(),
            'priorInstructionOwnership': overlap, 'knownEntry': start in reference.functions,
            'sourceCreditGranted': 0, 'sharedInventoryApproved': False})
        for instruction in decoded:
            allowed[instruction.address] = (instruction.size, mode)
    witnesses, transitions, rows = {}, set(), []
    active = [False]
    previous = [None]
    returned = [False]
    mutable = [None]
    def code(uc, address, size, user):
        if address == stop:
            returned[0] = True
            uc.emu_stop()
            return
        mode = 'Thumb' if uc.reg_read(ar.UC_ARM_REG_CPSR) & 32 else 'ARM'
        if address not in allowed or allowed[address] != (size, mode):
            raise ValueError('Resource constructor protocol executed outside exact private candidate instructions')
        witnesses[address] = {'address': address, 'bytes': size, 'mode': mode,
            'sha256': hashlib.sha256(bytes(uc.mem_read(address, size))).hexdigest()}
        if previous[0] is not None:
            transitions.add((previous[0], address))
        previous[0] = address
    def write(uc, access, address, size, value, user):
        if active[0] and not (mutable[0][0] <= address < address + size <= mutable[0][1]
                              or stack <= address < address + size <= stack + 0x10000):
            raise ValueError('Resource constructor changed caller guards or non-owned storage')
    def read(uc, access, address, size, value, user):
        if not active[0]:
            return
        low, high = mutable[0]
        if not (low <= address < address + size <= high or stack <= address < address + size <= stack + 0x10000
                or 0x100000 <= address < address + size <= 0x8f0000):
            raise ValueError('Resource constructor read outside explicit image/object/stack storage')
    cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, write)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, read)
    def invoke(entry, arguments, size):
        saved = [(getattr(ar, 'UC_ARM_REG_R' + str(index)), 0x65000000 + index) for index in range(4, 12)]
        for register, value in saved:
            cpu.reg_write(register, value)
        for index, value in enumerate(arguments):
            cpu.reg_write(getattr(ar, 'UC_ARM_REG_R' + str(index)), value)
        cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x1f)
        cpu.reg_write(ar.UC_ARM_REG_SP, stack + 0xfff0)
        cpu.reg_write(ar.UC_ARM_REG_LR, stop)
        mutable[0] = (base + 64, base + 64 + size)
        active[0], returned[0], previous[0] = True, False, None
        cpu.emu_start(entry, stop + 4, count=100000)
        active[0] = False
        if not returned[0] or any(cpu.reg_read(register) != value for register, value in saved) or cpu.reg_read(ar.UC_ARM_REG_SP) != stack + 0xfff0:
            raise ValueError('Resource constructor did not preserve the actual caller ABI')
        return cpu.reg_read(ar.UC_ARM_REG_R0)
    try:
        for pattern in [0, 0x5a, 0xa5, 0xff]:
            for entry, size, changed in [(0x15d210, 20, 1), (0x15d258, 112, 4), (0x16771c, 1, 0)]:
                before = bytes([pattern]) * (size + 128)
                cpu.mem_write(base, before)
                result = invoke(entry, [base + 64], size)
                actual = bytes(cpu.mem_read(base, len(before)))
                expected = bytearray(before)
                expected[64:64 + changed] = bytes(changed)
                if actual != expected:
                    raise ValueError('Resource constructor initial-write/untouched-storage contract differs')
                rows.append({'entry': entry, 'pattern': pattern, 'storageBytes': size, 'changedPrefixBytes': changed,
                    'rawResultR0': result, 'returnSemanticsQualified': False,
                    'afterSha256': hashlib.sha256(actual).hexdigest()})
            for entry, stride, changed in [(0x15d210, 20, 1), (0x15d258, 112, 4)]:
                size = stride * 12
                before = bytes([pattern]) * (size + 128)
                cpu.mem_write(base, before)
                result = invoke(0x101a1d, [base + 64, entry, stride, 12], size)
                actual = bytes(cpu.mem_read(base, len(before)))
                expected = bytearray(before)
                for index in range(12):
                    start = 64 + index * stride
                    expected[start:start + changed] = bytes(changed)
                if actual != expected:
                    raise ValueError('Resource actual array-constructor protocol differs')
                rows.append({'arrayConstructor': entry, 'stride': stride, 'count': 12, 'pattern': pattern,
                    'rawResultR0': result, 'returnSemanticsQualified': False,
                    'afterSha256': hashlib.sha256(actual).hexdigest()})
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'pc': cpu.reg_read(ar.UC_ARM_REG_PC),
            'rows': rows, 'witnesses': list(witnesses.values()), 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    report = {'status': 'actual-original-resource-constructor-and-array-protocol-measurement',
        'producer': pin(__import__('pathlib').Path(__file__)), 'moduleSha256': hashlib.sha256(reference.image).hexdigest(),
        'candidates': candidates, 'sets': len(rows), 'rows': rows, 'witnesses': sorted(witnesses.values(), key=lambda row: row['address']),
        'transitions': sorted(transitions), 'literalWitnesses': [{'address': 0x540404, 'target': 0x15d258},
            {'address': 0x540408, 'target': 0x15d210}, {'address': 0x15d27c, 'target': 0x16771c}],
        'sourceCreditGranted': 0, 'sharedInventoryEdited': False,
        'limits': ['Reference-only private entry views; no recovered source or complete resource-constructor proof.',
            'Raw R0 results are retained without inventing incidental pointer-return API semantics.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'sets': len(rows), 'instructionWitnesses': len(witnesses), 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/resource/constructor-reference-v1')
