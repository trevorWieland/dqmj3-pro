import ctypes
import hashlib
import random
import struct

from native_stream056_cases import materialize


RAM_BYTES = 0x18000
STREAM, STATE, INPUT, OUTPUT, WINDOW, LENGTHS, DISTANCES = 0x100,0x1000,0x4000,0x6000,0xa000,0x13000,0x15000
STREAM_FIELDS = ['next_input','available_input','total_input','next_output','available_output','total_output','message','state']
STATE_FIELDS = ['mode','window_size','window_have','window_next','window','hold','bits','lengths','distances','length_bits','distance_bits','sane']
TARGET = dict(stream_size=56,state_size=7108,code_size=4,
              stream=dict(zip(STREAM_FIELDS,[0,4,8,12,16,20,24,28])),
              state=dict(zip(STATE_FIELDS,[0,40,44,48,52,56,60,76,80,84,88,7104])))


class State(ctypes.Structure):
    _fields_ = [('mode',ctypes.c_ubyte),('tail',ctypes.c_ubyte*39),
                ('window_size',ctypes.c_uint32),('window_have',ctypes.c_uint32),('window_next',ctypes.c_uint32),
                ('window',ctypes.c_void_p),('hold',ctypes.c_uint32),('bits',ctypes.c_uint32),
                ('length',ctypes.c_uint32),('distance',ctypes.c_uint32),('extra',ctypes.c_uint32),
                ('lengths',ctypes.c_void_p),('distances',ctypes.c_void_p),('length_bits',ctypes.c_uint32),
                ('distance_bits',ctypes.c_uint32),('untouched',ctypes.c_ubyte*7012),('sane',ctypes.c_uint32)]


class Stream(ctypes.Structure):
    _fields_ = [('next_input',ctypes.c_void_p),('available_input',ctypes.c_uint32),('total_input',ctypes.c_uint32),
                ('next_output',ctypes.c_void_p),('available_output',ctypes.c_uint32),('total_output',ctypes.c_uint32),
                ('message',ctypes.c_void_p),('state',ctypes.c_void_p),('allocator',ctypes.c_void_p),
                ('disposer',ctypes.c_void_p),('opaque',ctypes.c_void_p),('type',ctypes.c_uint32),
                ('checksum',ctypes.c_uint32),('reserved',ctypes.c_uint32)]


NATIVE = dict(stream_size=ctypes.sizeof(Stream),state_size=ctypes.sizeof(State),code_size=4,
              stream={name:getattr(Stream,name).offset for name in STREAM_FIELDS},
              state={name:getattr(State,name).offset for name in STATE_FIELDS})


def layout_words(layout):
    return [layout['stream_size'],layout['state_size'],4]+[layout['stream'][name] for name in STREAM_FIELDS]+[
        layout['state'][name] for name in STATE_FIELDS]


def put_word(arena,offset,value):
    struct.pack_into('<I',arena,offset,value)


def put_pointer(arena,offset,value,pointer_bytes):
    struct.pack_into('<I' if pointer_bytes == 4 else '<Q',arena,offset,value)


def seed(case,ram,layout,pointer_bytes):
    data = materialize(case)
    arena = bytearray(random.Random(0x560100+case['id']).randbytes(RAM_BYTES))
    input_offset = INPUT+32+case.get('alignment',0)
    for offset,raw in ((input_offset,data['payload']),(OUTPUT,data['prefix']),(WINDOW,data['window'])):
        arena[offset:offset+len(raw)] = raw
    for offset,table in ((LENGTHS,data['length_table']),(DISTANCES,data['distance_table'])):
        raw = b''.join(struct.pack('<BBH',*code) for code in table)
        arena[offset:offset+len(raw)] = raw
    pointers = dict(next_input=ram+input_offset,next_output=ram+OUTPUT+len(data['prefix']),
                    state=ram+STATE,message=ram+0x500)
    words = dict(available_input=len(data['payload']),available_output=data['available_output'])
    for name,value in pointers.items():
        put_pointer(arena,STREAM+layout['stream'][name],value,pointer_bytes)
    for name,value in words.items():
        put_word(arena,STREAM+layout['stream'][name],value)
    state_pointers = dict(window=ram+WINDOW,lengths=ram+LENGTHS,distances=ram+DISTANCES)
    state_words = dict(window_size=len(data['window']),window_have=data['window_have'],
                       window_next=data['window_next'],hold=data['hold'],bits=data['bits'],
                       length_bits=data['length_bits'],distance_bits=data['distance_bits'],sane=data['sane'])
    for name,value in state_pointers.items():
        put_pointer(arena,STATE+layout['state'][name],value,pointer_bytes)
    for name,value in state_words.items():
        put_word(arena,STATE+layout['state'][name],value)
    arena[STATE+layout['state']['mode']] = data['mode']
    arena[0x500:0x506] = b'prior\0'
    return arena,data,input_offset


def expected_arena(before,data,input_offset,expected,ram,layout,pointer_bytes,strings):
    arena = bytearray(before)
    for name,value in dict(next_input=ram+input_offset+expected['input_used'],
                           next_output=ram+OUTPUT+len(expected['output'])).items():
        put_pointer(arena,STREAM+layout['stream'][name],value,pointer_bytes)
    if expected['message'] is not None:
        put_pointer(arena,STREAM+layout['stream']['message'],strings[expected['message']],pointer_bytes)
    for name,value in dict(available_input=expected['available_input'],available_output=expected['available_output']).items():
        put_word(arena,STREAM+layout['stream'][name],value)
    for name in ('hold','bits'):
        put_word(arena,STATE+layout['state'][name],expected[name])
    arena[STATE+layout['state']['mode']] = expected['mode']
    arena[OUTPUT:OUTPUT+len(expected['output'])] = expected['output']
    return bytes(arena)


def observation(actual,expected,case,ram,layout,pointer_bytes):
    result = {key:value for key,value in expected.items() if key != 'output'}
    result.update(case=case['id'],outputBytes=len(expected['output']),outputSha256=hashlib.sha256(expected['output']).hexdigest(),
                  rawWholeArenaSha256=hashlib.sha256(actual).hexdigest(),normalReturn=True,
                  fullInitializedArenaMatchedIndependentModel=True)
    message_offset = STREAM+layout['stream']['message']
    result['messagePointer'] = int.from_bytes(actual[message_offset:message_offset+pointer_bytes],'little')
    result['modePaddingSha256'] = hashlib.sha256(actual[STATE+1:STATE+40]).hexdigest()
    projection = bytearray(actual)
    for name in ('next_input','next_output','message','state'):
        offset = STREAM+layout['stream'][name]
        projection[offset:offset+pointer_bytes] = b'\0'*pointer_bytes
    for name in ('window','lengths','distances'):
        offset = STATE+layout['state'][name]
        projection[offset:offset+pointer_bytes] = b'\0'*pointer_bytes
    result['reportOnlyPointerProjectionSha256'] = hashlib.sha256(projection).hexdigest()
    return result
