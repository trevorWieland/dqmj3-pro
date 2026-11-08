import ctypes
import hashlib
import json
import struct
from unicorn import UC_HOOK_INTR,arm_const as arm
from clock_runtime062u import ClockRuntime,WORK
from windows_clock062u import WindowsClock
from kernel062s import ThreadServices
MASK=(1<<64)-1
BASE=0x8b6378
class ClockSession:
    def __init__(self,target,folder=None):
        self.r=ClockRuntime(target,folder);self.target=target;self.allocation=ctypes.create_string_buffer(0x10000)if target=='windows'else None;self.base=ctypes.addressof(self.allocation)if self.allocation is not None else self.r.ram;self.p=self.r.profilePointerBytes;self.l=self.r.clock_layout;self.hook=None
        expected=(48,0,1,2,4,8,16,24,32,36,40,40,8,16,20,24,28,32,32,8,16,24)if self.p==4 else(56,0,1,2,4,8,16,24,32,40,48,48,8,16,24,32,36,40,40,16,24,32)
        if self.l!=expected:raise ValueError('062u clock layout differs independent ABI')
        self.r.bind(self.base+0xe000,self.base+0x7000);self.services=ThreadServices(self.r,self.base+0x7000)
        self.windows=WindowsClock(self.r if target=='windows'else None,folder)if target in ['windows','original']else None
        if target=='original':
            if self.services.hook is not None:self.r.cpu.hook_del(self.services.hook);self.services.hook=None
            def svc(cpu,interrupt,data):
                if interrupt!=2 or cpu.reg_read(arm.UC_ARM_REG_PC)!=0x158f18:raise ValueError('062u unexpected clock SVC')
                value=self.windows.read()if self.real else self.tick;self.inputs.append(value);cpu.reg_write(arm.UC_ARM_REG_R0,value&0xffffffff);cpu.reg_write(arm.UC_ARM_REG_R1,value>>32)
            self.hook=self.r.cpu.hook_add(UC_HOOK_INTR,svc)
    def storeptr(self,buffer,offset,value):buffer[offset:offset+self.p]=int(value).to_bytes(self.p,'little')
    def setup(self,profile):
        r=self.r;l=self.l;s=r.layout;self.profile=profile;self.tick=profile.get('tick',268111856);self.real=profile.get('real',self.target in ['original','windows']);self.inputs=[];self.image=bytearray(b'\xa7'*0x10000);self.clock=bytearray(b'\xa7'*l[0]);self.mutex=0x6000;self.backend=0x5000;self.output=0x3000
        self.state=dict(initialized=profile.get('initialized',0),monotonic=profile.get('monotonic',0),alternate=profile.get('alternate',0),guard=profile.get('guard',0),current=profile.get('current',0),offset=profile.get('offset',0),last=profile.get('last',0));self.backend_calls=0;self.seen=167
        if self.target=='original':
            self.mutex_address=0x8e7710;self.r.call('sdk_mutex_initialize062u',[self.mutex_address,0]);self.original_mutex=r.read(self.mutex_address,40)
            for name,offset,size in [('initialized',9,1),('monotonic',10,1),('alternate',41,1),('guard',368,4),('current',408,8),('offset',416,8),('last',456,8)]:r.store(BASE+offset,self.state[name].to_bytes(size,'little'))
            r.store(BASE+104,struct.pack('<I',self.base+self.backend if profile.get('backend',0)else 0));self.initialized_address=BASE+9
        else:
            self.mutex_address=self.base+self.mutex;r.store(self.base,self.image);r.call('sdk_mutex_initialize062u',[self.mutex_address,0]);self.image[self.mutex:self.mutex+s[21]]=r.read(self.mutex_address,s[21]);g=r.symbol('sdk_clock062u');self.initialized_address=g+l[1]
            for name,index,size in [('initialized',1,1),('monotonic',2,1),('alternate',3,1),('guard',4,4),('current',5,8),('offset',6,8),('last',7,8)]:self.clock[l[index]:l[index]+size]=self.state[name].to_bytes(size,'little')
            self.storeptr(self.clock,l[8],self.base+self.backend if profile.get('backend',0)else 0);self.storeptr(self.clock,l[9],self.mutex_address);self.storeptr(self.clock,l[10],r.symbol('fixture_windows_ticks062u'if self.real else'fixture_read_ticks062u'));r.store(g,self.clock)
        self.storeptr(self.image,self.backend,r.symbol('fixture_clock_methods062u'));struct.pack_into('<Q',self.image,self.backend+l[12],profile.get('backend_value',100));struct.pack_into('<I',self.image,self.backend+l[13],0);self.storeptr(self.image,self.backend+l[14],self.initialized_address)
        for index,value in [(15,167),(16,profile.get('change_initialized',0)),(17,profile.get('initialized_value',0))]:struct.pack_into('<I',self.image,self.backend+l[index],value)
        r.store(self.base,self.image);r.store(r.symbol('fixture_kernel_ticks062u'),struct.pack('<Q',self.tick));r.store(r.symbol('fixture_kernel_tick_calls062u'),bytes(4));r.store(r.symbol('fixture_kernel_tick_log062u'),bytes(256))
        if self.target=='original':
            import inventory
            from runtime062u import ROOT
            layout=inventory.code_layout((ROOT/'generated/update-content0/exheader.bin').read_bytes());segment=next(s for s in layout['segments']if s['name']=='data');self.module_address=segment['address'];self.module=bytearray(r.read(self.module_address,segment['initializedBytes']+layout['bssBytes']))
    def raw(self):
        if self.profile.get('backend',0):
            self.backend_calls+=1;self.seen=self.state['initialized']
            if self.profile.get('change_initialized',0):self.state['initialized']=self.profile.get('initialized_value',0)&255
            return self.profile.get('backend_value',100)
        if not self.pending:raise ValueError('062u model clock needed an unobserved primitive input')
        value=self.pending.pop(0);return ((value*1000)&MASK)//268111856
    def monotonic(self,force):
        st=self.state
        if not(st['guard']&1)and st['guard']==0:st['guard']=1;st['last']=0
        offset=st['offset'];last=st['last'];raw=self.raw()
        if not st['initialized']:
            st['last']=1;st['initialized']=1;st['offset']=(1-raw)&MASK;return 1
        invalid=(offset>>63)and raw<((-offset)&MASK)
        value=(raw+offset)&MASK
        if not invalid and value>=last:st['last']=value;return value
        if force:st['offset']=(last+1-raw)&MASK;st['last']=(last+1)&MASK;return st['last']
        return self.locked()
    def locked(self):
        if self.state['monotonic']:return self.monotonic(1)
        if self.state['initialized']:return(self.raw()+self.state['offset'])&MASK
        self.state['initialized']=1;raw=self.raw();self.state['offset']=(1-raw)&MASK;return 1
    def current(self):
        if self.state['monotonic']:value=self.monotonic(0)
        elif self.state['initialized']:value=(self.raw()+self.state['offset'])&MASK
        else:self.state['initialized']=1;raw=self.raw();self.state['offset']=(1-raw)&MASK;value=1
        self.state['current']=value;return value
    def run(self,profile,method='sdk_clock_current062u',force=0):
        self.setup(profile);r=self.r;l=self.l;windows_start=len(self.windows.calls)if self.windows else 0;r.call(method,[self.base+self.output,force]if method=='sdk_clock_monotonic062u'else[self.base+self.output])
        if self.target!='original':
            calls=struct.unpack('<I',r.read(r.symbol('fixture_kernel_tick_calls062u'),4))[0];self.inputs=list(struct.unpack('<'+str(calls)+'Q',r.read(r.symbol('fixture_kernel_tick_log062u'),calls*8)))if calls else[]
        primitive_records=[]
        if self.target=='original'and self.real:primitive_records=self.windows.calls[windows_start:]
        elif self.target=='windows'and self.real and self.inputs:
            count=len(self.inputs);counters=struct.unpack('<'+str(count)+'Q',r.read(r.symbol('fixture_windows_counter_log062u'),8*count));frequencies=struct.unpack('<'+str(count)+'Q',r.read(r.symbol('fixture_windows_frequency_log062u'),8*count))
            for counter,frequency,ticks in zip(counters,frequencies,self.inputs):
                expected_ticks=((counter//frequency)*268111856+(counter%frequency)*268111856//frequency)&MASK
                if ticks!=expected_ticks:raise ValueError('062u native whole-clock actual QPC input/scaling mismatch')
                primitive_records.append(dict(counter=counter,frequency=frequency,targetTicks=ticks,readFromActualWindows=True))
        self.pending=list(self.inputs)
        if method=='sdk_clock_raw062u':expected=self.raw()
        elif method=='sdk_clock_monotonic062u':expected=self.monotonic(force)
        elif method=='sdk_clock_locked062u':expected=self.locked()
        else:expected=self.current()
        if self.pending:raise ValueError('062u model consumed fewer primitive inputs than original/source')
        struct.pack_into('<Q',self.image,self.output,expected)
        if profile.get('backend',0):struct.pack_into('<I',self.image,self.backend+l[13],self.backend_calls);struct.pack_into('<I',self.image,self.backend+l[15],self.seen)
        actual=r.read(self.base,len(self.image))
        if actual!=self.image:raise ValueError('062u clock full caller arena differs '+self.target+' '+str([i for i,(a,b)in enumerate(zip(actual,self.image))if a!=b][:24]))
        if self.target=='original':
            for name,offset,size in [('initialized',9,1),('guard',368,4),('current',408,8),('offset',416,8),('last',456,8)]:self.module[BASE+offset-self.module_address:BASE+offset-self.module_address+size]=self.state[name].to_bytes(size,'little')
            actual_state=r.read(self.module_address,len(self.module))
            if actual_state!=self.module:raise ValueError('062u original complete module data/BSS differs '+str([i for i,(a,b)in enumerate(zip(actual_state,self.module))if a!=b][:24]))
        else:
            for name,index,size in [('initialized',1,1),('guard',4,4),('current',5,8),('offset',6,8),('last',7,8)]:self.clock[l[index]:l[index]+size]=self.state[name].to_bytes(size,'little')
            actual_state=r.read(r.symbol('sdk_clock062u'),len(self.clock))
            if actual_state!=self.clock:raise ValueError('062u entire source clock storage differs '+self.target)
        return dict(target=self.target,method=method,force=force,profile=profile,rawTickInputs=self.inputs,expectedOutput=expected,backendCalls=self.backend_calls,callbackObservedInitialized=self.seen,state=self.state,completeCallerAndStateModelsMatch=True,callerArenaSha256=hashlib.sha256(actual).hexdigest(),stateStorageSha256=hashlib.sha256(actual_state).hexdigest(),actualWindowsClock=bool(self.inputs)and self.real and self.target in ['original','windows'],windowsPrimitiveRecords=primitive_records,sourceCreditGranted=0)
    def close(self):
        if self.hook is not None:self.r.cpu.hook_del(self.hook)
        if self.windows:self.windows.close()
        self.services.close();self.r.close()

def main():
    profiles=[{},dict(initialized=1),dict(monotonic=1),dict(initialized=1,monotonic=1,last=1000000000000000000),dict(initialized=1,monotonic=1,offset=MASK-100000000000,last=5),dict(backend=1),dict(backend=1,initialized=1,monotonic=1,last=200),dict(backend=1,initialized=1,monotonic=1,last=200,change_initialized=1,initialized_value=0),dict(backend=1,change_initialized=1,initialized_value=0)]
    rows=[]
    for target in ['original','arm','windows','a64']:
        session=ClockSession(target)
        try:
            for profile in profiles:
                for method in ['sdk_clock_current062u','sdk_clock_raw062u','sdk_clock_monotonic062u','sdk_clock_locked062u']:rows.append(session.run(profile,method))
            print('062u',target,'complete SDK clock paths matched independent integer/state models',flush=True)
        finally:session.close()
    (WORK/'attempt002-clock/proof.json').write_text(json.dumps(dict(status='passed-bounded-real-clock-state-and-platform-service',rows=rows,sourceCreditGranted=0),indent=2)+'\n',encoding='utf-8')

if __name__=='__main__':main()
