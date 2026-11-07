import json

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_INS_B

from native_stream056_measure import ROOT, WORK, FUNCTIONS, MODULE_SHA, sha, save


GUARDS = {
    0x733e28: [(0x7340a4,0x7340ac,0x7340b0,0x7340c4,0x734140),
              (0x7340d8,0x7340e0,0x7340e4,0x7340f8,0x7340f8),
              (0x73419c,0x7341a4,0x7341a8,0x7341bc,0x7341bc),
              (0x734210,0x734218,0x73421c,0x73422c,0x734264),
              (0x734234,0x734238,0x73423c,0x734264,0x7342a8),
              (0x734370,0x734388,0x73438c,0x7343b4,0x7343b4)],
    0x739d08: [(0x739f88,0x739f90,0x739f94,0x739fa8,0x73a024),
              (0x739fbc,0x739fc4,0x739fc8,0x739fdc,0x739fdc),
              (0x73a080,0x73a088,0x73a08c,0x73a0a0,0x73a0a0),
              (0x73a0f4,0x73a0fc,0x73a100,0x73a110,0x73a148),
              (0x73a118,0x73a11c,0x73a120,0x73a148,0x73a18c),
              (0x73a250,0x73a268,0x73a26c,0x73a294,0x73a294)],
}


def prove():
    image = (ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('056 static proof module changed')
    decoder = Cs(CS_ARCH_ARM,CS_MODE_ARM)
    decoder.detail = True
    result = []
    for entry,guards in GUARDS.items():
        instructions = {instruction.address:instruction for start,end in FUNCTIONS[entry]
                        for instruction in decoder.disasm(image[start-0x100000:end-0x100000],start)}
        rows=[]
        for compare,branch,start,end,target in guards:
            cmp_ins,branch_ins = instructions[compare],instructions[branch]
            if cmp_ins.mnemonic != 'cmn' or cmp_ins.operands[-1].type != ARM_OP_IMM \
                    or (cmp_ins.operands[-1].imm & 0xffffffff) != 0x80000001 or not cmp_ins.update_flags:
                raise ValueError('056 copy-count guard changed at '+hex(compare))
            if branch_ins.mnemonic != 'bls' or branch_ins.operands[0].imm != target:
                raise ValueError('056 guarded branch changed at '+hex(branch))
            if any(instructions[pc].update_flags for pc in range(compare+4,branch,4)):
                raise ValueError('056 intervening load/store changes CMN flags')
            if branch+4 != start:
                raise ValueError('056 guarded fallthrough extent changed')
            extra_entries = [instruction.address for instruction in instructions.values()
                             if instruction.id == ARM_INS_B and instruction.operands[0].type == ARM_OP_IMM
                             and start <= instruction.operands[0].imm < end
                             and not start <= instruction.address < end]
            if extra_entries:
                raise ValueError('056 guarded range has another direct branch entry')
            rows.append(dict(compare=compare,branch=branch,branchTarget=target,
                             start=start,endExclusive=end,instructionPcs=(end-start)//4,
                             compareConstant=0x80000001,admittedUnsignedCount=[0,258],
                             additionMaximum=0x80000103,carry=False,zero=False,blsTaken=True,
                             interveningInstructionsPreserveFlags=True,
                             noOtherDirectBranchEntries=True,
                             extentSha256=sha(image[start-0x100000:end-0x100000])))
        result.append(dict(entry=entry,unreachableInstructionPcs=sum(row['instructionPcs'] for row in rows),
                           ranges=rows,reason='Every window-piece count is bounded by the pending match, at most258; the direct-output remainder is at most255 after its firstthree bytes. CMN count,0x80000001 has C=0,Z=0, so BLS always skips each scalar alternative.'))
    return dict(schemaVersion=1,status='validated-domain-static-unreachable-copy-alternatives',
                moduleSha256=MODULE_SHA,functions=result,
                domain='RFC1951 valid decoded match lengths3..258; initialized backing; no fabricated huge table lengths or forced flags',
                notUniversalMalformedTableProof=True)


if __name__ == '__main__':
    save(WORK/'static-unreachable-proof.json',prove())
