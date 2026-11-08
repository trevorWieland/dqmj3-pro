import hashlib
import json
import math
import struct
from controller6_measure import WORK,pin
from controller6_fixture import ARENA,CONTEXT,SELECTED,SLOT
from controller6_reference import execute as original
from controller6_uniform_probe import machine,Windows
from native_wave014_oracle import original_image


def rounded(value):
    try:return struct.unpack('<f',struct.pack('<f',value))[0]
    except OverflowError:return math.copysign(math.inf,value)


def independent(case,before):
    data=bytearray(before);native=case.get('_native_model',False)
    def selected(offset):return SELECTED-ARENA+(offset if not native or offset<0xe84 else offset-0xe84+0xfb0)
    def read(offset):return struct.unpack_from('<I',data,offset)[0]
    def put(offset,value):struct.pack_into('<I',data,offset,value&0xffffffff)
    operation=(case['location']&0x3ffff)>>2;source=case.get('input_words',[0x3f800000,0x40000000,0x40400000,0x40800000]*16)
    def remember(offset,count):
        for index in range(count):put(selected(offset+index*4),source[index])
    def assign(identifier,value,mask,format):
        format_offset=selected(0x426+identifier)
        data[format_offset]|=format
        offset=selected(0x4e4+identifier*4);old=read(offset);forced=data[CONTEXT-ARENA+12]!=0
        if forced or old&mask != value&mask:
            merged=(old&~mask)|(value&mask);put(offset,merged)
            dirty=selected(0x7d8+(identifier//32)*4);put(dirty,read(dirty)|(1<<(identifier%32)))
            put(CONTEXT-ARENA,read(CONTEXT-ARENA)|0x80000)
            if forced:put(SLOT-ARENA+(0x1014 if native else 0x100c)+identifier*4,~merged)
    def half(bits):
        sign=(bits//0x80000000)*32768
        if bits&0x7fffffff == 0:return sign
        power=((bits&0x7fffffff)//8388608)-112
        return sign if power<0 else sign|(power*1024)|((bits%8388608)//8192)
    def custom20(bits):
        sign=(bits//0x80000000)*524288
        if bits&0x7fffffff == 0:return sign
        power=((bits&0x7fffffff)//8388608)-64
        return sign if power<0 else sign|(power*4096)|((bits%8388608)//2048)
    def custom24(bits):
        sign=(bits//0x80000000)*8388608
        if bits&0x7fffffff == 0:return sign
        power=((bits&0x7fffffff)//8388608)-64
        return sign if power<0 else sign|(power*65536)|((bits%8388608)//128)
    def float_bits(value):return struct.unpack('<I',struct.pack('<f',rounded(value)))[0]
    def float_word(bits):return struct.unpack('<f',struct.pack('<I',bits))[0]
    def positive24(bits,scale):
        number=float_word(bits)
        if not number>0 or not math.isfinite(number):return 0
        scaled=rounded(number*scale)
        return int(scaled)if scaled<16777216 else 0xffffff
    def scalar_byte(number):
        scaled=rounded(rounded(number*255)+0.5)
        return 0 if not scaled>=0 else 0xffffffff if scaled>=4294967296 else int(scaled)
    def clamped_integer(number):
        bits=float_bits(number)
        return scalar_byte(1.0 if 0x3f800000<bits<0x80000000 else number)
    def selected_float(offset):return float_word(read(selected(offset)))
    def group_color(group,index):
        values=[selected_float(0xa24+group*16+index*112+component*4)for component in range(3)]
        if group!=3 or data[selected(0x9ec)]:
            values=[rounded(value*selected_float(0xda0+group*16+component*4))for component,value in enumerate(values)]
        return sum(clamped_integer(value)<<shift for value,shift in zip(values,[20,10,0]))
    def combined():
        values=[rounded(selected_float(0xde0+component*4)+rounded(selected_float(0xa10+component*4)*selected_float(0xda0+component*4)))for component in range(3)]
        assign(180,sum(clamped_integer(value)<<shift for value,shift in zip(values,[20,10,0])),0xffffffff,15)
    def fixed(bits,bias,scale,maximum,center):
        value=struct.unpack('<f',struct.pack('<I',bits))[0]
        if not math.isfinite(value) or value==0:return 0
        shifted=rounded(rounded(value+bias)*scale)
        shifted=max(0,min(shifted,maximum))
        return int(shifted-center if shifted>=center else shifted+center)
    def color(count):
        result=0
        for index in range(count):
            value=struct.unpack('<f',struct.pack('<I',source[index]))[0]
            scaled=rounded(rounded(value*255)+0.5)
            integer=0 if not scaled>=0 else 0xffffffff if scaled>=4294967296 else int(scaled)
            result|=integer<<(index*8)
        return result&0xffffffff
    if operation==2:remember(0xe48,1)
    elif operation==0x13:
        packed=half(source[0]);remember(0xe10,1)
        assign(44,(packed&255)*1048576,0xff00000,12);assign(48,((packed//256)&255)*524288,0x7f80000,12)
    elif 0x114<=operation<=0x119:
        number=struct.unpack('<f',struct.pack('<I',source[0]))[0]
        value=next((index for index,low in enumerate([1,2,4])if low<=number<low+1),None)
        if value is not None:assign(54+(operation-0x114)*5,value*65536,0x30000,4)
    elif 0x11a<=operation<=0x11f:
        index=operation-0x11a;remember(0xeac+index*16,4);assign(53+index*5,color(4),0xffffffff,15)
    elif operation in[0x120,0x126,0x27]:
        identifier,backup,count,mask,format={0x120:(84,0xf0c,4,0xffffffff,15),0x126:(81,0xe68,3,0xffffffff,15),0x27:(85,0xe84,3,0xffffff,7)}[operation]
        remember(backup,count);assign(identifier,color(count),mask,format)
    elif 0x41<=operation<=0x60:
        group,index=divmod(operation-0x41,8);remember(0xa24+group*16+index*112,4)
        packed=0
        for component in range(3):
            number=struct.unpack('<f',struct.pack('<I',source[component]))[0]
            if group!=3 or data[selected(0x9ec)]:
                multiplier=struct.unpack_from('<f',data,selected(0xda0+group*16+component*4))[0]
                number=rounded(number*multiplier)
            bits=struct.unpack('<I',struct.pack('<f',number))[0]
            if 0x3f800000<bits<0x80000000:number=1.0
            scaled=rounded(rounded(number*255)+0.5)
            integer=0 if not scaled>=0 else 0xffffffff if scaled>=4294967296 else int(scaled)
            packed|=integer<<((2-component)*10)
        assign([95,94,92,93][group]+index*11,packed,0xffffffff,15)
    elif 0x61<=operation<=0x68:
        index=operation-0x61;remember(0xa64+index*112,4)
        assign(96+index*11,half(source[0])|(half(source[1])<<16),0xffffffff,15)
        assign(97+index*11,half(source[2]),0xffffffff,15)
        assign(100+index*11,int(source[3]&0x7fffffff==0),1,1)
    elif 0xa1<=operation<=0xb0:
        second=operation>=0xa9;index=operation-(0xa9 if second else 0xa1)
        remember((0xa88 if second else 0xa84)+index*112,1)
        assign((102 if second else 101)+index*11,custom20(source[0]),0xfffff,7)
    elif operation in[0x15,0x16]:
        index=operation-0x15
        assign(45+index,fixed(source[2],8,4096,65535,32768)|(half(source[1])<<16),0xffffffff,15)
        assign(47,half(source[0])<<(16*index),0xffff<<(16*index),3<<(2*index))
        remember(0xe14+index*12,3)
    elif 0x69<=operation<=0x70:
        index=operation-0x69;remember(0xa74+index*112,3)
        values=[fixed(bits^0x80000000,2,2048,8191,4096)for bits in source[:3]]
        assign(98+index*11,values[0]|(values[1]<<16),0xffffffff,15)
        assign(99+index*11,values[2],0xffffffff,15)
    elif 0x10e<=operation<=0x113:
        number=struct.unpack('<f',struct.pack('<I',source[0]))[0]
        value=next((index for index,low in enumerate([1,2,4])if low<=number<low+1),None)
        if value is not None:assign(54+(operation-0x10e)*5,value,3,1)
    elif 0xcf<=operation<=0xd5:
        number=struct.unpack('<f',struct.pack('<I',source[0]))[0]*4
        code=next((code for low,code in[(1,6),(2,7),(4,0),(8,1),(16,2),(32,3)]if low<=number<low+1),None)
        if code is not None:
            shift=(operation-0xcf)*4;assign(187,code<<shift,15<<shift,1<<(shift//8))
    elif operation in[1,0x29]:
        assign(42 if operation==1 else 88,positive24(source[0],16777216 if operation==1 else 256),0xfffffe if operation==1 else 0xffffff,7)
        remember(0xe44 if operation==1 else 0xea0,1)
    elif operation in[0x1f,0x20]:
        remember(0xe40 if operation==0x1f else 0xe3c,1)
        primary=read(selected(0xe40));secondary=read(selected(0xe3c))
        total=float_bits(float_word(primary)+float_word(secondary))
        assign(91,half(total)|(half(primary^0x80000000)<<16),0xffffffff,15)
    elif operation==0x21:
        value=float_word(source[0]);zero=value==0
        assign(39,int(zero),0xffffffff,15)
        base=struct.unpack_from('<f',data,CONTEXT-ARENA+0x4c)[0]if zero else 0
        end=struct.unpack_from('<f',data,CONTEXT-ARENA+0x50)[0]
        extent=rounded(base-end)if zero else -value
        bias=struct.unpack_from('<f',data,CONTEXT-ARENA+0x44)[0]
        if data[CONTEXT-ARENA+0x54]and bias!=0:
            step=float_word(0x33800001 if read(CONTEXT-ARENA+0x68c)else 0x37800080)
            base=rounded(base+rounded(bias*step))
        assign(23,custom24(float_bits(extent)if zero else source[0]^0x80000000),0xffffffff,15)
        assign(24,0 if base==0 else custom24(float_bits(base)),0xffffffff,15)
        remember(0xe4c,1)
    elif operation==0x23:
        for index,bits in enumerate(source[:4]):assign(34+index,custom24(bits),0xffffffff,15)
        remember(0xe50,4)
    elif operation==0x26:
        assign(90,(scalar_byte(float_word(source[0]))&255)<<8,0xff00,2);remember(0xe60,1)
    elif operation==0x28:
        assign(86,color(3),0xffffff,7)
        alpha=1 if 0x3f800000<source[3]<0x80000000 else float_word(source[3])
        assign(87,scalar_byte(alpha),255,1);remember(0xe90,4)
    elif operation in[0x2a,0x2c]:
        bits=0 if operation==0x2a and source[0]&0x7fffffff==0 else source[0]
        assign(83 if operation==0x2a else 82,half(bits),0xffffffff,15);remember(0xea4 if operation==0x2a else 0xea8,1)
    elif operation in[0x33,0x34]:
        remember(0xa10 if operation==0x33 else 0xde0,4);combined()
    elif 0x35<=operation<=0x38:
        group=operation-0x35
        previous=[selected_float(0xda0+group*16+component*4)for component in range(4)]
        remember(0xda0+group*16,4)
        if any(old!=float_word(new)for old,new in zip(previous,source[:4])):
            for index in range(8):assign([95,94,92,93][group]+index*11,group_color(group,index),0xffffffff,15)
            if group==0:combined()
    else:return data
    return data


def cases():
    profiles=[[value,value^0x80000000,0x3f000000,0x3f800000]for value in
              [0,0x80000000,1,2,4,3,0x3f800000,0xbf800000,0x3eaaaaab,0x40000000,0x7f800000,0xff800000,0x7fc12345,0x7f812345,0x00800000,0x00012345,0x7f7fffff]]
    operations=[2,0x13,*range(0x114,0x120),0x120,0x126,0x27]
    for force in[0,1]:
        for profile,values in enumerate(profiles):
            for operation in operations:
                yield dict(label=f'property-{operation:03x}-{profile}-{force}',location=0x40000|(operation<<2),input_words=values*16,components=4,count=1,
                           context_words={12:force},selection_words={0x594:0xa5c39e17,0x5a4:0x26d8e431,0x7d8:0x1234,0x7dc:0x98,0x7e0:0x6701},
                           cache_words={0x100c+identifier*4:0x5a55aa55 for identifier in range(189)})


def run():
    claim=json.loads((WORK/'claim.json').read_text());image=original_image();rows=[]
    native=Windows('state_dispatch_property_component6',independent)
    try:
        for index,case in enumerate(cases()):
            expected=original(case,image,claim);assert expected['returned']
            arm=machine(case,False,'state_dispatch_property_component6',independent)
            assert arm['finalArenaSha256']==expected['finalArenaSha256'],case['label']
            rows.append(dict(input=case,original=expected,sourceArm=arm,actualWindows=native.execute(case),highAarch64=machine(case,True,'state_dispatch_property_component6',independent)))
            if (index+1)%100==0:print('property frontier',index+1,flush=True)
    except BaseException as error:
        failure=WORK/'attempts/property-frontier-failure.json'
        failure.write_text(json.dumps(dict(input=case,error=repr(error),completedSets=len(rows)),indent=2)+'\n');raise
    finally:native.close()
    out=WORK/'property-component-frontier.json'
    out.write_text(json.dumps(dict(status='seventeen-property-branches-only-full-dispatcher-still-in-progress',producer=pin(__file__),caseSets=len(rows),observations=len(rows)*4,cases=rows,
                                  wholeFunctionClaimed=False,sourceCreditGranted=0,androidOsOrDeviceClaimed=False),indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),sets=len(rows),observations=len(rows)*4)))


if __name__=='__main__':run()
