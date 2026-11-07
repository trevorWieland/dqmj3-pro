import hashlib
import json
import struct
import sys
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC,ARM_INS_BL,ARM_INS_BLX
MODULE_SHA='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CENSUS_SHA='338f478921eef3955e17f7e6b438a65f58ec9aa183b0012a9ab7dd872878dc55'


def measure():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    census_raw=(ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes()
    if hashlib.sha256(image).hexdigest()!=MODULE_SHA or hashlib.sha256(census_raw).hexdigest()!=CENSUS_SHA:raise ValueError('061 canonical identity changed')
    census=json.loads(census_raw)['functions'];by={f['address']:f for f in census}
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    rows=[]
    for address in [0x44c578,0x44c728,0x44c72c,0x44c74c]:
        known=address in by
        size=4 if address==0x44c728 else 32
        ranges=by[address]['ranges'] if known else [dict(start=address,endExclusive=address+size,bytes=size)]
        spans=[];instructions=[];pools={};calls=[]
        for span in ranges:
            raw=image[span['start']-0x100000:span['endExclusive']-0x100000]
            spans.append(dict(**span,sha256=hashlib.sha256(raw).hexdigest()))
            for instruction in decoder.disasm(raw,span['start']):
                instructions.append(instruction.address)
                if instruction.id in [ARM_INS_BL,ARM_INS_BLX] and instruction.operands[0].type==ARM_OP_IMM:
                    calls.append(dict(address=instruction.address,target=instruction.operands[0].imm,sha256=hashlib.sha256(instruction.bytes).hexdigest()))
                for operand in instruction.operands:
                    if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC and not operand.mem.index:
                        at=instruction.address+8+operand.mem.disp;data=image[at-0x100000:at-0x100000+4]
                        pools[at]=dict(address=at,bytes=4,sha256=hashlib.sha256(data).hexdigest(),value=struct.unpack('<I',data)[0],loadInstruction=instruction.address)
        rows.append(dict(address=address,mode='ARM',inSeededCensus=known,inventoryMutationGranted=False,ranges=spans,instructionBytes=sum(s['bytes']for s in ranges),instructionPcs=instructions,pools=list(pools.values()),calls=calls))
    witnesses=[]
    for address,target in [(0x44c638,0x44c72c),(0x44c63c,0x44c728)]:
        raw=image[address-0x100000:address-0x100000+4]
        if struct.unpack('<I',raw)[0]!=target:raise ValueError('061 actual callback literal changed')
        witnesses.append(dict(slot=address,target=target,sha256=hashlib.sha256(raw).hexdigest(),role='stored as actual stream callback by44c578'))
    jump=image[0x44c75c-0x100000:0x44c77c-0x100000]
    game=by[0x251a50]
    caller=dict(address=0x251a50,ranges=[dict(**q,sha256=hashlib.sha256(image[q['start']-0x100000:q['endExclusive']-0x100000]).hexdigest())for q in game['ranges']],instructionBytes=sum(q['bytes']for q in game['ranges']),wholeBodyRecoveryClaim=False,callInstruction=0x251d78,callSha256=hashlib.sha256(image[0x251d78-0x100000:0x251d7c-0x100000]).hexdigest(),observedReturnHandling='Return not tested before input release and phase7 publication')
    return dict(schemaVersion=1,status='reference-first-real-asset-zlib-boundary-before-C',moduleSha256=MODULE_SHA,censusSha256=CENSUS_SHA,functions=rows,instructionBytes=sum(f['instructionBytes']for f in rows),callbackEntryWitnesses=witnesses,statusJumpTable=dict(address=0x44c75c,bytes=32,sha256=hashlib.sha256(jump).hexdigest(),targets=list(struct.unpack('<8I',jump))),gameCaller=caller,sourceAuthored=False,sourceCreditGranted=0,originalAbi=dict(output='r0',outputCapacity='r1',input='r2',inputBytes='r3',stateStorage='stackArg0',stateStorageBytes=7116,streamBytes=56,windowBits=15,inflateFlush=4),scope='No external dictionary/sync API ownership inferred from this wrapper')

if __name__=='__main__':
    claim=measure();(WORK/'asset-boundary-claim.json').write_text(json.dumps(claim,indent=2)+'\n',encoding='utf-8')
    print('061 measured family',claim['instructionBytes'],'bytes')
