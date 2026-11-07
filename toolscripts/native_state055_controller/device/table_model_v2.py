import math
import struct


def f32(value):
    try:return struct.unpack('<f',struct.pack('<f',value))[0]
    except OverflowError:return math.copysign(math.inf,value)


def unsigned(value):
    if math.isnan(value)or value<0:return 0
    return min(0xffffffff,int(value))if math.isfinite(value)else 0xffffffff


def positive(value,scale,maximum):
    if not math.isfinite(value)or value<=0:return 0
    scaled=f32(value*scale)
    return maximum if scaled>=maximum+1 else unsigned(scaled)


def signed(value,bias,scale,center,maximum):
    if value==0 or not math.isfinite(value):return 0
    scaled=f32(f32(value+bias)*scale)
    clamped=max(0,min(maximum,scaled))
    return unsigned(f32(clamped-center if clamped>=center else clamped+center))


class TableModel:
    def __init__(self,data,base):
        self.data=data;self.base=base;self.cursor=0x38000;self.events=[]

    def word(self,offset):return struct.unpack_from('<I',self.data,offset)[0]
    def store(self,offset,value):struct.pack_into('<I',self.data,offset,value&0xffffffff)
    def pointer(self,offset):return struct.unpack_from('<Q',self.data,offset)[0]
    def sample(self,offset):return struct.unpack_from('<f',self.data,offset)[0]
    def resource(self,index):
        if index>=32:return None
        node=self.pointer(0x9000+0x828+index*8)
        return self.pointer(node-self.base)-self.base if node else None

    def allocate(self,resource,slot,size):
        value=self.pointer(resource+0x808+slot*8)
        if value:return value-self.base
        start=((self.base+self.cursor+255)&~255)-self.base
        self.cursor=start+size
        assert self.cursor<=0x40000
        fingerprint=2166136261
        for value in self.data[0x110c:0x1268]:fingerprint=((fingerprint^value)*16777619)&0xffffffff
        observed=0xb000
        self.events.append(dict(contextFingerprint=fingerprint,arguments=[65536,256,0,size],resource=self.base+observed,flags=self.word(observed+0x838),
                                name=self.word(observed),last_delta_bits=self.word(observed+0x800),
                                storage=[self.pointer(observed+0x808+i*8)or None for i in range(6)],returned=self.base+start))
        struct.pack_into('<Q',self.data,resource+0x808+slot*8,self.base+start)
        return start

    def pack12(self,resource):
        if not self.word(resource+0x838)&1:return self.pointer(resource+0x808)-self.base
        output=self.allocate(resource,0,1024)
        for index in range(256):
            value=self.sample(resource+4+index*4);delta=self.sample(resource+0x404+index*4)
            low=positive(value,4096,4095);high=0
            if math.isfinite(delta)and delta!=0:
                scaled=f32(delta*2048)
                high=(0x800 if scaled<0 else 0)|int(min(2047,abs(scaled)))
            self.store(output+index*4,low|(high<<12))
        self.store(resource+0x838,self.word(resource+0x838)&~1)
        return output

    def pack_pair(self,resource,slot,flag,fog=False):
        if not self.word(resource+0x838)&flag:return self.pointer(resource+0x808+slot*8)-self.base
        output=self.allocate(resource,slot,512)
        for index in range(128):
            a=self.sample(resource+4+index*4);b=self.sample(resource+4+(index+128)*4)
            low=signed(b,2,2048,4096,8191)if fog else positive(a,4096,4095)
            high=positive(a,2048,2047)if fog else signed(b,1,2048,2048,4095)
            self.store(output+index*4,low|(high<<(13 if fog else 12)))
        self.store(resource+0x838,self.word(resource+0x838)&~flag)
        return output

    def pack_bytes(self,resource):
        if not self.word(resource+0x838)&32:return self.pointer(resource+0x830)-self.base
        output=self.allocate(resource,5,512)
        for index in range(256):
            value=self.sample(resource+4+index*4)
            bits=self.word(resource+4+index*4)
            if bits<0x80000000 and bits>0x3f800000:value=1
            self.data[output+index]=unsigned(f32(f32(value*255)+0.5))&255
        for index in range(255):self.data[output+256+index]=signed(self.sample(resource+0x404+index*4),1,128,128,255)&255
        self.data[output+511]=0
        self.store(resource+0x838,self.word(resource+0x838)&~32)
        return output

    def pack_components(self,resource):
        if not self.word(resource+0x838)&4:return self.pointer(resource+0x818)-self.base
        output=self.allocate(resource,2,64)
        for index in range(8):
            value=f32(self.sample(resource+4+index*4)*255)
            delta=self.sample(resource+4+(index+8)*4)
            self.store(output+index*4,positive(value,1,255))
            self.store(output+32+index*4,(unsigned(abs(f32(delta*127)))&127)|(128 if delta<0 else 0))
        self.store(resource+0x838,self.word(resource+0x838)&~4)
        return output
