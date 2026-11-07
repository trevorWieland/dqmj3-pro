

def cases():
    rows=[]
    def add(mode,value,flags=0):
        for cleanup in(0,1):rows.append(dict(mode=mode,value=value,flags=flags,cleanup=cleanup))
    for value in(0,1,-1,42,2147483647,-2147483648):add(0,value)
    for value in(0,1,2,10,31,127):add(1,value,value%2)
    for value in(0,-2147483648,1065353216,-1082130432,2139095040,2143289345,2139095041):add(3,value)
    for mode in(2,4,5,6,7):
        for flags in(0,1,2,4,7):add(mode,-17 if mode==6 else 0,flags)
    for value in(0,1,3):
        for flags in(0,1):add(8,value,flags)
    for mode in(9,10):
        for flags in(0,1):add(mode,42,flags)
    return rows


def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'mode','value','flags','cleanup'}or any(type(value)is not int for value in case.values()):raise ValueError('028 malformed synthetic case')
    if case['mode']not in range(11)or not -2147483648<=case['value']<=2147483647 or not 0<=case['flags']<=7 or case['cleanup']not in(0,1):raise ValueError('028 unsupported synthetic case')
    if case['mode']==1 and not 0<=case['value']<=127:raise ValueError('028 loop domain exceeded')
    if case['mode']in(8,9,10)and case['flags']not in(0,1):raise ValueError('028 native/error frame domain exceeded')
    if case['mode']==8 and not 0<=case['value']<=16:raise ValueError('028 native array storage domain exceeded')


def normalize(words):
    value=list(words);pointer=value[21]
    if pointer not in(4,8):raise ValueError('028 unsupported pointer width')
    sizes={1:64 if pointer==4 else 112,2:(96 if pointer==4 else 184)+(8 if value[2]==1 else 4 if value[2]==2 else 12 if value[2]==3 else 5 if value[2]==8 else 3)*8+(6 if value[2]==10 else 5)*(8 if pointer==4 else 16),3:96 if pointer==4 else 184,4:96 if pointer==4 else 184,5:8 if pointer==4 else 16,10:72 if pointer==4 else 128,11:36 if pointer==4 else 64}
    for index in range(value[17]):
        offset=216+index*20;identity,bytes=value[offset:offset+2]
        expected=sizes.get(identity)
        if identity==100:
            if bytes or value[offset+2]-value[offset+3]!=2 or value[offset+4]!=(6 if value[3]&2 else 2)or value[offset+5]!=2 or value[offset+7]!=0x08000200:raise ValueError('028 real native callback argument/frame state differs')
            continue
        if identity==13:expected=(32 if pointer==4 else 56)+(21 if value[2]==9 else 26)
        if identity==12:
            if not bytes or bytes%(8 if pointer==4 else 16):raise ValueError('028 wrong array allocation size')
            value[offset+1]=bytes//(8 if pointer==4 else 16)
        else:
            if bytes!=expected:raise ValueError('028 actual platform disposal size differs')
            value[offset+1]=identity
    if value[19]!=(168 if pointer==4 else 296)or value[20]!=(48 if pointer==4 else 72):raise ValueError('028 actual storage layout differs')
    value[19:22]=[0,0,0];return value


