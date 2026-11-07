import copy


def parse(words):
    if words[:1]!=[1] or words[3:5]!=[0,0]:raise ValueError('030 fixture did not return without faults')
    allocations,events=words[5:7]
    at=11
    blocks=[words[at+i*3:at+(i+1)*3] for i in range(allocations)]
    at+=allocations*3
    observations=[words[at+i*12:at+(i+1)*12] for i in range(events)]
    at+=events*12
    graph=words[at:]
    if graph[0]!=0x300300 or graph[4:10]!=[1]*6:raise ValueError('030 independent actual-address/topology checks failed')
    cursor=10;classes=[]
    for slot in range(3):
        identity=graph[cursor];cursor+=1
        if not identity:classes.append(None);continue
        start=cursor-1;cursor+=4
        for group in range(2):
            size=graph[cursor];cursor+=2+size*4
        size=graph[cursor];cursor+=2+size*2+2
        classes.append(graph[start:cursor])
    instance_at=cursor
    identity=graph[cursor];cursor+=1
    if identity:
        fields=graph[cursor+6];cursor+=7+2*fields
    error_at=cursor+3
    expected_end=error_at+3+(graph[error_at+2]+1 if graph[error_at]==0x08000010 else 0)
    if len(graph)!=expected_end:raise ValueError('030 logical graph schema changed')
    return {'header':words[:11],'blocks':blocks,'events':observations,'graph':graph,
        'classes':classes,'instanceAt':instance_at,'suffix':graph[cursor:]}


def native_bytes(block,extra):
    size,kind,frees=block
    if kind==1:return 152
    if kind==2:return (size-extra)*2+extra
    if kind==3:return 80
    if kind in (4,5):return size*2
    raise ValueError('030 unknown allocation role')


def compare_native(variant,target_words,native_words,arena):
    target=parse(target_words);native=parse(native_words)
    if target['header']!=native['header']:raise ValueError('030 native results/hook counts disagree')
    extra=8 if variant>=2 else 0
    predicted=[];offsets=[];bump=0x30000
    for block in target['blocks']:
        size=native_bytes(block,extra);predicted.append([size,block[1],block[2]])
        offsets.append(bump);bump=(bump+size+255)&~255
    if predicted!=native['blocks']:raise ValueError('030 native allocation sizes/lifetime roles disagree')
    expected_events=copy.deepcopy(target['events'])
    for event in expected_events:
        operation,identity=event[:2]
        if operation in (1,3):event[2]=predicted[identity-1001][0]
        if operation==2:event[2]*=2;event[3]*=2
        if operation==4:event[2]=predicted[identity-1001][0]
    if expected_events!=native['events']:raise ValueError('030 native ordered ownership/resource events disagree')
    graph=list(target['graph']);graph[1:4]=[8,152,88]
    at=target['instanceAt']
    if graph[at]:
        identity=graph[at]
        size=predicted[identity-1001][0]
        graph[at+4]=size
        pointer_extra=4 if variant==17 else extra
        pointer=arena+offsets[identity-1001]+size-pointer_extra if pointer_extra else 0
        graph[at+5]=pointer&0xffffffff;graph[at+6]=pointer>>32
    if graph!=native['graph']:raise ValueError('030 native full logical graph or actual user pointer disagrees')
    return {'actualArena':arena,'pointerBits':64,'nativeOwnershipGraphAndEventsValidated':True,
        'actualUserPointerVerifiedWithoutTruncation':True,'allCActualAddressChecksPassed':True}


def compare_arm(original,source):
    differences=[index for index,(a,b) in enumerate(zip(original,source)) if a!=b]
    allowed={word+offset for word in (0x2b400,0x2b404,0x2b420,0x2b428) for offset in range(4)}
    if len(original)!=0x40000 or len(source)!=0x40000 or any(index not in allowed for index in differences):
        raise ValueError('030 ARM defined memory disagrees')
    return {'wholeComparisonArenaEqual':not differences,'definedMemoryEqual':True,'differentByteOffsets':differences}
