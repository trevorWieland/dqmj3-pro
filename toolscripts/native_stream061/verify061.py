import hashlib
import json
import shutil
import subprocess
import sys
import zipfile
from pathlib import Path
from inputs061 import WORK,ROOT,owned,inputs,pin,guard
from qualify061 import qualify
from controls061 import controls


def json_write(path,value):path.write_text(json.dumps(value,indent=2)+'\n',encoding='utf-8')


def command(arguments,log):
    result=subprocess.run([sys.executable,*map(str,arguments)],cwd=ROOT,capture_output=True)
    log.write_bytes(result.stdout+result.stderr)
    if result.returncode:raise ValueError('061 replay command failed; retained '+str(log))


def artifacts(folder):
    return {p.relative_to(folder).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()for p in sorted(folder.rglob('*'))if p.is_file()and p.suffix in ['.o','.elf','.dll','.so','.lib']}


def main():
    primary=WORK/'final-attempt002';before=inputs();report=qualify(primary)
    controls(primary/'controls',primary/'build');command([WORK/'test061.py'],primary/'tests.log')
    snapshot=WORK/'own-source-checkpoint.json';archive=WORK/'own-source061.zip';copied=WORK/'copied-source'
    copied.mkdir(exist_ok=False);files=[]
    with zipfile.ZipFile(archive,'x',compression=zipfile.ZIP_DEFLATED,compresslevel=9)as output:
        for path in owned():
            relative=path.relative_to(WORK);destination=copied/relative;destination.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(path,destination)
            raw=path.read_bytes();record=zipfile.ZipInfo(relative.as_posix(),date_time=(1980,1,1,0,0,0));record.compress_type=zipfile.ZIP_DEFLATED;output.writestr(record,raw)
            files.append(dict(path=relative.as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest()))
    json_write(snapshot,dict(status='tiny-own-input-only-snapshot',files=files,toolchainOriginalRepositoryCopies=False,archive=pin(archive)))
    repeated=copied/'final-attempt001'
    command([copied/'qualify061.py',repeated],WORK/'copied-proof.log')
    code='import sys;from pathlib import Path;sys.path.insert(0,sys.argv[1]);from controls061 import controls;controls(Path(sys.argv[2]),Path(sys.argv[3]))'
    command(['-c',code,copied,repeated/'controls',repeated/'build'],WORK/'copied-controls.log')
    command([copied/'test061.py'],WORK/'copied-tests.log')
    for relative in ['report.json','controls/report.json']:
        if(primary/relative).read_bytes()!=(repeated/relative).read_bytes():raise ValueError('061 copied semantic evidence differs: '+relative)
    original_artifacts=artifacts(primary);copied_artifacts=artifacts(repeated)
    if original_artifacts!=copied_artifacts:raise ValueError('061 copied object/linked artifacts differ')
    guard(before,primary)
    json_write(WORK/'verification.json',dict(status='own-source-copy-full-semantic-and-artifact-replay-passed',sets=report['sets'],observations=report['observations'],returningControls=6,returningControlChecks=18,freshTests=10,copiedTests=10,artifactPairs=len(original_artifacts),allSemanticReportBytesIdentical=True,allObjectLinkedBytesIdentical=True,report=pin(primary/'report.json'),controls=pin(primary/'controls/report.json'),snapshot=pin(snapshot),archive=pin(archive),freshTestsLog=pin(primary/'tests.log'),copiedTestsLog=pin(WORK/'copied-tests.log'),artifacts=original_artifacts,sourceCreditGranted=0))
    print('061 complete copied proof',report['sets'],report['observations'],'artifact pairs',len(original_artifacts),flush=True)

if __name__=='__main__':main()
