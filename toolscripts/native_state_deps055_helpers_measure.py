import hashlib
import json
from pathlib import Path
import sys
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm_const import ARM_OP_MEM,ARM_REG_PC

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
from native_wave014_oracle import original_image

WORK=ROOT/'work/native-state055-deps-public/v1/writers'
SOURCE=ROOT/'src/native/wave055/controller-deps-v1'
EVIDENCE=ROOT/'evidence/lanes/native-state055/controller-deps-public-v1'
CENSUS=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'


def pin(path):
    data=Path(path).read_bytes()
    return dict(path=Path(path).relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def span(image,start,end):
    data=image[start-0x100000:end-0x100000]
    assert len(data)==end-start
    return dict(start=start,endExclusive=end,bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def measure():
    image=original_image()
    functions={row['address']:row for row in json.loads(CENSUS.read_text(encoding='utf-8'))['functions']}
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM)
    decoder.detail=True
    rows=[]
    for entry in [0x6f9544,0x166900,0x7292d0]:
        function=functions[entry]
        regions=[]
        literals={}
        branches=[]
        for region in function['ranges']:
            regions.append(span(image,region['start'],region['endExclusive']))
            for instruction in decoder.disasm(image[region['start']-0x100000:region['endExclusive']-0x100000],region['start']):
                if instruction.mnemonic.startswith('b')and instruction.op_str.startswith('#'):
                    branches.append(dict(pc=instruction.address,kind=instruction.mnemonic,target=int(instruction.op_str[1:],16)))
                if instruction.mnemonic.startswith('ldr'):
                    for operand in instruction.operands:
                        if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC and not operand.mem.index:
                            address=instruction.address+8+operand.mem.disp
                            literals[address]=span(image,address,address+4)
        end=regions[-1]['endExclusive']
        following=min(value for value in functions if value>=end)
        callers=[]
        for address,row in functions.items():
            if entry not in row['calledFunctionAddresses']:
                continue
            for region in row['ranges']:
                for instruction in decoder.disasm(image[region['start']-0x100000:region['endExclusive']-0x100000],region['start']):
                    if instruction.mnemonic=='bl'and instruction.op_str=='#'+hex(entry):
                        callers.append(dict(caller=address,pc=instruction.address,**span(image,instruction.address,instruction.address+4)))
        rows.append(dict(entry=entry,mode='ARM',instructionBytes=function['textBodyBytes'],ranges=regions,
                         literalReads=list(literals.values()),followingCanonicalEntry=following,
                         excludedPool=span(image,end,following),branches=branches,callers=callers))
    result=dict(schemaVersion=1,status='pre-source-additional-state055-helper-measurement',
                version='update-content0',module='main',moduleSha256=hashlib.sha256(image).hexdigest(),
                census=pin(CENSUS),functions=rows,totalInstructionBytes=532,
                largeCallerEntry=0x6fb25c,largeCallerInstructionBytes=14600,
                largeCallerAbiLead='Entry r0 is a readable mask-word pointer; r1 is a raw U32 flag word. Global nested state and full layout remain unqualified.',
                helperLeads=[dict(entry=0x6f9544,role='Reserve bounded words; write zero/header only, preserving reserved payload holes. R0 mixes base word and cursor pointer observations.'),
                             dict(entry=0x166900,role='Bounded128-word block writer, fixed header base and no80000000 flag; R0 is limit pointer on rejection or declared pair address on success.'),
                             dict(entry=0x7292d0,role='Index<32 reads an actual pointer table at container+828 and the pointed first U32 word; other indices return0.')],
                sourceAuthored=False,productionGlobalInitializationQualified=False,sourceCreditGranted=0,
                sourceOrInventoryAdmissionGranted=False,producer=pin(Path(__file__).resolve()))
    assert sum(row['instructionBytes']for row in rows)==532
    WORK.mkdir(parents=True,exist_ok=True)
    path=WORK/'claim.json'
    path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return result


if __name__=='__main__':
    measure()
