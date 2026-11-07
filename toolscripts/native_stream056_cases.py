import hashlib
import random
import struct
from functools import lru_cache

LENGTH_BASE = [3,4,5,6,7,8,9,10,11,13,15,17,19,23,27,31,35,43,51,59,67,83,99,115,131,163,195,227,258]
LENGTH_EXTRA = [0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,0]
DISTANCE_BASE = [1,2,3,4,5,7,9,13,17,25,33,49,65,97,129,193,257,385,513,769,1025,1537,2049,3073,4097,6145,8193,12289,16385,24577]
DISTANCE_EXTRA = [0,0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13]


def canonical(lengths):
    counts = [lengths.count(bits) for bits in range(16)]
    counts[0] = 0
    next_code, value = {}, 0
    for bits in range(1,16):
        value = (value + counts[bits-1]) << 1
        next_code[bits] = value
    result = {}
    for symbol, bits in enumerate(lengths):
        if not bits:
            continue
        value = next_code[bits]
        next_code[bits] += 1
        result[symbol] = (int(format(value, '0'+str(bits)+'b')[::-1],2), bits)
    return result


LENGTH_CODES = canonical([8]*144+[9]*112+[7]*24+[8]*8)
DISTANCE_CODES = canonical([5]*32)
DEEP_LENGTH_CODES = canonical(list(range(1,15))+[0]*242+[15]+[0]*27+[15]+[0]*3)
DEEP_DISTANCE_CODES = canonical(list(range(1,15))+[15]+[0]*14+[15]+[0]*2)


@lru_cache(maxsize=16)
def tables(root_bits=9, distance_bits=5, middle=0, deep=False):
    def construct(codes, leaves, root):
        rows = []

        def allocate(prefix, consumed, width, depth):
            base = len(rows)
            rows.extend([(64,width,0)]*(1 << width))
            for index in range(1 << width):
                extended = prefix | index << consumed
                candidates = [(symbol, bits) for symbol,(code,bits) in codes.items()
                              if code & ((1 << min(bits,consumed+width))-1)
                              == extended & ((1 << min(bits,consumed+width))-1)]
                leaf = next(((symbol,bits) for symbol,bits in candidates if bits <= consumed+width), None)
                if leaf:
                    symbol, bits = leaf
                    operation, value = leaves[symbol]
                    rows[base+index] = (operation,bits-consumed,value)
                elif candidates:
                    remaining = max(bits for _,bits in candidates)-consumed-width
                    child_width = min(middle,remaining) if middle and depth == 0 else remaining
                    child = allocate(extended,consumed+width,child_width,depth+1)
                    rows[base+index] = (child_width,width,child)
            return base

        allocate(0,0,root,0)
        return rows

    length_leaves = {i:(0,i) for i in range(256)}
    length_leaves[256] = (96,0)
    length_leaves.update({257+i:(16|LENGTH_EXTRA[i],base) for i,base in enumerate(LENGTH_BASE)})
    length_leaves.update({286:(64,0),287:(64,0)})
    distance_leaves = {i:(16|DISTANCE_EXTRA[i],base) for i,base in enumerate(DISTANCE_BASE)}
    distance_leaves.update({30:(64,0),31:(64,0)})
    return construct(DEEP_LENGTH_CODES if deep else LENGTH_CODES,length_leaves,root_bits),construct(
        DEEP_DISTANCE_CODES if deep else DISTANCE_CODES,distance_leaves,distance_bits)


