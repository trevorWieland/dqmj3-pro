import hashlib
import json
from pathlib import Path
import subprocess
import sys
I=Path(__file__).resolve().parent
sys.dont_write_bytecode=True
sys.pycache_prefix=str(I/'copy-never-written-bytecode')
sys.path.insert(0,str(I))
from contract import ROOT,load,pin

def artifacts(root):return {p.relative_to(root).as_posix():pin(p)for p in root.rglob('*')if p.is_file()and p.suffix in ['.o','.elf','.dll','.lib']}

def run():
    output=I/'tiny-copy-v2'
    if output.exists():raise ValueError('exclusive tiny own-input copy required')
    source,support,reference,known=load(I,True)
    paths={Path(p)for p in known if Path(p).is_relative_to(I)}|{I/'entry.py',I/'test_transport.py',Path(__file__).resolve()}
    before={p.relative_to(I).as_posix():pin(p)for p in paths};snapshot=output/'inputs';snapshot.mkdir(parents=True)
    for relative,value in before.items():
        target=snapshot/relative;target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes((I/relative).read_bytes())
        if pin(target)!=value:raise ValueError('tiny source input copy differs')
    (output/'snapshot.json').write_text(json.dumps(dict(files=before,copiedFiles=len(before),copiedBytes=sum(v['bytes']for v in before.values()),existingPublishedSdkReferencedOnly=True,originalOrToolCopies=False),indent=2)+'\n',encoding='utf-8')
    log=output/'full.log'
    with log.open('wb')as stream:child=subprocess.run([sys.executable,'-I','-B',str(snapshot/'entry.py'),'--output',str(snapshot/'full'),'--mode','full'],cwd=ROOT,stdout=stream,stderr=subprocess.STDOUT)
    if child.returncode:raise ValueError('tiny copied owner replay failed; see '+str(log))
    a=artifacts(I/'full-v2');b=artifacts(snapshot/'full')
    if a!=b:raise ValueError('tiny copied native artifacts differ '+str([p for p in a.keys()|b.keys()if a.get(p)!=b.get(p)][:20]))
    if before!={relative:pin(I/relative)for relative in before}or before!={relative:pin(snapshot/relative)for relative in before}:raise ValueError('tiny-copy source/support changed')
    first=json.loads((I/'full-v2/transport.json').read_bytes());second=json.loads((snapshot/'full/transport.json').read_bytes())
    for key in ['observations','rotationObservations','primaryInsertionPcVisits','combinedInsertionPcVisits','selectorPcVisits','tests','returningControls','sameFinalPrimaryArenaControls','artifactsIdentical','compiledSources','existingSdkFiles']:
        if first[key]!=second[key]:raise ValueError('tiny copy deterministic contract differs '+key)
    if second['blockedReadsOrConstructions']:raise ValueError('tiny copied gate violation')
    result=dict(status='tiny-public-owner-input-copy-and-full-replay-passed',copiedInputs=len(before),copiedBytes=sum(v['bytes']for v in before.values()),nativeArtifactsIdentical=len(a),primary=pin(I/'full-v2/transport.json'),copied=pin(snapshot/'full/transport.json'),snapshot=pin(output/'snapshot.json'),fullPrimaryAndCopyTests=first['tests']+second['tests'],returningControlsPerReplay=second['returningControls'],primaryInsertionPcs=second['primaryInsertionPcVisits'],combinedInsertionPcs=second['combinedInsertionPcVisits'],blockedReadsOrConstructions=0,originalOrToolCopies=False)
    (output/'verification.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result),flush=True);return result
if __name__=='__main__':run()
