import json
import struct

import capstone
from capstone.arm import ARM_OP_MEM,ARM_REG_PC

from native_wave013_file_owner_original import load as load_owner
from native_wave013_common import ROOT,sha


POLICY=0x453b34
TABLES=[(0x453b78,0x453b80,7),(0x453c00,0x453c08,7)]


def load():
    graph=load_owner([0x4c46e8,0x454388,0x45438c,0x45434c,0x14e494])
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    census=json.loads((ROOT/graph['census']['path']).read_text())
    policy=next(row for row in census['functions'] if row['address']==POLICY)
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM)
    decoder.detail=True
    ranges,pools,entries,indexed=[],[],[],[]
    for part in policy['ranges']:
        low,high=part['start'],part['endExclusive']
        raw=image[low-0x100000:high-0x100000]
        instructions=list(decoder.disasm(raw,low))
        if sum(item.size for item in instructions)!=len(raw):raise ValueError('Policy has undecoded instruction bytes')
        graph['blocks'].append((low,raw));graph['executableRanges'].append((low,high))
        ranges.append({'start':low,'endExclusive':high,'bytes':len(raw),'sha256':sha(raw)})
        entries.extend(item.address for item in instructions)
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type!=ARM_OP_MEM or operand.mem.base!=ARM_REG_PC:continue
                if operand.mem.index:
                    if instruction.address not in [row[0] for row in TABLES] or instruction.mnemonic!='ldrlo':
                        raise ValueError('Unqualified policy indexed load')
                    indexed.append(instruction.address)
                else:
                    if not instruction.mnemonic.startswith('ldr'):raise ValueError('Unqualified policy literal load')
                    address=instruction.address+8+operand.mem.disp
                    raw_pool=image[address-0x100000:address-0x100000+4]
                    graph['blocks'].append((address,raw_pool))
                    pools.append({'start':address,'endExclusive':address+4,'bytes':4,'sha256':sha(raw_pool)})
    if indexed!=[row[0] for row in TABLES]:raise ValueError('Policy table witnesses differ')
    for witness,address,count in TABLES:
        raw=image[address-0x100000:address-0x100000+count*4]
        targets=list(struct.unpack('<'+'I'*count,raw))
        if any(value not in entries for value in targets):raise ValueError('Policy table leaves owned instruction spans')
        graph['blocks'].append((address,raw))
        part={'start':address,'endExclusive':address+len(raw),'bytes':len(raw),'sha256':sha(raw)}
        pools.append(part)
        graph['readonlyData'].append({**part,'role':'language-policy-indexed-ARM-dispatch-targets','loadInstruction':witness,'entries':count,'targets':targets})
    graph['functions'][POLICY]={'mode':'ARM','instructionRanges':ranges,'literalPoolRanges':pools,'instructionAddresses':entries}
    allowed=[(part['start'],part['endExclusive']) for row in graph['functions'].values()
        for part in [*row['instructionRanges'],*row['literalPoolRanges']]]
    graph['blocks']=[(address,raw) for address,raw in graph['blocks']
        if any(low<=address<address+len(raw)<=high for low,high in allowed)]
    graph['readonlyData']=[row for row in graph['readonlyData']
        if row.get('role') in ['owner-selector-indexed-ARM-dispatch-targets','language-policy-indexed-ARM-dispatch-targets']]
    for key in ['unicodeData','unicodeDataProposal','properties']:
        graph.pop(key,None)
    for address,count,role in [(0x7e34b0,1,'default-language-byte'),(0x8bfb54,4,'CFG-session-postinitialization-state')]:
        raw=image[address-0x100000:address-0x100000+count]
        graph['blocks'].append((address,raw))
        graph['readonlyData'].append({'start':address,'bytes':count,'sha256':sha(raw),'role':role})
    return graph
