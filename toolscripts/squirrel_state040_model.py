import ctypes
import random


SIZE=0x12000
SHARED=0x1000
VM=0x2000
HEAD=0x3000
SERVICES=0x4000
CONTEXT=0x5000
SDK_HEAP=0x6000
POOL=0x8000
CAPACITY=0x8000
KEYS=['pointerBytes','sharedBytes','vmBytes','blockBytes','nodeBytes','tableBytes','prefixBytes',
    'metaType','metaValue','references','registry','constants','constructorName','special','delegates','chain',
    'callback0','callback1','flag0','flag1','systemStrings','metaMethods','typeNames','strings','scratch','scratchCapacity',
    'vmUnwritten','stack','varargs','top','base','root','error','errorHandler','debugHook','temporary',
    'callStack','callCount','allocatedCalls','calls','traps','current','foreign','shared','nativeDepth',
    'suspended','suspendedRoot','suspendedTarget','suspendedTraps','suspendedVarargsSize','suspendedVarargsBase',
    'nodeObject','nodeReferences','nodeNext','refCapacity','refUsed','refNodes','refFree','refStorage',
    'objectBytes','objectValue','servicesBytes','heapBytes','heapMemory','heapCapacity','heapUsed','heapAllocations',
    'heapEntries','allocationBytes','allocationSize','allocationAlignment','refCountOffset','weakOffset','nextOffset','previousOffset']


def abi(graph):
    row=next(r for r in graph['readonlyObjects'] if r['symbol']=='sq_startup_layout040')
    data=next(raw[row['address']-at:row['address']-at+row['bytes']] for at,raw in graph['blocks']
        if at<=row['address']<row['address']+row['bytes']<=at+len(raw))
    values=[int.from_bytes(data[i:i+4],'little') for i in range(0,len(data),4)]
    result=dict(zip(KEYS,values,strict=True))
    if result['pointerBytes']==4:
        target={'sharedBytes':180,'vmBytes':168,'blockBytes':80,'nodeBytes':16,'tableBytes':20,'prefixBytes':20,
            'metaType':4,'metaValue':8,'references':24,'registry':44,'constants':52,'constructorName':60,'special':72,
            'delegates':80,'chain':68,'callback0':160,'callback1':164,'flag0':168,'flag1':169,'systemStrings':0,
            'metaMethods':12,'typeNames':16,'strings':20,'scratch':172,'scratchCapacity':176,'vmUnwritten':20,
            'stack':24,'varargs':36,'top':48,'base':52,'root':56,'error':64,'errorHandler':72,'debugHook':80,'temporary':88,
            'callStack':96,'callCount':100,'allocatedCalls':104,'calls':108,'traps':120,'current':132,'foreign':136,
            'shared':140,'nativeDepth':144,'suspended':148,'suspendedRoot':152,'suspendedTarget':156,'suspendedTraps':160,
            'suspendedVarargsSize':164,'suspendedVarargsBase':166}
        if any(result[key]!=value for key,value in target.items()):raise ValueError('040 compiled target ABI contradicts measured fields')
    return result


def native_abi(library):
    return dict(zip(KEYS,list((ctypes.c_uint*len(KEYS)).in_dll(library,'sq_startup_layout040')),strict=True))


