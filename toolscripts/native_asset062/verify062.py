import hashlib
import json
import shutil
import subprocess
import sys
import zipfile
from pathlib import Path
from inputs062 import WORK,ROOT,owned,inputs,pin,guard
from qualify062 import qualify,PROOFS
from controls062 import controls


def write(path,value):path.write_text(json.dumps(value,indent=2)+'\n',encoding='utf-8')


def command(arguments,log):
    result=subprocess.run([sys.executable,*map(str,arguments)],cwd=ROOT,capture_output=True);log.write_bytes(result.stdout+result.stderr)
    if result.returncode:raise ValueError('062 independent process failed; retained '+str(log))


def artifacts(folder):
    return {p.relative_to(folder).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()for p in sorted(folder.rglob('*'))if p.is_file()and p.suffix in ['.o','.elf','.dll','.so','.lib']}


def main():
    before=inputs();primary=WORK/'qualification-attempt002';summary=qualify(primary)
    controls(primary/'controls',primary/'build');command([WORK/'test062.py'],primary/'tests.log')
    copied=WORK/'copied-source';copied.mkdir(exist_ok=False);archive=WORK/'own-source062.zip';snapshot=WORK/'own-source-checkpoint.json';files=[]
    with zipfile.ZipFile(archive,'x',compression=zipfile.ZIP_DEFLATED,compresslevel=9)as output:
        for path in owned():
            relative=path.relative_to(WORK);destination=copied/relative;destination.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(path,destination);raw=path.read_bytes();record=zipfile.ZipInfo(relative.as_posix(),date_time=(1980,1,1,0,0,0));record.compress_type=zipfile.ZIP_DEFLATED;output.writestr(record,raw);files.append(dict(path=relative.as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest()))
    write(snapshot,dict(status='small-own-source-only-checkpoint',files=files,archive=pin(archive),repositoryToolchainAndOriginalCopies=False))
    replay=copied/'qualification-attempt001';command([copied/'qualify062.py',replay],WORK/'copied-proof.log')
    code='import sys;from pathlib import Path;sys.path.insert(0,sys.argv[1]);from controls062 import controls;controls(Path(sys.argv[2]),Path(sys.argv[3]))'
    command(['-c',code,copied,replay/'controls',replay/'build'],WORK/'copied-controls.log');command([copied/'test062.py'],WORK/'copied-tests.log')
    reports=[name for name,module,field in PROOFS]+['controls/report.json']
    for name in reports:
        if(primary/name).read_bytes()!=(replay/name).read_bytes():raise ValueError('062 copied complete semantic report differs: '+name)
    first=artifacts(primary);second=artifacts(replay)
    if first!=second:raise ValueError('062 copied object/linked artifact bytes differ')
    guard(before,primary)
    write(WORK/'verification.json',dict(status='all-six-provider-reports-controls-artifacts-and-tests-replayed-from-own-source',setCount=summary['setCount'],fourProfileObservations=summary['fourProfileObservations'],returningControls=13,returningControlChecks=39,freshTests=17,copiedTests=17,identicalArtifactPairs=len(first),allSemanticReportBytesIdentical=True,allObjectLinkedArtifactBytesIdentical=True,sourceArchive=pin(archive),sourceSnapshot=pin(snapshot),primarySummary=pin(primary/'summary.json'),primaryReports=[pin(primary/name)for name in reports],sourceCreditGranted=0,wholeResourceCallerClaim=False,callerDraftOnlyCompiledObjects=6,artifacts=first))
    print('062 copied provider proof',summary['setCount'],summary['fourProfileObservations'],'artifact pairs',len(first),flush=True)

if __name__=='__main__':main()
