import ctypes
import struct
import sys
from pathlib import Path
ROOT=next(p for p in Path(__file__).resolve().parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from native_stream058_layout import seed,get,put
from native_stream058_original import RAM,SIZE,STREAM
from projection059 import observe
from events059 import events


class Program:
    def __init__(self,backend,image,window,fail_at=0,custom_allocator=False):
        self.backend=backend
        self.machine=backend.machine
        self.profile=backend.profile
        self.image=image
        self.allocation=ctypes.create_string_buffer(SIZE)if backend.target=='windows'else None
        self.ram=ctypes.addressof(self.allocation)if self.allocation is not None else RAM if backend.target=='original'else self.machine.ram
        self.produced=0
        self.consumed=0
        self.rows=[]
        self.state=0
        self.header_maximum=None
        self.validate_layout()
        before=seed(self.profile,self.ram,backend.symbols,dict(default_allocate=True,default_dispose=True,fail_at=fail_at))
        before[0x70000:0x70000+len(image)]=image
        self.custom_allocator=custom_allocator
        if custom_allocator:
            if backend.target=='windows':address=ctypes.cast(self.machine.library.fixture_allocate059,ctypes.c_void_p).value
            else:address=self.machine.symbols['fixture_allocate059']
            put(before,STREAM+self.profile['stream']['allocate'],address,self.profile['pointer'])
        self.write(before)
        if backend.target=='original':
            for address,value in[(0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,self.ram+0x3000)]:self.machine.cpu.mem_write(address,struct.pack('<I',value))
            self.machine.cpu.mem_write(0x89a508,b'\1')
        self.call('fixture_bind058',[self.ram+0x1000])
        self.call('fixture_reset059',[])
        self.initialized=self.call('fn_00733c00',[self.ram+STREAM,window,self.ram+0x800,self.profile['stream_size']])
        if self.initialized:raise ValueError('059 genuine initializer failed')
        self.state=get(self.snapshot(),STREAM+self.profile['stream']['state'],self.profile['pointer'])

    def validate_layout(self):
        expected=[52,0,4,8,12,16,20,24,28,32,36,40,44,48,16,24,64,68,72,92,112,7112]if self.profile['pointer']==4 else [72,0,4,8,12,16,24,28,32,40,48,56,60,64,16,24,72,76,80,112,136,7136]
        if self.backend.target=='windows':actual=list((ctypes.c_uint32*22).in_dll(self.machine.library,'fixture_layout059'))
        else:actual=list(struct.unpack('<22I',bytes(self.machine.cpu.mem_read(self.machine.symbols['fixture_layout059'],88))))
        if actual!=expected:raise ValueError('059 new compiled layout differs from independently measured/derived fields')

    def snapshot(self):
        return ctypes.string_at(self.ram,SIZE)if self.backend.target=='windows'else bytes(self.machine.cpu.mem_read(self.ram,SIZE))

    def write(self,data):
        if self.backend.target=='windows':ctypes.memmove(self.ram,bytes(data),SIZE)
        else:self.machine.cpu.mem_write(self.ram,bytes(data))

    def call(self,name,args):
        if self.backend.target=='windows':return getattr(self.machine.library,name)(*args)
        if self.backend.target=='original':
            entry=0x733bfc if name=='fn_00733c00'else 0x733bac if name=='fn_00733bb0'else int(name[3:],16)if name.startswith('fn_')else self.machine.symbols[name]
            return self.machine.call(entry,args)
        return self.machine.call(name,args)

    def attach_header(self,maximum=64):
        if not 0<=maximum<=64:raise ValueError('059 header fixture maximum out of range')
        if self.backend.target=='windows':
            function=self.machine.library.fixture_attach_header059
            function.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32]
            function.restype=None
        self.header_maximum=maximum
        self.call('fixture_attach_header059',[self.ram+STREAM,self.ram+0x50000,maximum])

    def advance(self,input_end,capacity,flush):
        if not self.consumed<=input_end<=len(self.image)or not 0<=capacity<=0x10000-self.produced:
            raise ValueError('059 caller supplied an invalid I/O range')
        if self.header_maximum is not None and self.image[:2]==bytes([31,139])and len(self.image)>=12 and self.image[3]&4:
            extra_length=int.from_bytes(self.image[10:12],'little')
            if self.header_maximum<extra_length and input_end<12+extra_length:
                raise ValueError('059 fixture rejects fragmented undersized extra sink before execution')
        p=self.profile;s=p['stream'];before=bytearray(self.snapshot())
        values=dict(input=self.ram+0x70000+self.consumed,available_input=input_end-self.consumed,
                    output=self.ram+0x80000+self.produced,available_output=capacity)
        for name,value in values.items():put(before,STREAM+s[name],value,p['pointer']if name in['input','output']else 4)
        self.write(before)
        if self.backend.target=='windows':
            function=self.machine.library.stream_inflate059
            function.argtypes=[ctypes.c_void_p,ctypes.c_int32,ctypes.c_void_p,ctypes.c_void_p]
            function.restype=ctypes.c_int32
            result=function(self.ram+STREAM,flush,self.ram+0x90000,self.ram+0x94000)
        elif self.backend.target=='original':result=self.machine.call(0x7321e0,[self.ram+STREAM,flush])
        else:result=self.machine.call('stream_inflate059',[self.ram+STREAM,flush,self.ram+0x90000,self.ram+0x94000])
        after=self.snapshot()
        self.last_raw_return=result
        row=observe(self.backend,self.ram,before,after,self.state,self.image,self.produced,capacity,result)
        row['orderedCallbacks']=events(self.backend,self.ram,after,self.state)
        if self.custom_allocator:
            count=self.call('fixture_allocation_count059',[])
            if self.backend.target=='windows':
                function=self.machine.library.fixture_allocation_arguments059;function.restype=ctypes.c_void_p
                pointer=function();raw=ctypes.string_at(pointer,count*8)
            else:
                pointer=self.machine.call(self.machine.symbols['fixture_allocation_arguments059']if self.backend.target=='original'else'fixture_allocation_arguments059',[],pointer_result=True)if self.backend.target!='original'else self.call('fixture_allocation_arguments059',[])
                raw=bytes(self.machine.cpu.mem_read(pointer,count*8))
            arguments=[list(struct.unpack_from('<II',raw,i*8))for i in range(count)]
            if arguments and arguments[0]!=[1,self.profile['state_size']]:raise ValueError('059 actual initializer allocator ABI differs')
            if arguments:arguments[0]=[1,'sizeof-actual-state']
            row['allocatorCountAndBytes']=arguments
        self.produced=row['produced'];self.consumed=row['inputConsumed'];self.rows.append(row)
        return row

    def close(self):
        ended=self.call('fn_00733bb0',[self.ram+STREAM]);after=self.snapshot();h=self.profile['heap']
        return dict(endStatus=ended,allocations=get(after,0x1000+h['allocations']),releases=get(after,0x1000+h['releases']),orderedCallbacksAfterEnd=events(self.backend,self.ram,after,self.state))
