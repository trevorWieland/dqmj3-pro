import hashlib
import json
from pathlib import Path
import re
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm_const import ARM_INS_BL,ARM_INS_BLX
from native_wave014_oracle import original_image

ROOT=Path(__file__).resolve().parents[2]
WORK=ROOT/'work/native-state055/dispatcher-v6'
PREDECESSOR=ROOT/'work/native-state055/controller-v5/ready.json'
EXPECTED_PREDECESSOR='6dead72e66105d8f234a4c13699ee8e97de7c5f0246d07696af5d98b88bfe6ad'


def pin(path):
    path=Path(path).resolve();data=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def measure():
    assert pin(PREDECESSOR)['sha256']==EXPECTED_PREDECESSOR
    image=original_image();original=ROOT/'work/native-state055/claim.json'
    row=next(item for item in json.loads(original.read_text())['functions']if item['entry']==0x73b7a4)
    for span in row['instructionRanges']+row['internalExcludedGaps']:
        data=image[span['start']-0x100000:span['endExclusive']-0x100000]
        assert len(data)==span['bytes']and hashlib.sha256(data).hexdigest()==span['sha256']
    cs=Cs(CS_ARCH_ARM,CS_MODE_ARM);fp=set();calls=[];instructions=[]
    for span in row['instructionRanges']:
        decoded=list(cs.disasm(image[span['start']-0x100000:span['endExclusive']-0x100000],span['start']))
        assert len(decoded)*4==span['bytes']
        for item in decoded:
            instructions.append(item)
            fp.update(int(match)for match in re.findall(r'\bs(\d+)\b',item.op_str))
            if item.id in [ARM_INS_BL,ARM_INS_BLX]:calls.append([item.address,item.mnemonic,item.op_str])
    assert not calls
    caller=row['callers'][0]
    caller_span=image[caller['caller']-0x100000:caller['pc']-0x100000+12]
    result=dict(schemaVersion=1,status='reference-first-dispatcher055-v6-no-C-implementation',version='update-content0',module='main',moduleSha256=hashlib.sha256(image).hexdigest(),
                entry=0x73b7a4,mode='ARM',instructionBytes=18296,instructionCount=len(instructions),instructionRanges=row['instructionRanges'],internalExcludedGaps=row['internalExcludedGaps'],
                directCalls=row['directCalls'],branchEdges=row['branchEdges'],indirectBranchLeads=row['indirectBranchLeads'],pcRelativeReadLeads=row['pcRelativeReadLeads'],callers=row['callers'],
                observedSinglePrecisionRegisters=sorted(fp),
                predecessor=pin(PREDECESSOR),predecessorChanged=False,sourceIdentity=pin(original),producer=pin(__file__),
                abiLeads=dict(r0='U32 encoded location, with 0xffffffff no-op sentinel',r1='input binary32/raw-value storage pointer',r2='component count/dimension',r3='element count; zero is no-op',
                              stack0='raw transpose selector, role measured in matrix arm',stack1='raw matrix selector, role measured in uniform arm',returnValue='Caller ignores R0; void remains a bounded API hypothesis until full witness review'),
                actualWrapper=dict(entry=caller['caller'],callPc=caller['pc'],bytes=len(caller_span),sha256=hashlib.sha256(caller_span).hexdigest(),
                                   transforms='R0 preserved, R1=input from wrapper R2, R2=4, R3=count from wrapper R1, two zero stack words'),
                selectorLeads=dict(uniform='Bit18 clear; vector index bits0..6 and descriptor index bits7..17',builtin='Bit18 set; operation=(location&0x3ffff)>>2; low2 bits remain under review',
                                   metadata='12-byte records from selected+0x1c, packing word at+8; exact constructor/storage closure not yet qualified'),
                newNativeBindingRequired='Do not reinterpret complete native game objects through frozen v5 component storage; new actual first-member successor and explicit mutable-buffer/descriptor bindings will be measured',
                semanticRole='Uniform/property state setter, corroborated by the actual vector4 wrapper and writes to v5-consumed data/dirty masks; no gameplay label',
                sourceAuthored=False,sourceCreditGranted=0,fullOwnerInitializationAllocatorHardwareOrGameClaimed=False)
    WORK.mkdir(exist_ok=True)
    path=WORK/'claim.json';path.write_text(json.dumps(result,indent=2)+'\n')
    text=[]
    for item in instructions:text.append(f'{item.address:08x} {item.mnemonic} {item.op_str}')
    (WORK/'dispatcher.private.asm').write_text('\n'.join(text)+'\n')
    print(json.dumps(dict(claim=pin(path),instructions=len(instructions),singlePrecisionRegisters=sorted(fp))))
    return result


if __name__=='__main__':measure()
