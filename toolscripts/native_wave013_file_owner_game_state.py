from native_wave013_file_owner_mount_state import *
from native_wave013_file_owner_mount_state import encode as base_encode
from native_wave013_file_owner_state import owner_fields,OWNER
from native_wave013_file_owner_provider_model import ENV


SLOT=0x3200
OLD_OWNER=0x3600
GAME_SERVICES=0x6400


def encode(specification,base,p,seed,abi,callbacks,owner_operations,stream_operations):
    game=abi['game'];operation=specification.get('game_operation','initialize')
    selected='construct' if operation=='construct' or operation=='initialize' and not specification.get('existing') else 'delete' if operation=='destroy' else 'apply'
    layout=base_encode({**specification,'operation':selected},base,p,seed,abi,callbacks,owner_operations,stream_operations)
    layout['specification']=specification
    data=bytearray(layout['before']);fields=layout['fields']
    def put(at,value,size):data[at:at+size]=(value&((1<<(8*size))-1)).to_bytes(size,'little')
    def field(name,at,size,kind,value=0):
        fields.append({'name':name,'offset':at,'size':size,'kind':kind});put(at,value,size)
    extra=ENV+abi['backendBytes'];end=ENV+game['environmentBytes']
    data[extra:end]=bytes(end-extra)
    put(ENV+game['heap'],callbacks['game_heap_operations'],p)
    put(ENV+game['heap']+p,base+ENV,p)
    put(ENV+game['filter'],base+SLOT,p);put(ENV+game['candidate'],base+OWNER,p)
    put(ENV+game['intervening'],base+OLD_OWNER,p)
    put(ENV+game['reentryMode'],specification.get('reentry_mode',0),4)
    for name in ['allocations','releases','requestedBytes','requestedAlignment']:
        field('game.'+name,ENV+game[name],4,'scalar')
    for name in ['slotBefore','slotDuring']:field('game.'+name,ENV+game[name],p,'pointer')
    value=base+OWNER if operation in ['check','destroy'] and not specification.get('empty') or specification.get('existing') else 0
    if operation=='construct':value=base+OWNER
    field('game.slot',SLOT,p,'pointer',value)
    for name,at,size,kind in owner_fields(p):
        old=owner_operations if name=='operations' else specification.get('old_file_id',47) if name=='file_id' else 1 if name=='final_flag' else 0
        field('game.old_owner.'+name,OLD_OWNER+at,size,kind,old)
    for index in range(4):
        at=ENV+game['released']+index*game['releasedBytes']
        field('game.released.'+str(index)+'.identity',at+game['releasedIdentity'],p,'pointer')
        field('game.released.'+str(index)+'.slot',at+game['releasedSlot'],p,'pointer')
        for name,offset,size,kind in owner_fields(p):
            field('game.released.'+str(index)+'.snapshot.'+name,at+game['releasedSnapshot']+offset,size,kind)
    put(GAME_SERVICES,callbacks['game_allocate_owner'],p);put(GAME_SERVICES+p,base+ENV,p)
    put(0x5800+abi['deleteMethod'],callbacks['game_source_delete'],p)
    layout['gameTextPointer']=int.from_bytes(data[0x4200:0x4200+p],'little')
    layout['before']=bytes(data);layout['game']=game
    layout['readable'] += [(base+SLOT,base+SLOT+p),(base+OLD_OWNER-12,base+OLD_OWNER+game['ownerBytes']),
        (base+extra,base+end),(base+GAME_SERVICES,base+GAME_SERVICES+2*p)]
    return layout
