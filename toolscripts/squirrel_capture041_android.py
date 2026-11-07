import struct

import unicorn
from unicorn import arm64_const as arm
from platform_engine_wave005_android_model import machine


class Android:
    def __init__(self,sections,symbols):
        self.sections,self.symbols=sections,symbols
        self.calls=0

    def execute(self,variant,cleanup=0):
        cpu=machine(self.sections)
        self.terminal=None
        base,stack,stop=0x110000000,0x130000000,0x140000000
        cpu.mem_map(base,0x40000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
        cpu.mem_map(stack,0x20000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
        cpu.mem_map(stop,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)

        def marker(current,address,size,unused):
            kind,reason=struct.unpack('<II',current.mem_read(self.symbols['capture_fixture041']+12,8))
            self.terminal={'kind':kind,'reason':reason,'sourceServiceBoundary':True};current.emu_stop()
        cpu.hook_add(unicorn.UC_HOOK_CODE,marker,begin=self.symbols['fixture_terminal_marker041'],end=self.symbols['fixture_terminal_marker041'])
        def invoke(name,arguments):
            sp=stack+0x10000
            for index in range(18,30):cpu.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(index)),0x5800000000+index*167)
            for index in range(8,16):cpu.reg_write(getattr(arm,'UC_ARM64_REG_D'+str(index)),0x3ff0000000000000+index*173)
            for index,value in enumerate(arguments):
                if index<8:cpu.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(index)),value)
                else:cpu.mem_write(sp+8*(index-8),struct.pack('<Q',value))
            cpu.reg_write(arm.UC_ARM64_REG_SP,sp);cpu.reg_write(arm.UC_ARM64_REG_X30,stop)
            cpu.emu_start(self.symbols[name],stop,count=2000000)
            if self.terminal:return 0
            if cpu.reg_read(arm.UC_ARM64_REG_PC)!=stop or cpu.reg_read(arm.UC_ARM64_REG_SP)!=sp:
                raise ValueError('020 Android object did not return: '+name)
            if any(cpu.reg_read(getattr(arm,'UC_ARM64_REG_X'+str(i)))!=0x5800000000+i*167 for i in range(18,30)):
                raise ValueError('020 Android x18/saved integer state changed')
            if any(cpu.reg_read(getattr(arm,'UC_ARM64_REG_D'+str(i)))!=0x3ff0000000000000+i*173 for i in range(8,16)):
                raise ValueError('020 Android saved floating state changed')
            self.calls+=1
            return cpu.reg_read(arm.UC_ARM64_REG_X0)
        names=['sq_table_vtable019','sq_prototype_vtable011','sq_native_closure_vtable013','sq_script_closure_vtable017',
            'sq_weak_vtable014','sq_string_vtable015','sq_prototype_base_vtable011']
        if invoke('fixture_table_bind019',[base,0x40000,*[self.symbols[name] for name in names]])!=1:
            raise ValueError('020 Android bind failed')
        invoke('fixture_prepare020',[variant,cleanup])
        result=invoke('fixture_execute020',[])
        if self.terminal:return [0x041f00,variant,self.terminal['kind'],self.terminal['reason']]
        if result!=1:raise ValueError('041 Android root failed')
        count=invoke('fixture_snapshot020',[base+0x38000,4096])
        words=list(struct.unpack('<'+'I'*count,cpu.mem_read(base+0x38000,count*4)))
        if words[3:5]!=[0,0]:raise ValueError('020 Android fixture fault: '+repr(words[:16]))
        return words
