import os
from pathlib import Path
from heap_gate062ac import Gate

class TransportGate(Gate):
 def __init__(self,root,output,pinned,reference,source_only,runtime_roots,runtime_files):
  self.runtime_roots=[Path(p).resolve()for p in runtime_roots];self.runtime_files={Path(p).resolve()for p in runtime_files}
  super().__init__(root,output,pinned,reference,source_only)
 def reject(self,message):
  self.rejected.append(message)
  with self.internal():
   import json
   (self.output/'audit-rejections.json').write_text(json.dumps(self.rejected,indent=2)+'\n')
  raise ValueError(message)
 def check_candidate(self,candidate,operation,directory):
  super().check_candidate(candidate,operation,directory)
  if candidate.is_relative_to(self.output):return
  if candidate in self.reference:return
  if candidate in self.pinned and not directory:return
  if candidate in self.runtime_files and not directory:return
  if any(candidate.is_relative_to(p)for p in self.runtime_roots):return
  if candidate.is_relative_to(self.root):self.reject('undeclared workspace metadata/read '+operation+' '+str(candidate))
 def audit(self,event,values):
  if self.internal_active():return
  if event=='open'and values and isinstance(values[0],(str,bytes)):
   flags=values[2]if len(values)>2 and isinstance(values[2],int)else 0;mode=values[1]if len(values)>1 else None
   write=bool(flags&(os.O_WRONLY|os.O_RDWR|os.O_CREAT|os.O_TRUNC|os.O_APPEND))or isinstance(mode,str)and any(c in mode for c in 'wax+')
   if write:
    path=self.check_path(values[0],event)
    if path in self.pinned or not path.is_relative_to(self.output):self.reject('immutable input/outside-output write forbidden '+str(path))
  super().audit(event,values)
