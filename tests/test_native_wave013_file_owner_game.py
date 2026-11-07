import ctypes
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
from native_wave013_common import command


class MeasuredNumericUnits(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        folder=ROOT/'work/wave013-native/file-owner-game-unit';folder.mkdir(parents=True,exist_ok=True)
        obj=folder/'count.obj';dll=folder/'count.dll';receipts=[]
        command([ROOT/'tools/clang-21/clang.exe','--target=x86_64-pc-windows-msvc','-O2','-std=c11',
            '-ffreestanding','-fno-builtin','-Wall','-Wextra','-Werror','-c',
            ROOT/'src/native/wave013/pattern_file_owner_game_count.c','-o',obj],folder/'compile.log',receipts)
        command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/machine:x64',
            '/nodefaultlib','/out:'+str(dll),'/export:fn_004c3b1c',obj],folder/'link.log',receipts)
        cls.library=ctypes.CDLL(str(dll));cls.function=cls.library.fn_004c3b1c
        cls.function.argtypes=[ctypes.POINTER(ctypes.c_ushort)];cls.function.restype=ctypes.c_int

    def count(self,units):
        buffer=(ctypes.c_ushort*(len(units)+3))(0x5a5a,*units,0,0x5a5a)
        before=bytes(buffer);result=self.function(ctypes.cast(ctypes.byref(buffer,2),ctypes.POINTER(ctypes.c_ushort)))
        self.assertEqual(bytes(buffer),before);return result

    def test_null_has_measured_negative_sentinel(self):self.assertEqual(self.function(None),-1)
    def test_empty_is_zero(self):self.assertEqual(self.count([]),0)
    def test_ascii_digits_count_individually(self):self.assertEqual(self.count(list(range(48,58))),10)
    def test_letters_do_not_impose_a_length_limit(self):self.assertEqual(self.count([97]*120),0)
    def test_measured_superscript_i_is_counted(self):self.assertEqual(self.count([0x2071]*6),6)
    def test_full_width_digits_are_counted(self):self.assertEqual(self.count([0xff10,0xff19]),2)
    def test_both_circled_zero_units_are_counted(self):self.assertEqual(self.count([0x24ea,0x24ff]),2)
    def test_roman_forms_are_counted(self):self.assertEqual(self.count([0x2160,0x216b,0x2170,0x217b]),4)
    def test_other_circled_number_blocks_are_not_substituted(self):self.assertEqual(self.count([0x3251,0x32b1]),0)
    def test_surrogate_units_are_not_implicitly_combined(self):self.assertEqual(self.count([0xd800,0xdc00]),0)
    def test_first_terminator_stops_the_count(self):self.assertEqual(self.count([49,0,50,51,52,53,54]),1)
    def test_mixed_letters_preserve_only_the_numeric_count(self):self.assertEqual(self.count([97,49,98,50,99,51]),3)
    def test_long_finite_input_is_not_truncated_to_one_byte(self):self.assertEqual(self.count([49]*1024),1024)


if __name__=='__main__':unittest.main()
