import ctypes
import hashlib
import json
import random
import struct
from pathlib import Path

from native_material_wave011_build import ROOT, pin, save


EDGES = [0,1,2,0x007fffff,0x00800000,0x00800001,0x7f7fffff,
    0x43800008,0x43800018,0x38d1b716,0x38d1b717,0x38d1b718,0x3f800000,
    0x56b5e620,0x56b5e621,0x56b5e622,0x55c5e353,0x55c5e354,0x55c5e355,
    0x3dcccccd,0x3f000000,0x3fa00000,0x00812345,0x7f012345,0x01000001,
    0x3a83126f,0x3a831270,0x4b7fffff,0x4b800000,0x4b800001,0x53800008,0x53800018]


def game_bits(index):
    if index < 64: return EDGES[index // 2] | ((index & 1) << 31)
    return (((index * 1664525 + 1013904223) & 0xffffffff) % 0x7f800000) | ((index & 1) << 31)


def number(bits):
    return struct.unpack('<f', struct.pack('<I', bits))[0]


class HostReference:
    def __init__(self):
        self.runtime = ctypes.CDLL('ucrtbase')
        self.format = getattr(self.runtime, '__stdio_common_vsprintf')
        self.format.argtypes = [ctypes.c_uint64, ctypes.c_char_p, ctypes.c_size_t,
            ctypes.c_char_p, ctypes.c_void_p, ctypes.c_void_p]
        self.format.restype = ctypes.c_int
        self.runtime._create_locale.argtypes = [ctypes.c_int, ctypes.c_char_p]
        self.runtime._create_locale.restype = ctypes.c_void_p
        self.runtime._free_locale.argtypes = [ctypes.c_void_p]
        self.locale = self.runtime._create_locale(0, b'C')
        if not self.locale: raise ValueError('023 independent host C locale creation failed')
        kernel = ctypes.WinDLL('kernel32')
        kernel.GetModuleFileNameW.argtypes = [ctypes.c_void_p, ctypes.c_wchar_p, ctypes.c_uint32]
        name = ctypes.create_unicode_buffer(32768)
        if not kernel.GetModuleFileNameW(self.runtime._handle, name, len(name)):
            raise ValueError('023 independent host formatter identity unavailable')
        self.runtime_path = name.value

    def text(self, bits):
        destination = ctypes.create_string_buffer(64)
        argument = ctypes.c_double(number(bits))
        size = self.format(0x22, destination, len(destination), b'%.14g', self.locale, ctypes.byref(argument))
        if size < 0 or size >= 64: raise ValueError('023 independent host formatting failed')
        return destination.value.decode('ascii')

    def close(self):
        self.runtime._free_locale(self.locale)


def compare_host(path):
    library = ctypes.CDLL(str(path))
    function = library.sq_float_binary32_text023
    function.argtypes = [ctypes.c_char_p, ctypes.c_uint32]
    function.restype = ctypes.c_bool
    bits = [game_bits(i) for i in range(96)]
    bits += [sign | (exponent << 23) | 0x12345 for exponent in range(255) for sign in [0, 0x80000000]]
    randomizer = random.Random(0x230014)
    bits += [randomizer.randrange(0x7f800000) | randomizer.choice([0, 0x80000000]) for _ in range(4096)]
    reference, digest, differences, fixed = HostReference(), hashlib.sha256(), [], []
    maximum_digits = max(len(str(((1 << 23) - 1 if field == 0 else (1 << 24) - 1) *
        (5 ** (149 if field == 0 else 150 - field) if field < 150 else 2 ** (field - 150))))
        for field in range(255))
    if maximum_digits != 112: raise ValueError('023 exact coefficient bound changed')
    try:
        for index, value in enumerate(bits):
            destination = ctypes.create_string_buffer(64)
            if not function(destination, value): raise ValueError('023 finite input rejected')
            actual = destination.value.decode('ascii')
            python = format(number(value), '.14g')
            host = reference.text(value)
            row = {'bits': value, 'derived': actual, 'python': python, 'ucrt': host}
            digest.update((str(value) + ':' + actual + ':' + python + ':' + host + '\n').encode())
            if index < 96: fixed.append(row)
            if actual != python or actual != host: differences.append(row)
        rejected = []
        for value in [0x7f800000,0xff800000,0x7fc00001,0xffc00001]:
            destination = ctypes.create_string_buffer(64)
            if function(destination, value) or destination.value: raise ValueError('023 nonfinite domain widened')
            rejected.append(value)
        report = {'schemaVersion': 1, 'status': 'independent-finite-binary32-14g-host-comparison',
            'derivedLibrary': pin(path), 'derivedSource': pin(ROOT / 'source/squirrel-wave023/float_text.c'),
            'cases': len(bits), 'orderedDigest': digest.hexdigest(), 'exactTextDifferences': differences,
            'gameCorpus': fixed, 'rejectedNonfiniteBits': rejected,
            'algorithm': 'exact decimal integer coefficients, 14 significant digits, ties to even, g style selection',
            'coefficientBufferDigits': 128, 'provedMaximumExactCoefficientDigits': maximum_digits,
            'binaryPowerDomain': [-149,104], 'emittedFiniteTextMaximumBytesExcludingNull': 20,
            'roundingModeAssumption': 'nearest with ties to even; original ARM FPSCR reset to zero',
            'locale': 'explicit independent UCRT C locale object; source emits ASCII period; no process/system locale change',
            'ucrtOptions': 0x22, 'ucrtVaListAbi': 'Win64 pointer to one naturally aligned double argument',
            'hostRuntime': {'path': reference.runtime_path, 'bytes': Path(reference.runtime_path).stat().st_size,
                'sha256': hashlib.sha256(Path(reference.runtime_path).read_bytes()).hexdigest(), 'externalSystemRuntime': True},
            'sdkSourceFunctionCreditGranted': 0, 'generalPrintfOrArbitraryDoubleQualified': False,
            'textNormalized': False, 'producer': pin(ROOT / 'toolscripts/squirrel_lookup023_float.py'),
            'sources': ['https://learn.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions',
                'https://github.com/mingw-w64/mingw-w64/blob/master/mingw-w64-headers/crt/corecrt_stdio_config.h']}
        save(ROOT / 'evidence/lanes/squirrel-lookup023/float-host-reference.json', report)
        if differences: raise ValueError('023 finite float text differs; exact residuals preserved')
        return report
    finally:
        reference.close()
