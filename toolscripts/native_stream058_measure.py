import hashlib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC, ARM_INS_BL, ARM_INS_BLX, ARM_INS_B

ROOT = next(parent for parent in Path(__file__).resolve().parents
            if (parent/'AGENTS.md').is_file() and (parent/'config/build-units.json').is_file())
WORK = ROOT/'work/native-stream058/public-stage-v1'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CENSUS_SHA = '338f478921eef3955e17f7e6b438a65f58ec9aa183b0012a9ab7dd872878dc55'
ENTRIES = {0x733c00:340,0x733d78:176,0x733bb0:76,0x733d64:20,0x734b34:8,0x734b3c:16}


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def measure():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    census_raw=(ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes()
    if sha(image)!=MODULE_SHA or sha(census_raw)!=CENSUS_SHA:
        raise ValueError('058 original identities changed')
    census=json.loads(census_raw)['functions'];by={row['address']:row for row in census}
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    result=[]
    for entry,size in ENTRIES.items():
        row=by[entry]
        if row['mode']!='ARM' or row['ranges']!=[dict(start=entry,endExclusive=entry+size,bytes=size)]:
            raise ValueError('058 canonical full extent changed')
        raw=image[entry-0x100000:entry-0x100000+size];instructions=list(decoder.disasm(raw,entry))
        if len(instructions)*4!=size:
            raise ValueError('058 undecoded instruction bytes')
        pools=[];calls=[]
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                    address=instruction.address+8+operand.mem.disp;data=image[address-0x100000:address-0x100000+4]
                    pools.append(dict(instruction=instruction.address,address=address,size=4,sha256=sha(data),value=struct.unpack('<I',data)[0]))
            if instruction.id in(ARM_INS_BL,ARM_INS_BLX,ARM_INS_B) and instruction.operands[0].type==ARM_OP_IMM:
                target=instruction.operands[0].imm&0xffffffff
                if not entry<=target<entry+size:
                    calls.append(dict(instruction=instruction.address,target=target,mnemonic=instruction.mnemonic,sha256=sha(instruction.bytes)))
        callers=[]
        for caller in census:
            if entry in caller['calledFunctionAddresses']:
                callers.append(caller['address'])
        result.append(dict(address=entry,symbol='fn_'+format(entry,'08x'),mode='ARM',instructionBytes=size,
                           instructionRanges=[dict(start=entry,endExclusive=entry+size,bytes=size,sha256=sha(raw))],
                           instructionAddresses=[instruction.address for instruction in instructions],literalPools=pools,
                           directEdges=calls,censusCallers=callers))
    if struct.unpack_from('<I',image,0x733d60-0x100000)[0]!=7116:
        raise ValueError('058 actual state allocation differs')
    prefixes=[]
    for address in(0x733bac,0x733bfc):
        raw=image[address-0x100000:address-0x100000+4]
        if raw!=bytes.fromhex('0000a0e1'):
            raise ValueError('058 original leading NOP changed')
        prefixes.append(dict(address=address,size=4,sha256=sha(raw),sourceCreditGranted=0,
                             role='separate census NOP prefix falling through to next canonical body'))
    return dict(schemaVersion=1,status='reference-first-complete-init-reset-end-family-before-C',
                moduleSha256=MODULE_SHA,censusSha256=CENSUS_SHA,functions=result,instructionBytes=sum(ENTRIES.values()),
                leadingPrefixes=prefixes,
                actualState=dict(allocationBytes=7116,codeBufferOffset=1328,codeBytes=4,codeEntries=1444,
                                 saneOffset=7104,backOffset=7108,uninterpretedTailOffset=7112,
                                 codePointerFields=[76,80,108],windowPointerOffset=52),
                frozen056View=dict(targetBytes=7108,source='src/native/wave056/stream056.h',
                                   notFullState=True,typedFieldCopyAdapterRequired=True,blindCastPermitted=False),
                allocator=dict(defaultAllocate=0x734b34,realSdkContinuation=0x2fecec,
                               defaultDispose=0x734b3c,realSdkDisposeContinuation=0x30233c,
                               sourceAllocatorImplementationCreditGranted=0),
                outerInflater=dict(entry=0x7321e4,sourceRecovered=False,wholeCallerCreditGranted=0),
                sourceAuthored=False,sourceCreditGranted=0)


if __name__=='__main__':
    (WORK/'claim.json').write_text(json.dumps(measure(),indent=2)+'\n')
