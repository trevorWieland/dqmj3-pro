import hashlib
import json
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm_const import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_material_wave011_build import ROOT, pin, save
from native_wave014_oracle import original_image


EVIDENCE = ROOT / 'evidence/lanes/squirrel-coercion026'
MODULE = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def region(image, start, end):
    return {'address':start,'endExclusive':end,'bytes':end-start,
        'sha256':hashlib.sha256(image[start-0x100000:end-0x100000]).hexdigest()}


def measure():
    image = original_image()
    if hashlib.sha256(image).hexdigest() != MODULE: raise ValueError('026 original identity changed')
    path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(path.read_text())
    functions = {row['address']:row for row in census['functions']}
    decoder = Cs(CS_ARCH_ARM,CS_MODE_ARM); decoder.detail = True
    rows = []
    for entry,size,pool,role,api in [
        (0x1a83dc,508,44,'object-string-conversion-controller','void(void*vm,constObject*input,Object*destination)'),
        (0x7434e8,152,4,'vm-index-object-conversion-and-stack-publication','void(void*vm,I32index)')]:
        expected = [{'start':entry,'endExclusive':entry+size,'bytes':size}]
        if functions[entry]['ranges'] != expected: raise ValueError('026 canonical body changed')
        decoded = list(decoder.disasm(image[entry-0x100000:entry-0x100000+size],entry))
        if len(decoded)*4 != size: raise ValueError('026 incomplete ARM decode')
        calls,literals = [],[]
        for instruction in decoded:
            if instruction.mnemonic in ('bl','blx') and instruction.operands[0].type == ARM_OP_IMM:
                calls.append({'instruction':instruction.address,'target':instruction.operands[0].imm})
            if instruction.mnemonic.startswith('ldr'):
                for operand in instruction.operands:
                    if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                        literals.append({'instruction':instruction.address,
                            'literal':region(image,instruction.address+8+operand.mem.disp,
                                instruction.address+12+operand.mem.disp)})
        rows.append({'role':role,'mode':'ARM','instructions':region(image,entry,entry+size),
            'pool':region(image,entry+size,entry+size+pool),'api':api,'directCalls':calls,
            'literalReferences':literals,'censusRow':functions[entry]})
    texts = [(0x1a85e0,b'%g\0','float-default-precision-format'),
        (0x1a85e4,b'%d\0','signed-integer-format'),(0x1a85e8,b'true\0','boolean-true'),
        (0x1a85f0,b'false\0','boolean-false'),(0x1a85f8,b'(%s : 0x%p)\0','type-and-pointer-format')]
    for address,expected,role in texts:
        if image[address-0x100000:address-0x100000+len(expected)] != expected:
            raise ValueError('026 measured inline format changed')
    if struct.unpack_from('<II',image,0xa85d8) != (0x08000010,0xfc000006):
        raise ValueError('026 dispatch literals changed')
    result = {'schemaVersion':1,'status':'measured-before-coercion026-source',
        'program':'dqmj3pro','version':'update-content0','module':'main','moduleSha256':MODULE,
        'census':pin(path),'functions':rows,'uniqueInstructionBytes':660,'classifiedPoolBytes':48,
        'inlineData':[dict(region(image,a,a+len(v)),role=role) for a,v,role in texts],
        'canonicalNextEntry':0x1a8604,'exactStringTag':0x08000010,
        'metaDispatchTypes':[0x0a000020,0x0a000080,0x0a008000],
        'metaGateTargetDelegateOffset':24,'metaSelector':15,'metaArguments':1,
        'metaResultAcceptedOnlyWhenExactString':True,'failedOrNonStringMetaFallsBack':True,
        'scalarScratchRequests':{'integer':51,'float':51,'boolean':6,'targetTypeAndPointer':24},
        'scalarPayloadReadAfterScratchCallback':True,'defaultTypeNameReadBeforeScratchPayloadAfter':True,
        'floatFormat':'%g','floatDefaultPrecision':6,'fourteenDigit023SubstitutionAllowed':False,
        'targetPointerBits':32,'nativePointerTextMustPreserveActualWidth':True,
        'nativeScratchBudgetRequiresIndependentQualification':True,
        'typeError025StringOnlyConcatControllerModified':False,
        'sourceInventoryOrSdkCreditGranted':0,'wholeVmGameGcAllocatorOrDeviceClaimed':False,
        'originalPayloadsPublished':False,'producer':pin(ROOT/'toolscripts/squirrel_coercion026_boundaries.py')}
    output = EVIDENCE/'claim.json'
    if output.exists() and json.loads(output.read_text()) != result:
        raise ValueError('026 historical pre-source claim changed')
    save(output,result)
    return result


if __name__ == '__main__':
    print(measure()['uniqueInstructionBytes'])
