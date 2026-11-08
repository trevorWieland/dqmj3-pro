import os
from pathlib import Path
import sys

def audited(root,output,declared):
    root=Path(root).resolve();output=Path(output).resolve();permitted={Path(p).resolve()for p in declared};reads=set();libraries=set();rejected=[]
    def audit(event,values):
        if event not in ['open','ctypes.dlopen']or not values or not isinstance(values[0],(str,bytes)):return
        path=Path(os.fsdecode(values[0])).resolve()
        if path.is_relative_to(root/'work')and not path.is_relative_to(output)and path not in permitted:
            rejected.append(str(path));raise ValueError('undeclared historical work input '+str(path))
        if event=='ctypes.dlopen':libraries.add(str(path));return
        mode=values[1]if len(values)>1 else None
        if not isinstance(mode,str)or not any(c in mode for c in 'wax+'):reads.add(str(path))
    sys.addaudithook(audit)
    return reads,libraries,rejected

def require_clean(rejected):
    if rejected:raise ValueError('caught historical input attempt remains terminal')
