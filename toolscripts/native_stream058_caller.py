import ctypes
import hashlib
import struct
import zlib

from native_stream058_execution import Backend
from native_stream058_layout import seed,get
from native_stream058_original import RAM,SIZE,STREAM
from native_stream056_cases import tables as reference_tables


def compressed(payload):
    encoder=zlib.compressobj(6,zlib.DEFLATED,31,8,zlib.Z_FIXED)
    result=encoder.compress(payload)+encoder.flush()
    if result[3]!=0 or result[10]&7!=3:
        raise ValueError('Fixture is not a single final fixed-Huffman gzip stream')
    return result


def execute(backend,payload):
    image=compressed(payload);machine=backend.machine;profile=backend.profile
    case=dict(default_allocate=True,default_dispose=True)
    allocation=ctypes.create_string_buffer(SIZE)if backend.target=='windows'else None
    ram=ctypes.addressof(allocation)if allocation is not None else RAM if backend.target=='original'else machine.ram
    before=seed(profile,ram,backend.symbols,case)
    input_offset,output_offset,tables_offset,scratch_offset=0x70000,0x80000,0x90000,0x94000
    before[input_offset:input_offset+len(image)]=image
    capacity=len(payload)+512
    trace_source=machine.fast_entries if backend.target=='original'else machine.kernel_entries if backend.target in('arm','a64')else None
    trace_start=len(trace_source)if trace_source is not None else 0
    if backend.target=='windows':
        ctypes.memmove(ram,bytes(before),SIZE);machine.library.fixture_bind058(ram+0x1000)
        function=machine.library.stream_gzip_fixed058
        function.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32,ctypes.c_void_p,ctypes.c_uint32,ctypes.c_void_p,ctypes.c_void_p]
        function.restype=ctypes.c_int32
        result=function(ram+STREAM,ram+input_offset,len(image),ram+output_offset,capacity,ram+tables_offset,ram+scratch_offset)
        after=ctypes.string_at(ram,SIZE)
    else:
        machine.cpu.mem_write(ram,bytes(before))
        if backend.target=='original':
            for address,value in((0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,ram+0x3000)):
                machine.cpu.mem_write(address,struct.pack('<I',value))
            machine.cpu.mem_write(0x89a508,b'\1')
            machine.call(machine.symbols['fixture_bind058'],[ram+0x1000])
            initialized=machine.call(0x733bfc,[ram+STREAM,31,ram+0x800,56])
            if initialized!=0:raise ValueError('Original bounded caller init failed')
            for offset,value in((0,ram+input_offset),(4,len(image)),(12,ram+output_offset),(16,capacity)):
                machine.cpu.mem_write(ram+STREAM+offset,struct.pack('<I',value))
            result=machine.call(0x7321e0,[ram+STREAM,4])
            if machine.call(0x733bac,[ram+STREAM])!=0:raise ValueError('Original bounded caller end failed')
        else:
            machine.call('fixture_bind058',[ram+0x1000])
            result=machine.call('stream_gzip_fixed058',[ram+STREAM,ram+input_offset,len(image),ram+output_offset,capacity,ram+tables_offset,ram+scratch_offset])
        after=bytes(machine.cpu.mem_read(ram,SIZE))
    stream=profile['stream'];heap=profile['heap']
    actual=after[output_offset:output_offset+len(payload)]
    observation=dict(status=result,total_input=get(after,STREAM+stream['total_input']),
                     total_output=get(after,STREAM+stream['total_output']),available_input=get(after,STREAM+stream['available_input']),
                     available_output=get(after,STREAM+stream['available_output']),checksum=get(after,STREAM+stream['checksum']),
                     state_null=get(after,STREAM+stream['state'],profile['pointer'])==0,
                     allocations=get(after,0x1000+heap['allocations']),releases=get(after,0x1000+heap['releases']),
                     outputSha256=hashlib.sha256(actual).hexdigest(),inputBytes=len(image),outputBytes=len(payload))
    wanted=dict(status=1,total_input=len(image),total_output=len(payload),available_input=0,
                available_output=512,checksum=zlib.crc32(payload),state_null=True,allocations=1,releases=1,
                outputSha256=hashlib.sha256(payload).hexdigest(),inputBytes=len(image),outputBytes=len(payload))
    if actual!=payload or observation!=wanted:
        raise ValueError('058 real-input caller mismatch '+backend.target+': '+repr(observation))
    if after[input_offset:input_offset+len(image)]!=image:
        raise ValueError('058 caller modified compressed input')
    mutable=[(STREAM,STREAM+profile['stream_size']),(0x1000,0x1000+profile['heap_size']),
             (0x10010,0x10010+profile['state_size']),(output_offset,output_offset+len(payload))]
    if backend.target!='original':
        mutable.extend([(tables_offset,tables_offset+544*4),(scratch_offset,scratch_offset+(7108 if profile['pointer']==4 else 7128))])
        lens,dists=reference_tables()
        expected_tables=b''.join(struct.pack('<BBH',*code)for code in lens+dists)
        if after[tables_offset:tables_offset+544*4]!=expected_tables:
            raise ValueError('058 production fixed-table generator differs from independent prefix-tree construction')
    cursor=0
    for start,end in sorted(mutable):
        if before[cursor:start]!=after[cursor:start]:raise ValueError('058 caller changed undeclared object/canary storage')
        cursor=max(cursor,end)
    if before[cursor:]!=after[cursor:]:raise ValueError('058 caller changed trailing canaries')
    if trace_source is not None:
        keys=['mode','hold','bits','availableInput','availableOutput']
        observation['kernelEntries']=[{key:entry[key]for key in keys}for entry in trace_source[trace_start:]]
    return observation


if __name__=='__main__':
    payload=b'abcd0123456789'*400
    for target in('original','arm','windows','a64'):
        print(target,execute(Backend(target),payload))
