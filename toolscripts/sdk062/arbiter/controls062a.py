import ctypes
import json
import struct
from pathlib import Path
from build062a import build,WORK
from windows_probe062a import WindowsBackend,SdkRuntime


CASES=[('signal-writes-cell','arbiter062a.c','void arbiter_signal062a(_Atomic(SdkSigned062s) *address, SdkWord062s count)\n{','void arbiter_signal062a(_Atomic(SdkSigned062s) *address, SdkWord062s count)\n{\n    __c11_atomic_store(address, 1, 5);','model062a.c','    (void)address;','    __c11_atomic_store(address, 1, 5);','signal'),
('wait-writes-cell','arbiter062a.c','    SdkSigned062s expected = __c11_atomic_load(address, 5);','    __c11_atomic_store(address, 0, 5);\n    SdkSigned062s expected = __c11_atomic_load(address, 5);','model062a.c','    while (__c11_atomic_load(address, 5) < 0)','    __c11_atomic_store(address, 0, 5);\n    while (__c11_atomic_load(address, 5) < 0)','wait'),
('wrong-owner','arbiter062a.c','return arbiter_api062a.tls(arbiter_api062a.index);','return (void *)0;','model062a.c','return arbiter_model_owner_value062a;','return (void *)0;','owner')]


def observe(target,folder,kind):
    native=WindowsBackend(folder);r=native.runtime if target=='windows'else SdkRuntime(target,folder);base=native.base if target=='windows'else r.ram;p=r.profilePointerBytes;cell=base+0x1000;owner=base+0x8000;before=bytearray(b'\xa7'*0x100000);struct.pack_into('<i',before,0x1000,2);r.store(base,before)
    if target=='windows':native.owner(owner)
    else:r.store(r.symbol('arbiter_model_owner_value062a'),owner.to_bytes(p,'little'))
    normal=False
    try:
        if kind=='owner':
            name='arbiter_owner062a'if target=='windows'else'arbiter_model_owner062a'
            if target=='windows':
                function=getattr(r.library,name);function.argtypes=[];function.restype=ctypes.c_void_p;answer=function()
            else:
                r.call(name,[])
                from unicorn import arm_const as arm,arm64_const as a64
                answer=r.cpu.reg_read(arm.UC_ARM_REG_R0 if target=='arm'else a64.UC_ARM64_REG_X0)
            normal=True;different=answer!=owner
        else:
            name=('arbiter_'if target=='windows'else'arbiter_model_')+kind+'062a';args=[cell]+([1]if kind=='signal'else[])
            if target=='windows':
                function=getattr(r.library,name);function.argtypes=[ctypes.c_void_p]+([ctypes.c_uint32]if kind=='signal'else[]);function.restype=None;function(*args)
            else:r.call(name,args)
            normal=True;different=r.read(base,len(before))!=before
        if not normal or not different:raise ValueError('062a wrong primitive source was not rejected after normal return')
        return dict(target=target,normallyReturned=True,independentCellOrOwnerMismatch=True)
    finally:native.close()


def main():
    output=WORK/'controls-attempt001';output.mkdir(exist_ok=True);rows=[]
    for label,a,old,new,b,old_model,new_model,kind in CASES:
        folder=output/label;folder.mkdir(exist_ok=True);overrides={}
        for name,before,after in [(a,old,new),(b,old_model,new_model)]:
            raw=(WORK/'source'/name).read_text(encoding='utf-8')
            if raw.count(before)!=1:raise ValueError('062a control anchor not unique '+label)
            path=folder/name;path.write_text(raw.replace(before,after),encoding='utf-8');overrides[name]=path
        for target in ['arm','windows','a64']:build(folder/target,target,overrides)
        observations=[observe(t,folder,kind)for t in ['windows','arm','a64']];rows.append(dict(name=label,observations=observations));print('062a',label,'three normal returns rejected',flush=True)
    (output/'report.json').write_text(json.dumps(dict(status='passed-real-primitive-returning-controls',controls=rows,sourceCreditGranted=0),indent=2)+'\n',encoding='utf-8')


if __name__=='__main__':main()
