import hashlib
import json
import struct
from pathlib import Path
from controller7_measure import ROOT,pin
from native_wave014_oracle import original_image

WORK=ROOT/'work/native-state055/controller-init-v8'
PREDECESSOR=ROOT/'work/native-state055/controller-init-v7/core-ready-v1.json'
EXPECTED='6d3f3d2b2e8efcfcfb5a0075d655867aa4257d541311bbea8e5fd335fd200983'


def run():
    assert pin(PREDECESSOR)['sha256']==EXPECTED
    image=original_image();census=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    row=next(row for row in json.loads(census.read_text())['functions']if row['address']==0x12a32c)
    reference=ROOT/'work/native-state055/controller-init-v7/cache-constructor-reference.private.json';observations=json.loads(reference.read_text())['cases']
    expected={pc for part in row['ranges']for pc in range(part['start'],part['endExclusive'],4)}
    visited=set().union(*(set(case['originalVisitedPcs'])for case in observations))&expected
    regions=[]
    for start,size,role in[(0x7e1afc,298*16,'297 indexed named-parameter descriptions plus sentinel'),(0x7e2d9c,190*8,'189 register-number descriptions plus sentinel')]:
        regions.append(dict(start=start,bytes=size,role=role,sha256=hashlib.sha256(image[start-0x100000:start-0x100000+size]).hexdigest()))
    result=dict(status='pre-source-full-selection-cache-and-semantic-input-table-claim',producer=pin(__file__),moduleSha256=hashlib.sha256(image).hexdigest(),predecessor=pin(PREDECESSOR),
                canonicalEntry=0x12a32c,instructionBytes=2008,instructionRanges=[dict(**p,sha256=hashlib.sha256(image[p['start']-0x100000:p['endExclusive']-0x100000]).hexdigest())for p in row['ranges']],
                directOriginalDependencies=[0x301f50,0x17821c,0x301a9c],actualReference=pin(reference),observedInstructions=len(visited),unexecutedPcs=sorted(expected-visited),
                immutableInputRegions=regions,semanticInputDescription='Indexed count/type/name metadata for297 actual dmp_* parameters and189 register numbers; names will be generated from measured field families, not retained as target-address tokens.',
                measuredTypes=dict(targetCacheBytes=0x1774,nativeCommonBytes=0x1308,targetDefaultValues=0x1300,targetFormats=0x15f4,targetDefaultFormats=0x16b1,
                                   targetDescriptorBytes=12,nativeDescriptorBytes=16,descriptorFields=['U32 count','U32 type','const char *name']),
                scope='Recover complete cache constructor with source-derived named metadata and header/default initialization, then couple immutable context/resource providers. Complete upstream11a6a8 platform/submission/wait ownership remains separate.',
                sourceWritten=False,sourceCreditGranted=0,sharedMetadataOrPriorPinsChanged=False,hardwareRendererWholeOwnerOrGameClaimed=False)
    WORK.mkdir(exist_ok=True);out=WORK/'claim-v1.json';assert not out.exists();out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(claim=pin(out),observed=len(visited),total=len(expected))))


if __name__=='__main__':run()
