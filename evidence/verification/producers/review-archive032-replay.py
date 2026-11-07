import hashlib
import json
from pathlib import Path
import re
import sys

ROOT=Path.cwd();sys.path.insert(0,str(ROOT/"toolscripts"))
from replay_packet_compare import PacketComparison

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path)
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":path.stat().st_size,"sha256":hashlib.sha256(path.read_bytes()).hexdigest()}

raw_path=ROOT/"evidence/verification/archive032-isolated-dea2bdf.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(row["returncode"]==0 for row in raw["steps"])
fresh=Path(raw["replayRoot"])
packet_path=Path("evidence/lanes/native-archive032/xbb/packet.json")
a,b=read(ROOT/packet_path),read(fresh/packet_path)
comparison=PacketComparison(ROOT,fresh);comparison.compare(a,b)
rows_path=Path("evidence/lanes/native-archive032/xbb/case-results.json")
assert (ROOT/rows_path).read_bytes()==(fresh/rows_path).read_bytes()
assert len(read(ROOT/rows_path))==451 and a["publicNativeTests"]==15
assert a["behavior"]["allQualifiedCasesPassed"] and not a["behavior"]["wholeMemoryEquivalenceClaimed"]
manifest_path=ROOT/"evidence/lanes/native-archive032/xbb/frozen-manifest.json"
manifest=read(manifest_path)
assert pin(manifest_path)["sha256"]=="4eaf28d553b9a576c82370f8de5ddfed9837dc055dc48b193bad550c1b481b78"
regenerated={"evidence/lanes/native-archive032/xbb/"+name for name in ["packet.json","verification.json"]}
for row in manifest["files"]:
    assert pin(ROOT/row["path"])==row
    if row["path"] not in regenerated:assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
comparison.compare(read(ROOT/"evidence/lanes/native-archive032/xbb/verification.json"),read(fresh/"evidence/lanes/native-archive032/xbb/verification.json"),"/verification")
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==311 and len(compiled["results"])==869 and all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text();assert value.strip().endswith("OK");counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[10,15,21,22] and sum(counts)==68
assert read(fresh/"evidence/lanes/native-archive032/xbb/verification.json")["testCount"]==15
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-XBB-source-family",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,"rawReplay":pin(raw_path),
    "primaryPacket":pin(ROOT/packet_path),"independentPacket":pin(fresh/packet_path),"frozenManifest":pin(manifest_path),
    "all451CaseRowsByteIdentical":True,"allOtherMetadataComparedWithVerifiedPathsTimingsAndBinaryTimestampExceptions":True,
    "artifactDifferences":comparison.variants,"frozenFiles":60,"cases":451,"normallyReturningControls":5,
    "originalSourceFlagsReturnPairs":32,"nativeTests":15,"integrationTests":68,"uniqueTests":83,
    "publicUnits":311,"publicCompilations":869,"canonicalFunctionsForReview":13,"canonicalInstructionBytesForReview":992,
    "supplementalCandidate36BytesStillUnadmitted":True,"wholeMemorySdkSourceGameOrDeviceClaimed":False,
    "sourceAdmissionGranted":False,"comparisonUtility":pin(ROOT/"toolscripts/replay_packet_compare.py"),"producer":pin(Path(__file__))}
(ROOT/"evidence/verification/archive032-coordinator-dea2bdf.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":451,"uniqueTests":83,"canonicalFunctionsForReview":13,"canonicalBytes":992}))
