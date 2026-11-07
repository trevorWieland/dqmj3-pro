import hashlib

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm_const import ARM_OP_MEM, ARM_REG_PC
from native_wave014_oracle import original_image
from native_material_wave011_build import ROOT, pin, save
from squirrel_lookup023_boundaries import region


SPANS = [(0x665a44,0x665af8),(0x19d320,0x19d558),(0x1b33dc,0x1b3530)]


def literals():
    image = original_image()
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    found = {}
    for start, end in SPANS:
        decoded = list(decoder.disasm(image[start-0x100000:end-0x100000],start))
        if sum(row.size for row in decoded) != end-start:
            raise ValueError('023 consumed native helper decode is incomplete')
        for instruction in decoded:
            if not instruction.mnemonic.startswith(('ldr','vldr')): continue
            for operand in instruction.operands:
                if operand.type != ARM_OP_MEM or operand.mem.base != ARM_REG_PC: continue
                address = instruction.address + 8 + operand.mem.disp
                size = 8 if instruction.mnemonic == 'ldrd' or instruction.op_str.startswith('d') else 4
                if not 0x100000 <= address < address + size <= 0x100000 + len(image):
                    raise ValueError('023 native literal reference leaves the measured image')
                row = found.setdefault((address,size), dict(region(image,address,address+size),instructions=[]))
                row['instructions'].append(instruction.address)
    return list(found.values())


def receipt():
    record = {'schemaVersion':1,'status':'consumed-frozen-native-helper-literal-read-scope',
        'moduleSha256':hashlib.sha256(original_image()).hexdigest(),
        'instructionRanges':[region(original_image(),a,b) for a,b in SPANS],
        'literalReads':literals(),
        'functionOwnershipOrSourceCreditAdded':False,
        'nativeCallProvider':pin(ROOT/'evidence/lanes/squirrel-vm-call022/ready.json'),
        'arrayProvider':pin(ROOT/'evidence/lanes/squirrel-reference-prefix012/array-ready.json'),
        'arrayLifetimeMeasurements':pin(ROOT/'evidence/lanes/squirrel-array-release007/claim.json'),
        'producer':pin(ROOT/'toolscripts/squirrel_lookup023_native_inputs.py'),
        'originalPayloadsPublished':False}
    save(ROOT/'evidence/lanes/squirrel-lookup023/native-consumed-literals.json',record)
    return record


if __name__ == '__main__':
    print(len(receipt()['literalReads']))
