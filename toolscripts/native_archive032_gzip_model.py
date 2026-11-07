import ctypes
import random

from native_wave013_common import sha


SIZE=0x100000
VIEW=0x100
BUFFER=0x800
SERVICES=0x1000
CONTEXT=0x2000
SDK_HEAP=0x2800
INPUT=0x4000
POOL=0x20000
CAPACITY=0x60000
OUTPUT=0xa0000
KEYS=['pointerBytes','viewBytes','bufferBytes','input','inputBytes','output','outputBytes','ownsOutput',
    'heapBytes','memory','capacity','used','failAt','allocations','releases','entries','released','externalOutput',
    'externalLive','invalidReleases','heapView','intervening','reentryMode','entryBytes','entryMemory','entrySize',
    'entryAlignment','entryLive','streamBytes','uLongBytes','servicesBytes','next_in','avail_in','total_in',
    'next_out','avail_out','total_out','msg','state','zalloc','zfree','opaque','data_type','adler','reserved','reentryAt']


def abi(graph):
    item=next(row for row in graph['readonlyObjects'] if row['symbol']=='archive_gzip_layout_values')
    raw=next(data[item['address']-start:item['address']-start+item['bytes']] for start,data in graph['blocks']
        if start<=item['address']<item['address']+item['bytes']<=start+len(data))
    return dict(zip(KEYS,[int.from_bytes(raw[i:i+4],'little') for i in range(0,len(raw),4)],strict=True))


def native_abi(library):
    return dict(zip(KEYS,list((ctypes.c_uint*len(KEYS)).in_dll(library,'archive_gzip_layout_values')),strict=True))


