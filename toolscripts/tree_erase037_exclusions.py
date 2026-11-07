import hashlib
import json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_REG_R0
from tree_erase033_measure import ROOT,MODULE,pin


def measure():
    claim=json.loads((ROOT/"evidence/lanes/tree-erase037/claim.json").read_text(encoding="utf-8"))
    image=(ROOT/"generated/update-content0/code.bin").read_bytes();assert hashlib.sha256(image).hexdigest()==MODULE
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;rows=[]
    for candidate in claim["functions"]:
        entry=candidate["entry"];size=candidate["instructionBytes"]
        instructions=list(decoder.disasm(image[entry-0x100000:entry+size-0x100000],entry))
        assert all(ARM_REG_R0 not in row.regs_access()[1] for row in instructions)
        excluded=[]
        if size==1628:
            for offset,side in [(0x4a8,"right"),(0x658,"left")]:
                pc=entry+offset;branch=next(row for row in instructions if row.address==pc)
                assert branch.mnemonic=="b" and branch.operands[0].imm==entry+0x414
                witnesses=[row for row in instructions if pc-108<=row.address<=pc]
                excluded.append({"address":pc,"bytes":4,"side":side,"instructionSha256":hashlib.sha256(branch.bytes).hexdigest(),
                    "witnesses":[{"pc":row.address,"mnemonic":row.mnemonic,"operands":row.op_str,"sha256":hashlib.sha256(row.bytes).hexdigest()} for row in witnesses],
                    "invariant":"The already-dereferenced near-child pivot is stored in the sibling slot by a rotation under coherent parent/child links. Reloading that slot cannot yield NULL.","claimedExecuted":False})
        else:assert size==1600 and entry==0x147274
        rows.append({"entry":entry,"instructionBytes":size,"r0Written":False,"exclusions":excluded})
    packet={"schemaVersion":1,"status":"measured-return-and-rotation-invariant-domain-closure","moduleSha256":MODULE,
        "functions":rows,"unexecutedInvariantExcludedBytes":96,"sourceCreditGranted":0,"producer":pin(Path(__file__))}
    (ROOT/"evidence/lanes/tree-erase037/abi-and-exclusions.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
    return packet


if __name__=="__main__":print(measure()["unexecutedInvariantExcludedBytes"])
