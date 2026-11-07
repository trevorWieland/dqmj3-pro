import hashlib
import json
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_CALL, CS_GRP_JUMP
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC


ROOT = Path(__file__).resolve().parents[1]
ENTRIES = [0x7669a4, 0x767400, 0x767f88, 0x7689d8, 0x77700c, 0x77da78, 0x77e490]
MODULE = "d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126"


def pin(path):
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


def measure():
    target = ROOT / "evidence/lanes/tree-erase033/claim.json"
    if not target.exists():
        assert not (ROOT / "src/native/wave033/tree_erase.c").exists()
    census_path = ROOT / "evidence/lanes/native-inventory-completion/seeded/update-census.json"
    census = json.loads(census_path.read_text())
    image = (ROOT / "generated/update-content0/code.bin").read_bytes()
    assert hashlib.sha256(image).hexdigest() == MODULE
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows, bodies = [], []
    for entry in ENTRIES:
        function = next(row for row in census["functions"] if row["address"] == entry)
        assert function["mode"] == "ARM" and function["textBodyBytes"] == 1632
        assert function["ranges"] == [{"start": entry, "endExclusive": entry + 1632, "bytes": 1632}]
        body = image[entry - 0x100000:entry + 1632 - 0x100000]
        instructions = list(decoder.disasm(body, entry))
        assert len(instructions) == 408 and sum(row.size for row in instructions) == 1632
        branches = []
        for instruction in instructions:
            assert not instruction.group(CS_GRP_CALL)
            for operand in instruction.operands:
                assert not (operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC)
                if instruction.group(CS_GRP_JUMP) and operand.type == ARM_OP_IMM:
                    assert entry <= operand.imm < entry + 1632
                    branches.append({"pc": instruction.address, "target": operand.imm})
        rows.append({"entry": entry, "mode": "ARM", "instructionBytes": 1632, "instructions": 408,
            "ranges": function["ranges"], "sha256": hashlib.sha256(body).hexdigest(), "internalBranches": branches,
            "knownCensusCallers": [row["address"] for row in census["functions"] if entry in row.get("calledFunctionAddresses", [])]})
        bodies.append(body)
    assert all(body == bodies[0] for body in bodies)
    result = {"schemaVersion": 1, "status": "pre-source-measured-identical-tree-erase-candidates", "moduleSha256": MODULE,
        "frozenCensus": pin(census_path), "producer": pin(Path(__file__).resolve()), "functions": rows,
        "byteIdenticalExistingCanonicalBodies": 7, "totalPhysicalInstructionBytes": 11424,
        "noCallsPcRelativeDataOrExternalImmediateBranches": True,
        "algorithmHypothesis": "Ordered-tree iterator successor, unlink and red-black rebalance; field/return ABI still requires measurement",
        "algorithmReference": "https://github.com/llvm/llvm-project/blob/main/libcxx/include/__tree",
        "publicReferenceSourceCopied": False, "sourcePresentAtInitialMeasurement": False,
        "inventoryEntryIncreaseClaimed": 0, "sourceCreditGranted": 0, "originalPayloadsPublished": False}
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    return result


if __name__ == "__main__":
    print(json.dumps({"canonicalCandidates": 7, "candidateInstructionBytes": measure()["totalPhysicalInstructionBytes"], "newCredit": 0}))