def encoded(program,deep=False):
    bits = []
    length_codes = DEEP_LENGTH_CODES if deep else LENGTH_CODES
    distance_codes = DEEP_DISTANCE_CODES if deep else DISTANCE_CODES

    def emit(value, size):
        bits.extend((value >> index)&1 for index in range(size))

    for item in program:
        if 'literal' in item:
            emit(*length_codes[item['literal']])
        elif 'end' in item:
            emit(*length_codes[256])
        elif 'bad_length' in item:
            emit(*length_codes[item['bad_length']])
        else:
            length = item['length']
            position = max(i for i,base in enumerate(LENGTH_BASE) if base <= length)
            emit(*length_codes[257+position])
            emit(length-LENGTH_BASE[position],LENGTH_EXTRA[position])
            if 'bad_distance' in item:
                emit(*distance_codes[item['bad_distance']])
            else:
                distance = item['distance']
                position = max(i for i,base in enumerate(DISTANCE_BASE) if base <= distance)
                emit(*distance_codes[position])
                emit(distance-DISTANCE_BASE[position],DISTANCE_EXTRA[position])
    return bits


def materialize(case):
    limits = [('preload',0,7,0),('alignment',0,3,0),('window_size',1,32768,64),
              ('prefix',0,4096,0),('available_output',258,6144,1024),
              ('root_bits',1,15,9),('distance_bits',1,15,5)]
    for name,minimum,maximum,default in limits:
        value = case.get(name,default)
        if type(value) is not int or not minimum <= value <= maximum:
            raise ValueError('Fixture outside admitted '+name+' domain')
    size = case.get('window_size',64)
    if not 0 <= case.get('window_have',size) <= size or not 0 <= case.get('window_next',0) < size:
        raise ValueError('Fixture window cursor/backing outside domain')
    rng = random.Random(0x560000+case['id'])
    program_bits = encoded(case['program'],case.get('deep',False))
    preload = case.get('preload',0)
    hold = sum(bit << index for index,bit in enumerate(program_bits[:preload]))
    remainder = program_bits[preload:]
    payload = bytearray((len(remainder)+7)//8)
    for index,bit in enumerate(remainder):
        payload[index//8] |= bit << (index%8)
    payload.extend(b'\0'*6)
    size = case.get('window_size',64)
    prefix = rng.randbytes(case.get('prefix',0))
    window = rng.randbytes(size)
    lens,dists = tables(case.get('root_bits',9),case.get('distance_bits',5),case.get('middle',0),case.get('deep',False))
    if len(payload) > 4096 or len(lens)*4 > 8192 or len(dists)*4 > 12288:
        raise ValueError('Fixture input/table exceeds separately initialized allocation')
    return dict(payload=bytes(payload),hold=hold,bits=preload,window=window,prefix=prefix,
                window_have=case.get('window_have',size),window_next=case.get('window_next',0),
                sane=case.get('sane',1),length_table=lens,distance_table=dists,
                length_bits=case.get('root_bits',9),distance_bits=case.get('distance_bits',5),
                available_output=case.get('available_output',1024), mode=21)


def model(case):
    data = materialize(case)
    queue = [(data['hold'] >> index)&1 for index in range(data['bits'])]
    position, output, mode, message = 0,bytearray(data['prefix']),data['mode'],None
    initial_output = len(output)
    window = data['window']
    history = bytearray(window[data['window_next']:]+window[:data['window_next']]+data['prefix'])

    def fetch(count):
        nonlocal position
        for byte in data['payload'][position:position+count]:
            queue.extend((byte >> bit)&1 for bit in range(8))
        position += count

    def number(count):
        return sum(bit << index for index,bit in enumerate(queue[:count]))

    def remove(count):
        if count > len(queue):
            raise ValueError('Synthetic table consumed unavailable bits')
        del queue[:count]

    while True:
        if len(queue) < 15:
            fetch(2)
        code = data['length_table'][number(data['length_bits'])]
        while True:
            operation,bits,value = code
            remove(bits)
            if operation == 0:
                output.append(value & 255)
                history.append(value & 255)
                break
            if operation & 16:
                extra = operation & 15
                if len(queue) < extra:
                    fetch(1)
                length = value+number(extra)
                remove(extra)
                if len(queue) < 15:
                    fetch(2)
                code = data['distance_table'][number(data['distance_bits'])]
                while True:
                    operation,bits,value = code
                    remove(bits)
                    if operation & 16:
                        extra = operation & 15
                        while len(queue) < extra:
                            fetch(1)
                        distance = value+number(extra)
                        remove(extra)
                        required = max(0,distance-len(output))
                        if required > data['window_have'] and data['sane']:
                            message,mode = 'invalid distance too far back',29
                            break
                        if distance <= 0 or distance > len(history):
                            raise ValueError('Synthetic history outside admitted backing')
                        for index in range(length):
                            byte = history[-distance]
                            history.append(byte)
                            output.append(byte)
                        break
                    if operation & 64:
                        message,mode = 'invalid distance code',29
                        break
                    code = data['distance_table'][value+number(operation)]
                break
            if operation & 64:
                if operation & 32:
                    mode = 11
                else:
                    message,mode = 'invalid literal/length code',29
                break
            code = data['length_table'][value+number(operation)]
        if mode != data['mode'] or not (position < len(data['payload'])-5 and
                                       len(output)-initial_output < data['available_output']-257):
            break
    position -= len(queue)//8
    bits = len(queue)%8
    return dict(input_used=position,available_input=len(data['payload'])-position,
                output=bytes(output),available_output=data['available_output']-(len(output)-initial_output),
                hold=number(bits),bits=bits,mode=mode,message=message)


def corpus():
    result = []

    def add(name,program,**options):
        result.append(dict(id=len(result),name=name,program=program,**options))

    for root,dist,middle in ((9,5,0),(4,2,0),(2,1,2)):
        for preload in range(8):
            for value in (0,143,144,255):
                add('literal-root-preload',[dict(literal=value),dict(end=True)],root_bits=root,
                    distance_bits=dist,middle=middle,preload=preload,alignment=preload%4)
        add('invalid-length286',[dict(bad_length=286)],root_bits=root,distance_bits=dist,middle=middle)
        add('invalid-length287',[dict(bad_length=287)],root_bits=root,distance_bits=dist,middle=middle)
        for bad in (30,31):
            add('invalid-distance',[dict(length=3,bad_distance=bad)],root_bits=root,distance_bits=dist,middle=middle)
    for length in LENGTH_BASE+[12,14,16,18,34,66,130,257]:
        add('length-extra-overlap',[dict(length=length,distance=1),dict(end=True)],prefix=3,
            preload=length%8,root_bits=4,distance_bits=2)
    for distance in DISTANCE_BASE+[32768]:
        add('distance-extra',[dict(length=258,distance=distance),dict(end=True)],window_size=32768,
            window_next=16380,root_bits=2,distance_bits=1,middle=2,preload=distance%8)
    for cursor in (0,1,3,20,63):
        for required in (1,3,10,64):
            for length in (3,5,20,258):
                add('circular-window',[dict(length=length,distance=required+4),dict(end=True)],
                    prefix=4,window_next=cursor,available_output=258,root_bits=4,distance_bits=2)
    for sane in (0,1,0x80000000):
        for have in (0,7,63):
            add('history-sanity',[dict(length=20,distance=64),dict(end=True)],
                window_have=have,sane=sane,window_next=13)
    for available in (258,259,260,300,512):
        add('output-boundary',[dict(literal=i%256) for i in range(1000)],available_output=available)
    rng = random.Random(0x560056)
    for number in range(80):
        program=[]
        for index in range(1+number%31):
            if rng.randrange(3):
                program.append(dict(literal=rng.randrange(256)))
            else:
                program.append(dict(length=rng.randrange(3,259),distance=rng.randrange(1,65)))
        if number%2:
            program.append(dict(end=True))
        add('deterministic-mixed',program,preload=number%8,root_bits=4 if number%2 else 9,
            distance_bits=2 if number%3 else 5,window_next=rng.randrange(64),
            prefix=64,available_output=258+number*13,alignment=number%4)
    for root,middle in ((9,0),(5,5)):
        for preload in range(8):
            add('deep-dynamic-extra-refills',[dict(length=257,distance=32768),dict(end=True)],
                window_size=32768,window_next=123,deep=True,root_bits=root,distance_bits=root,
                middle=middle,preload=preload)
    return result
