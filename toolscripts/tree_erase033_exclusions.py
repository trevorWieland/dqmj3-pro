import hashlib
import json
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_REG_R0
from tree_erase033_measure import ROOT,ENTRIES,MODULE,pin


def measure():
    image=(ROOT/"generated/update-content0/code.bin").read_bytes()
    assert hashlib.sha256(image).hexdigest()==MODULE
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    rows=[]
    for entry in ENTRIES:
        body=image[entry-0x100000:entry+1632-0x100000]
        instructions=list(decoder.disasm(body,entry))
        assert all(ARM_REG_R0 not in instruction.regs_access()[1] for instruction in instructions)
        exclusions=[]
        for relative,side in [(0x4ac,"right"),(0x65c,"left")]:
            pc=entry+relative
            branch=next(row for row in instructions if row.address==pc)
            assert branch.mnemonic=="b" and branch.operands[0].imm==entry+0x418
            witnesses=[row for row in instructions if pc-108<=row.address<=pc]
            exclusions.append({"address":pc,"bytes":4,"side":side,
                "instructionSha256":hashlib.sha256(branch.bytes).hexdigest(),
                "witnesses":[{"pc":row.address,"mnemonic":row.mnemonic,"operands":row.op_str,"sha256":hashlib.sha256(row.bytes).hexdigest()} for row in witnesses],
                "invariant":"The near-child rotation requires a non-NULL pivot. Consistent parent/child links publish that pivot in the old sibling slot; reloading that slot cannot yield NULL. The subsequent unconditional NULL branch requires an inconsistent graph, outside the declared domain.",
                "claimedExecuted":False})
        rows.append({"entry":entry,"instructionBytes":1632,"r0Written":False,"callerFacingReturn":"original output iterator pointer","unvisitedInvariantExcludedBytes":8,"exclusions":exclusions})
    packet={"schemaVersion":1,"status":"bounded-parent-child-invariant-and-return-register-closure","moduleSha256":MODULE,
        "functions":rows,"excludedPhysicalBytes":56,"wholeFunctionEquivalenceClaimed":False,
        "corruptCyclesOrInconsistentParentsQualified":False,"producer":pin(__import__('pathlib').Path(__file__))}
    path=ROOT/"evidence/lanes/tree-erase033/abi-and-exclusions.json"
    path.write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
    return packet


if __name__=="__main__":print(json.dumps({"invariantExcludedBytes":measure()["excludedPhysicalBytes"]}))
