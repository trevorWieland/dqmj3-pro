import ctypes
import hashlib
import json
import struct
import sys
import zlib
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from native_stream058_execution import Backend
from native_stream058_layout import seed,get,put
from native_stream058_original import RAM,SIZE,STREAM


def encoded(payload,window,level=6,strategy=zlib.Z_DEFAULT_STRATEGY):
    encoder=zlib.compressobj(level,zlib.DEFLATED,window,8,strategy)
    return encoder.compress(payload)+encoder.flush()


def execute(backend,image,window,capacity,flush=4,fail_at=0):
    from session059 import Program
    program=Program(backend,image,window,fail_at=fail_at)
    row=program.advance(len(image),capacity,flush)
    row.update(program.close())
    return row


def main():
    backends={t:Backend(t,WORK/'build')for t in['original','arm','windows','a64']}
    cases=[(window,level,strategy,payload)for window in[-15,15,31]for level,strategy in[(0,0),(6,0),(6,zlib.Z_FIXED)]for payload in[b'',b'hello',b'abcd0123456789'*400,bytes(range(256))*15]]
    rows=[]
    for index,(window,level,strategy,payload)in enumerate(cases):
        image=encoded(payload,window,level,strategy);values={t:execute(b,image,window,len(payload)+512)for t,b in backends.items()}
        if any(v!=values['original']for v in values.values()):
            (WORK/'first-failure.json').write_text(json.dumps(dict(index=index,window=window,level=level,strategy=strategy,observations=values),indent=2)+'\n',encoding='utf-8')
            for t,v in values.items():
                if v!=values['original']:print('059 mismatch',index,t,[k for k in v if v[k]!=values['original'][k]])
            raise ValueError('059 first-source hypothesis mismatch retained')
        if values['original']['status']!=1 or values['original']['produced']!=len(payload):raise ValueError('059 reference caller did not produce expected bytes')
        rows.append(dict(index=index,window=window,level=level,strategy=strategy,observation=values['original']))
        print('059 first full controller program',index,'passed')
    backends['windows'].machine.close()
    (WORK/'first-proof.json').write_text(json.dumps(dict(status='first36-real-full-controller-programs-passed',programs=rows,wholeFunctionCreditGranted=0),indent=2)+'\n',encoding='utf-8')

if __name__=='__main__':main()
