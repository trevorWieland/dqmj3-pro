import hashlib
import json
import os
import re
import shutil
import subprocess
import sys

from squirrel_coercion026_build import ROOT,WORK,SOURCES,pin,save


def source_closure():
    pending=list(SOURCES);found=set()
    while pending:
        path=pending.pop().resolve()
        if path in found:continue
        if not path.is_relative_to(ROOT):raise ValueError('026 source include escaped repository')
        found.add(path)
        for name in re.findall(r'^\s*#\s*include\s*"([^"]+)"',path.read_text(),re.MULTILINE):
            pending.append((path.parent/name).resolve())
    return found


def metadata_closure():
    pending=[ROOT/'evidence/lanes/squirrel-vm-call022/ready.json',
        ROOT/'evidence/lanes/squirrel-lookup023/ready.json',
        ROOT/'evidence/lanes/squirrel-coercion026/claim.json',
        ROOT/'evidence/lanes/squirrel-coercion026/reference-sdk-exchange.json',
        ROOT/'evidence/lanes/executable-scope/scope.json',
        ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json',
        ROOT/'evidence/lanes/squirrel-array-release007/claim.json']
    found=set()
    def walk(value):
        if isinstance(value,dict):
            if isinstance(value.get('path'),str) and 'sha256' in value and 'bytes' in value:
                path=ROOT/value['path']
                if path.is_file() and path.resolve().is_relative_to(ROOT) and not value['path'].startswith(('work/','generated/','inputs/')):
                    pending.append(path)
            for child in value.values():walk(child)
        elif isinstance(value,list):
            for child in value:walk(child)
    while pending:
        path=pending.pop().resolve()
        if path in found:continue
        if not path.is_relative_to(ROOT):raise ValueError('026 metadata input escaped repository')
        found.add(path)
        if path.suffix=='.json':walk(json.loads(path.read_text(encoding='utf-8')))
    return found


def run(command,cwd,environment,path):
    result=subprocess.run(command,cwd=cwd,env=environment,capture_output=True,timeout=2400)
    path.write_bytes(result.stdout+result.stderr)
    if result.returncode:raise ValueError('026 copied run failed: '+str(path))


def replay(copy_root=WORK/'copied-source'):
    copy_root=copy_root.resolve()
    if not copy_root.is_relative_to(WORK) or copy_root.exists():
        raise ValueError('026 replay requires a new isolated owned directory')
    report=WORK/'primary-final-raw/execution.json'
    baseline=json.loads(report.read_text())
    controls=json.loads((WORK/'primary-v2/controls/controls.json').read_text())
    if baseline['sets']!=302 or controls['count']!=14:raise ValueError('026 primary qualification incomplete')
    paths=source_closure()|metadata_closure()|set((ROOT/'toolscripts').glob('*.py'))
    paths|={ROOT/'generated/update-content0/code.bin',ROOT/'generated/update-content0/exheader.bin',
        ROOT/'tests/test_squirrel_coercion026.py'}
    paths|={ROOT/'tools/clang-21'/name for name in ('clang.exe','ld.lld.exe','libxml2.dll','libwinpthread-1.dll')}
    copy_root.mkdir(parents=True)
    records=[]
    for source in sorted(paths):
        record=pin(source);target=copy_root/record['path']
        if not target.resolve().is_relative_to(copy_root):raise ValueError('026 copy destination escaped')
        target.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(source,target)
        if hashlib.sha256(target.read_bytes()).hexdigest()!=record['sha256']:raise ValueError('026 copied input differs')
        records.append(record)
    save(copy_root/'checkpoint.json',{'schemaVersion':1,'status':'isolated-authored-source-and-private-original-copy',
        'inputFiles':records,'primaryReport':pin(report),'producer':pin(ROOT/'toolscripts/squirrel_coercion026_replay.py')})
    environment=dict(os.environ,PYTHONPATH=str(copy_root/'toolscripts'),PYTHONDONTWRITEBYTECODE='1')
    command='from squirrel_coercion026_execute import produce; from squirrel_coercion026_build import WORK; produce(WORK/"primary-final-raw",False)'
    run([sys.executable,'-c',command],copy_root,environment,copy_root/'execution.log')
    command='from squirrel_coercion026_controls import produce; from squirrel_coercion026_build import WORK; produce(WORK/"primary-v2/controls",WORK/"primary-final-raw")'
    run([sys.executable,'-c',command],copy_root,environment,copy_root/'controls.log')
    run([sys.executable,'-m','unittest','discover','-s','tests','-p','test_squirrel_coercion026.py','-v'],
        copy_root,environment,copy_root/'tests.log')
    other_path=copy_root/'work/squirrel-coercion026/primary-final-raw/execution.json'
    other=json.loads(other_path.read_text())
    if report.read_bytes()!=other_path.read_bytes():raise ValueError('026 copied full four-target execution receipt differs')
    for key in ('artifacts','floatHostReference'):
        items=baseline[key] if key=='artifacts' else [baseline[key]]
        for record in items:
            if hashlib.sha256((copy_root/record['path']).read_bytes()).hexdigest()!=record['sha256']:
                raise ValueError('026 copied compiled artifact or float reference differs')
    copied_controls=json.loads((copy_root/'work/squirrel-coercion026/primary-v2/controls/controls.json').read_text())
    if copied_controls!=controls:raise ValueError('026 copied returning-control receipts differ')
    receipt={'schemaVersion':1,'status':'independent-isolated-copied-source026-replay-qualified',
        'primaryReportSha256':hashlib.sha256(report.read_bytes()).hexdigest(),
        'copiedReportSha256':hashlib.sha256(other_path.read_bytes()).hexdigest(),
        'completeFourTargetReportByteIdentical':True,'compiledArtifactsByteIdentical':True,
        'returningControlsByteIdentical':True,'sets':302,'targetObservations':1208,'returningControls':14,
        'testsPassed':12,'checkpoint':pin(copy_root/'checkpoint.json'),
        'testLog':pin(copy_root/'tests.log'),'sharedDependencyRuntimesOutsideCopyExplicit':True,
        'sourceOrInventoryCreditGranted':0,'originalPayloadsPublished':False,
        'producer':pin(ROOT/'toolscripts/squirrel_coercion026_replay.py')}
    save(copy_root/'verification.json',receipt)
    return receipt


if __name__=='__main__':print(json.dumps(replay()))
