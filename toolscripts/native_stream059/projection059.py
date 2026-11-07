import ctypes
import hashlib
import sys
from pathlib import Path
ROOT=next(p for p in Path(__file__).resolve().parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from native_stream058_layout import get
from native_stream058_original import STREAM


def observe(backend,ram,view,arena,state,image,output_start,capacity,result):
    m=backend.machine;p=backend.profile;s=p['stream'];h=p['heap'];st=p['state']
    produced=get(arena,STREAM+s['output'],p['pointer'])-ram-0x80000
    consumed=get(arena,STREAM+s['input'],p['pointer'])-ram-0x70000
    if not 0<=produced-output_start<=capacity or not 0<=consumed<=len(image):raise ValueError('059 actual pointers escaped declared input/output')
    message=get(arena,STREAM+s['message'],p['pointer'])
    if message:
        raw=ctypes.string_at(message)if backend.target=='windows'else bytes(m.cpu.mem_read(message,100)).split(b'\0')[0]
        message=raw.decode('ascii')
    else:message=None
    result_row=dict(status=result,inputConsumed=consumed,produced=produced,
                    stream={name:get(arena,STREAM+s[name])for name in['available_input','available_output','total_input','total_output','checksum','data_type','reserved']},
                    message=message,outputSha256=hashlib.sha256(arena[0x80000:0x80000+produced]).hexdigest())
    base=state-ram
    scalar_names=['mode','last','wrap','dictionary','maximum_distance','total','window_bits','window_size','window_have','window_next','hold','bits','length_bits','distance_bits','sane','back','tail']
    state_row={name:get(arena,base+st[name],1 if name=='mode'else 4)for name in scalar_names}
    state_row.update(flags=get(arena,base+16),check=get(arena,base+24),length=get(arena,base+(64 if p['pointer']==4 else 72)),distance=get(arena,base+(68 if p['pointer']==4 else 76)),extra=get(arena,base+(72 if p['pointer']==4 else 80)))
    counters=base+(92 if p['pointer']==4 else 112);work=base+(112 if p['pointer']==4 else 136)
    state_row.update(counts=[get(arena,counters+i*4)for i in range(4)],workSha256=hashlib.sha256(arena[work:work+1216]).hexdigest(),codesSha256=hashlib.sha256(arena[base+st['codes']:base+st['codes']+5776]).hexdigest())
    def table_pointer(name):
        value=get(arena,base+st[name],p['pointer']);codes=state+st['codes'];fixed=0x7e36f0 if backend.target=='original'else ram+0x90000
        if codes<=value<=codes+5776:
            if (value-codes)%4:raise ValueError('059 misaligned real state table pointer')
            return ['state-codes',(value-codes)//4]
        if fixed<=value<fixed+2176:
            if (value-fixed)%4:raise ValueError('059 misaligned real fixed table pointer')
            return ['fixed-codes',(value-fixed)//4]
        raise ValueError('059 unrecognized real table pointer '+name+':'+hex(value))
    state_row.update({name:table_pointer(name)for name in['lengths','distances','next_code']})
    state_row['modePadding']=arena[base+1:base+4].hex()
    if p['pointer']==8:
        if arena[base+84:base+88]!=bytes([0xa7])*4 or arena[base+7140:base+7144]!=bytes([0xa7])*4:
            raise ValueError('059 native state padding changed')
    window_pointer=get(arena,base+st['window'],p['pointer'])
    if window_pointer:
        window_size=get(arena,base+st['window_size'])
        state_row['windowBytesSha256']=hashlib.sha256(arena[window_pointer-ram:window_pointer-ram+window_size]).hexdigest()
    else:state_row['windowBytesSha256']=None
    header_pointer=get(arena,base+st['header'],p['pointer'])
    if header_pointer:
        if header_pointer!=ram+0x50000:raise ValueError('059 unknown real header sink identity')
        offsets=[0,4,8,12,16,20,24,28,32,36,40,44,48]if p['pointer']==4 else [0,4,8,12,16,24,28,32,40,48,56,60,64]
        names=['text','time','extra_flags','os','extra','extra_length','extra_maximum','name','name_maximum','comment','comment_maximum','header_crc','done']
        size=52 if p['pointer']==4 else 72
        header={name:get(arena,0x50000+offset,p['pointer']if name in ['extra','name','comment']else 4)for name,offset in zip(names,offsets)}
        for index,name in enumerate(['extra','name','comment']):
            value=header[name]
            if value not in [0,header_pointer+size+index*64]:raise ValueError('059 changed a real header buffer pointer')
            header[name]=name+'-buffer'if value else None
            header[name+'Bytes']=arena[0x50000+size+index*64:0x50000+size+(index+1)*64].hex()
        if p['pointer']==8 and (arena[0x50000+44:0x50000+48]!=bytes([0xa7])*4 or arena[0x50000+68:0x50000+72]!=bytes([0xa7])*4):raise ValueError('059 native header padding changed')
        state_row['borrowedHeaderSink']=header
    else:state_row['borrowedHeaderSink']=None
    for name,offset in [('input',0x70000+result_row['inputConsumed']),('output',0x80000+produced),('state',base)]:
        if get(arena,STREAM+s[name],p['pointer'])!=ram+offset:raise ValueError('059 actual pointer progression mismatch '+name)
    for name in ['allocate','dispose','context']:
        if arena[STREAM+s[name]:STREAM+s[name]+p['pointer']]!=view[STREAM+s[name]:STREAM+s[name]+p['pointer']]:
            raise ValueError('059 changed unqualified service identity '+name)
    used=get(arena,0x1000+h['used'])
    mutable=[(STREAM,STREAM+p['stream_size']),(0x1000,0x1000+p['heap_size']),
             (base,base+p['state_size']),(0x80000+output_start,0x80000+produced)]
    if header_pointer:mutable.append((0x50000,0x50000+(244 if p['pointer']==4 else 264)))
    if window_pointer:mutable.append((window_pointer-ram,window_pointer-ram+(1<<get(arena,base+st['window_bits']))))
    if backend.target!='original':mutable.extend([(0x90000,0x90000+2176),(0x94000,0x94000+(7108 if p['pointer']==4 else 7128))])
    cursor=0
    for start,end in sorted(mutable):
        if view[cursor:start]!=arena[cursor:start]:raise ValueError('059 changed undeclared initialized bytes '+hex(cursor))
        cursor=max(cursor,end)
    if view[cursor:]!=arena[cursor:]:raise ValueError('059 changed trailing initialized canaries')
    result_row['allUndeclaredInitializedBytesUnchanged']=True
    result_row['state']=state_row
    return result_row
