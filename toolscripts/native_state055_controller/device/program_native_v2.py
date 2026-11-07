import ctypes
from pathlib import Path
import hashlib
import json
import math
import struct
import unicorn
from unicorn import arm_const as arm,arm64_const as a64
from native_state055_build import load
from controller5_measure import WORK,pin
from controller5_lighting_model import apply_lighting
from controller5_remaining_model import apply_remaining
from table_model_v2 import TableModel
from controller5_uniform_model import apply_invalidate,apply_uniforms
from controller5_attribute_model import apply_attributes
from controller5_native_storage import configure_windows,configure_machine,windows_observations,machine_observations
from controller5_sequence import target_calls,windows_calls,model_calls
from controller5_fixture import ARENA,STACK,STOP,CONTEXT,SELECTED,SLOT,MASK,SHADER,WORDS,OUTPUT,target_input


class Control(ctypes.Structure):
    _fields_=[('opaque',ctypes.c_uint32*2),('selection',ctypes.c_void_p),('stage',ctypes.c_uint32),
              ('values',ctypes.c_uint32*24),('auxiliary',ctypes.c_uint32*6),('primary',ctypes.c_uint32*6),('remaining',ctypes.c_uint32*157)]


def native_input(case,base):
    target=target_input(case).data
    data=bytearray(target)
    def pointer(offset,value):struct.pack_into('<Q',data,offset,value)
    def word(offset,value):struct.pack_into('<I',data,offset,value)
    relative=lambda address:address-ARENA
    pointer(relative(SLOT),base+relative(SELECTED) if case['selected'] else 0)
    pointer(relative(SLOT)+8,0)
    data[relative(SLOT)+0x100c:relative(SLOT)+0x1300]=bytes(189*4)
    pointer(relative(SELECTED)+0xe88,base+relative(SHADER))
    pointer(relative(SELECTED)+0xe90,0)
    pointer(relative(SELECTED)+0xe98,0)
    word(relative(SELECTED)+0x414,0)
    for index,offset in enumerate([0x2c,0x1c0]):
        address=struct.unpack_from('<I',target,relative(SELECTED)+offset)[0]
        word(relative(SELECTED)+offset,0)
        pointer(relative(SELECTED)+0xea0+index*8,base+address-ARENA if address else 0)
    data[relative(SHADER):relative(SHADER)+40]=bytes(40)
    pointer(relative(SHADER),base+relative(WORDS))
    word(relative(SHADER)+8,case.get('stream_counts',[0,0])[0])
    pointer(relative(SHADER)+16,base+relative(WORDS)+0x1000)
    word(relative(SHADER)+24,case.get('stream_counts',[0,0])[1])
    pointer(relative(SHADER)+32,base+0x12000)
    data[0x12000:0x12000+480]=bytes(480)
    for index in range(2):
        pointer(0x12000+index*240+0x30,base+relative(WORDS))
        word(0x12000+index*240+0x38,case.get('record_count',0))
    for index in range(16):
        address=struct.unpack_from('<I',target,relative(CONTEXT)+0x468+index*24)[0]
        word(relative(CONTEXT)+0x468+index*24,0)
        pointer(relative(CONTEXT)+0x868+index*8,base+address-ARENA if address else 0)
    word(relative(SELECTED)+0x870,0)
    for index in range(16):word(relative(SELECTED)+0x7f4+index*8,0)
    for index in range(32):
        pointer(0x9000+0x828+index*8,0 if index in case.get('missing_resources',[]) else base+0xa000+index*8)
        address=struct.unpack_from('<I',target,0xa000+index*4)[0]
        pointer(0xa000+index*8,base+address-ARENA if address else 0)
    resource_offsets=sorted({0xb000,*[entry['offset']for entry in case.get('resources',[])]})
    for offset in resource_offsets:
        data[offset+0x804:offset+0x840]=bytes(0x3c)
        for index in range(6):
            address=struct.unpack_from('<I',target,offset+0x804+index*4)[0]
            pointer(offset+0x808+index*8,base+address-ARENA if address else 0)
        word(offset+0x838,struct.unpack_from('<I',target,offset+0x81c)[0])
    return data


