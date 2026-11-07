import struct
import squirrel_execute028_model as frozen

COUNTS={32:5,33:16,34:8,35:8,36:10,37:10,38:8,39:7,40:8,41:6,42:8,43:8,44:8,45:8,46:8,47:5,48:5,49:5,50:7,51:13}


def cases():
    rows=list(frozen.cases())
    def add(mode,values,flags=(0,1)):
        for value in values:
            for flag in flags:
                for cleanup in(0,1):rows.append(dict(mode=mode,value=value,flags=flag,cleanup=cleanup))
    add(32,(0,10,-17,2147483647),(0,1,2))
    add(33,(0,10,-17));add(34,(0,10));add(35,(10,))
    add(36,(1,3));add(37,(1,3))
    for mode in(38,42,43):add(mode,(0,1,31,32,33,255,256,-1),(0,))
    for mode in(44,45,46):add(mode,(0,1,-1,1431655765,-2147483648),(0,))
    add(39,(-2,-1,0,2147483647,-2147483648,-2147483647),(0,))
    add(40,(0,-2147483648,1067450368,-1069547520,1036831949,8388608,1),(0,))
    add(41,(-1,0,1,16));add(47,(0,));add(48,(0,2143289345,2139095041),(0,));add(49,(0,2143289345),(0,))
    add(50,(0,));add(51,(42,))
    return rows


def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'mode','value','flags','cleanup'}or any(type(value)is not int for value in case.values()):raise ValueError('031 malformed case')
    if case['mode']<32:frozen.validate_case(case);return
    mode,value=case['mode'],case['value']
    if mode not in COUNTS or not -2147483648<=value<=2147483647 or case['flags']not in(0,1,2)or case['cleanup']not in(0,1):raise ValueError('031 unsupported fixture domain')
    if mode in(33,34,35)and not -1000<=value<=1000:raise ValueError('031 bounded scalar fixture overflow')
    if mode in(36,37)and(not 1<=value<=3 or case['flags']==2):raise ValueError('031 native method domain exceeded')
    if mode==40 and(value&0x7f800000)==0x7f800000:raise ValueError('031 nonfinite arithmetic excluded')


def split(words):
    length=284+words[17]*20
    return words[:length],words[length:length+8],words[length+8:]


def normalized(words):
    base,extra,events=split(words);mode=base[2];value=list(base);pointer=base[21];object_size=8 if pointer==4 else 16
    if mode<32:result=frozen.normalize(base)
    else:
        if pointer not in(4,8)or base[19]!=(168 if pointer==4 else 296)or base[20]!=(48 if pointer==4 else 72):raise ValueError('031 actual layout differs')
        sizes={1:64 if pointer==4 else 112,2:(96 if pointer==4 else 184)+COUNTS[mode]*8+5*object_size,3:96 if pointer==4 else 184,4:96 if pointer==4 else 184,10:72 if pointer==4 else 128,11:36 if pointer==4 else 64,13:(32 if pointer==4 else 56)+(5 if mode==35 else 6)}
        for index in range(base[17]):
            start=216+index*20;identity,bytes=value[start:start+2]
            if identity==100:
                if bytes or value[start+2]-value[start+3]!=2:raise ValueError('031 real native method arguments differ')
                continue
            if identity==12:
                if bytes%object_size:raise ValueError('031 invalid value-vector disposal')
                value[start+1]=bytes//object_size
            else:
                if bytes!=sizes.get(identity):raise ValueError('031 exact typed disposal size differs')
                value[start+1]=identity
        value[19:22]=[0,0,0];result=value
    events=list(events)
    for index in range(extra[6]):
        start=index*12;kind,bytes=events[start:start+2]
        if kind in(1,6):
            if bytes%object_size:raise ValueError('031 wrong realloc size')
            events[start+1]=bytes//object_size
        elif kind in(2,4):
            if bytes!=(44 if pointer==4 else 80):raise ValueError('031 wrong table size')
            events[start+1]=1
        elif kind in(3,5):
            size=20 if pointer==4 else 40
            if bytes%size:raise ValueError('031 wrong table node size')
            events[start+1]=bytes//size
    return result+extra+events


