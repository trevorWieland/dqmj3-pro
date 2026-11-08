from pathlib import Path
import hashlib
import json
import subprocess

ROOT=Path.cwd()
PREVIOUS='873f53b824f1aa8b336344b664f5407b29792e57'
HEADER='include/bytematch_names.h'


def pin(path):
    data=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def main():
    raw=subprocess.check_output(['git','show',PREVIOUS+':'+HEADER])
    old=dict(path=HEADER,bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())
    new=pin(ROOT/HEADER);registry_path=ROOT/'config/functional-functions.json'
    registry=json.loads(registry_path.read_bytes());assert len(registry['functions'])==367
    paths=sorted({x['packet']['path']for x in registry['functions']});changes=[]
    for name in paths:
        path=ROOT/name;before=pin(path);value=json.loads(path.read_bytes());count=[0]
        def visit(item):
            if isinstance(item,dict):
                if item.get('path')==HEADER and 'sha256'in item:
                    if item!=old:raise ValueError('Unexpected previous header pin')
                    item.clear();item.update(new);count[0]+=1
                else:
                    for child in item.values():visit(child)
            elif isinstance(item,list):
                for child in item:visit(child)
        visit(value)
        if count[0]:
            path.write_text(json.dumps(value,indent=2)+'\n',encoding='utf-8')
            after=pin(path);changes.append(dict(before=before,after=after,headerPinsUpdated=count[0]))
            for row in registry['functions']:
                if row['packet']['path']==name:row['packet']=after
    registry['scope']='Bounded working nonmatching C in explicitly qualified domains; zero exact matching-source admission'
    registry_path.write_text(json.dumps(registry,indent=2)+'\n',encoding='utf-8')
    result=dict(status='metadata-only-names-header-refresh',previousCommit=PREVIOUS,
        oldHeader=old,newHeader=new,packets=changes,oldAliases=89,newAliases=109,
        productionCOrHeadersChanged=False,functionalEntriesAdded=0,sourceCreditGranted=0,
        producer=pin(Path(__file__).resolve()))
    output=ROOT/'evidence/verification/source-name-header-refresh109.json'
    if output.exists():raise ValueError('Existing header refresh receipt must not be overwritten')
    output.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(packets=len(changes),aliases=109,sourceCreditGranted=0)))


if __name__=='__main__':main()
