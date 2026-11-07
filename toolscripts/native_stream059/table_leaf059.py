import ctypes
import hashlib
import json
import random
import struct
from pathlib import Path
from run059 import Backend,RAM,SIZE
from native_stream058_layout import get,put
from native_stream058_original import STACK

WORK=Path(__file__).resolve().parent


def tree_lengths(count,randomizer):
    if count==0:return []
    if count==1:return [1]
    leaves=[1,1]
    while len(leaves)<count:
        possible=[i for i,n in enumerate(leaves)if n<15]
        at=randomizer.choice(possible)
        depth=leaves.pop(at)+1
        leaves.extend([depth,depth])
    randomizer.shuffle(leaves)
    return leaves


def cases():
    rng=random.Random(734594)
    result=[]
    for kind,counts in [(0,[0,1,2,3,7,19]),(1,[0,1,2,16,32,64,128,286,288]),(2,[0,1,2,8,16,30,32])]:
        for count in counts:
            for bits in [0,1,6,9,10,15]:result.append(dict(kind=kind,lengths=tree_lengths(count,rng),bits=bits))
        for lengths in [[0],[1,1,1],[2],[15],[0,1],[0,0,0],[2,2,2],[1,2,3,4,5,6,7,8,9,10,10]]:
            for bits in [1,9,15]:result.append(dict(kind=kind,lengths=lengths,bits=bits))
    return result


def execute(backend,case):
    machine=backend.machine;p=backend.profile['pointer']
    allocation=ctypes.create_string_buffer(SIZE)if backend.target=='windows'else None
    ram=ctypes.addressof(allocation)if allocation is not None else RAM if backend.target=='original'else machine.ram
    before=bytearray(b'\xa7'*SIZE)
    lens,table,sorted_work,next_pointer,bits=0x10000,0x20000,0x60000,0x61000,0x61010
    for i,n in enumerate(case['lengths']):put(before,lens+i*2,n,2)
    put(before,next_pointer,ram+table,p);put(before,bits,case['bits'])
    args=[case['kind'],ram+lens,len(case['lengths']),ram+next_pointer,ram+bits,ram+sorted_work]
    if backend.target=='windows':
        ctypes.memmove(ram,bytes(before),SIZE)
        fn=machine.library.stream_table059
        fn.argtypes=[ctypes.c_uint32,ctypes.c_void_p,ctypes.c_uint32,ctypes.c_void_p,ctypes.c_void_p,ctypes.c_void_p]
        fn.restype=ctypes.c_int32
        result=fn(*args);after=ctypes.string_at(ram,SIZE)
    else:
        machine.cpu.mem_write(ram,bytes(before))
        if backend.target=='original':
            machine.cpu.mem_write(STACK+0x10000,struct.pack('<II',*args[4:]))
            result=machine.call(0x734594,args[:4])
        else:result=machine.call('stream_table059',args)
        after=bytes(machine.cpu.mem_read(ram,SIZE))
    next_value=get(after,next_pointer,p)
    if next_value<ram+table or (next_value-ram-table)%4:raise ValueError('059 table returned invalid actual pointer')
    mutable=[(table,table+131072),(sorted_work,sorted_work+576),(next_pointer,next_pointer+p),(bits,bits+4)]
    cursor=0
    for start,end in mutable:
        if before[cursor:start]!=after[cursor:start]:raise ValueError('059 table changed input/canary bytes')
        cursor=end
    if before[cursor:]!=after[cursor:]:raise ValueError('059 table changed trailing bytes')
    return dict(status=result,rootBits=get(after,bits),nextIndex=(next_value-ram-table)//4,
                tableSha256=hashlib.sha256(after[table:table+131072]).hexdigest(),sortedWorkSha256=hashlib.sha256(after[sorted_work:sorted_work+576]).hexdigest(),allOtherInitializedBytesUnchanged=True)


def main():
    output=WORK/'table-attempt001';output.mkdir(exist_ok=False)
    backends={t:Backend(t,WORK/'build')for t in['original','arm','windows','a64']}
    rows=[]
    try:
        for index,case in enumerate(cases()):
            values={t:execute(b,case)for t,b in backends.items()}
            if any(v!=values['original']for v in values.values()):
                (output/'failure.json').write_text(json.dumps(dict(index=index,case=case,observations=values),indent=2)+'\n',encoding='utf-8')
                raise ValueError('059 table helper mismatch retained '+str(index))
            rows.append(dict(index=index,case=case,observation=values['original']))
        f=next(f for f in json.loads((WORK/'claim.json').read_bytes())['functions']if f['address']==0x734594)
        wanted={a for q in f['ranges']for a in range(q['start'],q['endExclusive'],4)}
        report=dict(status='table-helper-bounded-real-argument-corpus-passed',cases=rows,observations=len(rows)*4,visitedPcs=sorted(wanted&backends['original'].machine.coverage),unvisitedPcs=sorted(wanted-backends['original'].machine.coverage),sourceCreditGranted=0)
        (output/'report.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
        print('table',len(rows),'sets',len(report['visitedPcs']),'/',len(wanted),'PCs')
    finally:backends['windows'].machine.close()

if __name__=='__main__':main()
