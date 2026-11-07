import hashlib
import json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_OP_IMM

ROOT=Path(__file__).resolve().parents[1]
MODULE_SHA='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def measure():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    digest=lambda data:hashlib.sha256(data).hexdigest()
    if digest(image)!=MODULE_SHA:raise ValueError('022 canonical module differs')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census=json.loads(census_path.read_text(encoding='utf-8'))
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    roots=[]
    for entry,expected in((0x17ffac,[(0x17ffac,0x1801a0)]),(0x196f6c,[(0x196f6c,0x197330),(0x19736c,0x1975ac)]),(0x1b33dc,[(0x1b33dc,0x1b3530)])):
        row=next(item for item in census['functions']if item['address']==entry)
        if row['mode']!='ARM'or [(span['start'],span['endExclusive'])for span in row['ranges']]!=expected:raise ValueError('022 complete ranges changed')
        instructions=[]
        for start,end in expected:instructions+=list(decoder.disasm(image[start-0x100000:end-0x100000],start))
        if sum(i.size for i in instructions)!=sum(end-start for start,end in expected):raise ValueError('022 incomplete ARM decoding')
        calls=[];branches=[];indirect=[]
        for insn in instructions:
            if insn.mnemonic in('bl','blx'):
                if insn.operands[0].type==ARM_OP_IMM:calls.append({'address':insn.address,'target':insn.operands[0].imm,'instructionSha256':digest(insn.bytes)})
                else:indirect.append({'address':insn.address,'instructionSha256':digest(insn.bytes)})
            elif insn.mnemonic.startswith('b')and insn.operands and insn.operands[0].type==ARM_OP_IMM:
                branches.append({'address':insn.address,'target':insn.operands[0].imm,'conditional':insn.mnemonic!='b','instructionSha256':digest(insn.bytes)})
        if sorted({item['target']for item in calls})!=sorted(row['calledFunctionAddresses']):raise ValueError('022 direct-call closure differs from census')
        roots.append({'entry':entry,'mode':'ARM','instructionRanges':row['ranges'],'instructionBytes':sum(end-start for start,end in expected),
          'rangeHashes':[{'start':start,'endExclusive':end,'sha256':digest(image[start-0x100000:end-0x100000])}for start,end in expected],
          'callers':[item['address']for item in census['functions']if entry in item['calledFunctionAddresses']],
          'directCalls':calls,'branches':branches,'indirectCalls':indirect})
    data=[]
    for start,size,kind in((0x1801a0,4,'null-tag-literal'),(0x197330,22,'8-bit-ASCII-NUL-error-text'),(0x197346,2,'alignment'),
                            (0x197348,27,'8-bit-ASCII-NUL-error-text'),(0x197363,1,'alignment'),(0x197364,8,'tag-literals'),(0x1975ac,4,'global-null-address-literal')):
        block=image[start-0x100000:start-0x100000+size]
        if kind=='alignment'and any(block):raise ValueError('022 alignment classification differs')
        data.append({'address':start,'bytes':size,'kind':kind,'sha256':digest(block)})
    return {'schemaVersion':1,'moduleSha256':MODULE_SHA,'censusSha256':digest(census_path.read_bytes()),'roots':roots,'classifiedData':data,
      'callServiceABI':{'prototype':'_Bool(void*,const SqPrefixObject012*,I32,I32,SqPrefixObject012*,U32)',
        'argumentRegisters':['vm','callable','argumentCount','stackBase'],'stackArguments':['resultPointer','rawRaiseErrorBits'],
        'executeAdditionalArguments':['target=top-argumentCount','argumentCount','stackBase','resultPointer','rawRaiseErrorBits','executionType=0'],
        'nativeCallablePrototype':'I32(void*)','nativeResultCodes':{'zero':'null result','positive':'top object transferred','minus666':'suspended success','otherNegative':'failed call with prior frame restored'},
        'calleeSavedVfpContextRequired':True,'rawRaiseErrorFloatInterpretation':False},
      'targetBindings':{'stackVector':24,'top':48,'base':52,'root':60,'error':64,'callStack':96,'callCount':100,'allocatedCalls':104,
        'callVector':108,'currentFrame':132,'shared':140,'nativeDepth':144,'callFrameBytes':48,'callFrameClosure':8},
      'nativeProposal':{'common020FirstMember':True,'commonCurrentPointerBytesAt':132,'commonSharedAt':144,
        'additionalNamedCallStorageInTail':True,'callFrameBytes':72,'callFrameClosure':16,'requires018ParentFrameProviderSelection':True},
      'nativeInactiveOriginalFrameWords':['instruction','literals','target','root'],'portableInactiveFieldsDeterministicZero':True,
      'unqualifiedDependencies':['full Execute0018d65c','class creation00198418','formatted/native type errors unless actual020 services selected','allocator and GC'],
      'legacyFrameOrClassReinterpretationProposed':False,'sourceCreditGranted':0}


if __name__=='__main__':
    output=ROOT/'evidence/lanes/squirrel-vm-call022/measurement.json';output.parent.mkdir(parents=True,exist_ok=True)
    output.write_text(json.dumps(measure(),indent=2)+'\n',encoding='utf-8')
    print(hashlib.sha256(output.read_bytes()).hexdigest())