def validate(words,case):
    validate_case(case)
    mode,value,cleanup=case['mode'],case['value'],case['cleanup']
    if len(words)!=284+words[17]*20 or words[0]or words[1]!=(0 if mode in(9,10)else 1)or words[2:4]!=[mode,case['flags']]:raise ValueError('028 normally returning fixture domain failed')
    if words[13:17]!=[8,1,4 if case['flags']&2 else 0,100 if mode==9 else 0]:raise ValueError('028 stack/frame/depth restoration failed')
    if words[23]!=(4 if case['flags']&2 else 0):raise ValueError('028 previous current frame restoration failed')
    if cleanup:
        if words[4:9]!=[0x01000001,0,0,0x01000001,0]or words[9:13]!=[0,0,0,0]:raise ValueError('028 final ownership graph not destroyed')
    elif mode in(9,10):
        if words[4:7]!=[0x08002000,4,1]or words[7:9]!=([0x01000001,0]if mode==9 else[0x08000100,1]):raise ValueError('028 failure published an unintended result/temporary')
    else:
        if mode in(0,6):expected=(0x05000002,value&0xffffffff)
        elif mode==1:expected=(0x05000002,(value*(value+1)//2)&0xffffffff)
        elif mode in(2,4):expected=(0x08002000,3)
        elif mode==5:expected=(0x01000008,1)
        elif mode==7:expected=(0x05000002,0)
        elif mode==8:expected=(0x08000040,11)
        elif mode==3:
            bits=value&0xffffffff;false=bits&0x7fffffff==0;expected=(0x05000004,bits)if false else(0x05000002,11)
        else:raise ValueError('028 unknown program')
        if tuple(words[4:6])!=expected or words[7:9]!=list(expected):raise ValueError('028 independent program result differs')
        if words[6]!=(4 if mode==2 else 5 if mode==4 else 3 if mode==8 else 0):raise ValueError('028 returned ownership count differs')
        if mode==3:
            false=value&0x7fffffff==0
            if words[39:41]!=[0x01000008,int(false)]or words[42:44]!=[0x01000008,int(value!=0)]:raise ValueError('028 independent boolean model differs')
    if words[48:60]!=[0x01000001,0,0]*4:raise ValueError('028 returned stack tail retains live values')
    expected_events=([4]if mode in(2,4)else[]if mode in(9,10)else[3,100,4]if mode==8 else[3,4])
    if cleanup:
        expected_events=([4,1,3,2]if mode==2 else[4,3,5,1,2]if mode==4 else[4,3,1,2,13]if mode in(9,10)else[3,100,4]+([12]if value else[])+[11,1,10,2]if mode==8 else[3,4,1,2])
    events=[words[216+i*20:236+i*20]for i in range(words[17])]
    if [event[0]for event in events]!=expected_events:raise ValueError('028 ordered disposal/callback model differs')
    for event in events:
        if event[0]==4:
            published=0x01000001 if mode in(9,10)else 0x08002000 if mode in(2,4)else words[4]if not cleanup else 0x08000040 if mode==8 else 0x01000008 if mode==5 else 0x05000004 if mode==3 and value&0x7fffffff==0 else 0x05000002
            if event[15]!=published:raise ValueError('028 incoming result was not published before old-owner release')
        if event[0]==3 and mode not in(2,4,9,10):
            published=0x01000001 if mode==5 else 0x08000200 if mode==8 else 0x08002000
            if event[16]!=published:raise ValueError('028 scalar release/assignment publication order differs')
    error=words[216+words[17]*20:]
    expected_error=('Native stack overflow'if mode==9 else'wrong number of parameters')if mode in(9,10)and not cleanup else''
    if error[0]!=(0x08000010 if expected_error else 0x01000001)or error[1]!=len(expected_error)or error[4:4+len(expected_error)]!=list(expected_error.encode('ascii')):raise ValueError('028 actual error text/publication differs')
    normalize(words)


def header(path,rows=None):
    rows=cases()if rows is None else rows;path.write_text('#ifndef SQ_EXECUTE_CASES028_H\n#define SQ_EXECUTE_CASES028_H\ntypedef struct { unsigned int mode;int value;unsigned int flags,cleanup; } SqExecuteCase028;\nstatic const SqExecuteCase028 execute_cases028[]={\n'+''.join('    {%d,%s,%d,%d},\n'%(r['mode'],'(-2147483647-1)'if r['value']==-2147483648 else str(r['value']),r['flags'],r['cleanup'])for r in rows)+'};\n#endif\n',encoding='utf-8')
