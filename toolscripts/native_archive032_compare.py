from native_archive032_model import VIEW,HOLDER,CONTEXT,SIZE


class SemanticMismatch(RuntimeError):
    def __init__(self,source,target,reason):
        self.details={'returnedNormally':source['returnedNormally'],'immutableMemoryPreserved':source['immutableMemoryPreserved'],
            'reason':reason,'sourceResult':source['result'],'originalResult':target['result']}
        super().__init__(reason)


def compare(source,target):
    left,right=source['layout'],target['layout'];p=left['pointerBytes'];q=right['pointerBytes']
    a,b=left['abi'],right['abi'];expected=bytearray(left['before']);original=target['after']
    def get(at,size):return int.from_bytes(original[at:at+size],'little')
    def put(at,value,size):expected[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')
    def pointer(value):
        if value==0:return 0
        if right['base']<=value<right['base']+right['fixtureBytes']:return left['base']+value-right['base']
        raise ValueError('Archive changed a typed pointer to an undeclared identity')
    if get(VIEW,q)!=right['addresses']['operations']:
        raise SemanticMismatch(source,target,'Original archive operation table publication differs')
    put(VIEW,left['addresses']['operations'],p)
    put(VIEW+p,pointer(get(VIEW+q,q)),p);put(HOLDER,pointer(get(HOLDER,q)),p)
    for name in ['memory','view']:
        put(CONTEXT+a[name],pointer(get(CONTEXT+b[name],q)),p)
    for name in ['capacity','fail','allocations','requestedBytes','requestedAlignment','releases','imageLive','viewLive']:
        value=get(CONTEXT+b[name],4)
        if name=='capacity':
            if value!=q:raise ValueError('Original allocation fixture physical pointer budget differs')
            value=p
        elif name in ['requestedBytes','requestedAlignment'] and value:
            if value!=q:raise ValueError('Archive allocation is not the evidenced one-pointer holder')
            value=p
        put(CONTEXT+a[name],value,4)
    for index in range(4):put(CONTEXT+a['released']+index*p,pointer(get(CONTEXT+b['released']+index*q,q)),p)
    difference=next((i for i,(x,y) in enumerate(zip(expected,source['after'])) if x!=y),None)
    if difference is not None:raise SemanticMismatch(source,target,'Archive full typed fixture differs at '+hex(difference))
    if source['result']!=target['result']:raise SemanticMismatch(source,target,'Archive function return differs')
    return {'returnedNormally':True,'immutableCallerAndArchiveBytesPreserved':True,'fullFixtureBytesCompared':left['fixtureBytes'],
        'allTypedAndPaddingBytesAgree':True,'actualAllocationAndReleaseOrderAgree':True,
        'logicalOnePointerAllocationBudgetPreserved':True,'originalPhysicalPointerBytes':q,'sourcePhysicalPointerBytes':p,
        'unknownFieldsPreserved':True,'sourceUsesOriginalExecutableImage':False,'wholeGameEquivalenceClaimed':False}
