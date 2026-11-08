import json
from pathlib import Path
from controller6_measure import ROOT,WORK,pin
from controller6_source_audit import audit
from controller6_build import build


def prepare(stage=None):
    stage=Path(stage).resolve()if stage is not None else WORK/'replay-v1'
    assert stage.is_relative_to(WORK)and not stage.exists()
    source_root=stage/'source-root';roster=audit();rows=[]
    for row in roster['sourceFiles']+roster['headers']:
        original=ROOT/row['path'];assert pin(original)==row
        target=source_root/row['path'];target.parent.mkdir(parents=True,exist_ok=True)
        target.write_bytes(original.read_bytes())
        actual=pin(target);assert actual['bytes']==row['bytes']and actual['sha256']==row['sha256']
        rows.append(dict(original=row,copied=actual))
    result=dict(status='small-source-only-snapshot-raw-C-and-H-exact-copies',producer=pin(__file__),files=rows,
                sourceRoot=source_root.relative_to(ROOT).as_posix(),copiedBytes=sum(r['original']['bytes']for r in rows),
                repositoryToolsOrOriginalImagesCopied=False,
                replayKind='Recompile copied C/H, share original hash-guarded producers/compiler/private image masters; not a new full repository/tool copy',
                sourceCreditGranted=0)
    report=stage/'copy-inputs.json';report.write_text(json.dumps(result,indent=2)+'\n')
    build(stage=stage,source=source_root/'work/native-state055/dispatcher-v6/source',
          previous=source_root/'work/native-state055/controller-v5/source',dependency=source_root/'src/native/wave055')
    print(json.dumps(dict(inputs=pin(report),files=len(rows),bytes=result['copiedBytes'])))
    return result


if __name__=='__main__':
    import argparse
    parser=argparse.ArgumentParser();parser.add_argument('--stage');args=parser.parse_args()
    prepare(args.stage)
