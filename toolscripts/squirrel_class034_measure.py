import hashlib
import json
import struct

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm_const import ARM_INS_BL,ARM_INS_BLX,ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC
from native_wave014_oracle import original_image
from native_material_wave011_build import ROOT,pin,save


WORK=ROOT/'work/squirrel-class034'
EVIDENCE=ROOT/'evidence/lanes/squirrel-class034'
ENTRIES=[(0x1996f4,'VM-class-creation-inherited-callback-and-attributes'),
    (0x1804b4,'class-member-definition-field-method-and-meta-ownership'),
    (0x1880d0,'shared-meta-name-index-table-lookup'),
    (0x173d60,'VM-newslot-table-class-instance-dispatch')]



def region(image,start,end):
    return {'address':start,'endExclusive':end,'bytes':end-start,
        'sha256':hashlib.sha256(image[start-0x100000:end-0x100000]).hexdigest()}


def measure():
    image=original_image()
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census=json.loads(census_path.read_text());functions={row['address']:row for row in census['functions']}
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    rows=[]
    for entry,role in ENTRIES:
        function=functions[entry];instructions=[];calls=[];literals=[]
        for span in function['ranges']:
            blob=image[span['start']-0x100000:span['endExclusive']-0x100000]
            decoded=list(decoder.disasm(blob,span['start']))
            if sum(instruction.size for instruction in decoded)!=span['bytes']:
                raise ValueError('034 canonical ARM body did not decode completely')
            instructions.append(region(image,span['start'],span['endExclusive']))
            for instruction in decoded:
                if instruction.id in (ARM_INS_BL,ARM_INS_BLX) and instruction.operands[0].type==ARM_OP_IMM:
                    calls.append({'instruction':instruction.address,'target':instruction.operands[0].imm})
                for operand in instruction.operands:
                    if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                        address=instruction.address+8+operand.mem.disp
                        literals.append({'instruction':instruction.address,'literal':region(image,address,address+4)})
        rows.append({'entry':entry,'role':role,'mode':'ARM','instructions':instructions,
            'instructionBytes':function['textBodyBytes'],'literalReferences':literals,'directCalls':calls,
            'censusCallers':[row['address'] for row in census['functions'] if entry in row['calledFunctionAddresses']],
            'canonicalExistingEntry':True,'inventoryOrSourceCreditGranted':0})
    pools=[region(image,0x199988,0x1999b0),region(image,0x1808d8,0x1808e4),
        region(image,0x188180,0x188184),region(image,0x1740bc,0x174194)]
    result={'schemaVersion':1,'status':'measured-before-class034-source','version':'update-content0','module':'main',
        'moduleSha256':hashlib.sha256(image).hexdigest(),'census':pin(census_path),'functions':rows,
        'noninstructionPoolsAndInlineStrings':pools,
        'plannedCanonicalInstructionBytes':sum(row['instructionBytes'] for row in rows),
        'frozenClass030':pin(ROOT/'evidence/lanes/squirrel-class-call030/ready.json'),
        'frozenExecute031':pin(ROOT/'evidence/lanes/squirrel-execute031/ready.json'),
        'frozen031ConsumptionApprovalNotInferredByThisMeasurement':True,
        'VmClassCreateAbi':'Bool(void*vm,Object*result,I32baseIndex,U32attributesIndex)',
        'classNewSlotAbi':'Bool(Class030*class,State012*shared,const Object*key,const Object*value,U32staticFlag)',
        'metaIndexAbi':'I32(State012*shared,const Object*key)',
        'vmNewSlotAbi':'Bool(void*vm,const Object*self,const Object*key,const Object*value,U32staticFlag)',
        'baseIndexMinusOneMeansNoBase':True,'attributesIndex255MeansNull':True,
        'classTargetSize92NativeSize152FromFrozen030':True,
        'metaIndexTableTargetSharedOffset':8,'nativeMetaIndexRequiresNamedSharedSuffix':True,
        'inheritedMetaSelector':17,'newslotMetaSelector':13,
        'classCreateIgnoresInheritedCallbackBoolButPopsArgsAndDisposesResult':True,
        'classAttributesAssignedAfterInheritedCallbackUsingFreshResultOwner':True,
        'classNewSlotRejectsLockedClassBeforeLookupOrMutation':True,
        'classNewSlotDoublesFullVectorCapacityOrStartsAt4':True,
        'descriptorPublishedBeforeVectorAllocationAndAppendConstruction':True,
        'valueClosuresOrNonzeroStaticFlagUseMethodVectorExceptExistingFields':True,
        'metaRecognitionOnlyForActualStringKeysAndClosureValues':True,
        'fixedMemberDescriptorsUseIntegerTagAndFlags01000000Or02000000':True,
        'instanceNewslotRequiresActualSixSlot030VtableAndActualMetaProvider':True,
        'tableMetaDispatchCannotUseFrozen019ThreeSlotVtableWithoutActualExtendedSuccessor':True,
        'GCSharedStateCtorAllocatorGeneralPrintfFullVmOrGameClaimed':False,
        'newSourceOrInventoryAdmissionGranted':0,'originalPayloadsPublished':False,
        'producer':pin(ROOT/'toolscripts/squirrel_class034_measure.py')}
    path=EVIDENCE/'claim.json'
    if path.exists() and json.loads(path.read_text())!=result:raise ValueError('034 historical pre-source claim changed')
    save(path,result)
    return result


if __name__=='__main__':print(measure()['plannedCanonicalInstructionBytes'])
