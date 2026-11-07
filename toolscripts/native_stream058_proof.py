import json

from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_INS_B,ARM_INS_BL,ARM_INS_BLX,ARM_OP_IMM

from native_stream058_measure import ROOT,WORK,MODULE_SHA,sha


def prove():
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('058 static proof module changed')
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    instructions={i.address:i for i in decoder.disasm(image[0x733c00-0x100000:0x733d54-0x100000],0x733c00)}
    expected={0x733c54:('mov','r8, #0'),0x733ca0:('str','r7, [r4, #0x1c]'),
              0x733ca4:('str','r8, [r7, #0x34]'),0x733ca8:('ldr','r6, [r4, #0x1c]'),
              0x733cf8:('ldr','r1, [r6, #0x34]'),0x733cfc:('cmp','r1, #0'),
              0x733d00:('ldrne','r0, [r6, #0x24]'),0x733d04:('cmpne','r0, r5'),
              0x733d08:('beq','#0x733d1c')}
    for address,(mnemonic,operands)in expected.items():
        instruction=instructions[address]
        if instruction.mnemonic!=mnemonic or instruction.op_str!=operands:raise ValueError('058 fresh-state zero-window witness changed')
    if any(instructions[address].id in(ARM_INS_BL,ARM_INS_BLX)for address in range(0x733ca0,0x733d0c,4)):
        raise ValueError('058 new callback could mutate fresh window')
    incoming=[i.address for i in instructions.values()if i.id==ARM_INS_B and i.operands[0].type==ARM_OP_IMM
              and 0x733d0c<=i.operands[0].imm<0x733d1c and not 0x733d0c<=i.address<0x733d1c]
    if incoming:raise ValueError('058 excluded window-release block has another entry')
    return dict(schemaVersion=1,status='validated-fresh-distinct-allocation-zero-window-proof',moduleSha256=MODULE_SHA,
                unreachableStart=0x733d0c,unreachableEndExclusive=0x733d1c,instructionPcs=4,
                reason='Allocate returns distinct valid state storage; init publishes it and explicitly zeros window. No intervening callback/store can change the field before its conditional test. Equality skips allfour old-window release instructions.',
                preconditions=['valid distinct stream/state allocations','no concurrent mutation','well-behaved allocator callback returning valid state storage'],
                originalInstructionsOrFlagsForced=False,sourceCreditGranted=0)


if __name__=='__main__':(WORK/'static-proof.json').write_text(json.dumps(prove(),indent=2)+'\n')
