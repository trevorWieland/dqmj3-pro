import hashlib
import json
import sys
from pathlib import Path
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from proof062u import TaskSession
from runtime062u import ROOT
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM,CS_MODE_THUMB

def main():
    session=TaskSession('original',WORK/'final-stage-v1/build')
    try:
        row=session.simple('sdk_task_dispatch062u');selected=json.loads((WORK/'task-default-work-supplement.json').read_bytes());records=[]
        for region in selected['ranges']:
            code=(ROOT/'generated/update-content0/code.bin').read_bytes();decoder=Cs(CS_ARCH_ARM,CS_MODE_THUMB if region['mode']=='Thumb'else CS_MODE_ARM);pcs={i.address for i in decoder.disasm(code[region['start']-0x100000:region['endExclusive']-0x100000],region['start'])};records.append(dict(**region,pcVisits=len(pcs&session.r.original.coverage),totalPcs=len(pcs),unvisitedPcs=sorted(pcs-session.r.original.coverage)))
        if any(r['unvisitedPcs']for r in records):raise ValueError('062u measured default-work chain was not executed completely')
        result=dict(status='passed-measured-original-default-work-chain',producerSha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),wholeArenaModel=row,regions=records,pcVisits=sum(r['pcVisits']for r in records),volatileR0ReturnExcludedByVoidApi=True,sourceCreditGranted=0)
        (WORK/'default-work-coverage-v1.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print('062u all10 original default-work/report chain PCs visited with independent complete arena equality')
    finally:session.close()

if __name__=='__main__':main()
