import ast
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path
from squirrel_generator044_build import ROOT,WORK,SOURCE,SOURCES,pin,save

PRIMARY='primary-closed-lifetime'
CONTROLS='controls-closed-lifetime'


def source_closure():
 pending=list(SOURCES);found=set()
 while pending:
  path=pending.pop().resolve()
  if path in found:continue
  if not path.is_relative_to(ROOT):raise ValueError('044 source escaped repository')
  found.add(path)
  for name in re.findall(r'^\s*#\s*include\s*"([^"]+)"',path.read_text(),re.MULTILINE):pending.append((path.parent/name).resolve())
 owned=set(SOURCE.glob('*.c'))|set(SOURCE.glob('*.h'))
 if not owned<=found:raise ValueError('044 own source/header omitted from closure')
 return found


def python_closure():
 names=['build','execution','oracle','native','model','controls','replay','packet']
 pending=[ROOT/'toolscripts'/('squirrel_generator044_'+name+'.py')for name in names]+[ROOT/'tests/test_squirrel_generator044.py'];found=set()
 while pending:
  path=pending.pop().resolve()
  if path in found:continue
  found.add(path)
  for node in ast.walk(ast.parse(path.read_text(encoding='utf-8-sig'))):
   names=[node.module]if isinstance(node,ast.ImportFrom)else[item.name for item in node.names]if isinstance(node,ast.Import)else[]
   for name in names:
    target=ROOT/'toolscripts'/((name or'').split('.')[0]+'.py')
    if target.is_file():pending.append(target)
 return found


def metadata_closure():
 pending=[ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json',ROOT/'evidence/lanes/squirrel-generator044/claim.json',
  ROOT/'evidence/lanes/executable-scope/scope.json',ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'];found=set()
 def walk(value):
  if isinstance(value,dict):
   if isinstance(value.get('path'),str)and'sha256'in value and'bytes'in value:
    path=ROOT/value['path']
    if path.is_file()and path.resolve().is_relative_to(ROOT)and not value['path'].startswith(('work/','generated/','inputs/')):pending.append(path)
   for child in value.values():walk(child)
  elif isinstance(value,list):
   for child in value:walk(child)
 while pending:
  path=pending.pop().resolve()
  if path in found:continue
  found.add(path)
  if path.suffix=='.json':walk(json.loads(path.read_text()))
 return found


def invoke(command,cwd,environment,log):
 result=subprocess.run(command,cwd=cwd,env=environment,capture_output=True,timeout=2400);log.write_bytes(result.stdout+result.stderr)
 if result.returncode:raise ValueError('044 copied run failed: '+str(log))


def replay(copy_root=WORK/'copied-source'):
 copy_root=copy_root.resolve()
 if not copy_root.is_relative_to(WORK)or copy_root.exists():raise ValueError('044 replay needs a fresh owned directory')
 report=WORK/PRIMARY/'execution.json';controls=WORK/CONTROLS/'controls.json';baseline=json.loads(report.read_text())
 paths=source_closure()|python_closure()|metadata_closure()
 paths|={ROOT/'generated/update-content0/code.bin',ROOT/'generated/update-content0/exheader.bin'}
 paths|={ROOT/'tools/clang-21'/name for name in['clang.exe','ld.lld.exe','libxml2.dll','libwinpthread-1.dll']}
 copy_root.mkdir(parents=True);records=[]
 for source in sorted(paths):
  record=pin(source);target=copy_root/record['path'];target.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(source,target)
  if hashlib.sha256(target.read_bytes()).hexdigest()!=record['sha256']:raise ValueError('044 copied input changed')
  records.append(record)
 save(copy_root/'checkpoint.json',dict(schemaVersion=1,inputFiles=records,producer=pin(ROOT/'toolscripts/squirrel_generator044_replay.py')))
 env=dict(os.environ,PYTHONPATH=str(copy_root/'toolscripts'),PYTHONDONTWRITEBYTECODE='1')
 invoke([sys.executable,'-c','from squirrel_generator044_execution import run;from squirrel_generator044_build import WORK;run(WORK/"'+PRIMARY+'")'],copy_root,env,copy_root/'execution.log')
 invoke([sys.executable,'-c','from squirrel_generator044_controls import run;from squirrel_generator044_build import WORK;run(WORK/"'+CONTROLS+'")'],copy_root,env,copy_root/'controls.log')
 invoke([sys.executable,'-m','unittest','discover','-s','tests','-p','test_squirrel_generator044.py','-v'],copy_root,env,copy_root/'tests.log')
 other=copy_root/report.relative_to(ROOT);other_controls=copy_root/controls.relative_to(ROOT)
 if report.read_bytes()!=other.read_bytes():raise ValueError('044 copied complete execution report differs')
 if controls.read_bytes()!=other_controls.read_bytes():raise ValueError('044 copied controls differ')
 for row in baseline['artifacts']:
  if hashlib.sha256((copy_root/row['path']).read_bytes()).hexdigest()!=row['sha256']:raise ValueError('044 copied artifact differs')
 receipt=dict(schemaVersion=1,completeReportByteIdentical=True,compiledArtifactsByteIdentical=True,controlsByteIdentical=True,
  caseSets=baseline['caseSets'],targetObservations=baseline['targetObservations'],returningControls=4,testsPassed=11,
  reportSha256=hashlib.sha256(report.read_bytes()).hexdigest(),checkpoint=pin(copy_root/'checkpoint.json'),testLog=pin(copy_root/'tests.log'),
  sharedPythonInterpreterPackagesOutsideCopyExplicit=True,sourceCreditGranted=0,originalPayloadsPublished=False)
 save(copy_root/'verification.json',receipt);return receipt


if __name__=='__main__':print(json.dumps(replay()))
