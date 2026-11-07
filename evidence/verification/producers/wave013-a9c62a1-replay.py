import hashlib,io,json,shutil,subprocess,sys,zipfile
from pathlib import Path
ROOT=Path.cwd()
REV="a9c62a1dac34400a075a3413f97af058e8f8107c"
DEST=ROOT/"work/clean-replay/wave013-a9c62a1"
OUT=ROOT/"evidence/verification/wave013-isolated-a9c62a1.json"
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
items=[r for r in lock["files"] if r["path"].startswith(("tools/clang-21/","tools/ctrtool-1.3.0/","tools/android-r30-minimal/","tools/objdiff-3.8.3/"))]
items += [{"path":"tools/wheels/"+r["filename"],"sha256":r["sha256"]} for r in lock["wheels"]]
items += [{"path":p,"sha256":project[k+"CiaSha256"]} for k,p in project["inputs"].items()]
receipt={"schemaVersion":1,"sourceRevision":REV,"sourceArchiveSha256":hashlib.sha256(archive).hexdigest(),"replayRoot":str(DEST),"replayDriverSha256":digest(__file__),"profile":"wave013 control/tokenizer and metadata inventory; no SDK, Ghidra rerun, Android OS/device or whole-repository environment assertion","freshEnvironment":True,"sharedGeneratedOrWorkInputs":False,"copiedToolAndWheelFiles":[],"steps":[],"status":"materializing","wholeGameExecution":False,"sourceAdmissionGranted":False}
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
commands.extend([('control-producer',['toolscripts/native_wave013_control.py','--work','work/wave013-native/control-independent','--output','evidence/lanes/wave013-native/control-graph/independent-packet.json']),('tokenizer-producer',['toolscripts/native_wave013_lexer.py','--work','work/wave013-native/tokenizer-independent','--output','evidence/lanes/wave013-native/tokenizer/independent-packet.json']),('inventory-review',['toolscripts/review_native_overlay.py']),('public-compilation',['toolscripts/compile_sources.py','--output','work/source-compile-ci/committed-replay'])])
for name in ['native_wave013_control','native_wave013_lexer','native_census_overlay','compile_sources','functional_report']:
 commands.append((name+'-tests',['-m','unittest','discover','-s','tests','-p','test_'+name+'.py','-v']))
commands += [('reporting-objects',['toolscripts/objdiff_objects.py']),('report-configuration',['toolscripts/configure_objdiff.py','--version','update-content0','--output','objdiff.json']),('stock-report',['tools/objdiff-3.8.3/objdiff-cli.exe','report','generate','-o','build/update-content0/report.raw.json']),('normalized-report',['toolscripts/finalize_objdiff_report.py','--input','build/update-content0/report.raw.json']),('functional-companion',['toolscripts/functional_report.py'])]
receipt["status"]="running";save(receipt)
for name,args in commands:
 log=DEST/(name+".log")
 with log.open("wb") as f:
  try:code=subprocess.run([str(DEST/args[0]),*args[1:]] if args[0].endswith(".exe") else [str(python),*args],cwd=DEST,stdout=f,stderr=subprocess.STDOUT,timeout=1200).returncode
  except subprocess.TimeoutExpired:code=124
 receipt["steps"].append({"name":name,"argv":[str(python),*args],"returncode":code,"log":log.relative_to(DEST).as_posix(),"logSha256":digest(log)})
 if name=="offline-dependencies" and code==0:
  for r in lock["nativeLibraries"]:
   if digest(DEST/r["path"])!=r["sha256"]:raise RuntimeError("Installed native library differs")
 print(name+": "+str(code),flush=True);save(receipt)
 if code:break
receipt["status"]="passed" if len(receipt["steps"])==len(commands) and all(r["returncode"]==0 for r in receipt["steps"]) else "failed"
if receipt["status"]=="passed":
 receipt['packets']=[{'path':p,'sha256':digest(DEST/p)} for p in ['evidence/lanes/wave013-native/control-graph/independent-packet.json','evidence/lanes/wave013-native/tokenizer/independent-packet.json','build/update-content0/report.json','build/update-content0/functional.json']]

save(receipt)
raise SystemExit(receipt["status"]!="passed")
