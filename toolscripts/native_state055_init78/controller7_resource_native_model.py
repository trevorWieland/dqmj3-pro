import json
import struct
from controller7_measure import WORK


def model(base,seed,fail_at):
    arena=bytearray([seed])*0x40000;events=[];cursor=0x10000
    def word(offset,value):struct.pack_into('<I',arena,offset,value&0xffffffff)
    def pointer(offset,value):struct.pack_into('<Q',arena,offset,value)
    def clear(address,size):arena[address-base:address-base+size]=bytes(size)
    children=[0,0,0]
    def allocate(size):
        nonlocal cursor
        call=sum(row['kind']==1 for row in events)+1
        result=0 if fail_at and call==fail_at+1 else (base+cursor+255)&-256
        events.append(dict(kind=1,flags=0x10000,options=0x100,region=0,bytes=size,pointer=result,single=children[0],multiple=children[1],extra=children[2]))
        if result:cursor=result+size-base
        return result
    def release(address):events.append(dict(kind=2,flags=0x10000,options=0x100,region=0,bytes=0,pointer=address,single=children[0],multiple=children[1],extra=children[2]))
    context=json.loads((WORK/'context-constructor-reference.private.json').read_text())['cases'][0]['contextWords']
    arena[0x1000:0x1868]=struct.pack('<538I',*context);arena[0x1868:0x18e8]=bytes(128)
    node=allocate(64);assert node;clear(node,64)
    pointer(0xa000,node);word(0xa008,0);pointer(0xa010,node);word(0xa018,0)
    arena[0x5000:0x58b8]=bytes(0x8b8)
    for index,size in enumerate([136,536,156]):
        address=allocate(size)
        if address:
            clear(address,size)
            if index<2:
                offset=address-base
                for field in[0,4]:word(offset+field,0x2600)
                for field in[8,12]:word(offset+field,0x2901)
                word(offset+0x14,-1000)
        children[index]=address;pointer(0x5000+index*8,address)
    status=0 if all(children)else -1
    if status:
        for address in children:
            if address:release(address)
        release(base+0x5000)
    return bytes(arena),events,dict(cursor=cursor,fail_at=fail_at+1 if fail_at else 0,count=len(events),fault=0,status=status)


def decode_service(data):
    base=struct.unpack_from('<Q',data)[0];cursor,fail_at,count,fault=struct.unpack_from('<4I',data,8);events=[]
    assert count<=32
    for i in range(count):
        offset=24+i*56
        kind,flags,options,region,size=struct.unpack_from('<5I',data,offset)
        address,single,multiple,extra=struct.unpack_from('<4Q',data,offset+24)
        events.append(dict(kind=kind,flags=flags,options=options,region=region,bytes=size,pointer=address,single=single,multiple=multiple,extra=extra))
    return events,dict(base=base,cursor=cursor,fail_at=fail_at,count=count,fault=fault)
