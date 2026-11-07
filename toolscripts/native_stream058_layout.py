import struct

STATE_NAMES=['mode','last','wrap','dictionary','maximum_distance','total','header','window_bits',
             'window_size','window_have','window_next','window','hold','bits','lengths','distances',
             'length_bits','distance_bits','next_code','codes','sane','back','tail']
HEAP_NAMES=['pool','capacity','used','allocations','releases','fail_at','stream','reentry','replacement',
            'alternate_disposer','alternate_context','event_count','events']
EVENT_NAMES=['kind','bytes','alignment','memory','state','message','disposer','context']
ARM_WORDS=[4,56,7116,0,4,8,12,20,28,32,36,40,44,48,52,56,60,76,80,84,88,108,1328,7104,7108,7112,
           1072,0,4,8,12,16,20,24,28,32,36,40,44,48,32,0,4,8,12,16,20,24,28]
NATIVE_WORDS=[8,88,7144,0,4,8,12,20,28,32,40,44,48,52,56,64,68,88,96,104,108,128,1352,7128,7132,7136,
              1872,0,8,12,16,20,24,32,40,48,56,64,72,80,56,0,4,8,16,24,32,40,48]
STREAM_NAMES=['input','available_input','total_input','output','available_output','total_output',
              'message','state','allocate','dispose','context','data_type','checksum','reserved']


def layout(words):
    if list(words)not in(ARM_WORDS,NATIVE_WORDS):raise ValueError('058 C layout differs from independent measured/derived ABI')
    p=words[0]
    return dict(pointer=p,stream_size=words[1],state_size=words[2],state=dict(zip(STATE_NAMES,words[3:26])),
                heap_size=words[26],heap=dict(zip(HEAP_NAMES,words[27:40])),event_size=words[40],
                event=dict(zip(EVENT_NAMES,words[41:])),stream=dict(zip(STREAM_NAMES,
                    [0,4,8,12,16,20,24,28,32,36,40,44,48,52]if p==4 else[0,8,12,16,24,28,32,40,48,56,64,72,76,80])))


def get(arena,offset,size=4):
    return int.from_bytes(arena[offset:offset+size],'little')


def put(arena,offset,value,size=4):
    arena[offset:offset+size]=(value&((1<<(8*size))-1)).to_bytes(size,'little')


def seed(profile,ram,symbols,case):
    data=bytearray(b'\xa7'*0x100000);p=profile['pointer'];s=profile['stream'];h=profile['heap']
    data[0x100:0x100+profile['stream_size']]=bytes(profile['stream_size'])
    for at in(0x1000,0x2000):data[at:at+profile['heap_size']]=bytes(profile['heap_size'])
    for at in(0x1000,0x2000):
        put(data,at+h['pool'],ram+0x10000,p);put(data,at+h['capacity'],0x60000)
        put(data,at+h['stream'],ram+0x100,p)
    put(data,0x1000+h['fail_at'],case.get('fail_at',0))
    put(data,0x1000+h['reentry'],case.get('reentry',0))
    put(data,0x1000+h['alternate_disposer'],symbols['fixture_alternate_dispose058'],p)
    put(data,0x1000+h['alternate_context'],ram+0x2000,p)
    put(data,0x1000+h['replacement'],ram+0x4000,p)
    if not case.get('default_allocate',False):put(data,0x100+s['allocate'],symbols['fixture_allocate058'],p)
    if not case.get('default_dispose',False):put(data,0x100+s['dispose'],symbols['fixture_dispose058'],p)
    put(data,0x100+s['context'],ram+0x1000,p)
    put(data,0x100+s['message'],ram+0x800,p)
    put(data,0x100+s['checksum'],0x12345678)
    if case.get('preexisting_state'):
        put(data,0x100+s['state'],ram+0x6000,p)
    data[0x800:0x806]=b'1.2.7\0'
    if case.get('version')=='bad':data[0x800]=ord('2')
    if case.get('operation')in('reset','end'):
        put(data,0x100+s['state'],ram+0x4000,p)
        st=profile['state'];put(data,0x4000+st['wrap'],case.get('wrap',2))
        put(data,0x4000+st['window'],ram+0x8000 if case.get('window')else 0,p)
        put(data,0x1000+h['replacement'],ram+0x6000,p)
    if case.get('null_state'):put(data,0x100+s['state'],0,p)
    if case.get('null_dispose'):put(data,0x100+s['dispose'],0,p)
    if p==4:
        put(data,0x3000,symbols['fixture_sdk_operations058'],p);put(data,0x3000+p,ram+0x1000,p)
    return data


