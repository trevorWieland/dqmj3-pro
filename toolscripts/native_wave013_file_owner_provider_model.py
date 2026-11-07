ENV=0x40000
PROVIDER_OPERATIONS=0x6100
FILE_OPERATIONS=0x6200


def encode(data,base,p,abi,callbacks,specification,add_field):
    def put(at,value,size=4):data[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')
    data[ENV:ENV+abi['backendBytes']]=bytes(abi['backendBytes'])
    data[PROVIDER_OPERATIONS:PROVIDER_OPERATIONS+13*p]=bytes(13*p)
    data[FILE_OPERATIONS:FILE_OPERATIONS+13*p]=bytes(13*p)
    put(PROVIDER_OPERATIONS,callbacks['provider_open'],p)
    put(PROVIDER_OPERATIONS+12*p,callbacks['provider_close'],p)
    put(FILE_OPERATIONS,callbacks['provider_read'],p)
    put(FILE_OPERATIONS+3*p,callbacks['provider_size'],p)
    put(FILE_OPERATIONS+12*p,callbacks['file_close'],p)
    put(ENV,base+PROVIDER_OPERATIONS,p);put(ENV+p,base+ENV,p)
    readable=[]
    for identifier in range(17):
        start=ENV+abi['files']+identifier*abi['fileBytes']
        override=specification.get('files',{}).get(str(identifier),{})
        units=override.get('units',specification.get('file_units',[0xfeff,0x61,10]))
        raw=bytes(override['bytes']) if 'bytes' in override else b''.join(value.to_bytes(2,'little') for value in units)
        if len(raw)>16384:raise ValueError('Provider file exceeds qualified game buffer domain')
        payload=0x60000+identifier*0x4000
        data[payload:payload+len(raw)]=raw
        readable.append((base+payload,base+payload+len(raw)))
        for at,value,size in [(0,base+FILE_OPERATIONS,p),(abi['fileEnvironment'],base+ENV,p),
            (abi['fileData'],base+payload,p),(abi['fileLength'],len(raw),4),(abi['fileId'],identifier,4),
            (abi['fileChunk'],override.get('chunk',specification.get('chunk',0)),4)]:put(start+at,value,size)
        for name,key in [('open_calls','fileOpenCalls'),('close_calls','fileCloseCalls'),('read_calls','fileReadCalls'),
            ('size_calls','fileSizeCalls'),('live','fileLive')]:
            add_field('provider.file.'+str(identifier)+'.'+name,start+abi[key],4,'scalar')
        for name,key,size in [('offsets','fileOffsets',512),('requests','fileRequests',256),('copied','fileCopied',256)]:
            add_field('provider.file.'+str(identifier)+'.'+name,start+abi[key],size,'bytes')
    for name,key in [('open_calls','openCalls'),('provider_close_calls','providerCloseCalls'),('registered','registered'),
        ('close_calls','closeCalls'),('delete_calls','deleteCalls'),('owner_retired','ownerRetired')]:
        add_field('provider.'+name,ENV+abi[key],4,'scalar')
    put(ENV+abi['registered'],specification.get('registered',1))
    put(ENV+abi['watchedFlags'],base+0x4000,p)
    put(ENV+abi['watchedCount'],min(len(specification.get('candidates',['a','b'])),16))
    add_field('provider.open_flags',ENV+abi['openFlags'],512,'bytes')
    for name,key,size in [('cfg.count','cfgQueryCount',4),('cfg.kinds','cfgQueryKind',16),('cfg.flags','cfgQueryFlags',256)]:
        add_field('backend.'+name,ENV+abi[key],size,'bytes')
    for name,key in [('open_ids','openIds'),('open_modes','openModes'),('close_ids','closeIds')]:
        add_field('provider.'+name,ENV+abi[key],32,'bytes')
    put(ENV+abi['openErrorIndex'],specification.get('open_error_index',-1))
    put(ENV+abi['openError'],specification.get('open_error',0xd8804470))
    put(ENV+abi['requiredWork'],56);put(ENV+abi['mountResult'],specification.get('mount_result',0))
    for name,key,size,kind in [('mount_calls','mountCalls',4,'scalar'),('unmount_calls','unmountCalls',4,'scalar'),
        ('failure_calls','failureCalls',4,'scalar'),('failure_reason','failureReason',4,'scalar'),
        ('archive','archive',8,'scalar'),('work','work',p,'pointer'),('work_bytes','workBytes',4,'scalar'),
        ('region_calls','regionCalls',4,'scalar'),('language_calls','languageCalls',4,'scalar'),('cfg_failure_calls','cfgFailureCalls',4,'scalar')]:
        add_field('backend.'+name,ENV+abi[key],size,kind)
    regions=specification.get('regions',[1,1]);put(ENV+abi['regions'],regions[0],1);put(ENV+abi['regions']+1,regions[-1],1)
    put(ENV+abi['language'],specification.get('language',1),1)
    streams=[]
    for identifier in range(17):
        start=ENV+abi['streams']+identifier*abi['streamBytes']
        for name,at,size,kind in [('operations',0,p,'pointer'),('file',p,p,'pointer'),
            ('position',2*p,8,'scalar'),('cached_size',2*p+8,8,'scalar')]:
            add_field('stream.'+str(identifier)+'.'+name,start+at,size,kind)
        streams.append(start)
    return {'readable':readable,'streams':streams,'environment':ENV}
