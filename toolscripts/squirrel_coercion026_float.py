import ctypes
import hashlib
import random
import struct
from pathlib import Path

from squirrel_lookup023_float import HostReference, game_bits, number
from squirrel_coercion026_build import ROOT,pin,save


class Reference(HostReference):
    def text(self,bits):
        destination=ctypes.create_string_buffer(64)
        argument=ctypes.c_double(number(bits))
        size=self.format(0x22,destination,len(destination),b'%g',self.locale,ctypes.byref(argument))
        if not 0<=size<64:raise ValueError('026 independent C-locale host formatter failed')
        return destination.value.decode('ascii')


def compare(path,output):
    module=ctypes.CDLL(str(path))
    function=module.sq_float_binary32_text026
    function.argtypes=[ctypes.c_char_p,ctypes.c_uint32]
    function.restype=ctypes.c_bool
    values=[game_bits(index) for index in range(96)]
    values += [sign|(exponent<<23)|0x12345 for exponent in range(255) for sign in (0,0x80000000)]
    for value in (123456.5,123457.5,999999.5,0.0001,0.00001,100000.,1000000.):
        bits=struct.unpack('<I',struct.pack('<f',value))[0]
        values.extend((bits-1,bits,bits+1,bits|0x80000000))
    rng=random.Random(0x260006)
    values += [rng.randrange(0x7f800000)|rng.choice((0,0x80000000)) for _ in range(4096)]
    reference=Reference();differences=[];digest=hashlib.sha256();edges=[]
    try:
        for index,bits in enumerate(values):
            buffer=ctypes.create_string_buffer(64)
            if not function(buffer,bits):raise ValueError('026 finite input rejected')
            actual=buffer.value.decode('ascii');python=format(number(bits),'.6g');host=reference.text(bits)
            row={'bits':bits,'source':actual,'python':python,'ucrt':host}
            if index<124:edges.append(row)
            digest.update((str(bits)+':'+actual+':'+python+':'+host+'\n').encode())
            if actual!=python or actual!=host:differences.append(row)
        for bits in (0x7f800000,0xff800000,0x7fc00001,0xffc00001):
            buffer=ctypes.create_string_buffer(64)
            if function(buffer,bits) or buffer.value:raise ValueError('026 nonfinite domain widened')
        pointer=module.fixture_pointer_budget026
        pointer.argtypes=[ctypes.c_void_p,ctypes.c_size_t];pointer.restype=ctypes.c_uint32
        address=0x123456789abcdef0;buffer=ctypes.create_string_buffer(b'\xa5'*35,35)
        count=pointer(ctypes.addressof(buffer)+1,address)
        expected=b'(generator : 0x123456789abcdef0)\0'
        if count!=33 or buffer.raw[1:34]!=expected or buffer.raw[0]!=0xa5 or buffer.raw[34]!=0xa5:
            raise ValueError('026 full-width native pointer budget or canary failed')
        runtime=Path(reference.runtime_path)
        result={'schemaVersion':1,'status':'independent-finite-binary32-default-six-digit-g',
            'cases':len(values),'orderedDigest':digest.hexdigest(),'exactDifferences':differences,'edgeObservations':edges,
            'coefficientBufferDigits':128,'maximumExactCoefficientDigits':112,'binaryPowerDomain':[-149,104],
            'rounding':'nearest ties to even; ARM FPSCR controls zero','locale':'ASCII period; independent UCRT C locale object',
            'ucrtVaListAbi':'Win64 pointer to one naturally aligned promoted binary32 double','ucrtOptions':0x22,
            'runtime':{'path':str(runtime),'bytes':runtime.stat().st_size,'sha256':hashlib.sha256(runtime.read_bytes()).hexdigest(),
                'externalSystemRuntime':True},'library':pin(path),'producer':pin(ROOT/'toolscripts/squirrel_coercion026_float.py'),
            'pointerBudget':{'nativeBytesIncludingNull':33,'pointerBits':64,'bothCanariesPreserved':True,
                'fullAddressPreserved':True,'targetBytesIncludingNullForGenerator':25,'originalTargetScratchRequest':24,
                'targetExisting24ByteCapacityRequiresAnAdditionalPhysicallyBackedByte':True},
            'arbitraryDoubleGeneralPrintfSdkSourceCreditOrDeviceClaimed':False,
            'primaryReference':'https://learn.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions'}
        save(output,result)
        if differences:raise ValueError('026 exact float residuals retained')
        return result
    finally:reference.close()
