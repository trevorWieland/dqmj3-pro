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

class GzipComparison(PacketComparison):
    def text(self,value,root):
        value=super().text(value,root)
        pairs=[("evidence/lanes/native-archive032/gzip","<PACKET>"),
            ("work/gzip036-independent/packet","<PACKET>"),
            ("work/native-archive032/gzip-seal-v2","<WORK>"),
            ("work/gzip036-independent","<WORK>")]
        for before,after in pairs:
            value=value.replace(before,after).replace(before.replace("/","\\"),after)
        return value

raw_path=ROOT/"evidence/verification/gzip036-isolated-ccb6f6f.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(row["returncode"]==0 for row in raw["steps"])
fresh=Path(raw["replayRoot"]);comparison=GzipComparison(ROOT,fresh)
primary_path=ROOT/"evidence/lanes/native-archive032/gzip/packet.json"
secondary_path=fresh/"work/gzip036-independent/packet/packet.json"
primary,secondary=read(primary_path),read(secondary_path)
assert pin(primary_path)["sha256"]=="494664dfdd7744e2248df69606f49557c83b6567965cd6882214799db67c1629"
comparison.compare(primary,secondary,"gzip-packet")
rows_primary=ROOT/primary["rows"]["path"];rows_secondary=fresh/secondary["rows"]["path"]
assert rows_primary.read_bytes()==rows_secondary.read_bytes()
assert len(read(rows_primary))==141
assert sum(row["instructionBytes"] for row in primary["functions"])==496
assert sum(row["originalInstructionsReached"] for row in primary["functions"])==124
assert all(not row["unhitInstructionAddresses"] for row in primary["functions"])
assert len(primary["controls"])==14 and all(len(row["profiles"])==3 for row in primary["controls"])
assert primary["existingGetterDependency"]["newSourceCreditGranted"]==0
assert not primary["underlyingSdkCreditGranted"] and not primary["behavior"]["wholeMemoryEquivalenceClaimed"]
verification_path=ROOT/"evidence/lanes/native-archive032/gzip/verification.json"
comparison.compare(read(verification_path),read(fresh/"work/gzip036-independent/packet/verification.json"),"gzip-verification")
manifest_path=ROOT/"evidence/lanes/native-archive032/gzip/frozen-manifest.json"
assert pin(manifest_path)["sha256"]=="efc55300ebb4b4878056e6d43d9297d692e8291070dc51c2c83f353b3e2e2f01"
for row in read(manifest_path)["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==355 and len(compiled["results"])==999
assert all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text(encoding="utf-8");assert value.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[4,4,10,15,21,21,22] and sum(counts)==97
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-gzip036-wrapper-family",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,"rawReplay":pin(raw_path),
    "primaryPacket":pin(primary_path),"independentPacket":pin(secondary_path),"frozenManifest":pin(manifest_path),
    "all141CaseRowsByteIdentical":True,"allOtherFieldsCompared":True,"verifiedVariants":comparison.variants,
    "cases":141,"sourceDependencyProfiles":2,"sourceExecutionPlatformsPerProfile":3,
    "returningControlExecutions":42,"originalInstructionsVisited":124,"canonicalFunctionsForReview":5,
    "canonicalInstructionBytesForReview":496,"existingGetterNewCredit":0,"underlyingSdkCredit":0,
    "uniqueTests":97,"publicUnits":355,"publicCompilations":999,"sourceAdmissionGranted":False,
    "wholeMemoryVmGameAndroidOsOrPhysicalDeviceClaimed":False,
    "comparisonUtility":pin(ROOT/"toolscripts/replay_packet_compare.py"),"producer":pin(Path(__file__))}
(ROOT/"evidence/verification/gzip036-coordinator-ccb6f6f.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":141,"uniqueTests":97,"functionsForReview":5,"boundedBytesForReview":496}))