def float_result(bits):
    value=struct.unpack('<f',struct.pack('<I',bits&0xffffffff))[0]
    rounded=lambda number:struct.unpack('<f',struct.pack('<f',number))[0]
    return struct.unpack('<I',struct.pack('<f',rounded(-rounded(value*2.0)+value)))[0]


def expected(case):
    mode,value=case['mode'],case['value'];bits=value&0xffffffff
    if mode==32:return 0x05000002,(bits+1)&0xffffffff
    if mode==33:return 0x05000002,(bits*2)&0xffffffff
    if mode in(34,35):return 0x05000002,(bits+7)&0xffffffff
    if mode in(36,37):return 0x01000001,0
    if mode==39:return 0x01000008,int(((bits+1)&0xffffffff)>=0x80000000)
    if mode==40:return 0x05000004,float_result(bits)
    if mode==41:return 0x01000008,int(value==0)
    if mode in(47,48):return 0x01000008,1
    if mode==49:return 0x01000008,0
    if mode==50:return 0x08002000,4
    if mode==51:return 0x05000002,bits
    a=0x80000001
    if mode in(38,42,43):
        count=bits&255
        if not count:result=a
        elif count>=32:result=0xffffffff if mode==38 else 0
        elif mode==38:result=((a-(1<<32))>>count)&0xffffffff
        elif mode==42:result=(a<<count)&0xffffffff
        else:result=a>>count
    elif mode==44:result=a&bits
    elif mode==45:result=a|bits
    elif mode==46:result=a^bits
    else:raise ValueError('031 unknown program')
    return 0x05000002,(result+1)&0xffffffff


def validate(words,case):
    validate_case(case)
    base,extra,events=split(words);mode=case['mode']
    if len(extra)!=8 or len(events)!=extra[6]*12 or extra[0]!=mode:raise ValueError('031 observation extent differs')
    if mode<32:frozen.validate(base,case);normalized(words);return
    if base[0]or base[1]!=1 or base[2:4]!=[mode,case['flags']]or base[13:17]!=[8,1,4 if case['flags']&2 else 0,0]:raise ValueError('031 returning VM state differs')
    result=(0x01000001,0)if case['cleanup']else expected(case)
    if tuple(base[4:6])!=result or tuple(base[7:9])!=result:raise ValueError('031 independent program result differs')
    if case['cleanup']:
        if base[9:13]!=[0,0,0,0]:raise ValueError('031 root owners did not finalize')
    elif mode==50 and base[6]!=7:raise ValueError('031 transferred reference owner count differs')
    if mode==32:
        if extra[1:6]!=([1,2,0,0,1]if case['cleanup']else[3,2,0,1,1]):raise ValueError('031 nested script external owners/chain differ')
    if mode==33:
        realloc=[events[i:i+12]for i in range(0,len(events),12)if events[i]==1]
        if [row[8:10]for row in realloc]!=[[0,0],[4,4]]or any(row[6:8]!=[0x08000040,1]for row in realloc):raise ValueError('031 array publication/growth observer differs')
    if mode in(36,37):
        callbacks=[events[i:i+12]for i in range(0,len(events),12)if events[i]==7]
        if len(callbacks)!=1 or callbacks[0][10:12]!=[0x0a000020,2]:raise ValueError('031 actual native method receiver differs')
    if mode==51:
        body=[base[216+i*20:236+i*20]for i in range(base[17])if base[216+i*20]==11]
        if len(body)!=1 or body[0][9:11]!=[0x05000002,case['value']&0xffffffff]:raise ValueError('031 lookup released old owner before publishing new temporary')
    normalized(words)


def header(path,rows=None):
    frozen.header(path,cases()if rows is None else rows)
