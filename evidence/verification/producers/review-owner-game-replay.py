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


raw_path = ROOT / "evidence/verification/owner-game-isolated-da119c5.json"
raw = read(raw_path)
assert raw["status"] == "failed" and [step["name"] for step in raw["steps"] if step["returncode"]] == ["compile_sources-tests"]
repair_path = ROOT / "evidence/verification/owner-game-scope-repair-da119c5.json"
repair = read(repair_path)
assert repair["status"] == "passed" and repair["allFrozenInputsUnchangedBeforeAndAfter"] and repair["oldSnapshotTestFileUnchanged"]
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "evidence/lanes/wave013-native/file/owner/game/packet.json"
secondary_path = fresh / "evidence/lanes/wave013-native/file/owner/game/packet.json"
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
assert len(variants) == 11
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
    result["numericCounter"].pop("elapsedSeconds")
    for control in result["negativeControls"]:
        assert control["windows"]["returnedNormally"] and control["windows"]["immutableMemoryPreserved"] and control["windows"]["rejected"]
        control["windows"]["sourceMemorySha256"] = "raw-native-wrong-control-arena-hash-not-assumed-replay-stable"
    return result


assert normalize(a, ROOT) == normalize(b, fresh)
primary_rows = ROOT / a["behavior"]["privateRawFixtureResults"]["path"]
secondary_rows = fresh / b["behavior"]["privateRawFixtureResults"]["path"]
assert read(primary_rows) == read(secondary_rows) and len(read(primary_rows)) == 28
assert a["behavior"]["flagAndReturnCrossProductCases"] == 32
assert not a["behavior"]["unhitNotProvenExcludedInstructions"] and a["behavior"]["originalInstructionsReached"] == 130
assert not a["behavior"]["wholeMemoryEquivalenceClaimed"] and a["behavior"]["gameOwnedTypedFieldsAndRawBuffersCompared"]
assert len(a["negativeControls"]) == 6
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 258 and len(compiled["results"]) == 714 and all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"] + repair["steps"]:
    if step["returncode"] == 0 and step["name"].endswith("-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [13, 15, 21, 22] and sum(counts) == 71
manifest_path = ROOT / "evidence/lanes/wave013-native/file/owner/game/frozen-manifest.json"
assert pin(manifest_path)["sha256"] == "847f8773de1578b6e88e0f73f1c75cb28add7be6697cebd2ba1491f16d0d8201"
for row in read(manifest_path)["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/owner-game-da119c5-replay.py"
shutil.copyfile(ROOT / "work/replay-owner-game.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
assert a["numericCounter"]["allPassed"] and a["numericCounter"]["allU16SingleUnitQueries"] == 65536
assert a["numericCounter"]["counterFlagsAndReturnCases"] == 32 and a["numericCounter"]["multiunitAndNullQueries"] == 138
assert sum(row["originalInstructionBytes"] for row in a["functions"]) == 520
assert a["exactCandidatesPendingSeparateAdmission"] == ["fn_00246e68"]
repair_driver = ROOT / "evidence/verification/producers/resume-owner-game-scope-v2b.py"
shutil.copyfile(ROOT / "work/resume-owner-game-scope-v2b.py", repair_driver)
assert pin(repair_driver)["sha256"] == repair["driverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-game-owner-and-exhaustive-u16-component", "sourceRevision": raw["sourceRevision"],
    "originalDriverPassed": False, "completeUnmodifiedBatchReplayPassed": False,
    "immutableRuntimeVerifierNativeTestsAndCompilationPassed": True,
    "externalExplicitFixtureScopeRepairAndRemainingIntegrationPassed": True,
    "rawReplay": pin(raw_path), "scopeRepair": pin(repair_path), "executedDriver": pin(driver), "repairDriver": pin(repair_driver),
    "primaryPacket": pin(primary_path), "independentPacket": pin(secondary_path), "frozenManifest": pin(manifest_path),
    "cases": 28, "flagsReturnCases": 32, "numericScalarCases": 65536, "numericMultiunitAndNullCases": 138,
    "numericFlagsReturnCases": 32, "returningControls": 6, "originalInstructionsVisited": 130,
    "instructionBytesForFunctionalReview": 508, "exactConstructorBytesPendingSeparateAdmission": 12,
    "tests": 71, "publicUnits": 258, "publicCompilations": 714,
    "all28DurableNativeAndArmCaseRowsIdentical": True,
    "allOtherMetadataIdenticalExceptPathsTwoTimingsCoffTimestampsAndRawWrongControlHashes": True,
    "windowsArtifactTimestampDifferences": variants,
    "rawWrongWindowsControlArenasAssumedIdentical": False,
    "rawWrongWindowsControlHashes": [{"name": x["name"], "primary": x["windows"]["sourceMemorySha256"],
        "independent": y["windows"]["sourceMemorySha256"], "sameSemanticRejectionAndGuards": True} for x, y in zip(a["negativeControls"], b["negativeControls"])],
    "rawWrongWindowsControlHashExplanation": "Diagnostics hash complete arenas containing real native addresses. Both immutable producers separately validate normal return, canaries, ownership and the exact same semantic rejection. No raw arena bytes were retained for a bytewise equality claim.",
    "windowsBinaryOrResultPatchingPerformed": False, "wholeMemoryGameColdMountedSessionOrDeviceEquivalenceClaimed": False,
    "sourceAdmissionGranted": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/owner-game-coordinator-da119c5.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 28, "numericQueries": 65536, "tests": 71, "boundedBytesForReview": 508}))
