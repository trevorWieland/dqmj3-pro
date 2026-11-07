import ctypes
import hashlib
import json
import random
from pathlib import Path

from run059 import Backend,RAM,SIZE
WORK=Path(__file__).resolve().parent


def execute(backend,checksum,data,is_null,alignment):
    if is_null and len(data)==1:raise ValueError('059 NULL Adler input with length1 is outside returning domain')
    machine=backend.machine
    native=ctypes.create_string_buffer(SIZE)if backend.target=='windows'else None
    base=ctypes.addressof(native)if native is not None else RAM if backend.target=='original'else machine.ram
    offset=0x70000+alignment
    before=bytearray(b'\xa7'*SIZE)
    before[offset:offset+len(data)]=data
    pointer=0 if is_null else base+offset
    if backend.target=='windows':
        ctypes.memmove(base,bytes(before),SIZE)
        function=machine.library.stream_adler059
        function.argtypes=[ctypes.c_uint32,ctypes.c_void_p,ctypes.c_uint32]
        function.restype=ctypes.c_uint32
        result=function(checksum,pointer,len(data))
        after=ctypes.string_at(base,SIZE)
    else:
        machine.cpu.mem_write(base,bytes(before))
        result=machine.call(0x730208 if backend.target=='original'else'stream_adler059',[checksum,pointer,len(data)])&0xffffffff
        after=bytes(machine.cpu.mem_read(base,SIZE))
    if after!=before:raise ValueError('059 Adler changed initialized input/canary bytes')
    return result


def expected(checksum,data,is_null):
    low=checksum&65535
    high=checksum>>16
    if len(data)==1:
        low+=data[0]
        if low>=65521:low-=65521
        high+=low
        if high>=65521:high-=65521
        return (low|(high<<16))&0xffffffff
    if is_null:return 1
    if not data:return ((low-65521 if low>=65521 else low)|((high%65521)<<16))&0xffffffff
    for value in data:
        low=(low+value)%65521
        high=(high+low)%65521
    return low|(high<<16)


def cases():
    randomizer=random.Random(730208)
    lengths=list(range(33))+[255,256,257,5551,5552,5553,11104,11105,16383]
    result=[(seed,bytes(randomizer.randrange(256)for _ in range(count)),False,count%16)for count in lengths for seed in[0,1,0x12345678,0xffffffff]]
    result.extend((seed,bytes(count),True,0)for count in[0,2,15,16,5552]for seed in[0,1,0xffffffff])
    return result


def main():
    backends={t:Backend(t,WORK/'build')for t in['original','arm','windows','a64']}
    rows=[]
    cases_to_run=cases()
    try:
        for index,(checksum,data,is_null,alignment)in enumerate(cases_to_run):
            values={t:execute(b,checksum,data,is_null,alignment)for t,b in backends.items()}
            wanted=expected(checksum,data,is_null)
            if any(v!=wanted for v in values.values()):
                (WORK/'adler-failure.json').write_text(json.dumps(dict(index=index,checksum=checksum,count=len(data),isNull=is_null,results=values,expected=wanted),indent=2)+'\n',encoding='utf-8')
                raise ValueError('059 Adler mismatch')
            rows.append(dict(index=index,count=len(data),checksum=checksum,isNull=is_null,alignment=alignment,inputSha256=hashlib.sha256(data).hexdigest(),result=wanted))
        function=next(f for f in json.loads((WORK/'claim.json').read_bytes())['functions']if f['address']==0x730208)
        wanted={a for q in function['ranges']for a in range(q['start'],q['endExclusive'],4)}
        report=dict(status='adler-complete-body-bounded-corpus-passed',cases=rows,observations=len(rows)*4,reachablePcsVisited=sorted(backends['original'].machine.coverage&wanted),missingPcs=sorted(wanted-backends['original'].machine.coverage),nullLengthOneExcluded=True,sourceCreditGranted=0)
        (WORK/'adler-first-proof.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
        print('Adler',len(rows),'sets',len(report['reachablePcsVisited']),'/',len(wanted),'PCs')
    finally:backends['windows'].machine.close()

if __name__=='__main__':main()
