import hashlib
import json

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm_const import ARM_OP_REG,ARM_OP_IMM,ARM_REG_PC
from native_wave014_oracle import original_image
from native_material_wave011_build import ROOT,save


NAMES=['_add','_sub','_mul','_div','_unm','_modulo','_set','_get','_typeof','_nexti','_cmp','_call',
    '_cloned','_newslot','_delslot','_tostring','_newmember','_inherited','constructor']


def measure():
    image=original_image()
    census=json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())
    function=next(row for row in census['functions'] if row['address']==0x14a6a0)
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;names=[]
    for span in function['ranges']:
        for instruction in decoder.disasm(image[span['start']-0x100000:span['endExclusive']-0x100000],span['start']):
            operands=instruction.operands
            if instruction.mnemonic!='add' or len(operands)!=3:continue
            if operands[1].type!=ARM_OP_REG or operands[1].reg!=ARM_REG_PC or operands[2].type!=ARM_OP_IMM:continue
            address=instruction.address+8+operands[2].imm;offset=address-0x100000
            if not 0<=offset<len(image):continue
            text=image[offset:image.find(b'\0',offset)]
            if text not in [name.encode() for name in NAMES]:continue
            names.append({'name':text.decode(),'literalAddress':address,'addressFormingInstruction':instruction.address,
                'literalBytes':len(text)+1,'literalSha256':hashlib.sha256(text+b'\0').hexdigest()})
    if [row['name'] for row in names]!=NAMES:raise ValueError('034 original metadata construction order differs')
    result={'schemaVersion':1,'moduleSha256':hashlib.sha256(image).hexdigest(),'originalSharedConstructor':0x14a6a0,
        'namesInActualConstructionOrder':names,'nameVectorTargetSharedPointerOffset':0,
        'metaIndexTableObjectTargetSharedOffset':4,'metaIndexTablePayloadTargetSharedOffset':8,
        'constructorNameObjectTargetSharedOffset':60,'appendHelper':0x1688cc,'indexPublicationCall':0x14be7c,
        'sharedCtorOrSdkSourceCreditGranted':0,'fullOriginalSharedConstructorReconstructed':False,
        'originalPayloadBytesPublished':False}
    path=ROOT/'evidence/lanes/squirrel-class034/meta-names-measurement.json'
    if path.exists() and json.loads(path.read_text())!=result:raise ValueError('034 meta-name witness changed')
    save(path,result);return result


if __name__=='__main__':print(len(measure()['namesInActualConstructionOrder']))
