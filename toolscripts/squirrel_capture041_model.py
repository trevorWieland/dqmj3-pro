from squirrel_capture038_model import parse as parse_frozen,compare_native as compare_frozen


def parse(words,base):
    if words[0]==0x041f00:return {'terminal':words[1:],'logical':words}
    if words[13]<54 and 0x041041 not in words:return parse_frozen(words,base)
    if words[:6]!=[1,0,0,0,0,0x038038]:raise ValueError('041 observation header changed')
    width,closure,header,obj,outer,low,high=words[6:13]
    if (width,closure,header,obj,outer)not in((4,64,96,8,20),(8,112,184,16,40)):raise ValueError('041 actual ABI changed')
    if low+(high<<32)!=base:raise ValueError('041 arena pointer truncated or changed')
    count=words[18];at=19+count+5
    allocation_count=words[at];at+=1;blocks=[];normalized=[];bump=0x30000
    for index in range(allocation_count):
        block_kind,bytes_,frees=words[at:at+3];at+=3;body=[];vectors=[]
        if block_kind==6:
            body=words[at:at+7];at+=7
            for group in range(2):
                size,capacity=words[at:at+2];at+=2
                values=words[at:at+3*size];at+=3*size
                if size>capacity:raise ValueError('038 actual closure vector exceeds owned storage')
                vectors.append((size,capacity,values));body.extend([size,capacity,*values])
            expected=closure;target_bytes=64
        elif block_kind==7:
            body=words[at:at+7];at+=7
            refs,ins,lit,params,functions,outers,defs=body
            expected=header+ins*8+(lit+params+functions)*obj+outers*outer+defs*4
            target_bytes=96+ins*8+(lit+params+functions)*8+outers*20+defs*4
        elif block_kind==4:
            expected=bytes_;target_bytes=bytes_*8//obj
            if bytes_%obj:raise ValueError('038 vector allocation is not an object array')
        elif block_kind==5:expected=20 if width==4 else 40;target_bytes=20
        else:raise ValueError('038 unexpected allocation family')
        if bytes_!=expected or frees not in(0,1):raise ValueError('038 allocation extent/free count is invalid')
        n=words[at];at+=1;raw=[words[at+2*i]+(words[at+2*i+1]<<32) for i in range(n)];at+=2*n
        if n!=(7 if block_kind in(6,7)else 1)or raw[0]!=base+bump:
            raise ValueError('038 real pointer does not match its independently derived allocation')
        blocks.append(dict(kind=block_kind,bytes=bytes_,frees=frees,body=body,vectors=vectors,raw=raw))
        bump=(bump+bytes_+255)&~255
        normalized.extend([block_kind,target_bytes,frees,*body])
    if words[at:at+8]!=[1]*6+[0,0]:raise ValueError('038 own-address graph or resource fault')
    mapping={0:0,1:base+0x9000,22:base+0x24000,23:base+0x24400,24:base+0x24800,500:base+0x1d000}
    mapping.update({1001+i:row['raw'][0]for i,row in enumerate(blocks)})
    for block in blocks:
        raw=block['raw'];body=block['body']
        if block['kind']==7:
            _,ins,lit,params,functions,outers,_=body
            p=raw[0]+header;expected=[raw[0],p];p+=ins*8;expected.append(p)
            for n in (lit,params,functions):p+=n*obj;expected.append(p)
            p+=outers*outer;expected.append(p)
            if raw!=expected:raise ValueError('038 compact prototype pointers violate actual native FAM layout')
        if block['kind']==6:
            if raw[1]!=base+0x1000 or raw[2]!=mapping.get(body[2])or raw[3]!=mapping.get(body[3]):
                raise ValueError('038 actual collectable links/shared pointer are invalid')
            if raw[4]!=mapping.get(body[5]):raise ValueError('038 script function is not the actual owned compact prototype')
            for field,(size,capacity,values)in zip(raw[5:],block['vectors']):
                if capacity:
                    provider=next((row for row in blocks if row['raw'][0]==field),None)
                    if provider is None or provider['kind']!=4 or provider['bytes']!=capacity*obj:
                        raise ValueError('038 actual vector pointer/capacity has no correctly sized owned allocation')
                elif field:raise ValueError('038 empty vector unexpectedly owns storage')
    at+=8
    if words[at]!=0x041041:raise ValueError('041 semantic trailer missing')
    trailer=words[at:];variant,cleanup,result,dst_frees,error_frees,events=trailer[1:7]
    cursor=7;event_rows=[trailer[cursor+i*8:cursor+(i+1)*8]for i in range(events)];cursor+=events*8
    error_type,length=trailer[cursor:cursor+2];cursor+=2;text=bytes(trailer[cursor:cursor+length]);cursor+=length
    destination_type,destination_refs,weak_target,key_length=trailer[cursor:cursor+4];cursor+=4
    key=bytes(trailer[cursor:cursor+key_length]);cursor+=key_length
    if cursor!=len(trailer):raise ValueError('041 semantic trailer shape changed')
    if variant<60:
        if result or dst_frees or error_frees!=1:raise ValueError('041 failed Get publication/old-error lifetime mismatch')
        if not any(row[0]==1 and row[4:6]==[0x08000010,2]for row in event_rows):
            raise ValueError('041 error was not published/retained before old-error finalization')
        if cleanup:
            if error_type!=0x01000001:raise ValueError('041 explicit failed-construction cleanup did not clear error')
        elif error_type!=0x08000010 or text!=b"the index '"+key.split(b'\0')[0][:50]+b"' does not exist":
            raise ValueError('041 real failed Get error formatting differs from independent byte reference')
        event=next(row for row in event_rows if row[0]==5)
        if event[1:4]!=[0,0,2 if variant&1 else 1]:raise ValueError('041 unpublished partial closure ownership differs')
    elif variant<=62:
        if not result or not any(row[:4]==[4,0,0,0]for row in event_rows):
            raise ValueError('041 default mutation did not observe actual initialized pre-default closure')
        scripts=[row for row in blocks if row['kind']==6]
        if not scripts or scripts[-1]['vectors'][1][:2]!=(2,2):raise ValueError('041 default append did not genuinely grow')
        defaults=scripts[-1]['vectors'][1][2]
        if defaults[0]!=0x01000001 or defaults[3]!=0x08000010:raise ValueError('041 mutated/captured defaults are not preserved in order')
    elif variant in(63,64):
        if not result or dst_frees!=1 or [row[0]for row in event_rows][:2]!=[2,3]:
            raise ValueError('041 last temporary-owner callback/free order differs')
        if event_rows[0][1]!=2 or event_rows[1][2]!=0x01000001:raise ValueError('041 temporary lifetime or weak invalidation incorrect')
        if not cleanup and (destination_type!=(0x08000010 if variant==64 else 0x01000001)or weak_target!=0x01000001):
            raise ValueError('041 reentrant publication replacement/weak target mismatch')
    elif variant==65:
        if not result or blocks[1]['kind']!=7 or blocks[1]['frees']!=1:
            raise ValueError('041 actual prototype wrap/release hazard not reproduced')
    if cleanup and variant!=65 and any(row['frees']!=1 for row in blocks if row['kind']in(4,6,7)):
        raise ValueError('041 explicit cleanup leaked closure/prototype/vector')
    return dict(logical=[*normalized,*trailer],blocks=blocks,events=event_rows,text=text,variant=variant,cleanup=cleanup)


def compare_native(variant,reference,actual,base):
    if variant<54:return compare_frozen(variant,reference,actual,base)
    expected=parse(reference,0x2000000);native=parse(actual,base)
    if expected['logical']!=native['logical']:raise ValueError('041 original/native lifecycle model differs')
    return {'actualHighAddressArenaVerified':base>0xffffffff,'typedPhysicalTopologyVerified':True,
        'independentErrorAndLifetimeReference':True,'deviceExecution':False}
