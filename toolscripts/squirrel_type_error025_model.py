TYPE_NAMES={1:'null',2:'integer',4:'float',8:'bool',16:'string',32:'table',64:'array',128:'userdata',256:'function',512:'function',1024:'generator',2048:'userdata',4096:'thread',8192:'function',16384:'class',32768:'instance',65536:'weakref'}


def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'index','mask','type','flags','cleanup'}or any(type(value)is not int for value in case.values()):raise ValueError('025 malformed case')
    if not -2147483648<=case['index']<=2147483647 or not 0<=case['mask']<=0xffffffff or case['type']&0xffffff not in TYPE_NAMES or not 0<=case['flags']<=31 or bool(case['flags']&16 and not case['flags']&4) or bool(case['flags']&8 and case['flags']&1) or case['cleanup']not in(0,1):raise ValueError('025 invalid supported input')
    if case['type']==0x08010000 and case['flags']&4 and not case['flags']&2:raise ValueError('025 actual weak argument needs its qualified input owner')
    if case['flags']&4 and (case['type']not in(0x01000001,0x05000002,0x05000004,0x01000008,0x08010000)or case['mask']==0xffffffff or case['mask']&case['type']):raise ValueError('025 native cohort must actually enter type error on a primitive argument')


def message(case):
    validate_case(case)
    expected='|'.join(TYPE_NAMES[1<<bit]for bit in range(16)if case['mask']&(1<<bit))
    index=(1 if case['flags']&16 else 0)if case['flags']&4 else case['index']
    return f"parameter {index} has an invalid type '{TYPE_NAMES[case['type']&0xffffff]}' ; expected: '{expected}'".encode('ascii')


