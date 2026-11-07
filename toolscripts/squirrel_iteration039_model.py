import squirrel_execute031_model as old
COUNTS={64:16,65:19,66:11,67:16,68:16,69:11,70:11,71:16,72:19}

def cases():
    rows=list(old.cases())
    for mode in COUNTS:
        for value in((0,)if mode in(66,67,68)else(0,3,-7)):
            for flags in(0,1):
                for cleanup in(0,1):rows.append(dict(mode=mode,value=value,flags=flags,cleanup=cleanup))
    return rows

def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'mode','value','flags','cleanup'}or any(type(v)is not int for v in case.values()):raise ValueError('039 malformed case')
    if case['mode']<64:old.validate_case(case);return
    if case not in cases():raise ValueError('039 outside declared corpus')

def split(words):
    base_size=284+words[17]*20
    before=base_size+8+words[base_size+6]*12
    if len(words)<before+1:raise ValueError('039 incomplete snapshot')
    return words[:before],words[before],words[before+1:]

def normalized(words):
    before,count,events=split(words)
    if len(events)!=count*16:raise ValueError('039 wrong iteration observation size')
    if before[2]<64:return old.normalized(before)+[count]+events
    result=list(before);pointer=before[21];object_size=8 if pointer==4 else 16
    if pointer not in(4,8)or before[19]!=(168 if pointer==4 else 296)or before[20]!=(48 if pointer==4 else 72):raise ValueError('039 wrong core/frame storage')
    mode=before[2];sizes={1:64 if pointer==4 else 112,2:(96 if pointer==4 else 184)+COUNTS[mode]*8+5*object_size,3:96 if pointer==4 else 184,4:96 if pointer==4 else 184,10:72 if pointer==4 else 128,11:36 if pointer==4 else 64,13:(32 if pointer==4 else 56)+3}
    for i in range(before[17]):
        start=216+i*20;identity,bytes=result[start:start+2]
        if bytes!=sizes.get(identity):raise ValueError('039 wrong actual disposal extent')
        result[start+1]=identity
    result[19:22]=[0,0,0]
    base_size=284+before[17]*20
    for i in range(before[base_size+6]):
        start=base_size+8+i*12;kind,bytes=result[start:start+2]
        if kind in(2,4):
            if bytes!=(44 if pointer==4 else 80):raise ValueError('039 wrong table allocation size')
            result[start+1]=1
        elif kind in(3,5):
            node_size=20 if pointer==4 else 40
            if bytes==(44 if pointer==4 else 80):result[start+1]=0x10001;continue
            if bytes%node_size:raise ValueError('039 wrong table node storage size')
            result[start+1]=bytes//node_size
        else:raise ValueError('039 unexpected predecessor event')
    events=list(events)
    for i in range(count):
        start=i*16;kind=events[start+15];bytes=events[start+13]
        if kind==0:continue
        if kind==6:
            if bytes!=4*object_size:raise ValueError('039 wrong array storage disposal')
            events[start+13]=4
        elif kind==13:
            if bytes!=(72 if pointer==4 else 128):raise ValueError('039 wrong native closure size')
            events[start+13]=13
        elif kind==11:
            if bytes!=(96 if pointer==4 else 184):raise ValueError('039 wrong prototype size')
            events[start+13]=11
        elif kind==14:
            if bytes!=(20 if pointer==4 else 40):raise ValueError('039 wrong weak object size')
            events[start+13]=14
        elif kind==30:
            index=events[start+14]
            expected=[92 if pointer==4 else 152,18*object_size,8*object_size,(16 if pointer==4 else 32)*4]if mode==69 else[92 if pointer==4 else 152,18*object_size,8*object_size,(44 if pointer==4 else 88)+2*object_size]
            if index>=len(expected)or bytes!=expected[index]:raise ValueError('039 wrong class ownership block size')
            events[start+13]=index
        else:raise ValueError('039 unknown lifecycle observer')
    return result+[count]+events

def validate(words,case):
    validate_case(case);before,count,events=split(words)
    if case['mode']<64:old.validate(before,case);normalized(words);return
    mode,value=case['mode'],case['value']
    if before[0]or before[1:4]!=[1,mode,case['flags']]or before[13:17]!=[8,1,0,0]:raise ValueError('039 return/frame state differs')
    expected=(0x01000001,0)if case['cleanup']else(0x08002000,4)if mode in(67,68)else(0x05000002,(-64 if mode==66 else value*2+(15 if mode==70 else 1))&0xffffffff)
    if tuple(before[4:6])!=expected or tuple(before[7:9])!=expected:raise ValueError('039 independent bytecode result differs')
    if case['cleanup']and before[9:13]!=[0,0,0,0]:raise ValueError('039 root owner cleanup differs')
    if mode in(71,72):
        observed=[events[i:i+16]for i in range(0,len(events),16)if events[i+15]==11]
        expected_key=[0x08002000,4,0]if mode==71 else[0x05000002,0,0]
        if len(observed)!=1 or observed[0][4:7]!=expected_key:raise ValueError('039 key release/publication order differs')
    callbacks=[events[i:i+16]for i in range(0,len(events),16)if events[i+15]==0]
    length=3 if mode==66 else 2
    if len(callbacks)!=length:raise ValueError('039 per-iteration callback count differs')
    for i,row in enumerate(callbacks):
        if row[0:4]!=[8,5,2,2]or row[4:6]!=[0x05000002,i]or row[10:12]!=[0x05000002,i if mode==70 else i+1]:raise ValueError('039 iterator protocol/order differs')
        expected_value=(0x08002000,3+i)if mode in(67,68)else(0x05000002,([65,-128,-1][i]if mode==66 else value+i+(7 if mode==70 else 0))&0xffffffff)
        if tuple(row[7:9])!=expected_value:raise ValueError('039 yielded value differs')
        if row[13]!=0x08000200:raise ValueError('039 observer did not run through real native invocation')
    normalized(words)


def header(path,rows=None):
    old.header(path,cases()if rows is None else rows)
