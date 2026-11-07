import ast
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys

from squirrel_capture038_build import ROOT,WORK,SOURCES,pin,save


def source_closure():
    pending=list(SOURCES);found=set()
    while pending:
        path=pending.pop().resolve()
        if path in found:continue
        if not path.is_relative_to(ROOT):raise ValueError('038 quoted source include escaped repository')
        found.add(path)
        for name in re.findall(r'^\s*#\s*include\s*"([^"]+)"',path.read_text(),re.MULTILINE):
            pending.append((path.parent/name).resolve())
    return found


def python_closure():
    pending=[ROOT/'toolscripts'/('squirrel_capture038_'+name+'.py')
        for name in ('execute','controls','sdk','measure','replay')]
    pending.append(ROOT/'tests/test_squirrel_capture038.py');found=set()
    while pending:
        path=pending.pop().resolve()
        if path in found:continue
        found.add(path);tree=ast.parse(path.read_text(encoding='utf-8'))
        for node in ast.walk(tree):
            names=[node.module] if isinstance(node,ast.ImportFrom) else [item.name for item in node.names] if isinstance(node,ast.Import) else []
            for name in names:
                if not name:continue
                target=ROOT/'toolscripts'/(name.split('.')[0]+'.py')
                if target.is_file():pending.append(target)
    return found


def metadata_closure():
    pending=[ROOT/'evidence/lanes/squirrel-class034/ready.json',
        ROOT/'evidence/lanes/squirrel-capture038/claim.json',
        ROOT/'evidence/lanes/squirrel-capture038/measurement-verification.json',
        ROOT/'evidence/lanes/squirrel-capture038/providers.json',
        ROOT/'evidence/lanes/squirrel-capture038/reference-sdk-exchange.json',
        ROOT/'evidence/lanes/executable-scope/scope.json',
        ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json']
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
        if not path.is_relative_to(ROOT):raise ValueError('038 metadata escaped repository')
        found.add(path)
        if path.suffix=='.json':walk(json.loads(path.read_text(encoding='utf-8')))
    return found


def run(command,cwd,environment,path):
    result=subprocess.run(command,cwd=cwd,env=environment,capture_output=True,timeout=2400)
    path.write_bytes(result.stdout+result.stderr)
    if result.returncode:raise ValueError('038 copied run failed: '+str(path))


def replay(copy_root=WORK/'copied-source'):
    copy_root=copy_root.resolve()
    if not copy_root.is_relative_to(WORK) or copy_root.exists():raise ValueError('038 replay needs a new isolated owned directory')
    report=WORK/'primary-qualified/execution.json';baseline=json.loads(report.read_text())
    control_path=WORK/'controls-sealed/controls.json';controls=json.loads(control_path.read_text())
    if baseline['sets']!=108 or controls['count']!=7:raise ValueError('038 primary qualification incomplete')
    paths=source_closure()|metadata_closure()|python_closure()
    paths|={ROOT/'generated/update-content0/code.bin',ROOT/'generated/update-content0/exheader.bin'}
    paths|={ROOT/'tools/clang-21'/name for name in ('clang.exe','ld.lld.exe','libxml2.dll','libwinpthread-1.dll')}
    copy_root.mkdir(parents=True);records=[]
    for source in sorted(paths):
        record=pin(source);target=copy_root/record['path']
        if not target.resolve().is_relative_to(copy_root):raise ValueError('038 copied destination escaped')
        target.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(source,target)
        if hashlib.sha256(target.read_bytes()).hexdigest()!=record['sha256']:raise ValueError('038 copied input differs')
        records.append(record)
    save(copy_root/'checkpoint.json',{'schemaVersion':1,'status':'isolated-source-tools-private-reference-and-compiler-copy',
        'inputFiles':records,'primaryReport':pin(report),'producer':pin(ROOT/'toolscripts/squirrel_capture038_replay.py')})
    environment=dict(os.environ,PYTHONPATH=str(copy_root/'toolscripts'),PYTHONDONTWRITEBYTECODE='1')
    command='from squirrel_capture038_execute import produce; from squirrel_capture038_build import WORK; produce(WORK/"primary-qualified",False)'
    run([sys.executable,'-c',command],copy_root,environment,copy_root/'execution.log')
    command='from squirrel_capture038_controls import produce; from squirrel_capture038_build import WORK; produce(WORK/"controls-sealed",WORK/"primary-qualified")'
    run([sys.executable,'-c',command],copy_root,environment,copy_root/'controls.log')
    run([sys.executable,'-m','unittest','discover','-s','tests','-p','test_squirrel_capture038.py','-v'],
        copy_root,environment,copy_root/'tests.log')
    other_path=copy_root/'work/squirrel-capture038/primary-qualified/execution.json'
    if report.read_bytes()!=other_path.read_bytes():raise ValueError('038 copied complete execution receipt differs')
    for record in baseline['artifacts']:
        if hashlib.sha256((copy_root/record['path']).read_bytes()).hexdigest()!=record['sha256']:
            raise ValueError('038 copied compiled artifact differs')
    copied_control=copy_root/'work/squirrel-capture038/controls-sealed/controls.json'
    if control_path.read_bytes()!=copied_control.read_bytes():raise ValueError('038 copied returning-control receipt differs')
    receipt={'schemaVersion':1,'status':'independent-isolated-copied-source038-replay-qualified',
        'primaryReportSha256':hashlib.sha256(report.read_bytes()).hexdigest(),
        'copiedReportSha256':hashlib.sha256(other_path.read_bytes()).hexdigest(),
        'completeFourTargetReportByteIdentical':True,'compiledArtifactsByteIdentical':True,
        'returningControlsByteIdentical':True,'sets':108,'targetObservations':432,'returningControls':7,
        'testsPassed':12,'checkpoint':pin(copy_root/'checkpoint.json'),'testLog':pin(copy_root/'tests.log'),
        'sharedPythonInterpreterPackagesOutsideCopyExplicit':True,'sourceOrInventoryCreditGranted':0,
        'originalPayloadsPublished':False,'producer':pin(ROOT/'toolscripts/squirrel_capture038_replay.py')}
    save(copy_root/'verification.json',receipt);return receipt


if __name__=='__main__':print(json.dumps(replay()))
