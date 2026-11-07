import json
from pathlib import Path
from run059 import Backend,encoded
from session059 import Program

WORK=Path(__file__).resolve().parent


def plans():
    payload=b'window allocation failure and terminal retry '*23
    return [dict(name='memory-retry',image=encoded(payload,15)[:-5],window=15,fail_at=2),
            dict(name='dictionary-retry',image=bytes.fromhex('78bb12345678'),window=15,fail_at=0),
            dict(name='bad-retry',image=bytes([7]),window=-15,fail_at=0),
            dict(name='done-retry',image=encoded(payload,31),window=31,fail_at=0),
            dict(name='zlib-window-rejected',image=encoded(payload,15),window=8,fail_at=0)]


def run(backends):
    rows=[]
    for case in plans():
        programs={t:Program(b,case['image'],case['window'],fail_at=case['fail_at'])for t,b in backends.items()}
        observations=[]
        for repeat in range(2):
            values={t:p.advance(len(case['image']),2048,0)for t,p in programs.items()}
            if any(v!=values['original']for v in values.values()):raise ValueError('059 terminal retry differs '+case['name'])
            observations.append(values['original'])
        closed={t:p.close()for t,p in programs.items()}
        if any(v!=closed['original']for v in closed.values()):raise ValueError('059 terminal retry cleanup differs')
        rows.append(dict(name=case['name'],observations=observations,closed=closed['original']))
    return rows

if __name__=='__main__':
    backends={t:Backend(t,WORK/'build')for t in ['original','arm','windows','a64']}
    try:
        rows=run(backends)
        (WORK/'terminal-first-proof.json').write_text(json.dumps(dict(status='real-terminal-retries-passed',programs=rows),separators=(',',':'))+'\n',encoding='utf-8')
        print('terminal',len(rows),'plans passed')
    finally:backends['windows'].machine.close()
