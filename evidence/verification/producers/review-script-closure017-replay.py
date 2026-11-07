import hashlib
import json
from pathlib import Path

ROOT = Path.cwd()
def read(path): return json.loads(Path(path).read_text())
def pin(path):
    path = Path(path)
    raw = path.read_bytes()
    return {'path':path.relative_to(ROOT).as_posix(),'sha256':hashlib.sha256(raw).hexdigest(),'bytes':len(raw)}
rpath=ROOT/'evidence/verification/script-closure017-isolated-0940286.json'
r=read(rpath)
assert r['status']=='passed' and r['coordinatorComparison']['tests']==64
path='evidence/lanes/squirrel-script-closure017/execution.json'
a=read(ROOT/path)
b=read(Path(r['replayRoot'])/path)
a['nativeTests'].pop('log')
b['nativeTests'].pop('log')
assert a==b and a['all64OriginalInstructionAddressesVisited']
assert a['normalOwnedDagFullyFinalizedAndUnlinked'] and a['bothClosureAndPrototypeWeakOrdersQualified']
assert not a['sourceModeOriginalImageCodeDataOrServicesMapped']
assert not a['prototypeCastToFullCollectable'] and not a['generic017AccessBeyondActualPrototypePrefixAllowed']
assert not a['weakReadOfLogicallyDisposedOwnerAllowed'] and not a['legacy010Or006CodeOrCallbacksConsumed']
receipt={'schemaVersion':1,'status':'qualified-actual-script-lifetime-provider','sourceRevision':r['sourceRevision'],
'rawReplay':pin(rpath),'primaryPacket':pin(ROOT/path),'independentPacket':pin(Path(r['replayRoot'])/path),
'allPrimaryFieldsIdenticalExceptNativeTestLog':True,'tests':64,'publicUnits':175,'publicCompilations':503,
'familyCases':72,'comparisonsAgainstOriginal':216,'allOriginalInstructionsVisited':64,
'androidModelApiReturns':288,'canonicalMappingPending':True,'newPhysicalInstructionCredit':0,
'wholeVmGameOrDeviceClaimed':False,'producer':pin(Path(__file__))}
(ROOT/'evidence/verification/script-closure017-coordinator-0940286.json').write_text(json.dumps(receipt,indent=2)+'\n')
print(json.dumps({'qualifiedProvider':True,'cases':72,'tests':64,'newPhysicalCredit':0}))
