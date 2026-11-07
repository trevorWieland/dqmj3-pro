def cases():
    rows=[]
    for operation in ['resource','initialize']:
        for error in [0,0x80000001,0xd8804470,0xffffffff]:
            specification={'operation':operation,'registered':0,'mounted':0,'sdk_constructor':True,'instruction_limit':100000,
                'mount_result':error,'initial_file_id':231,'initial_final_flag':126}
            if operation=='initialize':specification.update({'unallocated':True,'initialized':0})
            rows.append({'name':operation+'-open-'+hex(error),'specification':specification})
    for value in [1,2,255]:
        rows.append({'name':'initialize-already-'+str(value),'specification':{'operation':'initialize','initialized':value,
            'registered':0,'mounted':0,'sdk_constructor':True,'instruction_limit':100000}})
    rows.append({'name':'initialize-preallocated','specification':{'operation':'initialize','initialized':0,
        'registered':0,'mounted':0,'sdk_constructor':True,'instruction_limit':100000}})
    rows.append({'name':'initialize-preserves-opaque-flags','specification':{'operation':'initialize','initialized':0,
        'unallocated':True,'initial_file_id':255,'bypass_at_sign':255,'initial_final_flag':0,
        'allocation_flag':255,'registered':0,'mounted':0,'sdk_constructor':True,'instruction_limit':100000}})
    for count in [1,4095,4096,4097,65536,73728]:
        rows.append({'name':'allocate-page-'+str(count),'specification':{'operation':'allocate','requested_bytes':count,
            'unallocated':True,'initialized':0,'registered':0,'mounted':0,'sdk_constructor':True,'instruction_limit':100000}})
    for ready in [0,1,255]:
        rows.append({'name':'allocate-existing-ready-'+str(ready),'specification':{'operation':'allocate','requested_bytes':73728,
            'memory_ready':ready,'registered':0,'mounted':0,'sdk_constructor':True,'instruction_limit':100000}})
    rows.append({'name':'allocate-unready-empty','specification':{'operation':'allocate','requested_bytes':1,
        'memory_ready':0,'unallocated':True,'registered':0,'mounted':0,'sdk_constructor':True,'instruction_limit':100000}})
    return rows
