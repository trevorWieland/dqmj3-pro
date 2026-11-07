import math
import struct


def apply_lighting(case,data,base,pair,write,tables):
    read=lambda offset:struct.unpack_from('<I',data,offset)[0]
    def store(offset,value):struct.pack_into('<I',data,offset,value&0xffffffff)
    pointer=lambda offset:struct.unpack_from('<Q',data,offset)[0]
    def store_pointer(offset,value):struct.pack_into('<Q',data,offset,value)
    sample=lambda offset:struct.unpack_from('<f',data,offset)[0]
    def f32(value):
        try:return struct.unpack('<f',struct.pack('<f',value))[0]
        except OverflowError:return math.copysign(math.inf,value)
    if not case['flags']&64 or not read(0x5000+0x590)&1 or not case['mask']&0x4008:return False
    uploaded=False
    def cache(slot,index,identity_base,count_base,first_base,location):
        nonlocal uploaded
        identity=read(0x1000+0x74+index*4)
        resource=tables.resource(index)
        if resource is None:return False
        previous=read(0x1000+identity_base+slot*4)
        pending=read(0x1000+count_base+slot*4)
        if previous==identity:
            if pending:
                first=read(0x1000+first_base+slot*4)
                pair(location|first,0xf01c5)
                write(0x1c8,pending,pointer(resource+0x808)-base+first*4)
                store(0x1000+count_base+slot*4,0)
        else:
            store(0x1000+count_base+slot*4,0)
            store(0x1000+identity_base+slot*4,identity)
            uploaded=True
            buffer=tables.pack12(resource)
            pair(location,0xf01c5)
            write(0x1c8,256,buffer)
        return True
    enabled=read(0x5000+0xa0c)
    skipped=read(0x5000+0x7c0)
    for slot in range(6):
        mapped=slot+int(slot>=2)
        if not enabled&(1<<slot)or skipped&(1<<(16+mapped)):continue
        index=read(0x5000+0x9f4+slot*4)
        if index==0xffffffff or not read(0x1000+0x74+index*4):break
        if not cache(slot,index,0x10c,0x190,0x214,mapped<<8):break
    for slot in range(8):
        if not data[0x5000+0xa20+112*slot]:continue
        if enabled&64 and not skipped&(1<<(slot+8)):
            cache(slot,read(0x5000+0xa80+112*slot),0x124,0x1a8,0x22c,0x800+(slot<<8))
        if not skipped&(1<<(slot+24)):
            cache(slot,read(0x5000+0xa8c+112*slot),0x144,0x1c8,0x24c,0x1000+(slot<<8))

    return uploaded
