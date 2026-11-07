import hashlib
import json
from pathlib import Path
import re
import sys

ROOT=Path.cwd();sys.path.insert(0,str(ROOT/"toolscripts"))
from replay_packet_compare import PacketComparison

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path);data=path.read_bytes()
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":len(data),"sha256":hashlib.sha256(data).hexdigest()}

class ConstructorComparison(PacketComparison):
    def text(self,value,root):
        value=super().text(value,root)
        for before,after in [("evidence/lanes/squirrel-state040/constructors-v1","<PACKET>"),
            ("work/constructors040-independent/packet","<PACKET>"),
            ("work/squirrel-state040/constructor-stage-v2","<WORK>"),
            ("work/constructors040-independent","<WORK>")]:
            value=value.replace(before,after).replace(before.replace("/","\\"),after)
        return value

raw_path=ROOT/"evidence/verification/constructors040-isolated-6dca03b.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(row["returncode"]==0 for row in raw["steps"])
fresh=Path(raw["replayRoot"]);comparison=ConstructorComparison(ROOT,fresh)
primary_path=ROOT/"evidence/lanes/squirrel-state040/constructors-v1/packet.json"
secondary_path=fresh/"work/constructors040-independent/packet/packet.json"
primary,secondary=read(primary_path),read(secondary_path)
assert pin(primary_path)["sha256"]=="bb5aa24989d4bd5f97c3871323c5186ea79527a868d60e4bbd29e8feef74abfd"
comparison.compare(primary,secondary,"constructor-packet")
assert (ROOT/primary["caseRows"]["path"]).read_bytes()==(fresh/secondary["caseRows"]["path"]).read_bytes()
assert primary["candidateFunctions"]==2 and primary["candidateInstructionBytes"]==516 and primary["cases"]==32
assert sum(row["observedInstructionBytes"] for row in primary["functions"])==516
assert all(not row["unobservedInstructionAddresses"] for row in primary["functions"])
verification_path=ROOT/"evidence/lanes/squirrel-state040/constructors-v1/verification.json"
comparison.compare(read(verification_path),read(fresh/"work/constructors040-independent/packet/verification.json"),"constructor-verification")
assert read(verification_path)["returningControls"]==6 and read(verification_path)["returningControlPlatformExecutions"]==18
manifest_path=ROOT/"evidence/lanes/squirrel-state040/constructors-v1/frozen-manifest.json"
assert pin(manifest_path)["sha256"]=="403241421274e31159d9ef0bde20ab45f38906c1faf0212d85db54dba61b80a5"
for row in read(manifest_path)["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==379 and len(compiled["results"])==1069
assert all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text(encoding="utf-8");assert value.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[10,12,15,21,22] and sum(counts)==80
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-startup040-constructors",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,"rawReplay":pin(raw_path),
    "primaryPacket":pin(primary_path),"independentPacket":pin(secondary_path),"frozenManifest":pin(manifest_path),
    "all32CaseRowsByteIdentical":True,"allOtherFieldsCompared":True,"verifiedVariants":comparison.variants,
    "cases":32,"fourProfileObservations":128,"returningControlExecutions":18,"originalInstructionsVisited":129,
    "canonicalFunctionsForReview":2,"canonicalInstructionBytesForReview":516,"tests":80,
    "publicUnits":379,"publicCompilations":1069,"sourceAdmissionGranted":False,
    "provisionalStorageIdentifiersAreNotInitializedVectorRoleClaims":True,
    "sharedInitVmInitFactoryEngineCallbacksVmMethodsOrCompleteInterpreterQualified":False,
    "wholeMemorySdkSourceGameAndroidOsOrDeviceClaimed":False,
    "comparisonUtility":pin(ROOT/"toolscripts/replay_packet_compare.py"),"producer":pin(Path(__file__))}
(ROOT/"evidence/verification/constructors040-coordinator-6dca03b.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":32,"tests":80,"functionsForReview":2,"boundedBytesForReview":516}))
