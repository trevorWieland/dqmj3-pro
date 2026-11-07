import random

from native_wave013_outer_layout import encode as encode_outer
from native_wave013_file_io_layout import fields,Projection as FrozenProjection,UnsupportedRepresentation
import native_wave013_file_owner_provider_model as provider


SIZE=0x100000
CAPACITY=0xa40
OWNER=0x3000
STORAGE=0x7400
HEAP=0x5900
TLS=0x5000000


def aligned(value,p):return (value+p-1)//p*p


def owner_fields(p):
    block=aligned(3*p+5,p)
    flags=p+block
    pointers=aligned(flags+4,p)
    return [('operations',0,p,'pointer'),('allocation.next',p,p,'pointer'),('allocation.previous',2*p,p,'pointer'),
        ('allocation.data',3*p,p,'pointer'),('allocation.bytes',4*p,4,'scalar'),('allocation.flag',4*p+4,1,'scalar'),
        ('initialized',flags,1,'scalar'),('mounted',flags+1,1,'scalar'),('bypass',flags+2,1,'scalar'),('file_id',flags+3,1,'scalar'),
        ('storage',pointers,p,'pointer'),('scratch',pointers+p,p,'pointer'),('file_buffer',pointers+2*p,p,'pointer'),
        ('resource_work',pointers+3*p,p,'pointer'),('candidate_storage',pointers+4*p,p,'pointer'),('final_flag',pointers+5*p,1,'scalar')]


