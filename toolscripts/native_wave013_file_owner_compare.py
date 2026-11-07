from native_wave012_arena_oracle import STACK
import native_wave013_file_owner_state as model


class SemanticMismatch(RuntimeError):
    def __init__(self,source,original,reason):
        self.details={'returnedNormally':source['returnedNormally'],'immutableMemoryPreserved':source['immutableMemoryPreserved'],
            'reason':reason,'sourceResult':source['result'],'originalResult':original['result'],
            'sourceMemorySha256':source['memorySha256'],'originalMemorySha256':original['memorySha256']}
        super().__init__('Normally returning whole owner differs: '+reason)


def projection(source,original):
    if len(source['arenaIdentities'])!=len(original['arenaIdentities']):
        raise SemanticMismatch(source,original,'compiled rule invocation counts differ')
    value=model.Projection(original['layout'],source['layout'],
        constants={original['emptyLiteralAddress']:source['emptyLiteralAddress']})
    epoch=0
    for event in original['events']:
        if event['type']=='arena_epoch':
            value.owner_identity=(event['address'],source['arenaIdentities'][epoch]);epoch+=1
        elif event['type']=='allocation':value.allocate(event['address'],event['blocks'],event['kind'],event['caller'],event['count'])
        elif event['type']=='external_heap':value.external_heap(event)
        else:value.write(event['address'],event['bytes'],event['value'],event['pc'])
    if source['layout']['specification'].get('portable_arm') and original['arenaSnapshot'] is not None:
        value.caller_arena(original['arenaSnapshot'])
    value.service_expectations(original)
    return value


def compare(source,original):
    if source.get('ownershipReadViolations') or original.get('ownershipReadViolations'):
        raise SemanticMismatch(source,original,'read after logical ownership release')
    if source['lifetime']['readBeforeReinitialization'] or original['lifetime']['readBeforeReinitialization']:
        raise RuntimeError('Owner source/reference read retired arena bytes')
    value=projection(source,original)
    masks=value.qualified_masks(original['after'],original['quarantinedArenaOffsets'])
    ignored={index for low,high in masks for index in range(low,high)}
    for low,high in masks:
        pointer=int.from_bytes(source['after'][low:high],'little')
        if high-low!=source['layout']['pointerBytes'] or not STACK<=pointer<STACK+8192:
            raise RuntimeError('Owner excluded link is outside measured source private stack')
    difference=next((i for i,(a,b) in enumerate(zip(value.expected,source['after'])) if a!=b and i not in ignored),None)
    if difference is not None:
        raise SemanticMismatch(source,original,'typed fixture bytes differ at '+hex(difference)+
            ': expected '+hex(value.expected[difference])+' actual '+hex(source['after'][difference]))
    result=original['result']
    if original['layout']['specification'].get('operation')=='construct':result=value.pointer(result)
    if source['result']!=result:raise SemanticMismatch(source,original,'return value differs')
    if original['arenaSnapshot'] is not None and source['arenaSnapshot'][2]!=original['arenaSnapshot'][2]:
        raise SemanticMismatch(source,original,'last compiled arena cursor differs')
    return {'fullFixtureBytesCompared':model.SIZE,'privateTemporaryLinkMasks':masks,'everyOtherByteAgrees':True,
        'streamFieldsComparedWhileOriginalStreamWasLive':True,'providerTraceCompared':True,
        'logicalOwnerReleaseObserved':source['ownerRetired'],'logicalStorageReleaseObserved':source['storageRetired'],
        'wholeMemoryEquivalenceClaimed':False,'expiredArenaDereferencedByObserver':False,
        'arenaLifetime':'caller-owned live arena' if source['layout']['specification'].get('portable_arm') else 'canonical invocation ends at return'}
