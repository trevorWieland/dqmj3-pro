import hashlib
import json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM,CS_GRP_CALL
from capstone.arm import ARM_OP_IMM,ARM_OP_MEM,ARM_REG_PC

ROOT=Path(__file__).resolve().parents[1]
MODULE="d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126"
ROLES={0x146994:"public-new-root-vm-factory",0x14c4c8:"shared-state-constructor",0x14a6a0:"shared-state-postconstruction-initialization",0x15467c:"vm-constructor",0x1544a0:"vm-postconstruction-initialization"}

def pin(path):
    data=path.read_bytes();return {"path":path.relative_to(ROOT).as_posix(),"bytes":len(data),"sha256":hashlib.sha256(data).hexdigest()}


def measure():
    target=ROOT/"evidence/lanes/squirrel-state040/claim.json"
    if not target.exists():assert not (ROOT/"source/squirrel-wave040").exists()
    census_path=ROOT/"evidence/lanes/native-inventory-completion/seeded/update-census.json"
    census=json.loads(census_path.read_text(encoding="utf-8"));by={row["address"]:row for row in census["functions"]}
    image=(ROOT/"generated/update-content0/code.bin").read_bytes();assert hashlib.sha256(image).hexdigest()==MODULE
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True;functions=[]
    for entry,role in ROLES.items():
        original=by[entry];assert original["mode"]=="ARM"
        instructions=[];pools={};calls=[]
        for region in original["ranges"]:
            raw=image[region["start"]-0x100000:region["endExclusive"]-0x100000]
            decoded=list(decoder.disasm(raw,region["start"]))
            assert len(decoded)*4==len(raw)
            instructions.append({**region,"sha256":hashlib.sha256(raw).hexdigest()})
            for instruction in decoded:
                if instruction.group(CS_GRP_CALL):calls.append({"pc":instruction.address,"target":instruction.operands[0].imm if instruction.operands[0].type==ARM_OP_IMM else None,"mnemonic":instruction.mnemonic})
                for operand in instruction.operands:
                    if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                        address=instruction.address+8+operand.mem.disp
                        width=8 if instruction.mnemonic.startswith("ldrd") else 4
                        value=image[address-0x100000:address-0x100000+width]
                        assert len(value)==width
                        pools[(address,width)]={"address":address,"bytes":width,"sha256":hashlib.sha256(value).hexdigest()}
        functions.append({"entry":entry,"mode":"ARM","role":role,"instructionBytes":original["textBodyBytes"],
            "instructionRanges":instructions,"literalReadWitnesses":list(pools.values()),"calls":calls,
            "knownCensusCallers":[row["address"] for row in census["functions"] if entry in row.get("calledFunctionAddresses",[])]})
    prefixes=[]
    for entry in [0x146590,0x2fece8]:
        first=next(decoder.disasm(image[entry-0x100000:entry+4-0x100000],entry))
        assert first.mnemonic=="mov" and first.op_str=="r0, r0" and by[entry]["textBodyBytes"]==4
        prefixes.append({"entry":entry,"bytes":4,"firstInstructionSha256":hashlib.sha256(first.bytes).hexdigest(),
            "returnsOrClosesAllocatorAssertDependency":False,"fallthroughOwnershipMustBeResolved":True})
    packet={"schemaVersion":1,"status":"pre-source-measured-root-vm-and-shared-state-initialization-family",
        "moduleSha256":MODULE,"census":pin(census_path),"functions":functions,"candidateInstructionBytes":8568,
        "factoryMeasuredAllocationRequests":{"sharedStateBytes":180,"vmBytes":168},"nonreturningPrefixes":prefixes,
        "knownSupportingDependencies":[0x159264,0x1688cc,0x19b728,0x19b998,0x19ba68,0x19e864,0x19e8c4,0x301f50],
        "partialFixtureStorageIsACompleteProductionStateClaimed":False,"sourcePresentAtInitialMeasurement":False,
        "sharedInitializationAndConstructorAreDistinct":True,"originalPayloadPublished":False,"sourceOrInventoryCreditGranted":0,"producer":pin(Path(__file__))}
    assert sum(row["instructionBytes"] for row in functions)==8568
    target.parent.mkdir(parents=True,exist_ok=True);target.write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
    return packet


if __name__=="__main__":print(json.dumps({"canonicalCandidates":5,"instructionBytes":measure()["candidateInstructionBytes"],"sourceCredit":0}))
