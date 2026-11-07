import bisect
import ctypes
import hashlib
import struct

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS, RETURN, STACK
from native_wave012_ctor_runtime import intervals
import native_wave013_nfa_data as services


def machine(graph, data, source):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    pages = set()
    for address, raw in graph['blocks']:
        for page in range(address & ~4095, (address+len(raw)+4095) & ~4095, 4096):
            if page not in pages:
                cpu.mem_map(page,4096,unicorn.UC_PROT_ALL)
                pages.add(page)
        cpu.mem_write(address,raw)
    writable = graph.get('writableRanges', [])
    for page in pages:
        cpu.mem_protect(page,4096,unicorn.UC_PROT_READ | (unicorn.UC_PROT_WRITE if any(a<=page<b for a,b in writable) else unicorn.UC_PROT_EXEC))
    cpu.mem_map(STACK,8192,unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    if source:
        cpu.mem_map(0x5000000,65536,unicorn.UC_PROT_READ)
        for address,raw in services.arm_blocks(data):
            cpu.mem_write(address,raw)
    code_ranges = intervals(graph['executableRanges'])
    starts = [a for a,b in code_ranges]
    reached = set()
    setup = [source]
    def executed(uc,address,size,user):
        index = bisect.bisect_right(starts,address)-1
        if index<0 or not code_ranges[index][0]<=address<address+size<=code_ranges[index][1]:
            raise RuntimeError('Case query escaped owned code')
        reached.add(address)
    def write(uc,access,address,size,value,user):
        if STACK+2048<=address<address+size<=STACK+4096:
            return
        if setup[0] and any(a<=address<address+size<=b for a,b in writable):
            return
        raise RuntimeError('Case query changed memory outside private frame')
    cpu.hook_add(unicorn.UC_HOOK_CODE,executed)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    for index,register in enumerate(REGISTERS):
        cpu.reg_write(register,0x13570000+index*0x101)
    def call(name,argument):
        entry = graph['functions'][name]['address'] if source else int(name[3:],16)
        cpu.reg_write(UC_ARM_REG_CPSR,0x10 | (argument & 15)<<28)
        cpu.reg_write(REGISTERS[0],argument)
        cpu.reg_write(REGISTERS[-2],STACK+4096)
        cpu.reg_write(REGISTERS[-1],RETURN)
        cpu.emu_start(entry,RETURN,count=200000)
        if cpu.reg_read(UC_ARM_REG_PC)!=RETURN or cpu.reg_read(REGISTERS[-2])!=STACK+4096:
            raise RuntimeError('Case query failed bounded return/SP')
        if any(cpu.reg_read(REGISTERS[index])!=0x13570000+index*0x101 for index in range(4,12)):
            raise RuntimeError('Case query changed callee-save register')
        return cpu.reg_read(REGISTERS[0])
    if source:
        if call('pattern_bind_unicode_data',0x5000000)!=1:
            raise RuntimeError('Case query provider initialization failed')
        setup[0]=False
    return call,reached


def compare_all(original,source,library,binding,data):
    reference,original_path=machine(original,data,False)
    compiled,source_path=machine(source,data,True)
    original_start=next(row['start'] for row in data['metadata']['regions'] if row['name']=='caseGroups')
    native_start=ctypes.addressof(binding['buffers'][0])
    function=library.fn_004c35b0
    function.argtypes=[ctypes.c_uint]
    function.restype=ctypes.c_void_p
    digest=hashlib.sha256()
    queries=[*range(65536),65536,0x7fffffff,0x80000000,0xffffffff]
    hits=0
    def normalize(pointer,start):
        if not pointer:
            return None
        offset=pointer-start
        if offset%8 or not 0<=offset<1398*8:
            raise RuntimeError('Case query returned outside qualified immutable record array')
        return offset//8
    for character in queries:
        expected=normalize(reference('fn_004c35b0',character),original_start)
        actual=normalize(compiled('fn_004c35b0',character),0x5001000)
        native=normalize(function(character),native_start)
        if expected!=actual or expected!=native:
            raise RuntimeError('Case-query original/source/native record identity differs')
        hits+=expected is not None
        digest.update(struct.pack('<II',character,0xffffffff if expected is None else expected))
    if not services.unchanged(binding):
        raise RuntimeError('Case queries changed immutable native Unicode data')
    return {'unsigned16DomainExhausted':True,'u16Queries':65536,'additionalU32Queries':queries[-4:],
            'queries':len(queries),'hits':hits,'queryResultDigest':digest.hexdigest(),
            'originalAndSourceArmAndActualWindowsAgreed':True,'noDataWritesOutsidePrivateFrame':True,
            'calleeSavedAndSpPreserved':True,'originalInstructionsReached':sorted(original_path),
            'sourceInstructionsReached':sorted(source_path),'boundedNotUniversalEquivalence':True}
