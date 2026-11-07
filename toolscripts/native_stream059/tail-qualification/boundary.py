import argparse
import ctypes
import hashlib
import json
import struct
import sys
from pathlib import Path

CORE=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(CORE))
from run059 import Backend,encoded
from session059 import Program
from grammar059 import Bits,codes,reverse
from inputs059 import inputs,guard
from measure059 import measure
from native_stream058_layout import get,put


def equal(values,label):
    if any(value!=values['original']for value in values.values()):
        error=ValueError('059 tail mismatch '+label);error.observations=values;raise error
    return values['original']


def main_call(program,pointer):
    target=program.backend.target;machine=program.machine
    if target=='windows':
        fn=machine.library.stream_inflate059
        fn.argtypes=[ctypes.c_void_p,ctypes.c_int32,ctypes.c_void_p,ctypes.c_void_p];fn.restype=ctypes.c_int32
        return fn(pointer,4,program.ram+0x90000,program.ram+0x94000)
    if target=='original':return machine.call(0x7321e0,[pointer,4])
    return machine.call('stream_inflate059',[pointer,4,program.ram+0x90000,program.ram+0x94000])


def validation(backends):
    rows=[]
    for case in ['null-stream','null-input-zero','null-input-nonzero','null-output','ended-state']:
        programs={t:Program(b,b'',15)for t,b in backends.items()}
        results={}
        for target,p in programs.items():
            s=p.profile['stream'];width=p.profile['pointer']
            if case=='ended-state':p.close()
            before=bytearray(p.snapshot());put(before,0x100+s['input'],0,width);put(before,0x100+s['available_input'],1 if case=='null-input-nonzero'else 0)
            put(before,0x100+s['output'],0 if case=='null-output'else p.ram+0x80000,width)
            put(before,0x100+s['available_output'],512)
            p.write(before);status=main_call(p,0 if case=='null-stream'else p.ram+0x100);after=p.snapshot()
            if after!=before:raise ValueError('059 API validation changed initialized arena '+case+' '+target)
            results[target]=dict(status=status,entireInitializedArenaUnchanged=True)
        row=equal(results,case)
        if row['status']!=(-5 if case=='null-input-zero'else -2):raise ValueError('059 validation status differs from measured contract')
        rows.append(dict(case=case,observation=row))
        if case!='ended-state':equal({t:p.close()for t,p in programs.items()},'validation cleanup')
    return rows


def resumed_length(backends):
    bits=Bits();bits.add(3,3)
    alphabet=codes([8]*144+[9]*112+[7]*24+[8]*8)
    bits.add(*alphabet[200]);bits.add(*alphabet[284]);bits.add(0,5);bits.add(reverse(0,5),5);bits.add(*alphabet[256]);image=bits.data()
    programs={t:Program(b,image,-15)for t,b in backends.items()}
    first=equal({t:p.advance(3,257,0)for t,p in programs.items()},'actual length-extra suspension')
    if first['state']['mode']!=21:raise ValueError('059 selected original did not suspend in measured length-extra mode')
    second=equal({t:p.advance(len(image),257,4)for t,p in programs.items()},'actual length-extra resume')
    if second['status']!=1 or second['produced']!=228 or second['outputSha256']!=hashlib.sha256(bytes([200])*228).hexdigest():raise ValueError('059 resumed real format payload differs')
    closed=equal({t:p.close()for t,p in programs.items()},'resumed length cleanup')
    return dict(inputSha256=hashlib.sha256(image).hexdigest(),observations=[first,second],closed=closed)


def repeat17(backends):
    bits=Bits();bits.add(5,3);bits.add(0,5);bits.add(0,5);bits.add(0,4)
    for length in [0,1,0,1]:bits.add(length,3)
    for index in range(25):bits.add(1,1);bits.add(7,3)
    bits.add(1,1);bits.add(5,3);image=bits.data()
    programs={t:Program(b,image,-15)for t,b in backends.items()}
    row=equal({t:p.advance(len(image),257,4)for t,p in programs.items()},'actual repeat17 refill')
    if row['status']!=-3 or row['message']!='invalid code -- missing end-of-block':raise ValueError('059 repeat17 malformed input boundary differs')
    closed=equal({t:p.close()for t,p in programs.items()},'repeat17 cleanup')
    return dict(inputSha256=hashlib.sha256(image).hexdigest(),observation=row,closed=closed)


def circular_history(backends):
    payload=bytes(i%17 for i in range(1000));image=encoded(payload,-9)
    programs={t:Program(b,image,-8)for t,b in backends.items()};rows=[]
    for step in range(32):
        row=equal({t:p.advance(len(image),128,0)for t,p in programs.items()},'circular window read')
        rows.append(row)
        if row['status']==1:break
    else:raise ValueError('059 circular history did not finish')
    if rows[-1]['outputSha256']!=hashlib.sha256(payload).hexdigest():raise ValueError('059 circular history payload differs')
    closed=equal({t:p.close()for t,p in programs.items()},'circular window cleanup')
    return dict(observations=rows,closed=closed)


def verify(output,artifacts):
    output.mkdir(parents=True,exist_ok=False)
    before=inputs();own_sha=hashlib.sha256(Path(__file__).read_bytes()).hexdigest()
    backends={t:Backend(t,artifacts)for t in ['original','arm','windows','a64']}
    try:
        report=dict(schemaVersion=1,status='genuine-reachable-tail-contexts-passed',validation=validation(backends),resumedLength=resumed_length(backends),repeat17=repeat17(backends),circularHistory=circular_history(backends),sourceCreditGranted=0)
        claim=measure();original=backends['original'].machine
        report['coverage']=[dict(address=f['address'],visitedPcs=sorted(set(f['instructionPcs'])&original.coverage))for f in claim['functions']]
        guard(before,output)
        if hashlib.sha256(Path(__file__).read_bytes()).hexdigest()!=own_sha:raise ValueError('059 tail producer changed')
        report['producerSha256']=own_sha
        (output/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8');print('059 genuine tail contexts passed')
        return report
    except BaseException as error:
        if hasattr(error,'observations'):(output/'failure.json').write_text(json.dumps(dict(message=str(error),observations=error.observations),indent=2)+'\n',encoding='utf-8')
        raise
    finally:backends['windows'].machine.close()

if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,required=True);parser.add_argument('--artifacts',type=Path,required=True);args=parser.parse_args()
    verify(args.output.resolve(),args.artifacts.resolve())
