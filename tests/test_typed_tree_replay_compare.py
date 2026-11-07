from pathlib import Path
import sys
import unittest
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/"toolscripts"))
from tree_erase033_fixtures import cases,make,NATIVE_LAYOUT,HEAD,TREE
from typed_tree_replay_compare import compare_native_arenas,relative_pointer_copy


class NativeTreeReplayTests(unittest.TestCase):
    def fixture(self,base):
        case=list(cases(2))[1];memory,readable,mutable,output,keys=make(case,NATIVE_LAYOUT,base)
        memory[output:output+8]=(base+HEAD).to_bytes(8,"little")
        return case,memory

    def test_actual_pointer_fields_relocate_without_changing_other_bytes(self):
        case,a=self.fixture(0x250000000);unused,b=self.fixture(0x750000000)
        self.assertNotEqual(a,b);compare_native_arenas(a,b,case,0x250000000,0x750000000)

    def test_changed_nonpointer_caller_byte_is_rejected(self):
        case,a=self.fixture(0x250000000);unused,b=self.fixture(0x750000000);b[4000]^=1
        with self.assertRaises(ValueError):compare_native_arenas(a,b,case,0x250000000,0x750000000)

    def test_unowned_pointer_is_rejected(self):
        case,a=self.fixture(0x250000000)
        a[TREE+NATIVE_LAYOUT["recycled"]:TREE+NATIVE_LAYOUT["recycled"]+8]=(0x250000000+4000).to_bytes(8,"little")
        with self.assertRaises(ValueError):relative_pointer_copy(a,case,0x250000000)

    def test_changed_immutable_sentinel_is_rejected(self):
        case,a=self.fixture(0x250000000)
        with self.assertRaises(ValueError):relative_pointer_copy(a,case,0x250010000)

    def test_color_or_padding_changes_are_not_normalized(self):
        case,a=self.fixture(0x250000000);unused,b=self.fixture(0x750000000);b[HEAD]^=1
        with self.assertRaises(ValueError):compare_native_arenas(a,b,case,0x250000000,0x750000000)


if __name__=="__main__":unittest.main()
