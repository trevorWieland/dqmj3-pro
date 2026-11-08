import hashlib,json,ctypes
from heap_runtime062ac import Runtime
from pathlib import Path
from heap_build062ac import build,S
import heap_proof062ac as proof
W=Path(__file__).resolve().parent
MUTATIONS=[
 ('zero-fill-skipped','heap_split062ac.c','if (heap->flags & 1u)','if (0)'),
 ('group-shifted','heap_split062ac.c','(heap->lists.group & 255u)','(heap->lists.group >> 8)'),
 ('padding-forgotten','heap_split062ac.c','((SdkByte062s *)used - header)','((SdkByte062s *)used - (SdkByte062s *)used)'),
 ('right-coalescing-skipped','heap_free062ac.c','if (after != 0 && end == (SdkByte062s *)after)','if (0)'),
 ('left-coalescing-skipped','heap_free062ac.c','if (before != 0 && (SdkByte062s *)before + HEAP_HEADER062AC + before->size == begin)','if (0)'),
 ('first-fit-for-best','heap_allocate062ac.c','if (!(heap->lists.policy & 1u) || best == bytes)','if (1)'),
 ('allocated-size-corrupted','heap_split062ac.c','used->size = (SdkWord062s)(end - (SdkByte062s *)used) - HEAP_HEADER062AC;','used->size = (SdkWord062s)(end - (SdkByte062s *)used) - HEAP_HEADER062AC + 1u;'),
 ('allocated-magic-corrupted','heap_split062ac.c','used->magic = 0x5544;','used->magic = 0x5545;'),
 ('zero-allocation-null','heap_allocate062ac.c','if (bytes == 0)\n        bytes = 1;','if (bytes == 0)\n        return 0;')]

def same_final(folder,mutated):
 rows=[]
 for target in ['arm','windows','a64']:
  shared=ctypes.create_string_buffer(0x20000+63)if target=='windows'else None;observations=[]
  for image in [folder,mutated]:
   runtime=Runtime(target,image)
   if shared is not None:runtime.storage=shared;runtime.ram=(ctypes.addressof(shared)+63)&-64
   base=runtime.ram;runtime.store(base,b'\xa7'*0x18000);runtime.call('fixture_heap_reset062ac',[]);runtime.call('heap_initialize062ac',[base,base+512,65536,0])
   for index,value,count in [(15,263,2),(16,0,2),(17,0,1)]:runtime.store(base+runtime.layout[index],value.to_bytes(count,'little'))
   pointer=runtime.call('heap_allocate062ac',[base,32,4]);during=runtime.load(base,0x18000);runtime.call('heap_free062ac',[base,pointer]);after=runtime.load(base,0x18000);observations.append((during,after))
  if observations[0][0]==observations[1][0]or observations[0][1]!=observations[1][1]:raise ValueError('same-final-state control did not distinguish the transient header')
  rows.append(dict(target=target,returnedNormally=True,intermediateBytesDiffer=True,finalArenaBytesEqual=True,finalArenaSha256=hashlib.sha256(observations[0][1]).hexdigest()))
 return rows

def main(output=None):
 output=output or W/'controls-attempt002';output.mkdir(exist_ok=True);rows=[]
 for name,filename,before,after in MUTATIONS:
  dest=output/name;dest.mkdir(exist_ok=True);source=(S/filename).read_text()
  if source.count(before)!=1:raise ValueError(('control target not unique',name))
  path=dest/filename;path.write_text(source.replace(before,after),encoding='utf-8');folder=build(dest/'build',mutation={filename:path});outcomes=[]
  for target in ['arm','windows','a64']:
   try:proof.execute(target,folder,1,263,1,0,proof.program(5480))
   except ValueError as exc:
    message=str(exc)
    if 'independent full arena mismatch'not in message and 'allocation selection'not in message:raise
    outcomes.append(dict(target=target,status='normally-returning-source-rejected',reason=message))
   else:raise ValueError(('wrong-source control unexpectedly accepted',name,target))
  rows.append(dict(name=name,sourceSha256=hashlib.sha256(path.read_bytes()).hexdigest(),outcomes=outcomes));print(name,'rejected on all three',flush=True)
 final=same_final(proof.W/'build-default-v3'if not hasattr(proof,'CONTROL_BASELINE')else proof.CONTROL_BASELINE,output/'group-shifted/build')
 (output/'report.json').write_text(json.dumps(dict(status='passed',controls=rows,sameFinalStateControls=final),indent=2)+'\n')
if __name__=='__main__':main()