def model(case,data,base,stage=0xffffffff,output=None):
    output=OUTPUT-ARENA if output is None else output
    limit=output+case['capacity']*4
    def get(offset):return struct.unpack_from('<I',data,offset)[0]
    def put(offset,value):struct.pack_into('<I',data,offset,value&0xffffffff)
    def pair(value,header):
        nonlocal output
        if output<limit:
            put(output,value);put(output+4,header);output+=8
    def reserve(base,count):
        nonlocal output
        if limit<=output+(count+2)*4:
            output=limit
        elif count:
            put(output,0);put(output+4,base|((count-1)<<20));output+=4*(2+(count&~1))
    def write(base,count,source,increment=False):
        nonlocal output
        needed=(count&~1)+2*(count//128)+2
        if output+needed*4>=limit:
            output=limit;return
        for start in range(0,count,128):
            length=min(128,count-start)
            put(output,get(source+start*4))
            header=(base+start if increment else base)|((length-1)<<20)|(0x800f0000 if increment else 0xf0000)
            put(output+4,header);output+=8
            for index in range(length//2*2):
                put(output,get(source+(start+index+1)*4));output+=4
    flags=case['flags'];mask=case['mask']
    if flags&0x1000 and mask&0x200:
        width,height=case['size']
        if not case['clip']:
            left=top=mode=0;right=(width-1)&0xffffffff;bottom=(height-1)&0xffffffff
        else:
            left,top,w,h=case['rect']
            right=(left+w-1)&0xffffffff;bottom=(top+h-1)&0xffffffff
            signed=lambda value:value if value<0x80000000 else value-0x100000000
            right=width-1 if signed(right)>width else max(0,signed(right))
            bottom=height-1 if signed(bottom)>height else max(0,signed(bottom))
            left=width-1 if left>=width else max(left,0)
            top=height-1 if top>=height else max(top,0)
            mode=3
        pair(mode,0xf0065);pair(left|top<<16,0xf0066);pair(right|bottom<<16,0xf0067)
    tables=TableModel(data,base)
    if not case['selected']:return data,output,stage,tables.events
    mode=case.get('stream_enabled',0)!=0
    if flags&4 and (int(mode)!=stage or get(CONTEXT-ARENA+4)&4):
        reserve(0x251,10);reserve(0x200,30);pair(2 if mode else 0,0x10229);reserve(0x200,30)
        stage=int(mode);pair(stage,0x10244)
    count,operands=case.get('stream_counts',[0,0])
    if flags&1 and mask&0x100000:
        if mode:
            pair(0,0xf029b);write(0x29c,count,WORDS-ARENA);pair(1,0xf028f)
            pair(0,0xf02a5);write(0x2a6,operands,WORDS-ARENA+0x1000)
        elif count>512:
            pair(512,0xf029b);write(0x29c,count-512,WORDS-ARENA+2048);pair(1,0xf028f)
        pair(0,0xf02cb);write(0x2cc,min(count,512),WORDS-ARENA);pair(1,0xf02bf)
        pair(0,0xf02d5);write(0x2d6,operands,WORDS-ARENA+0x1000)
    if flags&4:
        for index in range(1,17):
            if index<=8 and (not mode or not mask&0x800000):continue
            if index>=9 and not mask&0x1000000:continue
            put(SLOT-ARENA+0x1014+index*4,~get(SELECTED-ARENA+0x4e4+index*4))
    if flags&8:
        for enabled,header in [(mode and mask&0x400000,0x290),(mask&0x200000,0x2c0)]:
            if enabled:
                for index in range(case.get('record_count',0)):
                    write(header,4,WORDS-ARENA+index*16,True)
    apply_attributes(case,data,base,pair,write)
    apply_invalidate(case,data)
    apply_uniforms(case,data,base,pair,write)
    if flags&0x400 and mask&4:
        as_float=lambda bits:struct.unpack('<f',struct.pack('<I',bits))[0]
        def rounded(value):
            try:return struct.unpack('<f',struct.pack('<f',value))[0]
            except OverflowError:return math.copysign(math.inf,value)
        bits=lambda value:struct.unpack('<I',struct.pack('<f',value))[0]
        def packed(value):
            sign=value>>31
            exponent=((value>>23)&255)-64 if value&0x7fffffff else 0
            return (sign<<23)if exponent<0 else ((value>>7)&0xffff)|(exponent<<16)|(sign<<23)
        override=get(SELECTED-ARENA+0xe4c)
        if as_float(override)==0:
            base_bits=get(CONTEXT-ARENA+0x4c)
            range_bits=bits(rounded(as_float(base_bits)-as_float(get(CONTEXT-ARENA+0x50))))
        else:
            base_bits=0;range_bits=override^0x80000000
        if data[CONTEXT-ARENA+0x54] and as_float(get(CONTEXT-ARENA+0x44))!=0:
            unit=rounded(1/(16777215 if get(CONTEXT-ARENA+0x68c) else 65535))
            bias=rounded(as_float(get(CONTEXT-ARENA+0x44))*unit)
            base_bits=bits(rounded(as_float(base_bits)+bias))
        outputs=[packed(range_bits),0 if as_float(base_bits)==0 else packed(base_bits)]
        for index,value in zip([23,24],outputs):
            data[SELECTED-ARENA+0x426+index]|=15
            current=SELECTED-ARENA+0x4e4+index*4
            if data[CONTEXT-ARENA+12] or get(current)!=value:
                put(current,value)
                put(SELECTED-ARENA+0x7d8,get(SELECTED-ARENA+0x7d8)|(1<<index))
                put(CONTEXT-ARENA,get(CONTEXT-ARENA)|0x80000)
                if data[CONTEXT-ARENA+12]:put(SLOT-ARENA+0x1014+index*4,~value)
    if flags&0x20 and get(SELECTED-ARENA+0x624)&7==7:
        value=get(SELECTED-ARENA+0x630)
        dirty=SELECTED-ARENA+0x7e0
        if data[SELECTED-ARENA+0xe74]:
            put(SLOT-ARENA+0x1014+83*4,value);put(dirty,get(dirty)&~0x80000)
        else:
            put(SLOT-ARENA+0x1014+83*4,~value);put(dirty,get(dirty)|0x80000)
    groups=[[1,2,3,4,5],[9,10,11,12,13],[0,6,7,8,14,15,16,17,18,19,20,21,22,25,26,27,28,29,30,31,32,38,40]]
    excluded=set().union(*[set(group)for group in groups])
    remaining=[value for value in range(189)if value not in excluded]
    remaining.remove(84);remaining.insert(remaining.index(80),84)
    ordered=[]
    if flags&0x10:ordered+=groups[0]+groups[1]
    if flags&2:ordered+=groups[2]
    if flags&0x20:ordered+=remaining
    for index in ordered:
        dirty=SELECTED-ARENA+0x7d8+index//32*4
        bit=1<<(index%32)
        if not get(dirty)&bit:continue
        format=data[SELECTED-ARENA+0x426+index]
        if format:
            value=get(SELECTED-ARENA+0x4e4+index*4)
            cache=SLOT-ARENA+0x1014+index*4
            if value!=get(cache):
                pair(value,case.get('headers',[0]*189)[index]|format<<16)
                put(cache,get(SELECTED-ARENA+0x4e4+index*4))
        put(dirty,get(dirty)&~bit)
    uploaded=apply_lighting(case,data,base,pair,write,tables)
    apply_remaining(case,data,base,pair,write,reserve,tables,uploaded)
    if flags&0x800:
        mode=get(SELECTED-ARENA+0xe38)
        if mask&0x100 or mode!=get(CONTEXT-ARENA+0x644):
            put(CONTEXT-ARENA+0x644,mode)
            pair(1,0xf0111);pair(1,0xf0110)
            if mode in [0x6048,0x6051]:
                for value,header in [(15,0xf0113),(15,0xf0112),(3 if mode==0x6051 else 0,0xf0114),(0,0xf0115)]:pair(value,header)
            elif mode==0x6030:
                channels=sum(data[CONTEXT-ARENA+0x654+index]<<index for index in range(4))
                color_read=channels!=0
                color_write=color_read and (get(CONTEXT-ARENA+0x688)==1 or data[CONTEXT-ARENA+0x64c] or channels!=15 or data[CONTEXT-ARENA+0x64d])
                first=bool(data[CONTEXT-ARENA+0x64b]);second=bool(data[CONTEXT-ARENA+0x64a])
                first_write=first and bool(data[CONTEXT-ARENA+0x658])
                second_write=second and bool(get(CONTEXT-ARENA+0x65c))
                pair(15 if color_write else 0,0xf0112);pair(15 if color_read else 0,0xf0113)
                pair((2 if first and (first_write or color_read) else 0)|(1 if second and (second_write or color_read) else 0),0xf0114)
                pair((2 if first_write else 0)|(1 if second_write else 0),0xf0115)
    return data,output,stage,tables.events


def validate(case,base,before,after,pair,stage,control,layout,strict=True):
    expected,offset,want_stage,events=model_calls(model,case,bytearray(before),base)
    different=[]
    if bytes(expected)!=after:different.append('whole-arena')
    if pair!=[base+offset,base+(OUTPUT-ARENA)+case['capacity']*4]:different.append('cursor-and-limit')
    if stage!=want_stage:different.append('stage-mode')
    if strict:assert not different,(case['label'],different)
    assert layout==[0x8e8,0xfb0,0x1308,40,240,0x318,0x1014,0,8,16,24,32,48,56,8,16],layout
    assert control.selection==base+(SLOT-ARENA)
    ids=list(control.values)+list(control.auxiliary)+list(control.primary)+list(control.remaining)
    assert sorted(value for value in ids if value!=189)==list(range(189))
    return dict(input=case,actualArenaBase=base,finalArenaSha256=hashlib.sha256(after).hexdigest(),
                finalPair=pair,finalStageMode=stage,wholeArenaMatchesIndependentModel=bytes(expected)==after,returnedNormally=True,independentModelDifferences=different,
                expectedStorageObservations=events,compilerLayout=layout,allUsedNativePointersFullWidth=True,controllerWholeBodyQualified=False)


class Windows:
    class Pair(ctypes.Structure):
        _fields_=[('cursor',ctypes.c_void_p),('limit',ctypes.c_void_p)]

    def __init__(self,stage=None):
        work=Path(stage) if stage is not None else WORK
        self.dll=ctypes.CDLL(str(work/'program-build/program055.dll'))
        self.call=self.dll.state_apply_controller055
        self.call.argtypes=[ctypes.c_void_p,ctypes.c_uint32];self.call.restype=None
        self.reset=self.dll.state_apply_reset_defaults055;self.reset.restype=None
        self.layout=self.dll.state_program_layout055;self.layout.restype=ctypes.POINTER(ctypes.c_uint32)
        self.float_mode=self.dll.state_program_float_mode055;self.float_mode.restype=ctypes.c_uint32
        self.prepare_float=self.dll.state_program_prepare_float055;self.prepare_float.restype=ctypes.c_uint32
        self.restore_float=self.dll.state_program_restore_float055;self.restore_float.argtypes=[ctypes.c_uint32]
        self.control=Control.in_dll(self.dll,'state_apply_globals055')
        self.pair=self.Pair.in_dll(self.dll,'state_pair055')
        self.context=ctypes.c_void_p.in_dll(self.dll,'state_apply_context055')
        self.headers=(ctypes.c_uint32*189).in_dll(self.dll,'state_apply_headers055')
        self.kernel=ctypes.WinDLL('kernel32',use_last_error=True)
        self.kernel.VirtualAlloc.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_ulong,ctypes.c_ulong]
        self.kernel.VirtualAlloc.restype=ctypes.c_void_p
        self.kernel.VirtualFree.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_ulong];self.kernel.VirtualFree.restype=ctypes.c_int
        self.base=self.kernel.VirtualAlloc(0x120000000,0x40000,0x3000,4);assert self.base==0x120000000

    def execute(self,case,strict=True):
        self.reset();before=bytes(native_input(case,self.base));ctypes.memmove(self.base,before,len(before))
        self.context.value=self.base+(CONTEXT-ARENA);self.control.selection=self.base+(SLOT-ARENA)
        for index,value in enumerate(case.get('headers',[0]*189)):self.headers[index]=value
        self.pair.cursor=self.base+(OUTPUT-ARENA);self.pair.limit=self.pair.cursor+case['capacity']*4
        configure_windows(self.dll,self.base,case)
        saved_float_mode=self.prepare_float()
        before_float_mode=self.float_mode()
        assert before_float_mode&0xe040==0 and before_float_mode&0x1f80==0x1f80,hex(before_float_mode)
        windows_calls(self.call,self.base,case)
        after_float_mode=self.float_mode()
        self.restore_float(saved_float_mode)
        assert before_float_mode&0xe040==after_float_mode&0xe040
        result=validate(case,self.base,before,ctypes.string_at(self.base,len(before)),[self.pair.cursor,self.pair.limit],
                        self.control.stage,self.control,[self.layout()[index]for index in range(16)],strict)
        result['storageObservations']=windows_observations(self.dll)
        if result['storageObservations']!=result['expectedStorageObservations']:result['independentModelDifferences'].append('allocation-observer')
        if strict:assert not result['independentModelDifferences']
        result['actualMxcsrBefore']=before_float_mode
        result['actualMxcsrAfter']=after_float_mode
        result['floatingStatusEqualityClaimed']=False
        return result

    def close(self):assert self.kernel.VirtualFree(self.base,0,0x8000)


