import hashlib
import json
from pathlib import Path
import struct

from md5_stream029_build import ROOT, SOURCE, build, pin
from md5_stream029_oracle import Arm, Android, Windows


def produce(folder):
    folder = folder.resolve()
    text = SOURCE.read_text()
    reverse_before = "for (unsigned int index = 0; index < 16; ++index)\n        output[index] = state[index];"
    definitions = [
        ("wrong-initial-state", "0xefcdab89u", "0xefcdab88u", "init", 0, 0, 3072),
        ("omit-high-counter-carry", "if (context->low_bytes < bytes)", "if (0)", "update", 0xfffffff0, 32, 3072),
        ("wrong-padding-boundary", "used < 56u ?", "used < 57u ?", "final", 56, 0, 3072),
        ("wrong-bit-length-byte-order", "(length[index / 4] >> ((index & 3u) * 8u))", "(length[index / 4] >> ((3u - (index & 3u)) * 8u))", "final", 3, 0, 3072),
        ("backward-overlapping-output", reverse_before, "for (unsigned int index = 16; index-- > 0;)\n        output[index] = state[index];", "final", 3, 0, 137)]
    rows = []
    for name, before, after, operation, low, count, output in definitions:
        assert text.count(before) == 1
        current = folder / name
        current.mkdir(parents=True, exist_ok=True)
        source = current / "md5_stream.c"
        source.write_text(text.replace(before, after, 1), encoding="utf-8")
        products = {target: build(current / target, target, source) for target in ["arm", "windows", "android"]}
        memory = bytearray((i * 17 + 47) & 255 for i in range(4096))
        struct.pack_into("<6I", memory, 128, low, 0xffffffff if count else 0, 0x67452301, 0xefcdab89, 0x98badcfe, 0x10325476)
        memory[152:155] = b"abc"
        arguments = {"count": count, "output": output, "seed": 47}
        original = Arm().execute(operation, bytes(memory), **arguments)
        engines = [Arm(products["arm"][0]), Windows(products["windows"][0]), Android(products["android"][0])]
        results = [engine.execute(operation, bytes(memory), **arguments) for engine in engines]
        assert all(result != original for result in results)
        assert results[0] == results[1] == results[2]
        nonoverlap = None
        if name == "backward-overlapping-output":
            arguments["output"] = 3072
            baseline = Arm().execute(operation, bytes(memory), **arguments)
            assert all(engine.execute(operation, bytes(memory), **arguments) == baseline for engine in engines)
            nonoverlap = True
        rows.append({"name": name, "modifiedC": pin(source), "operation": operation,
            "originalArenaSha256": hashlib.sha256(original).hexdigest(), "wrongSourceArenaSha256": hashlib.sha256(results[0]).hexdigest(),
            "allThreeSourceBackendsReturnedNormallyAndRejected": True, "allMemoryAndSavedAbiGuardsPassed": True,
            "overlapControlStillMatchesNonoverlap": nonoverlap, "instructionRegisterObjectOrOriginalDataPatching": False,
            "artifacts": {key: value[1] for key, value in products.items()}})
        print("029 returning control " + name, flush=True)
    result = {"schemaVersion": 1, "status": "five-genuine-compiled-returning-md5-stream-controls", "controls": rows,
        "count": 5, "sourceAdmissionGranted": False, "producer": pin(Path(__file__).resolve())}
    (folder / "controls.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    return result


if __name__ == "__main__":
    print(produce(ROOT / "work/md5-stream029/returning-controls") ["count"])
