import hashlib
import json
from pathlib import Path
from runtime061 import Runtime,execute
from first061 import visible
from cases061 import corpus,baseline
from helper061 import allocate,status
from measure061 import measure

WORK=Path(__file__).resolve().parent


def prove(artifacts,output):
    runtimes={t:Runtime(t,artifacts)for t in ['original','arm','windows','a64']};rows=[]
    expected_baseline=json.loads((WORK/'first-proof.json').read_text(encoding='utf-8'))['programs']
    try:
        for index,case in enumerate(baseline()+corpus()):
            values={t:execute(r,case['image'],case['capacity'],case['seed'])for t,r in runtimes.items()}
            if any(visible(v)!=visible(values['original'])for v in values.values())or any(values[t]['allocatorArguments']!=values['original']['allocatorArguments']or values[t]['initializationContracts']!=values['original']['initializationContracts']for t in ['arm','a64']):
                (output/'failure.json').write_text(json.dumps(dict(index=index,kind=case['kind'],observations=values),indent=2)+'\n',encoding='utf-8');raise ValueError('061 bounded asset graph mismatch retained')
            if case['kind']=='preserved-first-baseline'and values!=expected_baseline[index]['observations']:raise ValueError('061 historical48 source/reference observation contract changed')
            if case['kind']in ['valid-zlib','preserved-first-baseline']and case['capacity']>=len(case['payload']):
                wanted=hashlib.sha256(case['payload']+bytes([case['seed']])*(case['capacity']-len(case['payload']))).hexdigest()
                if values['original']['status']!=len(case['payload'])or values['original']['outputSha256']!=wanted:raise ValueError('061 valid output differs from independent authored payload')
            rows.append(dict(index=index,kind=case['kind'],capacity=case['capacity'],seed=case['seed'],inputSha256=hashlib.sha256(case['image']).hexdigest(),observations=values))
        helpers=[];status_rows=[];excluded=[]
        for capacity in [0,1,16,7116,32768]:
            for used in [0,capacity]:
                for count,size in [(0,0),(0,0xffffffff),(1,0),(1,1),(1,7116),(32768,1),(0x80000000,2),(0xffffffff,2),(65536,65536)]:
                    if ((count*size)&0xffffffff)>0xffffffff-(0x2000000+0x30000+used):
                        excluded.append(dict(capacity=capacity,used=used,count=count,size=size));continue
                    values={t:allocate(r,capacity,used,count,size)for t,r in runtimes.items()}
                    if any(v!=values['original']for v in values.values()):raise ValueError('061 helper graph mismatch')
                    helpers.append(dict(capacity=capacity,used=used,count=count,size=size,observations=values))
        for value in list(range(-12,12))+[-0x80000000,0x7fffffff]:
            values={t:status(r,value)for t,r in runtimes.items()}
            if any(v!=values['original']for v in values.values()):raise ValueError('061 status graph mismatch')
            status_rows.append(dict(argument=value,observations=values))
        claim=measure();original=runtimes['original'].machine
        coverage=[dict(address=f['address'],instructionPcs=len(f['instructionPcs']),visitedPcs=sorted(set(f['instructionPcs'])&original.coverage),missingPcs=sorted(set(f['instructionPcs'])-original.coverage))for f in claim['functions']]
        report=dict(schemaVersion=1,status='bounded-real-game-asset-decoder-graph-passed',programs=rows,sets=len(rows)+len(helpers)+len(status_rows),observations=(len(rows)+len(helpers)+len(status_rows))*4,preservedBaselineSets=48,allocatorPrograms=helpers,statusPrograms=status_rows,excludedAddressWrapCases=excluded,coverage=coverage,sourceCreditGranted=0,nullStorageFullGraphClaim=False,wholeResourceCallerClaim=False)
        (output/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8');print('061 asset corpus',len(rows),'sets','coverage',[(r['instructionPcs']-len(r['missingPcs']),r['instructionPcs'])for r in coverage],flush=True)
        return report
    finally:
        for r in runtimes.values():r.close()

if __name__=='__main__':
    output=WORK/'corpus-attempt001';output.mkdir(exist_ok=False);prove(WORK/'build',output)
