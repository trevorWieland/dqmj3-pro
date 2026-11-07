import random
import struct

import unicorn
from unicorn import arm_const as arm

from squirrel_source_wave002 import sha
from squirrel_table_helpers021_model import validate_case


HEAP, HEAP_BYTES, STACK, STOP = 0x2000000, 0x40000, 0x6000000, 0xfff0000
ORIGINAL_SPANS = [(0x1a1dc8,0x1a1ee8),(0x19b998,0x19ba00),(0x19b390,0x19b410),
    (0x19b414,0x19b4c4),(0x19b728,0x19b98c),(0x19b4ec,0x19b64c),(0x19e2e8,0x19e378),
    (0x666518,0x666628),(0x19e864,0x19e8e8),(0x24d73c,0x24d76c),(0x233bd8,0x233c04),
    (0x299114,0x29936c),(0x299424,0x2994a0),(0x299518,0x299540),(0x2995a4,0x299698),
    (0x6a7610,0x6a7638),(0x6a769c,0x6a7774),(0x77f3f8,0x77f478),
    (0x16b5f0,0x16b7d4),(0x19ba68,0x19ba80),(0x24d9cc,0x24da70),(0x68f564,0x68f590),
    (0x233b7c,0x233bd4),(0x6a7780,0x6a77ec),(0x2febd8,0x2fec34),(0x1010c8,0x10113c),
    (0x301a9c,0x301b24),(0x17821c,0x178290),(0x301f50,0x301fa4)]
ORIGINAL_DATA = [(0x1a1ee8,0x1a1eec),(0x19ba00,0x19ba04),(0x19b410,0x19b414),(0x19b4c4,0x19b4c8),
    (0x19b98c,0x19b998),(0x19b64c,0x19b650),(0x666628,0x66662c),(0x233c04,0x233c0c),
    (0x2994a0,0x2994a4),(0x299698,0x2996a4),(0x6a7774,0x6a7780),(0x850dac,0x850db8),
    (0x81e52c,0x81e54c),(0x8516d0,0x8516dc),(0x8516ec,0x8516f8),(0x851220,0x85122c),
    (0x16b7d4,0x16b7d8),(0x68f590,0x68f598),(0x2fec34,0x2fec38),(0x233bd4,0x233bd8),
    (0x6a77ec,0x6a77f4),(0x8c06e8,0x8c06f0)]


