import json
from pathlib import Path
from native_state_deps055_resource_measure import SOURCE,ROOT,WORK,pin
from native_state_deps055_resource_build import build
from native_state_deps055_resource_qualify import run as qualify


def run():
    inputs=[SOURCE/'resource055.c',SOURCE/'resource055.h',SOURCE/'fixture055.c',ROOT/'src/native/wave055/state055.h']
    before=[pin(path)for path in inputs]
    folder=WORK/'source-snapshot'
    folder.mkdir(parents=True,exist_ok=True)
    for path in inputs:
        (folder/path.name).write_bytes(path.read_bytes())
    primary=json.loads((WORK/'build/build.json').read_text(encoding='utf-8'))
    rebuilt=build(folder/'build',folder/'resource055.c',folder/'fixture055.c')
    artifacts=[]
    for old,new in zip(primary['artifacts'],rebuilt['artifacts']):
        assert old['sha256']==new['sha256']and old['bytes']==new['bytes']
        assert (ROOT/old['path']).read_bytes()==(ROOT/new['path']).read_bytes()
        artifacts.append(dict(primary=old,copiedSource=new,byteIdentical=True))
    report=qualify(folder/'build',folder/'execution.json')
    assert report['cases']==json.loads((WORK/'execution.json').read_text(encoding='utf-8'))['cases']
    assert all(pin(ROOT/row['path'])==row for row in before)
    result=dict(schemaVersion=1,sourceFiles=before,copiedSourceFiles=[pin(folder/path.name)for path in inputs],
                copiedSourceBytes=sum(path.stat().st_size for path in inputs),caseSets=51,targetObservations=204,
                allCaseObservationsIdentical=True,artifacts=artifacts,
                repositoryToolOriginalImageCopied=False,sourceOnlySnapshot=True,
                report=pin(folder/'execution.json'),producer=pin(Path(__file__).resolve()))
    path=WORK/'source-snapshot.json'
    path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return result


if __name__=='__main__':
    run()
