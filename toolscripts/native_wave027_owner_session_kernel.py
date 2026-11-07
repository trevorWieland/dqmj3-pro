import ctypes

from native_wave013_file_owner_mount_provider import Archive
from native_wave027_owner_session_layout import windows


class Event(ctypes.Structure):
    _fields_=[('kind',ctypes.c_uint),('identifier',ctypes.c_uint),('offset',ctypes.c_ulonglong),
        ('requested',ctypes.c_uint),('copied',ctypes.c_uint),('result',ctypes.c_int)]


class KernelState(ctypes.Structure):
    _fields_=[('provider',Archive),('handle_live',ctypes.c_uint),('kernel_closes',ctypes.c_uint),
        ('primitive_count',ctypes.c_uint),('primitives',Event*128)]


class Kernel:
    def __init__(self,dll,image,open_result=0,read_result=0,chunk=0,priority=0):
        self.library=ctypes.CDLL(str(dll));abi=windows(self.library)
        values=[ctypes.sizeof(KernelState),*[getattr(KernelState,key).offset for key in ['handle_live','kernel_closes','primitive_count','primitives']]]
        if values!=[abi[key] for key in ['kernelBytes','handleLive','kernelCloses','primitiveCount','primitives']]:
            raise RuntimeError('Session typed kernel ABI differs')
        self.buffer=ctypes.create_string_buffer(bytes(image));self.before=bytes(self.buffer)
        self.state=KernelState();self.state.provider=Archive(ctypes.addressof(self.buffer),len(image),open_result,read_result,chunk,priority)
        signatures={'open':([ctypes.c_void_p,ctypes.c_ulonglong,ctypes.POINTER(ctypes.c_uint)],ctypes.c_int),
         'read':([ctypes.c_void_p,ctypes.c_uint,ctypes.c_ulonglong,ctypes.c_void_p,ctypes.c_uint,ctypes.POINTER(ctypes.c_uint)],ctypes.c_int),
         'priority':([ctypes.c_void_p,ctypes.POINTER(ctypes.c_uint)],ctypes.c_int),
         'file_close':([ctypes.c_void_p,ctypes.c_uint],ctypes.c_int),'handle_close':([ctypes.c_void_p,ctypes.c_uint],ctypes.c_int)}
        for name,(arguments,result) in signatures.items():
            function=getattr(self.library,'owner_session_kernel_'+name);function.argtypes=arguments;function.restype=result

    def open(self,title,media=0,content=1,flags=1,attributes=0):
        if (media,content,flags,attributes)!=(0,1,1,0):raise ValueError('Session original archive path contract differs')
        handle=ctypes.c_uint();result=self.library.owner_session_kernel_open(ctypes.byref(self.state),title,ctypes.byref(handle))
        return result,handle.value

    def read(self,offset,count):
        if not 0<=count<=16384:raise ValueError('Session kernel read exceeds declared output object')
        output=ctypes.create_string_buffer(count+128);ctypes.memset(output,0x5a,ctypes.sizeof(output));copied=ctypes.c_uint()
        result=self.library.owner_session_kernel_read(ctypes.byref(self.state),0xa532,offset,
            ctypes.addressof(output)+64,count,ctypes.byref(copied));raw=bytes(output)
        if copied.value>count or raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64:
            raise RuntimeError('Session kernel output guards/count changed')
        if bytes(self.buffer)!=self.before:raise RuntimeError('Session kernel changed immutable archive image')
        return result,raw[64:64+copied.value]

    def priority(self):
        value=ctypes.c_uint();result=self.library.owner_session_kernel_priority(ctypes.byref(self.state),ctypes.byref(value))
        return result,value.value

    def file_close(self,handle=0xa532):return self.library.owner_session_kernel_file_close(ctypes.byref(self.state),handle)
    def handle_close(self,handle=0xa532):return self.library.owner_session_kernel_handle_close(ctypes.byref(self.state),handle)

    def trace(self):
        count=self.state.primitive_count
        if count>128:raise RuntimeError('Session primitive trace capacity exceeded')
        p=self.state.provider
        if p.read_calls>64:raise RuntimeError('Session archive read trace capacity exceeded')
        return {'openCalls':p.open_calls,'readCalls':p.read_calls,'priorityCalls':p.priority_calls,'closeCalls':p.close_calls,
            'live':p.live,'handleLive':self.state.handle_live,'kernelCloses':self.state.kernel_closes,
            'reads':[{'offset':p.offsets[i],'requested':p.requests[i],'copied':p.copied[i]} for i in range(min(p.read_calls,64))],
            'primitives':[{name:getattr(event,name) for name in ['kind','identifier','offset','requested','copied','result']}
                for event in self.state.primitives[:count]]}
