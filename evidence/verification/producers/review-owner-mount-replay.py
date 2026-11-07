import copy
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct


ROOT = Path.cwd()


def read(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data)}


def walk(value):
    if isinstance(value, dict):
        if {"path", "sha256", "bytes"} <= set(value):
            yield value
        for child in value.values():
            yield from walk(child)
    elif isinstance(value, list):
        for child in value:
            yield from walk(child)


raw_path = ROOT / "evidence/verification/owner-mount-isolated-4073a84.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(step["returncode"] == 0 for step in raw["steps"])
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "evidence/lanes/wave013-native/file/owner/mount/packet.json"
secondary_path = fresh / "evidence/lanes/wave013-native/file/owner/mount/packet.json"
a, b = read(primary_path), read(secondary_path)
primary_pins = {row["path"]: row for row in walk(a)}
secondary_pins = {row["path"]: row for row in walk(b)}
variants = []
for name in primary_pins.keys() & secondary_pins.keys():
    first, second = primary_pins[name], secondary_pins[name]
    if first["sha256"] == second["sha256"]:
        continue
    assert Path(name).suffix in [".obj", ".dll"]
    x, y = (ROOT / name).read_bytes(), (fresh / name).read_bytes()
    assert hashlib.sha256(x).hexdigest() == first["sha256"] and hashlib.sha256(y).hexdigest() == second["sha256"]
    assert len(x) == len(y) == first["bytes"] == second["bytes"]
    stamp = struct.unpack_from("<I", x, 0x3c)[0] + 8 if x[:2] == b"MZ" else 4
    differences = [index for index, (u, v) in enumerate(zip(x, y)) if u != v]
    assert set(differences) <= set(range(stamp, stamp + 4))
    variants.append({"path": name, "timestampOffset": stamp, "differenceOffsets": differences,
                     "primarySha256": first["sha256"], "independentSha256": second["sha256"]})
assert len(variants) == 15
variant_names = {row["path"] for row in variants}


def normalize(packet, base):
    def convert(value):
        if isinstance(value, dict):
            result = {key: convert(child) for key, child in value.items()}
            if result.get("path") in variant_names:
                result["sha256"] = "coff-timestamp-only-difference-verified-without-patching"
            return result
        if isinstance(value, list):
            return [convert(child) for child in value]
        if isinstance(value, str):
            return value.replace(str(base).replace("\\", "\\\\"), "<ROOT>").replace(str(base), "<ROOT>").replace(base.as_posix(), "<ROOT>")
        return value
    result = convert(copy.deepcopy(packet))
    result.pop("elapsedSeconds")
    for key in ["producers", "allValidationInputs"]:
        result[key] = [row for row in result[key] if row["path"] != "toolscripts/native_wave013_file_owner_mount_verify_v2.py"]
    return result


assert normalize(a, ROOT) == normalize(b, fresh)
primary_rows = ROOT / a["behavior"]["privateRawFixtureResults"]["path"]
secondary_rows = fresh / b["behavior"]["privateRawFixtureResults"]["path"]
assert read(primary_rows) == read(secondary_rows) and len(read(primary_rows)) == 23
assert a["behavior"]["flagAndReturnCrossProductCases"] == 32
assert not a["behavior"]["unhitNotProvenExcludedInstructions"] and a["behavior"]["originalInstructionsReached"] == 84
assert not a["behavior"]["wholeMemoryEquivalenceClaimed"] and a["behavior"]["gameOwnedTypedFieldsAndRawBuffersCompared"]
assert len(a["negativeControls"]) == 10
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 237 and len(compiled["results"]) == 653 and all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    if step["name"].endswith("-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [13, 15, 21, 22] and sum(counts) == 71
manifest_path = ROOT / "evidence/lanes/wave013-native/file/owner/mount/frozen-manifest.json"
assert pin(manifest_path)["sha256"] == "b58546e4d3ecf56e03d72dc898092f3237c5401890918e68147870a5ec11f418"
for row in read(manifest_path)["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/owner-mount-4073a84-replay.py"
shutil.copyfile(ROOT / "work/replay-owner-mount.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-actual-archive-service-component", "sourceRevision": raw["sourceRevision"],
    "completeUnmodifiedBatchReplayPassed": True, "rawReplay": pin(raw_path), "executedDriver": pin(driver),
    "primaryPacket": pin(primary_path), "independentPacket": pin(secondary_path), "frozenManifest": pin(manifest_path),
    "cases": 23, "flagsReturnCases": 32, "returningControls": 10, "originalInstructionsVisited": 84,
    "instructionBytesForFunctionalReview": 336, "tests": 71, "publicUnits": 237, "publicCompilations": 653,
    "allDurableNativeAndArmRowsIdentical": True, "allOtherExecutionMetadataExceptPathsTimingAndOneAuxiliaryVerifierPinIdentical": True,
    "windowsArtifactTimestampDifferences": variants, "windowsBinaryPatchingPerformed": False,
    "sdkWorkingCacheRepresentationDifferencesRemainExplicit": True, "wholeMemoryOrGameOrDeviceEquivalenceClaimed": False,
    "sourceAdmissionGranted": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/owner-mount-coordinator-4073a84.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 23, "tests": 71, "bytesForReview": 336, "timestampOnlyVariants": 15}))
