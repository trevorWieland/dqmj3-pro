import ctypes
import hashlib
import struct
import sys
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from native_stream058_execution import Backend
from native_stream058_layout import get,put
from native_stream058_original import RAM,SIZE,STACK
from unicorn import UC_HOOK_CODE
from unicorn import arm_const as arm,arm64_const as a64


class Runtime:
    def __init__(self,target,artifacts):
        self.backend=Backend(target,artifacts);self.target=target;self.machine=self.backend.machine;self.profile=self.backend.profile
        self.trace=[];self.contracts=[]
        if target=='original':
            machine=self.machine
            machine.ranges.extend([(0x44c728,0x44c72c,0x44c728),(0x44c72c,0x44c74c,0x44c72c)])
            machine.ranges.sort();machine.starts=[r[0]for r in machine.ranges]
        if target=='windows':
            self.layout=list((ctypes.c_uint32*11).in_dll(self.machine.library,'fixture_layout061'))
            self.machine.library.asset_decode061.argtypes=[ctypes.c_void_p,ctypes.c_uint32,ctypes.c_void_p,ctypes.c_uint32,ctypes.c_void_p]
            self.machine.library.asset_decode061.restype=ctypes.c_int32
        else:
            self.layout=list(struct.unpack('<11I',bytes(self.machine.cpu.mem_read(self.machine.symbols['fixture_layout061'],44))))
            self.machine.cpu.hook_add(UC_HOOK_CODE,self.code)
        expected=[4,8,16400,0,7116,9292,7116,7108,56,0,4]if self.profile['pointer']==4 else [8,16,16448,0,7144,9320,7144,7128,88,0,8]
        if self.layout!=expected:raise ValueError('061 actual typed workspace/context layout changed')

    def code(self,cpu,address,size,unused):
        entry=0x44c72c if self.target=='original'else self.machine.symbols['asset_allocate061']
        stages={0x733c00:'initialize',0x7321e4:'inflate',0x733bb0:'end'}if self.target=='original'else {self.machine.symbols['fn_00733c00']:'initialize',self.machine.symbols['stream_inflate059']:'inflate',self.machine.symbols['fn_00733bb0']:'end'}
        if address in stages:
            regs=[arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2,arm.UC_ARM_REG_R3]if self.target in ['original','arm']else [a64.UC_ARM64_REG_X0,a64.UC_ARM64_REG_X1,a64.UC_ARM64_REG_X2,a64.UC_ARM64_REG_X3]
            args=[cpu.reg_read(r)for r in regs];stream=args[0];width=self.profile['pointer'];offsets=self.profile['stream']
            raw=bytes(cpu.mem_read(stream,self.profile['stream_size']))
            def field(name):return int.from_bytes(raw[offsets[name]:offsets[name]+(width if name in ['input','output','state','allocate','dispose','context']else 4)],'little')
            allocate=0x44c72c if self.target=='original'else self.machine.symbols['asset_allocate061']
            dispose=0x44c728 if self.target=='original'else self.machine.symbols['asset_dispose061']
            if field('allocate')!=allocate or field('dispose')!=dispose:raise ValueError('061 actual callback publication differs')
            row=dict(stage=stages[address],availableInput=field('available_input'),availableOutput=field('available_output'),actualCustomCallbacks=True)
            if stages[address]=='initialize':
                row.update(windowBits=args[1],streamBytes='sizeof-stream'if args[3]==self.profile['stream_size']else args[3],versionFirstByte=cpu.mem_read(args[2],1)[0])
            if stages[address]=='inflate':row['flush']=args[1]
            self.contracts.append(row)
        if address!=entry:return
        registers=[arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2]if self.target in ['original','arm']else [a64.UC_ARM64_REG_X0,a64.UC_ARM64_REG_W1,a64.UC_ARM64_REG_W2]
        context,count,bytes_count=[cpu.reg_read(r)for r in registers]
        width=self.profile['pointer'];raw=bytes(cpu.mem_read(context,width*2));cursor=int.from_bytes(raw[:width],'little');end=int.from_bytes(raw[width:],'little')
        state_size=self.profile['state_size']
        self.trace.append(dict(count=count,elementBytes='sizeof-state'if count==1 and bytes_count==state_size else bytes_count,remaining='sizeof-state'if end-cursor==state_size else end-cursor))

    def close(self):
        if self.target=='windows':self.machine.close()


