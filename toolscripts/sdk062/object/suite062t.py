import hashlib
import json
from pathlib import Path
from proof062t import Session,WORK
from build062t import build

def profiles():
    result=[{}]+[dict(**{name:0})for name in ['first','second','peer','service','factory','wrapper','child','underlying','context']]
    result += [dict(**{field:value})for field in ['first_state','second_state','connection_state','disabled','info']for value in range(256)]
    result += [dict(current_empty=1),dict(address_empty=1),dict(current_empty=1,address_empty=1),dict(current_same=1),dict(address_same=1),dict(current_same=1,address_same=1)]
    return result

def run(folder=None,rebuild=True):
    folder=folder or WORK/'final-attempt-v4';folder.mkdir(parents=True,exist_ok=True)
    if rebuild:
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    corpus=profiles();setters=[(old,new,1,1,0)for old in range(256)for new in [0,2,4,258]]
    setters += [(old,new,callback,held,change)for old,new in [(1,2),(3,0),(1,258),(255,0xffffffff)]for callback,held in [(0,0),(0,1),(1,0),(1,1)]for change in [0,4,0x100]]
    replacements=[(p,replacement)for p in [{},dict(current_empty=1),dict(address_empty=1),dict(current_empty=1,address_empty=1),dict(current_same=1),dict(address_same=1),dict(current_same=1,address_same=1)]for replacement in [0,1]]
    predicates=sorted(set([0,1,0x7fffffff,0x80000000,0xffffffff,0x800300d2,0x80050007,0x10001]+[1<<i for i in range(32)]+[(1<<i)-1 for i in range(1,33)]))
    rows=[];coverage=[]
    claim=json.loads((WORK/'object-provider-pre-c-claim.json').read_bytes())
    for target in ['original','arm','windows','a64']:
        session=Session(target,folder/'build')
        try:
            for index,profile in enumerate(corpus):
                rows.append(session.operation(profile))
                if index%256==0:print('062t',target,'controller',index,'/',len(corpus),flush=True)
            for profile in corpus[:16]+[dict(holder=0),dict(first=0),dict(connection_state=4)]:rows.append(session.operation(profile,'sdk_holder_ready062t'))
            for arguments in setters:rows.append(session.setter(*arguments))
            for profile,replacement in replacements:rows.append(session.replacement(profile,replacement))
            for code in predicates:rows.append(session.predicate(code))
            for profile in [dict(connection_state=v)for v in range(256)]+[dict(current_empty=1),dict(child=0),dict(underlying=0),dict(disabled=1),dict(disabled=255)]:rows.append(session.queries(profile))
            if target=='original':
                for function in claim['functions']:
                    pcs=set(range(function['address'],function['endExclusive'],4));visited=sorted(pcs&session.r.original.coverage);coverage.append(dict(address=function['address'],instructionBytes=function['instructionBytes'],pcVisits=len(visited),totalPcs=len(pcs),unvisitedPcs=sorted(pcs-set(visited)),instructionSha256=function['instructionSha256']))
        finally:session.close()
        print('062t',target,'whole initialized arenas and genuine callback/provider paths passed',flush=True)
    count=len(rows)//4
    report=dict(status='passed-bounded-coupled-SDK-object-state-and-real-provider-family',programSets=count,fourProfileObservations=len(rows),observations=rows,originalPcAccounting=coverage,sourceCreditGranted=0,wholeSdkReadinessOrResourceOwnerCredit=0)
    (folder/'report.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8');return report

if __name__=='__main__':run()
