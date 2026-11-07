import hashlib
import json
from pathlib import Path
from run059 import Backend,encoded
from session059 import Program
from native_stream058_layout import get

WORK=Path(__file__).resolve().parent


def main():
    output=WORK/'window-attempt002';output.mkdir(exist_ok=False)
    backends={t:Backend(t,WORK/'build')for t in ['original','arm','windows','a64']}
    plans=[]
    for bits in [8,9,15]:
        size=1<<bits
        for count in [0,1,size-1,size,size+1]:
            payload=bytes(i%17 for i in range(count))
            plans.append(dict(bits=bits,payload=payload,output_chunk=count+512,reset=False))
        plans.append(dict(bits=bits,payload=bytes(i%17 for i in range(size+100)),output_chunk=max(size*3//4,200),reset=True))
    rows=[]
    try:
        for index,plan in enumerate(plans):
            image=encoded(plan['payload'],-9 if plan['bits']==8 else -plan['bits'])
            programs={t:Program(b,image,-plan['bits'])for t,b in backends.items()}
            journals=[]
            for phase in range(2 if plan['reset']else 1):
                if phase:
                    for program in programs.values():
                        if program.call('fn_00733d78',[program.ram+0x100]):raise ValueError('059 genuine reset failed')
                        program.produced=0;program.consumed=0
                for step in range(512):
                    values={t:p.advance(len(image),plan['output_chunk'],0)for t,p in programs.items()}
                    if any(v!=values['original']for v in values.values()):
                        (output/'failure.json').write_text(json.dumps(dict(index=index,phase=phase,step=step,observations=values),indent=2)+'\n',encoding='utf-8')
                        raise ValueError('059 window/reset caller mismatch retained')
                    journals.append(values['original'])
                    if values['original']['status']==1:break
                else:raise ValueError('059 window reference caller failed to finish')
            closed={t:p.close()for t,p in programs.items()}
            if any(v!=closed['original']for v in closed.values()):raise ValueError('059 window end ownership differs')
            rows.append(dict(index=index,bits=plan['bits'],payloadSha256=hashlib.sha256(plan['payload']).hexdigest(),observations=journals,closed=closed['original']))
        f=next(f for f in json.loads((WORK/'claim.json').read_bytes())['functions']if f['address']==0x7456a4)
        wanted={a for q in f['ranges']for a in range(q['start'],q['endExclusive'],4)}
        report=dict(status='window-helper-genuine-init-reset-outer-caller-passed',programs=rows,visitedPcs=sorted(wanted&backends['original'].machine.coverage),unvisitedPcs=sorted(wanted-backends['original'].machine.coverage),sourceCreditGranted=0)
        (output/'report.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8');print('window',len(rows),'sets',len(report['visitedPcs']),'/',len(wanted),'PCs')
    finally:backends['windows'].machine.close()

if __name__=='__main__':main()
