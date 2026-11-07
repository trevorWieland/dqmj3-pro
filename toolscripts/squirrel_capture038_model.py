TYPES=[0x05000002,0x08000010,0x08002000,0x08000200,0x08010000,0x08000100]


def parse(words,base):
    if words[:6]!=[1,0,0,0,0,0x038038]:raise ValueError('038 observation header changed')
    width,closure,header,obj,outer,low,high=words[6:13]
    if (width,closure,header,obj,outer) not in ((4,64,96,8,20),(8,112,184,16,40)):
        raise ValueError('038 actual ABI layout differs from declared types')
    if low+(high<<32)!=base:raise ValueError('038 actual arena address changed or truncated')
    variant,cleanup,result,parent_calls,child_calls,count=words[13:19]
    if result!=1 or parent_calls!=1 or child_calls!=1:raise ValueError('038 real parent/child calls missing')
    at=19;observations=[words[i:i+23] for i in range(at,at+count,23)];at+=count
    if [row[0]for row in observations]!=([1,2,3,4,5]if cleanup else[1,2,3,5]):
        raise ValueError('038 ownership observation stages changed')
    kind=(variant//2)%6;defaults=variant&1;capture=3 if variant>=48 else variant//12;growing=variant>=48
    captured_type=0x08000010 if kind==4 and capture==1 else TYPES[kind]
    before,after,returned=observations[:3]
    if before[1]!=1 or after[1]!=0 or after[5]!=1 or after[6:8]!=[3 if growing else 1,defaults]:
        raise ValueError('038 parent/prototype ownership was not transferred to child')
    if after[8]!=captured_type:raise ValueError('038 captured value has wrong actual type')
    if kind!=0 and after[10]!=((3 if kind==3 else 2)if growing else(2 if kind==3 else 1)):
        raise ValueError('038 captured reference does not have the predicted independent owner count')
    if kind==0 and after[9]!=1700+variant:raise ValueError('038 local scalar snapshot was changed')
    if defaults and (after[11]!=0x08000010 or after[13]!=1):
        raise ValueError('038 captured default is not its independently owned string')
    if returned[3]!=(0x08000040 if defaults else captured_type):raise ValueError('038 child did not return captured/default data')
    if defaults:
        if returned[15:17]!=[2,4] or returned[17]!=captured_type or returned[18]!=after[9] or returned[20]!=0x08000010 or returned[21]!=after[12]:
            raise ValueError('038 actual returned array does not contain the captured value and independently captured default')
        if cleanup:
            surviving=observations[3]
            if surviving[17]!=captured_type or surviving[18]!=after[9] or surviving[20]!=0x08000010 or surviving[21]!=after[12]:
                raise ValueError('038 return members did not survive destruction of their child closure')
    meta=words[at:at+5];at+=5
    if meta!=([2,1,0,3,0]if variant in(50,51)else[1,1,0,1,0]if capture==3 else[0]*5):raise ValueError('038 real meta callback saw the wrong construction/publication state')
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
    if words[at:]!=[1]*6+[0,0]:raise ValueError('038 own-address graph or resource fault')
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
    if cleanup and any(row['frees']!=1 for row in blocks if row['kind']in(4,6,7)):
        raise ValueError('038 closure/prototype/vector escaped final cleanup')
    logical=[variant,cleanup,result,parent_calls,child_calls,count,*sum(observations,[]),*meta,allocation_count,*normalized]
    return dict(logical=logical,observations=observations,blocks=blocks,base=base,width=width)


def compare_native(variant,reference,actual,base):
    expected=parse(reference,0x2000000);native=parse(actual,base)
    if expected['logical']!=native['logical']:raise ValueError('038 target/native lifetime graph differs: '+str(variant))
    return dict(actualHighAddressArenaVerified=base>0xffffffff,typedPhysicalPointersVerified=True,
        independentlyDerivedPrototypeAndVectorExtents=True,logicalOwnershipAndPublicationEqual=True,
        actualWindowsOrAarch64ObjectModel=True,deviceExecution=False)
