import ctypes
import random

from native_wave013_common import sha


SIZE=0x100000
VIEW=0x100
HOLDER=0x200
QUERY=0x400
SERVICES=0x800
CONTEXT=0x900
HEAP=0xb00
BIND=0x2000
IMAGE=0x4000
KEYS=['pointerBytes','viewBytes','imageBytes','servicesBytes','contextBytes','memory','view','capacity','fail',
    'allocations','requestedBytes','requestedAlignment','releases','released','imageLive','viewLive','heapBytes']


def abi(graph):
    item=next(row for row in graph['readonlyObjects'] if row['symbol']=='archive032_layout_values')
    raw=next(data[item['address']-start:item['address']-start+item['bytes']] for start,data in graph['blocks']
        if start<=item['address']<item['address']+item['bytes']<=start+len(data))
    return dict(zip(KEYS,[int.from_bytes(raw[i:i+4],'little') for i in range(0,len(raw),4)],strict=True))


def native_abi(library):
    return dict(zip(KEYS,list((ctypes.c_uint*len(KEYS)).in_dll(library,'archive032_layout_values')),strict=True))


def fixture_bytes(specification):
    return max(0x8000,((IMAGE+len(specification['image'])+4095)&~4095)+4096)


def state(specification,base,profile,addresses,seed=0):
    p=profile['pointerBytes'];size=fixture_bytes(specification)
    if size>SIZE:raise ValueError('Archive fixture exceeds bounded capacity')
    memory=bytearray(random.Random(seed+3200).randbytes(size));fields=[]
    def put(at,value,size):memory[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')
    def field(name,at,size,value):fields.append({'name':name,'offset':at,'size':size});put(at,value,size)
    field('view.operations',VIEW,p,addresses['operations']);field('view.image',VIEW+p,p,0 if specification.get('holder_null') else base+HOLDER)
    field('holder.bytes',HOLDER,p,0 if specification.get('unbound') else base+IMAGE)
    image=specification['image'];query=specification.get('query',b'')
    if len(image)>SIZE-IMAGE or len(query)>=256 or b'\0' in query:raise ValueError('Archive fixture input exceeds declared backing')
    memory[IMAGE:IMAGE+len(image)]=image;memory[QUERY:QUERY+len(query)+1]=query+b'\0'
    bind=specification.get('bind_image')
    if bind is not None:
        if len(bind)>IMAGE-BIND:raise ValueError('Archive bind input overlaps main image')
        memory[BIND:BIND+len(bind)]=bind
    memory[CONTEXT:CONTEXT+profile['contextBytes']]=bytes(profile['contextBytes'])
    for key,value in [('memory',base+HOLDER),('view',base+VIEW)]:put(CONTEXT+profile[key],value,p)
    for key,value in [('capacity',p),('fail',specification.get('allocator_fail',0)),('imageLive',0 if specification.get('fresh') or specification.get('holder_null') else 1),('viewLive',1)]:
        put(CONTEXT+profile[key],value,4)
    put(SERVICES,addresses['allocate'],p);put(SERVICES+p,addresses['release'],p);put(SERVICES+2*p,base+CONTEXT,p)
    put(HEAP,addresses['heapOperations'],p);put(HEAP+p,base+CONTEXT,p)
    field('fixture.context',CONTEXT,profile['contextBytes'],int.from_bytes(memory[CONTEXT:CONTEXT+profile['contextBytes']],'little'))
    readable=[(base+VIEW-12,base+VIEW+2*p),(base+HOLDER-12,base+HOLDER+p),(base+QUERY,base+QUERY+len(query)+1),
        (base+SERVICES,base+SERVICES+3*p),(base+CONTEXT,base+CONTEXT+profile['contextBytes']),
        (base+HEAP,base+HEAP+profile['heapBytes']),(base+IMAGE,base+IMAGE+len(image))]
    if bind is not None:readable.append((base+BIND,base+BIND+len(bind)))
    return {'base':base,'fixtureBytes':size,'pointerBytes':p,'abi':profile,'before':bytes(memory),'fields':fields,'readable':readable,
        'addresses':addresses,'imageSha256':sha(image),'query':query,'specification':specification}


def arguments(name,layout):
    spec=layout['specification'];base=layout['base'];view=base+VIEW;query=0 if spec.get('null_query') else base+QUERY
    if name in ['fn_00118624','fn_005f5cac']:return [view,0 if spec.get('null_bind') else base+(BIND if spec.get('bind_image') is not None else IMAGE)]
    if name in ['fn_00183688','fn_00176d74','fn_006eddc0','fn_006ede48']:return [view,query]
    if name in ['fn_006edd88','fn_006eddec','fn_006ede0c','fn_006ede84']:return [view,spec.get('index',0)]
    return [view]


POINTER_RETURNS={'fn_00118624','fn_005f5cd8','fn_005f5d3c','fn_00176d74','fn_006edd88','fn_006ede0c'}


def normalized_result(name,result,base):
    if name=='fn_005f5d14':return None
    if name in POINTER_RETURNS:return {'null':result==0,'offset':None if result==0 else result-base}
    return result&0xffffffff


def observation(memory,layout):
    p=layout['pointerBytes'];base=layout['base'];profile=layout['abi']
    get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    pointer=lambda value:None if value==0 else value-base
    return {'operationsPublished':get(VIEW,p)==layout['addresses']['operations'],'holderImage':pointer(get(HOLDER,p)),'viewImage':pointer(get(VIEW+p,p)),
        'allocations':get(CONTEXT+profile['allocations']),'requestedBytes':get(CONTEXT+profile['requestedBytes']),
        'requestedAlignment':get(CONTEXT+profile['requestedAlignment']),'releases':get(CONTEXT+profile['releases']),
        'released':[pointer(get(CONTEXT+profile['released']+i*p,p)) for i in range(4)],
        'imageLive':get(CONTEXT+profile['imageLive']),'viewLive':get(CONTEXT+profile['viewLive'])}
