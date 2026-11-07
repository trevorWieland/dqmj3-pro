import random
import struct

import unicorn
from unicorn import arm_const as arm

from squirrel_source_wave002 import sha
from squirrel_execute031_model import validate_case




HEAP, HEAP_BYTES, STACK, STOP = 0x2000000, 0x100000, 0x6000000, 0xfff0000
ORIGINAL_SPANS=[(0x18d65c,0x190c50),(0x199cb8,0x19a1e0),(0x1994c0,0x1996ec),(0x199144,0x1994b8),(0x173d60,0x1740bc),(0x174194,0x17419c),(0x1987e4,0x198c9c),(0x198c9c,0x199144),(0x198578,0x1987e4),(0x19b390,0x19b998),(0x19e2e8,0x19e378),(0x19b998,0x19ba00),(0x1a1dc8,0x1a1ee8),(0x666518,0x666540),(0x666540,0x666628),(0x198320,0x198418),(0x1a0cc0,0x1a0d30),(0x1a1234,0x1a158c),(0x1a1010,0x1a11f0),(0x1a15ec,0x1a1784),(0x1a83dc,0x1a845c),(0x191f28,0x192014),(0x233b7c,0x233bd4),(0x6a7780,0x6a77ec),(0x17ffac,0x1801a0),(0x196f6c,0x197330),(0x19736c,0x1975ac),(0x1b33dc,0x1b3530),
 (0x176fc8,0x177154),(0x17ff94,0x17ffac),(0x17ff68,0x17ff90),(0x173d1c,0x173d4c),(0x19e864,0x19e8e8),
 (0x19d320,0x19d558),(0x198230,0x19828c),(0x665a44,0x665af8),(0x665bd4,0x665bfc),(0x665c60,0x665cc0),
 (0x157ff4,0x158004),(0x77f3f8,0x77f478),(0x24d73c,0x24d76c),(0x233bd8,0x233c04),
 (0x6a7610,0x6a7638),(0x6a769c,0x6a7774),(0x17821c,0x178290),(0x301a9c,0x301b24),(0x301f50,0x301fa4),(0x1010c8,0x10113c),(0x19813c,0x19822c),(0x1a36d4,0x1a3740),(0x16b5f0,0x16b7d4),(0x19ba68,0x19ba80),(0x24d9cc,0x24da70),(0x68f564,0x68f590),(0x2febd8,0x2fec34),(0x299114,0x29936c),(0x299424,0x2994a0),(0x299518,0x299540),(0x2995a4,0x299698)]


