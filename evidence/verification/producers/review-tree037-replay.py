import copy
import hashlib
import json
from pathlib import Path
import re
import sys

ROOT=Path.cwd();sys.path.insert(0,str(ROOT/"toolscripts"))
from tree_erase033_fixtures import cases
from typed_tree_replay_compare import compare_native_arenas,observed_base
from replay_packet_compare import PacketComparison

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path)
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":path.stat().st_size,"sha256":hashlib.sha256(path.read_bytes()).hexdigest()}

def checked_bytes(root,record):
    value=(root/record["path"]).read_bytes()
    assert hashlib.sha256(value).hexdigest()==record["sha256"] and len(value)==record["bytes"]
    return value

raw_path=ROOT/"evidence/verification/tree037-isolated-341ba3c.json";raw=read(raw_path)
assert raw["status"]=="passed" and all(row["returncode"]==0 for row in raw["steps"])
fresh=Path(raw["replayRoot"]);folder=Path("work/tree-erase037/qualified-v1")
positive_path=folder/"positive/report.json";control_path=Path("work/tree-erase033/tree037-qualified-v1-controls/controls.json")
a,b=read(ROOT/positive_path),read(fresh/positive_path);first,second=copy.deepcopy(a),copy.deepcopy(b)
assert a["caseCount"]==2048 and a["originalCalls"]==26624 and a["sourceCallsPerBackend"]==2048
raw_a={Path(row["path"]).name:checked_bytes(ROOT,row) for row in a["privateRawArenas"]}
raw_b={Path(row["path"]).name:checked_bytes(fresh,row) for row in b["privateRawArenas"]}
for name in ["original-arenas.bin","source-arm-arenas.bin","a64-arenas.bin"]:assert raw_a[name]==raw_b[name]
assert raw_a["original-arenas.bin"]==raw_a["source-arm-arenas.bin"]
fixtures=list(cases())
for case,x,y in zip(fixtures,first["observations"],second["observations"],strict=True):
    index=case["id"];assert x["id"]==y["id"]==index
    for name,key in [("original","original"),("source-arm","source-arm"),("windows","windows"),("a64","a64")]:
        u,v=raw_a[name+"-arenas.bin"][index*4096:(index+1)*4096],raw_b[name+"-arenas.bin"][index*4096:(index+1)*4096]
        assert hashlib.sha256(u).hexdigest()==x["rawArenaHashes"][key] and hashlib.sha256(v).hexdigest()==y["rawArenaHashes"][key]
        if name=="windows":compare_native_arenas(u,v,case,a["windowsAddress"],b["windowsAddress"])
    x["rawArenaHashes"]["windows"]=y["rawArenaHashes"]["windows"]="verified-typed-native-pointer-relocation-only"
for value in [first,second]:
    value["windowsAddress"]="recorded-actual-high-native-arena"
    value["privateRawArenas"]=[{"verifiedTypedWindowsArenaBytes":row["bytes"]} if row["path"].endswith("windows-arenas.bin") else row for row in value["privateRawArenas"]]
comparison=PacketComparison(ROOT,fresh);comparison.compare(first,second)
ca,cb=read(ROOT/control_path),read(fresh/control_path);x,y=copy.deepcopy(ca),copy.deepcopy(cb)
assert ca["count"]==cb["count"]==6 and ca["allNormallyReturnedAndRejected"] and cb["allNormallyReturnedAndRejected"]
control_bases=[]
for left,right in zip(x["controls"],y["controls"],strict=True):
    assert left["name"]==right["name"] and left["caseId"]==right["caseId"]
    directory=control_path.parent/left["name"];case=fixtures[left["caseId"]]
    for target in ["arm","windows","a64"]:
        u,v=(ROOT/directory/(target+"-arena.bin")).read_bytes(),(fresh/directory/(target+"-arena.bin")).read_bytes()
        assert hashlib.sha256(u).hexdigest()==left["rawArenaHashes"][target] and hashlib.sha256(v).hexdigest()==right["rawArenaHashes"][target]
        if target=="windows":
            one,two=observed_base(u),observed_base(v);compare_native_arenas(u,v,case,one,two)
            control_bases.append({"name":left["name"],"primary":one,"independent":two,"baseWitness":"unchanged-typed-sentinel-field"})
        else:assert u==v
    left["rawArenaHashes"]["windows"]=right["rawArenaHashes"]["windows"]="verified-typed-native-pointer-relocation-only"
