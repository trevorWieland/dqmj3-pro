import bisect
import hashlib
import json
from pathlib import Path
import struct
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from native_wave014_oracle import original_image

ROOT=Path(__file__).resolve().parents[2]
WORK=ROOT/'work/native-state055/controller-init-v7'
V5=ROOT/'work/native-state055/controller-v5/ready.json'
V6=ROOT/'work/native-state055/dispatcher-v6/ready.json'
PINS={V5:'6dead72e66105d8f234a4c13699ee8e97de7c5f0246d07696af5d98b88bfe6ad',V6:'f24b7d59ad8a2524a42b0137c1d75b4332b1fd1c81f5d3b0b9a4e3b35a9d3bbe'}


def pin(path):
    path=Path(path).resolve();data=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def run():
    for path,expected in PINS.items():assert pin(path)['sha256']==expected
    image=original_image();census=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    table=json.loads(census.read_text());assert table['codeSha256']==hashlib.sha256(image).hexdigest()
    spans=sorted((part['start'],part['endExclusive'],row)for row in table['functions']if row['mode']=='ARM'for part in row['ranges'])
    starts=[row[0]for row in spans]
    globals={0x8bfab0:'controller/context pointer',0x8bf79c:'state control block',0x8bfad8:'resource index pointer',0x89a520:'storage provider pointer'}
    literals={}
    for offset in range(0,table['initializedTextGrossBytes'],4):
        value=struct.unpack_from('<I',image,offset)[0]
        if value in globals:literals[0x100000+offset]=value
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);rows=[];private=[]
    for offset in range(0,table['initializedTextGrossBytes'],4):
        word=struct.unpack_from('<I',image,offset)[0]
        if word&0x0f7f0000!=0x051f0000:continue
        pc=0x100000+offset;literal=pc+8+((word&4095)if word&(1<<23)else -(word&4095))
        if literal not in literals:continue
        index=bisect.bisect_right(starts,pc)-1
        if index<0 or not spans[index][0]<=pc<spans[index][1]:continue
        owner=spans[index][2];end=min(pc+100,spans[index][1]);decoded=list(decoder.disasm(image[offset:end-0x100000],pc))
        if not decoded or not decoded[0].mnemonic.startswith('ldr'):continue
        rows.append(dict(globalAddress=literals[literal],globalRoleLead=globals[literals[literal]],referencePc=pc,literalAddress=literal,
                         referenceInstructionSha256=hashlib.sha256(image[offset:offset+4]).hexdigest(),
                         nearbyWindow=dict(start=pc,endExclusive=end,sha256=hashlib.sha256(image[offset:end-0x100000]).hexdigest()),
                         censusOwner=dict(entry=owner['address'],instructionBytes=owner['textBodyBytes'],ranges=owner['ranges'],directCallLeads=owner['calledFunctionAddresses'],boundaryStatus=owner['boundaryStatus'])))
        private.append(f"GLOBAL {literals[literal]:08x} OWNER {owner['address']:08x}")
        private += [f'{item.address:08x} {item.mnemonic} {item.op_str}'for item in decoded]
    WORK.mkdir(exist_ok=True)
    result=dict(status='reference-first-production-initialization-ownership-frontier-no-C',producer=pin(__file__),
                moduleSha256=hashlib.sha256(image).hexdigest(),predecessors=[pin(path)for path in PINS],census=pin(census),
                actualOwnerConstructionOrInitializationClaimed=False,sourceAuthored=False,sourceCreditGranted=0,
                globalReferenceLeads=rows,knownResourceBinderLead=0x72e09c,
                scope='Trace actual stores/creation/destruction around controller globals and the resource index, then select complete coupled bodies before source; existing bounded context prefixes are not production constructor evidence')
    out=WORK/'frontier.json';out.write_text(json.dumps(result,indent=2)+'\n')
    (WORK/'global-reference-windows.private.asm').write_text('\n'.join(private)+'\n')
    print(json.dumps(dict(frontier=pin(out),references=len(rows),owners=len({row['censusOwner']['entry']for row in rows}))))
    return result


if __name__=='__main__':run()
