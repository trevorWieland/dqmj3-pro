def validate_words(words):
    if not isinstance(words,list)or not 30<=len(words)<=4096 or any(type(value)is not int or not 0<=value<=0xffffffff for value in words):raise ValueError('022 malformed scalar observation')


def validate_case(case):
    if not isinstance(case,dict)or set(case)!={'length','captures','flags'}or any(type(value)is not int for value in case.values()):raise ValueError('022 case requires exact fields')
    if not 0<=case['length']<=16 or not 0<=case['captures']<=2 or not 0<=case['flags']<=3:raise ValueError('022 case exceeds current bounded domain')



def cases():
    return [{'length':length,'captures':captures,'flags':flags}for length in(0,1,5,16)for captures in range(3)for flags in range(4)]


def validate(words,case,cleanup):
    validate_case(case)
    validate_words(words)
    if not isinstance(words,list)or not 30<=len(words)<=4096 or any(type(value)is not int or not 0<=value<=0xffffffff for value in words):raise ValueError('022 malformed observation')
    length,captures,flags=(case[key]for key in('length','captures','flags'))
    h=words[:30];prior=4 if flags&2 else 0
    native_refs=0 if cleanup or captures==2 else 1
    prototype_refs=length+2 if captures and not cleanup else 0
    result_type,result_id,result_refs=(0x01000001,0,0)if cleanup else(0x08000040,2,1)
    reallocations=int(captures>0)+int(length>0)+bool(flags&1)+bool(flags&2)
    ids=[4]
    if cleanup:
        if length:ids+=[6]
        ids+=[2,1]
        if captures:ids+=[3,5]
    elif captures==2:ids+=[5,1]
    expected=[0,1,9-captures,1,prior,0,result_type,result_id,result_refs,native_refs,prototype_refs,0,1,1,reallocations,len(ids)]
    if h[:16]!=expected:raise ValueError('022 independent native call/ownership model differs')
    if h[16:20] not in ([48,148,0 if cleanup else 2,4],[72,192,0 if cleanup else 2,8]):raise ValueError('022 frame/VM/shared-state layout differs')
    if h[20:27]!=[length,length,length,0 if cleanup else 1,int(cleanup),int(cleanup or captures==2),prior]:raise ValueError('022 array/current-frame state differs')
    if not h[27]and not h[28]:raise ValueError('022 genuine stored callback pointer is null')
    if h[29]!=(30 if flags&1 else 32):raise ValueError('022 source stack growth state differs')
    tail=words[30:30+len(ids)*12]
    if len(tail)!=len(ids)*12 or len(words)!=30+len(ids)*12+length*3:raise ValueError('022 event/array extent differs')
    events=[tail[index:index+12]for index in range(0,len(tail),12)]
    from collections import Counter
    if Counter(event[0]for event in events)!=Counter(ids):raise ValueError('022 final-owner disposal multiset differs')
    object_bytes=8 if h[19]==4 else 16
    sizes={1:72 if h[19]==4 else 128,2:36 if h[19]==4 else 64,3:96 if h[19]==4 else 184,4:96 if h[19]==4 else 184,5:4*object_bytes,6:length*object_bytes}
    for event in events:
        if event[1]!=sizes[event[0]]:raise ValueError('022 actual native allocation/disposal width differs')
    for event in events:
        if event[9]!=(1 if event[0]==4 else 0x80000000 if prior else 0):raise ValueError('022 finalizer observed wrong current-frame publication')
    old=next(event for event in events if event[0]==4)
    if old[2:12]!=[6+captures,3,prior+1,0,0x08000040,2,2,1,2 if captures==2 else 3,2]:raise ValueError('022 old result callback saw wrong publication or frame ownership')
    elements=words[30+len(ids)*12:]
    expected_element=[0x08002000,3,prototype_refs]if captures else[0x01000001,0,0]
    if elements!=expected_element*length:raise ValueError('022 actual returned array elements/owners differ')
    return {'returns':1,'nativeReferences':native_refs,'prototypeReferences':prototype_refs,'disposalIds':sorted(ids),
            'genuineCallbackPointerObserved':True,'pointerBytes':h[19]}



