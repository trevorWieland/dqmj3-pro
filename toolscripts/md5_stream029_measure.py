import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_CALL, CS_GRP_JUMP
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC


ROOT = Path(__file__).resolve().parents[1]
ENTRIES = {0x1b24a0: 44, 0x3019f0: 172, 0x1b2214: 644}
MODULE = "d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126"


def pin(path):
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


def measure():
    source = ROOT / "src/native/wave029/md5_stream.c"
    output = ROOT / "evidence/lanes/md5-stream029/claim.json"
    if not output.exists():
        assert not source.exists()
    census_path = ROOT / "evidence/lanes/native-inventory-completion/seeded/update-census.json"
    census = json.loads(census_path.read_text())
    image = (ROOT / "generated/update-content0/code.bin").read_bytes()
    assert hashlib.sha256(image).hexdigest() == MODULE
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows = []
    for entry, size in ENTRIES.items():
        function = next(row for row in census["functions"] if row["address"] == entry)
        assert function["textBodyBytes"] == size and function["mode"] == "ARM"
        assert function["ranges"] == [{"start": entry, "endExclusive": entry + size, "bytes": size}]
        data = image[entry - 0x100000:entry + size - 0x100000]
        instructions = list(decoder.disasm(data, entry))
        assert len(instructions) * 4 == size
        calls, literals = [], []
        for instruction in instructions:
            if instruction.group(CS_GRP_CALL):
                target = instruction.operands[0]
                assert target.type == ARM_OP_IMM and target.imm in [0x1b2554, 0x301a9c]
                calls.append({"pc": instruction.address, "target": target.imm})
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    address = instruction.address + 8 + operand.mem.disp
                    word = image[address - 0x100000:address + 4 - 0x100000]
                    literals.append({"reader": instruction.address, "address": address,
                        "bytes": 4, "sha256": hashlib.sha256(word).hexdigest()})
        rows.append({"entry": entry, "mode": "ARM", "instructionBytes": size,
            "instructionRanges": function["ranges"], "sha256": hashlib.sha256(data).hexdigest(),
            "directCalls": calls, "literalReaders": literals,
            "callers": [row["address"] for row in census["functions"] if entry in row.get("calledFunctionAddresses", [])]})
    assert struct.unpack_from("<II", image, 0x1b24cc - 0x100000) == (0x67452301, 0xefcdab89)
    assert image[0x7e1968 - 0x100000] == 1
    padding = image[0x7e196c - 0x100000:0x7e196c - 0x100000 + 64]
    assert padding == bytes([128]) + bytes(63)
    claim = {"schemaVersion": 1, "status": "measured-before-source-md5-streaming-candidate", "moduleSha256": MODULE,
        "frozenCensus": pin(census_path), "producer": pin(Path(__file__).resolve()), "functions": rows,
        "instructionBytesForReview": 860, "newCensusEntriesClaimed": 0,
        "algorithmHypothesis": "RFC1321 MD5 init, byte-counted update and finalization",
        "algorithmUrl": "https://www.rfc-editor.org/rfc/rfc1321",
        "contextHypothesis": {"bytes": 88, "lowByteCount": 0, "highByteCount": 4, "state": 8, "buffer": 24},
        "updateTailFallsThroughIntoCopyService": {"lastInstruction": 0x301a98, "continuation": 0x301a9c,
            "copyServiceNewCodeCredit": 0},
        "compressionDependency": {"entry": 0x1b2554, "newDuplicateCredit": 0,
            "independentQualification": pin(ROOT / "evidence/verification/digest024-coordinator-24f6b00.json")},
        "readonlyLoadFlag": {"address": 0x7e1968, "value": 1, "willNotBePatched": True},
        "standardPadding": {"address": 0x7e196c, "bytes": 64, "sha256": hashlib.sha256(padding).hexdigest()},
        "candidateAbi": ["init(context)", "update(context, readableInput, u32ByteCount)", "final(context, output16)"],
        "returnRegistersUnspecifiedPendingCallerValidation": True,
        "sourcePresentAtInitialMeasurement": False, "originalPayloadsPublished": False,
        "acceptedSourceCreditGranted": 0, "wholeApiOrGameClaimed": False}
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(claim, indent=2) + "\n", encoding="utf-8")
    return claim


if __name__ == "__main__":
    print(json.dumps({"instructionBytes": measure()["instructionBytesForReview"], "newCredit": 0}))
