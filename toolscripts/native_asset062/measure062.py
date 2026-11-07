import hashlib
import json
import struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC,ARM_INS_BL,ARM_INS_BLX

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
MODULE_SHA='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CENSUS_SHA='338f478921eef3955e17f7e6b438a65f58ec9aa183b0012a9ab7dd872878dc55'
ENTRIES=[0x251a50,0x444000,0x44409c,0x4440a4,0x6ce720,0x6ce7f8,0x3dce7c,0x3dcea4,0x3dccb4,0x370438,0x3704a4,0x79a3ec,0x6cb164,0x6cb1f8,0x6cb20c,0x6b6530,0x77f7d0,0x66e510,0x66e3d8,0x66e17c,0x666a24,0x676624,0x6741c0,0x13d4ec,0x28b348,0x28b0a0,0x290734,0x66481c,0x615ecc,0x44c558,0x44c644]


def measure():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes();census=(ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes()
    if hashlib.sha256(image).hexdigest()!=MODULE_SHA or hashlib.sha256(census).hexdigest()!=CENSUS_SHA:raise ValueError('062 canonical identity changed')
    by={f['address']:f for f in json.loads(census)['functions']};decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;rows=[]
    for entry in ENTRIES:
        function=by[entry]
        if function['mode']!='ARM':raise ValueError('062 selected decoder mode not ARM')
        ranges=[];pcs=[];calls=[];pools={};indirect=[]
        for span in function['ranges']:
            raw=image[span['start']-0x100000:span['endExclusive']-0x100000];ranges.append(dict(**span,sha256=hashlib.sha256(raw).hexdigest()))
            for ins in decoder.disasm(raw,span['start']):
                pcs.append(ins.address)
                if ins.id in [ARM_INS_BL,ARM_INS_BLX]:
                    if ins.operands[0].type==ARM_OP_IMM:
                        target=ins.operands[0].imm;known=by.get(target)
                        calls.append(dict(address=ins.address,target=target,sha256=hashlib.sha256(ins.bytes).hexdigest(),targetMode=known['mode']if known else None,targetInstructionBytes=sum(r['bytes']for r in known['ranges'])if known else None))
                    else:indirect.append(dict(address=ins.address,sha256=hashlib.sha256(ins.bytes).hexdigest(),unresolvedProvider=True))
                for op in ins.operands:
                    if op.type==ARM_OP_MEM and op.mem.base==ARM_REG_PC and not op.mem.index:
                        at=ins.address+8+op.mem.disp;word=image[at-0x100000:at-0x100000+4]
                        pools[at]=dict(address=at,value=struct.unpack('<I',word)[0],bytes=4,sha256=hashlib.sha256(word).hexdigest(),loadInstruction=ins.address)
        if len(pcs)*4!=sum(r['bytes']for r in ranges):raise ValueError('062 undecoded selected instruction range')
        rows.append(dict(address=entry,mode='ARM',ranges=ranges,instructionBytes=len(pcs)*4,instructionPcs=pcs,calls=calls,indirectCalls=indirect,pools=list(pools.values())))
    jumps=image[0x251aa0-0x100000:0x251abc-0x100000]
    erratum=dict(predecessor='work/native-stream061/asset-boundary-claim.json',kind='caller annotation only; frozen061 source/proofs unchanged',correction='251d84 frees temporary scratch loaded from resource+78c0, not the embedded input atresource+5ad8. It then clears the scratch slot. Ignored decoder result remains confirmed.',scratchSlot=0x78c0,embeddedInput=0x5ad8,allocationStore=0x251d58,releaseCall=0x251d84,clearStore=0x251d88)
    return dict(schemaVersion=1,status='reference-first-complete-canonical-resource-controller-frontier-before-C',moduleSha256=MODULE_SHA,censusSha256=CENSUS_SHA,canonicalOwner=0x251a50,canonicalOwnerInstructionBytes=1628,composedTailEntries=[dict(address=0x25169c,instructionBytes=508),dict(address=0x251920,instructionBytes=280)],functions=rows,phaseDispatch=dict(address=0x251aa0,bytes=28,sha256=hashlib.sha256(jumps).hexdigest(),targets=list(struct.unpack('<7I',jumps))),predecessorErratum=erratum,sourceAuthored=False,sourceCreditGranted=0,wholeOwnerClaim=False,filesystemOrNetworkIdentityClaim=False,unresolvedBoundaries=['outbound compression44c644/SDKdeflate','transform66481c anddependencyclosure','actual virtual channel implementations','resource lookup/queue/platform initialization','metadata inactive saved-stack tail'],existingProvidersReusedWithoutDuplicateCredit=['src/native/wave012/memory_ops.c','src/native/wave013/outer_arena.c','src/native/wave007/predicates.c'])

if __name__=='__main__':
    claim=measure();(WORK/'claim.json').write_text(json.dumps(claim,indent=2)+'\n',encoding='utf-8');print('062 canonical owner measured',claim['canonicalOwnerInstructionBytes'],'bytes; functions',len(claim['functions']))
