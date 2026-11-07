import hashlib

import unicorn
from native_wave013_file_owner_reference_image import ReferenceImage as Prior


def merged(regions):
    rows=[]
    for start,end,permissions in sorted(regions):
        end+=1
        if rows and rows[-1][1]==start and rows[-1][2]==permissions:rows[-1][1]=end
        else:rows.append([start,end,permissions])
    return rows


def verify(reference):
    prior=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    current=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    Prior.map(reference,prior);reference.map(current)
    old,new=merged(prior.mem_regions()),merged(current.mem_regions())
    if old!=new:raise ValueError('Coalesced original segment permissions differ')
    rows=[]
    for low,high,permissions in old:
        a=hashlib.sha256();b=hashlib.sha256()
        for start in range(low,high,1024*1024):
            size=min(1024*1024,high-start);a.update(bytes(prior.mem_read(start,size)));b.update(bytes(current.mem_read(start,size)))
        if a.digest()!=b.digest():raise ValueError('Coalesced original segment bytes/BSS/padding differ')
        rows.append({'start':low,'endExclusive':high,'permissions':permissions,'sha256':a.hexdigest()})
    return {'allMappedOriginalBytesBssPaddingAndPermissionsAgree':True,'regions':rows,
        'originalExecutableBytesPatched':False,'mappingGroupingChangedOnly':True}
