import hashlib,io,json,shutil,subprocess,sys,zipfile
from pathlib import Path
ROOT=Path.cwd()
REV="1b789261f5b4d912e00297fd43e56cd0d8e9d9ed"
DEST=ROOT/"work/clean-replay/script-create018-1b78926"
OUT=ROOT/"evidence/verification/script-create018-isolated-1b78926.json"
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
subprocess.run([sys.executable,'-c','import sys;from pathlib import Path;sys.path.insert(0,"toolscripts");import compile_sources;compile_sources.read_config(Path.cwd())'],cwd=DEST,check=True)
for dependency in json.loads((DEST/'evidence/lanes/squirrel-script-create018/execution.json').read_text())['frozenPrerequisites']:
 if digest(DEST/dependency['path'])!=dependency['sha256']:raise RuntimeError('Published prerequisite differs: '+dependency['path'])
 ready=json.loads((DEST/dependency['path']).read_text())
 records=ready.get('files',[])+ready.get('pins',[])+ready.get('ownedFiles',[])
 if 'header' in ready:records.append(ready['header'])
 for record in records:
  if digest(DEST/record['path'])!=record['sha256']:raise RuntimeError('Published frozen source differs: '+record['path'])

lock=json.loads((DEST/"tools.lock.json").read_text());project=json.loads((DEST/"project.json").read_text())
items=[r for r in lock["files"] if r["path"].startswith(("tools/clang-21/","tools/ctrtool-1.3.0/","tools/android-r30-minimal/","tools/objdiff-3.8.3/"))]
items += [{"path":"tools/wheels/"+r["filename"],"sha256":r["sha256"]} for r in lock["wheels"]]
items += [{"path":p,"sha256":project[k+"CiaSha256"]} for k,p in project["inputs"].items()]
receipt={"schemaVersion":1,"sourceRevision":REV,"sourceArchiveSha256":hashlib.sha256(archive).hexdigest(),"replayRoot":str(DEST),"replayDriverSha256":digest(__file__),"profile":"Actual018 closure controller with declared lookup/error/allocation services; no complete VM graph, OS/device or new source-credit assertion","freshEnvironment":True,"sharedGeneratedOrWorkInputs":False,"copiedToolAndWheelFiles":[],"steps":[],"status":"materializing","wholeGameExecution":False,"sourceAdmissionGranted":False}
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
commands.extend([('script-create-producer',['toolscripts/squirrel_script_create018.py']),('public-compilation',['toolscripts/compile_sources.py','--output','work/source-compile-ci/committed-replay'])])
for name in ['squirrel_script_create018','compile_sources','functional_report','native_census_overlay']:
 commands.append((name+'-tests',['-m','unittest','discover','-s','tests','-p','test_'+name+'.py','-v']))
commands += [('reporting-objects',['toolscripts/objdiff_objects.py']),('report-configuration',['toolscripts/configure_objdiff.py','--version','update-content0','--output','objdiff.json']),('stock-report',['tools/objdiff-3.8.3/objdiff-cli.exe','report','generate','-o','build/update-content0/report.raw.json']),('normalized-report',['toolscripts/finalize_objdiff_report.py','--input','build/update-content0/report.raw.json']),('functional-companion',['toolscripts/functional_report.py'])]
receipt["status"]="running";save(receipt)
for name,args in commands:
 log=DEST/(name+".log")
 with log.open("wb") as f:
  effective=[str(DEST/args[0]),*args[1:]] if args[0].endswith(".exe") else [str(python),*args]
  try:code=subprocess.run(effective,cwd=DEST,stdout=f,stderr=subprocess.STDOUT,timeout=1200).returncode
  except subprocess.TimeoutExpired:code=124
 receipt["steps"].append({"name":name,"argv":effective,"returncode":code,"log":log.relative_to(DEST).as_posix(),"logSha256":digest(log)})
 if name=="offline-dependencies" and code==0:
  for r in lock["nativeLibraries"]:
   if digest(DEST/r["path"])!=r["sha256"]:raise RuntimeError("Installed native library differs")
 print(name+": "+str(code),flush=True);save(receipt)
 if code:break
receipt["status"]="passed" if len(receipt["steps"])==len(commands) and all(r["returncode"]==0 for r in receipt["steps"]) else "failed"
if receipt["status"]=="passed":
 receipt['packets']=[{'path':p,'sha256':digest(DEST/p)} for p in ['evidence/lanes/squirrel-script-create018/execution.json','build/update-content0/report.json','build/update-content0/functional.json']]

save(receipt)
raise SystemExit(receipt["status"]!="passed")
