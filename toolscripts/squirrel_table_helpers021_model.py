def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'mode','requested','flags'} or any(type(value)is not int for value in case.values()):raise ValueError('Exact021 integer fields required')
    if not 0<=case['mode']<5 or not 0<=case['requested']<=32 or not 0<=case['flags']<=63:raise ValueError('Unsupported021 case')
    if case not in cases():raise ValueError('021 input is outside its qualified fixture profiles')


def cases():
    result=[{'mode':0,'requested':requested,'flags':0}for requested in (0,1,4,5,9,17,32)]
    result += [{'mode':1,'requested':requested,'flags':flags}for requested in (4,8,16)for flags in(0,1,2)]
    result += [{'mode':2,'requested':requested,'flags':flags}for requested,flags in((8,3),(8,11),(4,0),(4,8),(4,3),(16,1))]
    result += [{'mode':3,'requested':4,'flags':flags}for flags in(0,1,2,3)]
    result += [{'mode':2,'requested':8,'flags':43},{'mode':4,'requested':4,'flags':0},{'mode':4,'requested':8,'flags':1}]
    return result



def validate(words,case):
    validate_case(case)
    if not isinstance(words,list)or not 31<=len(words)<=4096 or any(type(v)is not int or not 0<=v<=0xffffffff for v in words):raise ValueError('Malformed021 observation')
    h=words[:31];mode,requested,flags=(case[key]for key in('mode','requested','flags'))
    capacity=4
    while capacity<requested:capacity*=2
    allocations=1
    if mode==0:results=[1,0,1,1,1];used=2
    elif mode==1:
        used=1 if flags&1 else 0
        if flags&1:results=[1,1]
        else:
            if capacity>4:capacity//=2;allocations+=1
            elif flags>>1:allocations+=1
            results=[1,capacity]
    elif mode==2:
        used=flags&7
        new=capacity
        if used>=capacity-capacity//4:new=capacity*2
        elif used<=capacity//4 and capacity>4:new=capacity//2
        if new!=capacity or flags>>3:allocations+=1
        capacity=new
        results=[1]*used+[capacity]
    elif mode==3:results=[0,1]+([1]if flags&2 else[])+[1,0,1];allocations=3;used=0
    else:results=[1];used=1
    free_count=allocations+4+(2 if mode==3 else 1 if mode==4 else 0)
    if h[:9]!=[0,mode,requested,flags,allocations,free_count,free_count,len(results),0] or any(h[9:15]):raise ValueError('021 independent ownership/return counters differ')
    if h[15]not in(44,80)or h[25]not in(4,8)or h[15]!=(44 if h[25]==4 else 80):raise ValueError('021 target/native layout differs')
    counts=[4,4,4]if mode==3 else[capacity,0,0]
    uses=[0,0,0]if mode==3 else[used,0,0]
    pointer=h[26]|h[27]<<32
    home=((pointer if pointer<1<<(h[25]*8-1)else pointer-(1<<(h[25]*8)))>>3)&(capacity-1)
    frees=[value-1 if value else 0 for value in counts]
    if mode==2 and flags&32 and home==2:frees[0]-=1
    for index in range(3):
        if h[16+index*3:19+index*3]!=[counts[index],uses[index],frees[index]]:raise ValueError('021 independently derived capacity/free-node state differs')
    if h[28:31]!=[1,1,1]:raise ValueError('021 first_free does not denote an actual free node')
    if words[31:31+len(results)]!=results:raise ValueError('021 operation result sequence differs')
    tail=words[31+len(results):]
    if len(tail)!=free_count*8:raise ValueError('021 disposal observation extent differs')
    events=[tail[index:index+8]for index in range(0,len(tail),8)]
    from collections import Counter
    expected=[100+index for index in range(allocations)]+[1,20,22,24]
    if mode==3:expected +=[2,3]
    if mode==4:expected +=[27]
    if Counter(event[0]for event in events)!=Counter(expected):raise ValueError('021 actual disposal identity multiset differs')
    if mode==0 and any(event[5:8]!=[0x05000002,99,0]for event in events):
        raise ValueError('021 Set publication callback observed the wrong replacement')
    if mode==1 and flags&1:
        if any(event[5:8]!=[0x05000002,99,0]for event in events if event[0]in(20,22)):raise ValueError('021 NewSlot old destructor saw stale incoming value')
    if mode==3 and flags&1:
        event=next(row for row in events if row[0]==2)
        if event[2:5]!=[2,0,2]:raise ValueError('021 delegate replacement violated retain/release/publication order')
    if mode==4:
        weak=next(index for index,row in enumerate(events)if row[0]==27)
        table=next(index for index,row in enumerate(events)if row[0]==1)
        if (weak<table)!=bool(flags&1):raise ValueError('021 weak/owner disposal order differs')
        if any(row[4]!=0x0a000020 for row in events if row[0]in(20,22)):raise ValueError('021 table reset its weak target before value release')
    return {'results':results,'disposals':sorted(expected),'capacity':capacity,'used':used,'pointerBytes':h[25],
            'nativePointerBucket':home,'logicalLifetimeValidated':True}