def state(spec,base,profile,addresses,seed=0):
    p=profile['pointerBytes'];memory=bytearray(random.Random(seed+32027).randbytes(SIZE));fields=[]
    def put(at,value,size=4):memory[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')
    def field(at,size):fields.append({'offset':at,'size':size})
    image=spec['input'];budget=spec.get('budget',int.from_bytes(image[-4:],'little'))
    if len(image)<4 or len(image)>POOL-INPUT-4096 or budget>SIZE-OUTPUT-4096:
        raise ValueError('Gzip input/output exceeds initialized fixture backing')
    memory[INPUT:INPUT+len(image)]=image
    memory[POOL:POOL+CAPACITY]=bytes(CAPACITY)
    for at,value in [(VIEW,addresses['operations']),(VIEW+p,0 if spec.get('fresh') else base+BUFFER)]:put(at,value,p);field(at,p)
    for key,value,size in [('input',base+INPUT,p),('inputBytes',len(image),4),('output',base+OUTPUT if spec.get('old_output') else 0,p),
            ('outputBytes',budget,4),('ownsOutput',spec.get('owns',0),1)]:
        at=BUFFER+profile[key];put(at,value,size);field(at,size)
    memory[CONTEXT:CONTEXT+profile['heapBytes']]=bytes(profile['heapBytes'])
    for key,value in [('memory',base+POOL),('externalOutput',base+OUTPUT),('heapView',base+VIEW),('intervening',base+BUFFER)]:put(CONTEXT+profile[key],value,p)
    for key,value in [('capacity',CAPACITY),('failAt',spec.get('fail_at',0)),('externalLive',1),('reentryMode',spec.get('reentry_mode',0)),('reentryAt',spec.get('reentry_at',1))]:
        put(CONTEXT+profile[key],value)
    if not spec.get('fresh') or spec.get('reentry_mode')==1:
        put(CONTEXT+profile['allocations'],1)
        at=CONTEXT+profile['entries'];put(at+profile['entryMemory'],base+BUFFER,p)
        for key,value in [('entrySize',profile['bufferBytes']),('entryAlignment',p),('entryLive',1)]:put(at+profile[key],value)
    field(CONTEXT,profile['heapBytes']);field(POOL,CAPACITY);field(OUTPUT,budget)
    for index,key in enumerate(['allocate','release']):put(SERVICES+index*p,addresses[key],p)
    put(SERVICES+2*p,base+CONTEXT,p);put(SDK_HEAP,addresses['sdkOperations'],p);put(SDK_HEAP+p,base+CONTEXT,p)
    readable=[(base+VIEW-16,base+VIEW+profile['viewBytes']),(base+BUFFER-16,base+BUFFER+profile['bufferBytes']),
        (base+SERVICES,base+SERVICES+profile['servicesBytes']),(base+CONTEXT,base+CONTEXT+profile['heapBytes']),
        (base+SDK_HEAP,base+SDK_HEAP+2*p),(base+INPUT,base+INPUT+len(image)),(base+OUTPUT-16,base+OUTPUT+budget)]
    return {'base':base,'abi':profile,'pointerBytes':p,'before':bytes(memory),'fields':fields,'readable':readable,
        'addresses':addresses,'specification':spec,'budget':budget,'inputSha256':sha(image)}


def allocations(memory,layout):
    p=layout['pointerBytes'];a=layout['abi'];base=layout['base']
    get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    rows=[]
    for index in range(min(32,get(CONTEXT+a['allocations']))):
        at=CONTEXT+a['entries']+index*a['entryBytes']
        pointer=get(at+a['entryMemory'],p)
        rows.append({'ordinal':index+1,'offset':None if pointer==0 else pointer-base,
            'bytes':get(at+a['entrySize']),'alignment':get(at+a['entryAlignment']),'live':get(at+a['entryLive'])})
    return rows


def live_ranges(memory,layout,prefix=False):
    base=layout['base']
    return [(base+row['offset']-(16 if prefix else 0),base+row['offset']+row['bytes'])
        for row in allocations(memory,layout) if row['offset'] is not None and row['live']]


def observation(memory,layout):
    a=layout['abi'];p=layout['pointerBytes'];base=layout['base'];get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    rows=allocations(memory,layout);buffer=get(VIEW+p,p);state={}
    def role(pointer):
        if pointer==0:return 'null'
        if pointer==base+BUFFER:return 'preexisting-buffer'
        if pointer==base+INPUT:return 'input'
        if pointer==base+OUTPUT:return 'provided-output'
        return next(('allocation-'+str(row['ordinal']) for row in rows if row['offset'] is not None and pointer==base+row['offset']),'unexpected-pointer')
    if buffer:
        at=buffer-base
        if at<0 or at+a['bufferBytes']>len(memory):raise RuntimeError('Gzip buffer escaped fixture')
        state={'inputRole':role(get(at+a['input'],p)),'inputBytes':get(at+a['inputBytes']),
            'outputRole':role(get(at+a['output'],p)),'outputBytes':get(at+a['outputBytes']),
            'ownsOutput':get(at+a['ownsOutput'],1)}
    released=[role(get(CONTEXT+a['released']+i*p,p)) for i in range(min(32,get(CONTEXT+a['releases'])))]
    return {'viewBufferRole':role(buffer),'operationsPublished':get(VIEW,p)==layout['addresses']['operations'],
        'buffer':state,'allocations':rows,'released':released,'liveAllocations':[row['ordinal'] for row in rows if row['live']],
        'invalidReleases':get(CONTEXT+a['invalidReleases']),'externalLive':get(CONTEXT+a['externalLive'])}


def arguments(name,layout):
    base=layout['base'];spec=layout['specification']
    if name=='fn_005f5d60':return [base+VIEW,base+INPUT,len(spec['input'])]
    if name=='fn_005f5eac':return [base+VIEW,0 if spec.get('owned') else base+OUTPUT]
    return [base+VIEW]


def normalize(name,result,base):
    if name in ['fn_005f5f90','fn_005f601c']:return {'returnedView':result==base+VIEW}
    if name in ['fn_005f5d60','fn_005f5d98']:return None
    return result&0xffffffff


def retired_ranges(memory,layout):
    base=layout['base'];a=layout['abi']
    values=[(base+row['offset'],base+row['offset']+row['bytes']) for row in allocations(memory,layout)
        if row['offset'] is not None and not row['live']]
    if not int.from_bytes(memory[CONTEXT+a['externalLive']:CONTEXT+a['externalLive']+4],'little'):
        values.append((base+OUTPUT,base+OUTPUT+layout['budget']))
    return values


def source_symbol(name):return 'archive_gzip_output_size' if name=='fn_006edec8' else name


SESSION=['fn_005f5f90','fn_005f5d60','fn_006edec8','fn_005f5eac','fn_005f5d98','fn_005f601c']
