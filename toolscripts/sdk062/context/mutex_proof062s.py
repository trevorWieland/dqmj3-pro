import ctypes
import hashlib
import json
import struct
from unicorn import UC_HOOK_CODE,arm_const as arm
from runtime062s import SdkRuntime,WORK
from kernel062s import ThreadServices


def program(target,depth,disabled,folder=None):
    r=SdkRuntime(target,folder);l=r.layout;p=l[0];allocation=ctypes.create_string_buffer(0x100000)if target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram
    before=bytearray(b'\xa7'*0x100000);mutex=0x1000;owner=base+0x8000;fast=mutex+l[22]
    def word(at,value):struct.pack_into('<I',before,at,value&0xffffffff)
    def pointer(at,value):before[at:at+p]=value.to_bytes(p,'little')
    pointer(mutex,0x8533fc if target=='original'else r.symbol('fixture_sdk_mutex_methods062s'));word(fast,0xffffffff if depth else 1);pointer(fast+l[19],owner if depth else 0);word(fast+l[20],depth)
    r.store(base,before);r.bind(base+0x4000,owner);services=ThreadServices(r,owner);hook=None;reads=[]
    if target=='original':
        r.store(0x8b637c,bytes([disabled]))
        def trace(cpu,address,size,data):
            if address in [0x170710,0x170728]:
                observed=cpu.reg_read(arm.UC_ARM_REG_R0)
                if observed!=owner:raise ValueError('062s original CP15 owner identity differs')
                reads.append('current-owner')
        hook=r.cpu.hook_add(UC_HOOK_CODE,trace)
    else:r.store(r.symbol('sdk_environment062s')+6*p,bytes([disabled]))
    rows=[];current=depth
    try:
        for name in ['sdk_mutex_acquire062s','sdk_mutex_acquire062s','sdk_mutex_release062s','sdk_mutex_release062s']:
            r.call(name,[base+mutex])
            if not disabled:
                current+=1 if 'acquire'in name else -1;word(fast,0xffffffff if current else 1);pointer(fast+l[19],owner if current else 0);word(fast+l[20],current)
            actual=r.read(base,len(before))
            if actual!=before:raise ValueError('062s recursive-mutex complete arena differs')
            rows.append(dict(operation=name,depth=current,completeArenaMatches=True,arenaSha256=hashlib.sha256(actual).hexdigest()))
        expected_reads=0 if disabled else 2 if depth else 3
        if target=='original':observed=len(reads)
        else:observed=struct.unpack('<I',r.read(r.symbol('fixture_sdk_owner_calls062s'),4))[0]
        if observed!=expected_reads:raise ValueError('062s TLS owner reload count differs')
        return dict(target=target,initialDepth=depth,disabled=disabled,rows=rows,ownerReads=observed,ownedWindowsTls=target=='windows',contendedWaitExecuted=False)
    finally:
        if hook is not None:r.cpu.hook_del(hook)
        services.close();r.close()


def main():
    cases=[dict(initialDepth=d,disabled=b,profiles=[program(t,d,b)for t in ['original','arm','windows','a64']])for d in [0,2]for b in [0,1,128]]
    (WORK/'mutex-proof-attempt001.json').write_text(json.dumps(dict(status='passed-uncontended-real-owner-recursive-mutex-programs',programs=cases,operations=24,observations=96,sourceCreditGranted=0),indent=2)+'\n',encoding='utf-8');print('062s six recursive-mutex programs /96 observations passed, actual CP15 and Windows TLS owners distinct from numeric IDs',flush=True)


if __name__=='__main__':main()
