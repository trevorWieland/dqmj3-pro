import json
import struct

import capstone
from capstone.arm import ARM_OP_MEM, ARM_REG_PC

from native_wave013_common import ROOT, MODULE_SHA, record, sha
from native_wave013_file_original import load as load_closed


SELECTOR=0x4c46e8
TABLES=[(0x4c4708,0x4c4710,7),(0x4c47d4,0x4c47dc,11)]


def load(canonical):
    graph=load_closed([address for address in canonical if address!=SELECTOR])
    if SELECTOR not in canonical:
        return graph
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:
        raise ValueError('Owner original module differs')
    census=json.loads((ROOT/graph['census']['path']).read_text())
    row=next(item for item in census['functions'] if item['address']==SELECTOR)
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM)
    decoder.detail=True
    ranges,entries=[],[]
    indexed=[]
    for part in row['ranges']:
        low,high=part['start'],part['endExclusive']
        raw=image[low-0x100000:high-0x100000]
        instructions=list(decoder.disasm(raw,low))
        if sum(item.size for item in instructions)!=len(raw):
            raise ValueError('Owner selector has undecoded instruction bytes')
        graph['blocks'].append((low,raw))
        graph['executableRanges'].append((low,high))
        ranges.append({'start':low,'endExclusive':high,'bytes':len(raw),'sha256':sha(raw)})
        entries.extend(item.address for item in instructions)
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                    if instruction.address not in [item[0] for item in TABLES] or instruction.mnemonic!='ldrlo' or not operand.mem.index:
                        raise ValueError('Unqualified owner selector PC-relative data role')
                    indexed.append(instruction.address)
    if indexed!=[item[0] for item in TABLES]:
        raise ValueError('Owner selector dispatch load witnesses differ')
    pools=[]
    for witness,start,count in TABLES:
        raw=image[start-0x100000:start-0x100000+count*4]
        targets=list(struct.unpack('<'+'I'*count,raw))
        if any(value not in entries for value in targets):
            raise ValueError('Owner selector table leaves complete owned instruction ranges')
        part={'start':start,'endExclusive':start+len(raw),'bytes':len(raw),'sha256':sha(raw)}
        pools.append(part)
        graph['blocks'].append((start,raw))
        graph['readonlyData'].append({**part,'role':'owner-selector-indexed-ARM-dispatch-targets','loadInstruction':witness,'entries':count,'targets':targets})
    graph['functions'][SELECTOR]={'mode':'ARM','instructionRanges':ranges,'literalPoolRanges':pools,'instructionAddresses':entries}
    return graph
