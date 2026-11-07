import hashlib
import json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM,CS_GRP_CALL,CS_GRP_JUMP
from capstone.arm import ARM_OP_MEM,ARM_OP_IMM,ARM_REG_PC,ARM_REG_R0
from tree_erase033_measure import ROOT,ENTRIES,MODULE,pin


def measure():
    image=(ROOT/"generated/update-content0/code.bin").read_bytes();assert hashlib.sha256(image).hexdigest()==MODULE
    census_path=ROOT/"evidence/lanes/native-inventory-completion/seeded/update-census.json"
    census=json.loads(census_path.read_text(encoding="utf-8"));decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    rows=[]
    for function in census["functions"]:
        entry=function["address"];size=function["textBodyBytes"]
        if entry in ENTRIES or function["mode"]!="ARM" or not 1560<=size<=1700:continue
        if function["ranges"]!=[{"start":entry,"endExclusive":entry+size,"bytes":size}]:continue
        body=image[entry-0x100000:entry+size-0x100000];instructions=list(decoder.disasm(body,entry))
        if sum(row.size for row in instructions)!=size:continue
        if any(row.group(CS_GRP_CALL) or ARM_REG_R0 in row.regs_access()[1] for row in instructions):continue
        if any(operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC
            or row.group(CS_GRP_JUMP) and operand.type==ARM_OP_IMM and not entry<=operand.imm<entry+size
            for row in instructions for operand in row.operands):continue
        rows.append({"entry":entry,"mode":"ARM","instructionBytes":size,"ranges":function["ranges"],
            "sha256":hashlib.sha256(body).hexdigest(),"r0Written":False,"externalCallsOrImmediateBranches":False,
            "pcRelativeData":False,"knownCensusCallers":[row["address"] for row in census["functions"] if entry in row.get("calledFunctionAddresses",[])]})
    assert len(rows)==13 and sum(row["instructionBytes"] for row in rows)==21136
    packet={"schemaVersion":1,"status":"measured-candidates-for-frozen-typed-tree-erase-implementation",
        "moduleSha256":MODULE,"frozenCensus":pin(census_path),"functions":rows,"canonicalExistingCandidates":13,
        "candidatePhysicalInstructionBytes":21136,"reusedSourceReady":pin(ROOT/"evidence/lanes/tree-erase033/ready.json"),
        "sameTypedAbiAndSemanticsIsHypothesisUntilExecution":True,"newSourceWritten":False,
        "inventoryIncreaseOrSourceCreditGranted":0,"producer":pin(Path(__file__))}
    path=ROOT/"evidence/lanes/tree-erase037/claim.json";path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
    return packet


if __name__=="__main__":print(json.dumps({"candidates":13,"physicalBytes":measure()["candidatePhysicalInstructionBytes"],"sourceCredit":0}))
