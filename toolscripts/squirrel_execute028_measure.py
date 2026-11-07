import hashlib
import json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM,CS_GRP_CALL
from capstone.arm import ARM_OP_IMM
from squirrel_wave005_execute_inventory import inventory
ROOT=Path(__file__).resolve().parents[1]
MODULE_SHA='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
NAMES={0:'LINE',1:'LOAD',2:'LOADINT',3:'LOADFLOAT',4:'DLOAD',5:'TAILCALL',6:'CALL',7:'PREPCALL',8:'PREPCALLK',9:'GETK',10:'MOVE',11:'NEWSLOT',12:'DELETE',13:'SET',14:'GET',15:'EQ',16:'NE',17:'ARITH',18:'BITW',19:'RETURN',20:'LOADNULLS',21:'LOADROOT',22:'LOADBOOL',23:'DMOVE',24:'JUMP',25:'JNZ',26:'JZ',27:'LOADFREE',28:'VARGC',29:'GETVARGV',30:'NEWTABLE',31:'NEWARRAY',32:'APPENDARRAY',35:'COMPARITHL',37:'INCL',39:'PINCL',40:'CMP',41:'EXISTS',43:'AND',44:'OR',45:'NEG',46:'NOT',47:'BWNOT',48:'CLOSURE',49:'YIELD',50:'RESUME',51:'FOREACH',52:'POSTFOREACH',53:'DELEGATE',56:'PUSHTRAP',57:'POPTRAP',58:'THROW'}
FIRST={1,2,3,4,10,17,19,20,21,22,23,24,25,26,27,28,43,44,46}


def measure():
    digest=lambda data:hashlib.sha256(data).hexdigest();image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if digest(image)!=MODULE_SHA:raise ValueError('028 canonical module differs')
    path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json';census=json.loads(path.read_text(encoding='utf-8'));root=next(item for item in census['functions']if item['address']==0x18d65c)
    actual=inventory(image,census);milestone=ROOT/'evidence/lanes/squirrel-source-wave005/execute-milestone.json'
    if actual!=json.loads(milestone.read_text(encoding='utf-8')):raise ValueError('028 Execute eight-range/data inventory changed')
    table=next(item for item in actual['dataRanges']if item['kind']=='bounded-pointer-dispatch-table'and item['entries']==61)
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;instructions=[i for span in root['ranges']for i in decoder.disasm(image[span['start']-0x100000:span['endExclusive']-0x100000],span['start'])]
    direct=[{'address':i.address,'target':i.operands[0].imm,'sha256':digest(i.bytes)}for i in instructions if i.group(CS_GRP_CALL)and i.operands[0].type==ARM_OP_IMM]
    if not {x['target']for x in direct}<=set(root['calledFunctionAddresses']):raise ValueError('028 Execute direct calls escaped census')
    helpers=[]
    for entry in(0x199cb8,0x1994c0,0x1a0cc0,0x1a1234):
        fn=next(item for item in census['functions']if item['address']==entry)
        helpers.append({'entry':entry,'instructionRanges':fn['ranges'],'instructionBytes':sum(x['bytes']for x in fn['ranges']),
          'rangeHashes':[{'start':x['start'],'endExclusive':x['endExclusive'],'sha256':digest(image[x['start']-0x100000:x['endExclusive']-0x100000])}for x in fn['ranges']],
          'directCallees':fn['calledFunctionAddresses']})
    checkpoint_path=ROOT/'evidence/lanes/squirrel-source-wave006/checkpoint-legacy-rename-1001.json';checkpoint=json.loads(checkpoint_path.read_text(encoding='utf-8'))
    legacy={'checkpointSha256':digest(checkpoint_path.read_bytes()),'sourceSnapshotCount':checkpoint['snapshotFileCount'],'historicalOriginalReturns':checkpoint['originalReturns'],
      'historicalSourceReturns':checkpoint['sourceReturns'],'historicalNamedDispatchEntries':checkpoint['namedDispatchEntries'],'wholeRootComplete':checkpoint['wholeRootComplete'],
      'legacyTypesAutomaticallyAcceptedFor028':False,'limitations':['legacy20-byte collectable/helper contracts do not cover actual12-byte prototypes','old partial checkpoint does not close wholeExecute','current028 must use true named011/012/017/022 types and source-only execution']}
    providers={0x17ffac:'frozen022Call',0x196f6c:'frozen022NativeCall',0x196b08:'frozen018ScriptCreate requires new028 frame binding',0x19813c:'frozen020RaiseFormat with explicit selected backend',0x191f20:'frozen020Typename object thunk',0x198578:'frozen020/023Get',0x18d4fc:'frozen020/023MetaCall',0x19828c:'frozen020/023IndexError',0x1a1dc8:'frozen019/021TableGet',0x19b998:'frozen019/021TableInit',0x19e2e8:'frozen019/021Delegate',0x19d320:'frozen012OpaqueVector',0x19e864:'frozen012AliasSafeObjectAssign',0x665bd4:'frozen012OpaqueArrayLifetime',0x202dcc:'legacy008generator lifetime requires opaque successor',0x146590:'unsupported terminal failure',0x2fece8:'declared platform allocator',0x18388c:'declared platform reallocator'}
    return {'schemaVersion':1,'moduleSha256':MODULE_SHA,'censusSha256':digest(path.read_bytes()),'executeInventory':actual,'entry':0x18d65c,
      'callers':[fn['address']for fn in census['functions']if 0x18d65c in fn['calledFunctionAddresses']],
      'entryABI':{'return':'Bool','registerArguments':['vm','callableObject','targetWord ignored by mode0','argumentCount'],
        'stackArguments':['raw stackBaseI32 transported viaS16','resultObjectPointer','raw raiseErrorU32','executionTypeI32'],
        'requiresEnabledVFP':True,'calleeSavedD8ToD15Required':True,'fpscrExceptionStatusNotUniversalEquality':True},
      'opcodes':[{'value':i,'candidateNameFromFrozen1001':NAMES.get(i),'handler':table['targets'][i],
        'plannedFirstCohort':i in FIRST,'dynamicCorrespondenceRequiredBeforeQualified':True}for i in range(61)],
      'directCalls':direct,'censusAdditionalInferredCallTargets':sorted(set(root['calledFunctionAddresses'])-{x['target']for x in direct}),'providerFrontier':[{'entry':entry,'status':providers.get(entry,'unrecovered or needs new typed source qualification')}for entry in root['calledFunctionAddresses']],
      'supportingHelpers':helpers,'legacy1001Review':legacy,'targetReservedObjectOffsets':{'errorHandler':72,'debugHook':80,'temporary':88,'varargsVector':36,'trapVector':120},
      'nativeProposal':'exact022 common first; original reserved fields accessed by alias-safe byte copies, native additional fields in named028 tail',
      'initialDomain':'executionType0 non-generator script with actual011 prototype/017closure and bounded owned stacks; scalar/ref loads, moves, branches, integer arithmetic andReturn',
      'unsupportedInitial':['generator/resume/suspend modes','debug/exception/traps','uncovered opcodes/types/metamethods','fullExecute closure','arbitrary reentrant mutation','allocation failure'],
      'wholeExecuteSourceCreditGranted':0,'acceptedSourceCreditGranted':0}


if __name__=='__main__':
    p=ROOT/'evidence/lanes/squirrel-execute028/claim.json';p.parent.mkdir(parents=True,exist_ok=True);p.write_text(json.dumps(measure(),indent=2)+'\n',encoding='utf-8');print(hashlib.sha256(p.read_bytes()).hexdigest())
