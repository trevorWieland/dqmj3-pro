import hashlib
import json
from pathlib import Path
import sys

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM

MODULE_SHA='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CENSUS_SHA='338f478921eef3955e17f7e6b438a65f58ec9aa183b0012a9ab7dd872878dc55'


def measure():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    census_raw=(ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes()
    if hashlib.sha256(image).hexdigest()!=MODULE_SHA or hashlib.sha256(census_raw).hexdigest()!=CENSUS_SHA:
        raise ValueError('059 canonical original identity changed')
    claim=json.loads((WORK/'claim.json').read_bytes())
    census={r['address']:r for r in json.loads(census_raw)['functions']}
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM)
    for function in claim['functions']:
        row=census[function['address']]
        ranges=[{k:r[k]for k in ['start','endExclusive','bytes']}for r in function['ranges']]
        if row['mode']!='ARM'or row['ranges']!=ranges:raise ValueError('059 full canonical extent changed')
        pcs=[]
        for span in function['ranges']:
            raw=image[span['start']-0x100000:span['endExclusive']-0x100000]
            if len(raw)!=span['bytes']or hashlib.sha256(raw).hexdigest()!=span['sha256']:raise ValueError('059 instruction identity changed')
            decoded=list(decoder.disasm(raw,span['start']))
            if len(decoded)*4!=len(raw):raise ValueError('059 canonical range contains undecoded bytes')
            pcs.extend(i.address for i in decoded)
        function['instructionPcs']=pcs
        for pool in function['pools']:
            raw=image[pool['address']-0x100000:pool['address']-0x100000+pool['size']]
            if hashlib.sha256(raw).hexdigest()!=pool['sha256']:raise ValueError('059 literal identity changed')
    for region in claim['fullNoninstructionIslands']:
        raw=image[region['start']-0x100000:region['endExclusive']-0x100000]
        if hashlib.sha256(raw).hexdigest()!=region['sha256']:raise ValueError('059 noninstruction identity changed')
    if sum(f['instructionBytes']for f in claim['functions'])!=8616:raise ValueError('059 closure size changed')
    return claim

if __name__=='__main__':
    claim=measure()
    print(json.dumps(dict(moduleSha256=claim['moduleSha256'],functions=[dict(address=f['address'],instructionBytes=f['instructionBytes'],instructionPcs=len(f['instructionPcs']))for f in claim['functions']],sourceCreditGranted=0),indent=2))
