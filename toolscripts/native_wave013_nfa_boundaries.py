import json
import struct

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_INS_LDR, ARM_INS_TST, ARM_INS_MOV, ARM_CC_EQ, ARM_OP_IMM, ARM_REG_R0, ARM_REG_R4

from native_wave013_common import ROOT, MODULE_SHA, sha
from native_wave013_nfa_layout import allocation_role


def exclusions(original,overlay,data):
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:
        raise ValueError('Boundary proof original identity differs')
    table=next(row for row in overlay['tables'] if row['name']=='nfa-primary-and-continuation')
    raw=image[table['start']-0x100000:table['start']-0x100000+table['bytes']]
    if sha(raw)!=table['sha256'] or len(raw)!=38*8 or any(struct.unpack_from('<I',raw,i+4)[0] for i in range(0,len(raw),8)):
        raise ValueError('NFA immutable method flags differ')
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM)
    decoder.detail=True
    rows,excluded=[],set()
    for function,load,test,branch,target in [(0x4c0390,0x4c03c4,0x4c03c8,0x4c03d4,0x4c03e4),
        (0x4c0390,0x4c0414,0x4c0418,0x4c0424,0x4c0434),
        (0x4c0b44,0x4c0c8c,0x4c0c90,0x4c0c9c,0x4c0cac),
        (0x4c0b44,0x4c0cdc,0x4c0ce0,0x4c0cec,0x4c0cfc)]:
        code=image[load-0x100000:target-0x100000]
        instructions={item.address:item for item in decoder.disasm(code,load)}
        a,b,c=instructions[load],instructions[test],instructions[branch]
        if a.id!=ARM_INS_LDR or a.operands[0].reg!=ARM_REG_R0 or a.operands[1].mem.disp!=4:
            raise ValueError('NFA member flag load differs')
        if b.id!=ARM_INS_TST or b.operands[0].reg!=ARM_REG_R0 or b.operands[1].imm!=1:
            raise ValueError('NFA member flag test differs')
        if c.id!=ARM_INS_B or c.cc!=ARM_CC_EQ or c.operands[0].imm!=target:
            raise ValueError('NFA member virtual-arm bypass differs')
        if any(item.update_flags for pc,item in instructions.items() if test<pc<branch):
            raise ValueError('NFA member flags change before bypass')
        dead=list(range(branch+4,target,4))
        if not set(dead)<=set(original['functions'][function]['instructionAddresses']):
            raise ValueError('Excluded NFA member arm escapes owned extent')
        excluded.update(dead)
        rows.append({'kind':'immutable-zero-member-flag','function':function,'tableSha256':table['sha256'],
                     'entryCount':38,'guardStart':load,'guardBytes':len(code),'guardSha256':sha(code),
                     'instructionAddresses':dead,'claim':'Valid immutable-table input only; corrupted tables are outside the contract'})
    if any(row[0]==45 for row in struct.iter_unpack('<4H',data['values']['caseGroups'])):
        raise ValueError('Literal hyphen unexpectedly has case equivalents')
    code=image[0x4c0804-0x100000:0x4c0838-0x100000]
    instructions={item.address:item for item in decoder.disasm(code,0x4c0804)}
    constant,call,branch=instructions[0x4c0804],instructions[0x4c0828],instructions[0x4c0834]
    if (constant.id!=ARM_INS_MOV or constant.operands[0].reg!=ARM_REG_R4 or constant.operands[1].imm!=45
        or call.id!=ARM_INS_BL or call.operands[0].imm!=0x4c35b0
        or branch.id!=ARM_INS_B or branch.cc!=ARM_CC_EQ or branch.operands[0].imm!=0x4c086c):
        raise ValueError('Literal hyphen lookup/bypass witness differs')
    dead=list(range(0x4c0838,0x4c086c,4));excluded.update(dead)
    rows.append({'kind':'literal-hyphen-has-no-case-record','function':0x4c04f0,'character':45,
                 'caseDataProposal':data['proposal'],'checkedEveryCaseRecord':1398,'guardStart':0x4c0804,
                 'guardBytes':len(code),'guardSha256':sha(code),'instructionAddresses':dead,
                 'claim':'The actual case lookup returns null for this constant; its alternate-character loop cannot execute'})
    return rows,excluded


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
                    kind,blocks=allocation_role(instruction.address)
                    start=max(extent['start'],instruction.address-16)
                    end=min(extent['endExclusive'],instruction.address+36)
                    result.append({'function':function,'callsite':instruction.address,'role':kind,'logicalBlocks':blocks,
                                   'targetBlockBytes':16,'nativeBlockBytes':32,'witnessStart':start,'witnessBytes':end-start,
                                   'witnessSha256':sha(image[start-0x100000:end-0x100000])})
    return result


def incoming_witnesses(original, overlay, addresses):
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    census = json.loads((ROOT / original['census']['path']).read_text())
    decoders = {}
    for mode in ['ARM', 'Thumb']:
        decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM if mode == 'ARM' else capstone.CS_MODE_THUMB)
        decoder.detail = True
        decoders[mode] = decoder
    result = {}
    for address in addresses:
        witnesses = [{'kind': 'unadjusted-method-table', 'table': table['name'], 'tableStart': table['start'],
                      'tableSha256': table['sha256'], **entry}
                     for table in overlay['tables']
                     for entry in table['entries'] if entry['target'] == address]
        for caller in census['functions']:
            if address not in caller['calledFunctionAddresses']:
                continue
            for extent in caller['ranges']:
                for instruction in decoders[caller['mode']].disasm(image[extent['start'] - 0x100000:extent['endExclusive'] - 0x100000], extent['start']):
                    if instruction.id in [ARM_INS_BL, ARM_INS_BLX] and instruction.operands[0].type == ARM_OP_IMM and instruction.operands[0].imm & ~1 == address:
                        witnesses.append({'kind': 'actual-direct-call', 'caller': caller['address'],
                                          'address': instruction.address, 'bytes': instruction.size,
                                          'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + instruction.size])})
        if not witnesses:
            raise ValueError('New NFA function has no actual caller/table witness')
        result[address] = witnesses
    return result