def model(before,profile,ram,symbols,case):
    data=bytearray(before);p=profile['pointer'];s=profile['stream'];st=profile['state'];h=profile['heap'];e=profile['event']
    stream=0x100
    def read(name):return get(data,stream+s[name],p if name in('input','output','message','state','allocate','dispose','context')else 4)
    def write(name,value):put(data,stream+s[name],value,p if name in('input','output','message','state','allocate','dispose','context')else 4)
    def event(ctx,kind,memory,bytes_count=0,alignment=0):
        offset=ctx-ram;number=get(data,offset+h['event_count']);put(data,offset+h['event_count'],number+1)
        at=offset+h['events']+number*profile['event_size']
        for name,value in dict(kind=kind,bytes=bytes_count,alignment=alignment,memory=memory,state=read('state'),message=read('message'),disposer=read('dispose'),context=read('context')).items():
            put(data,at+e[name],value,p if name in('memory','state','message','disposer','context')else 4)
        return at
    def allocate(ctx,count,bytes_count,kind):
        offset=ctx-ram;calls=get(data,offset+h['allocations'])+1;put(data,offset+h['allocations'],calls)
        bytes_count=(count*bytes_count)&0xffffffff;at=event(ctx,kind,0,bytes_count,4)
        if calls==get(data,offset+h['fail_at']):return 0
        cursor=(get(data,offset+h['used'])+31)&~15
        if cursor>get(data,offset+h['capacity'])or bytes_count>get(data,offset+h['capacity'])-cursor:return 0
        memory=get(data,offset+h['pool'],p)+cursor;put(data,offset+h['used'],cursor+bytes_count)
        put(data,at+e['memory'],memory,p);return memory
    def release(fn,ctx,memory):
        if fn==symbols['default_dispose']:
            if memory==0:return
            ctx=ram+0x1000;kind=5
        else:kind=3 if fn==symbols['fixture_alternate_dispose058']else 2
        offset=ctx-ram;calls=get(data,offset+h['releases'])+1;put(data,offset+h['releases'],calls);event(ctx,kind,memory)
        reentry=get(data,offset+h['reentry'])
        if reentry and calls==1:
            if reentry&1:write('state',get(data,offset+h['replacement'],p))
            if reentry&2:write('dispose',get(data,offset+h['alternate_disposer'],p))
            if reentry&4:write('context',get(data,offset+h['alternate_context'],p))
    def reset():
        if case.get('null_stream')or read('state')==0:return -2
        at=read('state')-ram
        for name in('window_size','window_have','window_next','total','last','dictionary','hold','bits'):put(data,at+st[name],0)
        for name in('total_input','total_output','message'):write(name,0)
        wrap=get(data,at+st['wrap'])
        if wrap:write('checksum',wrap&1)
        put(data,at+st['mode'],0,1);put(data,at+st['maximum_distance'],32768);put(data,at+st['header'],0,p)
        for name in('next_code','lengths','distances'):put(data,at+st[name],ram+at+st['codes'],p)
        put(data,at+st['sane'],1);put(data,at+st['back'],0xffffffff);return 0
    operation=case.get('operation','init')
    if operation=='allocate':
        return allocate(ram+0x1000,case.get('count',1),case.get('bytes',1),4),bytes(data)
    if operation=='dispose':
        release(symbols['default_dispose'],ram+0x1000,0 if case.get('null_memory')else ram+0x8000)
        return None,bytes(data)
    if operation=='reset':return reset(),bytes(data)
    if operation=='end':
        if case.get('null_stream')or read('state')==0 or read('dispose')==0:return -2,bytes(data)
        state=read('state')-ram;window=get(data,state+st['window'],p)
        if window:release(read('dispose'),read('context'),window)
        release(read('dispose'),read('context'),read('state'));write('state',0);return 0,bytes(data)
    if case.get('version')in('bad','null')or case.get('wrong_size'):return -6,bytes(data)
    if case.get('null_stream'):return -2,bytes(data)
    write('message',0)
    if read('allocate')==0:write('allocate',symbols['default_allocate']);write('context',0)
    if read('dispose')==0:write('dispose',symbols['default_dispose'])
    default=read('allocate')==symbols['default_allocate']
    memory=allocate(ram+0x1000 if default else read('context'),1,profile['state_size'],4 if default else 1)
    if not memory:return -4,bytes(data)
    write('state',memory);at=memory-ram;put(data,at+st['window'],0,p)
    value=15 if operation=='default_init'else case.get('window_bits',31)
    if value<0:wrap=0;bits=(-value)&0xffffffff
    else:wrap=1+(value>>4);bits=value&15 if value<48 else value
    if bits and ((bits-8)&0xffffffff)>=8:
        release(read('dispose'),read('context'),memory);write('state',0);return -2,bytes(data)
    put(data,at+st['wrap'],wrap);put(data,at+st['window_bits'],bits)
    return reset(),bytes(data)