def hash_bytes(data):
    value=len(data);step=(len(data)>>5)|1
    for position in range(len(data)//step):value=(value^((value<<5)+(value>>2)+data[position]))&0xffffffff
    return value


def scratch_model(case):
    capacity=0;changes=0;length=0;count=0
    requests=[]
    for bit in range(16):
        if not case['mask']&(1<<bit):continue
        if count:requests.append(length+2);length+=1
        length+=len(TYPE_NAMES[1<<bit]);requests.append(length+1);count+=1
    requests.append(154)
    for requested in requests:
        if capacity<requested:capacity=requested+requested//2;changes+=1
        elif capacity>=requested*32:capacity//=2;changes+=1
    return changes,capacity


def cases():
    result=[];types=list(TYPE_NAMES)
    for bit in range(16):
        case={'index':bit-8,'mask':1<<bit,'type':types[(bit*7)%17]|0x08000000,'flags':bit%4,'cleanup':0}
        result +=[case,dict(case,cleanup=1)]
    for i,mask in enumerate((0,3,0x8421,0x5555,0xaaaa,0xffff,0x10000,0x80000000,0xffff0000,0xffffffff,0xfffffffe,0x10001)):
        case={'index':(-2147483648,-1,0,1,32767,2147483647)[i%6],'mask':mask,'type':types[(i*3)%17]|0x08000000,'flags':i%4,'cleanup':0}
        result +=[case,dict(case,cleanup=1)]
    for i,tag in enumerate((0x01000001,0x05000002,0x05000004,0x01000008,0x08010000)):
        for variant in range(2):
            case={'index':99,'mask':0 if variant else 0x10000,'type':tag,'flags':4+i,'cleanup':0}
            result +=[case,dict(case,cleanup=1)]
    for flags in(8,10,12,14):
        case={'index':-1,'mask':0x10000,'type':0x05000002,'flags':flags,'cleanup':0}
        result +=[case,dict(case,cleanup=1)]
    for flags,mask,tag in((7,2,0x01000001),(6,1,0x05000002),(14,3,0x05000004),(4,0xfff7,0x01000008),
       (23,2,0x01000001),(20,1,0x05000002),(30,3,0x05000004),(22,0xfff7,0x01000008)):
        case={'index':99,'mask':mask,'type':tag,'flags':flags,'cleanup':0}
        result +=[case,dict(case,cleanup=1)]
    for flags in(6,14,22,30):
        case={'index':99,'mask':65535,'type':0x08010000,'flags':flags,'cleanup':0}
        result +=[case,dict(case,cleanup=1)]
    return result


def validate(words,case):
    validate_case(case)
    if not isinstance(words,list)or not 25<=len(words)<=8192 or any(type(value)is not int or not 0<=value<=0xffffffff for value in words):raise ValueError('025 invalid observation')
    h=words[:24];text=message(case);cleanup=case['cleanup'];native=bool(case['flags']&4);weak=bool(case['flags']&2)
    if h[0:4]!=[0,int(not native),case['flags'],0x01000001 if cleanup else 0x08000010]:raise ValueError('025 caller/error publication state differs')
    if h[4:9]!=[0 if cleanup else h[4],0 if cleanup else 1,len(text),hash_bytes(text),0 if cleanup else 1]:raise ValueError('025 error string lifetime/hash differs')
    if not cleanup and not 1<=h[4]<=h[9]:raise ValueError('025 error string missing from actual allocation set')
    if h[13:18]!=[0,(1+int(native and case['type']==0x08010000))if weak and not cleanup else 0,0x01000001 if weak else 0,0,0 if cleanup or not native else 1]:raise ValueError('025 actual old-owner/weak/native lifetime differs')
    if h[18:22]!=[6 if native else 5,1,0,0]or h[22:24]not in([4,148],[8,192]):raise ValueError('025 original/native VM ABI differs')
    if h[11:13]!=list(scratch_model(case)):raise ValueError('025 actual scratch growth/shrink policy differs')
    if not cleanup and h[4]!=h[9]:raise ValueError('025 error text was not the actual final intern allocation')
    if words[24:25+len(text)]!=list(text)+[0]:raise ValueError('025 actual formatted bytes differ')
    start=25+len(text);allocations=h[9];frees=h[10]
    if len(words)!=start+allocations*6+frees*12:raise ValueError('025 allocation/observer extent differs')
    records=[words[start+i*6:start+(i+1)*6]for i in range(allocations)]
    events=[words[start+allocations*6+i*12:start+allocations*6+(i+1)*12]for i in range(frees)]
    if [row[0]for row in records]!=list(range(1,allocations+1)):raise ValueError('025 actual allocation identities differ')
    live=[row for row in records if row[2]]
    if len(live)!=(0 if cleanup else 1)or (live and live[0][0]!=h[4]):raise ValueError('025 leaked or lost an interned string')
    nominal=32 if h[22]==4 else 56
    for row in records:
        if row[1]!=nominal+row[4]or row[2]not in(0,1)or row[3]!=(1 if row[2]else 0):raise ValueError('025 string storage/refcount width differs')
    by_id={row[0]:row for row in records};disposed=[row[0]for row in events]
    if len(disposed)!=len(set(disposed)):raise ValueError('025 object finalized twice')
    expected={row[0]for row in records if not row[2]}|({1001}if not case['flags']&8 else set())
    if cleanup and native:expected|={1002,1003}
    if cleanup and weak:expected|={1004}
    if set(disposed)!=expected:raise ValueError('025 real dependency closure/final disposal differs')
    for event in events:
        if event[0]<=allocations and event[1]!=by_id[event[0]][1]:raise ValueError('025 string disposal size differs')
        if event[0]==(1 if case['flags']&8 else 1001):
            if event[2:5]!=[0x08000010,h[4]if not cleanup else next(row[0]for row in records if row[4]==len(text)and row[5]==hash_bytes(text)),2]or event[7]!=0:raise ValueError('025 old finalizer saw unpublished error or wrong temporary owner')
            if event[8:10]!=[0x01000001 if weak else 0,0]:raise ValueError('025 old-owner weak invalidation order differs')
    return {'errorBytes':len(text),'allocationCount':allocations,'disposalCount':frees,'nativeMismatchActuallyInvoked':native,'actualOldPrototypeFinalized':not bool(case['flags']&8),'actualOldStringFinalized':bool(case['flags']&8),'independentMessageAndOwnershipValidated':True}
