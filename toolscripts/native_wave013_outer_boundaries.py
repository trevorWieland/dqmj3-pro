import json
import struct

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_INS_LDR, ARM_INS_TST, ARM_INS_MOV, ARM_CC_EQ, ARM_OP_IMM, ARM_REG_R0, ARM_REG_R4

from native_wave013_common import ROOT, MODULE_SHA, sha
from native_wave013_outer_layout import allocation_role


def allocation_sites(original):
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM)
    decoder.detail=True
    result=[]
    for function,row in original['functions'].items():
        if row['mode']!='ARM':
            continue
        for extent in row['instructionRanges']:
            for instruction in decoder.disasm(image[extent['start']-0x100000:extent['endExclusive']-0x100000],extent['start']):
                if instruction.id==ARM_INS_BL and instruction.operands[0].type==ARM_OP_IMM and instruction.operands[0].imm==0x4c39c8:
                    kind,blocks=allocation_role(instruction.address,1)
                    start=max(extent['start'],instruction.address-16)
                    end=min(extent['endExclusive'],instruction.address+36)
                    result.append({'function':function,'callsite':instruction.address,'role':kind,'logicalBlocks':None if kind in ['membership','pointer_table'] else blocks,
                                   'logicalBlockFormula':{'membership':'ceil(source_count/16)','pointer_table':'ceil(source_count/4)'}.get(kind),
                                   'targetBlockBytes':16,'nativeBlockBytes':32,'witnessStart':start,'witnessBytes':end-start,
                                   'witnessSha256':sha(image[start-0x100000:end-0x100000])})
    return result


def incoming_witnesses(original,overlay,addresses):
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    census=json.loads((ROOT/original['census']['path']).read_text())
    decoders={}
    for mode in ['ARM','Thumb']:
        decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM if mode=='ARM' else capstone.CS_MODE_THUMB)
        decoder.detail=True
        decoders[mode]=decoder
    result={}
    for address in addresses:
        aliases=[address,0x301f54] if address==0x301f50 else [address]
        witnesses=[]
        for caller in census['functions']:
            if address not in caller['calledFunctionAddresses'] and caller['address'] not in [0x158f6c,0x4c3974]:
                continue
            for extent in caller['ranges']:
                for instruction in decoders[caller['mode']].disasm(image[extent['start']-0x100000:extent['endExclusive']-0x100000],extent['start']):
                    if instruction.mnemonic in ['b','beq','bl','blx'] and instruction.operands and instruction.operands[0].type==ARM_OP_IMM:
                        target=instruction.operands[0].imm&~1
                        if target in aliases:
                            witnesses.append({'kind':'actual-direct-branch-or-call','caller':caller['address'],
                                'address':instruction.address,'target':target,'ownerEntry':address,
                                'interiorSharedTail':target!=address,'bytes':instruction.size,
                                'sha256':sha(image[instruction.address-0x100000:instruction.address-0x100000+instruction.size])})
        if not witnesses:
            raise ValueError('Outer claimed function lacks actual caller/tail witness: '+hex(address))
        result[address]=witnesses
    return result