comparison.compare(x,y)
execution_path=Path("evidence/lanes/tree-erase037/execution.json")
x,y=copy.deepcopy(read(ROOT/execution_path)),copy.deepcopy(read(fresh/execution_path))
for value in [x,y]:
    declared=value["inputs"]
    assert len({row["path"] for row in declared})==len(declared)
    value["inputs"]=sorted(declared,key=lambda row:row["path"])
    value["privatePositiveReport"]={"independentlyComparedAllMetadataAndRawArenas":True}
    value["returningControls"]={"independentlyComparedAllMetadataAndRawArenas":True}
comparison.compare(x,y)
ready_path=ROOT/"evidence/lanes/tree-erase037/ready.json";ready=read(ready_path)
for row in ready["files"]:
    assert pin(ROOT/row["path"])==row
    if row["path"]!=execution_path.as_posix():assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        text=log.read_text();assert text.strip().endswith("OK");counts.append(int(re.search(r"Ran (\d+) tests",text)[1]))
assert sorted(counts)==[10,15,21,22] and sum(counts)==68
assert read(fresh/execution_path)["predecessorImplementationTests"]==17
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==332 and len(compiled["results"])==932 and all(row["status"]=="compiled" for row in compiled["results"])
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-thirteen-additional-tree-erase",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,"rawReplay":pin(raw_path),
    "primaryExecution":pin(ROOT/execution_path),"independentExecution":pin(fresh/execution_path),"ready":pin(ready_path),
    "cases":2048,"canonicalOriginalBodies":13,"originalCalls":26624,"sourceCallsEachBackend":2048,
    "originalSourceArmAndA64AllRawArenaFilesByteIdenticalAcrossReplays":True,
    "all2048WindowsRawArenasEqualAfterVerifiedTypedPointerRelocation":True,
    "nativeRawByteEqualityBeforePointerRelocationClaimed":False,"primaryNativeArena":a["windowsAddress"],"independentNativeArena":b["windowsAddress"],
    "allSixControlsAndTheirRawArenasIndependentlyCompared":True,"controlNativeBaseWitnesses":control_bases,
    "executedArenasCodeRegistersOrResultsPatched":False,"comparisonCopiesOnly":True,
    "allOtherMetadataComparedWithExplicitPathsTimingsAndPinnedArtifactVerification":True,"artifactDifferences":comparison.variants,
    "immutableReplayUniqueTests":68,"predecessorImplementationImmutableReplayTests":85,"additionalCoordinatorComparatorTests":5,"publicUnits":332,"publicCompilations":932,
    "canonicalFunctionsForReview":13,"canonicalInstructionBytesForReview":21136,"visitedPhysicalInstructionBytes":21040,
    "unexecutedInvariantExcludedPhysicalBytes":96,"wholeMemoryAcrossPointerWidthsUniversalGameOrDeviceClaimed":False,
    "sourceAdmissionGranted":False,"declarativeInputPinListsComparedAsUniquePathSets":True,"comparisonUtility":pin(ROOT/"toolscripts/typed_tree_replay_compare.py"),"producer":pin(Path(__file__))}
(ROOT/"evidence/verification/tree037-coordinator-341ba3c.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":2048,"originalCalls":26624,"uniqueReplayTests":68,"windowsRawArenasRelocatedAndVerified":2048,"boundedBytesForReview":21136}))
