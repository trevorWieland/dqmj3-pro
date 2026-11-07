import ctypes

KEYS=['fixtureBytes','archive','backend','backendBytes','fileBytes','eventBytes',
 'archiveOperations','archiveContext','deleteOwner','failure','ownerContext','handle','mounted','header','file','stream',
 'eventCount','events','fileOperations','fileBackend','fileOffset','fileLength','fileIdentifier','fileLive',
 'eventKind','eventIdentifier','eventOffset','eventRequested','eventCopied','eventResult',
 'providerBytes','providerImage','providerImageBytes','providerOpenResult','providerReadResult','providerChunk',
 'providerPriority','providerOpenCalls','providerReadCalls','providerPriorityCalls','providerCloseCalls','providerLive',
 'providerOffsets','providerRequests','providerCopied','kernelBytes','handleLive','kernelCloses','primitiveCount','primitives']


def arm(graph):
    row=next(row for row in graph['readonlyObjects'] if row['symbol']=='owner_session_layout_values')
    raw=next(data[row['address']-address:row['address']-address+row['bytes']] for address,data in graph['blocks']
        if address<=row['address']<row['address']+row['bytes']<=address+len(data))
    return dict(zip(KEYS,[int.from_bytes(raw[index:index+4],'little') for index in range(0,len(raw),4)],strict=True))


def windows(library):
    return dict(zip(KEYS,list((ctypes.c_uint*len(KEYS)).in_dll(library,'owner_session_layout_values')),strict=True))
