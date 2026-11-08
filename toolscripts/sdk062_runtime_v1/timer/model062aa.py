import struct
import sys
from pathlib import Path
ROOT=next(p for p in Path(__file__).resolve().parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'work/native-asset062-sdk-info'))
from model062z import EraseModel
MASK=(1<<64)-1
class TimerModel(EraseModel):
    def __init__(self,layout,base,dispose,timer_layout,identity):
        l=list(layout);t=timer_layout
        for index,value in [(1,t[6]),(5,t[7]),(6,t[8]),(7,t[9]),(8,t[10]),(9,t[11]),(10,4*l[0]),(11,t[12]),(12,t[13])]:l[index]=value
        super().__init__(l,base,dispose);self.t=t;self.identity=identity;self.payloads={};self.timer=0x5000;self.image[self.map:self.map+l[9]]=b'\xa7'*l[9];self.image[self.head:self.head+l[1]]=b'\xa7'*l[1];self.map=self.timer+t[16];self.timeout=0;self.last=0
    def initialize_timer(self,timeout,current):
        self.initialize();self.image[self.map+self.t[14]]=(self.base+self.timer)&255;self.timeout=timeout;self.word(self.timer+self.t[17],timeout);self.last=current;struct.pack_into('<Q',self.image,self.timer+self.t[19],current)
    def endpoint(self,at,data):
        self.ptr(at,self.identity)
        for index,value in enumerate(data):self.word(at+self.t[2]+index*4,value)
    @staticmethod
    def endpoint_key(data):
        ip=data[1];signed=ip if ip<0x80000000 else ip-(1<<32);return signed,data[0]>>16
    def set(self,first,second,replace):
        if second[1]==0 or(first[1]==second[1]and first[0]>>16==second[0]>>16):return 0
        key=self.endpoint_key(first);found=next((at for at in self.active if self.nodes[at]['key']==key),None)
        if found is not None and not self.image[self.map+self.l[12]]:
            if not replace:return 0
            self.payloads[found]['second']=second[:];self.payloads[found]['remaining']=self.timeout;return 1
        node=self.insert(key,self.image[self.map+self.l[12]]);self.payloads[node]=dict(first=first[:],second=second[:],remaining=self.timeout);return 1
    def update(self,current):
        elapsed=(current-self.last)&0xffffffff
        if elapsed<1000:return
        self.last=current;struct.pack_into('<Q',self.image,self.timer+self.t[19],current)
        for node in self.order():
            value=self.payloads[node]['remaining']
            if value>elapsed:self.payloads[node]['remaining']=(value-elapsed)&0xffffffff
            else:self.erase(node)
    def render(self):
        self.word(self.map+self.l[11],self.count)
        for field,node in [(self.l[2],self.root),(self.l[3],self.low),(self.l[4],self.high)]:self.ptr(self.head+field,self.base+node if node is not None else(0 if field==self.l[2]else self.base+self.head))
        for at,n in self.nodes.items():
            self.image[at]=n['black']
            for field,key in [(self.l[2],'parent'),(self.l[3],'left'),(self.l[4],'right')]:
                value=n[key];self.ptr(at+field,self.base+(self.head if key=='parent'and value is None else value)if value is not None or key=='parent'else 0)
            payload=self.payloads.get(at)
            if payload:
                self.endpoint(at+self.t[7],payload['first']);self.endpoint(at+self.t[7]+self.t[4],payload['second']);self.word(at+self.t[7]+self.t[5],payload['remaining'])
