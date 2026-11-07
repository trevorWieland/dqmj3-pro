import json
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from digest024_build import ROOT, pin, save


if __name__ == "__main__":
    claim = json.loads((ROOT / "evidence/lanes/digest024/claim.json").read_text())
    image = (ROOT / "generated/update-content0/code.bin").read_bytes()
    census = json.loads((ROOT / claim["frozenCensus"]["path"]).read_text())
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    sites = []
    for address in claim["callerCandidates"]:
        function = next(row for row in census["functions"] if row["address"] == address)
        for part in function["ranges"]:
            code = list(decoder.disasm(image[part["start"] - 0x100000:part["endExclusive"] - 0x100000], part["start"]))
            for index, instruction in enumerate(code):
                if instruction.mnemonic == "bl" and instruction.op_str == "#0x1b2554":
                    following = code[index + 1]
                    assert following.mnemonic in ["add", "mov"] and following.op_str.startswith("r0, ")
                    assert "#8" in code[index - 1].op_str and code[index - 1].op_str.startswith("r0, ")
                    sites.append({"caller": address, "callPc": instruction.address,
                        "returnR0OverwrittenBeforeUseAt": following.address, "stateOffsetInCallerContext": 8})
    assert len(sites) == 6
    save(ROOT / "evidence/lanes/digest024/abi.json", {"schemaVersion": 1, "claim": pin(ROOT / "evidence/lanes/digest024/claim.json"),
        "producer": pin(Path(__file__).resolve()), "callSites": sites, "qualifiedReturnObservation": "void; six measured callers overwrite R0",
        "unobservedReturnValueUniversalClaim": False, "stateWordAlignment": 4, "readableBlockBytes": 64,
        "inputMayOverlapState": True, "originalReadonlyLoadFlagRemainsOne": True,
        "nullOrUnalignedStateOrConcurrentMutationQualified": False, "sourceCreditGranted": 0})
