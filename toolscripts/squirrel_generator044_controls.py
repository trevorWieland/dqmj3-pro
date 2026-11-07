import argparse
import hashlib
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor
from native_material_wave011_build import save
from squirrel_generator044_build import ROOT,WORK,SOURCE,SOURCES,arm,windows,android,load
from squirrel_generator044_oracle import Arm
from squirrel_generator044_native import Windows,Android
from squirrel_generator044_model import validate_native


def changes():
 lifetime=(SOURCE/'generator_lifetime.c').read_text();create=(SOURCE/'generator_create.c').read_text()
 weak='''    if(reference->prefix.weak) {
        SqWeakReference014 *weak=reference->prefix.weak;
        weak->object.type=0x01000001u;
        weak->object.value.reference=0;
    }'''
 if weak not in lifetime:raise ValueError('044 weak control anchor changed')
 delayed=lifetime.replace(weak,'').replace('    generator->reference.prefix.vtable->destroy(generator);','    SqWeakReference014 *weak=generator->reference.prefix.weak;\n    generator->reference.prefix.vtable->destroy(generator);').replace('    sq_generator_deallocate044(generator,sizeof(*generator));','    sq_generator_deallocate044(generator,sizeof(*generator));\n    if(weak){weak->object.type=0x01000001u;weak->object.value.reference=0;}')
 first=lifetime.index('    if(!(reference->prefix.references&0x80000000u))');last=lifetime.index('    if(generator->traps.capacity)')
 unlink=lifetime[first:last];late=lifetime[:first]+lifetime[last:]
 late=late.replace('    release_object(&generator->saved.closure);',unlink+'    release_object(&generator->saved.closure);')
 return [('zero_unwritten_frame','generator_create.c',create.replace('    generator->saved.closure=', '    generator->saved=(SqVmCallFrame022){0};\n    generator->saved.closure=',1),0,0),
 ('reverse_owned_vectors','generator_lifetime.c',lifetime.replace('{&generator->varargs,&generator->stack}','{&generator->stack,&generator->varargs}'),15,1),
 ('weak_invalidated_after_free','generator_lifetime.c',delayed,2,1),('unlink_after_trap_free','generator_lifetime.c',late,14,1)]


def run(folder):
 folder=folder.resolve();folder.mkdir(parents=True,exist_ok=True);rows=[]
 for name,filename,text,variant,cleanup in changes():
  root=folder/name;root.mkdir(parents=True,exist_ok=True);mutant=root/filename;mutant.write_text(text)
  if text==(SOURCE/filename).read_text():raise ValueError('044 control did not mutate '+name)
  sources=[mutant if p==SOURCE/filename else p for p in SOURCES]
  with ThreadPoolExecutor(3)as pool:
   fs=[pool.submit(f,root/lane,sources)for f,lane in[(arm,'arm'),(windows,'windows'),(android,'android')]];built=[f.result()for f in fs]
  s,y,f=built[0][:3];reference=Arm(s,y,f,True).execute(variant,cleanup);authored=Arm(s,y,f).execute(variant,cleanup)
  if reference['words']==authored['words']and reference['arena']==authored['arena']:raise ValueError('044 returning control survived '+name)
  observations=[('windows',Windows(built[1]).execute(variant,cleanup)),('androidModel',Android(*built[2][:2]).execute(variant,cleanup))]
  for target,observation in observations:
   try:validate_native(observation,reference)
   except ValueError:continue
   raise ValueError('044 native returning control survived '+name+' '+target)
  row=dict(name=name,variant=variant,cleanup=cleanup,normalReturnTargets=['authoredARM','actualWindows','androidAArch64Model'],rejectedTargets=3,
   sameFinalArena=reference['arena']==authored['arena'],originalArenaSha256=hashlib.sha256(reference['arena']).hexdigest(),mutantArenaSha256=hashlib.sha256(authored['arena']).hexdigest())
  rows.append(row);print('044 control',name,'rejected',flush=True)
 report=dict(schemaVersion=1,component='squirrel-generator044-stage-a',controls=rows,allNormallyReturned=True,sameFinalArenaControls=sum(r['sameFinalArena']for r in rows))
 save(folder/'controls.json',report);return report


if __name__=='__main__':
 parser=argparse.ArgumentParser();parser.add_argument('--output-dir',type=Path,default=WORK/'controls');args=parser.parse_args();run(args.output_dir)
