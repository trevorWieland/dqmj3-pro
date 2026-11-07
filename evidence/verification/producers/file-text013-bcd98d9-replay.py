import hashlib,io,json,shutil,subprocess,sys,zipfile
from pathlib import Path
ROOT=Path.cwd()
REV="bcd98d938d76e7d9dd00f648fab8062082b6ac87"
DEST=ROOT/"work/clean-replay/file-text013-bcd98d9"
OUT=ROOT/"evidence/verification/file-text013-isolated-bcd98d9.json"
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
lock=json.loads((DEST/"tools.lock.json").read_text());project=json.loads((DEST/"project.json").read_text())
items=[r for r in lock["files"] if r["path"].startswith(("tools/clang-21/","tools/ctrtool-1.3.0/","tools/android-r30-minimal/","tools/objdiff-3.8.3/"))]
items += [{"path":"tools/wheels/"+r["filename"],"sha256":r["sha256"]} for r in lock["wheels"]]
items += [{"path":p,"sha256":project[k+"CiaSha256"]} for k,p in project["inputs"].items()]
items.append({"path":"work/wave013-native/file-unicode/UnicodeData-17.0.0.txt","sha256":"2e1efc1dcb59c575eedf5ccae60f95229f706ee6d031835247d843c11d96470c"})
receipt={"schemaVersion":1,"sourceRevision":REV,"sourceArchiveSha256":hashlib.sha256(archive).hexdigest(),"replayRoot":str(DEST),"replayDriverSha256":digest(__file__),"profile":"file-text013 exhaustive-character and bounded-string source family; no SDK, Ghidra, Android OS/device or whole-repository environment assertion","freshEnvironment":True,"sharedGeneratedOrWorkInputs":False,"copiedToolAndWheelFiles":[],"steps":[],"status":"materializing","wholeGameExecution":False,"sourceAdmissionGranted":False}
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
commands.extend([('file-text-producer',['toolscripts/native_wave013_file_text.py','--work','work/wave013-native/outer-independent','--output','evidence/lanes/wave013-native/file/text/independent-packet.json']),('public-compilation',['toolscripts/compile_sources.py','--output','work/source-compile-ci/committed-replay'])])
for name in ['native_wave013_file_text','compile_sources','functional_report','native_census_overlay']:
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
 receipt['packets']=[{'path':p,'sha256':digest(DEST/p)} for p in ['evidence/lanes/wave013-native/file/text/independent-packet.json','build/update-content0/report.json','build/update-content0/functional.json']]

save(receipt)
raise SystemExit(receipt["status"]!="passed")
