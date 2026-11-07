import hashlib
import json

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm_const import ARM_INS_BL,ARM_INS_BLX,ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC
from native_wave014_oracle import original_image
from squirrel_capture038_build import ROOT,pin,save


def measure():
    claim_path=ROOT/'evidence/lanes/squirrel-capture038/claim.json'
    claim=json.loads(claim_path.read_text());image=original_image()
    for row in [*claim['controller']['instructions'],claim['controller']['pool'],claim['executeClosureFragment']['instructions']]:
        data=image[row['address']-0x100000:row['endExclusive']-0x100000]
        if len(data)!=row['bytes']or hashlib.sha256(data).hexdigest()!=row['sha256']:
            raise ValueError('038 original pre-source range identity changed')
    census=json.loads((ROOT/claim['census']['path']).read_text())
    function=next(row for row in census['functions']if row['address']==0x196b08)
    if function['textBodyBytes']!=1104 or function['ranges']!=[{'start':0x196b08,'endExclusive':0x196f58,'bytes':1104}]:
        raise ValueError('038 controller canonical extent changed')
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    instructions=list(decoder.disasm(image[0x96b08:0x96f58],0x196b08))
    if len(instructions)!=276 or any(row.size!=4 for row in instructions):raise ValueError('038 ARM body decode incomplete')
    calls=[];literals=[]
    for instruction in instructions:
        if instruction.id in(ARM_INS_BL,ARM_INS_BLX)and instruction.operands[0].type==ARM_OP_IMM:
            calls.append({'instruction':instruction.address,'target':instruction.operands[0].imm})
        for operand in instruction.operands:
            if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                address=instruction.address+8+operand.mem.disp
                data=image[address-0x100000:address-0x100000+4]
                literals.append({'instruction':instruction.address,'address':address,'bytes':4,'sha256':hashlib.sha256(data).hexdigest()})
    result={'schemaVersion':1,'status':'reverified-historical-pre-source-capture038-claim',
        'claim':pin(claim_path),'moduleSha256':hashlib.sha256(image).hexdigest(),
        'canonicalControllerBytes':1104,'poolBytes':20,'completeDecodedArmInstructions':276,
        'directCalls':calls,'literalReferences':literals,
        'censusCallers':[row['address']for row in census['functions']if 0x196b08 in row['calledFunctionAddresses']],
        'actualExecuteClosureCall':0x18fe40,'executeFragmentOwner':0x18d65c,
        'sourceCreditGranted':0,'newDiscoveredFunctions':0,'originalPayloadsPublished':False,
        'producer':pin(ROOT/'toolscripts/squirrel_capture038_measure.py')}
    save(ROOT/'evidence/lanes/squirrel-capture038/measurement-verification.json',result)
    return result


if __name__=='__main__':print(measure()['canonicalControllerBytes'])
