import struct
from runtime062ag import CTX
from digest024_cases import expected,IV


def values(memory,layout):
    return dict(state=list(struct.unpack_from("<4I",memory,CTX+layout[2])),
        count=struct.unpack_from("<I",memory,CTX+layout[3])[0],
        block=bytearray(memory[CTX+layout[4]:CTX+layout[4]+64]))


def compress(state):
    scratch=struct.pack("<4I",*state["state"])+bytes(state["block"])
    state["state"]=list(struct.unpack_from("<4I",expected(scratch,0,16),0))


def update(state,data):
    for value in data:
        position=state["count"]&63
        state["block"][position]=value
        state["count"]=(state["count"]+1)&0xffffffff
        if state["count"]&63==0:compress(state)


def operation(memory,layout,kind,count=0,output=None):
    state=values(memory,layout);result=bytearray(memory)
    if kind=="init":state["state"]=IV.copy();state["count"]=0
    elif kind=="block":compress(state)
    elif kind=="update":update(state,memory[512:512+count])
    elif kind=="finish":
        bits=(state["count"]<<3)&0xffffffff
        update(state,b"\x80");saved=state["count"]
        update(state,bytes((56-(state["count"]&63))%64)+struct.pack("<II",bits,0))
        state["count"]=saved
        if output is None:output=CTX+layout[5]
        result[output:output+16]=struct.pack("<4I",*state["state"])
    else:raise ValueError("unknown model operation")
    struct.pack_into("<4I",result,CTX+layout[2],*state["state"])
    struct.pack_into("<I",result,CTX+layout[3],state["count"])
    result[CTX+layout[4]:CTX+layout[4]+64]=state["block"]
    return bytes(result)


def arena(runtime,seed=0):
    memory=bytearray((i*31+seed*17)&255 for i in range(4096))
    memory[CTX:CTX+runtime.layout[1]]=runtime.vtable.to_bytes(runtime.layout[1],"little")
    return bytes(memory)
