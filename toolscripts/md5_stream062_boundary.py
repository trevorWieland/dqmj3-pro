import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys


def main():
    parser=argparse.ArgumentParser();parser.add_argument("--output",type=Path,required=True)
    parser.add_argument("--runner",type=Path,default=Path(__file__).with_name("md5_stream062")/"run062ag.py")
    args=parser.parse_args();root=next(p for p in Path(__file__).resolve().parents if (p/"AGENTS.md").is_file())
    out=args.output.resolve();out.mkdir(parents=True,exist_ok=False);rows=[]
    scopes=[("source-only",["open","stat","lstat","listdir","scandir","original","constructor","caught-exit0","forced-exit0","source-write"]),("full",["original","constructor"])]
    for mode,names in scopes:
        for name in names:
            output=out/(mode+"-"+name)
            argv=[sys.executable,"-I","-B",str(args.runner.resolve()),"--output",str(output),"--boundary-control",name]+(["--source-only"]if mode=="source-only"else[])
            result=subprocess.run(argv,cwd=root,capture_output=True,text=True,timeout=30)
            receipt=json.loads((output/"gate-receipt.json").read_text())
            expected=0 if name=="forced-exit0" else 86
            row=dict(mode=mode,name=name,argv=argv,returncode=result.returncode,rejectedByParent=True,
                persistedRejections=len(receipt["rejected"]),originalReadsSucceeded=receipt["originalReadsSucceeded"],
                originalConstructors=receipt["originalConstructors"],receiptSha256=hashlib.sha256((output/"gate-receipt.json").read_bytes()).hexdigest(),stdout=result.stdout,stderr=result.stderr)
            rows.append(row)
            if result.returncode!=expected or not receipt["rejected"]or receipt["originalReadsSucceeded"]or receipt["originalConstructors"]:
                (out/"report.json").write_text(json.dumps(dict(status="failed",rows=rows),indent=2)+"\n")
                raise ValueError((mode,name,result.returncode,result.stderr))
    (out/"report.json").write_text(json.dumps(dict(status="all12-boundary-attempts-rejected-including-persisted-forced-child-exit0",rows=rows),indent=2)+"\n")
    print("all12 boundaries rejected; forced exit0 retained and rejected by parent",flush=True)

if __name__=="__main__":main()
