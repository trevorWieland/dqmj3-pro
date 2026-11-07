import json
from pathlib import Path
from controller5_measure import WORK,pin


def create():
    stage=WORK/'replay-v1'
    if stage.exists():raise FileExistsError(stage)
    (stage/'source').mkdir(parents=True)
    copied=[]
    for path in sorted((WORK/'source').iterdir()):
        if path.suffix in ['.c','.h']:
            destination=stage/'source'/path.name;destination.write_bytes(path.read_bytes());copied.append(dict(source=pin(path),copy=pin(destination)))
    dependency=stage/'dependency-source'
    root=WORK.parents[2]/'src/native/wave055'
    names=['state055.c','state055.h','selector055.h','address055.h','controller-deps-v1/helpers055.c','controller-deps-v1/helpers055.h','controller-deps-v1/resource055.c','controller-deps-v1/resource055.h']
    for name in names:
        destination=dependency/name;destination.parent.mkdir(parents=True,exist_ok=True);destination.write_bytes((root/name).read_bytes());copied.append(dict(source=pin(root/name),copy=pin(destination)))
    for name in ['inputs.json','claim.json']:
        destination=stage/name;destination.write_bytes((WORK/name).read_bytes());copied.append(dict(source=pin(WORK/name),copy=pin(destination)))
    out=WORK/'source-copy.json';out.write_text(json.dumps(dict(schemaVersion=1,copied=copied,totalBytes=sum(row['copy']['bytes']for row in copied),toolRuntimeOrImageCopied=False,fullRepositoryCopied=False),indent=2)+'\n')
    print(json.dumps(dict(snapshot=pin(out),files=len(copied),bytes=sum(row['copy']['bytes']for row in copied))))


if __name__=='__main__':create()
