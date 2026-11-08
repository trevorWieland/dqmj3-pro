import hashlib,json,subprocess
from pathlib import Path
W=Path(__file__).resolve().parent
R=next(p for p in W.parents if(p/'AGENTS.md').is_file())
S=W/'source'
PROFILES={'arm':['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=hard','-mfpu=vfpv2'],'a64':['--target=aarch64-none-elf'],'windows':['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible']}
FILES=['heap_registry062ac.c','heap_initialize062ac.c','heap_split062ac.c','heap_allocate062ac.c','heap_free062ac.c','fixture_heap062ac.c']
def build(output=None,source=S,mutation=None,full=False):
 output=output or W/'build-core-v3';rows=[]
 for target,flags in PROFILES.items():
  dest=output/target;dest.mkdir(parents=True,exist_ok=True);objects=[]
  chosen=FILES+(['heap_default062ac.c','heap_proxy062ac.c','heap_object062ac.c','heap_size062ac.c','heap_sdk062ac.c','fixture_default062ac.c','sdk_mutex_external.c']if full else [])
  for name in chosen:
   path=source/name
   if mutation and name in mutation:path=mutation[name]
   if name=='sdk_mutex_external.c':path=R/'src/native/wave062-sdk/context/mutex062s.c'
   obj=dest/(Path(name).stem+'.o');objects.append(obj)
   argv=[str(R/'tools/clang-21/clang.exe'),*flags,'-std=c11','-O2','-ffreestanding','-fno-builtin','-fno-stack-protector','-ffunction-sections','-fdata-sections','-Wall','-Wextra','-Werror','-I'+str(source),'-I'+str(R/'src/native/wave062-sdk/include'),'-c',str(path),'-o',str(obj)]
   result=subprocess.run(argv,capture_output=True,text=True)
   rows.append(dict(argv=argv,status=result.returncode,output=result.stdout+result.stderr))
   if result.returncode:raise RuntimeError(rows[-1])
  artifact=dest/('heap062ac.dll' if target=='windows' else 'heap062ac.elf')
  if target=='windows':
   exports=['heap_registry062ac','heap_registry_initialized062ac','fixture_heap_layout062ac','fixture_heap_reset062ac','heap_initialize062ac','heap_allocate062ac','heap_free062ac','heap_register062ac','heap_find_containing062ac','heap_list_next062ac']
   if full:exports+=['heap_default_bytes062ac','fixture_default_callback062ac','fixture_default_disabled062ac','heap_environment062ac','heap_proxy062ac','heap_identity062ac','heap_methods062ac','fixture_default_bind062ac','heap_default_initialize062ac','heap_default_allocate062ac','heap_default_free062ac','heap_sdk_allocate062ac','heap_sdk_dispose062ac','heap_allocation_size062ac','heap_object_allocate062ac','heap_object_free062ac','heap_object_initialize062ac','heap_group_set062ac','heap_policy_set062ac','heap_split_set062ac']
   argv=[str(R/'tools/clang-21/ld.lld.exe'),'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(artifact),*['/export:'+n for n in exports],*[str(p)for p in objects]]
  else:argv=[str(R/'tools/clang-21/ld.lld.exe'),'-Ttext=0x6000000','-e','heap_allocate062ac','-o',str(artifact),*[str(p)for p in objects]]
  result=subprocess.run(argv,capture_output=True,text=True);rows.append(dict(argv=argv,status=result.returncode,output=result.stdout+result.stderr))
  if result.returncode:raise RuntimeError(rows[-1])
 (output/'build.json').write_text(json.dumps(rows,indent=2)+'\n')
 return output
if __name__=='__main__':print(build())
