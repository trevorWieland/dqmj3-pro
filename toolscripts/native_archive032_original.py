import json
import struct

import capstone
from capstone.arm import ARM_OP_MEM,ARM_REG_PC
from native_wave013_common import ROOT,MODULE_SHA,sha,record


CLAIM=ROOT/'evidence/lanes/native-archive032/initial-claim.json'


def load():
    claim=json.loads(CLAIM.read_text());image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA or claim['moduleSha256']!=MODULE_SHA:raise ValueError('Archive module identity differs')
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM);decoder.detail=True
    rows=[]
    for target in [*claim['functions'],claim['supplementalCandidate']]:
        address=target['address'];ranges=target['instructionRanges'];instructions=[];pools={}
        for part in ranges:
            low,high=part['start'],part['endExclusive'];raw=image[low-0x100000:high-0x100000]
            if sha(raw)!=part['sha256']:raise ValueError('Archive instruction ownership bytes differ')
            items=list(decoder.disasm(raw,low))
            if sum(item.size for item in items)!=len(raw):raise ValueError('Archive complete instruction range has undecoded bytes')
            instructions.extend(item.address for item in items)
            for item in items:
                for operand in item.operands:
                    if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                        if operand.mem.index or not item.mnemonic.startswith('ldr'):raise ValueError('Archive unqualified indexed PC data')
                        at=item.address+8+operand.mem.disp;data=image[at-0x100000:at-0x100000+4]
                        pools[at]={'start':at,'endExclusive':at+4,'bytes':4,'sha256':sha(data),'loadInstruction':item.address}
        rows.append({'address':address,'mode':'ARM','symbol':'fn_'+format(address,'08x'),
            'instructionRanges':ranges,'literalPoolRanges':[pools[key] for key in sorted(pools)],
            'instructionAddresses':instructions,'instructionBytes':sum(part['endExclusive']-part['start'] for part in ranges),
            'inventoryOwnership':'supplemental-candidate-only' if address==claim['supplementalCandidate']['address'] else 'frozen-composed-census',
            'reportEntryBytes':next(part['endExclusive']-part['start'] for part in ranges if part['start']==address),
            'canonicalIdentity':{'build':'owner-archive-update','programId':'0004000e001acb00','module':'content0/.code-decompressed',
                'moduleSha256':MODULE_SHA,'address':address,'mode':'ARM'},'sourceCreditGranted':0})
    return {'claim':record(CLAIM),'census':claim['census'],'functions':rows,'operationTable':claim['supplementalCandidate']['callerTable']}
