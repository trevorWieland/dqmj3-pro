import argparse
import importlib.machinery
from pathlib import Path
import sys

W=Path(__file__).resolve().parent
ROOT=next(p for p in W.parents if (p/"AGENTS.md").is_file())
OLD=importlib.machinery.SourceFileLoader.get_code

def fresh(self,fullname):
    path=Path(self.path).absolute()
    if path.is_relative_to(W) or path.is_relative_to(ROOT/"toolscripts"):
        return compile(self.get_data(self.path),self.path,"exec",dont_inherit=True)
    return OLD(self,fullname)
importlib.machinery.SourceFileLoader.get_code=fresh
sys.path.insert(0,str(W))
from gates062ag import Gate


def main():
    p=argparse.ArgumentParser();p.add_argument("--output",type=Path,required=True)
    p.add_argument("--source-only","--public-data-only",dest="source_only",action="store_true")
    p.add_argument("--probe",action="store_true")
    p.add_argument("--boundary-control",choices=["open","stat","lstat","listdir","scandir","original","constructor","caught-exit0","forced-exit0","source-write"])
    args=p.parse_args();out=args.output.resolve();out.mkdir(parents=True,exist_ok=False)
    gate=Gate(ROOT,W,out,args.source_only)
    status="failed"
    try:
        if args.boundary_control:
            import os
            sibling=ROOT/"work/native-asset062-hash-task-v1/qualified-full-v1/behavior/report.json"
            try:
                action=args.boundary_control
                if action in ["open","caught-exit0","forced-exit0","source-write"]:sibling.read_bytes()
                elif action=="stat":os.stat(sibling)
                elif action=="lstat":os.lstat(sibling)
                elif action=="listdir":os.listdir(sibling.parent)
                elif action=="scandir":list(os.scandir(sibling.parent))
                elif action=="original":(ROOT/"generated/update-content0/code.bin").read_bytes()
                elif action=="source-write":
                    (W/"model062ag.py").open("a").close()
                elif action=="constructor":
                    from runtime062ag import Arm
                    Arm()
            except (OSError,ValueError):pass
            if args.boundary_control=="forced-exit0":os._exit(0)
            status="caught-boundary-attempt-with-child-exit0"
            return
        if args.probe:
            import qualify062ag
            from build062ag import build
            from runtime062ag import Arm,Windows,Android
            import model062ag
            for target in ["arm","windows","android"]:
                artifact=build(target,out/target)
                runtime=Windows(artifact) if target=="windows" else Android(artifact) if target=="android" else Arm(artifact)
                memory=model062ag.arena(runtime)
                if runtime.execute("init",memory)!=model062ag.operation(memory,runtime.layout,"init"):
                    raise ValueError("probe source initialization differs")
            status="read-isolation-probe-completed"
            if gate.rejected:raise ValueError("probe caught an input rejection")
            return
        import qualify062ag
        sys.argv=["qualify062ag.py","--output",str(out/"behavior")]+(["--source-only"] if args.source_only else [])
        qualify062ag.main()
        import controls062ag
        sys.argv=["controls062ag.py","--output",str(out/"controls"),"--baseline",str(out/"behavior/compiled")]
        controls062ag.main()
        import tests062ag
        sys.argv=["tests062ag.py","--output",str(out/"tests"),"--compiled",str(out/"behavior/compiled")]
        tests062ag.main()
        if gate.rejected:raise ValueError("caught input rejection invalidates whole scope")
        status="qualified-guarded-source-closure"
    finally:gate.receipt(status)

if __name__=="__main__":main()
