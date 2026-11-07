import ctypes
import struct

from native_sampled_key053_measure import ROOT
from native_sampled_key053_reference import KEYS


class Input(ctypes.Structure):
    _fields_ = [('range_start', ctypes.c_float), ('range_end', ctypes.c_float),
                ('repeat_before', ctypes.c_ubyte), ('repeat_after', ctypes.c_ubyte),
                ('unknown_0a', ctypes.c_ubyte * 2), ('interpolation', ctypes.c_ubyte),
                ('unknown_0d', ctypes.c_ubyte), ('key_count', ctypes.c_ushort),
                ('value_scale', ctypes.c_float), ('value_offset', ctypes.c_float),
                ('time_scale', ctypes.c_float), ('inverse_duration', ctypes.c_float),
                ('keys', ctypes.c_void_p)]


class Segment(ctypes.Structure):
    _fields_ = [('cached_key', ctypes.c_void_p), ('period', ctypes.c_int),
                ('start', ctypes.c_float), ('end', ctypes.c_float), ('value', ctypes.c_float),
                ('tangent', ctypes.c_float), ('quadratic', ctypes.c_float), ('cubic', ctypes.c_float)]


def buffer(size):
    result = ctypes.create_string_buffer(size + 64)
    ctypes.memset(ctypes.addressof(result), 0xA9, len(result))
    return result, ctypes.addressof(result) + 32


class Native:
    def __init__(self, path):
        self.path = path
        self.dll = ctypes.CDLL(str(path))
        expected = [ctypes.sizeof(ctypes.c_void_p), ctypes.sizeof(Input), ctypes.sizeof(Segment),
                    Input.keys.offset, Segment.cached_key.offset, Segment.period.offset,
                    *[getattr(Segment, field).offset for field in
                      ['start', 'end', 'value', 'tangent', 'quadratic', 'cubic']]]
        actual = list((ctypes.c_uint * len(expected)).in_dll(self.dll, 'sampled_key_layout053'))
        if expected != actual or expected[:3] != [8, 40, 40]:
            raise ValueError('Actual Windows typed layout differs')
        self.layout = actual
        self.floor = self.dll.sampled_key_floor_bits053
        self.floor.argtypes = [ctypes.c_uint]
        self.floor.restype = ctypes.c_uint
        self.ucrt = ctypes.CDLL('ucrtbase.dll')
        self.ucrt._controlfp_s.argtypes = [ctypes.POINTER(ctypes.c_uint), ctypes.c_uint, ctypes.c_uint]

    def run(self, case):
        environment = ctypes.c_uint()
        if self.ucrt._controlfp_s(ctypes.byref(environment), 0, 0) != 0 or environment.value & 0x300:
            raise ValueError('Windows floating point rounding is not nearest')
        input_buffer, input_address = buffer(ctypes.sizeof(Input))
        key_buffer, key_address = buffer(len(case['keys']))
        state_buffer, state_address = buffer(ctypes.sizeof(Segment))
        if min(input_address, key_address, state_address) <= 0xFFFFFFFF:
            raise ValueError('Windows test did not exercise widened pointers')
        ctypes.memmove(input_address, case['header'][:32], 32)
        Input.from_address(input_address).keys = key_address
        ctypes.memmove(key_address, case['keys'], len(case['keys']))
        prior_pointer, prior_period = struct.unpack_from('<Ii', case['state'])
        segment = Segment.from_address(state_address)
        segment.cached_key = None if prior_pointer == 0 else key_address + prior_pointer - KEYS
        segment.period = prior_period
        ctypes.memmove(state_address + Segment.start.offset, case['state'][8:], 24)
        before_input = bytes(input_buffer)
        before_keys = bytes(key_buffer)
        before_state = bytes(state_buffer)
        function = getattr(self.dll, 'fn_' + format(case['entry'], '08x'))
        function.argtypes = [ctypes.POINTER(Input), ctypes.POINTER(Segment), ctypes.c_float]
        function.restype = None
        function(ctypes.cast(input_address, ctypes.POINTER(Input)),
                 ctypes.cast(state_address, ctypes.POINTER(Segment)), case['position'])
        after_state = bytes(state_buffer)
        if bytes(input_buffer) != before_input or bytes(key_buffer) != before_keys:
            raise ValueError('Windows source changed immutable inputs or caller guards')
        allowed = set(range(32, 32 + Segment.cubic.offset + 4))
        if any(left != right and at not in allowed for at, (left, right) in enumerate(zip(before_state, after_state))):
            raise ValueError('Windows source changed output padding or caller guards')
        pointer = segment.cached_key
        result = {'cachedKeyOffset': None if pointer is None else pointer - key_address,
                  'period': segment.period,
                  'coefficientBits': list(struct.unpack('<IIIIII',
                      ctypes.string_at(state_address + Segment.start.offset, 24)))}
        return {'result': result, 'returnedNormally': True, 'callerGuardsPreserved': True,
                'nativePointersAbove32Bits': True,
                'inputAndKeyBytesPreserved': True, 'paddingPreserved': True}