def execute(image, component, case, source, fp_controls=0, float_bits=None):
    validate_case(case)
    if float_bits is not None and (type(float_bits) is not int or not 0 <= float_bits <= 0xffffffff):
        raise ValueError('Float key fixture requires exact unsigned32 bits')
    if type(fp_controls) is not int or fp_controls & ~0x03c00000:
        raise ValueError('Unsupported table floating-control seed')
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    pages = set()
    if not source:
        pages.update(range(0x100000, (0x100000 + len(image) + 4095) & -4096, 4096))
    for section in component['sections']:
        pages.update(range(section['address'] & -4096, (section['address'] + section['size'] + 4095) & -4096, 4096))
    ordered = sorted(pages)
    start, end = ordered[0], ordered[0] + 4096
    for page in ordered[1:]:
        if page == end:
            end += 4096
        else:
            cpu.mem_map(start, end - start)
            start, end = page, page + 4096
    cpu.mem_map(start, end - start)
    if not source:
        cpu.mem_write(0x100000, image)
    for section in component['sections']:
        original_table = section['address'] in (0x81d020,0x81e52c,0x81e540,0x850dac,0x8516d0,0x8516ec,0x851220)
        if source or not original_table:
            cpu.mem_write(section['address'], section['data'])
    cpu.mem_map(HEAP, HEAP_BYTES)
    cpu.mem_map(STACK, 0x10000)
    cpu.mem_write(STACK, random.Random(0x19000 + case['mode'] * 256 + case['requested'] * 4 + case['flags']).randbytes(0x10000))
    cpu.mem_map(STOP, 4096)
    cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
    cpu.reg_write(arm.UC_ARM_REG_FPSCR, 0)
    phase, returned, coverage = '', False, set()
    hashes = []
    key_releases=[]
    fixture_names = ('fixture_helpers_run021','assign','string','topology','fixture_payload019','fixture_identity019',
        'sq_table_allocate019','sq_table_deallocate019','sq_string_allocate_value015','sq_string_allocate_buckets015',
        'sq_weak_allocate014','fixture_record019','sq_prototype_deallocate011','sq_native_closure_deallocate013',
        'sq_script_closure_deallocate017','sq_weak_deallocate014','sq_string_deallocate_value015','sq_string_deallocate_buckets015','sq_deallocate')
    original_fixture_ranges = [row for row in component['functions'] if row['name'] in fixture_names or row['name'].startswith('fixture_') or row['name'] == 'sq_prefix_count']
    writable = [row for row in component['sections'] if row['flags'] & 1]

    def instruction(current, address, size, unused):
        nonlocal returned
        if address == STOP:
            returned = True
            current.emu_stop()
            return
        if phase != 'root':
            return
        if not source and address in (0x19d680,0x2fece8):
            if address == 0x19d680: target = 'sq_table_deallocate019'
            else:
                caller = current.reg_read(arm.UC_ARM_REG_LR) - 4
                target = {0x19b3a4:'sq_table_allocate019',0x16b6a0:'sq_string_allocate_value015',
                          0x16b74c:'sq_string_allocate_buckets015',0x233b98:'sq_weak_allocate014'}.get(caller)
                if not target: raise ValueError('Unqualified original table allocation caller ' + hex(caller))
            current.reg_write(arm.UC_ARM_REG_PC,component['symbols'][target]);return
        if not source and address == 0x19b5e0:
            key_releases.append(current.reg_read(arm.UC_ARM_REG_R2))
        if not source and address == 0x1a1e10:
            hashes.append(current.reg_read(arm.UC_ARM_REG_R12))
        if source:
            allowed = any(row['address'] <= address < row['address'] + row['size'] for row in component['functions'])
        else:
            allowed = any(start <= address < end for start, end in ORIGINAL_SPANS) or any(
                row['address'] <= address < row['address'] + row['size'] for row in original_fixture_ranges)
        if not allowed:
            raise ValueError('Table execution left original/source/observer closure: ' + hex(address))
        coverage.add(address)

    def memory(current, kind, address, size, value, unused):
        if phase != 'root':
            return
        mutable = (HEAP <= address < address + size <= HEAP + HEAP_BYTES or
                   STACK <= address < address + size <= STACK + 0x10000 or
                   any(row['address'] <= address < address + size <= row['address'] + row['size'] for row in writable))
        if kind == unicorn.UC_MEM_WRITE and not mutable:
            raise ValueError('Table write escaped its declared heap/stack/observer storage')
        source_data = any(row['address'] <= address < address + size <= row['address'] + row['size'] for row in component['sections'])
        original_data = not source and any(start <= address < address + size <= end for start, end in ORIGINAL_DATA)
        if kind == unicorn.UC_MEM_READ and not mutable and not source_data and not original_data:
            raise ValueError('Table read escaped its declared storage: ' + hex(address))

    def stop(current, address, size, unused):
        nonlocal returned
        returned = True
        current.emu_stop()
    cpu.hook_add(unicorn.UC_HOOK_CODE, stop, begin=STOP, end=STOP)

    def invoke(name, arguments, label):
        nonlocal phase, returned
        phase, returned = label, False
        sp = STACK + 0xff00
        cpu.reg_write(arm.UC_ARM_REG_SP, sp)
        cpu.reg_write(arm.UC_ARM_REG_LR, STOP)
        protected = {getattr(arm, 'UC_ARM_REG_R' + str(index)): 0x51120000 + index * 151 for index in range(4, 12)}
        protected_vfp = {getattr(arm, 'UC_ARM_REG_D' + str(index)): 0x5100190000000000 + index for index in range(8, 16)}
        for register, value in protected.items():
            cpu.reg_write(register, value)
        for register, value in protected_vfp.items():
            cpu.reg_write(register, value)
        for index, argument in enumerate(arguments):
            if index < 4:
                cpu.reg_write(getattr(arm, 'UC_ARM_REG_R' + str(index)), argument)
            else:
                cpu.mem_write(sp + (index - 4) * 4, struct.pack('<I', argument))
        cpu.emu_start(component['symbols'][name], STOP + 4, timeout=3000000, count=2000000)
        if not returned or cpu.reg_read(arm.UC_ARM_REG_SP) != sp or any(cpu.reg_read(register) != value for register, value in protected.items()):
            raise ValueError('Table fixture/root did not normally return with its ABI')
        if any(cpu.reg_read(register) != value for register, value in protected_vfp.items()):
            raise ValueError('Table fixture/root failed callee-saved VFP ABI')
        return cpu.reg_read(arm.UC_ARM_REG_R0)

    if not source:
        cpu.reg_write(arm.UC_ARM_REG_SP,STACK+0xff00)
        cpu.emu_start(0x6ff69c,0x6ff6b0,count=5)
        if bytes(cpu.mem_read(0x8c06e8,8)) != struct.pack('<II',0x01000001,0):
            raise ValueError('Original null initializer prefix failed its precondition')
    if invoke('fixture_table_bind019',[HEAP,HEAP_BYTES,0x850dac,0x81e52c,0x81e540,0x8516d0,0x8516ec,0x851220,0x81d020],'prepare') != 1:
        raise ValueError('Table fixture rejected valid storage')
    invoke('fixture_helpers_prepare021',[case['mode'],case['requested'],case['flags']],'prepare')
    if float_bits is not None:
        invoke('fixture_table_float_prepare019',[float_bits],'prepare')
        prepared_hash = invoke('sq_table_hash019',[HEAP+0x27000],'hash-observer')
    cpu.reg_write(arm.UC_ARM_REG_FPSCR,fp_controls)
    code_hook = cpu.hook_add(unicorn.UC_HOOK_CODE, instruction)
    memory_hook = cpu.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, memory)
    root_result = invoke('fixture_table_float_run019' if float_bits is not None else 'fixture_helpers_run021',[int(source)],'root')
    cpu.hook_del(code_hook)
    cpu.hook_del(memory_hook)
    final_fpscr = cpu.reg_read(arm.UC_ARM_REG_FPSCR)
    if final_fpscr & 0x07f79f00 != fp_controls:
        raise ValueError('Table execution changed mandatory FPSCR controls')
    raw=bytes(cpu.mem_read(HEAP,HEAP_BYTES))
    if float_bits is not None:
        words = [root_result,*struct.unpack('<II',cpu.mem_read(HEAP+0x29000,8)),prepared_hash]
        count = 4
    else:
        count=invoke('fixture_helpers_snapshot021',[HEAP+0x30000,4096],'snapshot')
        if not 16 <= count <= 4096: raise ValueError('Table snapshot extent invalid')
        words=list(struct.unpack('<'+'I'*count,cpu.mem_read(HEAP+0x30000,count*4)))
    return {'words':words,'arenaSha256':sha(raw),'returned':True}, {'visited':sorted(coverage),
        'sourceOriginalModuleMapped':not source,'originalTablesPreserved':not source,
        'vtableAddressNormalizationUsed':False,'finalFPSCRExceptionStatus':final_fpscr&0x9f,
        'finalFPSCRControlFields':final_fpscr&0x07f79f00,'originalHashObservations':hashes,'originalRehashRemainingKeyReferences':key_releases,
        'initialFPSCRControlFields':fp_controls,'calleeSavedVfpPreserved':True,
        'initializerPrefixQualifiedAsPreconditionOnly':True},raw