def machine(case,strict=True,stage=None):
    work=Path(stage) if stage is not None else WORK
    base=0x110000000
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64,unicorn.UC_MODE_ARM)
    segments,symbols,functions=load(work/'program-build/a64.elf')
    pages=set()
    for address,size,flags,data in segments:
        for page in range(address&-4096,(address+size+4095)&-4096,4096):
            if page not in pages:
                cpu.mem_map(page,4096);pages.add(page)
        if data:cpu.mem_write(address,data)
    cpu.mem_map(STACK,0x10000);cpu.mem_map(STOP,4096)
    cpu.reg_write(a64.UC_ARM64_REG_SP,STACK+0xe000);cpu.reg_write(a64.UC_ARM64_REG_X30,STOP)
    pcs=set()
    def step(machine,address,size,unused):
        assert size==4 and any(start<=address<end for start,end in functions),hex(address)
        pcs.add(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE,step)
    cpu.emu_start(symbols['state_apply_reset_defaults055'],STOP,count=100000)
    before=bytes(native_input(case,base));cpu.mem_map(base,len(before));cpu.mem_write(base,before)
    def pointer(address,value):cpu.mem_write(address,struct.pack('<Q',value))
    pointer(symbols['state_apply_context055'],base+(CONTEXT-ARENA))
    for index,value in enumerate(case.get('headers',[0]*189)):
        cpu.mem_write(symbols['state_apply_headers055']+index*4,struct.pack('<I',value))
    pointer(symbols['state_apply_globals055']+8,base+(SLOT-ARENA))
    pointer(symbols['state_pair055'],base+(OUTPUT-ARENA))
    pointer(symbols['state_pair055']+8,base+(OUTPUT-ARENA)+case['capacity']*4)
    configure_machine(cpu,symbols,base,case)
    cpu.reg_write(a64.UC_ARM64_REG_CPACR_EL1,3<<20)
    cpu.reg_write(a64.UC_ARM64_REG_FPCR,0)
    cpu.reg_write(a64.UC_ARM64_REG_FPSR,0)
    saved=[(getattr(a64,'UC_ARM64_REG_X'+str(index)),0x432100000000+index*397)for index in range(19,30)]
    saved += [(getattr(a64,'UC_ARM64_REG_D'+str(index)),0x3ff0000000000000+index*797)for index in range(8,16)]
    for register,value in saved:cpu.reg_write(register,value)
    cpu.reg_write(a64.UC_ARM64_REG_X0,base+(MASK-ARENA));cpu.reg_write(a64.UC_ARM64_REG_X1,case['flags'])
    cpu.reg_write(a64.UC_ARM64_REG_X30,STOP)
    target_calls(cpu,symbols['state_apply_controller055'],case,True,base)
    assert cpu.reg_read(a64.UC_ARM64_REG_PC)==STOP and cpu.reg_read(a64.UC_ARM64_REG_SP)==STACK+0xe000
    assert all(cpu.reg_read(register)==value for register,value in saved)
    pair=list(struct.unpack('<QQ',bytes(cpu.mem_read(symbols['state_pair055'],16))))
    control=Control.from_buffer_copy(bytes(cpu.mem_read(symbols['state_apply_globals055'],ctypes.sizeof(Control))))
    cpu.reg_write(a64.UC_ARM64_REG_X30,STOP);cpu.emu_start(symbols['state_program_layout055'],STOP,count=1000)
    layout=list(struct.unpack('<16I',bytes(cpu.mem_read(cpu.reg_read(a64.UC_ARM64_REG_X0),64))))
    result=validate(case,base,before,bytes(cpu.mem_read(base,len(before))),pair,control.stage,control,layout,strict)
    result['storageObservations']=machine_observations(cpu,symbols)
    if result['storageObservations']!=result['expectedStorageObservations']:result['independentModelDifferences'].append('allocation-observer')
    if strict:assert not result['independentModelDifferences']
    result['compiledSourcePcs']=sorted(pcs);result['savedIntegerFpRegistersAndSpPreserved']=True
    result['actualFpcr']=cpu.reg_read(a64.UC_ARM64_REG_FPCR)
    result['actualFpsr']=cpu.reg_read(a64.UC_ARM64_REG_FPSR)
    result['floatingStatusEqualityClaimed']=False
    return result


def run():
    rows=[];native=Windows()
    try:
        for mode in [0,1]:
            for count in [0,1,128,129,512,513]:
                for capacity in [1,4096]:
                    case=dict(label=f'program-native-{mode}-{count}-{capacity}',selected=True,stream_enabled=mode,
                              stream_counts=[count,count],record_count=1,clip=False,rect=[0,0,0,0],size=[640,480],
                              capacity=capacity,flags=13,mask=0xffffffff)
                    rows.append(dict(input=case,actualWindows=native.execute(case),highAarch64=machine(case)))
    finally:native.close()
    report=dict(schemaVersion=1,status='actual-Windows-high-Aarch64-partial-program-phases-independent-model',caseSets=len(rows),cases=rows,
                sourceContainsOriginalExecutable=False,wholeControllerClaimed=False,sourceCreditGranted=0,producer=pin(__file__))
    out=WORK/'program-native-frontier.json';out.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(report=pin(out),cases=len(rows))))
    return report


if __name__=='__main__':
    run()
