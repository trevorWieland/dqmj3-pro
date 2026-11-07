import hashlib
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'toolscripts'))
from native_wave014_oracle import original_image

WORK=Path(__file__).resolve().parent/'controller-v5'


def pin(path):
    data=Path(path).read_bytes()
    return dict(path=Path(path).relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def measure():
    image=original_image()
    original=ROOT/'work/native-state055/claim.json'
    row=next(value for value in json.loads(original.read_text(encoding='utf-8'))['functions']if value['entry']==0x6fb25c)
    for part in row['instructionRanges']+row['internalExcludedGaps']:
        data=image[part['start']-0x100000:part['endExclusive']-0x100000]
        assert len(data)==part['bytes']and hashlib.sha256(data).hexdigest()==part['sha256']
    claim=dict(schemaVersion=1,status='reference-first-full-controller055-frontier',version='update-content0',module='main',
               moduleSha256=hashlib.sha256(image).hexdigest(),entry=0x6fb25c,mode='ARM',instructionBytes=14600,
               instructionRanges=row['instructionRanges'],internalExcludedGaps=row['internalExcludedGaps'],
               branchEdges=row['branchEdges'],pcRelativeReadLeads=row['pcRelativeReadLeads'],directCalls=row['directCalls'],callers=row['callers'],
               argumentLeads=dict(r0='readable mask-word pointer',r1='raw U32 request flags'),
               globalLeads=[dict(address=0x8bfab0,role='context pointer with scalar/flag/clip/cache fields'),
                            dict(address=0x8bf79c,offset=8,role='pointer to a selected-object pointer slot'),
                            dict(address=0x8bfad8,role='pointer to actual typed resource index')],
               prerequisites=[pin(ROOT/'evidence/lanes/native-state055/controller-deps-public-v1/ready.json')],
               sourceIdentityClaim=pin(original),fullObjectLayoutsOwnershipAndInitializationQualified=False,
               sourceAuthored=False,sourceCreditGranted=0,producer=pin(Path(__file__).resolve()))
    WORK.mkdir(parents=True,exist_ok=True)
    path=WORK/'claim.json'
    path.write_text(json.dumps(claim,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return claim


if __name__=='__main__':
    measure()
