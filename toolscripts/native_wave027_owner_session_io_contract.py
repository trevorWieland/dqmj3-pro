import copy


def compare_primitives(source,target,logical,layout):
    if source==target:return {'orderedArchivePrimitiveTraceAgrees':True,'privateSdkIoDifferences':[]}
    missing=[row for row in logical if row['kind']==2 and row['result']&0xffffffff==0xc8804470]
    if len(missing)!=1:return None
    original=copy.deepcopy(target);reads=original['reads'];operations=original['primitives']
    if len(reads)<6:return None
    header=layout['archiveImage'][:40]
    directory_hash=int.from_bytes(header[4:8],'little');directory=int.from_bytes(header[12:16],'little')
    expected=[{'offset':directory_hash,'requested':4,'copied':4},{'offset':directory,'requested':24,'copied':24}]
    if reads[-2:]!=expected:return None
    positions=[i for i,row in enumerate(operations) if row['kind']==11]
    removed=[]
    for index,expected_read in zip(positions[-2:],expected,strict=True):
        row=operations[index]
        if row['result']!=0 or any(row[name]!=value for name,value in expected_read.items()):return None
        removed.append({'primitiveIndex':index,**row})
    original['reads']=reads[:-2];original['readCalls']-=2
    original['primitives']=[row for i,row in enumerate(operations) if i not in positions[-2:]]
    if source!=original:return None
    return {'orderedArchivePrimitiveTraceAgrees':False,'privateSdkIoDifferences':[{
        'role':'SDK missing-file directory fallback','originalOnlyReadEvents':removed,
        'sourceIssuesNoFallbackDirectoryLookup':True,'logicalFileResultComparedExactly':True}],
        'commonOrderedArchivePrimitivesAgree':True}
