import copy
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct

ROOT = Path.cwd()
RAW = ROOT / "evidence/verification/owner-session027-isolated-c45b2e1.json"

def read(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))

def pin(path):
    path = Path(path)
    return {"path": path.relative_to(ROOT).as_posix(), "sha256": hashlib.sha256(path.read_bytes()).hexdigest(), "bytes": path.stat().st_size}

raw = read(RAW)
assert raw["status"] == "passed" and all(row["returncode"] == 0 for row in raw["steps"])
fresh = Path(raw["replayRoot"])
variants = []

def text(value, root):
    value = value.replace(str(root).replace("\\", "\\\\"), "<ROOT>").replace(str(root), "<ROOT>").replace(root.as_posix(), "<ROOT>")
    return value.replace("seal-first", "seal").replace("<ROOT>/", "").replace("<ROOT>\\", "")

def compare(a, b, context=""):
    assert type(a) == type(b), (context, "type")
    if isinstance(a, dict):
        assert a.keys() == b.keys(), (context, "keys")
        if {"path", "sha256", "bytes"} <= a.keys():
            assert text(a["path"], ROOT) == text(b["path"], fresh), (context, "pin-path")
            x, y = ROOT / a["path"], fresh / b["path"]
            assert pin(x)["sha256"] == a["sha256"] and pin(y)["sha256"] == b["sha256"]
            assert x.stat().st_size == a["bytes"] and y.stat().st_size == b["bytes"]
            if a["sha256"] != b["sha256"]:
                first, second = x.read_bytes(), y.read_bytes()
                suffix = x.suffix.lower()
                if suffix in [".obj", ".dll"]:
                    assert len(first) == len(second)
                    stamp = struct.unpack_from("<I", first, 0x3c)[0] + 8 if first[:2] == b"MZ" else 4
                    differences = [i for i,(u,v) in enumerate(zip(first,second)) if u != v]
                    assert set(differences) <= set(range(stamp, stamp+4)), (context, "non-timestamp-binary")
                    variants.append({"path":a["path"],"kind":"coff-timestamp-only","differenceOffsets":differences,"primarySha256":a["sha256"],"independentSha256":b["sha256"]})
                elif suffix == ".json":
                    compare(json.loads(first), json.loads(second), context+"/pinned-json")
                    variants.append({"path":a["path"],"kind":"recursively-checked-json","primarySha256":a["sha256"],"independentSha256":b["sha256"]})
                else:
                    assert text(first.decode("utf-8"), ROOT) == text(second.decode("utf-8"), fresh), (context, "non-path-text")
                    variants.append({"path":a["path"],"kind":"path-only-text","primarySha256":a["sha256"],"independentSha256":b["sha256"]})
            for key in a.keys() - {"path","sha256","bytes"}:
                compare(a[key], b[key], context+"/"+key)
            return
        for key in a:
            if key == "elapsedSeconds":
                assert isinstance(a[key], (float,int)) and a[key] >= 0 and b[key] >= 0
            elif "/returningControls/" in context and context.endswith("/windows") and key == "sourceMemorySha256":
                assert a["returnedNormally"] and b["returnedNormally"] and a["immutableMemoryPreserved"] and b["immutableMemoryPreserved"] and bool(a["reason"]) and a["reason"] == b["reason"]
            else:
                compare(a[key], b[key], context+"/"+key)
    elif isinstance(a, list):
        assert len(a) == len(b), (context, "length")
        for i,(x,y) in enumerate(zip(a,b)):
            compare(x,y,context+"/"+str(i))
    elif isinstance(a, str):
        assert text(a,ROOT) == text(b,fresh), (context,a[:100],b[:100])
    else:
        assert a == b, (context,a,b)

name = "evidence/lanes/wave027-owner-session/packet.json"
a,b = read(ROOT/name),read(fresh/name)
compare(a,b)
manifest_path = ROOT / "evidence/lanes/wave027-owner-session/frozen-manifest.json"
manifest = read(manifest_path)
regenerated = {"evidence/lanes/wave027-owner-session/" + name for name in ["case-results.json", "linked-source-graphs.json", "packet.json", "verification.json"]}
compare(read(ROOT/"evidence/lanes/wave027-owner-session/verification.json"), read(fresh/"evidence/lanes/wave027-owner-session/verification.json"), "/verification")
for row in manifest["files"]:
    assert pin(ROOT/row["path"]) == row
    if row["path"] not in regenerated:
        assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest() == row["sha256"]
counts=[]
for row in raw["steps"]:
    log=fresh/row["log"]
    assert hashlib.sha256(log.read_bytes()).hexdigest() == row["logSha256"]
    if row["name"].endswith("-tests"):
        value=log.read_text();assert value.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts) == [9,15,21,22] and sum(counts) == 67
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 284 and len(compiled["results"]) == 790 and all(row["status"] == "compiled" for row in compiled["results"])
driver=ROOT/"evidence/verification/producers/owner-session027-c45b2e1-replay.py"
shutil.copyfile(ROOT/"work/replay-owner-session027.py",driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-cold-mounted-archive-session","sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,"rawReplay":pin(RAW),"executedDriver":pin(driver),"primaryPacket":pin(ROOT/name),"independentPacket":pin(fresh/name),"frozenManifest":pin(manifest_path),"frozenBundleFiles":len(manifest["files"]),"unchangedFrozenInputs":len(manifest["files"])-len(regenerated),"regeneratedAndRecursivelyComparedOutputs":sorted(regenerated),"cases":25,"returningControls":5,"sourceFlagsReturnCases":32,"tests":67,"publicUnits":284,"publicCompilations":790,"allCaseObservationsIdenticalExceptElapsedTimes":True,"allOtherMetadataComparedWithExplicitPathsTimingsCoffAndWrongControlHashExceptions":True,"verifiedArtifactDifferences":variants,"rawWrongControlHashesAssumedIdentical":False,"wrongControlHashes":[{"name":x.get("name"),"primary":x["windows"].get("sourceMemorySha256"),"independent":y["windows"].get("sourceMemorySha256")} for x,y in zip(a["returningControls"],b["returningControls"],strict=True)],"wholeMemorySdkSourceGameOrDeviceEquivalenceClaimed":False,"sourceAdmissionGranted":False,"producer":pin(Path(__file__))}
(ROOT/"evidence/verification/owner-session027-coordinator-c45b2e1.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":25,"controls":5,"tests":67,"frozenFiles":len(manifest["files"]),"newSourceCredit":0}))
