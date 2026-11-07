import json
import sys
import zlib
from pathlib import Path
from runtime061 import Runtime,execute
WORK=Path(__file__).resolve().parent


def compressed(payload,level=6,strategy=0,window=15):
    encoder=zlib.compressobj(level,zlib.DEFLATED,window,8,strategy)
    return encoder.compress(payload)+encoder.flush()


def visible(row):return {k:v for k,v in row.items()if k not in ['allocatorArguments','initializationContracts']}


def main():
    runtimes={t:Runtime(t,WORK/'build')for t in ['original','arm','windows','a64']}
    plans=[]
    for payload in [b'',b'a',b'game asset payload '*97,bytes(range(256))*13]:
        for level,strategy in [(0,0),(6,0),(6,4)]:
            image=compressed(payload,level,strategy)
            for capacity in [0,max(0,len(payload)-1),len(payload),len(payload)+512]:plans.append((image,capacity,0xa7,False))

    rows=[]
    try:
        for index,(image,capacity,seed,null_workspace)in enumerate(plans):
            values={t:execute(r,image,capacity,seed,null_workspace)for t,r in runtimes.items()}
            if any(visible(v)!=visible(values['original'])for v in values.values())or any(values[t]['allocatorArguments']!=values['original']['allocatorArguments']or values[t]['initializationContracts']!=values['original']['initializationContracts']for t in ['arm','a64']):
                (WORK/'first-failure.json').write_text(json.dumps(dict(index=index,capacity=capacity,observations=values),indent=2)+'\n',encoding='utf-8');raise ValueError('061 first genuine asset graph mismatch')
            rows.append(dict(index=index,capacity=capacity,seed=seed,nullWorkspace=null_workspace,observations=values))
        (WORK/'first-proof.json').write_text(json.dumps(dict(status='first-real-asset-caller-source-graph-passed',programs=rows,sourceCreditGranted=0),separators=(',',':'))+'\n',encoding='utf-8');print('061 asset graph',len(rows),'four-profile programs passed')
    finally:
        for r in runtimes.values():r.close()

if __name__=='__main__':main()
