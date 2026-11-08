import atexit,os

def final_guard_exit():
 active=globals().get('gate')
 if active is not None and active.rejected:
  with active.internal():
   path=OUT/'receipt.json'
   value=json.loads(path.read_text())if path.is_file()else{}
   value.update(status='failed',rejectedAttempts=list(active.rejected),lateGuardCheck=True)
   path.write_text(json.dumps(value,indent=2)+'\n')
  os._exit(3)
atexit.register(final_guard_exit)
import argparse,hashlib,importlib,importlib.machinery,json,os,sys,time,unittest
from pathlib import Path
P=argparse.ArgumentParser();P.add_argument('--root',type=Path,required=True);P.add_argument('--inputs',type=Path,required=True);P.add_argument('--manifest',type=Path,required=True);P.add_argument('--out',type=Path,required=True);P.add_argument('--source-only',action='store_true');P.add_argument('--no-controls',action='store_true');P.add_argument('--guard-control');A=P.parse_args();ROOT=A.root.resolve();OUT=A.out.resolve();INPUTS=A.inputs.resolve();MANIFEST=A.manifest.resolve()
if OUT.exists():raise ValueError('exclusive output already exists')
OUT.mkdir(parents=True);STAGE=OUT/'inputs';STAGE.mkdir();(OUT/'AGENTS.md').write_bytes((ROOT/'AGENTS.md').read_bytes())
sys.dont_write_bytecode=True;prior=importlib.machinery.SourceFileLoader.get_code

def fresh(loader,name):
 if Path(loader.path).is_relative_to(ROOT):return loader.source_to_code(loader.get_data(loader.path),loader.path)
 return prior(loader,name)
importlib.machinery.SourceFileLoader.get_code=fresh
sys.path.insert(0,str(Path(__file__).resolve().parent));from contract import load,digest
manifest,files=load(ROOT,INPUTS,MANIFEST);support=[(r,p)for r,p in files if r['role']=='support'];production=INPUTS/manifest['productionRoot'];fixtures=INPUTS/manifest['fixtureRoot'];(STAGE/'source').mkdir()
for row,path in files:
 if row['role']in ['support','driver']:(STAGE/path.name).write_bytes(path.read_bytes())
 if row['role']in ['production','qualification']:(STAGE/'source'/path.name).write_bytes(path.read_bytes())
for name in ['transport_gate.py','contract.py']:(STAGE/name).write_bytes((Path(__file__).resolve().parent/name).read_bytes())
sys.path[:0]=[str(STAGE),str(ROOT/'toolscripts')]
import gc
import sdk062_original_v1 as oracle
import heap_gate062ac as gates
import unicorn,capstone,elftools,pyctr
from elftools.elf.elffile import ELFFile
from unicorn.unicorn_py3 import unicorn as native_unicorn
from transport_gate import TransportGate
from importlib.metadata import version
effective_runtime=dict(python=sys.version,unicornPackage=version('unicorn'),unicornBinding=unicorn.__version__,unicornNative=list(unicorn.uc_version()),capstone=capstone.__version__,pyelftools=version('pyelftools'))
if effective_runtime!=manifest['effectiveRuntime']:raise ValueError('effective package/binding metadata changed')
runtime_paths=[Path(sys.executable),Path(getattr(sys,'_base_executable',sys.executable)),ROOT/'tools/clang-21/clang.exe',ROOT/'tools/clang-21/ld.lld.exe',Path(native_unicorn.uclib._name),Path(capstone._cs._name)]
runtime_pins=[dict(path=str(p),sha256=digest(p),bytes=p.stat().st_size)for p in runtime_paths]
if[(r['sha256'],r['bytes'])for r in runtime_pins]!=[(r['sha256'],r['bytes'])for r in manifest['runtimePins']]:raise ValueError('effective runtime/tool identities changed')
runtime_roots=[Path(pkg.__file__).parent for pkg in [unicorn,capstone,elftools,pyctr]]
helpers=[ROOT/r['path']for r in manifest['readOnlyHelpers']];pinned=[p for r,p in files]+helpers+[MANIFEST]+list(STAGE.glob('*.py'))+list((STAGE/'source').glob('*'))
sys.path[:]=[p for p in sys.path if p not in [str(ROOT/'toolscripts'),str(Path(__file__).resolve().parent)]]
gate=TransportGate(ROOT,OUT,pinned,{'files':manifest['referenceFiles']},A.source_only,runtime_roots,runtime_paths)
class AuthoredFinder(gates.AuthoredFinder):
 def find_spec(self,fullname,path=None,target=None):
  if importlib.machinery.BuiltinImporter.find_spec(fullname)or importlib.machinery.FrozenImporter.find_spec(fullname):return None
  return super().find_spec(fullname,path,target)
sys.meta_path.insert(0,AuthoredFinder(ROOT,pinned,OUT,gate));gate.install_original(oracle);originals=[]

def original_factory(*args,**kwargs):
 with gate.profile('original'):instance=oracle.Original(*args,**kwargs)
 originals.append(instance);return instance
