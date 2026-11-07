import struct
from controller5_fixture import ARENA,MASK,STOP


def calls(case):
    yield dict(flags=case['flags'],mask=case['mask'],changes=[])
    for item in case.get('additional_calls',[]):
        yield dict(flags=item.get('flags',case['flags']),mask=item.get('mask',case['mask']),changes=item.get('changes',[]),clear_attribute_selection=item.get('clear_attribute_selection',False))


def target_calls(cpu,entry,case,wide=False,base=ARENA):
    from unicorn import arm_const as arm,arm64_const as a64
    for item in calls(case):
        if item.get('clear_attribute_selection'):
            cpu.mem_write(base+0x30000+(8 if wide else 4),bytes(8 if wide else 4))
        for change in item['changes']:
            assert change['offset']%4==0
            cpu.mem_write(base+change['offset'],struct.pack('<I',change['value']&0xffffffff))
        cpu.mem_write(base+(MASK-ARENA),struct.pack('<I',item['mask']))
        if wide:
            cpu.reg_write(a64.UC_ARM64_REG_X0,base+(MASK-ARENA));cpu.reg_write(a64.UC_ARM64_REG_X1,item['flags']);cpu.reg_write(a64.UC_ARM64_REG_X30,STOP)
        else:
            cpu.reg_write(arm.UC_ARM_REG_R0,MASK);cpu.reg_write(arm.UC_ARM_REG_R1,item['flags']);cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
        cpu.emu_start(entry,STOP,count=1000000)


def windows_calls(call,base,case):
    import ctypes
    for item in calls(case):
        if item.get('clear_attribute_selection'):ctypes.c_void_p.from_address(base+0x30008).value=None
        for change in item['changes']:ctypes.c_uint32.from_address(base+change['offset']).value=change['value']
        ctypes.c_uint32.from_address(base+(MASK-ARENA)).value=item['mask']
        call(base+(MASK-ARENA),item['flags'])


def model_calls(model,case,data,base):
    output=None;stage=0xffffffff;events=[]
    for item in calls(case):
        if item.get('clear_attribute_selection'):struct.pack_into('<Q',data,0x30008,0)
        for change in item['changes']:struct.pack_into('<I',data,change['offset'],change['value']&0xffffffff)
        struct.pack_into('<I',data,MASK-ARENA,item['mask'])
        current=dict(case,flags=item['flags'],mask=item['mask'])
        data,output,stage,new_events=model(current,data,base,stage,output)
        events.extend(new_events)
    return data,output,stage,events
