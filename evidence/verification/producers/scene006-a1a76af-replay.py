import hashlib,io,json,shutil,subprocess,sys,zipfile
from pathlib import Path
ROOT=Path.cwd()
REV="a1a76affd057736530ddb1f8a4915db13c8b5bc1"
DEST=ROOT/"work/clean-replay/scene006-a1a76af"
OUT=ROOT/"evidence/verification/scene006-isolated-a1a76af.json"
def digest(path):
 with Path(path).open("rb") as f:return hashlib.file_digest(f,"sha256").hexdigest()
def save(value):
 OUT.parent.mkdir(parents=True,exist_ok=True);OUT.write_text(json.dumps(value,indent=2)+"\n")
if DEST.exists():raise RuntimeError("Fresh replay root already exists")
archive=subprocess.check_output(["git","archive","--format=zip",REV])
DEST.mkdir(parents=True)
with zipfile.ZipFile(io.BytesIO(archive)) as z:
 for row in z.infolist():
  if not (DEST/row.filename).resolve().is_relative_to(DEST) or row.external_attr>>16&0o170000==0o120000:raise RuntimeError("Unsafe source archive entry")
 z.extractall(DEST)
lock=json.loads((DEST/"tools.lock.json").read_text());project=json.loads((DEST/"project.json").read_text())
items=[r for r in lock["files"] if r["path"].startswith(("tools/clang-21/","tools/ctrtool-1.3.0/"))]
items += [{"path":"tools/wheels/"+r["filename"],"sha256":r["sha256"]} for r in lock["wheels"]]
items += [{"path":p,"sha256":project[k+"CiaSha256"]} for k,p in project["inputs"].items()]
for directory in ['tools/app-shell-sdk36','tools/app-shell-jdk25']:
 for p in sorted((ROOT/directory).rglob('*')):
  if p.is_file():items.append({'path':p.relative_to(ROOT).as_posix(),'sha256':digest(p),'qualification':'measured existing developer tool tree; upstream archive verification not asserted here'})
for r in lock['files']:
 if r['path'].startswith('tools/android-r30-minimal/'):items.append(r)
oracles=json.loads((DEST/'platform/engine-wave005/oracle-inputs.json').read_text())
for r in [oracles['numpy'],oracles['texture']]:
 relative='work/platform-engine-wave005/oracle/'+r['filename'];items.append({'path':relative,'sha256':r['sha256'],'qualification':'committed independent-reference wheel pin'})
receipt={"schemaVersion":1,"sourceRevision":REV,"sourceArchiveSha256":hashlib.sha256(archive).hexdigest(),"replayRoot":str(DEST),"replayDriverSha256":digest(__file__),"profile":"platform006 full measured scene; Android OS/device and full repository environment not asserted","freshEnvironment":True,"sharedGeneratedOrWorkInputs":False,"copiedToolAndWheelFiles":[],"steps":[],"status":"materializing","wholeGameExecution":False,"sourceAdmissionGranted":False,"androidDeviceProbeExecuted":False,"deviceProbeReason":"No operating-system/device claim; no ADB server is started or stopped","reportRedirection":"Producer OUT destinations redirected into ignored replay reports; source/execution/comparison logic unchanged","toolTreeQualification":"SDK/JDK copied from measured developer trees; individual hashes recorded, no new upstream archive claim"}
save(receipt)
for r in items:
 source=ROOT/r["path"];target=DEST/r["path"]
 if digest(source)!=r["sha256"]:raise RuntimeError("Changed pinned input: "+r["path"])
 target.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(source,target)
 if target.is_symlink() or digest(target)!=r["sha256"]:raise RuntimeError("Copy verification failed")
 receipt["copiedToolAndWheelFiles"].append({"path":r["path"],"sha256":r["sha256"]})
save(receipt)
subprocess.run([sys.executable,"-m","venv",str(DEST/"tools/python")],check=True,timeout=120)
python=DEST/"tools/python/Scripts/python.exe"
commands=[("offline-dependencies",["-m","pip","install","--no-index","--no-deps",*[str(DEST/"tools/wheels"/r["filename"]) for r in lock["wheels"]]]),("fresh-original-intake",["-c",'import sys;from pathlib import Path;sys.path.insert(0,"toolscripts");import ci_native_build as ci;ci.extract_inputs(Path.cwd(),Path("work/component-intake"))'])]
def run_module(module,function,folder):
 return ['-c',f'import sys;from pathlib import Path;sys.path.insert(0,"toolscripts");import {module} as p;p.OUT=Path("work/replay-reports/{folder}");p.OUT.mkdir(parents=True,exist_ok=True);p.{function}()']
commands += [('scene-build',['-c','import sys,json;from pathlib import Path;sys.path.insert(0,"toolscripts");import platform_engine_wave006 as p;p.inputs();Path("work/replay-reports/scene-build.json").parent.mkdir(parents=True,exist_ok=True);Path("work/replay-reports/scene-build.json").write_text(json.dumps({"windows":p.windows(),"android":p.android()},indent=2))']),('scene-measure',run_module('platform_engine_wave006_measure','main','scene')),('scene-transaction',['-c','import sys;from pathlib import Path;sys.path.insert(0,"toolscripts");import platform_engine_wave006_transaction as p;p.build.EVIDENCE=Path("work/replay-reports/scene");p.run()']),('scene-android-model',run_module('platform_engine_wave006_android_model','run','scene'))]
for name in ['platform_engine_wave006','compile_sources','functional_report','native_census_overlay']:
 commands.append((name+'-tests',['-m','unittest','discover','-s','tests','-p','test_'+name+'.py','-v']))
commands.append(('public-compilation',['toolscripts/compile_sources.py','--output','work/source-compile-ci/committed-replay']))
receipt["status"]="running";save(receipt)
for name,args in commands:
 log=DEST/(name+".log")
 with log.open("wb") as f:
  try:code=subprocess.run([str(python),*args],cwd=DEST,stdout=f,stderr=subprocess.STDOUT,timeout=1200).returncode
  except subprocess.TimeoutExpired:code=124
 receipt["steps"].append({"name":name,"argv":[str(python),*args],"returncode":code,"log":log.relative_to(DEST).as_posix(),"logSha256":digest(log)})
 if name=="offline-dependencies" and code==0:
  for r in lock["nativeLibraries"]:
   if digest(DEST/r["path"])!=r["sha256"]:raise RuntimeError("Installed native library differs")
 print(name+": "+str(code),flush=True);save(receipt)
 if code:break
receipt["status"]="passed" if len(receipt["steps"])==len(commands) and all(r["returncode"]==0 for r in receipt["steps"]) else "failed"
if receipt["status"]=="passed":
 receipt['packets']=[{'path':p.relative_to(DEST).as_posix(),'sha256':digest(p)} for p in sorted((DEST/'work/replay-reports').rglob('*.json'))]

save(receipt)
raise SystemExit(receipt["status"]!="passed")
