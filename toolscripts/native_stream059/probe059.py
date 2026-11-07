import hashlib
import json
import random
import sys
import zlib
from pathlib import Path

WORK=Path(__file__).resolve().parent
from run059 import Backend,execute,encoded


def programs():
    result=[]
    rng=random.Random(590058)
    for window in [-15,15,31,47]:
        for count in [0,1,15,16,31,257,1024,4096]:
            for kind in ['repeat','random']:
                payload=bytes((i*3)%17 for i in range(count))if kind=='repeat'else bytes(rng.randrange(256)for _ in range(count))
                image=encoded(payload,31 if window==47 else window)
                result.append(dict(window=window,image=image,kind='valid-'+kind))
    for window in [15,31]:
        image=encoded(b'test headers and data '*9,window)
        for at in list(range(min(16,len(image))))+list(range(max(16,len(image)-8),len(image))):
            result.append(dict(window=window,image=image[:at],kind='truncate-'+str(at)))
        for at in range(len(image)):
            modified=bytearray(image)
            modified[at]^=0x80
            result.append(dict(window=window,image=bytes(modified),kind='flip-'+str(at)))
    return result


def main():
    output=WORK/(sys.argv[1]if len(sys.argv)>1 else'probe-attempt003')
    output.mkdir(exist_ok=False)
    pins=[dict(path=p.name,sha256=hashlib.sha256(p.read_bytes()).hexdigest())for p in sorted((WORK/'source').glob('*'))]
    (output/'source-pins.json').write_text(json.dumps(pins,indent=2)+'\n',encoding='utf-8')
    backends={t:Backend(t,WORK/'build')for t in ['original','arm','windows','a64']}
    rows=[]
    try:
        for index,case in enumerate(programs()):
            values={t:execute(b,case['image'],case['window'],4608)for t,b in backends.items()}
            if any(v!=values['original']for v in values.values()):
                (output/'failure.json').write_text(json.dumps(dict(index=index,window=case['window'],kind=case['kind'],inputHex=case['image'].hex(),observations=values),indent=2)+'\n',encoding='utf-8')
                raise ValueError('059 retained expanded mismatch '+str(index)+' '+case['kind'])
            rows.append(dict(index=index,window=case['window'],kind=case['kind'],inputSha256=hashlib.sha256(case['image']).hexdigest(),observation=values['original']))
        print('expanded',len(rows),'four-profile programs passed')
        wanted={a for f in json.loads((WORK/'claim.json').read_bytes())['functions']if f['address']==0x7321e4 for q in f['ranges']for a in range(q['start'],q['endExclusive'],4)}
        visited=backends['original'].machine.coverage&wanted
        (output/'report.json').write_text(json.dumps(dict(status='expanded-corpus-passed',programs=rows,rootInstructionPcs=len(wanted),visitedRootInstructionPcs=len(visited),unvisitedRootPcs=sorted(wanted-visited),wholeFunctionCreditGranted=0),indent=2)+'\n',encoding='utf-8')
    finally:
        backends['windows'].machine.close()

if __name__=='__main__':main()
