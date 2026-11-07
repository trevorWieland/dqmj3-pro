import ctypes
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
from native_wave013_file_owner_mount_romfs import build as romfs
from native_wave027_owner_session_kernel import Kernel
from native_wave027_owner_session_layout import windows
from native_wave027_owner_session_build import windows as build_windows


class Opened(ctypes.Structure):
    _fields_=[('stream',ctypes.c_void_p),('tagged',ctypes.c_ubyte)]


class NativeArchiveSession(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.dll=build_windows(ROOT/'work/wave027-owner-session/unit',[])
        cls.library=ctypes.CDLL(str(cls.dll));cls.abi=windows(cls.library)

    def prepare(self,files=None,**configuration):
        image=romfs({'0.txt':b'zero','1.txt':b'abcdef'} if files is None else files)['image']
        kernel=Kernel(self.dll,image,**configuration);abi=self.abi
        buffer=ctypes.create_string_buffer(abi['backendBytes']+128);ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer))
        base=ctypes.addressof(buffer)+64
        self.assertEqual(base%8,0);ctypes.memset(base,0,abi['backendBytes'])
        operations=ctypes.addressof((ctypes.c_void_p*4).in_dll(self.library,'owner_session_archive_operations'))
        ctypes.c_void_p.from_address(base+abi['archiveOperations']).value=operations
        ctypes.c_void_p.from_address(base+abi['archiveContext']).value=ctypes.addressof(kernel.state)
        work=ctypes.create_string_buffer(bytes([0xa5])*2048)
        mount=self.library.owner_archive_mount;mount.argtypes=[ctypes.c_void_p,ctypes.c_ulonglong,ctypes.c_void_p,ctypes.c_uint];mount.restype=ctypes.c_int
        result=mount(base,0x400db00010302,ctypes.addressof(work),2048)
        return kernel,buffer,base,work,result

    def open(self,base,name='1.txt'):
        units=[ord(unit) for unit in 'ngword:/'+name];path=(ctypes.c_ushort*(len(units)+1))(*units,0);opened=Opened()
        function=self.library.owner_archive_open;function.argtypes=[ctypes.c_void_p,ctypes.POINTER(ctypes.c_ushort),ctypes.POINTER(Opened)];function.restype=ctypes.c_int
        result=function(base,path,ctypes.byref(opened));return result,opened

    def file_method(self,base,slot,arguments):
        file=base+self.abi['file'];operations=ctypes.c_void_p.from_address(file+self.abi['fileOperations']).value
        address=ctypes.c_void_p.from_address(operations+slot*8).value
        return file,ctypes.CFUNCTYPE(ctypes.c_int,ctypes.c_void_p,*arguments)(address)

    def unmount(self,base):
        function=self.library.owner_archive_unmount;function.argtypes=[ctypes.c_void_p,ctypes.c_char_p];function.restype=ctypes.c_int
        return function(base,b'ngword:')

    def test_actual_native_mount_and_romfs_lookup(self):
        kernel,buffer,base,work,result=self.prepare();self.assertEqual(result,0)
        result,opened=self.open(base);self.assertEqual(result,0);self.assertEqual(opened.stream,base+self.abi['stream']);self.assertEqual(opened.tagged,0)
        file,size=self.file_method(base,3,[ctypes.POINTER(ctypes.c_ulonglong)]);value=ctypes.c_ulonglong()
        self.assertEqual(size(file,ctypes.byref(value)),0);self.assertEqual(value.value,6)

    def test_data_comes_from_the_archive_not_a_selected_result(self):
        kernel,buffer,base,work,result=self.prepare({'1.txt':b'changed bytes'})
        self.assertEqual(self.open(base)[0],0);file,read=self.file_method(base,0,[ctypes.POINTER(ctypes.c_uint),ctypes.c_ulonglong,ctypes.c_void_p,ctypes.c_uint])
        output=ctypes.create_string_buffer(40);ctypes.memset(output,0x5a,40);copied=ctypes.c_uint()
        self.assertEqual(read(file,ctypes.byref(copied),0,ctypes.addressof(output)+8,20),0)
        self.assertEqual(copied.value,13);self.assertEqual(bytes(output)[8:21],b'changed bytes')
        self.assertEqual(bytes(output)[:8],bytes([0x5a])*8);self.assertEqual(bytes(output)[28:],bytes([0x5a])*12)

    def test_logical_file_eof_does_not_issue_an_archive_read(self):
        kernel,buffer,base,work,result=self.prepare();self.open(base)
        file,read=self.file_method(base,0,[ctypes.POINTER(ctypes.c_uint),ctypes.c_ulonglong,ctypes.c_void_p,ctypes.c_uint]);output=ctypes.create_string_buffer(8);copied=ctypes.c_uint(99)
        before=kernel.state.provider.read_calls
        self.assertEqual(read(file,ctypes.byref(copied),0x100000000,output,8),0);self.assertEqual(copied.value,0)
        self.assertEqual(kernel.state.provider.read_calls,before)

    def test_native_private_state_does_not_copy_target_cache_words(self):
        kernel,buffer,base,work,result=self.prepare();self.open(base)
        self.assertEqual(bytes(work)[:2048],bytes([0xa5])*2048)
        self.assertEqual(bytes(buffer)[:64],bytes([0x5a])*64);self.assertEqual(bytes(buffer)[-64:],bytes([0x5a])*64)

    def test_missing_file_has_measured_status(self):
        kernel,buffer,base,work,result=self.prepare({})
        result,opened=self.open(base);self.assertEqual(result&0xffffffff,0xc8804470);self.assertIsNone(opened.stream)

    def test_archive_open_failure_never_creates_a_live_handle(self):
        kernel,buffer,base,work,result=self.prepare(open_result=-2147483647)
        self.assertLess(result,0);self.assertEqual(kernel.trace()['handleLive'],0);self.assertEqual(kernel.trace()['readCalls'],0)

    def test_releasing_file_then_archive_has_real_ordered_lifetimes(self):
        kernel,buffer,base,work,result=self.prepare();result,opened=self.open(base)
        release=self.library.owner_archive_release;release.argtypes=[ctypes.c_void_p,ctypes.POINTER(Opened)];release.restype=None
        release(base,ctypes.byref(opened));self.assertIsNone(opened.stream);self.assertEqual(self.unmount(base),0)
        trace=kernel.trace();self.assertEqual(trace['live'],0);self.assertEqual(trace['handleLive'],0);self.assertEqual(trace['kernelCloses'],1)
        self.assertEqual([row['kind'] for row in trace['primitives']][-2:],[13,14])

    def test_kernel_handle_cannot_be_closed_before_its_resource(self):
        kernel,buffer,base,work,result=self.prepare()
        self.assertLess(kernel.handle_close(),0);self.assertEqual(kernel.state.handle_live,1)
        self.assertEqual(kernel.file_close(),0);self.assertEqual(kernel.handle_close(),0)
        self.assertEqual(kernel.state.kernel_closes,1)

    def test_invalid_title_is_not_replaced_with_the_expected_title(self):
        kernel=Kernel(self.dll,romfs({})['image']);result,handle=kernel.open(0x400db00010303)
        self.assertLess(result,0);self.assertEqual(handle,0);self.assertEqual(kernel.state.handle_live,0)


if __name__=='__main__':unittest.main()
