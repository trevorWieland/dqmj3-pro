import ctypes
import hashlib
import json
import struct
from pathlib import Path
from runtime062t import ObjectRuntime,WORK,ROOT
from kernel062s import ThreadServices

class Model:
    def __init__(self,r,base):
        self.r=r;self.base=base;self.p=r.profilePointerBytes;self.l=r.object_layout;self.sdk=r.layout;self.c=r.capture_layout;self.image=bytearray(b'\xa7'*0x10000);self.pointer_fields={}
        self.tag=0x7dba44 if r.target=='original'else r.symbol('sdk_result_origin062t')
        self.offsets=dict(holder=0x1000,state=0x1200,task1=0x1400,task2=0x1500,peer=0x1800,old=0x1a00,service=0x1c00,factory=0x1d00,wrapper=0x2000,child=0x2400,connection=0x2800,result=0x3000,reference=0x3200,root=0x4000,binding=0x4800,query_binding=0x4900,context=0x5000,query=0x5200,owner=0x6000,info=0x6800,tls=0x7000)
    def at(self,name):return self.offsets[name]
    def ptr(self,offset,value):
        self.image[offset:offset+self.p]=int(value).to_bytes(self.p,'little');self.pointer_fields[offset]=int(value)
    def word(self,offset,value):struct.pack_into('<I',self.image,offset,value&0xffffffff)
    def byte(self,offset,value):self.image[offset]=value&255
    def readptr(self,offset):return int.from_bytes(self.image[offset:offset+self.p],'little')
    def wordat(self,offset):return struct.unpack_from('<I',self.image,offset)[0]
    def ref(self,name,value=5):
        a=self.at(name);self.ptr(a,0);self.word(a+self.l[1],value);self.byte(a+self.l[2],0)
    def retain(self,address):self.word(address+self.l[1],self.wordat(address+self.l[1])+1)
    def release(self,address):
        n=self.wordat(address+self.l[1]);assert n>1,'final SDK destructor is outside this corpus';self.word(address+self.l[1],n-1)
    def configure(self,profile):
        l=self.l;s=self.sdk;p=self.p
        root=self.at('root');binding=self.at('binding');qb=self.at('query_binding');context=self.at('context');query=self.at('query');owner=self.at('owner')
        self.ptr(root+s[28]+s[31]+3*p,self.base+binding);self.ptr(root+s[28]+s[31]+p,self.base+qb)
        self.ptr(binding+s[32],self.base+context);self.ptr(qb+s[32],self.base+query);self.ptr(context+s[33],self.base+owner);self.ptr(query+144,self.base+self.at('info'));self.byte(self.at('info')+254,profile.get('info',0))
        mutex=owner+80;self.ptr(mutex,0x8533fc if self.r.target=='original'else self.r.symbol('fixture_sdk_mutex_methods062s'));fast=mutex+s[22];self.word(fast,1);self.ptr(fast+s[19],0);self.word(fast+s[20],0)
        self.ptr(self.at('holder')+l[36],self.base+self.at('state')if profile.get('holder',1)else 0)
        state=self.at('state');self.ptr(state+l[32],self.base+self.at('peer')if profile.get('peer',1)else 0)
        self.ptr(state+l[33],self.base+self.at('task2')if profile.get('second',1)else 0);self.ptr(state+l[34],self.base+self.at('task1')if profile.get('first',1)else 0)
        self.byte(self.at('task1')+34,profile.get('first_state',5));self.byte(self.at('task2')+34,profile.get('second_state',5))
        self.ref('peer');self.ref('old');self.ptr(self.at('old')+l[26],self.base+0x7800);self.ptr(self.at('old')+l[30],self.base+self.at('child')if profile.get('child',1)else 0);peer=self.at('peer');self.ptr(peer+l[26],self.base+0x7800 if profile.get('context',1)else 0);self.ptr(peer+l[29],self.base+self.at('service')if profile.get('service',1)else 0);self.ptr(peer+l[30],self.base+self.at('child')if profile.get('child',1)else 0)
        self.ptr(self.at('service')+l[24],self.base+self.at('factory')if profile.get('factory',1)else 0);self.ptr(self.at('factory')+l[22],self.base+self.at('wrapper')if profile.get('wrapper',1)else 0)
        wrapper=self.at('wrapper');self.ptr(wrapper,0x8544cc if self.r.target=='original'else self.r.symbol('sdk_wrapper_methods062t'));self.word(wrapper+l[14],2);self.ptr(wrapper+l[15],0 if profile.get('current_empty',0)else self.base+self.at('peer'if profile.get('current_same',0)else'old'));self.byte(wrapper+l[16],profile.get('disabled',0));self.ptr(wrapper+l[20]+l[18],0 if profile.get('address_empty',0)else self.base+self.at('peer'if profile.get('address_same',0)else'old'))
        child=self.at('child');self.ptr(child,0x853204 if self.r.target=='original'else self.r.symbol('sdk_child_methods062t'));self.ptr(child+l[12],self.base+self.at('connection')if profile.get('underlying',1)else 0)
        conn=self.at('connection');self.ptr(conn,0x852dc4 if self.r.target=='original'else self.r.symbol('sdk_connection_methods062t'));self.byte(conn+l[4],profile.get('connection_state',2));self.ptr(conn+l[8],0);self.byte(conn+l[10],37)
    def replace(self,replacement=1):
        l=self.l;wrapper=self.at('wrapper');peer=self.at('peer');slot=wrapper+l[20]+l[18]
        old=self.readptr(slot)
        if old:self.release(old-self.base);self.ptr(slot,0)
        if replacement:self.ptr(slot,self.base+peer);self.retain(peer)
        old=self.readptr(wrapper+l[15])
        if old:self.release(old-self.base);self.ptr(wrapper+l[15],0)
        if replacement:self.ptr(wrapper+l[15],self.base+peer);self.retain(peer)
    def result(self,profile):
        l=self.l;code=0x800300d2
        if (not profile.get('first',1)or profile.get('first_state',5)==5)and profile.get('second',1)and profile.get('second_state',5)==5:
            linked=all(profile.get(n,1)for n in ['peer','service','factory','wrapper'])
            if linked:
                self.replace()
                ready=all(profile.get(n,1)for n in ['child','underlying'])and profile.get('disabled',0)==0 and profile.get('connection_state',2)==2
                if ready and profile.get('context',1)and profile.get('info',0)==0:code=0x10001
        return code
    def make(self,address,code):self.word(address,code);self.word(address+self.l[39],0x71);self.ptr(address+self.l[38],self.tag)
    def fingerprint(self):
        symbolic={0x8533fc:'mutex-methods',0x8544cc:'wrapper-methods',0x853204:'proxy-methods',0x852dc4:'connection-methods',0x7dba44:'result-origin'}if self.r.target=='original'else{self.r.symbol(n):role for n,role in [('fixture_sdk_mutex_methods062s','mutex-methods'),('sdk_wrapper_methods062t','wrapper-methods'),('sdk_child_methods062t','proxy-methods'),('sdk_connection_methods062t','connection-methods'),('sdk_result_origin062t','result-origin')]}
        symbolic[self.r.symbol('fixture_connection_callback062t')]='compiled-fixture-callback'
        projected=bytearray(self.image);roles=[]
        for offset,value in sorted(self.pointer_fields.items()):
            if value==0:role='null'
            elif self.base<=value<self.base+len(self.image):role='arena+'+hex(value-self.base)
            elif value in symbolic:role=symbolic[value]
            else:raise ValueError('062t nonenumerated pointer role at '+hex(offset))
            projected[offset:offset+self.p]=bytes(self.p);roles.append((offset,role))
        return hashlib.sha256(projected+json.dumps(roles,separators=(',',':')).encode()).hexdigest()
    def compare(self,r,label):
        actual=r.read(self.base,len(self.image))
        if r.target=='original'and hasattr(r,'module_before')and hashlib.sha256(r.read(*r.module_span)).hexdigest()!=r.module_before:raise ValueError('062t original module global/data changed')
        if actual!=self.image:
            bad=[i for i,(a,b)in enumerate(zip(actual,self.image))if a!=b];raise ValueError(label+' '+r.target+' full arena mismatch '+str(bad[:28]))
        return hashlib.sha256(actual).hexdigest()

