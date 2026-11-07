import argparse
import hashlib
from pathlib import Path
from native_material_wave011_build import save
from squirrel_generator044_state_build import ROOT,WORK,SOURCE,SOURCES,build
from squirrel_generator044_state_oracle import Arm
from squirrel_generator044_state_native import Windows,Android
from squirrel_generator044_state_model import validate_native


def changes():
 storage=(SOURCE/'generator_storage.c').read_text();yielding=(SOURCE/'generator_yield.c').read_text();resuming=(SOURCE/'generator_resume.c').read_text();errors=(SOURCE/'generator_error.c').read_text()
 early=storage.replace('    sq_prefix_assign(&destination->closure,&source->closure);','    destination->target=source->target;\n    sq_prefix_assign(&destination->closure,&source->closure);')
 late=errors.replace('    sq_prefix_assign(&vm->error,&temporary);','    SqPrefixObject012 previous=vm->error;vm->error=(SqPrefixObject012){0x01000001u,{.reference=0}};\n    sq_prefix_release(previous.type,previous.value);\n    sq_prefix_assign(&vm->error,&temporary);')
 return [('clear_each_saved_slot','generator_resume.c',resuming.replace('sq_prefix_assign(generator->stack.values,&null);','sq_prefix_assign(generator->stack.values+index,&null);'),10,0),
 ('copy_varargs_forward','generator_yield.c',yielding.replace('index=varargs-1;index>=0;index--','index=0;index<varargs;index++'),3,0),
 ('copy_parent_trap','generator_yield.c',yielding.replace('vm->traps.values+vm->traps.size-1','vm->traps.values'),4,0),
 ('publish_frame_target_early','generator_storage.c',early,36,1),('publish_error_after_old_release','generator_error.c',late,16,1),
 ('retain_transferred_varargs','generator_resume.c',resuming.replace('sq_prefix_release(slot->type,slot->value);','(void)slot;'),11,1)]


def run(folder):
 folder=folder.resolve();folder.mkdir(parents=True,exist_ok=True);rows=[]
 for name,filename,text,profile,cleanup in changes():
  if text==(SOURCE/filename).read_text():raise ValueError('046 control did not mutate '+name)
  root=folder/name;root.mkdir(parents=True,exist_ok=True);mutant=root/filename
  text=text.replace('#include "generator_state.h"','#include "'+(SOURCE/'generator_state.h').as_posix()+'"');mutant.write_text(text)
  sources=[mutant if p==SOURCE/filename else p for p in SOURCES];built=build(root,sources)
  s,y,f=built[0][:3];reference=Arm(s,y,f,True).execute(profile,cleanup);authored=Arm(s,y,f).execute(profile,cleanup)
  if reference['words']==authored['words']and reference['arena']==authored['arena']:raise ValueError('046 control survived '+name)
  observations=[('windows',Windows(built[1]).execute(profile,cleanup)),('androidModel',Android(*built[2][:2]).execute(profile,cleanup))]
  for target,observation in observations:
   try:validate_native(observation,reference)
   except ValueError:continue
   raise ValueError('046 returning native control survived '+name+' '+target)
  rows.append(dict(name=name,profile=profile,cleanup=cleanup,normalReturnTargets=['authoredARM','actualWindows','androidAArch64Model'],rejectedTargets=3,
   sameFinalArena=reference['arena']==authored['arena'],originalArenaSha256=hashlib.sha256(reference['arena']).hexdigest(),mutantArenaSha256=hashlib.sha256(authored['arena']).hexdigest()))
  print('046 returning control',name,'rejected',flush=True)
 report=dict(schemaVersion=1,component='squirrel-generator046-state',controls=rows,allNormallyReturned=True,sameFinalArenaControls=sum(row['sameFinalArena']for row in rows))
 save(folder/'controls.json',report);return report


if __name__=='__main__':
 parser=argparse.ArgumentParser();parser.add_argument('--output-dir',type=Path,default=WORK/'controls');args=parser.parse_args();run(args.output_dir)