def state_projection(runtime,ram,arena,seed):
    profile=runtime.profile;offset=0x10000;st=profile['state'];width=profile['pointer']
    if width==8 and (arena[offset+84:offset+88]!=bytes([seed])*4 or arena[offset+7140:offset+7144]!=bytes([seed])*4):raise ValueError('061 native state padding changed')
    scalar=['mode','last','wrap','dictionary','maximum_distance','total','window_bits','window_size','window_have','window_next','hold','bits','length_bits','distance_bits','sane','back','tail']
    row={n:get(arena,offset+st[n],1 if n=='mode'else 4)for n in scalar}
    row.update(flags=get(arena,offset+16),check=get(arena,offset+24),length=get(arena,offset+(64 if width==4 else 72)),distance=get(arena,offset+(68 if width==4 else 76)),extra=get(arena,offset+(72 if width==4 else 80)))
    counters=offset+(92 if width==4 else 112);work=offset+(112 if width==4 else 136)
    row.update(counts=[get(arena,counters+i*4)for i in range(4)],workSha256=hashlib.sha256(arena[work:work+1216]).hexdigest(),codesSha256=hashlib.sha256(arena[offset+st['codes']:offset+st['codes']+5776]).hexdigest(),modePadding=arena[offset+1:offset+4].hex())
    for name in ['header','window']:
        if get(arena,offset+st[name],width)!=0:raise ValueError('061 preallocated-only asset decoder published unexpected '+name)
    for name in ['lengths','distances','next_code']:
        value=get(arena,offset+st[name],width);codes=ram+offset+st['codes'];fixed=0x7e36f0 if runtime.target=='original'else ram+offset+runtime.layout[4]
        if codes<=value<=codes+5776 and(value-codes)%4==0:row[name]=['state-codes',(value-codes)//4]
        elif fixed<=value<fixed+2176 and(value-fixed)%4==0:row[name]=['fixed-codes',(value-fixed)//4]
        else:raise ValueError('061 actual table pointer escaped declared typed objects')
    return row


def execute(runtime,image,capacity,seed=0xa7,null_workspace=False):
    if not 0<=capacity<=0x10000 or len(image)>0x10000:raise ValueError('061 I/O fixture outside bounded arena')
    machine=runtime.machine;width=runtime.profile['pointer']
    allocation=ctypes.create_string_buffer(SIZE)if runtime.target=='windows'else None
    ram=ctypes.addressof(allocation)if allocation is not None else RAM if runtime.target=='original'else machine.ram
    if runtime.target=='windows'and ram<=0xffffffff:raise ValueError('061 requires actual high native pointers')
    before=bytearray(bytes([seed])*SIZE);before[0x70000:0x70000+len(image)]=image
    args=[ram+0x80000,capacity,ram+0x70000,len(image),0 if null_workspace else ram+0x10000]
    trace_start=len(runtime.trace);contract_start=len(runtime.contracts)
    if runtime.target=='windows':
        ctypes.memmove(ram,bytes(before),SIZE)
        result=machine.library.asset_decode061(*args);after=ctypes.string_at(ram,SIZE)
    else:
        machine.cpu.mem_write(ram,bytes(before))
        if runtime.target=='original':
            machine.cpu.mem_write(STACK+0x10000,struct.pack('<I',args[4]));result=machine.call(0x44c578,args[:4])
        else:result=machine.call('asset_decode061',args)
        after=bytes(machine.cpu.mem_read(ram,SIZE))
    runtime.last_raw_return=result
    mutable=[(0x80000,0x80000+capacity)]
    if not null_workspace:mutable.append((0x10000,0x10000+(7116 if runtime.target=='original'else runtime.layout[2])))
    cursor=0
    for start,end in sorted(mutable):
        if before[cursor:start]!=after[cursor:start]:raise ValueError('061 asset decoder changed immutable input/canary')
        cursor=end
    if before[cursor:]!=after[cursor:]:raise ValueError('061 asset decoder changed trailing canary')
    row=dict(status=result,outputSha256=hashlib.sha256(after[0x80000:0x80000+capacity]).hexdigest(),allOtherInitializedBytesUnchanged=True,state=None if null_workspace else state_projection(runtime,ram,after,seed))
    if runtime.target!='windows':
        row['allocatorArguments']=runtime.trace[trace_start:];row['initializationContracts']=runtime.contracts[contract_start:]
    return row
