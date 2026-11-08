import random
import struct


MASK=0xffffffff


def name_key(name,seed):
    total=0;key=0
    for byte in name:
        character=byte if byte<128 else byte-256
        total=(total+character)&MASK;bits=total&31
        folded=(character>>(32-bits))|((character&MASK)<<bits)
        rotation=(-character)&31
        salted=(seed>>rotation)|(seed<<((32-rotation)&31))
        key=(key+folded+salted)&MASK
    return key


def pack(names,mode=0,seed=0,zero_trailer=(0,0),trailer_indices=None,unnamed=False):
    count=len(names);metadata=32+count*24
    data=bytearray(metadata if count else 40)
    struct.pack_into('<8I',data,0,0x01424258,count,mode,seed,0,0,0,0)
    records=[]
    for index,name in enumerate(names):
        at=len(data);data.extend(name+b'\0')
        while len(data)%4:data.append(0)
        payload=len(data);value=b'fixture-'+str(index).encode();data.extend(value)
        while len(data)%4:data.append(0)
        key=name_key(name,seed);records.append((payload,len(value),0 if unnamed else at,key))
        struct.pack_into('<4I',data,32+index*16,*records[-1])
    if count:
        order=sorted((row[3],index) for index,row in enumerate(records))
        for index,(key,record) in enumerate(order):
            struct.pack_into('<2I',data,32+count*16+index*8,key,record if trailer_indices is None else trailer_indices[index])
    else:struct.pack_into('<2I',data,32,*zero_trailer)
    return bytes(data)


def cases():
    rows=[]
    def add(name,image,query=b'a',**fields):rows.append({'name':name,'specification':{'image':image,'query':query,**fields}})
    for mode in [0,1,2,3,0xffffffff]:
        for count in [1,2,3,4,7,16,31]:
            names=[('name-'+str(i)+'.bch').encode() for i in range(count)]
            image=pack(names,mode,seed=0x91e3d527)
            for query in [names[0],names[count//2],names[-1],b'missing']:
                add('mode-'+str(mode)+'-count-'+str(count)+'-'+query.decode(),image,query)
    for byte in [1,31,32,64,96,127,128,129,159,160,191,192,224,254,255]:
        for seed in [0,1,0xffffffff,0x80000001]:
            name=bytes([byte,ord('x'),ord('y')]);add('signed-byte-'+str(byte)+'-'+str(seed),pack([name],seed=seed),name)
    for mode in [0,1,2,0xffffffff]:
        add('duplicates-'+str(mode),pack([b'a',b'a',b'a'],mode),b'a')
        add('empty-name-'+str(mode),pack([b'',b'b'],mode),b'')
        add('zero-count-'+str(mode),pack([],mode,zero_trailer=(0,37)),b'')
        add('zero-count-miss-'+str(mode),pack([],mode,zero_trailer=(0xffffffff,37)),b'absent')
    image=pack([b'a',b'b',b'c'])
    add('unbound-view',image,unbound=True)
    add('unbound-null-name',image,unbound=True,null_query=True)
    add('valid-null-bind-clears',image,null_bind=True)
    add('invalid-bind-keeps-old',image,bind_image=b'BAD!')
    add('unnamed-member',pack([b'a'],unnamed=True))
    add('invalid-trailer-index',pack([b'a'],trailer_indices=[0xfffffffe]))
    rng=random.Random(32032)
    for index in range(16):
        name=bytes(rng.randrange(1,256) for i in range(index+1));seed=rng.getrandbits(32)
        add('random-signed-name-'+str(index),pack([name],seed=seed),name)
    return rows
