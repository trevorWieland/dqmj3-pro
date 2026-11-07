from pathlib import Path

from digest024_build import SOURCE, arm, windows, android, pin, save
from digest024_cases import cases, expected
from digest024_oracle import Arm, Windows, Android


VARIANTS = [
    ("reverse-byte-order", [("words[index] = (unsigned int)bytes[0] | ((unsigned int)bytes[1] << 8)\n            | ((unsigned int)bytes[2] << 16) | ((unsigned int)bytes[3] << 24);",
        "words[index] = (unsigned int)bytes[3] | ((unsigned int)bytes[2] << 8)\n            | ((unsigned int)bytes[1] << 16) | ((unsigned int)bytes[0] << 24);")]),
    ("wrong-round-rotation", [("return (value << distance) | (value >> (32u - distance));",
        "return (value << (distance + 1u)) | (value >> (31u - distance));")]),
    ("lose-initial-state-addition", [("state[0] += a;", "state[0] = a;")]),
    ("write-overlapping-input-before-copy", [("    unsigned int words[16];", "    unsigned int saved_word = state[0];\n    state[0] ^= 0xffffffffu;\n    unsigned int words[16];"),
        ("    unsigned int a = state[0],", "    state[0] = saved_word;\n    unsigned int a = state[0],")])]


def run(folder):
    selected = list(cases())
    records = []
    for name, replacements in VARIANTS:
        output = folder / name
        output.mkdir(parents=True, exist_ok=True)
        text = SOURCE.read_text()
        for before, after in replacements:
            assert text.count(before) == 1, name
            text = text.replace(before, after)
        source = output / "digest.c"
        source.write_text(text, encoding="utf-8")
        elf, arm_build = arm(output / "arm", source)
        library, windows_build = windows(output / "windows", source)
        model, android_build = android(output / "android", source)
        engines = [Arm(elf), Windows(library), Android(model)]
        row = selected[512 + 63 * 4] if name == "write-overlapping-input-before-copy" else selected[131]
        target = expected(row["memory"], row["state"], row["block"])
        assert Arm().execute(row["memory"], row["state"], row["block"], row["seed"]) == target
        outputs = [engines[0].execute(row["memory"], row["state"], row["block"], row["seed"]),
                   engines[1].execute(row["memory"], row["state"], row["block"]),
                   engines[2].execute(row["memory"], row["state"], row["block"], row["seed"])]
        assert all(value != target for value in outputs), name
        nonalias = None
        if name == "write-overlapping-input-before-copy":
            baseline = selected[131]
            value = engines[0].execute(baseline["memory"], baseline["state"], baseline["block"], baseline["seed"])
            assert value == expected(baseline["memory"], baseline["state"], baseline["block"])
            nonalias = True
        records.append({"name": name, "case": row["id"], "modifiedC": pin(source), "arm": arm_build,
            "windows": windows_build, "android": android_build, "allThreeSourceBackendsReturnedNormallyAndRejected": True,
            "memoryAndSavedAbiGuardsPassed": True, "nonoverlappingControlStillMatches": nonalias,
            "instructionObjectOrOriginalDataPatching": False})
    save(folder / "controls.json", records)
    return records
