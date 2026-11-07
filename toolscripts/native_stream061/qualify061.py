import json
import sys
from pathlib import Path
from build061 import build
from prove061 import prove
from inputs061 import inputs,guard

WORK=Path(__file__).resolve().parent


def qualify(output):
    output.mkdir(exist_ok=False);before=inputs();builds=[]
    for target in ['arm','windows','a64']:builds.append(build(output/'build'/target,target)[1])
    (output/'build.json').write_text(json.dumps(builds,indent=2)+'\n',encoding='utf-8')
    report=prove(output/'build',output)
    guard(before,output)
    return report

if __name__=='__main__':qualify(Path(sys.argv[1])if len(sys.argv)>1 else WORK/'final-attempt001')
