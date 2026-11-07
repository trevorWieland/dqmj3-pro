import hashlib
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
from native_wave014_oracle import original_image

WORK=ROOT/'work/native-state055-deps-public/v1/resource'
SOURCE=ROOT/'src/native/wave055/controller-deps-v1'
EVIDENCE=ROOT/'evidence/lanes/native-state055/controller-deps-public-v1'


def pin(path):
    data=Path(path).read_bytes()
    return dict(path=Path(path).relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def span(image,start,end):
    data=image[start-0x100000:end-0x100000]
    assert len(data)==end-start
    return dict(start=start,endExclusive=end,bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def measure():
    image=original_image()
    census=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    functions={row['address']:row for row in json.loads(census.read_text(encoding='utf-8'))['functions']}
    assert functions[0x7292d0]['ranges']==[dict(start=0x7292d0,endExclusive=0x7292fc,bytes=44)]
    witnesses=[dict(role='actual direct call to complete pointer lookup',**span(image,0x6fe08c,0x6fe090)),
               dict(role='actual resource byte-table pointer load',targetOffset=0x818,**span(image,0x6fe0a4,0x6fe0a8)),
               dict(role='actual indexed byte load from resource byte table',**span(image,0x6fe0ac,0x6fe0b0)),
               dict(role='actual return-to-resource-register transfer',**span(image,0x6fe440,0x6fe444)),
               dict(role='actual resource word-table pointer load',targetOffset=0x808,**span(image,0x6fe48c,0x6fe490)),
               dict(role='actual resource flag load',targetOffset=0x81c,**span(image,0x6fe718,0x6fe71c))]
    result=dict(schemaVersion=1,status='pre-source-typed-resource-pointer-lookup-successor',
                version='update-content0',module='main',moduleSha256=hashlib.sha256(image).hexdigest(),
                census=pin(census),entry=0x7292d0,mode='ARM',instructionRanges=[span(image,0x7292d0,0x7292fc)],
                excludedLiteralPools=[span(image,0x7292fc,0x729300)],instructionBytes=44,
                actualCallerEntry=0x6fb25c,referenceOnlyConsumerWitnesses=witnesses,
                priorTokenOnlyProof={'path': 'work/native-state055/family-v2/ready.json', 'bytes': 16998, 'sha256': 'c7ce6ef4a440bf121e91566458d3abdf1cec7670f8b241a03e3e4bc5a277069f'},
                returnRole='Actual CPU resource pointer, corroborated by subsequent original dereferences; preserve full native width.',
                objectContract='Pointer container at target+828, pointer to entry node, then actual resource pointer at node+0.',
                proposedProductionResourceType='Opaque StateResource055, complete only in independently provisioned consumer fixtures.',
                broaderResourceLayoutOwnershipOrInitializationQualified=False,
                canonicalFragmentCreditGranted=False,sourceAuthored=False,sourceCreditGranted=0,
                producer=pin(Path(__file__).resolve()))
    WORK.mkdir(parents=True,exist_ok=True)
    path=WORK/'claim.json'
    path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return result


if __name__=='__main__':
    measure()
