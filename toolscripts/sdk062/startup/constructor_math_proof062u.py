import ctypes
import hashlib
import json
import random
import struct
from unicorn import arm_const as arm,arm64_const as a64
from clock_runtime062u import ClockRuntime,WORK
from runtime062 import Runtime
MASK=(1<<64)-1

def divide(r,numerator,divisor):
    if not divisor:raise ValueError('062u quotient model excludes zero divisor')
    if r.target=='original':
        r.original.call(0x169c20,[numerator&0xffffffff,numerator>>32,divisor&0xffffffff,divisor>>32]);return r.cpu.reg_read(arm.UC_ARM_REG_R0)|(r.cpu.reg_read(arm.UC_ARM_REG_R1)<<32)
    if r.target=='windows':
        f=r.library.sdk_clock_divide062u;f.argtypes=[ctypes.c_uint64,ctypes.c_uint64];f.restype=ctypes.c_uint64;return f(numerator,divisor)
    Runtime.call(r,'sdk_clock_divide062u',[numerator&0xffffffff,numerator>>32,divisor&0xffffffff,divisor>>32]if r.target=='arm'else[numerator,divisor]);return r.cpu.reg_read(arm.UC_ARM_REG_R0)|(r.cpu.reg_read(arm.UC_ARM_REG_R1)<<32)if r.target=='arm'else r.cpu.reg_read(a64.UC_ARM64_REG_X0)

def constructors(target,folder=None):
    r=ClockRuntime(target,folder);allocation=ctypes.create_string_buffer(0x10000)if target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram;p=r.profilePointerBytes;s=r.layout;rows=[]
    try:
        for method in ['sdk_count_initialize062u','sdk_recursive_initialize062u','sdk_mutex_initialize062u']:
            for control in [0,1,0x80000000,0xffffffff]:
                image=bytearray(b'\xa7'*0x10000);address=0x1000;r.store(base,image)
                def word(offset,value):struct.pack_into('<I',image,offset,value&0xffffffff)
                def ptr(offset,value):image[offset:offset+p]=int(value).to_bytes(p,'little')
                if method=='sdk_count_initialize062u':word(address,1)
                elif method=='sdk_recursive_initialize062u':word(address,1);ptr(address+s[19],0);word(address+s[20],0)
                else:
                    if target=='original':
                        from runtime062u import ROOT
                        code=(ROOT/'generated/update-content0/code.bin').read_bytes();methods,class_tag,tag=0x8533fc,struct.unpack_from('<I',code,0x47462c-0x100000)[0],struct.unpack_from('<I',code,0x474630-0x100000)[0]
                    else:methods=r.symbol('sdk_clock_mutex_methods062u');class_tag=r.symbol('sdk_mutex_class_identity062u');tag=r.symbol('sdk_mutex_tag_identity062u')
                    ptr(address,methods);ptr(address+p,class_tag);fast=address+s[22];word(fast,1);ptr(fast+s[19],0);word(fast+s[20],0);ptr(address+s[22]+s[18],tag)
                    flags=address+s[22]+s[18]+p;image[flags]=0;control_offset=(flags+1+3)&~3;word(control_offset,control);word(control_offset+4,0);word(control_offset+8,0)
                result=r.call(method,[base+address,control]if method=='sdk_mutex_initialize062u'else[base+address]);actual=r.read(base,len(image))
                if actual!=image:raise ValueError('062u independent constructor full arena mismatch '+method+' '+target+' '+str([i for i,(a,b)in enumerate(zip(actual,image))if a!=b][:24]))
                if method=='sdk_mutex_initialize062u'and result!=base+address:raise ValueError('062u concrete constructor returned wrong alias')
                rows.append(dict(target=target,method=method,control=control,completeArenaMatchesIndependentModel=True,arenaSha256=hashlib.sha256(actual).hexdigest()))
    finally:r.close()
    return rows

def main(folder=None,rebuild=True):
    folder=folder or WORK/'standalone-constructor-math-v1'
    if rebuild:
        from build062u import build
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    random_source=random.Random(0x062000);pairs=[(0,1),(MASK,1),(MASK,MASK),(1,MASK),(1<<63,(1<<63)+1),(MASK,268111856)]
    pairs += [(n,d)for n in [0,1,2,255,256,65535,1<<31,1<<32,(1<<63)-1,1<<63,MASK]for d in [1,2,3,255,256,65535,1<<31,1<<32,(1<<63)-1,1<<63,MASK]]
    pairs += [(random_source.getrandbits(64),random_source.getrandbits(64)or 1)for n in range(2048)]
    rows=[];math=[]
    for target in ['original','arm','windows','a64']:
        rows.extend(constructors(target,folder/'build'));r=ClockRuntime(target,folder/'build')
        try:
            for numerator,divisor in pairs:
                result=divide(r,numerator,divisor)
                if result!=numerator//divisor:raise ValueError('062u independent U64 quotient arithmetic mismatch '+target)
            math.append(dict(target=target,cases=len(pairs),allQuotientsMatchIndependentIntegerArithmetic=True,compilerHelperAbiOrPhysicalByteClaim=False))
        finally:r.close()
        print('062u',target,'independent complete mutex constructors and',len(pairs),'U64 quotient cases passed',flush=True)
    (folder/'constructor-math.json').write_text(json.dumps(dict(status='passed',constructors=rows,quotientReference=math,sourceCreditGranted=0),indent=2)+'\n',encoding='utf-8')

if __name__=='__main__':main()