def encode(specification,base,p,seed,abi,callbacks,owner_operations,stream_operations):
    candidates=specification.get('candidates',['a','b'])
    base_spec={**specification,'pattern':'','candidates':[value if value is not None else '' for value in candidates]}
    layout=encode_outer(base_spec,base,p,seed)
    data=bytearray(layout['before'])
    data.extend(random.Random(seed+713).randbytes(SIZE-len(data)))
    kept=[row for row in layout['fields'] if row['name'].startswith('arena.') or row['name'] in ['outputs.flags','scratch.bitmap_and_header']]
    layout['fields']=kept
    def put(at,value,size):data[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')
    def add(name,at,size,kind):layout['fields'].append({'name':name,'offset':at,'size':size,'kind':kind})
    fixed_heap_end=0x8000+CAPACITY*4*p
    file_buffer=fixed_heap_end
    resource_work=file_buffer+16384
    candidate_storage=resource_work+2048
    storage_bytes=candidate_storage+2048-STORAGE
    allocation_bytes=aligned(storage_bytes,4096)
    constructed=specification.get('operation')=='construct'
    allocated=not constructed and not specification.get('unallocated',False)
    values={'operations':0 if constructed else owner_operations,'allocation.next':base+OWNER+p if allocated else 0,
        'allocation.previous':base+OWNER+p if allocated else 0,'allocation.data':base+STORAGE if allocated else 0,
        'allocation.bytes':allocation_bytes if allocated else 0,'allocation.flag':specification.get('allocation_flag',0xa7),
        'initialized':specification.get('initialized',1 if allocated else 0),'mounted':specification.get('mounted',1 if allocated else 0),
        'bypass':specification.get('bypass_at_sign',0),'file_id':specification.get('initial_file_id',13),
        'storage':base+STORAGE if allocated else 0,'scratch':base+STORAGE if allocated else 0,
        'file_buffer':base+file_buffer if allocated else 0,'resource_work':base+resource_work if allocated else 0,
        'candidate_storage':base+candidate_storage if allocated else 0,'final_flag':specification.get('initial_final_flag',0x7e)}
    for name,at,count,kind in owner_fields(p):add('owner.'+name,OWNER+at,count,kind);put(OWNER+at,values[name],count)
    owner_bytes=aligned(owner_fields(p)[-1][1]+1,p)
    for name,offset,count in [('file_buffer',file_buffer,16384),('resource_work',resource_work,2048),
        ('normalized_candidates',candidate_storage,2048)]:add('outputs.'+name,offset,count,'bytes')
    info=provider.encode(data,base,p,abi,callbacks,specification,add)
    for name,at,count,kind in owner_fields(p):add('snapshot.'+name,provider.ENV+abi['ownerSnapshot']+at,count,kind)
    heap_values=[('begin',0,p,'pointer',base+STORAGE),('end',p,p,'pointer',base+0x30000),
        ('anchor',2*p,p,'pointer',base+OWNER+p if allocated else 0),('mutex.state',3*p,4,'scalar',0),
        ('mutex.thread',4*p,p,'pointer',base+0x5100),('mutex.depth',5*p,4,'scalar',1)]
    for name,at,count,kind,value in heap_values:add('heap.'+name,HEAP+at,count,kind);put(HEAP+at,value,count)
    put(0x5200,base+0x5100,p)
    for index,name in enumerate(['queries','acquisitions','releases']):
        put(0x5200+p+4*index,0,4);add('sync.'+name,0x5200+p+4*index,4,'scalar')
    for table,names,context in [(0x5600,['cfg_region','cfg_language','cfg_failure'],base+provider.ENV),
        (0x5700,['sync_thread','sync_acquire','sync_release'],base+0x5200)]:
        for index,name in enumerate(names):put(table+index*p,callbacks[name],p)
        put(table+3*p,context,p)
    data[0x5800:0x5800+abi['servicesBytes']]=bytes(abi['servicesBytes'])
    put(0x5800,base+HEAP,p);put(0x5800+abi['memoryReady'],1,1)
    for name,key in [('backend_work','requiredWorkMethod'),('backend_mount','mountMethod'),('backend_unmount','unmountMethod'),
        ('backend_open','openMethod'),('backend_release','releaseMethod'),('backend_delete','deleteMethod'),('backend_failure','failureMethod')]:
        put(0x5800+abi[key],callbacks[name],p)
    put(0x5800+abi['servicesContext'],base+provider.ENV,p)
    data[0x5c00:0x5c08]=b'ngword:\x00'
    put(0x5a00,base+0x5b00,p);put(0x5a00+p,base+provider.ENV,p)
    data[0x5b00:0x5b00+2*p]=bytes(2*p);put(0x5b00+p,callbacks['heap_free'],p)
    for index,value in enumerate(candidates):
        if value is None:put(0x4200+index*p,0,p)
    layout['before']=bytes(data);layout['specification']=specification
    layout.update({'abi':abi,'ownerBytes':owner_bytes,'storageBytes':storage_bytes,'allocationBytes':allocation_bytes,
        'fileBuffer':file_buffer,'resourceWork':resource_work,'candidateStorage':candidate_storage,
        'ownerOperations':owner_operations,'streamOperations':stream_operations,'providerInfo':info})
    count=specification.get('count',len(candidates))
    layout['rootArguments']=[base+OWNER,0 if specification.get('null_flags') else base+0x4000,
        specification.get('selection_input',0),0 if specification.get('null_candidates') else base+0x4200,count]
    layout['readable'] += [(base+OWNER-12,base+OWNER),(base+OWNER,base+OWNER+owner_bytes),(base+file_buffer,base+candidate_storage+2048),
        (base+0x5100,base+0x6300),(base+provider.ENV,base+provider.ENV+abi['backendBytes']),*info['readable']]
    return layout


class Projection(FrozenProjection):
    def pointer(self,value,field_name=None):
        if value==0x855dd4 and field_name in ['owner.operations','snapshot.operations']:
            return self.native['ownerOperations']
        if value==TLS and field_name=='heap.mutex.thread':return self.native['base']+0x5100
        if value==self.original['base']+OWNER+4:
            if field_name not in ['owner.allocation.next','owner.allocation.previous','snapshot.allocation.next','snapshot.allocation.previous','heap.anchor']:
                raise ValueError('Owner allocation identity stored outside measured intrusive/anchor fields')
            return self.native['base']+OWNER+self.p
        offset=value-self.original['base']
        for name,size in [('fileBuffer',16384),('resourceWork',2048),('candidateStorage',2048)]:
            start=self.original[name]
            if start<=offset<start+size:return self.native['base']+self.native[name]+offset-start
        return super().pointer(value,field_name)

    def write(self,address,size,value,pc):
        offset=address-self.original['base']
        if 0x8000<=offset<0x8000+CAPACITY*16:
            return super().write(address,size,value,pc)
        if not 0<=offset<SIZE:return
        remaining=size
        for row in self.original_fields:
            low,high=max(offset,row['offset']),min(offset+size,row['offset']+row['size'])
            if low>=high:continue
            target=self.native_fields[row['name']]
            destination=target['offset']+low-row['offset'];count=high-low
            raw=((value>>(8*(low-offset)))&((1<<(8*count))-1)).to_bytes(count,'little')
            if row['kind']=='pointer':
                if low!=row['offset'] or count!=4:raise ValueError('Partial owner pointer write')
                translated=self.pointer(int.from_bytes(raw,'little'),row['name'])
                if translated is None:raise ValueError('Owner field stores unsupported private stack identity')
                raw=translated.to_bytes(target['size'],'little')
            self.expected[destination:destination+len(raw)]=raw
            self.translated_writes.append((destination,len(raw)));remaining-=high-low
        if remaining:raise ValueError('Original owner wrote unqualified typed bytes at '+hex(address))
        self.events.append({'type':'write','address':address,'bytes':size,'value':value,'pc':pc})

    def external_heap(self,event):
        row=next(item for item in self.native['fields'] if item['name']==event['field'])
        value=event['value']
        if row['kind']=='pointer':value=self.pointer(value,row['name'])
        self.expected[row['offset']:row['offset']+row['size']]=value.to_bytes(row['size'],'little')
        self.translated_writes.append((row['offset'],row['size']))

    def service_expectations(self,original):
        abi=self.native['abi'];base=provider.ENV
        for key,count in [('regionCalls',original['cfgRegionCalls']),('languageCalls',original['cfgLanguageCalls']),
            ('unmountCalls',original['unmountCalls'])]:
            at=base+abi[key];self.expected[at:at+4]=count.to_bytes(4,'little')
        for key,value in [('cfgQueryCount',len(original['cfgQueries']))]:
            at=base+abi[key];self.expected[at:at+4]=value.to_bytes(4,'little')
        for index,row in enumerate(original['cfgQueries']):
            at=base+abi['cfgQueryKind']+4*index;self.expected[at:at+4]=row['kind'].to_bytes(4,'little')
            at=base+abi['cfgQueryFlags']+64*index
            raw=b''.join(flag.to_bytes(4,'little') for flag in row['flags']);self.expected[at:at+len(raw)]=raw
        at=0x5200+self.p;self.expected[at:at+4]=original['heapThreadQueries'].to_bytes(4,'little')
        for identifier,row in original['streamSnapshots'].items():
            at=base+abi['streams']+int(identifier)*abi['streamBytes']
            raw=self.native['streamOperations'].to_bytes(self.p,'little')+bytes(self.p)
            raw+=row['position'].to_bytes(8,'little')+row['cachedSize'].to_bytes(8,'little')
            self.expected[at:at+len(raw)]=raw