class Session:
    def __init__(self,target,folder=None):
        self.r=ObjectRuntime(target,folder);self.target=target
        self.allocation=ctypes.create_string_buffer(0x10000)if target=='windows'else None
        self.base=ctypes.addressof(self.allocation)if self.allocation is not None else self.r.ram
        if target in ['windows','a64']and self.base<=0xffffffff:raise ValueError('062t native pointers must exceed32bits')
        expected=(12,4,8,624,188,488,492,496,500,504,620,156,144,16,4,8,12,68,64,84,16,32,28,20,16,48,12,20,28,36,44,156,120,148,152,136,132,12,4,8)if self.r.profilePointerBytes==4 else(16,8,12,648,196,496,504,512,520,528,644,176,152,32,8,16,24,80,72,112,32,40,32,24,16,88,16,32,48,64,80,168,120,152,160,144,136,24,8,16)
        if self.r.object_layout!=expected:raise ValueError('062t compiled object layout differs independent target/native contract '+str(self.r.object_layout))
        self.r.bind(self.base+0xe000,self.base+0x7000)
        self.services=ThreadServices(self.r,self.base+0x7000)
    def setup(self,profile):
        r=self.r;base=self.base;m=Model(r,base);m.configure(profile);r.store(base,m.image);r.store(r.symbol('fixture_sdk_owner_calls062s'),bytes(4));s=r.layout;p=r.profilePointerBytes
        if self.target=='original':r.store(0x8b637e,b'\0');r.store(0x8e769c,m.image[m.at('root'):m.at('root')+s[27]])
        else:
            env=r.symbol('sdk_environment062s');r.store(env+s[36],b'\0');r.store(env+s[38],(base+m.at('root')).to_bytes(p,'little'))
        if self.target=='original':
            import inventory
            segments=inventory.code_layout((ROOT/'generated/update-content0/exheader.bin').read_bytes())
            data=next(v for v in segments['segments']if v['name']=='data');self.module_span=(data['address'],data['initializedBytes']+segments['bssBytes']);self.module_before=hashlib.sha256(r.read(*self.module_span)).hexdigest();r.module_span=self.module_span;r.module_before=self.module_before
        return m
    def operation(self,profile,operation='sdk_operation_result062t'):
        r=self.r;base=self.base;m=self.setup(profile)
        if operation=='sdk_holder_ready062t'and not profile.get('holder',1):expected=0
        else:
            code=m.result(profile);expected=int(code>>31==0)
            if operation=='sdk_operation_result062t':m.make(m.at('result'),code)
        answer=r.call(operation,[base+m.at('result'),base+m.at('state')]if operation=='sdk_operation_result062t'else[base+m.at('holder')])
        if operation!='sdk_operation_result062t'and answer!=expected:raise ValueError('062t holder result mismatch')
        digest=m.compare(r,operation)
        if self.target!='original':
            calls=int.from_bytes(r.read(r.symbol('fixture_sdk_owner_calls062s'),4),'little')
            linked=(not profile.get('first',1)or profile.get('first_state',5)==5)and profile.get('second',1)and profile.get('second_state',5)==5 and all(profile.get(n,1)for n in ['peer','service','factory','wrapper'])
            expected_calls=0 if operation=='sdk_holder_ready062t'and not profile.get('holder',1)else 3 if linked else 2
            if calls!=expected_calls:raise ValueError('062t genuine nested mutex/TLS call order/count mismatch')
        return dict(target=self.target,profile=profile,operation=operation,arenaSha256=digest,validatedPointerRoleFingerprint=m.fingerprint(),fullArenaMatchesIndependentModel=True,expectedSuccess=expected,sourceCreditGranted=0)
    def setter(self,old,state,callback,held,change=0):
        if any(type(v)is not int for v in [old,state,callback,held,change])or not 0<=old<=255 or not 0<=state<=0xffffffff or callback not in [0,1]or held not in [0,1]or not 0<=change<=0xffffffff:raise ValueError('062t setter input outside measured storage/ABI domain')
        r=self.r;base=self.base;m=self.setup({});l=m.l;c=m.c;conn=m.at('connection');capture=conn+l[9]
        m.byte(conn+l[4],old);m.word(conn+l[6],0x97654321);m.ptr(conn+l[7],base+m.at('reference')if held else 0)
        m.ptr(conn+l[8],r.symbol('fixture_connection_callback062t')if callback else 0);m.ref('reference',3)
        m.word(capture+c[1],0);m.word(capture+c[10],change);m.word(capture+c[11],int(change!=0))
        r.store(base,m.image)
        m.byte(conn+l[4],state)
        if state==2:m.byte(conn+l[10],0)
        if callback:
            if held:m.release(m.at('reference'))
            m.ptr(conn+l[7],0);m.word(conn+l[6],0);m.ptr(conn+l[8],0)
            code=0x10001 if(old==1 and state==2)or(old==3 and state==0)else 0x80050007
            m.word(capture+c[1],1);m.word(capture+c[2],code);m.ptr(capture+c[3],m.tag);m.word(capture+c[4],0x71);m.word(capture+c[5],state&255);m.word(capture+c[6],m.image[conn+l[10]]);m.word(capture+c[7],0);m.ptr(capture+c[8],0);m.ptr(capture+c[9],0)
            if change:m.byte(conn+l[4],change)
        answer=r.call('sdk_connection_set_state062t',[base+conn,state])
        if answer!=1:raise ValueError('062t setter did not normally return1')
        digest=m.compare(r,'state setter and genuine compiled callback')
        ready=r.call('sdk_child_ready062t',[base+m.at('child')]);closed=r.call('sdk_child_closed062t',[base+m.at('child')])
        if(ready,closed)!=(int(m.image[conn+l[4]]==2),int(m.image[conn+l[4]]==4)):raise ValueError('062t real proxy did not reread callback-mutated underlying state')
        m.compare(r,'post-callback real proxy')
        return dict(target=self.target,old=old,newStateBits=state,callback=callback,held=held,callbackChange=change,arenaSha256=digest,validatedPointerRoleFingerprint=m.fingerprint(),fullArenaMatchesIndependentModel=True,liveReady=ready,liveClosed=closed,sourceCreditGranted=0)
    def replacement(self,profile,replacement):
        if replacement not in [0,1]:raise ValueError('062t invalid replacement role')
        r=self.r;m=self.setup(profile);m.replace(replacement)
        r.call('sdk_wrapper_replace062t',[self.base+m.at('wrapper'),self.base+m.at('peer')if replacement else 0]);digest=m.compare(r,'real derived prepare and reference replacement')
        return dict(target=self.target,profile=profile,replacement=replacement,arenaSha256=digest,validatedPointerRoleFingerprint=m.fingerprint(),fullArenaMatchesIndependentModel=True)
    def queries(self,profile):
        r=self.r;m=self.setup(profile);base=self.base;l=m.l
        present=not profile.get('current_empty',0)
        child=bool(profile.get('child',1)and profile.get('underlying',1))
        ready=int(present and profile.get('disabled',0)==0 and child and profile.get('connection_state',2)==2)
        closed=int(present and profile.get('disabled',0)==0 and child and profile.get('connection_state',2)==4)
        values=[r.call('sdk_wrapper_ready062t',[base+m.at('wrapper')]),r.call('sdk_wrapper_closed062t',[base+m.at('wrapper')]),r.call('sdk_child_ready062t',[base+m.at('child')]),r.call('sdk_child_closed062t',[base+m.at('child')])]
        expected=[ready,closed,int(profile.get('underlying',1)and profile.get('connection_state',2)==2),int(profile.get('underlying',1)and profile.get('connection_state',2)==4)]
        if values!=expected:raise ValueError('062t real wrapper/proxy query composition mismatch')
        digest=m.compare(r,'direct genuine wrapper/proxy query API')
        return dict(target=self.target,profile=profile,values=values,arenaSha256=digest,validatedPointerRoleFingerprint=m.fingerprint(),fullArenaMatchesIndependentModel=True)
    def predicate(self,code):
        if type(code)is not int or not 0<=code<=0xffffffff:raise ValueError('062t result bits outside U32 domain')
        r=self.r;m=self.setup({});m.make(m.at('result'),code);r.store(self.base,m.image)
        answer=r.call('sdk_result_success062t',[self.base+m.at('result')]);expected=int(code<0x80000000)
        if answer!=expected:raise ValueError('062t result sign predicate differs')
        digest=m.compare(r,'result sign predicate')
        return dict(target=self.target,code=code,expected=expected,arenaSha256=digest,validatedPointerRoleFingerprint=m.fingerprint(),fullArenaMatchesIndependentModel=True)
    def close(self):self.services.close();self.r.close()

def program(target,profile,folder=None,operation='sdk_operation_result062t'):
    session=Session(target,folder)
    try:return session.operation(profile,operation)
    finally:session.close()

def main():
    profiles=[{},dict(first=0),dict(second=0),dict(first_state=0),dict(second_state=6),dict(peer=0),dict(service=0),dict(factory=0),dict(wrapper=0),dict(disabled=1),dict(child=0),dict(underlying=0),dict(connection_state=0),dict(connection_state=4),dict(context=0),dict(info=1)]
    rows=[]
    for profile in profiles:
        rows.extend(program(t,profile)for t in ['original','arm','windows','a64'])
    (WORK/'attempt001').mkdir(exist_ok=True);(WORK/'attempt001/proof.json').write_text(json.dumps(dict(status='passed',observations=rows),indent=2)+'\n',encoding='utf-8');print('062t',len(profiles),'nonnull-SDK real child/provider paths passed four profiles',flush=True)

if __name__=='__main__':main()
