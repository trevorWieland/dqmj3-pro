import struct

ARENA,STACK,STOP=0x2000000,0x6000000,0xfff0000
CONTEXT,SELECTED,SLOT,MASK=ARENA+0x1000,ARENA+0x5000,ARENA+0x30000,ARENA+0x100
INDEX,NODES,RESOURCE=ARENA+0x9000,ARENA+0xa000,ARENA+0xb000
WORDS,BYTES,SHADER,OUTPUT=ARENA+0xe000,ARENA+0x11000,ARENA+0x8000,ARENA+0x20000


class TargetInput:
    def __init__(self):
        self.data=bytearray(0x40000)
        self.external={}

    def mem_write(self,address,data):
        if ARENA<=address and address+len(data)<=ARENA+len(self.data):
            self.data[address-ARENA:address-ARENA+len(data)]=data
        else:
            for index,value in enumerate(data):self.external[address+index]=value

    def mem_read(self,address,size):
        if ARENA<=address and address+size<=ARENA+len(self.data):
            return bytes(self.data[address-ARENA:address-ARENA+size])
        return bytes(self.external.get(address+index,0)for index in range(size))


def target_input(case):
    cpu=TargetInput()
    def word(address,value):
        cpu.mem_write(address,struct.pack('<I',value&0xffffffff))
    word(0x8bf790,OUTPUT)
    word(0x8bf794,OUTPUT+case['capacity']*4)
    word(0x8bfab0,CONTEXT)
    word(0x8bf79c+8,SLOT)
    word(SLOT,SELECTED if case['selected']else 0)
    word(MASK,case['mask'])
    for address,values in zip([0x8bf7ac,0x8bf80c,0x8bf824,0x8bf83c],case.get('queues',[])):
        for index,value in enumerate([*values,0xbd]):
            word(address+index*4,value)
    cpu.mem_write(CONTEXT+0x648,bytes([int(case['clip'])]))
    for index,value in enumerate(case['rect']):
        word(CONTEXT+0x5e4+index*4,value)
    for index,value in enumerate(case['size']):
        word(CONTEXT+0x698+index*4,value)
    for index,value in enumerate(case.get('headers',[0]*189)):
        word(0x8ea8d4+index*4,value)
    cpu.mem_write(SELECTED+0x426,bytes([case.get('format',0)])*189)
    for index in case.get('dirty',[]):
        address=SELECTED+0x7d8+(index>>5)*4
        value=struct.unpack('<I',bytes(cpu.mem_read(address,4)))[0]
        word(address,value | (1<<(index&31)))
    for index,value in case.get('values',{}).items():
        word(SELECTED+0x4e4+int(index)*4,value)
    word(SELECTED+0x624,7)
    word(SELECTED+0x414,SHADER)
    cpu.mem_write(SELECTED+0x424,bytes([case.get('stream_enabled',0)]))
    word(SHADER,WORDS)
    word(SHADER+4,case.get('stream_counts',[0,0])[0])
    word(SHADER+8,WORDS+0x1000)
    word(SHADER+12,case.get('stream_counts',[0,0])[1])
    word(SHADER+16,ARENA+0x12000)
    for slot in range(2):
        word(ARENA+0x12000+slot*232+0x30,WORDS)
        word(ARENA+0x12000+slot*232+0x34,case.get('record_count',0))
    word(SELECTED+0x418,case.get('record_indices',[0,0])[0])
    word(SELECTED+0x41c,case.get('record_indices',[0,0])[1])
    word(0x8bfad8,INDEX)
    for index in range(32):
        word(INDEX+0x828+index*4,0 if index in case.get('missing_resources',[]) else NODES+index*4)
        word(NODES+index*4,RESOURCE)
    word(RESOURCE+0x808,WORDS)
    for offset,base in [(0x804+index*4,ARENA+0x14000+index*0x2000) for index in range(6)]:
        word(RESOURCE+offset,base)
    word(RESOURCE+0x818,BYTES)
    word(RESOURCE+0x81c,7)
    cpu.mem_write(WORDS,b''.join(struct.pack('<I',0x12345678+index)for index in range(1024)))
    cpu.mem_write(BYTES,bytes(range(256))*16)
    for base,key in [(SELECTED,'selected_words'),(CONTEXT,'context_words'),(RESOURCE,'resource_words')]:
        for offset,value in case.get(key,{}).items():
            word(base+int(offset),value)
    for base,key in [(SELECTED,'selected_bytes'),(CONTEXT,'context_bytes')]:
        for offset,value in case.get(key,{}).items():
            cpu.mem_write(base+int(offset),bytes([value]))

    for resource in case.get('resources',[]):
        destination=ARENA+resource['offset']
        word(NODES+resource['index']*4,destination)
        for offset,value in resource['words'].items():word(destination+int(offset),value)
    return cpu
