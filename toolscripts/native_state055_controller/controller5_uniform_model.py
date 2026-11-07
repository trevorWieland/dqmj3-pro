import struct


def apply_invalidate(case,data):
    get=lambda offset:struct.unpack_from('<I',data,offset)[0]
    def put(offset,value):struct.pack_into('<I',data,offset,value&0xffffffff)
    flags=case['flags']&get(0x1000+4)
    primary=[1,2,3,4,5];auxiliary=[9,10,11,12,13]
    values=[0,6,7,8,14,15,16,17,18,19,20,21,22,25,26,27,28,29,30,31,32,38,40]
    remaining=[i for i in range(189)if i not in primary+auxiliary+values]
    ordered=[]
    if flags&16:
        for i in range(3):put(0x5000+0x1b4+i*4,0xffffffff)
        ordered+=auxiliary
        if data[0x5000+0x424]:
            for i in range(3):put(0x5000+0x348+i*4,0xffffffff)
            ordered+=primary
    if flags&32:ordered+=remaining
    if flags&2:ordered+=values
    for i in ordered:
        if data[0x5000+0x426+i]:
            put(0x30000+0x1014+i*4,~get(0x5000+0x4e4+i*4))
            offset=0x5000+0x7d8+i//32*4
            put(offset,get(offset)|(1<<(i&31)))


def apply_uniforms(case,data,base,pair,write):
    get=lambda offset:struct.unpack_from('<I',data,offset)[0]
    def put(offset,value):struct.pack_into('<I',data,offset,value)
    if not case['flags']&16:return
    if not any(get(0x5000+offset+i*4)for offset in[0x1b4,0x348]for i in range(3)):return
    for geom in[1,0]:
        source=struct.unpack_from('<Q',data,0x5000+0xea0+geom*8)[0]
        if not source:continue
        count=get(0x5000+(0x344 if geom else 0x1b0))
        mapping=0x5000+(0x1c4 if geom else 0x30)
        dirty=0x5000+(0x348 if geom else 0x1b4)
        selected=[i for i in range(count)if get(dirty+i//32*4)&(1<<(i&31))]
        runs=[]
        for index in selected:
            address=get(mapping+index*4)
            if runs and(address-runs[-1][1])&0xffffffff==runs[-1][2]:
                old=runs[-1];runs[-1]=(old[0],old[1],old[2]+1)
            else:runs.append((index,address,1))
        for first,address,length in runs:
            pair(address|0x80000000,0xf0290 if geom else 0xf02c0)
            write(0x291 if geom else 0x2c1,length*4,source-base+first*16)
    for offset in[0x1b4,0x348]:
        for i in range(3):put(0x5000+offset+i*4,0)