def validate_contract(words,mode,raise_error,cleanup):
    validate_words(words)
    if type(mode)is not int or mode not in(1,2,3,4,5,6,7,10,11,12,13,14,15)or type(raise_error)is not int or not 0<=raise_error<=0xffffffff:raise ValueError('022 invalid contract input')
    if not isinstance(words,list)or len(words)<46:raise ValueError('022 missing contract observations')
    h=words[:30];suffix=words[-16:]
    if mode in(14,15):return validate_negative_owner(words,mode,raise_error,cleanup)
    executed=mode in(2,5,6);classed=3<=mode<=7;host=mode>=10;native=mode in(4,7)or host
    returned=mode not in(1,6,12)
    result_type,result_id=(0x01000001,0)if mode==10 else(0x08002000,4 if mode in(1,12)else 3)
    proto_refs={1:1,2:3,3:2,4:4,5:4,6:4,7:3,10:2,11:3,12:2,13:3}[mode]
    result_refs=1 if result_id==4 else proto_refs if result_id==3 else 0
    native_refs=0 if mode==7 else 1
    ids=[4]if mode not in(1,12)else[]
    if mode in(4,7):ids +=[6,2]
    if mode==7:ids +=[5,1]
    if cleanup:
        if mode in(1,12):ids +=[4]
        if mode!=7:ids +=[5,1]
        ids +=[3]
        if mode in(2,5,6):ids +=[11]
        result_type,result_id,result_refs=0x01000001,0,0;proto_refs=0;native_refs=0
    expected=[0,int(returned),8,1,0,0,result_type,result_id,result_refs,native_refs,proto_refs,0 if mode not in(1,12)or cleanup else 1,1,int(mode in(4,7)),1+int(mode in(4,7)),len(ids)]
    if h[:16]!=expected:raise ValueError('022 independent Call contract/result ownership differs')
    expected_suffix=[mode,int(executed),int(classed),int(host),6 if executed else 0,2 if executed else 0,3 if executed else 0,
      raise_error if executed else 0,0,(0x08002000 if mode in(5,6)else 0x01000001)if executed else 0,
      3 if mode in(5,6)else 0,6 if host else 0,3 if host else 0,1 if host else 0,1 if host else 0,h[16]]
    if suffix!=expected_suffix:raise ValueError('022 Execute/class/native ABI transport differs')
    if h[16:20]not in([48,148,0 if cleanup or mode==7 else 1,4],[72,192,0 if cleanup or mode==7 else 1,8]):raise ValueError('022 contract frame layout differs')
    if h[25:27]!=[int(cleanup or mode==7),0]or h[29]!=32:raise ValueError('022 contract storage/finalizer state differs')
    if h[18]!=(0 if cleanup or mode==7 else 1):raise ValueError('022 contract source chain differs')
    from collections import Counter
    tail=words[30:30+len(ids)*12];events=[tail[index:index+12]for index in range(0,len(tail),12)]
    if Counter(event[0]for event in events)!=Counter(ids):raise ValueError('022 contract temporary/discarded-result cleanup differs')
    if mode==7 and [event[0]for event in events]!=([4,6,2,5,1,3]if cleanup else[4,6,2,5,1]):raise ValueError('022 constructor was destroyed before discarded result')
    for event in events:
        expected_frame=1 if host and mode!=12 and event[0]==4 else 0
        if event[9]!=expected_frame:raise ValueError('022 contract finalizer observed wrong frame publication')
    if host and mode!=12:
        old=next(event for event in events if event[0]==4)
        expected_old=[6 if mode==10 else 7,3,1,0,0x01000001 if mode==10 else 0x08002000,0 if mode==10 else 3,0 if mode==10 else 4,1,3,0]
        if old[2:]!=expected_old:raise ValueError('022 native result publication/release timing differs')
    if len(words)!=30+len(ids)*12+h[22]*3+16:raise ValueError('022 contract observation extent differs')
    if mode in(4,7):
        if h[20:25]!=[5,5,5,0,1]:raise ValueError('022 actual constructor array was not finalized')
    elif h[20:25]!=[0,0,0,0,0]:raise ValueError('022 boundary case unexpectedly fabricated an array')
    return {'mode':mode,'returned':int(returned),'prototypeReferences':proto_refs,'nativeReferences':native_refs,'disposalIds':sorted(ids),
      'executeRemainsContract':executed,'classCreationRemainsContract':classed,'actualArrayConstructorInvoked':mode in(4,7)}


def validate_error(words,kind,cleanup):
    validate_words(words)
    if type(kind)is not int or kind not in(0,1,2):raise ValueError('022 invalid literal error case')
    h=words[:30];message=b'Native stack overflow'if kind==0 else b'wrong number of parameters'
    depth=100 if kind==0 else 0
    ids=[4,3,5,1,13]if cleanup else[]
    result_type,result_id,refs=(0x01000001,0,0)if cleanup else(0x08002000,4,1)
    expected=[0,0,8,1,0,depth,result_type,result_id,refs,0 if cleanup else 1,0 if cleanup else 1,0 if cleanup else 1,1,0,1,len(ids)]
    if h[:16]!=expected:raise ValueError('022 literal error independent ownership differs')
    if h[16:20]not in([48,148,0 if cleanup else 1,4],[72,192,0 if cleanup else 1,8])or h[20:27]!=[0,0,0,0,0,int(cleanup),0]or h[29]!=32:raise ValueError('022 literal error layout/state differs')
    suffix=words[30+len(ids)*12:]
    capacity=(len(message)+100)*3//2
    value=len(message)
    for byte in message:value=(value^((value<<5)+(value>>2)+byte))&0xffffffff
    error_header=[kind,0x01000001 if cleanup else 0x08000010,0 if cleanup else 13,0 if cleanup else 1,len(message),value,capacity,0 if cleanup else 1]
    if suffix!=error_header+list(message)+[0]:raise ValueError('022 actual literal formatter/string bytes differ')
    from collections import Counter
    events=[words[index:index+12]for index in range(30,30+len(ids)*12,12)]
    if Counter(event[0]for event in events)!=Counter(ids):raise ValueError('022 error object finalization differs')
    return {'kind':kind,'actualFrozen020ErrorProvider':True,'actualErrorBytes':len(message),'disposalIds':sorted(ids)}



