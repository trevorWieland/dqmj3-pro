import ctypes
import hashlib
import random
import struct
import sys

from unicorn import Uc, UC_ARCH_ARM, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE, UC_PROT_READ, UC_PROT_WRITE, UC_PROT_EXEC
from unicorn import arm_const as arm
from unicorn import arm64_const as a64

from native_stream056_build import ROOT, SYMBOLS, load
from native_stream056_cases import model
from native_stream056_layout import *
from native_stream056_measure import FUNCTIONS, MODULE_SHA, measure
from digest024_oracle import arm_instruction_addresses

MESSAGES = ('invalid distance too far back','invalid distance code','invalid literal/length code')


def strings_in_sections(sections):
    result = {}
    for text in MESSAGES:
        matches = [address+data.find(text.encode()+b'\0') for address,size,flags,data in sections
                   if text.encode()+b'\0' in data]
        if len(matches) != 1:
            raise ValueError('Source diagnostic string not uniquely defined')
        result[text] = matches[0]
    return result


def verify_arena(actual,before,data,input_offset,expected,ram,layout,pointer_bytes,strings):
    wanted = expected_arena(before,data,input_offset,expected,ram,layout,pointer_bytes,strings)
    if actual != wanted:
        differences = [index for index,(left,right) in enumerate(zip(actual,wanted)) if left != right]
        error = ValueError('Stream state/output differs from independent model at '+','.join(hex(x) for x in differences[:16]))
        error.differences = differences
        error.actual = actual
        error.wanted = wanted
        error.normal_return = True
        raise error


