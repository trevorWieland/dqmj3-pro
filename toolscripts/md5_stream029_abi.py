import hashlib
import json
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_REG_R0, ARM_REG_PC, ARM_CC_AL, ARM_CC_INVALID, ARM_INS_B
from md5_stream029_measure import ROOT, ENTRIES, MODULE, pin


def measure():
    image = (ROOT / "generated/update-content0/code.bin").read_bytes()
    assert hashlib.sha256(image).hexdigest() == MODULE
    census = json.loads((ROOT / "evidence/lanes/native-inventory-completion/seeded/update-census.json").read_text())
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    getters = {}
    for entry in [0x1b490c, 0x1c19bc]:
        first = next(decoder.disasm(image[entry - 0x100000:entry + 4 - 0x100000], entry))
        reads, writes = first.regs_access()
        assert ARM_REG_R0 not in reads and ARM_REG_R0 in writes and first.mnemonic == "ldr"
        getters[entry] = {"entry": entry, "firstInstructionReplacesR0BeforeUse": True,
            "firstInstructionSha256": hashlib.sha256(first.bytes).hexdigest(), "newSourceCredit": 0}
    rows = []
    for function in census["functions"]:
        if not set(ENTRIES) & set(function.get("calledFunctionAddresses", [])):
            continue
        instructions = {instruction.address: instruction for region in function["ranges"]
            for instruction in decoder.disasm(image[region["start"] - 0x100000:region["endExclusive"] - 0x100000], region["start"])}
        for pc, instruction in instructions.items():
            if instruction.mnemonic != "bl" or instruction.operands[0].type != ARM_OP_IMM or instruction.operands[0].imm not in ENTRIES:
                continue
            pending, visited, kills = [pc + 4], set(), []
            while pending:
                address = pending.pop()
                if address in visited:
                    continue
                assert address in instructions, "Caller branch left measured function before replacing R0"
                visited.add(address)
                current = instructions[address]
                reads, writes = current.regs_access()
                assert ARM_REG_R0 not in reads, "Caller consumes unspecified R0 at " + hex(address)
                if current.mnemonic == "bl":
                    assert current.operands[0].type == ARM_OP_IMM and current.operands[0].imm in getters
                    kills.append({"pc": address, "kind": "measured-zero-input-getter-replaces-r0", "callee": current.operands[0].imm})
                    continue
                if ARM_REG_R0 in writes and current.cc in [ARM_CC_AL, ARM_CC_INVALID]:
                    kills.append({"pc": address, "kind": "unconditional-r0-write", "instructionSha256": hashlib.sha256(current.bytes).hexdigest()})
                    continue
                if current.mnemonic.startswith("bx") or ARM_REG_PC in writes:
                    assert current.id == ARM_INS_B and current.operands[0].type == ARM_OP_IMM, (hex(address), current.mnemonic)
                    pending.append(current.operands[0].imm)
                    if current.cc not in [ARM_CC_AL, ARM_CC_INVALID]:
                        pending.append(address + 4)
                else:
                    pending.append(address + 4)
            assert kills and len(visited) < 512
            rows.append({"caller": function["address"], "callPc": pc, "target": instruction.operands[0].imm,
                "postCallR0NeverReadBeforeReplacement": True, "examinedPostCallInstructions": sorted(visited), "replacementWitnesses": kills})
    assert len(rows) == 14
    result = {"schemaVersion": 1, "status": "known-census-direct-callers-ignore-md5-return-registers", "moduleSha256": MODULE,
        "callSites": rows, "calleeReplacementWitnesses": list(getters.values()),
        "allKnownCensusDirectCallSites": 14, "callerFacingReturn": "void",
        "universalUnknownIndirectCallerOrSpecifiedR0ValueClaimed": False,
        "producer": pin(Path(__file__).resolve()), "originalPayloadsPublished": False, "sourceCreditGranted": 0}
    path = ROOT / "evidence/lanes/md5-stream029/abi.json"
    path.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    return result


if __name__ == "__main__":
    print(json.dumps({"knownDirectCallerSites": measure()["allKnownCensusDirectCallSites"], "returnContract": "void"}))
