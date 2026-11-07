import random
import struct

import unicorn
import unicorn.arm_const as arm

import native_material_wave011_oracle as frozen


def construct(wire, names, resources, seed=5):
    raw, closed = frozen.image(), frozen.closure()
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
    size = (len(raw) + 4095) & -4096
    cpu.mem_map(0x100000, size)
    cpu.mem_write(0x100000, raw)
    cpu.mem_map(frozen.RETURN, 4096)
    cpu.mem_map(frozen.ALLOCATE, 4096)
    case = {'wire': wire, 'replacement': None, 'names': names, 'mode': 0, 'allocationFails': False, 'resourceNull': False}
    saved, floating = frozen.environment(cpu, case, seed)
    cpu.mem_write(frozen.OBJECT, b'\0' * 132)
    cpu.mem_write(frozen.STORAGE, b'\0' * 4096)
    for index, resource in enumerate(resources):
        cpu.mem_write(frozen.INPUT + 0xc000 + index * 32, resource)
    name_addresses = [frozen.INPUT + 0x4000 + 12 + struct.unpack_from('<I', names, 12 + index * 4)[0] for index in range(len(resources))]
    cpu.mem_protect(frozen.INPUT, 0x10000, unicorn.UC_PROT_READ)
    cpu.mem_protect(0x100000, size, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    ranges = [(span['start'], span['endExclusive']) for row in closed.values() for span in row['ranges']]
    allocations, lookups, writes, steps = [], [], [], set()
    def instruction(uc, address, length, user):
        if address == frozen.ALLOCATE:
            heap, amount, alignment = [uc.reg_read(reg) for reg in [arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2]]
            if heap != frozen.SERVICES or alignment != 4 or not 0 < amount <= 4096 or allocations:
                raise ValueError('Original asset-derived allocator interface differs')
            allocations.append(amount)
            uc.reg_write(arm.UC_ARM_REG_R0, frozen.STORAGE)
            uc.reg_write(arm.UC_ARM_REG_PC, uc.reg_read(arm.UC_ARM_REG_LR))
            return
        if address == frozen.RESOLVE:
            accessor, name = uc.reg_read(arm.UC_ARM_REG_R0), uc.reg_read(arm.UC_ARM_REG_R1)
            if accessor != frozen.INPUT + 0xb200 or name not in name_addresses:
                raise ValueError('Original actual-name resource service differs')
            index = name_addresses.index(name)
            lookups.append(index)
            uc.reg_write(arm.UC_ARM_REG_R0, frozen.INPUT + 0xc000 + index * 32)
            uc.reg_write(arm.UC_ARM_REG_PC, uc.reg_read(arm.UC_ARM_REG_LR))
            return
        if not any(low <= address < address + length <= high for low, high in ranges):
            raise ValueError('Original material construction escaped qualified bodies')
        steps.add(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, instruction)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, address, length, value, user: writes.append((address, length)))
    cpu.emu_start(0x554a30, frozen.RETURN, count=200000, timeout=3000000)
    if cpu.reg_read(arm.UC_ARM_REG_PC) != frozen.RETURN or cpu.reg_read(arm.UC_ARM_REG_R0) != frozen.OBJECT:
        raise ValueError('Original asset material constructor did not return this')
    if cpu.reg_read(arm.UC_ARM_REG_SP) != frozen.STACK or [cpu.reg_read(reg) for reg in frozen.REGISTERS] != saved:
        raise ValueError('Original asset constructor AAPCS differs')
    if [cpu.reg_read(getattr(arm, 'UC_ARM_REG_D' + str(index))) for index in range(8, 16)] != floating:
        raise ValueError('Original asset constructor VFP ABI differs')
    amount = allocations[0] if allocations else 0
    allowed = [(frozen.OBJECT, frozen.OBJECT + 132), (frozen.STORAGE, frozen.STORAGE + amount), (frozen.STACK - 2048, frozen.STACK)]
    if any(not any(low <= address < address + length <= high for low, high in allowed) for address, length in writes):
        raise ValueError('Original constructor wrote outside asset object/allocation/private stack')
    return {'object': bytes(cpu.mem_read(frozen.OBJECT, 132)), 'storage': bytes(cpu.mem_read(frozen.STORAGE, amount)),
        'lookups': lookups, 'returnedNormally': True, 'originalInstructionAddresses': len(steps),
        'resourceDescriptorsDerivedFromActualBflim': True, 'logicalDecodedTextureOrientation': True}
