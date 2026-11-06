import hashlib
import json
import os
import shutil
import subprocess
import sys
import uuid
from pathlib import Path

ROOT=Path(__file__).resolve().parents[2]
BASE=ROOT/'work/squirrel-source-wave001'
EVIDENCE=ROOT/'evidence/lanes/squirrel-source-wave001'


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def run(argv,cwd,log):
    process=subprocess.run([str(x) for x in argv],cwd=cwd,capture_output=True,timeout=180)
    log.write_bytes(process.stdout+process.stderr)
    if process.returncode:
        raise RuntimeError('Replay failed: '+str(log))
    return {'argv':[str(x).replace(str(ROOT),'${ROOT}') for x in argv],
        'exitCode':process.returncode,'log':log.relative_to(ROOT).as_posix(),'logSha256':digest(log)}


def main():
    canonical=EVIDENCE/'report.json'
    report=json.loads(canonical.read_text())
    driver=ROOT/'toolscripts/squirrel_source_wave001.py'
    if digest(driver)!=report['script']['sha256']:
        raise RuntimeError('Build canonical report with current driver first')
    folder=BASE/('replay-'+uuid.uuid4().hex[:8])
    target=folder/'repo'
    target.mkdir(parents=True)
    if not target.resolve().is_relative_to(BASE.resolve()):
        raise RuntimeError('Replay root escaped owned work directory')
    shutil.copytree(ROOT/'source/squirrel-wave001',target/'source/squirrel-wave001')
    (target/'toolscripts').mkdir()
    shutil.copy2(driver,target/'toolscripts/squirrel_source_wave001.py')
    for item in ['src/native/wave005/oracle.py','src/native/wave005/fixture.c',
                 'src/native/wave005/vm_views.h','generated/update-content0/code.bin']:
        path=target/item
        path.parent.mkdir(parents=True,exist_ok=True)
        shutil.copy2(ROOT/item,path)
    for tool in report['tools']:
        path=target/tool['path']
        path.parent.mkdir(parents=True,exist_ok=True)
        os.link(ROOT/tool['path'],path)
    cwd=folder/'unrelated-current-directory'
    cwd.mkdir()
    receipts=[run([sys.executable,target/'toolscripts/squirrel_source_wave001.py','--publish'],cwd,folder/'build.log')]
    receipts.append(run([sys.executable,target/'source/squirrel-wave001/test_probe.py'],cwd,folder/'tests.log'))
    fresh_path=target/'evidence/lanes/squirrel-source-wave001/report.json'
    fresh=json.loads(fresh_path.read_text())
    source=ROOT/Path(report['hostExecutable']['path']).parent
    destination=target/Path(fresh['hostExecutable']['path']).parent
    artifacts=[]
    for path in sorted(source.iterdir()):
        if path.suffix not in ('.o','.obj','.elf','.exe'):
            continue
        candidate=destination/path.name
        expected=digest(path)
        if not candidate.is_file() or digest(candidate)!=expected:
            raise RuntimeError('Replay artifact differs: '+path.name)
        artifacts.append({'name':path.name,'sha256':expected,'bytes':path.stat().st_size})
    if len(fresh['functions'])!=5 or fresh['acceptedRecoveredSourceBytes']!=0:
        raise RuntimeError('Replay completeness/credit distinction changed')
    verification={'status':'passed','canonicalReportSha256':digest(canonical),
        'freshReportSha256':digest(fresh_path),'replayRoot':target.relative_to(ROOT).as_posix(),
        'independentOwnedInputCopy':True,'arbitraryCurrentDirectory':True,
        'matchingArtifactCount':len(artifacts),'artifacts':artifacts,'receipts':receipts,
        'tests':8,'sourceCredit':0,'gameForkIdentity':'unknown',
        'script':{'path':Path(__file__).resolve().relative_to(ROOT).as_posix(),'sha256':digest(Path(__file__))},
        'testScriptSha256':digest(ROOT/'source/squirrel-wave001/test_probe.py')}
    (EVIDENCE/'verification.json').write_text(json.dumps(verification,indent=2)+'\n')
    print(json.dumps({'status':'passed','matchingArtifacts':len(artifacts),'tests':8,'sourceCredit':0}))


if __name__=='__main__':
    main()
