import ctypes
import struct
from unicorn import arm64_const as a64
from controller5_fixture import STOP


class Observation(ctypes.Structure):
    _fields_=[('arguments',ctypes.c_uint32*4),('resource',ctypes.c_void_p),('flags',ctypes.c_uint32),
              ('name',ctypes.c_uint32),('last_delta_bits',ctypes.c_uint32),('storage',ctypes.c_void_p*6),('returned',ctypes.c_void_p)]


def configure_windows(dll,base,case):
    ctypes.c_void_p.in_dll(dll,'state_resource_index055').value=base+0x9000
    ctypes.c_uint32.in_dll(dll,'state_storage_calls055').value=0
    observations=(Observation*64).in_dll(dll,'state_storage_observations055')
    ctypes.memset(ctypes.addressof(observations),0,ctypes.sizeof(observations))
    for name,offset in [('begin',0x38000),('end',0x40000),('cursor',0x38000),('observer',0xb000),('context_bytes',0x110c)]:
        ctypes.c_void_p.in_dll(dll,'state_storage_'+name+'055').value=base+offset
    if case.get('storage_provider'):dll.state_program_install_storage055()


def configure_machine(cpu,symbols,base,case):
    def pointer(name,value):cpu.mem_write(symbols[name],struct.pack('<Q',value))
    pointer('state_resource_index055',base+0x9000)
    for name,offset in [('begin',0x38000),('end',0x40000),('cursor',0x38000),('observer',0xb000),('context_bytes',0x110c)]:
        pointer('state_storage_'+name+'055',base+offset)
    if case.get('storage_provider'):
        cpu.reg_write(a64.UC_ARM64_REG_X30,STOP)
        cpu.emu_start(symbols['state_program_install_storage055'],STOP,count=100000)


def rows(raw,count):
    result=[]
    for index in range(count):
        row=Observation.from_buffer_copy(raw[index*96:(index+1)*96])
        result.append(dict(arguments=list(row.arguments),resource=row.resource,flags=row.flags,name=row.name,
                           last_delta_bits=row.last_delta_bits,storage=list(row.storage),returned=row.returned))
    return result


def windows_observations(dll):
    count=ctypes.c_uint32.in_dll(dll,'state_storage_calls055').value
    block=(Observation*64).in_dll(dll,'state_storage_observations055')
    result=rows(ctypes.string_at(ctypes.addressof(block),count*96),count)
    fingerprints=(ctypes.c_uint32*64).in_dll(dll,'state_storage_context_observations055')
    for index,row in enumerate(result):row['contextFingerprint']=fingerprints[index]
    return result


def machine_observations(cpu,symbols):
    count=struct.unpack('<I',bytes(cpu.mem_read(symbols['state_storage_calls055'],4)))[0]
    result=rows(bytes(cpu.mem_read(symbols['state_storage_observations055'],count*96)),count)
    fingerprints=struct.unpack('<'+str(count)+'I',bytes(cpu.mem_read(symbols['state_storage_context_observations055'],count*4)))
    for index,row in enumerate(result):row['contextFingerprint']=fingerprints[index]
    return result
