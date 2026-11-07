import json
from pathlib import Path
from run059 import Backend,encoded
from session059 import Program

WORK=Path(__file__).resolve().parent


def main():
    backends={t:Backend(t,WORK/'build')for t in ['original','arm','windows','a64']}
    rows=[]
    try:
        for index,window in enumerate([-8,-9,-15,15,31]):
            image=encoded(b'actual allocator argument observations '*19,-9 if window==-8 else window)
            programs={t:Program(b,image,window,custom_allocator=True)for t,b in backends.items()}
            values={t:p.advance(len(image),2048,0)for t,p in programs.items()}
            if any(v!=values['original']for v in values.values()):raise ValueError('059 raw allocator ABI differs')
            closed={t:p.close()for t,p in programs.items()}
            if any(v!=closed['original']for v in closed.values()):raise ValueError('059 custom service cleanup differs')
            rows.append(dict(window=window,observation=values['original'],closed=closed['original']))
        (WORK/'custom-first-proof.json').write_text(json.dumps(dict(status='raw-count-and-bytes-allocator-ABI-passed',programs=rows),indent=2)+'\n',encoding='utf-8');print('custom allocator',len(rows),'sets passed')
    finally:backends['windows'].machine.close()

if __name__=='__main__':main()
