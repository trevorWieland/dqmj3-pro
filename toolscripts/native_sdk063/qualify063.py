import ctypes
import hashlib
import json
from pathlib import Path
import random
import struct
import sys

WORK = Path(__file__).resolve().parent
ROOT = next(p for p in WORK.parents if (p / 'AGENTS.md').is_file())
sys.path.insert(0,str(ROOT / 'toolscripts'))
sys.path.insert(0,str(ROOT / 'work/native-asset062'))
from digest024_build import FLAGS,pin
from native_stream056_build import command
from runtime062 import Runtime
import inventory


def build(folder,target,source=None):
    folder.mkdir(parents=True,exist_ok=False)
    compiler=ROOT/'tools/clang-21/clang.exe'
    profiles=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],
        windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],
        a64=['--target=aarch64-linux-android29','-fPIC'])
    sources=[source or ROOT/'src/native/wave063/sdk_words063.c',WORK/'source/fixture063.c']
    objects=[]
    for index,path in enumerate(sources):
        obj=folder/(str(index)+'.o')
        command([compiler,*profiles[target],*FLAGS,'-I',ROOT/'src/native/wave063',
            '-I',ROOT/'src/native/wave062','-c',path,'-o',obj],folder/(str(index)+'-compile.json'))
        objects.append(obj)
    if target=='windows':
        output=folder/'asset062.dll'
        exports=['resource_sdk_words063','resource_random_state063,data',
            'fixture_layout062,data','fixture_random_layout062,data']
        command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0',
            '/out:'+str(output),*['/export:'+x for x in exports],*objects],folder/'link.json')
    else:
        output=folder/'asset062.elf';script=folder/'link.ld'
        base=0x1200000 if target=='arm'else 0x110000000
        script.write_text('SECTIONS { .text '+hex(base)+' : { *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) } .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
        command([ROOT/'tools/clang-21/ld.lld.exe','-m','armelf'if target=='arm'else'aarch64elf',
            '--no-undefined','--build-id=none','--entry=resource_sdk_words063','-T',script,*objects,'-o',output],folder/'link.json')
    return dict(target=target,sources=[pin(p)for p in sources],artifact=pin(output))


def model(seed):
    value=seed;words=[0]*55
    for index in range(54,-1,-1):
        words[index]=(value+(value>>16))&0xffffffff
        value=(value*69069+0x66d619e1)&0xffffffff
    return words


def observe(runtime,seed,sentinel):
    runtime.last_return_completed=False
    words=model(seed)
    if runtime.target=='original':
        layout=inventory.code_layout((ROOT/'generated/update-content0/exheader.bin').read_bytes())
        data=next(x for x in layout['segments']if x['name']=='data');base=data['address'];size=data['initializedBytes']+layout['bssBytes']
        runtime.cpu.mem_write(0x89a4c8,struct.pack('<I',sentinel))
        runtime.cpu.mem_write(0x8f7e6c,b'\xa7'*228)
        runtime.cpu.mem_write(0x8bf60c,b'\x6d'*16)
        before=bytes(runtime.cpu.mem_read(base,size));expected=bytearray(before)
        expected[0x8f7e6c-base:0x8f7e6c-base+228]=struct.pack('<57I',*words,0x8f7e6c+31*4,0x8f7e6c)
        runtime.original.call(0x100671,[seed])
        actual=bytes(runtime.cpu.mem_read(base,size))
    else:
        p=runtime.profilePointerBytes;layout=list(runtime.constant('fixture_random_layout062',6))
        if layout!=([256,0,4,224,232,240]if p==8 else[248,0,4,224,228,232]):raise ValueError('063 native layout changed')
        allocation=ctypes.create_string_buffer(0x100000)if runtime.target=='windows'else None
        base=ctypes.addressof(allocation)if allocation is not None else runtime.ram
        offset=0x1000;at=base+offset;before=bytearray(b'\xa7'*0x100000)
        struct.pack_into('<I',before,offset,sentinel);before[offset+layout[5]:offset+layout[5]+16]=b'\x6d'*16
        expected=bytearray(before);struct.pack_into('<55I',expected,offset+4,*words)
        expected[offset+layout[3]:offset+layout[3]+p]=(at+4+31*4).to_bytes(p,'little')
        expected[offset+layout[4]:offset+layout[4]+p]=(at+4).to_bytes(p,'little')
        if p==8 and at<=0xffffffff:raise ValueError('063 source did not use high native pointers')
        if runtime.target=='windows':
            ctypes.memmove(base,bytes(before),len(before));function=runtime.library.resource_sdk_words063
            function.argtypes=[ctypes.c_void_p,ctypes.c_uint32];function.restype=None;function(at,seed)
            actual=ctypes.string_at(base,len(before))
        else:
            runtime.cpu.mem_write(base,bytes(before));runtime.call('resource_sdk_words063',[at,seed])
            actual=bytes(runtime.cpu.mem_read(base,len(before)))
    runtime.last_return_completed=True
    if actual!=expected:raise ValueError('063 full declared state differs from independent model')
    return dict(seed=seed,sdkSeedSentinelPreserved=sentinel,words=words,firstIndex=31,secondIndex=0,
        allRawDeclaredBytesEqualModel=True,xorshiftPreserved=True)


def qualify(folder,source=None):
    folder.mkdir(exist_ok=False);builds=[build(folder/'build'/t,t,source)for t in ['arm','windows','a64']]
    runtimes={t:Runtime(t,folder/'build',seed_entry=True)for t in ['original','arm','windows','a64']}
    rng=random.Random(63044);seeds=[0,1,2,55,69069,0x80000000,0xffffffff,0x12345678]+[rng.getrandbits(32)for _ in range(128)]
    rows=[]
    try:
        for seed in seeds:
            for sentinel in [0,0xa7a7a7a7,0xffffffff]:
                values={t:observe(r,seed,sentinel)for t,r in runtimes.items()}
                if any(v!=values['original']for v in values.values()):raise ValueError('063 source/original seed state differs')
                rows.append(dict(seed=seed,sentinel=sentinel,observations=values))
        pcs=set(range(0x100670,0x10069c,2));missing=sorted(pcs-runtimes['original'].original.coverage)
        if missing:raise ValueError('063 canonical Thumb PC coverage incomplete')
        result=dict(status='standalone-sdk-words-entry-four-profile-whole-state-passed',sets=408,
            observations=1632,instructionBytes=44,originalInstructions=22,missingPcs=missing,rows=rows,
            standaloneEntry=True,outerSeedWordWriteNotAssumed=True,wholeCallerArenasChecked=True,sourceCreditGranted=0)
        (folder/'report.json').write_text(json.dumps(result,separators=(',',':'))+'\n')
        (folder/'build.json').write_text(json.dumps(builds,indent=2)+'\n')
        print('063 standalone408sets1632observations all22ThumbPCs passed',flush=True)
    finally:
        for runtime in runtimes.values():runtime.close()


if __name__=='__main__':qualify(Path(sys.argv[1]).resolve()if len(sys.argv)>1 else WORK/'attempt001',Path(sys.argv[2]).resolve()if len(sys.argv)>2 else None)
