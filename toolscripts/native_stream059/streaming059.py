import hashlib
import json
from pathlib import Path

from run059 import Backend,encoded
from session059 import Program

WORK=Path(__file__).resolve().parent


def plans():
    rows=[]
    for window in [-15,15,31]:
        for level in [0,6]:
            payload=(b'alpha-beta-0123456789-'*13)+bytes(range(32))
            image=encoded(payload,window,level)
            for input_step,output_step in [(1,1),(2,7),(3,258),(len(image),17)]:
                rows.append(dict(window=window,image=image,payload=payload,input_step=input_step,output_step=output_step))
    return rows


def main():
    output=WORK/'streaming-attempt001'
    output.mkdir(exist_ok=False)
    backends={t:Backend(t,WORK/'build')for t in ['original','arm','windows','a64']}
    rows=[]
    try:
        for index,plan in enumerate(plans()):
            programs={t:Program(b,plan['image'],plan['window'])for t,b in backends.items()}
            end=0
            journals=[]
            for step in range(1024):
                end=min(end+plan['input_step'],len(plan['image']))
                flush=4 if end==len(plan['image'])else 0
                values={t:p.advance(end,plan['output_step'],flush)for t,p in programs.items()}
                if any(v!=values['original']for v in values.values()):
                    (output/'failure.json').write_text(json.dumps(dict(index=index,step=step,inputStep=plan['input_step'],outputStep=plan['output_step'],observations=values),indent=2)+'\n',encoding='utf-8')
                    raise ValueError('059 streaming state/order mismatch retained '+str(index)+'/'+str(step))
                journals.append(values['original'])
                if values['original']['status']==1:break
                if values['original']['status']not in [0,-5]:raise ValueError('059 valid streaming reference failed')
            else:raise ValueError('059 valid streaming reference failed to finish')
            if programs['original'].produced!=len(plan['payload']):raise ValueError('059 streaming output length differs')
            if journals[-1]['outputSha256']!=hashlib.sha256(plan['payload']).hexdigest():raise ValueError('059 streaming bytes differ from independent payload')
            closed={t:p.close()for t,p in programs.items()}
            if any(v!=closed['original']for v in closed.values()):raise ValueError('059 streaming owner cleanup differs')
            rows.append(dict(index=index,window=plan['window'],inputStep=plan['input_step'],outputStep=plan['output_step'],observations=journals,closed=closed['original']))
            print('059 streaming plan',index,len(journals),'calls passed',flush=True)
        report=dict(status='first-genuine-streaming-controller-corpus-passed',plans=rows,calls=sum(len(r['observations'])for r in rows),sourceCreditGranted=0)
        (output/'report.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    finally:backends['windows'].machine.close()

if __name__=='__main__':main()
