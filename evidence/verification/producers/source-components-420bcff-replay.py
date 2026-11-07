import hashlib,io,json,shutil,subprocess,sys,zipfile
from pathlib import Path
ROOT=Path.cwd()
REV="420bcffb20c2116e2ed8f7d581a9471d980d36c3"
DEST=ROOT/"work/clean-replay/source-components-420bcff"
OUT=ROOT/"evidence/verification/source-components-420bcff.json"
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
receipt={"schemaVersion":1,"sourceRevision":REV,"sourceArchiveSha256":hashlib.sha256(archive).hexdigest(),"replayRoot":str(DEST),"replayDriverSha256":digest(__file__),"profile":"expanded native009/010 and Squirrel002-005; full repository environment not asserted","freshEnvironment":True,"sharedGeneratedOrWorkInputs":False,"copiedToolAndWheelFiles":[],"steps":[],"status":"materializing","wholeGameExecution":False,"sourceAdmissionGranted":False}
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
commands=[("offline-dependencies",["-m","pip","install","--no-index","--no-deps",*[str(DEST/"tools/wheels"/r["filename"]) for r in lock["wheels"]]]),("fresh-original-intake",["-c",'import sys;from pathlib import Path;sys.path.insert(0,"toolscripts");import ci_native_build as ci;ci.extract_inputs(Path.cwd(),Path("work/component-intake"))']),("native009",["toolscripts/native_wave009.py","--work","work/wave009-native/independent","--output","evidence/lanes/wave009-native/independent-packet.json"]),("native010",["toolscripts/native_wave010.py","--work","work/wave010-native/independent","--output","evidence/lanes/wave010-native/independent-packet.json"]),("native009-tests",["-m","unittest","discover","-s","tests","-p","test_native_wave009.py","-v"]),("native010-tests",["-m","unittest","discover","-s","tests","-p","test_native_wave010.py","-v"])]
commands.extend([('squirrel002', ['toolscripts/squirrel_source_wave002.py', '--output', 'work/squirrel-source-wave002/committed-replay']), ('squirrel003', ['toolscripts/squirrel_source_wave003.py', '--output', 'work/squirrel-source-wave003/committed-replay']), ('squirrel004', ['toolscripts/squirrel_source_wave004.py', '--output', 'work/squirrel-source-wave004/committed-replay']), ('squirrel005', ['toolscripts/squirrel_source_wave005.py', '--output', 'work/squirrel-source-wave005/committed-replay']), ('squirrel002-tests', ['-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_squirrel_source_wave002.py', '-v']), ('squirrel003-tests', ['-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_squirrel_source_wave003.py', '-v']), ('squirrel004-tests', ['-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_squirrel_source_wave004.py', '-v']), ('squirrel005-tests', ['-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_squirrel_source_wave005.py', '-v']), ('public-compilation', ['toolscripts/compile_sources.py', '--output', 'work/source-compile-ci/committed-replay']), ('compile-tests', ['-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_compile_sources.py', '-v']), ('functional-tests', ['-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_functional_report.py', '-v'])])
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
 receipt["packets"]=[{"path":p,"sha256":digest(DEST/p)} for p in ["evidence/lanes/wave009-native/independent-packet.json","evidence/lanes/wave010-native/independent-packet.json"]]
save(receipt)
raise SystemExit(receipt["status"]!="passed")
