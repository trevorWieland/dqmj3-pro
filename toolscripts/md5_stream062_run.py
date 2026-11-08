import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ORIGINALS={"generated/update-content0/code.bin":"d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126",
    "evidence/lanes/native-inventory-completion/seeded/update-census.json":"338f478921eef3955e17f7e6b438a65f58ec9aa183b0012a9ab7dd872878dc55"}


def validate_completed(output,returncode,source_only):
    output=Path(output);gate=json.loads((output/"gate-receipt.json").read_text())
    if returncode or gate["status"]!="qualified-guarded-source-closure"or gate["rejected"]:
        raise ValueError("child did not complete an unrejected qualification, even if exit0")
    if gate["sourceOnly"]!=source_only:raise ValueError("child source scope differs")
    if source_only:
        if gate["originalReadsSucceeded"]or gate["originalConstructors"]or not gate["publicDataOnly"]:raise ValueError("public-data-only child touched original")
    else:
        for suffix,digest in ORIGINALS.items():
            matches=[row for row in gate["inputs"]if Path(row["path"]).as_posix().lower().endswith("/"+suffix.lower())]
            if len(matches)!=1 or matches[0]["sha256"]!=digest:raise ValueError("original input was not canonical: "+suffix)
        if gate["originalConstructors"]!=1:raise ValueError("unexpected original constructor count")
    behavior=json.loads((output/"behavior/report.json").read_text());tests=json.loads((output/"tests/report.json").read_text())
    controls=json.loads((output/"controls/report.json").read_text())
    if behavior["status"]!="qualified-full-arena-SDK-MD5-streams-no-admission"or tests["status"]!="passed"or tests["testsRun"]!=9:
        raise ValueError("incomplete behavior/test records")
    if controls["status"]!="all-seven-compiled-returning-controls-rejected-on-three-source-targets":raise ValueError("returning controls incomplete")
    return dict(status="qualified-parent-post-exit-validation",childReturncode=returncode,publicDataOnly=source_only,
        childReceiptSha256=hashlib.sha256((output/"gate-receipt.json").read_bytes()).hexdigest(),canonicalOriginalInputsVerified=not source_only,
        noPrivateRuntimeFixtures=source_only,sourceCreditGranted=0)


def main():
    p=argparse.ArgumentParser();p.add_argument("--output",type=Path,required=True);p.add_argument("--source-only","--public-data-only",dest="source_only",action="store_true")
    p.add_argument("--runner",type=Path,default=Path(__file__).with_name("md5_stream062")/"run062ag.py")
    p.add_argument("--boundary-control");p.add_argument("--validate-existing",action="store_true");args=p.parse_args()
    out=args.output.resolve()
    if args.validate_existing:
        result=validate_completed(out,0,args.source_only)
    else:
        if out.exists():raise ValueError("exclusive output already exists")
        root=next(p for p in Path(__file__).resolve().parents if (p/"AGENTS.md").is_file())
        if not args.source_only:
            for name,digest in ORIGINALS.items():
                if hashlib.sha256((root/name).read_bytes()).hexdigest()!=digest:raise ValueError("noncanonical original input: "+name)
        argv=[sys.executable,"-I","-B",str(args.runner.resolve()),"--output",str(out)]+(["--source-only"]if args.source_only else[])
        if args.boundary_control:argv += ["--boundary-control",args.boundary_control]
        process=subprocess.run(argv,cwd=root,capture_output=True,text=True,timeout=300)
        attempt=dict(argv=argv,returncode=process.returncode,stdout=process.stdout,stderr=process.stderr)
        (out/"parent-process.json").write_text(json.dumps(attempt,indent=2)+"\n")
        try:result=validate_completed(out,process.returncode,args.source_only)
        except BaseException as error:
            (out/"parent-validation.json").write_text(json.dumps(dict(status="rejected-after-child-exit",error=repr(error),childReturncode=process.returncode),indent=2)+"\n")
            raise
    (out/"parent-validation.json").write_text(json.dumps(result,indent=2)+"\n")
    print(result["status"],flush=True)

if __name__=="__main__":main()