def execute(image,component,case,source,discover_sdk=False):
    validate_case(case)
    sdk_path=__import__('pathlib').Path(__file__).resolve().parents[1]/'evidence/lanes/squirrel-lookup020/reference-sdk-exchange.json'
    sdk=__import__('json').loads(sdk_path.read_text(encoding='utf-8'))
    sdk_addresses=set()
    for row in sdk['instructionWitnesses']:
        if sha(image[row['address']-0x100000:row['address']-0x100000+row['bytes']])!=row['sha256']:raise ValueError('022 frozen020 SDK reference changed')
        sdk_addresses.add(row['address'])
    additions_path=__import__('pathlib').Path(__file__).resolve().parents[1]/'evidence/lanes/squirrel-type-error025/reference-sdk-additions.json'
    if additions_path.exists():
        additions=__import__('json').loads(additions_path.read_text(encoding='utf-8'))
        for row in additions['instructionWitnesses']:
            if sha(image[row['address']-0x100000:row['address']-0x100000+row['bytes']])!=row['sha256']:raise ValueError('025 SDK reference changed')
            sdk_addresses.add(row['address'])
    sdk_discovery={}
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
        original_table = section['address'] in (0x81d020,0x81e52c,0x81e540,0x850d74,0x8516d0,0x8516ec,0x851220,0x850dac)
        if source or not original_table:
            cpu.mem_write(section['address'], section['data'])
    cpu.mem_map(HEAP, HEAP_BYTES)
    cpu.mem_map(STACK, 0x10000)
    cpu.mem_write(STACK,bytes(0x10000))
    cpu.mem_map(STOP, 4096)
    cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
    cpu.reg_write(arm.UC_ARM_REG_FPSCR, 0)
    phase, returned, coverage = '', False, set()
    fpscr_observations=[]
    fixture_names=('record','sq_baseline_reallocate031','sq_baseline_deallocate031','sq_execute_allocate_table031','sq_table_allocate019','sq_table_deallocate019','sq_vm_call_reallocate022','sq_native_create_allocate016','sq_opaque_array_allocate012',
      'sq_weak_allocate014','sq_native_create_reallocate016','sq_string_deallocate_value015','sq_string_allocate_value015','sq_lookup_reallocate020','sq_reallocate','sq_deallocate','sq_prototype_deallocate011','sq_native_closure_deallocate013')
    original_fixture_ranges=[row for row in component['functions']if row['name'].startswith(('fixture_','__aeabi_mem'))or row['name']in fixture_names or row['name']in('sq_lookup_top020','sq_lookup_base020','sq_lookup_stack020','sq_vm_call_count022','sq_vm_native_depth022','sq_vm_current022','sq_prefix_count','sq_vm_stack_vector022','sq_vm_set_native_depth022','sq_execute_temporary_value028','sq_execute_varargs028','sq_execute_debug_value028','sq_execute_error_handler_value028','sq_execute_assign028','sq_vm_set_top022','sq_vm_set_base022','sq_vm_publish_stack022','sq_vm_publish_calls022','sq_vm_set_call_stack022','sq_vm_set_allocated_calls022','sq_vm_set_call_count022','sq_vm_set_current022','sq_execute_publish_varargs028','sq_prototype_allocation_bytes011','sq_lookup_shared020','sq_vm_call_stack022','sq_execute_temporary028','sq_string_allocation_bytes015')]
    handler_return=None
    inactive_reads=[]
    writable = [row for row in component['sections'] if row['flags'] & 1]

    def instruction(current, address, size, unused):
        nonlocal returned,handler_return
        if address==handler_return:handler_return=None
        if not source and phase=='root'and address==0x196f6c:handler_return=current.reg_read(arm.UC_ARM_REG_LR)
        if address == STOP:
            returned = True
            current.emu_stop()
            return

        if not source and address in(0x19d680,0x2fece8,0x18388c):
            if address==0x19d680:
                pointer=current.reg_read(arm.UC_ARM_REG_R0)
                target='sq_table_deallocate019'if pointer==HEAP+0x68000 or HEAP+0x70000<=pointer<HEAP+0x78000 else'sq_deallocate'
            elif address==0x18388c:
                caller=current.reg_read(arm.UC_ARM_REG_LR)-4
                if 0x19d320<=caller<0x19d408:target='sq_reallocate'
                elif 0x19d408<=caller<0x19d558:target='sq_vm_call_reallocate022'
                elif 0x18f190<=caller<0x18f2b8:target='sq_reallocate'
                elif 0x1a36d4<=caller<0x1a3740:target='sq_lookup_reallocate020'
                else:raise ValueError('028 unowned reallocator caller '+hex(caller))
            else:
                caller=current.reg_read(arm.UC_ARM_REG_LR)-4
                targets=[(0x18ef94,0x18efb0,'sq_execute_allocate_table031'),(0x18f02c,0x18f044,'sq_opaque_array_allocate012'),(0x19b390,0x19b410,'sq_table_allocate019'),(0x176fc8,0x177154,'sq_native_create_allocate016'),(0x665a44,0x665af8,'sq_opaque_array_allocate012'),
                  (0x233b7c,0x233bd4,'sq_weak_allocate014'),(0x16b5f0,0x16b7d4,'sq_string_allocate_value015')]
                matches=[name for start,end,name in targets if start<=caller<end]
                if len(matches)!=1:raise ValueError('022 allocation caller left measured providers: '+hex(caller))
                target=matches[0]
            current.reg_write(arm.UC_ARM_REG_PC,component['symbols'][target]);return
        if phase !='root':return
        if source:
            allowed = any(row['address'] <= address < row['address'] + row['size'] for row in component['functions'])
        else:
            allowed = address in sdk_addresses or any(start <= address < end for start, end in ORIGINAL_SPANS) or any(
                row['address'] <= address < row['address'] + row['size'] for row in original_fixture_ranges)
        if not allowed and not source and discover_sdk and (0x102800<=address<0x103000 or 0x2fe000<=address<0x303000):
            sdk_discovery[address]={'address':address,'bytes':size,'mode':'Thumb'if current.reg_read(arm.UC_ARM_REG_CPSR)&32 else'ARM','sha256':sha(image[address-0x100000:address-0x100000+size])};allowed=True
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
        original_data = not source and 0x100000<=address<address+size<=0x100000+len(image)
        if kind==unicorn.UC_MEM_READ and handler_return is not None:
            frame=struct.unpack('<I',current.mem_read(HEAP+0x1000+132,4))[0]
            if frame and struct.unpack('<I',current.mem_read(frame+8,4))[0]==0x08000200 and any(address<frame+offset+4 and address+size>frame+offset for offset in(0,4,32,40)):
                inactive_reads.append(current.reg_read(arm.UC_ARM_REG_PC))
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
        try:cpu.emu_start(component['symbols'][name], STOP + 4, timeout=30000000, count=12000000)
        except unicorn.UcError as error:raise RuntimeError('022 '+name+' fault PC '+hex(cpu.reg_read(arm.UC_ARM_REG_PC))+' R0 '+hex(cpu.reg_read(arm.UC_ARM_REG_R0))+' R1 '+hex(cpu.reg_read(arm.UC_ARM_REG_R1)))from error
        if not returned or cpu.reg_read(arm.UC_ARM_REG_SP) != sp or any(cpu.reg_read(register) != value for register, value in protected.items()):
            raise ValueError('025 '+name+' did not returnABI PC='+hex(cpu.reg_read(arm.UC_ARM_REG_PC))+' SP='+hex(cpu.reg_read(arm.UC_ARM_REG_SP))+' expected='+hex(sp)+' returned='+str(returned))
        if any(cpu.reg_read(register) != value for register, value in protected_vfp.items()):
            raise ValueError('VM call fixture/root failed callee-saved VFP ABI')
        fpscr=cpu.reg_read(arm.UC_ARM_REG_FPSCR)
        if fpscr&0x07f79f00:raise ValueError('022 mandatory AAPCS floating controls changed')
        fpscr_observations.append({'entry':name,'phase':label,'fpscr':fpscr})
        return cpu.reg_read(arm.UC_ARM_REG_R0)

    if not source:
        cpu.reg_write(arm.UC_ARM_REG_SP,STACK+0xff00)
        cpu.emu_start(0x6ff69c,0x6ff728,count=40)
        if bytes(cpu.mem_read(0x8c06e8,8)) != struct.pack('<II',0x01000001,0):
            raise ValueError('Original null initializer prefix failed its precondition')
    if invoke('fixture_bind028',[HEAP,HEAP_BYTES],'prepare')!=1:
        raise ValueError('022 binding rejected valid storage')
    prepare_hook=cpu.hook_add(unicorn.UC_HOOK_CODE,instruction,begin=0x100000,end=0x9fffff)
    invoke('fixture_prepare031',[case['mode'],case['value']&0xffffffff,case['flags'],int(source)],'prepare')
    cpu.hook_del(prepare_hook)
    code_hook=cpu.hook_add(unicorn.UC_HOOK_CODE,instruction)
    memory_hook=cpu.hook_add(unicorn.UC_HOOK_MEM_READ|unicorn.UC_HOOK_MEM_WRITE,memory)
    cpu.mem_write(STACK,bytes(0x10000))
    invoke('fixture_run031',[case['cleanup']],'root')
    cpu.hook_del(code_hook);cpu.hook_del(memory_hook)
    raw=bytes(cpu.mem_read(HEAP,HEAP_BYTES))
    count=invoke('fixture_snapshot031',[HEAP+0xf0000,8192],'snapshot')
    if not 24<=count<=8192:raise ValueError('022 snapshot invalid')
    words=list(struct.unpack('<'+'I'*count,cpu.mem_read(HEAP+0xf0000,count*4)))
    return {'words':words,'arenaSha256':sha(raw),'returned':True},{'visited':sorted(coverage),'sourceOriginalModuleMapped':not source,
      'originalTablesPreserved':not source,'initializerPrefixPreconditionOnly':True,'fpscrObservations':fpscr_observations,'newSDKInstructionWitnesses':[sdk_discovery[key]for key in sorted(sdk_discovery)],'nativeInactiveFieldReadPcs':inactive_reads},raw
