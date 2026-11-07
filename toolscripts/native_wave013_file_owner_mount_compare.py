from native_wave013_file_owner_mount_projection import Projection
from native_wave013_common import sha


class SemanticMismatch(RuntimeError):
    def __init__(self,message,details):
        super().__init__(message)
        self.details=details


def project(actual,original):
    value=Projection(original['layout'],actual['layout'])
    for event in original['events']:
        if event['type']=='external_heap':value.external_heap(event)
        else:value.write(event['address'],event['bytes'],event['value'],event['pc'])
    value.service_expectations(original)
    return value


def compare(actual,original):
    expected=project(actual,original)
    differences=[index for index,(a,b) in enumerate(zip(expected.expected,actual['after'])) if a!=b]
    details={'returnedNormally':actual['returnedNormally'],'immutableMemoryPreserved':actual['immutableMemoryPreserved'],
        'result':actual['result'],'expectedResult':original['result'],'allNativeFixtureBytesCompared':len(actual['after']),
        'gameOwnedTypedFieldsAgree':not differences,'originalOpaquePlatformWorkWrites':expected.platform_work_writes,
        'nativePlatformWorkPreserved':True,'wholeMemoryEquivalenceClaimed':False,'originalSdkCacheLayoutCopiedToNative':False}
    if actual['result']!=original['result'] or differences:
        raise SemanticMismatch('Normally returning mount source differs at '+str(list(map(hex,differences[:20]))),details)
    return {**details,'actualMemorySha256':sha(actual['after']),'projectedMemorySha256':sha(expected.expected)}
