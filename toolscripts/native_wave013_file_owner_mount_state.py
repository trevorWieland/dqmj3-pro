from native_wave013_file_owner_state import *
from native_wave013_file_owner_state import encode as base_encode


def encode(specification,base,p,seed,abi,callbacks,owner_operations,stream_operations):
    layout=base_encode(specification,base,p,seed,abi,callbacks,owner_operations,stream_operations)
    raw=bytearray(layout['before'])
    raw[0x5800+abi['memoryReady']]=specification.get('memory_ready',1)
    layout['before']=bytes(raw)
    return layout
