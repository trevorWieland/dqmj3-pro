import random


SIZE=65536
BLOCKS=32


def aligned(value,p):
    return (value+p-1)//p*p


def encode(specification,base,p,seed,callbacks):
    capacity=specification.get('capacity',4096)
    operations=specification['operations']
    initial=specification.get('blocks',[])
    budget=sum(row.get('bytes',0)+row.get('margin',0) for row in operations if row['kind']=='allocate')
    high=max(capacity,max([row['offset']+row['bytes'] for row in initial] or [0])+budget)
    if min([row.get('margin',0) for row in operations] or [0])<0 or max([row.get('margin',0) for row in operations] or [0])>64:
        raise ValueError('Owner heap margin leaves qualified initialized backing prefix')
    if capacity<0 or high+256>8192 or any(row.get('bytes',0)<0 or not 0<=row['slot']<BLOCKS for row in operations):
        raise ValueError('Owner heap pointer arithmetic would leave initialized backing object')
    block_bytes=aligned(3*p+5,p)
    mutex_bytes=aligned(2*p+4,p)
    heap_bytes=3*p+mutex_bytes
    data=bytearray(random.Random(seed+773).randbytes(SIZE))
    fields=[]
    def field(name,offset,size,kind,value):
        fields.append({'name':name,'offset':offset,'size':size,'kind':kind})
        data[offset:offset+size]=value.to_bytes(size,'little')
    field('heap.begin',0x400,p,'pointer',base+0x4100)
    field('heap.end',0x400+p,p,'pointer',base+0x4100+specification.get('capacity',4096))
    initial=specification.get('blocks',[])
    ordered=sorted(initial,key=lambda row:row['offset'])
    ring=ordered[:1]+list(reversed(ordered[1:]))
    anchor=base+0x1000+ring[0]['slot']*block_bytes if ring else 0
    field('heap.anchor',0x400+2*p,p,'pointer',anchor)
    field('mutex.state',0x400+3*p,4,'scalar',0)
    field('mutex.thread',0x400+4*p,p,'pointer',base+0x200)
    field('mutex.depth',0x400+5*p,4,'scalar',specification.get('depth',1))
    for index in range(BLOCKS):
        start=0x1000+index*block_bytes
        for name,offset,size,kind in [('next',0,p,'pointer'),('previous',p,p,'pointer'),
            ('data',2*p,p,'pointer'),('bytes',3*p,4,'scalar'),('flag',3*p+4,1,'scalar')]:
            fields.append({'name':'block.'+str(index)+'.'+name,'offset':start+offset,'size':size,'kind':kind})
            value=0 if kind=='pointer' else 0xa0+index if name=='flag' else 0xbad000+index
            data[start+offset:start+offset+size]=value.to_bytes(size,'little')
    by_name={row['name']:row for row in fields}
    for position,row in enumerate(ring):
        values={'next':base+0x1000+ring[(position+1)%len(ring)]['slot']*block_bytes,
            'previous':base+0x1000+ring[(position-1)%len(ring)]['slot']*block_bytes,
            'data':base+0x4100+row['offset'],'bytes':row['bytes'],'flag':row.get('flag',0xa7)}
        for name,value in values.items():
            field_row=by_name['block.'+str(row['slot'])+'.'+name]
            data[field_row['offset']:field_row['offset']+field_row['size']]=value.to_bytes(field_row['size'],'little')
    for index,name in enumerate(['thread','acquire','release']):
        data[0x600+index*p:0x600+(index+1)*p]=callbacks[name].to_bytes(p,'little')
    data[0x600+3*p:0x600+4*p]=(base+0x700).to_bytes(p,'little')
    data[0x700:0x700+p]=(base+0x200).to_bytes(p,'little')
    for name,index in [('queries',0),('acquisitions',1),('releases',2)]:
        field('service.'+name,0x700+p+4*index,4,'scalar',0)
    return {'base':base,'pointerBytes':p,'blockBytes':block_bytes,'heapBytes':heap_bytes,
        'before':bytes(data),'initializedBackingRange':[base+0x4000,base+0x6000],'fields':fields,'specification':specification}


def pointer(value,original,native):
    if not value:
        return 0
    offset=value-original['base']
    if 0x1000<=offset<0x1000+BLOCKS*original['blockBytes']:
        slot,inside=divmod(offset-0x1000,original['blockBytes'])
        if inside:
            raise ValueError('Heap pointer targets an unqualified block interior')
        offset=0x1000+slot*native['blockBytes']
    if not 0<=offset<SIZE:
        raise ValueError('Heap pointer leaves the qualified fixture')
    return native['base']+offset


def project(original,native):
    expected=bytearray(native['before'])
    destination={row['name']:row for row in native['fields']}
    source={row['offset']:row for row in original['layout']['fields']}
    for write in original['writes']:
        offset=write['address']-original['layout']['base']
        row=source.get(offset)
        if row is None or row['size']!=write['bytes']:
            raise ValueError('Original heap write is not a complete qualified field')
        target=destination[row['name']]
        value=write['value']
        if row['kind']=='pointer':
            value=pointer(value,original['layout'],native)
        expected[target['offset']:target['offset']+target['size']]=value.to_bytes(target['size'],'little')
    at=0x700+native['pointerBytes']
    expected[at:at+4]=original['threadQueries'].to_bytes(4,'little')
    return bytes(expected)
