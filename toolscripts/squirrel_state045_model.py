import ctypes
import random

from squirrel_state040_model import abi as core_abi,native_abi as core_native_abi


SIZE=0x140000
POOL=0x40000
CAPACITY=0x100000
SHARED=0x1000
VM=0x2000
SERVICES=0x4000
MEMORY_SERVICES=0x4100
INPUT=0x5000
VECTOR=0x6000
CONTEXT=0x10000
SDK_HEAP=0x30000
KEYS=['pointerBytes','heapBytes','allocationBytes','eventBytes','heapMemory','heapCapacity','heapUsed','heapAllocations',
    'heapEvents','heapFailure','heapEntries','heapRecords','allocationMemory','allocationSize','allocationAlignment','allocationActive',
    'podBytes','podValues','podSize','podCapacity','tableBytes','tableShared','tableDelegate','tableFree','tableNodes','tableCount','tableUsed',
    'nodeBytes','nodeValue','nodeKey','nodeNext','stringBytes','stringShared','stringNext','stringLength','stringHash','stringValue',
    'stringTableBytes','stringTableBuckets','stringTableSlots','stringTableUsed','closureBytes','closureShared','closureParameters',
    'closureTypes','closureOuters','closureEnvironment','closureFunction','closureName']


def abi(graph):
    row=next(row for row in graph['readonlyObjects'] if row['symbol']=='sq_fixture_layout045')
    raw=next(data[row['address']-at:row['address']-at+row['bytes']] for at,data in graph['blocks']
        if at<=row['address']<row['address']+row['bytes']<=at+len(data))
    a=dict(zip(KEYS,[int.from_bytes(raw[index:index+4],'little') for index in range(0,len(raw),4)],strict=True))
    return a,core_abi(graph)


def native_abi(library):
    return dict(zip(KEYS,list((ctypes.c_uint*len(KEYS)).in_dll(library,'sq_fixture_layout045')),strict=True)),core_native_abi(library)


def state(name,base,a,c,addresses,seed=0,mask=b'a|tn'):
    p=a['pointerBytes'];memory=bytearray(random.Random(seed+4500).randbytes(SIZE));fields=[]
    def put(at,value,size=4):memory[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')
    def field(at,size):fields.append((at,at+size))
    memory[CONTEXT:CONTEXT+a['heapBytes']]=bytes(a['heapBytes'])
    put(CONTEXT+a['heapMemory'],base+POOL,p);put(CONTEXT+a['heapCapacity'],CAPACITY)
    for index,value in enumerate([base+CONTEXT,addresses['allocate'],addresses['operations'],addresses['template']]):
        put(SERVICES+index*p,value,p)
    for index,value in enumerate([base+CONTEXT,addresses['allocate'],addresses['resize'],addresses['release']]):
        put(MEMORY_SERVICES+index*p,value,p)
    put(SDK_HEAP,addresses['sdkOperations'],p);put(SDK_HEAP+p,base+CONTEXT,p)
    memory[INPUT:INPUT+len(mask)+1]=mask+b'\0';memory[VECTOR:VECTOR+a['podBytes']]=bytes(a['podBytes'])
    field(CONTEXT,a['heapBytes'])
    if name=='mask':field(VECTOR,a['podBytes'])
    else:
        for key in ['systemStrings','metaMethods','typeNames','strings','metaValue','chain','callback0','callback1','scratch']:
            field(SHARED+c[key],p)
        for key in ['metaType','scratchCapacity']:field(SHARED+c[key],4)
        for key in ['flag0','flag1']:field(SHARED+c[key],1)
        field(SHARED+c['references'],c['tableBytes'])
        for key in ['registry','constants','constructorName','special']:field(SHARED+c[key],c['objectBytes'])
        field(SHARED+c['delegates'],10*c['objectBytes'])
    return {'name':name,'base':base,'abi':a,'core':c,'before':bytes(memory),'fields':fields,'addresses':addresses,'mask':mask}


def allocations(memory,state):
    a=state['abi'];p=a['pointerBytes'];base=state['base'];get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    count=get(CONTEXT+a['heapAllocations'])
    if count>1024:raise ValueError('045 provider allocation census exceeds capacity')
    rows=[]
    for index in range(count):
        at=CONTEXT+a['heapEntries']+index*a['allocationBytes'];pointer=get(at+a['allocationMemory'],p)
        rows.append({'ordinal':index+1,'offset':pointer-base if pointer else None,'bytes':get(at+a['allocationSize']),
            'alignment':get(at+a['allocationAlignment']),'active':bool(get(at+a['allocationActive']))})
    return rows


def verified_heap(memory,state):
    a=state['abi'];p=a['pointerBytes'];base=state['base'];get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    rows=allocations(memory,state);cursor=0
    if get(CONTEXT+a['heapMemory'],p)!=base+POOL or get(CONTEXT+a['heapCapacity'])!=CAPACITY:
        raise ValueError('045 provider backing contract changed')
    for row in rows:
        if row['offset'] is None:
            if row['active']:raise ValueError('045 null allocation marked live')
            continue
        alignment=row['alignment']
        if not alignment or alignment&(alignment-1):raise ValueError('045 provider alignment invalid')
        start=(cursor+16+alignment-1)&~(alignment-1)
        if row['offset']!=POOL+start or row['bytes']>CAPACITY-start or (base+row['offset'])%alignment:
            raise ValueError('045 provider allocation exceeds aligned backing')
        cursor=start+row['bytes']
    if get(CONTEXT+a['heapUsed'])!=cursor:raise ValueError('045 provider cursor inconsistent')
    count=get(CONTEXT+a['heapEvents'])
    if count>2048:raise ValueError('045 provider event history exceeds capacity')
    events=[];live=set()
    for index in range(count):
        at=CONTEXT+a['heapRecords']+index*a['eventBytes'];kind,ordinal,size,alignment=[get(at+4*i) for i in range(4)]
        if not 1<=ordinal<=len(rows):raise ValueError('045 provider event refers to unallocated record')
        if kind==1:
            if ordinal in live:raise ValueError('045 duplicate allocation event')
            live.add(ordinal)
        elif kind==2:
            if ordinal not in live:raise ValueError('045 release precedes allocation or repeats')
            live.remove(ordinal)
        else:raise ValueError('045 provider event kind unknown')
        events.append({'kind':kind,'ordinal':ordinal,'bytes':size,'alignment':alignment})
    if any(row['offset'] is not None and row['active']!=(row['ordinal'] in live) for row in rows):
        raise ValueError('045 event history disagrees with live ownership')
    return rows,events


def mask_state(memory,state):
    a=state['abi'];p=a['pointerBytes'];base=state['base'];get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    pointer=get(VECTOR+a['podValues'],p);size=get(VECTOR+a['podSize']);capacity=get(VECTOR+a['podCapacity'])
    if size>capacity or capacity>4096:raise ValueError('045 parameter vector exceeds bounded observation')
    values=None
    if pointer:
        row=next((row for row in allocations(memory,state) if row['active'] and base+row['offset']==pointer),None)
        if row is None or row['bytes']!=capacity*4:raise ValueError('045 parameter vector does not own its exact allocation')
        values=[get(pointer-base+4*index) for index in range(size)]
    return {'size':size,'capacity':capacity,'values':values,'hasBacking':bool(pointer)}
