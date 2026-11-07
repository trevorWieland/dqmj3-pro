from native_wave013_common import sha


def logical(result):
    state=result['state'];layout=result['layout'];spec=layout['specification'];rows=state['allocations']
    buffer_role=state['viewBufferRole'];output_role=state['buffer'].get('outputRole')
    def buffer(row):
        return buffer_role=='allocation-'+str(row['ordinal']) or buffer_role=='preexisting-buffer' and row['ordinal']==1
    def output(row):return output_role=='allocation-'+str(row['ordinal'])
    leaked=[row['ordinal'] for row in rows if row['live'] and not buffer(row) and not output(row)]
    release_order=[]
    for role in state['released']:
        if role=='preexisting-buffer' or role==buffer_role:category='wrapper-buffer'
        elif role=='provided-output':category='external-output'
        elif result['function'] in ['fn_005f5eac','gzip-lifecycle'] and spec.get('owned') and role=='allocation-3':category='owned-output'
        else:category='codec-private-cleanup'
        if category!='codec-private-cleanup' or not release_order or release_order[-1]!=category:release_order.append(category)
    requested=[]
    if result['function']=='fn_005f5f90':
        at=1 if spec.get('reentry_mode')==1 else 0
        requested=[{'role':'wrapper-buffer','attempted':len(rows)>at,
            'nativeSizeCorrect':len(rows)>at and rows[at]['bytes']==layout['abi']['bufferBytes'],
            'success':len(rows)>at and rows[at]['offset'] is not None}]
    if result['function']=='fn_005f5eac' and spec.get('owned'):
        requested=[{'role':'owned-output','attempted':len(rows)>2,
            'bytes':None if len(rows)<3 else rows[2]['bytes'],
            'success':len(rows)>2 and rows[2]['offset'] is not None}]
    return {'result':result['result'],'viewBufferRole':buffer_role,
        'operationsPublished':state['operationsPublished'],'buffer':state['buffer'],
        'wrapperAllocationRequests':requested,'wrapperReleaseOrder':release_order,
        'bufferAllocationLive':any(row['live'] and buffer(row) for row in rows),
        'outputAllocationLive':any(row['live'] and output(row) for row in rows),
        'allUnpublishedAllocationsReleased':not leaked,
        'externalOutputReleased':state['released'].count('provided-output'),
        'invalidReleases':state['invalidReleases'],'externalLive':state['externalLive'],
        'sequenceResults':result.get('sequenceResults',[]),'liveInflateOutputSha256':result.get('liveInflateOutputSha256',[]),
        'callerOutputSha256':sha(result['callerOutput']),
        'ownedOutputSha256':None if result['ownedOutput'] is None else sha(result['ownedOutput'])}


def api(result):
    rows=[]
    for event in result.get('codecApiEvents',[]):
        row={key:value for key,value in event.items() if key not in ['returnAddress','streamAddress','streamBytes']}
        if 'streamBytes' in event:row['streamBytesMatchesActualAbi']=event['streamBytes']==result['layout']['abi']['streamBytes']
        rows.append(row)
    return rows


def compare(reference,candidate):
    left=logical(reference);right=logical(candidate)
    fields=[key for key in left if left[key]!=right[key]]
    return {'equivalent':not fields,'differentFields':fields,'reference':left,'candidate':right,
        'codecApiEquivalent':None if candidate.get('codecApiEventsNotInstrumented') else api(reference)==api(candidate),
        'referenceCodecApi':api(reference),'candidateCodecApi':api(candidate),
        'codecPrivateAllocationRepresentationCompared':False,'wholeMemoryOrUniversalEquivalenceClaimed':False}