class Machine:
    def __init__(self,target='arm',artifact=None):
        self.target,self.original = target,artifact is None
        self.layout,self.pointer_bytes = (TARGET,4) if target == 'arm' else (NATIVE,8)
        self.cpu = Uc(UC_ARCH_ARM64 if target == 'a64' else UC_ARCH_ARM,UC_MODE_ARM)
        if target == 'arm':
            self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        self.ram = 0x102000000 if target == 'a64' else 0x2000000
        self.stack = 0x106000000 if target == 'a64' else 0x3000000
        self.stop = 0x10fff0000 if target == 'a64' else 0x4000000
        self.sp = self.stack+0x8000
        self.coverage,self.defined = set(),set()
        if self.original:
            image = (ROOT/'generated/update-content0/code.bin').read_bytes()
            if target != 'arm' or hashlib.sha256(image).hexdigest() != MODULE_SHA:
                raise ValueError('056 original module/target mismatch')
            self.cpu.mem_map(0x100000,(len(image)+4095)&-4096)
            self.cpu.mem_write(0x100000,image)
            self.cpu.mem_protect(0x100000,(len(image)+4095)&-4096,UC_PROT_READ|UC_PROT_EXEC)
            self.entries = dict(zip(SYMBOLS,FUNCTIONS))
            claim = measure()
            self.instructions = {pc for ranges in FUNCTIONS.values() for start,end in ranges for pc in range(start,end,4)}
            self.original_strings = {row['symbol']:{dep['text']:dep['address'] for dep in row['dependencies']
                                                  if dep['kind'] == 'diagnostic-string'} for row in claim['functions']}
            self.readonly = [(dep['address'],dep['address']+dep['size']) for row in claim['functions'] for dep in row['dependencies']]
        else:
            sections,self.entries = load(artifact)
            pages = set()
            for address,size,flags,data in sections:
                for page in range(address&-4096,(address+size+4095)&-4096,4096):
                    if page not in pages:
                        self.cpu.mem_map(page,4096)
                        pages.add(page)
                if data:
                    self.cpu.mem_write(address,data)
            for page in pages:
                self.cpu.mem_protect(page,4096,UC_PROT_READ|UC_PROT_EXEC)
            self.instructions = arm_instruction_addresses(artifact) if target == 'arm' else {
                pc for address,size,flags,data in sections if flags&4 for pc in range(address,address+size,4)}
            self.readonly = [(address,address+size) for address,size,flags,data in sections]
            self.strings = strings_in_sections(sections)
            probe = bytes(self.cpu.mem_read(self.entries['stream056_layout'],23*4))
            if list(struct.unpack('<23I',probe)) != layout_words(self.layout):
                raise ValueError('Actual compiled C layouts differ from independent target/native binding')
        self.cpu.mem_map(self.ram,RAM_BYTES,UC_PROT_READ|UC_PROT_WRITE)
        self.cpu.mem_map(self.stack,0x10000,UC_PROT_READ|UC_PROT_WRITE)
        self.cpu.mem_map(self.stop,4096)
        self.cpu.hook_add(UC_HOOK_CODE,self.code)
        self.cpu.hook_add(UC_HOOK_MEM_READ,self.read)
        self.cpu.hook_add(UC_HOOK_MEM_WRITE,self.write)

    def code(self,cpu,address,size,unused):
        if size != 4 or address not in self.instructions:
            raise ValueError('056 execution escaped measured/source instructions at '+hex(address))
        self.coverage.add(address)

    def read(self,cpu,access,address,size,value,unused):
        if any(low <= address and address+size <= high for low,high in self.readonly+self.readable):
            return
        if self.sp-8192 <= address and address+size <= self.sp:
            if not all(index in self.defined for index in range(address,address+size)):
                raise ValueError('056 read undefined native-local stack storage')
            return
        raise ValueError('056 read escaped initialized input/state/table/history storage at '+hex(address))

    def write(self,cpu,access,address,size,value,unused):
        if any(low <= address and address+size <= high for low,high in self.writable):
            return
        if self.sp-8192 <= address and address+size <= self.sp:
            self.defined.update(range(address,address+size))
            return
        raise ValueError('056 wrote input/tables/history/canaries at '+hex(address))

    def execute(self,symbol,case):
        before,data,input_offset = seed(case,self.ram,self.layout,self.pointer_bytes)
        expected = model(case)
        self.cpu.mem_write(self.ram,bytes(before))
        self.cpu.mem_write(self.stack,random.Random(case['id']+0x56).randbytes(0x10000))
        self.defined.clear()
        self.readable = [(self.ram+offset,self.ram+offset+size) for offset,size in (
            (STREAM,self.layout['stream_size']),(STATE,self.layout['state_size']),
            (input_offset,len(data['payload'])),(OUTPUT,len(data['prefix'])+data['available_output']),
            (WINDOW,len(data['window'])),(LENGTHS,len(data['length_table'])*4),(DISTANCES,len(data['distance_table'])*4))]
        self.writable = [(self.ram+offset,self.ram+offset+size) for offset,size in (
            (STREAM,self.layout['stream_size']),(STATE,self.layout['state_size']),
            (OUTPUT+len(data['prefix']),data['available_output']))]
        cpu = self.cpu
        if self.target == 'arm':
            cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
            cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf << 20)
            cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
            cpu.reg_write(arm.UC_ARM_REG_FPSCR,0x00400000)
            cpu.reg_write(arm.UC_ARM_REG_SP,self.sp)
            cpu.reg_write(arm.UC_ARM_REG_LR,self.stop)
            saved = [(getattr(arm,'UC_ARM_REG_R'+str(i)),0x56000000+i) for i in range(4,12)]
            saved += [(getattr(arm,'UC_ARM_REG_D'+str(i)),0x5600000012340000+i) for i in range(8,16)]
            pc,sp,arg0,arg1 = arm.UC_ARM_REG_PC,arm.UC_ARM_REG_SP,arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1
        else:
            cpu.reg_write(a64.UC_ARM64_REG_SP,self.sp)
            cpu.reg_write(a64.UC_ARM64_REG_X30,self.stop)
            cpu.reg_write(a64.UC_ARM64_REG_FPCR,0)
            cpu.reg_write(a64.UC_ARM64_REG_FPSR,0)
            saved = [(getattr(a64,'UC_ARM64_REG_X'+str(i)),0x5600000012340000+i) for i in range(18,30)]
            saved += [(getattr(a64,'UC_ARM64_REG_D'+str(i)),0x5600000012340000+i) for i in range(8,16)]
            pc,sp,arg0,arg1 = a64.UC_ARM64_REG_PC,a64.UC_ARM64_REG_SP,a64.UC_ARM64_REG_X0,a64.UC_ARM64_REG_X1
        for register,value in saved:
            cpu.reg_write(register,value)
        cpu.reg_write(arg0,self.ram+STREAM)
        cpu.reg_write(arg1,data['available_output']+len(data['prefix']))
        cpu.emu_start(self.entries[symbol],self.stop,count=1000000)
        if cpu.reg_read(pc) != self.stop or cpu.reg_read(sp) != self.sp:
            raise ValueError('056 failed to return or restore stack')
        if any(cpu.reg_read(register) != value for register,value in saved):
            raise ValueError('056 violated integer/FP callee-save ABI')
        if self.target == 'arm' and cpu.reg_read(arm.UC_ARM_REG_FPSCR) != 0x00400000:
            raise ValueError('056 changed FPSCR')
        if self.target == 'a64' and (cpu.reg_read(a64.UC_ARM64_REG_FPCR) or cpu.reg_read(a64.UC_ARM64_REG_FPSR)):
            raise ValueError('056 changed FPCR/FPSR')
        actual = bytes(cpu.mem_read(self.ram,RAM_BYTES))
        strings = self.original_strings[symbol] if self.original else self.strings
        verify_arena(actual,before,data,input_offset,expected,self.ram,self.layout,self.pointer_bytes,strings)
        return observation(actual,expected,case,self.ram,self.layout,self.pointer_bytes)