names=['heap_build062ac','heap_runtime062ac','heap_model062ac','heap_proof062ac','heap_default_proof062ac','heap_registry_proof062ac','heap_setter_proof062ac','heap_disabled_proof062ac','heap_controls062ac','test_heap062ac'];modules={n:importlib.import_module(n)for n in names}
for module in modules.values():
 if hasattr(module,'R'):module.R=ROOT
 if hasattr(module,'Original'):module.Original=original_factory
builder=modules['heap_build062ac'];builder.R=ROOT;builder.S=production;original_build=builder.build
fixture_overrides={r['target'].split('/')[-1]:p for r,p in files if r['role']=='qualification'}

def selected_build(output=None,source=None,mutation=None,full=False):
 overrides=dict(fixture_overrides);overrides.update(mutation or{})
 return original_build(output,source=production,mutation=overrides,full=full)
modules['heap_controls062ac'].build=selected_build;modules['heap_controls062ac'].S=production;modules['test_heap062ac'].build=selected_build;modules['test_heap062ac'].W=STAGE
status='failed';started=time.time();tests=0
try:
 if A.guard_control:
  target=ROOT/manifest['frozenReady']['path']
  try:
   if A.guard_control=='stat':os.stat(target)
   elif A.guard_control=='lstat':os.lstat(target)
   elif A.guard_control=='listdir':os.listdir(target.parent)
   elif A.guard_control=='scandir':list(os.scandir(target.parent))
   elif A.guard_control=='open':target.read_bytes()
   elif A.guard_control=='original':oracle.Original()
   elif A.guard_control=='generated-stat':os.stat(ROOT/'generated/update-content0/code.bin')
   elif A.guard_control=='source-write':
    with next(p for r,p in files if r['role']=='production').open('ab')as stream:stream.write(b'forbidden')
   elif A.guard_control=='cached-bytecode':
    target=OUT/'synthetic.pyc';target.write_bytes(b'cache');target.read_bytes()
   elif A.guard_control=='library':
    import ctypes
    ctypes.CDLL(str(target.parent/'absent.dll'))
  except (ValueError,OSError):pass
  gate.require_clean();raise ValueError('caught control escaped terminal rejection')
 folder=selected_build(OUT/'build',full=True)
 if not A.source_only:
  for name,scope in [('heap_proof062ac','generic'),('heap_default_proof062ac','default'),('heap_registry_proof062ac','registry'),('heap_setter_proof062ac','setters'),('heap_disabled_proof062ac','disabled')]:modules[name].main(folder,OUT/scope)
  result=unittest.TextTestRunner(verbosity=1).run(unittest.defaultTestLoader.loadTestsFromModule(modules['test_heap062ac']));tests=result.testsRun
  if not result.wasSuccessful():raise ValueError('fresh public-path tests failed')
 else:
  proof=modules['heap_proof062ac'];default=modules['heap_default_proof062ac'];rows=[]
  for i,(flags,group,policy,split)in enumerate((f,g,p,s)for f in [0,1]for g in [0,263,65535]for p in [0,1]for s in [0,1]):rows.append([proof.execute(t,folder,flags,group,policy,split,proof.program(5462+i))for t in ['arm','windows','a64']])
  for i,(sdk,skew,callback)in enumerate([(s,k,False)for s in [False,True]for k in [0,1,3,7]]+[(True,k,True)for k in [0,1,3,7]]):rows.append([default.execute(t,folder,5862+i,sdk,None,skew,callback)for t in ['arm','windows','a64']])
  for name in ['heap_registry_proof062ac','heap_setter_proof062ac','heap_disabled_proof062ac']:rows.append([modules[name].run(t,folder)for t in ['arm','windows','a64']])
  (OUT/'source-only.json').write_text(json.dumps(dict(status='passed',cases=rows),indent=2)+'\n')
 if not A.no_controls:modules['heap_proof062ac'].CONTROL_BASELINE=folder;modules['heap_controls062ac'].main(OUT/'controls')
 for row,path in files:
  if digest(path)!=row['sha256']:raise ValueError('public source changed during execution')
 for row in manifest['readOnlyHelpers']:
  if digest(ROOT/row['path'])!=row['sha256']:raise ValueError('inherited helper changed')
 gate.require_clean();status='passed'
finally:
 receipt=dict(status=status,sourceOnly=A.source_only,tests=tests,originalConstructions=gate.original_constructions,allOriginalPcs=sorted(set().union(*(o.coverage for o in originals))),rejectedAttempts=gate.rejected,rejectedMetadata=gate.rejectedMetadata,metadataCounts=gate.metadataCounts,metadataPaths={p:sorted(v)for p,v in gate.metadataPaths.items()},reads=sorted(gate.reads),libraries=sorted(gate.libraries),manifestSha256=digest(MANIFEST),inputs=[dict(path=r['target'],sha256=r['sha256'],bytes=r['bytes'])for r,p in files],helperPins=manifest['readOnlyHelpers'],runtimePins=runtime_pins,effectiveRuntime=effective_runtime,elapsedSeconds=time.time()-started,guardControl=A.guard_control)
 (OUT/'receipt.json').write_text(json.dumps(receipt,indent=2)+'\n')
print(json.dumps(dict(status=status,output=str(OUT))))
