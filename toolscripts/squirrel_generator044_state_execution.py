import argparse
import hashlib
from pathlib import Path
from native_material_wave011_build import pin,save
from squirrel_generator044_state_build import ROOT,WORK,SOURCES,build,load
from squirrel_generator044_state_oracle import Arm
from squirrel_generator044_state_native import Windows,Android
from squirrel_generator044_state_model import validate_native


def run(folder):
 folder=folder.resolve();built=build(folder)
 s,y,f=built[0][:3];reference=Arm(s,y,f,True);source=Arm(s,y,f);native=Windows(built[1]);model=Android(*built[2][:2]);rows=[]
 for profile in range(44):
  for cleanup in[0,1]:
   actual=reference.execute(profile,cleanup);authored=source.execute(profile,cleanup)
   if actual['arena']!=authored['arena']or actual['words']!=authored['words']:raise ValueError('046 original/source arenas differ '+str((profile,cleanup)))
   left=native.execute(profile,cleanup);right=model.execute(profile,cleanup)
   a=validate_native(left,actual);b=validate_native(right,actual)
   rows.append(dict(profile=profile,cleanup=cleanup,originalArenaSha256=hashlib.sha256(actual['arena']).hexdigest(),sourceArenaSha256=hashlib.sha256(authored['arena']).hexdigest(),wholeArenaEqual=True,
    originalWords=actual['words'],sourceWords=authored['words'],windowsWords=left['words'],androidModelWords=right['words'],nativeModelsValidated=a['validated']and b['validated']))
  print('046 profile',profile,'qualified',flush=True)
 ranges=[(0x19289c,0x192b38),(0x19e378,0x19e7a0),(0x19e7dc,0x19e864)]
 coverage=[dict(start=a,endExclusive=b,coveredPCs=[pc for pc in range(a,b,4)if pc in reference.coverage],unobservedPCs=[pc for pc in range(a,b,4)if pc not in reference.coverage])for a,b in ranges]
 artifacts=[folder/'arm/generator044.elf',folder/'windows/generator044.dll',folder/'android/libgenerator044.so',folder/'android/model.elf']
 record=dict(schemaVersion=1,component='squirrel-generator046-state',sourceFiles=[pin(p)for p in SOURCES],artifacts=[pin(p)for p in artifacts],builds=dict(arm=built[0][3],android=built[2][3]),
  cases=rows,caseSets=len(rows),targetObservations=len(rows)*4,comparisonArenaBytes=0x70000,coverage=coverage,allOriginalSourceWholeArenasEqual=True,
  scope='Actual complete168/264-byte VM and opaque120/192-byte generator Yield/Resume, explicit deterministic allocation and literal-error services.',
  limits=['Debug invocation1a0d30 remains an explicit unsupported external; NULL/same-closure debug suppression is measured.','Qualified positive reference counts exclude zero/overflowing stored owners; no safety repair or GC claim.','Frame-pool contraction uses fully backed explicitly provisioned inactive typed frame owners; no complete VM initializer claim.','NULL allocation/assert and general formatting are not exercised by this stage.','Caller activation boundaries in fixture preparation are explicit typed provisioners, not qualified Execute/LeaveFrame source.','Windows executes native C; Android is a high-address AArch64 object CPU model, not Android OS or device execution.'],sourceOrInventoryCreditGranted=0,wholeVmOrGameClaim=False)
 save(folder/'execution.json',record);return record


if __name__=='__main__':
 parser=argparse.ArgumentParser();parser.add_argument('--output-dir',type=Path,default=WORK/'primary-qualified');args=parser.parse_args();run(args.output_dir)