class Windows:
    def __init__(self,path):
        self.library = ctypes.CDLL(str(path.resolve()))
        self.functions = {}
        for symbol in SYMBOLS:
            function = getattr(self.library,symbol)
            function.argtypes = [ctypes.c_void_p,ctypes.c_uint32]
            function.restype = None
            self.functions[symbol] = function
        if list((ctypes.c_uint32*23).in_dll(self.library,'stream056_layout')) != layout_words(NATIVE):
            raise ValueError('Windows compiled layout differs from independent native binding')
        raw = path.read_bytes()
        offset = struct.unpack_from('<I',raw,0x3c)[0]
        count,optional = struct.unpack_from('<H',raw,offset+6)[0],struct.unpack_from('<H',raw,offset+20)[0]
        sections = []
        for index in range(count):
            header = offset+24+optional+index*40
            size,address,raw_size,raw_offset = struct.unpack_from('<IIII',raw,header+8)
            sections.append((self.library._handle+address,size,0,raw[raw_offset:raw_offset+raw_size]))
        self.strings = strings_in_sections(sections)

    def close(self):
        if self.library is not None:
            from _ctypes import FreeLibrary
            self.functions.clear()
            FreeLibrary(self.library._handle)
            self.library = None

    def execute(self,symbol,case):
        allocation = ctypes.create_string_buffer(RAM_BYTES)
        ram = ctypes.addressof(allocation)
        if ram <= 0xffffffff:
            raise ValueError('Windows test failed to use genuine high native pointers')
        before,data,input_offset = seed(case,ram,NATIVE,8)
        ctypes.memmove(ram,bytes(before),RAM_BYTES)
        self.functions[symbol](ram+STREAM,data['available_output']+len(data['prefix']))
        actual = ctypes.string_at(ram,RAM_BYTES)
        expected = model(case)
        verify_arena(actual,before,data,input_offset,expected,ram,NATIVE,8,self.strings)
        return observation(actual,expected,case,ram,NATIVE,8)
