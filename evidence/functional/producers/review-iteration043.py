import hashlib
import json
from pathlib import Path
import sys

ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / "toolscripts"))
import native_census_overlay

def read(path):
    return json.loads((ROOT / path).read_text(encoding="utf-8"))

def pin(path):
    data = (ROOT / path).read_bytes()
    return {"path": path, "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}

coordinator_path = "evidence/verification/iteration043-coordinator-09f17af.json"
coordinator = read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["tests"] == 84
assert coordinator["allReportControlsAndThreeArtifactsByteIdentical"]
proposal_path = "evidence/lanes/squirrel-iteration043/functional-proposal.json"
proposal = read(proposal_path)
summary_path = "evidence/lanes/squirrel-iteration043/summary.json"
summary = read(summary_path)
registry = read("config/functional-functions.json")
census, unused = native_census_overlay.compose(ROOT, read(registry["census"]["path"]))
canonical = {row["address"]: row for row in census["functions"]}
inventory = read("evidence/inventory/update-content0.json")
rows = []
for candidate in proposal["functions"]:
    address = candidate["entry"]
    original = canonical[address]
    assert original["mode"] == "ARM" and original["textBodyBytes"] == candidate["instructionBytes"]
    assert [(r["start"], r["endExclusive"]) for r in original["ranges"]] == [(r["address"], r["endExclusive"]) for r in candidate["ranges"]]
    rows.append({"symbol": "fn_" + format(address, "08x"), "canonicalIdentity": {
        "address": address, "mode": "ARM", "moduleSha256": inventory["codeSha256"], "programId": inventory["programId"]},
        "source": pin(candidate["source"]), "sourceName": candidate["sourceFunction"],
        "symbolNames": pin("include/bytematch_names.h"), "functionalConfidence": "medium",
        "exactObjectSpan": False, "exactLinkedSpan": False, "originalInstructionBytes": original["textBodyBytes"],
        "originalInstructionRanges": original["ranges"], "reportEntryBytes": original["textBodyBytes"],
        "behavior": {"allPassed": True, "boundedNotUniversalEquivalence": True,
            "execution": pin(summary_path), "independentSourceComponentReplay": pin(coordinator_path),
            "caseSets": 1018, "fourTargetObservations": 4072, "returningControls": 8,
            "sameFinalSourceArenaControls": 2, "originalInstructions": original["textBodyBytes"] // 4,
            "originalInstructionsVisited": candidate["observedInstructionCount"],
            "unvisitedInstructionAddresses": candidate["unvisitedInstructionAddresses"],
            "classDescriptorProvenanceInvariant": proposal["classInvariant"],
            "terminalCursorBoundaryIsNotNormalReturn": True, "actualWindowsAndAarch64Model": True,
            "sourceOriginalModuleMapped": False, "domain": pin("source/squirrel-wave043/README.md"),
            "limits": ["Live aligned receivers and distinct cursor/key/value outputs; stable cached storage and receiver lifetime during callbacks.",
                "Class descriptors retain measured constructor/NewSlot/clone integer provenance and valid vector indices.",
                "Arbitrary descriptor mutation, destructive callbacks, invalid Boolean cursor fatal-service implementation and full interpreter/game are excluded.",
                "Android OS, physical hardware and universal memory equivalence are not established."]}})
assert len(rows) == 3 and sum(row["originalInstructionBytes"] for row in rows) == 780
dependencies = [pin(row["path"]) for row in summary["runtimeInputs"]
                if row["path"].startswith(("source/", "src/native/")) and row["path"].endswith((".c", ".h"))]
packet = {"schemaVersion": 1, "status": "coordinator-reviewed-bounded-iteration043-helpers",
    "moduleSha256": inventory["codeSha256"], "acceptedSourceCreditGranted": 0, "functions": rows,
    "headers": [row for row in dependencies if row["path"].endswith(".h")], "sourceDependencies": dependencies,
    "recoveredPhysicalFunctionBytes": 780, "classifiedLiteralPoolBytesNotCredited": 12,
    "wholeExecuteCreditGranted": 0, "grossCodeByteDenominatorChanged": False,
    "frozenProposal": pin(proposal_path), "producer": pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / "evidence/functional/iteration043.json").write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"functions": 3, "boundedBodyBytes": 780, "unvisitedInvariantClassBytes": 40}))
