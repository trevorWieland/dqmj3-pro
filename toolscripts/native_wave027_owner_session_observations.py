import ctypes

from native_wave013_file_owner_game_state import ENV


def integer(memory,offset,size=4):return int.from_bytes(memory[offset:offset+size],'little')


def event_rows(memory,start,count,abi):
    if count>128:raise ValueError('Session event trace capacity exceeded')
    rows=[]
    for index in range(count):
        at=start+index*abi['eventBytes']
        row={name:integer(memory,at+abi['event'+name[0].upper()+name[1:]],8 if name=='offset' else 4)
            for name in ['kind','identifier','offset','requested','copied','result']}
        row['result']=ctypes.c_int(row['result']).value;rows.append(row)
    return rows


def kernel_trace(memory,layout):
    abi=layout['session'];at=ENV+abi['archive'];reads=integer(memory,at+abi['providerReadCalls'])
    if reads>64:raise ValueError('Session archive read trace capacity exceeded')
    names={'openCalls':'providerOpenCalls','readCalls':'providerReadCalls','priorityCalls':'providerPriorityCalls',
        'closeCalls':'providerCloseCalls','live':'providerLive','handleLive':'handleLive','kernelCloses':'kernelCloses'}
    result={name:integer(memory,at+abi[key]) for name,key in names.items()}
    result['reads']=[{'offset':integer(memory,at+abi['providerOffsets']+8*i,8),
        'requested':integer(memory,at+abi['providerRequests']+4*i),
        'copied':integer(memory,at+abi['providerCopied']+4*i)} for i in range(reads)]
    count=integer(memory,at+abi['primitiveCount'])
    result['primitives']=event_rows(memory,at+abi['primitives'],count,abi)
    return result


def backend_trace(memory,layout):
    abi=layout['session'];at=ENV+abi['backend'];count=integer(memory,at+abi['eventCount'])
    return event_rows(memory,at+abi['events'],count,abi)


def platform_state(memory,layout,original):
    abi=layout['session'];at=ENV+abi['backend'];p=layout['pointerBytes'];base=layout['base']
    if integer(memory,at+abi['handle'])!=0 or integer(memory,at+abi['mounted'])!=0:
        raise ValueError('Session archive backend remains mounted after teardown')
    file=at+abi['file'];events=original['logicalIo']
    opened=[row for row in events if row['kind']==2 and row['result']>=0]
    if opened:
        row=opened[-1];sizes=[item['offset'] for item in events if item['kind']==3 and item['identifier']==row['identifier'] and item['result']>=0]
        contracts=[item for item in original.get('openedFileContracts',[]) if item['identifier']==row['identifier']]
        length=contracts[-1]['length'] if contracts else sizes[-1] if sizes else 0
        expected={'fileOperations':layout['sessionFileOperations'],'fileBackend':base+at,'fileOffset':row['offset'],
            'fileLength':length,'fileIdentifier':row['identifier'],'fileLive':0}
        for key,value in expected.items():
            size=p if key in ['fileOperations','fileBackend'] else 8 if key in ['fileOffset','fileLength'] else 4
            if integer(memory,file+abi[key],size)!=value:raise ValueError('Session native private file contract differs: '+key)
        if memory[at+abi['header']:at+abi['header']+40]!=layout['archiveImage'][:40]:
            raise ValueError('Session native parsed header differs from actual archive input')
        stream=at+abi['stream'];snapshot=original['streamSnapshots'].get(str(row['identifier']))
        if snapshot:
            expected_stream=(layout['streamOperations'],0,snapshot['position'],snapshot['cachedSize'])
            actual_stream=(integer(memory,stream,p),integer(memory,stream+p,p),integer(memory,stream+2*p,8),integer(memory,stream+2*p+8,8))
            if actual_stream!=expected_stream:raise ValueError('Session native stream contract differs from live original stream')
    work=layout['resourceWork']
    if memory[work:work+2048]!=layout['before'][work:work+2048]:raise ValueError('Session native wrote target SDK cache representation')
    return {'sourcePrivateFileAndStreamContractsChecked':True,'sourceWorkBufferPreservedBytes':2048,
        'sourceArchiveHandleReleased':True,'callerAnchoredPointersChecked':True}
