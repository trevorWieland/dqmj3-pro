import squirrel_execute031_model as frozen

COUNTS={64:6,65:4,66:4,67:8,68:5,69:2,70:8,71:8,72:4,73:4,74:4,75:4,76:4,77:4,78:4,79:6,80:2}

def cases():
    rows=list(frozen.cases())
    for mode in COUNTS:
        values=(1,3)if mode in(74,76)else(0,17,-7)if mode not in(68,69,80)else(0,)
        for value in values:
            for flags in((0,2,4,8)if mode==78 else(0,1,2,3,4,8)):
                for cleanup in(0,1):rows.append(dict(mode=mode,value=value,flags=flags,cleanup=cleanup))
    return rows

def split(words):
    length=284+words[17]*20
    end=length+8+words[length+6]*12
    return words[:end],words[end:end+8],words[end+8:]

def normalized(words):
    before,extra,events=split(words)
    if before[2]<64:
        extra=list(extra)
        if extra[3]!=(16 if before[21]==4 else 24):raise ValueError('035 baseline trap layout')
        extra[3]=0;return frozen.normalized(before)+extra+events
    base_size=284+before[17]*20
    if len(before)!=base_size+8+before[base_size+6]*12:raise ValueError('035 malformed predecessor snapshot')
    result=list(before);pointer=before[21];object_size=8 if pointer==4 else 16
    if pointer not in(4,8)or before[19]!=(168 if pointer==4 else 296)or before[20]!=(48 if pointer==4 else 72):raise ValueError('035 wrong actual layout')
    sizes={1:64 if pointer==4 else 112,2:(96 if pointer==4 else 184)+COUNTS[before[2]]*8+5*object_size,3:96 if pointer==4 else 184,4:96 if pointer==4 else 184,10:72 if pointer==4 else 128,11:36 if pointer==4 else 64}
    for i in range(before[17]):
        start=216+i*20;identity,bytes=result[start:start+2]
        if identity==12:
            if bytes%object_size:raise ValueError('035 wrong vector disposal')
            result[start+1]=bytes//object_size
        elif identity==100:
            if bytes:raise ValueError('035 wrong native event')
        else:
            if bytes!=sizes.get(identity):raise ValueError('035 wrong exact allocation size')
            result[start+1]=identity
    result[19:22]=[0,0,0]
    extra=list(extra);events=list(events);trap_size=16 if pointer==4 else 24
    if extra[3]!=trap_size:raise ValueError('035 wrong trap ABI')
    extra[3]=0
    for i in range(extra[7]):
        start=i*16
        if events[start]==1:
            if events[start+1]%trap_size or events[start+2]%trap_size:raise ValueError('035 wrong trap allocation size')
            events[start+1]//=trap_size;events[start+2]//=trap_size
    return result+extra+events


def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'mode','value','flags','cleanup'}or any(type(value)is not int for value in case.values()):raise ValueError('035 malformed fixture parameters')
    if case['mode']<64:frozen.validate_case(case);return
    if case not in cases():raise ValueError('035 unsupported fixture case')


def validate(words,case):
    before,extra,events=split(words)
    if case['mode']<64:frozen.validate(before,case)
    else:
        if before[0]or before[2]!=case['mode']or before[3]:raise ValueError('035 failed or suspended fixture')
        success=case['mode']in(64,66,67,68,70,71,79)
        if before[1]!=int(success):raise ValueError('035 actual return status differs')
        if before[13]!=8 or before[14]!=1 or before[15]!=0 or before[16]!=0:raise ValueError('035 frame/base/depth not restored')
        if not case['cleanup'] and success:
            if case['mode']==68:
                if before[4:6]!=[0x08002000,3]:raise ValueError('035 caught reference identity differs')
            elif before[4:6]!=[0x05000002,case['value']&0xffffffff]:raise ValueError('035 caught/normal result differs')
        if not case['cleanup']:
            error_type=0x01000001 if case['mode']in(66,70)else 0x08002000 if case['mode']in(68,69,80)or(case['mode']==79 and case['flags']&1)else 0x05000002
            error_value=0 if case['mode']in(66,70)else 3 if case['mode']in(68,69,80)else 4 if case['mode']==79 and case['flags']&1 else case['value']&0xffffffff
            if extra[5:7]!=[error_type,error_value]:raise ValueError('035 pinned/current error identity differs')
            if case['mode']==69 and before[12]!=1:raise ValueError('035 top-boundary owner not released')
        if case['mode']==72:
            root_disposals=[before[216+i*20:236+i*20]for i in range(before[17])if before[216+i*20]==1]
            if len(root_disposals)!=1 or root_disposals[0][2:8]!=[8,1,0,1,1,0x01000001]:raise ValueError('035 root finalizer observed wrong current/count publication order')
        handler_modes=(73,74,75,76,77,78,79,80)
        active_handler=case['mode']in handler_modes and(bool(case['flags']&1)or(not case['flags']&2 and case['mode']!=79))
        callbacks=[events[i:i+16]for i in range(0,len(events),16)if events[i]==2]
        if case['mode']in(73,74,75,76,79,80)and len(callbacks)!=int(active_handler):raise ValueError('035 raw raise/notify handler dispatch differs')
        if case['mode']in(74,76)and active_handler:
            array=[before[216+i*20:236+i*20]for i in range(before[17])if before[216+i*20]==11]
            if len(array)!=1 or array[0][2:6]!=[11,3,1,1]:raise ValueError('035 discarded result released before argument pops')
        if extra[1] or extra[0]!=case['mode']or len(events)!=16*extra[7]:raise ValueError('035 trap/event accounting differs')
        expected_capacity=8 if case['mode']==70 else 4 if case['mode']in(64,66,67,68,71,79)else 0
        if extra[2]!=expected_capacity:raise ValueError('035 trap capacity differs')
    normalized(words)
