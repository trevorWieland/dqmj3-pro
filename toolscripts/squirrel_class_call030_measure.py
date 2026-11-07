import hashlib
import json
import struct

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm_const import ARM_INS_BL,ARM_INS_BLX,ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC
from native_wave014_oracle import original_image
from native_material_wave011_build import ROOT,pin,save


WORK=ROOT/'work/squirrel-class-call030'
EVIDENCE=ROOT/'evidence/lanes/squirrel-class-call030'
ENTRIES=[(0x198418,'VM-instance-construction-and-constructor-resolution'),
    (0x190c50,'class-instance-allocation-and-class-lock'),(0x192548,'new-instance-initializer'),
    (0x1a18a8,'class-initializer-and-inheritance'),(0x19a308,'ancestor-lock'),
    (0x1a4734,'owned-members-table-clone'),(0x1a2b2c,'null-or-integer-clone-cursor'),
    (0x665ee0,'class-final-release'),(0x666144,'class-destructor'),
    (0x665f20,'class-owned-state-finalization'),(0x1a51e0,'class-member-vector-resize'),
    (0x1cdba0,'instance-final-release-with-resurrection-guard'),(0x1cdcc4,'instance-destructor-with-shared-base-tail'),
    (0x1cdaec,'instance-metamethod-accessor-retyped-without-duplicate-credit')]


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
                raise ValueError('030 canonical ARM body did not decode completely')
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
    tables=[]
    for address,expected in [(0x850d90,[0x666144,0,0x665ee0,0x665da8,0x665f20,0]),
            (0x81bd48,[0x1cdcc4,0,0x1cdba0,0x1cdb18,0x1cdc04,0x1cdaec])]:
        words=list(struct.unpack_from('<6I',image,address-0x100000))
        if words!=expected:raise ValueError('030 original six-slot vtable witness changed')
        tables.append(dict(region(image,address,address+24),entryAddresses=words,
            reviewedPrefixSlots=6,followingVtableExtentInferred=False))
    result={'schemaVersion':1,'status':'measured-before-class-call030-source','version':'update-content0','module':'main',
        'moduleSha256':hashlib.sha256(image).hexdigest(),'census':pin(census_path),'functions':rows,'vtableWitnesses':tables,
        'plannedCanonicalInstructionBytes':sum(row['instructionBytes'] for row in rows),
        'classTargetBytes':92,'classFields':{'shared':20,'members':24,'base':28,'fieldVector':32,'methodVector':44,
            'metamethodVector':56,'attributes':68,'typeTag':76,'releaseHook':80,'lockedByte':84,'extraInstanceBytes':88},
        'instanceTargetFields':{'shared':20,'delegate':24,'klass':28,'userPointer':32,'releaseHook':36,
            'allocationBytes':40,'values':44},'instanceMinimumConstructedObjects':1,
        'targetAllocationFormula':'44 + max(1, class.fieldVector.size)*8 + class.extraInstanceBytes',
        'instanceReleaseGuardRetainsBeforeUserHookAndPermitsResurrection':True,
        'instanceDestructorCachesFieldCountThenReleasesClassBeforeClearingValues':True,
        'constructorNameTargetSharedObjectOffset':60,'nativeSharedConstructorObjectMustAvoidExistingChain72':True,
        'portableClassUsesExact020NamedCommonFirst':True,'portableInstanceMustNotCastToPartial020Instance':True,
        'portableInstanceNativeHeader88RequiresCompilationQualification':True,
        'VMFactoryAbi':'Bool(void*vm,Class*class,Object*result,Object*constructor)',
        'classInitializerAbi':'Class*(Class*storage,State*shared,Class*base)',
        'instanceInitializerAbi':'Instance*(Instance*storage,State*shared,Class*class,U32allocationBytes)',
        'nativeReleaseHookAbi':'I32(void*userPointerOrClassTypeTag,I32zero)',
        'frozen009And023AreReadOnlyLeadsNotFullFactoryProof':True,
        'sharedBaseTail233bd8RemainsPartOfCanonicalInstanceDestructor':True,
        'scriptConstructorsRequireFutureFrozen028Provider':True,
        'GCMarkAndInstanceCloneAndExplicitGCFinalizeRemainOutsideInitialFamily':True,
        'newSourceOrInventoryAdmissionGranted':0,'originalPayloadsPublished':False,
        'producer':pin(ROOT/'toolscripts/squirrel_class_call030_measure.py')}
    path=EVIDENCE/'claim.json'
    if path.exists() and json.loads(path.read_text())!=result:raise ValueError('030 historical pre-source claim changed')
    save(path,result)
    return result


if __name__=='__main__':print(measure()['plannedCanonicalInstructionBytes'])
