import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from md5_stream029_measure import ROOT, MODULE, pin


def produce():
    image = (ROOT / "generated/update-content0/code.bin").read_bytes()
    assert hashlib.sha256(image).hexdigest() == MODULE
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    def instruction(address, mnemonic, operands):
        decoded = next(decoder.disasm(image[address - 0x100000:address + 4 - 0x100000], address))
        assert decoded.mnemonic == mnemonic and decoded.op_str == operands
        return {"pc": address, "sha256": hashlib.sha256(decoded.bytes).hexdigest()}
    witnesses = [instruction(0x1b2214, "push", "{r4, r5, r6, r7, r8, sb, lr}"),
        instruction(0x1b2220, "sub", "sp, sp, #0x14"), instruction(0x1b222c, "add", "r2, sp, #8"),
        instruction(0x1b2270, "tst", "r2, #3"), instruction(0x1b2274, "beq", "#0x1b2444"),
        instruction(0x1b2308, "add", "r0, r6, #0x3f"), instruction(0x1b2310, "bls", "#0x1b2334"),
        instruction(0x1b23a8, "add", "r0, r5, #0x3f"), instruction(0x1b23b0, "bhs", "#0x1b23d4")]
    assert struct.unpack_from("<I", image, 0x1b2498 - 0x100000)[0] == 0x7e1968 and image[0x7e1968 - 0x100000] == 1
    rows = []
    for remainder in range(64):
        padding = 56 - remainder if remainder < 56 else 120 - remainder
        available = 64 - remainder
        remaining = padding - available if padding >= available else 0
        assert 1 <= padding <= 64 and remaining < 64
        after_padding = (remainder + padding) % 64
        assert after_padding == 56 and 64 - after_padding == 8
        assert 8 + 63 >= 8
        rows.append({"initialRemainder": remainder, "paddingBytes": padding,
            "paddingRemainingAfterFirstBlock": remaining, "lengthBytes": 8, "lengthFirstBlockBytes": 8})
    ranges = [(0x1b2278, 0x1b22b0, "Readonly little-endian flag 1 and an 8-byte-aligned ABI stack force the measured aligned length encoding path."),
        (0x1b2314, 0x1b2334, "Every one of 64 possible initial remainders leaves fewer than 64 padding bytes after the first block; the multi-block padding loop is skipped."),
        (0x1b23b4, 0x1b23d4, "Padding always leaves remainder 56; the 8-byte length fills exactly one block, so its repeated-full-block loop is skipped.")]
    excluded = []
    for low, high, reason in ranges:
        data = image[low - 0x100000:high - 0x100000]
        assert sum(ins.size for ins in decoder.disasm(data, low)) == len(data)
        excluded.append({"start": low, "endExclusive": high, "bytes": high - low,
            "sha256": hashlib.sha256(data).hexdigest(), "reason": reason})
    assert sum(row["bytes"] for row in excluded) == 120
    result = {"schemaVersion": 1, "status": "measured-finalizer-unvisited-paths-excluded-by-explicit-abi-and-finite-length-geometry",
        "moduleSha256": MODULE, "entry": 0x1b2214, "originalReadonlyFlagValue": 1,
        "callerStackAlignment": 8, "prologueStackBytes": 48, "encodedLengthStackOffset": 8,
        "instructionWitnesses": witnesses, "all64RemainderCases": rows, "ranges": excluded,
        "excludedInstructionBytes": 120, "universalOtherFlagOrMisalignedStackClaimed": False,
        "sourceCreditGranted": 0, "originalPayloadsPublished": False, "producer": pin(Path(__file__).resolve())}
    path = ROOT / "evidence/lanes/md5-stream029/domain-exclusions.json"
    path.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    return result


if __name__ == "__main__":
    print(json.dumps({"explicitlyExcludedInstructionBytes": produce()["excludedInstructionBytes"], "initialRemainderCases": 64}))
