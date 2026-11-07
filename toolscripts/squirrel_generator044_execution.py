import argparse
import hashlib
import json
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor
from native_material_wave011_build import pin,save
from squirrel_generator044_build import ROOT,WORK,SOURCES,arm,windows,android,load
from squirrel_generator044_oracle import Arm
from squirrel_generator044_native import Windows,Android
from squirrel_generator044_model import decode,normalized,validate_native


def run(folder):
 folder=folder.resolve();folder.mkdir(parents=True,exist_ok=True)
 with ThreadPoolExecutor(3)as pool:
  futures=[pool.submit(f,folder/name)for f,name in[(arm,'arm'),(windows,'windows'),(android,'android')]]
  built=[future.result()for future in futures]
 artifacts=[folder/'arm/generator044.elf',folder/'windows/generator044.dll',folder/'android/libgenerator044.so',folder/'android/model.elf']
 sections,symbols,functions=built[0][:3];reference=Arm(sections,symbols,functions,True);source=Arm(sections,symbols,functions)
 native=Windows(artifacts[1]);s,y,f=load(folder/'android/model.elf');model=Android(s,y);rows=[]
 for variant in range(17):
  for cleanup in[0,1]:
   actual=reference.execute(variant,cleanup);authored=source.execute(variant,cleanup)
   if actual['arena']!=authored['arena']or actual['words']!=authored['words']:raise ValueError('044 original/source whole arena differs '+str((variant,cleanup)))
   left=native.execute(variant,cleanup);right=model.execute(variant,cleanup)
   a=validate_native(left,actual);b=validate_native(right,actual)
   rows.append(dict(variant=variant,cleanup=cleanup,originalArenaSha256=hashlib.sha256(actual['arena']).hexdigest(),sourceArenaSha256=hashlib.sha256(authored['arena']).hexdigest(),wholeArenaEqual=True,
    originalWords=actual['words'],sourceWords=authored['words'],windowsWords=left['words'],androidModelWords=right['words'],nativeModelsValidated=a['validated']and b['validated']))
  print('044 stageA variant',variant,'qualified',flush=True)
 ranges=[(0x192b9c,0x192ca8),(0x202dcc,0x202df4),(0x202e68,0x202f70)]
 coverage=[dict(entry=a,instructionBytes=b-a,coveredPCs=[pc for pc in sorted(reference.coverage)if a<=pc<b],unobservedPCs=[pc for pc in range(a,b,4)if pc not in reference.coverage])for a,b in ranges]
 report=dict(schemaVersion=1,component='squirrel-generator044-stage-a',scope='Actual opaque generator factory and final-owner lifetime; no Yield/Resume/Execute or shared-state initialization.',sourceFiles=[pin(p)for p in SOURCES],artifacts=[pin(p)for p in artifacts],
  builds={'arm':built[0][3],'android':built[2][3]},cases=rows,caseSets=len(rows),targetObservations=len(rows)*4,comparisonArenaBytes=0x70000,allOriginalSourceWholeArenasEqual=True,coverage=coverage,
  limits=['NULL-script assertion outcome not in this normal-return corpus.','Allocator and explicit preprovisioned shared/string-table services; no GC or global shared-state initialization.','Constructor leaves eight saved-frame fields unwritten; raw-byte preservation is observed without interpreting those fields as pointers.','Windows is native code execution; Android is an AArch64 object CPU model, not Android OS or physical-device execution.','No duplicate generator008/helper/source admission.'])
 save(folder/'execution.json',report);return report


if __name__=='__main__':
 parser=argparse.ArgumentParser();parser.add_argument('--output-dir',type=Path,default=WORK/'primary-qualified');args=parser.parse_args();run(args.output_dir)