def validate_native_profile(words,profile,cleanup):
    validate_words(words)
    if type(profile)is not int or profile not in tuple(range(11))+(12,13,14):raise ValueError('022 invalid native profile')
    h=words[:30];weak=profile in(7,8,12);depth=99 if profile==6 else 0
    if not weak and profile!=13:
        ordinary=list(words[:-10]);ordinary[5]=0
        if profile in(3,4,5)and cleanup:
            events=[ordinary[index:index+12]for index in range(30,30+ordinary[15]*12,12)]
            if sum(event[0]==16 for event in events)!=1:raise ValueError('022 typemask storage not disposed once')
            events=[event for event in events if event[0]!=16]
            ordinary=ordinary[:30]+sum(events,[])+ordinary[30+ordinary[15]*12:];ordinary[15]-=1
        for index in range(30,30+ordinary[15]*12,12):ordinary[index+5]-=depth
        if h[5]!=depth:raise ValueError('022 native depth boundary failed')
        validate(ordinary,{'length':5,'captures':0 if profile==14 else 1,'flags':0},cleanup)
        expected_suffix=[profile,0x01000001,0,0,0,0]
    elif weak:
        ids=[4]if profile==8 else([17]if profile==12 else[])
        if cleanup:ids +=[6,2]+([4]if profile in(7,12) else[])+[3,5,15,1]
        expected=[0,1,8,1,0,0,0x01000001 if cleanup else 0x08000040,0 if cleanup else 2,0 if cleanup else 1,
          0 if cleanup else 1,0 if cleanup else 7,1 if profile in(7,12) and not cleanup else 0,1,1,2,len(ids)]
        if h[:16]!=expected:raise ValueError('022 actual weak environment owner state differs')
        from collections import Counter
        events=[words[index:index+12]for index in range(30,30+len(ids)*12,12)]
        if Counter(event[0]for event in events)!=Counter(ids):raise ValueError('022 actual weak destruction order/domain differs')
        expected_suffix=[profile,0x08002000 if profile in(7,12) and not cleanup else 0x01000001,4 if profile in(7,12) and not cleanup else 0,
          0 if cleanup else 1,0x08002000 if profile in(7,12) and not cleanup else 0x01000001,4 if profile in(7,12) and not cleanup else 0]
        if h[20:27]!=[5,5,5,0 if cleanup else 1,int(cleanup),int(cleanup),0]:raise ValueError('022 actual weak/native array result differs')
    if profile==13:
        ids=[4,3,5,16,1]if cleanup else[]
        expected=[0,0,8,1,0,0,0x01000001 if cleanup else 0x08002000,0 if cleanup else 4,0 if cleanup else 1,0 if cleanup else 1,0 if cleanup else 1,0 if cleanup else 1,1,0,1,len(ids)]
        if h[:16]!=expected:raise ValueError('022 typed type-error boundary changed caller state')
        expected_suffix=[profile,0x01000001,0,0,0,0]
    if words[-10:-4]!=expected_suffix:raise ValueError('022 weak receiver/target ABI differs')
    if words[-4:]!=([1,0,2,0x01000001]if profile==13 else[0,0,0,0]):raise ValueError('022 type-error argument bits differ')
    return {'profile':profile,'weakEnvironment':weak,'typeMaskPass':profile in(3,4,5),'nativeDepth':depth,'minimumArityWrap':profile==2}



def validate_negative_owner(words,mode,raise_error,cleanup):
    h=words[:30];prior=4 if mode==14 else 0
    ids=[5,1]+([4,3]if cleanup else[])
    expected=[0,0,7,1,prior,0,0x01000001 if cleanup else 0x08002000,0 if cleanup else 4,0 if cleanup else 1,0,0 if cleanup else 2,0 if cleanup else 1,1,0,2 if mode==14 else 1,len(ids)]
    if h[:16]!=expected:raise ValueError('022 negative native final owner/frame restoration differs')
    if h[16:20]not in([48,148,0,4],[72,192,0,8])or h[20:27]!=[0,0,0,0,0,1,prior]or h[29]!=32:raise ValueError('022 negative native layout/prior frame differs')
    expected_suffix=[mode,0,0,1,0,0,0,0,0,0,0,7,3,prior+1,1,h[16]]
    if words[-16:]!=expected_suffix:raise ValueError('022 negative native handler ABI differs')
    events=[words[index:index+12]for index in range(30,30+len(ids)*12,12)]
    if [event[0]for event in events]!=ids or any(event[4]!=prior or event[9]!=(0x80000000 if prior else 0)for event in events):raise ValueError('022 negative finalizer observed an unrestored frame')
    if len(words)!=30+len(ids)*12+16:raise ValueError('022 negative native observation extent differs')
    return {'mode':mode,'finalNativeOwnerDisposed':True,'restoredExistingFrameCount':prior,'typeErrorBoundary':False}
