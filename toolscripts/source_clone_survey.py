import argparse
import hashlib
import json
from pathlib import Path

import capstone
from capstone.arm import ARM_OP_IMM, ARM_REG_PC, ARM_INS_BL, ARM_INS_BLX
import native_census_overlay


ROOT=Path(__file__).resolve().parents[1]

def read(path):return json.loads(path.read_text(encoding="utf-8"))
def sha(data):return hashlib.sha256(data).hexdigest()

def position_independent(row,image):
    if row["mode"]!="ARM" or len(row["ranges"])!=1:
        return None
    part=row["ranges"][0];start,end=part["start"],part["endExclusive"]
    raw=image[start-0x100000:end-0x100000]
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM);decoder.detail=True
    instructions=list(decoder.disasm(raw,start))
    if sum(item.size for item in instructions)!=len(raw):return None
    for item in instructions:
        reads,unused=item.regs_access()
        if ARM_REG_PC in reads or (item.id in (ARM_INS_BL,ARM_INS_BLX) or item.mnemonic.startswith(("svc","swi"))):
            return None
        if item.mnemonic.startswith("b") and item.operands and item.operands[0].type==ARM_OP_IMM:
            if not start<=item.operands[0].imm<end:return None
    return sha(raw)

def survey(root):
    registry=read(root/"config/functional-functions.json")
    inventory=read(root/"evidence/inventory/update-content0.json")
    image=(root/"generated/update-content0/code.bin").read_bytes()
    if sha(image)!=inventory["codeSha256"]:raise ValueError("Original module identity differs")
    census,unused=native_census_overlay.compose(root,read(root/registry["census"]["path"]))
    rows={row["address"]:row for row in census["functions"]}
    accepted={};packets={}
    for entry in registry["functions"]:
        name=entry["packet"]["path"]
        if name not in packets:
            raw=(root/name).read_bytes()
            if sha(raw)!=entry["packet"]["sha256"]:raise ValueError("Functional packet identity differs")
            packets[name]=json.loads(raw)
        function=next(row for row in packets[name]["functions"] if row["symbol"]==entry["name"])
        address=function["canonicalIdentity"]["address"]
        accepted[address]={"symbol":entry["name"],"source":function["source"],"packet":entry["packet"]}
    candidates={}
    for address in accepted:
        digest=position_independent(rows[address],image)
        if digest:candidates.setdefault(digest,[]).append(address)
    groups={key:{"qualifiedSeeds":values,"unqualifiedCandidates":[]} for key,values in candidates.items()}
    for address,row in rows.items():
        if address in accepted:continue
        part=row["ranges"]
        if row["mode"]!="ARM" or len(part)!=1:continue
        digest=sha(image[part[0]["start"]-0x100000:part[0]["endExclusive"]-0x100000])
        if digest not in groups:continue
        if position_independent(row,image)!=digest:raise ValueError("Identical-body position independence differs")
        groups[digest]["unqualifiedCandidates"].append(address)
    result=[]
    for digest,group in groups.items():
        if not group["unqualifiedCandidates"]:continue
        seed=rows[group["qualifiedSeeds"][0]]
        result.append({"instructionBodySha256":digest,"instructionBytes":seed["textBodyBytes"],
            "qualifiedSeeds":[{"address":address,**accepted[address]} for address in sorted(group["qualifiedSeeds"])],
            "unqualifiedCandidates":[{"address":address,"mode":"ARM","ranges":rows[address]["ranges"]}
                for address in sorted(group["unqualifiedCandidates"])],
            "newSourceCreditGranted":0,"callerAbiOwnershipAndIndependentExecutionStillRequired":True})
    result.sort(key=lambda row:row["instructionBytes"]*len(row["unqualifiedCandidates"]),reverse=True)
    return {"schemaVersion":1,"kind":"candidate-only-identical-position-independent-source-body-survey",
        "moduleSha256":sha(image),"canonicalEntries":len(rows),"functionalSeeds":len(accepted),
        "candidateGroups":result,"candidateEntries":sum(len(row["unqualifiedCandidates"]) for row in result),
        "candidateInstructionBytes":sum(row["instructionBytes"]*len(row["unqualifiedCandidates"]) for row in result),
        "sourceCreditGranted":0,"inventoryChangesGranted":0,"nativeAbiOrWholeGameClaimed":False}

if __name__=="__main__":
    parser=argparse.ArgumentParser();parser.add_argument("--root",type=Path,default=ROOT)
    parser.add_argument("--output",type=Path,default=Path("work/source-clone-survey.json"));args=parser.parse_args()
    result=survey(args.root.resolve());output=args.output if args.output.is_absolute() else args.root/args.output
    output.parent.mkdir(parents=True,exist_ok=True);output.write_text(json.dumps(result,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({key:result[key] for key in ["canonicalEntries","functionalSeeds","candidateEntries","candidateInstructionBytes"]}))
