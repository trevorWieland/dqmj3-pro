import squirrel_iteration039_model as old
NULL=(0x01000001,0)
INT=0x05000002
PROTO=0x08002000
STRING=0x08000010
WEAK=0x08010000
MARK=0x430043


def cases():
    rows=list(old.cases())
    for mode in(73,74):
        for value in(0,3,-7):
            for flags in(0,1):
                for cleanup in(0,1):rows.append(dict(mode=mode,value=value,flags=flags,cleanup=cleanup))
    for mode in range(128,135):
        cursors=(-1,0,1,2,3,4,0x7fffffff)if mode<131 else(-1,0,1,2,0x7fffffff)
        flags=range(16)if mode==130 else(0,1,2,3,8,9,10,11)if mode==133 else(0,1,2,3,16,17,18,19,24,25,26,27)if mode==132 else(0,1)if mode==134 else range(4)
        for value in cursors:
            for flag in flags:
                for cleanup in(0,1):rows.append(dict(mode=mode,value=value,flags=flag,cleanup=cleanup))
    return rows


def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'mode','value','flags','cleanup'}or any(type(v)is not int for v in case.values()):raise ValueError('043 malformed case')
    if case not in cases():raise ValueError('043 outside declared corpus')


def header(path,rows=None):
    rows=cases()if rows is None else rows
    if len(rows)<=400:old.header(path,rows);return
    names=[]
    for index in range(0,len(rows),400):
        part=path.with_name(path.stem+str(index//400)+path.suffix);names.append(part.name)
        part.write_text(''.join('{%d,%d,%d,%d},\n'%(row['mode'],row['value'],row['flags'],row['cleanup'])for row in rows[index:index+400]),encoding='utf-8')
    path.write_text('typedef struct {unsigned int mode;int value;unsigned int flags,cleanup;} SqExecuteCase028;\nstatic const SqExecuteCase028 execute_cases028[]={\n'+''.join('#include "'+name+'"\n'for name in names)+'};\n',encoding='utf-8')


def split(words):
    if words[0]!=MARK:
        if words[-1]==MARK:return words[:-1],None
        if len(words)>3 and words[-3]==MARK:return words[:-3],None
        raise ValueError('043 missing predecessor marker')
    if len(words)<25:raise ValueError('043 short helper observation')
    at=22;blocks=[]
    for width in(12,16,20,12):
        count=words[at-1]if not blocks else words[at]
        if blocks:at+=1
        if count>128 or at+count*width>len(words):raise ValueError('043 event extent')
        blocks.append([words[i:i+width]for i in range(at,at+count*width,width)]);at+=count*width
    if at!=len(words):raise ValueError('043 trailing observation words')
    return words[:22],blocks


def normalized(words):
    fixed,blocks=split(words)
    if blocks is None:return old.normalized(fixed)+(words[-3:]if words[-1]!=MARK else[MARK])
    result=list(fixed);pointer=result[7]
    if pointer not in(4,8):raise ValueError('043 pointer width')
    result[7]=0
    for index,rows in enumerate(blocks):
        result.append(len(rows))
        for original in rows:
            row=list(original)
            if index==0:
                expected=(96 if pointer==4 else 184)if row[0]in(3,4,5,6)else(224 if pointer==4 else 352)if row[0]==2 else None
                if row[1]!=expected:raise ValueError('043 wrong actual prototype disposal bytes')
                row[1]=row[0]
            elif index==1:
                kind=row[15]
                if kind==13:expected=72 if pointer==4 else 128;row[13]=13 if row[13]==expected else 0
                elif kind==14:expected=20 if pointer==4 else 40;row[13]=14 if row[13]==expected else 0
                elif kind==30:
                    sizes=[92 if pointer==4 else 152,18*(8 if pointer==4 else 16),8*(8 if pointer==4 else 16),(16 if pointer==4 else 32)*4]
                    if row[14]>=len(sizes)or row[13]!=sizes[row[14]]:raise ValueError('043 class disposal extent')
                    row[13]=row[14]+1
                else:raise ValueError('043 unknown lifetime service')
                if not row[13]:raise ValueError('043 lifetime service size')
            elif index==2:
                sizes={1:64 if pointer==4 else 112,2:224 if pointer==4 else 352,3:96 if pointer==4 else 184,4:96 if pointer==4 else 184,13:35 if pointer==4 else 59}
                if row[1]!=sizes.get(row[0]):raise ValueError('043 predecessor disposal extent')
                row[1]=row[0]
            else:
                if row[0]not in(2,3,4,5):raise ValueError('043 table allocation event')
                table_size=44 if pointer==4 else 80;node_size=20 if pointer==4 else 40
                if row[1]==table_size:row[1]=0x10001
                elif row[1]%node_size==0:row[1]//=node_size
                else:raise ValueError('043 table storage allocation size')
            result+=row
    return result


def expected(case):
    mode,flags,cursor,cleanup=(case[k]for k in('mode','flags','value','cleanup'))
    weak=mode in(130,133)or mode==132 and bool(flags&16)
    counts={2:1,3:1+bool(flags&1),4:1+bool(flags&1),5:1,6:1,13:2 if mode in(129,130)else 1,20:1,21:0}
    key,value=(PROTO,3),(PROTO,4)
    owners=[(PROTO,3)if flags&1 else NULL,(PROTO,4)if flags&1 else NULL,(PROTO,5),(PROTO,6)]
    stored=(WEAK,20)if weak else(PROTO,5)
    has_storage=mode in(129,130,131,132,133)
    if has_storage and not weak:counts[5]+=1
    events=[];phase=0;mutations=0
    def view(object):return [object[0],object[1]&0xffffffff,counts.get(object[1],0)if object[0]&0x08000000 else 0]
    def retain(object):
        if object[0]&0x08000000:counts[object[1]]+=1
    def release(object):
        nonlocal key,value,stored,mutations
        if not object[0]&0x08000000:return
        identity=object[1];counts[identity]-=1
        if counts[identity]<0:raise ValueError('043 model negative owner')
        if counts[identity]or identity not in(2,3,4,5,6):return
        events.append([identity,identity,phase]+view(key)+view(value)+[0,0,0])
        if identity==3 and phase==1 and flags&2 and not mutations:
            mutations=1
            if mode==128:
                assign_value((PROTO,6));previous=owners[3];owners[3]=NULL;release(previous)
            else:
                incoming=(WEAK,21)if weak else(PROTO,6)
                retain(incoming);previous=stored;stored=incoming;release(previous)
    def assign_value(incoming):
        nonlocal value
        retain(incoming);previous=value;value=incoming;release(previous)
    if flags&8 and mode in(130,132,133):
        previous=owners[2];owners[2]=NULL;release(previous)
    phase=1;position=max(cursor,0);length=3 if mode==128 else 4 if mode in(129,130)else 0 if mode==134 else 2
    returned=-1
    if position<length:
        returned=position+1 if mode==128 else 4 if mode in(129,130)else position+1
        if mode==128:
            previous=key;release(previous);key=(INT,position)
            previous=value;release(previous);value=(INT,(65,-128,-1)[position])
        else:
            incoming_key=(STRING,13)if mode in(129,130)else(INT,position)
            retain(incoming_key);previous=key;key=incoming_key;release(previous)
            incoming=stored
            if mode in(131,133)and position==1:incoming=(INT,4)
            elif mode==132 and position==0:incoming=(INT,3)
            unwrap=mode==130 and not flags&4 or mode==133 and position==0
            if unwrap:incoming=NULL if counts[5 if stored[1]==20 else 6]==0 else(PROTO,5 if stored[1]==20 else 6)
            assign_value(incoming)
    phase=2
    if cleanup:
        previous=key;key=NULL;release(previous);assign_value(NULL)
        for index in range(4):previous=owners[index];owners[index]=NULL;release(previous)
        if mode in(129,130):release(stored)
        if mode in(131,132,133):release(stored)
        release((PROTO,2))
    fixed=[MARK,mode,0,returned&0xffffffff,flags,cursor&0xffffffff,mutations,0]+view(key)+view(value)+([0x01000001,0,0]if cleanup or cursor<0 else[INT,cursor,0])+[counts[i]for i in(3,4,5,6)]+[len(events)]
    return fixed,events


def validate(words,case):
    validate_case(case);fixed,blocks=split(words)
    if blocks is None:
        if case['mode']in(73,74):validate_script(words,case)
        else:old.validate(fixed,case)
        normalized(words);return
    normalized(words)
    actual=list(fixed);actual[7]=0
    wanted,events=expected(case)
    if actual!=wanted or [[row[0],row[0],*row[2:]]for row in blocks[0]]!=events:raise ValueError('043 independent ownership/result/order model differs')


def validate_script(words,case):
    fixed,unused=split(words);before,count,events=old.split(fixed);mode=case['mode'];base=65 if mode==73 else 69
    if words[-3:]!=[MARK,mode,1]or before[0]or before[1:4]!=[1,base,case['flags']]or before[13:17]!=[8,1,0,0]:raise ValueError('043 script return/frame/mutation state')
    output=NULL if case['cleanup']else(INT,(case['value']+99)&0xffffffff)
    if tuple(before[4:6])!=output or tuple(before[7:9])!=output:raise ValueError('043 reentrant script result')
    if case['cleanup']and before[9:13]!=[0,0,0,0]:raise ValueError('043 script cleanup')
    callbacks=[events[i:i+16]for i in range(0,len(events),16)if events[i+15]==0]
    if len(callbacks)!=2:raise ValueError('043 actual native callback count')
    for index,row in enumerate(callbacks):
        value=case['value']if index==0 else 99
        if row[:4]!=[8,5,2,2]or row[4:6]!=[INT,index]or row[7:9]!=[INT,value&0xffffffff]or row[10:12]!=[INT,index+1]or row[13]!=0x08000200:raise ValueError('043 actual native iteration ordering')
