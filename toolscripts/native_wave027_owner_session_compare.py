from native_wave012_arena_oracle import STACK
from native_wave013_file_owner_game_compare import SemanticMismatch
from native_wave027_owner_session_projection import Projection
from native_wave027_owner_session_observations import kernel_trace,backend_trace,platform_state
from native_wave013_file_owner_game_state import ENV
from native_wave027_owner_session_io_contract import compare_primitives


def projection(source,original):
    identities=source['arenaIdentities']
    if source.get('knownCallerArena') is not None:
        if bool(identities)!=bool(original['arenaIdentities']):
            raise SemanticMismatch(source,original,'session native caller arena initialization differs')
        identities=[source['knownCallerArena']]*len(original['arenaIdentities'])
    if len(identities)!=len(original['arenaIdentities']):
        raise SemanticMismatch(source,original,'session compiled-rule invocation counts differ')
    value=Projection(original['layout'],source['layout'],constants={original['emptyLiteralAddress']:source['emptyLiteralAddress']})
    epoch=0
    for event in original['events']:
        if event['type']=='arena_epoch':value.owner_identity=(event['address'],identities[epoch]);epoch+=1
        elif event['type']=='allocation':value.allocate(event['address'],event['blocks'],event['kind'],event['caller'],event['count'])
        elif event['type']=='external_heap':value.external_heap(event)
        else:value.write(event['address'],event['bytes'],event['value'],event['pc'])
    if source['layout']['specification'].get('portable_arm') and original['arenaSnapshot'] is not None:
        value.caller_arena(original['arenaSnapshot'])
    value.service_expectations(original)
    return value


def compare(source,original):
    if source['ownershipReadViolations'] or original['ownershipReadViolations']:
        raise SemanticMismatch(source,original,'session read after logical owner/storage release')
    if source['lifetime']['readBeforeReinitialization'] or original['lifetime']['readBeforeReinitialization']:
        raise RuntimeError('Session read retired arena bytes before reinitialization')
    value=projection(source,original)
    masks=value.qualified_masks(original['after'],original['quarantinedArenaOffsets'])
    ignored={index for low,high in masks for index in range(low,high)}
    for low,high in masks:
        pointer=int.from_bytes(source['after'][low:high],'little')
        stack_low,stack_high=source.get('stackRange',[STACK,STACK+8192])
        if high-low!=source['layout']['pointerBytes'] or not stack_low<=pointer<stack_high:
            raise RuntimeError('Session lifetime exclusion is not a complete private stack pointer')
    start=ENV+source['layout']['abi']['game']['environmentBytes'];end=ENV+source['layout']['session']['fixtureBytes']
    ignored.update(range(start,end))
    difference=next((i for i,(a,b) in enumerate(zip(value.expected,source['after'])) if a!=b and i not in ignored),None)
    if difference is not None:raise SemanticMismatch(source,original,'session game/caller bytes differ at '+hex(difference))
    if source['result']!=original['result']:raise SemanticMismatch(source,original,'session game check return differs')
    kernel=kernel_trace(source['after'],source['layout']);logical=backend_trace(source['after'],source['layout'])
    io=compare_primitives(kernel,original['kernelServiceTrace'],logical,source['layout'])
    if io is None:raise SemanticMismatch(source,original,'session ordered archive primitive trace differs')
    if logical!=original['logicalIo']:raise SemanticMismatch(source,original,'session ordered file/ownership trace differs')
    private=platform_state(source['after'],source['layout'],original)
    intermediate=stages(source,original)
    return {**private,**io,'intermediateStages':intermediate,'gameAndCallerBytesAgree':True,'fullFixtureBytesObserved':len(source['after']),
        'explicitPrivatePlatformContextRange':[start,end],'qualifiedRetiredPointerMasks':masks,
        'originalSdkCacheWrites':value.sdk_private_writes,
        'orderedLogicalFileAndOwnershipTraceAgrees':True,'wholeMemoryEquivalenceClaimed':False,
        'sourceOutputPatched':False,'sdkPrivatePointersCopiedToNative':False}


def stages(source,original):
    if [row['stage'] for row in source['stageSnapshots']]!=['initialized','checked']:
        raise RuntimeError('Session source stage sequence differs')
    observations=[]
    for left,right in zip(source['stageSnapshots'],original['stageSnapshots'],strict=True):
        target={**original,**{key:value for key,value in right.items() if key not in ['memory','eventCount']},
            'after':right['memory'],'events':original['events'][:right['eventCount']]}
        count=sum(row['type']=='arena_epoch' for row in target['events'])
        target['arenaIdentities']=original['arenaIdentities'][:count]
        actual={**source,'after':left['memory'],'arenaIdentities':source['arenaIdentities'][:count]}
        if source.get('knownCallerArena') is not None:
            actual['arenaIdentities']=[source['knownCallerArena']] if count else []
        value=projection(actual,target)
        masks=value.qualified_masks(target['after'],right['quarantinedArenaOffsets'])
        ignored={index for low,high in masks for index in range(low,high)}
        start=ENV+actual['layout']['abi']['game']['environmentBytes'];end=ENV+actual['layout']['session']['fixtureBytes']
        ignored.update(range(start,end))
        different=next((i for i,(a,b) in enumerate(zip(value.expected,left['memory'])) if a!=b and i not in ignored),None)
        if left['result']!=right['result'] or different is not None:
            raise SemanticMismatch(source,original,'session intermediate '+left['stage']+' differs at '+str(different))
        observations.append({'stage':left['stage'],'result':left['result'],'allComparedGameAndCallerBytesAgree':True})
    return observations
