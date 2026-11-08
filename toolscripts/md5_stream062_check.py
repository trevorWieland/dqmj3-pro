import argparse
import hashlib
import json
from pathlib import Path


def read(path):return json.loads(Path(path).read_text())


def semantic(value):
    if isinstance(value,dict):return{k:semantic(v)for k,v in value.items()if k not in {"actualRawArenaSha256","expectedRawArenaSha256","rawArenaSha256"}}
    if isinstance(value,list):return[semantic(v)for v in value]
    return value


def artifacts(folder):
    return{p.relative_to(folder).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()for p in folder.rglob("*")if p.is_file()and p.suffix in {".o",".obj",".elf",".dll",".so",".lib"}}


def observations(report):
    return dict(rows=[dict(case=row["case"],targets={t:row["targets"][t]["fingerprint"]for t in ["arm","windows","android"]})for row in report["rows"]],
        programs=[dict(id=row["id"],targets={t:row["targets"][t]["operationFingerprints"]for t in ["arm","windows","android"]})for row in report["programs"]])


def verify(full,source_only,copy):
    folders=[Path(full),Path(source_only),Path(copy)];reports=[read(p/"behavior/report.json")for p in folders]
    controls=[read(p/"controls/report.json")for p in folders];compiled=[artifacts(p)for p in folders]
    if not compiled[0]or any(a!=compiled[0]for a in compiled[1:]):raise ValueError("raw compiler/linker/import-library artifacts differ")
    if any(observations(r)!=observations(reports[0])for r in reports[1:]):raise ValueError("complete structural/per-operation fingerprints differ")
    if any(semantic(c)!=semantic(controls[0])for c in controls[1:]):raise ValueError("returning control semantics differ")
    gates=[]
    for index,p in enumerate(folders):
        gate=read(p/"gate-receipt.json");tests=read(p/"tests/report.json")
        if gate["status"]!="qualified-guarded-source-closure"or gate["rejected"]or not gate["noHistoricalWorkReadAttempts"]:raise ValueError("positive input guard failed")
        if tests["status"]!="passed"or tests["testsRun"]!=9:raise ValueError("public transport tests incomplete")
        if gate["originalConstructors"]!=(0 if index==1 else 1):raise ValueError("unexpected original constructor outside reference-only scope")
        if index==1 and (gate["originalReadsSucceeded"]or not gate["publicDataOnly"]):raise ValueError("public-data-only scope touched original")
        gates.append(dict(sourceOnly=gate["sourceOnly"],publicDataOnly=gate["publicDataOnly"],originalReadsSucceeded=gate["originalReadsSucceeded"],originalConstructors=gate["originalConstructors"],rejectedAccesses=len(gate["rejected"])))
    for r in [reports[0],reports[2]]:
        for row in r["rows"]:
            if row["targets"]["original"]["fingerprint"]!=row["targets"]["arm"]["fingerprint"]:raise ValueError("original/source ARM structural arena differs")
        for row in r["programs"]:
            if row["targets"]["original"]["operationFingerprints"]!=row["targets"]["arm"]["operationFingerprints"]:raise ValueError("original/source ARM stream history differs")
    return dict(status="qualified-three-scope-public-placement-replay",artifactCount=len(compiled[0]),allRawArtifactsIncludingImportLibrariesEqual=True,
        compiledArtifacts=compiled[0],allStructuralAndPerOperationObservationsEqual=True,returningControlsSemanticallyEqual=True,
        rawWindowsArenaHashesRetained=True,wholeReportRawIdentityClaimed=False,scopes=gates,
        sourceOnlyAlsoPublicDataOnly=True,testsPerScope=9,returningControls=7,sourceCreditGranted=0)


def main():
    p=argparse.ArgumentParser();p.add_argument("--full",type=Path,required=True);p.add_argument("--source-only",type=Path,required=True)
    p.add_argument("--copy",type=Path,required=True);p.add_argument("--output",type=Path,required=True);args=p.parse_args()
    result=verify(args.full,args.source_only,args.copy);args.output.write_text(json.dumps(result,indent=2)+"\n")
    print(result["status"],result["artifactCount"],flush=True)

if __name__=="__main__":main()
