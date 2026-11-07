import hashlib
import json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_OP_IMM
ROOT=Path(__file__).resolve().parents[1]
MODULE_SHA='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def measure():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes();digest=lambda value:hashlib.sha256(value).hexdigest()
    if digest(image)!=MODULE_SHA:raise ValueError('025 canonical update module differs')
    path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json';census=json.loads(path.read_text(encoding='utf-8'))
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;roots=[]
    for entry,size,claim in((0x1a1010,480,'complete-type-error-controller'),(0x1a15ec,408,'complete-concat-controller-under-string-input-domain'),(0x1a83dc,508,'measured-dependency-only-string-arm-consumed-no-whole-body-claim'),(0x191f28,236,'frozen020-existing-provider-no-duplicate-credit')):
        row=next(item for item in census['functions']if item['address']==entry)
        if row['mode']!='ARM'or row['ranges']!=[{'start':entry,'endExclusive':entry+size,'bytes':size}]:raise ValueError('025 canonical function ranges differ')
        instructions=list(decoder.disasm(image[entry-0x100000:entry+size-0x100000],entry))
        if sum(insn.size for insn in instructions)!=size:raise ValueError('025 incomplete instruction decode')
        calls=[];branches=[]
        for insn in instructions:
            if insn.mnemonic in('bl','blx'):
                calls.append({'address':insn.address,'target':insn.operands[0].imm if insn.operands[0].type==ARM_OP_IMM else None,'sha256':digest(insn.bytes)})
            elif insn.mnemonic.startswith('b')and insn.operands and insn.operands[0].type==ARM_OP_IMM:
                branches.append({'address':insn.address,'target':insn.operands[0].imm,'sha256':digest(insn.bytes)})
        direct=sorted({item['target']for item in calls if item['target']is not None})
        if direct!=sorted(row['calledFunctionAddresses']):raise ValueError('025 call closure differs')
        roots.append({'entry':entry,'mode':'ARM','instructionRanges':row['ranges'],'instructionBytes':size,'sha256':digest(image[entry-0x100000:entry+size-0x100000]),
          'claim':claim,'callers':[item['address']for item in census['functions']if entry in item['calledFunctionAddresses']],
          'nextCensusEntry':min(item['address']for item in census['functions']if item['address']>entry),'calls':calls,'branches':branches})
    data=[]
    for address,size,kind in((0x1a11f0,1,'empty-NUL-string'),(0x1a11f1,3,'zero-alignment'),(0x1a11f4,4,'string-tag'),(0x1a11f8,2,'separator-NUL-string'),(0x1a11fa,2,'zero-alignment'),(0x1a11fc,55,'format-NUL-string'),(0x1a1233,1,'zero-alignment'),(0x1a1784,8,'null-and-string-tag-pool')):
        value=image[address-0x100000:address+size-0x100000]
        if kind=='zero-alignment'and any(value):raise ValueError('025 alignment differs')
        data.append({'address':address,'bytes':size,'kind':kind,'sha256':digest(value)})
    return {'schemaVersion':1,'moduleSha256':MODULE_SHA,'censusSha256':digest(path.read_bytes()),'roots':roots,'classifiedData':data,
      'typeErrorABI':'void(void*vm,I32argumentIndex,I32expectedMask,U32actualType)',
      'concatABI':'Bool(void*vm,constObject*left,constObject*right,Object*destination)',
      'concatSourceDomain':'both inputs actual String015 objects; actual type-error caller proves this for every call',
      'expectedMaskSemantics':{'enumeratedBits':16,'order':'ascending bit index','separator':'|','highBitsIgnored':True,'argumentIndexAdjusted':False},
      'sourceGraphDependencies':['frozen020 typename/scratch/raise-format','frozen015 actual byte strings','frozen012 opaque ownership','new025 signed integer and literal/%s/%d formatter'],
      'unqualified':['full508-byte ToString metamethod/numeric/default-pointer branches','general printf','allocation failure146590','GC','wholeVM/game/device'],
      'sourceCreditGranted':0,'requestedDuplicateTypeNameBytes':0}


if __name__=='__main__':
    path=ROOT/'evidence/lanes/squirrel-type-error025/claim.json';path.parent.mkdir(parents=True,exist_ok=True);path.write_text(json.dumps(measure(),indent=2)+'\n',encoding='utf-8');print(hashlib.sha256(path.read_bytes()).hexdigest())
