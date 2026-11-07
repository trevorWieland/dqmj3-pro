from native_wave013_file_owner_game_state import *
from native_wave013_file_owner_game_state import encode as base_encode
from native_wave013_file_owner_mount_romfs import build as build_romfs


IMAGE=0xd0000


def archive_image(specification):
    names=specification.get('archive_file_ids',list(range(17)))
    values={}
    for identifier in names:
        row=specification.get('files',{}).get(str(identifier),{})
        units=row.get('units',specification.get('file_units',[0xfeff,0x61,10]))
        raw=bytes(row['bytes']) if 'bytes' in row else b''.join(unit.to_bytes(2,'little') for unit in units)
        values[str(identifier)+'.txt']=raw
    return build_romfs(values)


def encode(specification,base,p,seed,abi,callbacks,owner_operations,stream_operations):
    selected={**specification,'game_operation':'initialize','unallocated':True,'initialized':0,'mounted':0,'registered':0}
    layout=base_encode(selected,base,p,seed,abi,callbacks,owner_operations,stream_operations)
    layout['specification']=specification;session=abi['session'];data=bytearray(layout['before'])
    def put(at,value,size):data[at:at+size]=(value&((1<<(8*size))-1)).to_bytes(size,'little')
    def field(name,at,size,kind,value=0):
        layout['fields'].append({'name':'session.'+name,'offset':at,'size':size,'kind':kind});put(at,value,size)
    start=ENV+abi['game']['environmentBytes'];end=ENV+session['fixtureBytes'];data[start:end]=bytes(end-start)
    archive=ENV+session['archive'];backend=ENV+session['backend'];image=archive_image(specification)['image']
    if len(image)>0x20000:raise ValueError('Session archive exceeds immutable fixture region')
    data[IMAGE:IMAGE+len(image)]=image
    put(archive+session['providerImage'],base+IMAGE,p);put(archive+session['providerImageBytes'],len(image),4)
    for key,spec in [('providerOpenResult','mount_result'),('providerReadResult','archive_read_result'),
        ('providerChunk','archive_chunk'),('providerPriority','archive_priority')]:
        put(archive+session[key],specification.get(spec,0),4)
    for key in ['providerOpenCalls','providerReadCalls','providerPriorityCalls','providerCloseCalls','providerLive',
        'handleLive','kernelCloses','primitiveCount']:
        field('kernel.'+key,archive+session[key],4,'scalar')
    for key,size in [('providerOffsets',512),('providerRequests',256),('providerCopied',256),('primitives',128*session['eventBytes'])]:
        field('kernel.'+key,archive+session[key],size,'bytes')
    for key,value in [('archiveOperations',callbacks['archive_operations']),('archiveContext',base+archive),
        ('deleteOwner',callbacks['game_source_delete']),('failure',callbacks['backend_failure']),('ownerContext',base+ENV)]:
        put(backend+session[key],value,p)
    for key,size,kind in [('handle',4,'scalar'),('mounted',4,'scalar'),('header',40,'bytes'),
        ('eventCount',4,'scalar'),('events',128*session['eventBytes'],'bytes')]:
        field('backend.'+key,backend+session[key],size,kind)
    file=backend+session['file']
    for key,size,kind in [('fileOperations',p,'pointer'),('fileBackend',p,'pointer'),('fileOffset',8,'scalar'),
        ('fileLength',8,'scalar'),('fileIdentifier',4,'scalar'),('fileLive',4,'scalar')]:
        field('backend.'+key,file+session[key],size,kind)
    stream=backend+session['stream']
    for name,offset,size,kind in [('operations',0,p,'pointer'),('file',p,p,'pointer'),
        ('position',2*p,8,'scalar'),('cachedSize',2*p+8,8,'scalar')]:
        field('backend.stream.'+name,stream+offset,size,kind)
    for key,callback in [('requiredWorkMethod','session_work'),('mountMethod','session_mount'),
        ('unmountMethod','session_unmount'),('openMethod','session_open'),('releaseMethod','session_release'),
        ('deleteMethod','session_delete'),('failureMethod','session_failure')]:
        put(0x5800+abi[key],callbacks[callback],p)
    put(0x5800+abi['servicesContext'],base+backend,p)
    if specification.get('owner_allocator_null'):put(ENV+abi['game']['candidate'],0,p)
    if specification.get('storage_allocator_exhausted'):put(HEAP+p,base+STORAGE,p)
    layout['before']=bytes(data);layout['session']=session;layout['archiveImage']=image
    layout['sessionBackend']=backend;layout['sessionArchive']=archive
    layout['sessionFileOperations']=callbacks['archive_file_operations']
    layout['readable'] += [(base+start,base+end),(base+IMAGE,base+IMAGE+len(image))]
    return layout
