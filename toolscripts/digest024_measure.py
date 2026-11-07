import hashlib
import json
import math
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_CALL, CS_GRP_JUMP
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC


ROOT = Path(__file__).resolve().parents[1]
EVIDENCE = ROOT / "evidence/lanes/digest024"
ENTRY = 0x1b2554
MODULE = "d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126"


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


def measure():
    census_path = ROOT / "evidence/lanes/native-inventory-completion/seeded/update-census.json"
    census = json.loads(census_path.read_text())
    function = next(row for row in census["functions"] if row["address"] == ENTRY)
    image = (ROOT / "generated/update-content0/code.bin").read_bytes()
    assert hashlib.sha256(image).hexdigest() == MODULE
    assert function["textBodyBytes"] == 2408 and function["mode"] == "ARM"
    expected = [(0x1b2554, 0x1b2e94), (0x1b2f94, 0x1b2fbc)]
    assert [(r["start"], r["endExclusive"]) for r in function["ranges"]] == expected
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    ranges, literals, transfers = [], {}, []
    constants = [int(abs(math.sin(i + 1)) * (1 << 32)) for i in range(64)]
    assert constants[0] == 0xd76aa478 and constants[10] == 0xffff5bb1 and constants[-1] == 0xeb86d391
    matched = set()
    for low, high in expected:
        data = image[low - 0x100000:high - 0x100000]
        instructions = list(decoder.disasm(data, low))
        assert len(instructions) * 4 == high - low
        ranges.append({"start": low, "endExclusive": high, "bytes": high - low, "instructions": len(instructions), "sha256": hashlib.sha256(data).hexdigest()})
        for instruction in instructions:
            if instruction.group(CS_GRP_CALL):
                raise ValueError("Digest candidate unexpectedly calls an external function")
            if instruction.mnemonic == "bx":
                assert instruction.op_str == "lr" and instruction.address == 0x1b2e90
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    target = instruction.address + 8 + operand.mem.disp
                    assert 0x1b2e94 <= target < 0x1b2f94
                    raw = image[target - 0x100000:target - 0x100000 + 4]
                    value = struct.unpack("<I", raw)[0]
                    index = next((i + 1 for i, v in enumerate(constants) if value == v or (-value & 0xffffffff) == v), None)
                    if index is not None:
                        matched.add(index)
                    else:
                        assert target == 0x1b2e94 and value == 0x7e1968
                    literals[target] = {"address": target, "bytes": 4, "sha256": hashlib.sha256(raw).hexdigest(), "standardConstantIndex": index}
                if instruction.group(CS_GRP_JUMP) and operand.type == ARM_OP_IMM:
                    target = operand.imm
                    assert any(a <= target < b for a, b in expected)
                    transfers.append({"pc": instruction.address, "target": target})
    assert len(matched) == 63 and 11 not in matched and len(literals) == 64
    for address, immediate in [(0x1b2720, 0xa400), (0x1b2724, 0x4f)]:
        instruction = next(decoder.disasm(image[address - 0x100000:address - 0x100000 + 4], address))
        assert instruction.mnemonic == "sub" and instruction.operands[-1].imm == immediate
    assert (-(0xa400 + 0x4f) & 0xffffffff) == constants[10]
    flag = image[0x7e1968 - 0x100000:0x7e1968 - 0x100000 + 1]
    assert flag == b"\x01"
    record = {"schemaVersion": 1, "status": "pre-source-measured-digest-compression-candidate", "moduleSha256": MODULE,
        "programId": "0004000e001acb00", "version": "update-content0", "entry": ENTRY, "mode": "ARM",
        "frozenCensus": pin(census_path), "producer": pin(Path(__file__).resolve()), "instructionRanges": ranges,
        "instructionBytes": 2408, "instructions": 602, "literalPoolBytes": 256, "literalReaders": list(literals.values()),
        "internalTransfers": transfers, "standardAlgorithm": "RFC1321 MD5 single-block compression hypothesis",
        "standardAlgorithmUrl": "https://www.rfc-editor.org/rfc/rfc1321", "normalizedLiteralConstantMatches": 63,
        "remainingConstantImmediateDerivation": {"constantIndex": 11, "subtractImmediates": [0xa400, 0x4f], "pcs": [0x1b2720, 0x1b2724]},
        "unalignedCopyPath": {"start": 0x1b2584, "words": 16}, "alignedCopyPath": {"start": 0x1b2f94, "pairs": 8},
        "originalReadFlag": {"address": 0x7e1968, "bytes": 1, "sha256": hashlib.sha256(flag).hexdigest(), "value": 1, "willNotBePatched": True},
        "candidateAbi": {"arguments": ["four writable u32 state words", "64 readable bytes"], "return": "void candidate; caller validation required"},
        "callerCandidates": [row["address"] for row in census["functions"] if ENTRY in row.get("calledFunctionAddresses", [])],
        "sourcePresentAtInitialMeasurement": False, "originalPayloadsPublished": False, "inventoryAdmissionGranted": 0, "sourceCreditGranted": 0}
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    target = EVIDENCE / "claim.json"
    if not target.exists():
        assert not (ROOT / "src/native/wave024/digest.c").exists()
    target.write_text(json.dumps(record, indent=2) + "\n", encoding="utf-8")
    return record


if __name__ == "__main__":
    row = measure()
    print(json.dumps({"entry": hex(row["entry"]), "instructionBytes": row["instructionBytes"], "standardConstantMatches": 64, "sourceCreditGranted": 0}))
