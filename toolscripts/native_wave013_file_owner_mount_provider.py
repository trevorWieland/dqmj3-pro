import ctypes

from native_wave013_common import ROOT,command,record


class Archive(ctypes.Structure):
    _fields_=[('image',ctypes.c_void_p),('image_bytes',ctypes.c_uint),('open_result',ctypes.c_int),
        ('read_result',ctypes.c_int),('maximum_chunk',ctypes.c_uint),('priority',ctypes.c_uint),
        ('open_calls',ctypes.c_uint),('read_calls',ctypes.c_uint),('priority_calls',ctypes.c_uint),
        ('close_calls',ctypes.c_uint),('live',ctypes.c_uint),('offsets',ctypes.c_ulonglong*64),
        ('requests',ctypes.c_uint*64),('copied',ctypes.c_uint*64)]


def build(folder,receipts):
    folder.mkdir(parents=True,exist_ok=True)
    source=ROOT/'toolscripts/native_wave013_file_owner_mount_service.c';obj=folder/'archive.obj'
    command([ROOT/'tools/clang-21/clang.exe','--target=x86_64-pc-windows-msvc','-O2','-std=c11',
        '-ffreestanding','-fno-builtin','-Wall','-Wextra','-Werror','-c',source,'-o',obj],folder/'compile.log',receipts)
    dll=folder/'archive.dll';symbols=['open','read','priority','close']
    command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/machine:x64','/nodefaultlib',
        '/out:'+str(dll),'/export:pattern_owner_archive_layout_values,data',*['/export:pattern_owner_archive_'+name for name in symbols],obj],folder/'link.log',receipts)
    return {'dll':record(dll),'object':record(obj),'source':record(source)}


class Provider:
    def __init__(self,dll,image,open_result=0,read_result=0,chunk=0,priority=0):
        self.library=ctypes.CDLL(str(dll));self.buffer=ctypes.create_string_buffer(bytes(image));self.before=bytes(self.buffer)
        measured=list((ctypes.c_uint*8).in_dll(self.library,'pattern_owner_archive_layout_values'))
        expected=[ctypes.sizeof(Archive),*[getattr(Archive,name).offset for name in ['image','image_bytes','open_calls','live','offsets','requests','copied']]]
        if measured!=expected:raise RuntimeError('Archive provider native ABI differs')
        self.state=Archive(ctypes.addressof(self.buffer),len(image),open_result,read_result,chunk,priority)
        self.library.pattern_owner_archive_open.argtypes=[ctypes.POINTER(Archive),ctypes.c_ulonglong,*([ctypes.c_uint]*4),ctypes.POINTER(ctypes.c_uint)]
        self.library.pattern_owner_archive_open.restype=ctypes.c_int
        self.library.pattern_owner_archive_read.argtypes=[ctypes.POINTER(Archive),ctypes.POINTER(ctypes.c_uint),ctypes.c_ulonglong,ctypes.c_void_p,ctypes.c_uint]
        self.library.pattern_owner_archive_read.restype=ctypes.c_int
        self.library.pattern_owner_archive_priority.argtypes=[ctypes.POINTER(Archive),ctypes.POINTER(ctypes.c_uint)]
        self.library.pattern_owner_archive_priority.restype=ctypes.c_int
        self.library.pattern_owner_archive_close.argtypes=[ctypes.POINTER(Archive)];self.library.pattern_owner_archive_close.restype=None

    def open(self,title,media,content,flags,attributes):
        handle=ctypes.c_uint(0)
        result=self.library.pattern_owner_archive_open(ctypes.byref(self.state),title,media,content,flags,attributes,ctypes.byref(handle))
        return result,handle.value

    def read(self,offset,count):
        if not 0<=count<=0x4000:raise ValueError('Archive service read exceeds qualified single output buffer')
        output=ctypes.create_string_buffer(count+128);ctypes.memset(output,0x5a,ctypes.sizeof(output));copied=ctypes.c_uint()
        result=self.library.pattern_owner_archive_read(ctypes.byref(self.state),ctypes.byref(copied),offset,ctypes.addressof(output)+64,count)
        raw=bytes(output)
        if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64 or copied.value>count:
            raise RuntimeError('Genuine archive service changed output guards/count')
        if bytes(self.buffer)!=self.before:raise RuntimeError('Archive service changed read-only input')
        return result,raw[64:64+copied.value]

    def priority(self):
        value=ctypes.c_uint();result=self.library.pattern_owner_archive_priority(ctypes.byref(self.state),ctypes.byref(value))
        return result,value.value

    def close(self):self.library.pattern_owner_archive_close(ctypes.byref(self.state))

    def trace(self):
        state=self.state
        if state.read_calls>64:raise RuntimeError('Archive provider read trace capacity exceeded')
        return {'openCalls':state.open_calls,'readCalls':state.read_calls,'priorityCalls':state.priority_calls,
            'closeCalls':state.close_calls,'live':state.live,'reads':[{'offset':state.offsets[i],
                'requested':state.requests[i],'copied':state.copied[i]} for i in range(min(state.read_calls,64))]}