def state(name,base,a,addresses,seed=0,has_head=True):
    p=a['pointerBytes'];memory=bytearray(random.Random(seed+4000).randbytes(SIZE));fields=[]
    def put(at,value,size=4):memory[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')
    def field(at,size):fields.append({'offset':at,'size':size})
    put(SHARED+a['chain'],base+HEAD if has_head else 0,p)
    put(HEAD,addresses['operations'],p);put(HEAD+a['refCountOffset'],7)
    for key in ['weakOffset','nextOffset','previousOffset']:put(HEAD+a[key],0,p)
    for index,value in enumerate([base+CONTEXT,addresses['allocate'],addresses['operations'],addresses['template']]):put(SERVICES+index*p,value,p)
    memory[CONTEXT:CONTEXT+a['heapBytes']]=bytes(a['heapBytes'])
    put(CONTEXT+a['heapMemory'],base+POOL,p);put(CONTEXT+a['heapCapacity'],CAPACITY)
    put(SDK_HEAP,addresses['sdkOperations'],p);put(SDK_HEAP+p,base+CONTEXT,p)
    field(CONTEXT,a['heapBytes'])
    if name=='fn_0014c4c8':
        field(SHARED+a['metaType'],4);field(SHARED+a['metaValue'],p);field(SHARED+a['references'],a['tableBytes'])
        for key in ['registry','constants','constructorName','special']:
            field(SHARED+a[key],4);field(SHARED+a[key]+a['objectValue'],p)
        for index in range(10):
            at=SHARED+a['delegates']+index*a['objectBytes'];field(at,4);field(at+a['objectValue'],p)
        for key in ['callback0','callback1']:field(SHARED+a[key],p)
        for key in ['flag0','flag1']:field(SHARED+a[key],1)
    else:
        for offset,size in [(0,p),(a['refCountOffset'],4),(a['weakOffset'],p),(a['nextOffset'],p),(a['previousOffset'],p)]:field(VM+offset,size)
        for key in ['stack','varargs','calls','traps']:field(VM+a[key],p+8)
        for key in ['root','temporary']:
            field(VM+a[key],4);field(VM+a[key]+a['objectValue'],p)
        for key in ['error','errorHandler','debugHook']:field(VM+a[key],a['objectBytes'])
        for key in ['current','foreign','shared']:field(VM+a[key],p)
        for key in ['nativeDepth','suspended','suspendedRoot','suspendedTarget','suspendedTraps']:field(VM+a[key],4)
        for key in ['suspendedVarargsSize','suspendedVarargsBase']:field(VM+a[key],2)
        field(SHARED+a['chain'],p)
        if has_head:field(HEAD+a['previousOffset'],p)
    return {'function':name,'base':base,'abi':a,'before':bytes(memory),'fields':fields,'addresses':addresses,'hasHead':has_head}


def allocated(memory,state):
    a=state['abi'];p=a['pointerBytes'];base=state['base'];get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    rows=[]
    for index in range(min(16,get(CONTEXT+a['heapAllocations']))):
        at=CONTEXT+a['heapEntries']+index*a['allocationBytes'];pointer=get(at,p)
        rows.append({'ordinal':index+1,'offset':None if not pointer else pointer-base,'bytes':get(at+a['allocationSize']),
            'alignment':get(at+a['allocationAlignment'])})
    return rows


def verified_allocations(memory,state):
    a=state['abi'];p=a['pointerBytes'];base=state['base'];get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    if get(CONTEXT+a['heapAllocations'])>16:raise ValueError('040 allocator event count exceeds physical capacity')
    if get(CONTEXT+a['heapMemory'],p)!=base+POOL or get(CONTEXT+a['heapCapacity'])!=CAPACITY:
        raise ValueError('040 allocator backing contract changed')
    rows=allocated(memory,state);cursor=0
    for row in rows:
        alignment=row['alignment'];offset=row['offset']
        if not alignment or alignment&(alignment-1):raise ValueError('040 allocator event alignment is invalid')
        start=(cursor+16+alignment-1)&~(alignment-1)
        if offset!=POOL+start or row['bytes']>CAPACITY-start or (base+offset)%alignment:
            raise ValueError('040 allocator event exceeds its aligned backing object')
        cursor=start+row['bytes']
    if get(CONTEXT+a['heapUsed'])!=cursor:raise ValueError('040 allocator cursor differs from complete event history')
    return rows


def observe(memory,state):
    a=state['abi'];p=a['pointerBytes'];base=state['base'];get=lambda at,size=4:int.from_bytes(memory[at:at+size],'little')
    pointer=lambda value:'null' if value==0 else 'vm' if value==base+VM else 'head' if value==base+HEAD else 'shared' if value==base+SHARED else 'unexpected'
    obj=lambda at:{'type':get(at),'zeroPayload':get(at+a['objectValue'],p)==0}
    if state['function']=='fn_0014c4c8':
        rows=allocated(memory,state)
        if len(rows)!=1 or rows[0]['offset'] is None:raise RuntimeError('040 constructor table allocation did not succeed')
        block=rows[0]['offset'];nodes=block+4*p
        table=SHARED+a['references']
        expected={'nodes':base+nodes,'free':base+nodes,'storage':base+block}
        refs={key:get(table+a['ref'+key.title()]) for key in ['capacity','used']}
        for key,value in expected.items():refs[key+'Correct']=get(table+a['ref'+key.title()],p)==value
        return {'metaType':get(SHARED+a['metaType']),'metaValueNull':get(SHARED+a['metaValue'],p)==0,
            'references':refs,'bucketsNull':[get(block+i*p,p)==0 for i in range(4)],
            'nodes':[{'object':obj(nodes+i*a['nodeBytes']),'references':get(nodes+i*a['nodeBytes']+a['nodeReferences']),
                'nextCorrect':get(nodes+i*a['nodeBytes']+a['nodeNext'],p)==(base+nodes+(i+1)*a['nodeBytes'] if i<3 else 0)} for i in range(4)],
            'objects':{key:obj(SHARED+a[key]) for key in ['registry','constants','constructorName','special']},
            'delegates':[obj(SHARED+a['delegates']+i*a['objectBytes']) for i in range(10)],
            'callbacksNull':[get(SHARED+a[key],p)==0 for key in ['callback0','callback1']],
            'flags':[get(SHARED+a[key],1) for key in ['flag0','flag1']],
            'allocationSizeCorrect':rows[0]['bytes']==a['blockBytes'],'allocationAlignmentCorrect':rows[0]['alignment']==p}
    return {'allocationCount':len(allocated(memory,state)),'operationsPublished':get(VM,p)==state['addresses']['operations'],'references':get(VM+a['refCountOffset']),
        'weakNull':get(VM+a['weakOffset'],p)==0,'nextRole':pointer(get(VM+a['nextOffset'],p)),
        'previousNull':get(VM+a['previousOffset'],p)==0,'chainRole':pointer(get(SHARED+a['chain'],p)),
        'oldHeadPrevious':pointer(get(HEAD+a['previousOffset'],p)),
        'vectors':{key:{'pointerNull':get(VM+a[key],p)==0,'size':get(VM+a[key]+p),'capacity':get(VM+a[key]+p+4)}
            for key in ['stack','varargs','calls','traps']},
        'objects':{key:obj(VM+a[key]) for key in ['root','error','errorHandler','debugHook','temporary']},
        'pointers':{key:pointer(get(VM+a[key],p)) for key in ['current','foreign','shared']},
        'integers':{key:get(VM+a[key]) for key in ['nativeDepth','suspended','suspendedRoot','suspendedTarget','suspendedTraps']},
        'shorts':{key:get(VM+a[key],2) for key in ['suspendedVarargsSize','suspendedVarargsBase']}}
