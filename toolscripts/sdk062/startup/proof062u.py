import ctypes
import hashlib
import json
import struct
from runtime062u import TaskRuntime,WORK

class TaskSession:
    def __init__(self,target,folder=None):
        self.r=TaskRuntime(target,folder);self.target=target;self.allocation=ctypes.create_string_buffer(0x10000)if target=='windows'else None;self.base=ctypes.addressof(self.allocation)if self.allocation is not None else self.r.ram;self.p=self.r.profilePointerBytes;self.l=self.r.task_layout;self.t=self.r.trace_layout
        if self.p==8 and self.base<=0xffffffff:raise ValueError('062u native pointer truncation')
    def ptr(self,a,v):self.image[a:a+self.p]=int(v).to_bytes(self.p,'little')
    def word(self,a,v):struct.pack_into('<I',self.image,a,v&0xffffffff)
    def byte(self,a,v):self.image[a]=v&255
    def compare(self,label):
        actual=self.r.read(self.base,len(self.image))
        if actual!=self.image:raise ValueError('062u '+label+' '+self.target+' full arena differs '+str([i for i,(a,b)in enumerate(zip(actual,self.image))if a!=b][:24]))
        return hashlib.sha256(actual).hexdigest()
    def initialize(self,flag,tag,extended=False,alias=None):
        if type(flag)is not int or not 0<=flag<=0xffffffff or type(tag)is not int or not 0<=tag<=255:raise ValueError('062u constructor arguments outside word/byte ABI')
        r=self.r;l=self.l;self.image=bytearray(b'\xa7'*0x10000);task=0x1000;input_byte=0x3000 if alias is None else task+dict(refs=4 if self.p==4 else 8,capture=l[5],tag=l[7],state=l[8])[alias];self.byte(input_byte,tag);r.store(self.base,self.image)
        self.word(task+(4 if self.p==4 else 8),1);self.byte(task+(8 if self.p==4 else 12),0);self.ptr(task+l[1],0)
        self.ptr(task,0x85588c if self.target=='original'else r.symbol('sdk_task_base_methods062u'));self.ptr(task+l[2],0);self.ptr(task+l[5],0);self.byte(task+l[6],flag)
        value=self.image[input_byte];self.byte(task+l[7],value);self.word(task+l[12],0);self.word(task+l[13],0);self.byte(task+l[8],0);self.word(task+l[9],0);self.word(task+l[10],0);self.ptr(task+l[4],0);self.byte(task+l[14],0);self.byte(task+l[15],0);self.byte(task+l[3],0)
        if extended:
            self.ptr(task,0x853510 if self.target=='original'else r.symbol('sdk_task_extended_methods062u'));self.word(task+l[18],0);self.word(task+l[19],0);self.ptr(task+l[21],0x853500 if self.target=='original'else r.symbol('sdk_task_member_identity062u'));self.ptr(task+l[22],0);self.image[task+l[23]:task+l[23]+self.p]=bytes(self.p);self.ptr(task+l[24],0);self.word(task+l[20],0);self.word(task+l[26],0);self.word(task+l[27],0)
        method='sdk_task_extended_initialize062u'if extended else'sdk_task_initialize062u';answer=r.call(method,[self.base+task,flag,self.base+input_byte])
        if answer!=self.base+task:raise ValueError('062u constructor return alias changed')
        digest=self.compare('whole constructor');return dict(target=self.target,flag=flag,tag=tag,extended=extended,alias=alias,arenaSha256=digest,completeArenaMatchesIndependentModel=True,returnedReceiver=True,sourceCreditGranted=0)
    def transition(self,state,callback,change=0,method='sdk_task_set_state062u'):
        if type(state)is not int or not 0<=state<=0xffffffff:raise ValueError('062u state outside word ABI')
        self.initialize(0x103,167);r=self.r;l=self.l;t=self.t;task=0x1000;trace=0x3000
        self.ptr(task+l[4],r.symbol('fixture_task_completion062u')if callback else 0);self.ptr(task+l[5],self.base+trace);self.word(trace+t[1],0);self.word(trace+t[8],change);r.store(self.base,self.image)
        value={'sdk_task_complete062u':5,'sdk_task_state_four062u':4,'sdk_task_state_two062u':2,'sdk_task_state_three062u':3}.get(method,state)
        self.byte(task+l[8],value)
        if value==5 and callback:
            self.word(trace+t[1],1);self.word(trace+t[2],5);self.word(trace+t[3],167);self.word(trace+t[4],0);self.word(trace+t[5],1);self.ptr(trace+t[6],self.base+task);self.ptr(trace+t[7],self.base+task+l[5])
            if change:self.byte(task+l[8],3)
        r.call(method,[self.base+task,state]if method=='sdk_task_set_state062u'else[self.base+task]);digest=self.compare('genuine completion callback')
        return dict(target=self.target,state=value,callback=callback,callbackChangesState=change,method=method,arenaSha256=digest,completeArenaMatchesIndependentModel=True,sourceCreditGranted=0)
    def simple(self,method,value=0):
        if method not in ['sdk_task_dispatch062u','sdk_task_set_delay062u']:raise ValueError('062u unsupported simple API')
        if type(value)is not int or not -(1<<31)<=value<(1<<31):raise ValueError('062u signed delay outside ABI')
        self.initialize(3,167);task=0x1000;r=self.r
        if method=='sdk_task_set_delay062u':self.byte(task+self.l[8],1);self.word(task+self.l[9],value)
        r.call(method,[self.base+task,value&0xffffffff]if method=='sdk_task_set_delay062u'else[self.base+task]);digest=self.compare('actual base virtual work or delay API')
        return dict(target=self.target,method=method,value=value,arenaSha256=digest,completeArenaMatchesIndependentModel=True,sourceCreditGranted=0)
    def close(self):self.r.close()

def main():
    rows=[]
    for target in ['original','arm','windows','a64']:
        session=TaskSession(target)
        try:
            for extended in [False,True]:
                for flag,tag,alias in [(0,0,None),(0x103,255,None),(1,167,'refs'),(255,1,'capture'),(0x80000001,0,'state')]:rows.append(session.initialize(flag,tag,extended,alias))
            for state,callback,change in [(5,1,1),(261,1,0),(0xffffffff,1,0),(5,0,0),(2,1,0)]:rows.append(session.transition(state,callback,change))
            rows.append(session.transition(0,1,1,'sdk_task_complete062u'));print('062u',target,'whole constructors and real completion API passed',flush=True)
        finally:session.close()
    (WORK/'attempt001/proof.json').write_text(json.dumps(dict(status='passed-bounded-task-constructor-and-completion-core',rows=rows,sourceCreditGranted=0,wholeDerivedTaskOrStartupCredit=0),indent=2)+'\n',encoding='utf-8')

if __name__=='__main__':main()
