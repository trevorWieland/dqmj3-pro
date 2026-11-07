import copy

from squirrel_lookup023_float import number, game_bits


VARIANTS = list(range(300,326))+list(range(332,343))+list(range(350,355))+list(range(360,367))+list(range(400,502))
DEAD_WORDS = (0x2b400,0x2b404,0x2b420,0x2b428)


def parse(words):
    marker=words.index(0x260000)
    core=words[:marker]
    length=words[marker+1]
    text=bytes(words[marker+2:marker+2+length])
    if words[marker+2+length]!=0:raise ValueError('026 text missing terminator')
    at=marker+3+length
    address=words[at]|words[at+1]<<32
    width,capacity=words[at+2:at+4]
    if words[at+4:]!=[1]*13:raise ValueError('026 independent own-address/layout/ownership/budget checks failed')
    cursor=17+(core[16]+1 if core[16] else 0)
    cursor+=core[cursor]+2
    events=[core[cursor+i*16:cursor+(i+1)*16] for i in range(core[5])]
    frees=core[cursor+16*core[5]:]
    if len(frees)%8:raise ValueError('026 free-event schema changed')
    return dict(core=core,text=text,address=address,width=width,capacity=capacity,
        events=events,eventStart=cursor,frees=frees)


def pointer_text(name,address,width):
    return f'({name} : 0x{address:0{width*2}x})'.encode()


def expected_text(variant,row):
    case=variant-300
    if case in (0,1,32,33,34,38,54):return b'ab\x80def'
    if 2<=case<=4:return [b'0',b'-2147483648',b'2147483647'][case-2]
    if 5<=case<=7:return b'false' if case==5 else b'true'
    floats=[0,0x80000000,0x3dcccccd,0x38d1b717,1,0x7f7fffff,0x43800008]
    if 8<=case<=14:return format(number(floats[case-8]),'.6g').encode()
    names={15:'null',16:'function',17:'function',18:'array',19:'weakref',20:'table',21:'instance',
        22:'userdata',23:'userdata',24:'class',25:'function',36:'table',37:'table',40:'table',41:'table',42:'table'}
    if case in names:return pointer_text(names[case],row['address'],row['width'])
    if case in (35,61):return b'0.1'
    if case==39:return pointer_text('function',row['address']-0x9000+0x22000,row['width'])
    if 50<=case<=53:return b'1234567'
    if case==60:return b'-7654321'
    if case==62:return b'true'
    if case==63:return b'false'
    if case==64:return pointer_text('function',0x1234,row['width'])
    if case==65:return b'alternate scratch'
    if case==66:return pointer_text('function',row['address'],row['width'])
    if 100<=case<196:return format(number(game_bits(case-100)),'.6g').encode()
    if 196<=case<202:return [b'inf',b'-inf',b'nan',b'-nan',b'nan',b'-nan'][case-196]
    raise ValueError('026 unmodeled input')


def validate(variant,words,width):
    row=parse(words)
    if row['width']!=width or row['text']!=expected_text(variant,row):
        raise ValueError('026 exact independent text/width model disagrees: '+str(variant))
    if width==8 and variant-300 in (16,17,18,19,20,21,22,23,24,25,32,33,34,36,37,38,39,40,41,42,64):
        if row['address']<=0xffffffff:raise ValueError('026 native pointer fixture was truncated')
    return row


def compare_native(variant,original,native):
    target=validate(variant,original,4)
    host=validate(variant,native,8)
    predicted=copy.deepcopy(target['core'])
    for index,event in enumerate(target['events']):
        at=target['eventStart']+index*16
        if event[0]==3:
            for column in (1,2):
                if event[column]==36:predicted[at+column]=49
        if event[8]==36:predicted[at+8]=49
    if variant==366:
        setup=next(row for row in target['events'] if row[0]==31)
        allocation=list(setup);allocation[0:3]=[3,24,49]
        insertion=target['eventStart']+16*len(target['events'])
        predicted[insertion:insertion]=allocation
        predicted[5]+=1
    if predicted!=host['core']:
        differences=[(i,a,b) for i,(a,b) in enumerate(zip(predicted,host['core'])) if a!=b]
        raise ValueError('026 independently predicted native logical ownership/events differ: '+str((variant,differences[:12])))
    expected_capacity=49 if target['capacity']==36 or variant==366 else target['capacity']
    if host['capacity']!=expected_capacity:raise ValueError('026 independently predicted native storage budget differs')
    return {'nativeWidth':8,'rawTextEqualsTarget':host['text']==target['text'],
        'actualNativeAddress':host['address'],'exactNativeText':host['text'].decode('latin1'),
        'targetCapacity':target['capacity'],'nativeCapacity':host['capacity'],
        'logicalOwnershipAndOrderedEventsEqualWithDeclaredScratchBudget':True}


def compare_heap(original,source):
    differences=[index for index,(a,b) in enumerate(zip(original,source)) if a!=b]
    allowed={word+byte for word in DEAD_WORDS for byte in range(4)}
    if len(original)!=0x40000 or len(source)!=0x40000 or any(index not in allowed for index in differences):
        raise ValueError('026 ARM initialized/defined memory differs')
    return {'rawWholeArenaEqual':not differences,'definedMemoryEqual':True,
        'differentByteOffsets':differences,'excludedWordsWereNotRead':True}
