import json
from pathlib import Path
from run059 import Backend,encoded
from session059 import Program
from supplement059 import gzip_optional

WORK=Path(__file__).resolve().parent


def plans():
    payload=b'header sink payload '*17
    result=[]
    for flags in range(32):
        for maximum,fragment in [(64,False),(64,True),(4,False),(0,False)]:
            result.append(dict(image=gzip_optional(payload,flags),window=31,maximum=maximum,fragment=fragment,kind='gzip-'+str(flags)))
    for window in [15,47]:result.append(dict(image=encoded(payload,15),window=window,maximum=64,fragment=True,kind='zlib-no-gzip-header'))
    return result


def main():
    output=WORK/'header-attempt002';output.mkdir(exist_ok=False)
    backends={t:Backend(t,WORK/'build')for t in ['original','arm','windows','a64']}
    rows=[]
    try:
        for index,case in enumerate(plans()):
            programs={t:Program(b,case['image'],case['window'])for t,b in backends.items()}
            for program in programs.values():program.attach_header(case['maximum'])
            journals=[]
            for step in range(1024):
                end=min(step+1,len(case['image']))if case['fragment']else len(case['image'])
                values={t:p.advance(end,1024,4 if end==len(case['image'])else 0)for t,p in programs.items()}
                if any(v!=values['original']for v in values.values()):
                    (output/'failure.json').write_text(json.dumps(dict(index=index,step=step,kind=case['kind'],observations=values),indent=2)+'\n',encoding='utf-8')
                    raise ValueError('059 borrowed header sink mismatch retained '+str(index)+'/'+str(step))
                journals.append(values['original'])
                if values['original']['status']==1:break
            else:raise ValueError('059 header reference failed to finish')
            closed={t:p.close()for t,p in programs.items()}
            if any(v!=closed['original']for v in closed.values()):raise ValueError('059 borrowed header cleanup differs')
            rows.append(dict(index=index,kind=case['kind'],maximum=case['maximum'],fragment=case['fragment'],observations=journals,closed=closed['original']))
        f=next(f for f in json.loads((WORK/'claim.json').read_bytes())['functions']if f['address']==0x7321e4)
        wanted={a for q in f['ranges']for a in range(q['start'],q['endExclusive'],4)}
        report=dict(status='borrowed-typed-header-sink-bounded-cohort-passed',programs=rows,visitedRootPcs=sorted(wanted&backends['original'].machine.coverage),unvisitedRootPcs=sorted(wanted-backends['original'].machine.coverage),provisioner='explicit fixture-only typed header attachment after genuine initializer; no original GetHeader API or production startup claim',unsafeFragmentedUndersizedExtraSinkExcluded=True,sourceCreditGranted=0)
        (output/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8');print('header',len(rows),'plans',len(report['visitedRootPcs']),'/',len(wanted),'PCs')
    finally:backends['windows'].machine.close()

if __name__=='__main__':main()
