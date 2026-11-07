import copy
import os
from pathlib import Path
import sys
import unittest

ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/"toolscripts"))
from tree_erase033_build import build
from tree_erase033_fixtures import cases,validate,ARM_LAYOUT,NATIVE_LAYOUT,HEAD,NODES,STRIDE
from tree_erase033_oracle import Cpu,Windows,elf_layout
from tree_erase033 import semantic


@unittest.skipUnless(os.name=="nt","Native Windows execution required")
class TreeErase033Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.paths={target:build(ROOT/"work/tree-erase033/tests"/target,target)[0] for target in ["arm","windows","android"]}
        cls.original=Cpu();cls.source=Cpu(cls.paths["arm"]);cls.android=Cpu(cls.paths["android"],True)
        cls.windows=Windows(cls.paths["windows"])

    @classmethod
    def tearDownClass(cls):cls.windows.close()

    def compare(self,case):
        original,expected=self.original.execute(case);source,actual=self.source.execute(case)
        self.assertEqual(original,source);self.assertEqual(expected,actual)
        self.assertEqual(expected,self.android.execute(case)[1]);self.assertEqual(expected,self.windows.execute(case)[1])
        semantic(case,expected);return expected

    def test_measured_and_compiled_layouts(self):
        self.assertEqual(elf_layout(self.paths["arm"]),ARM_LAYOUT)
        self.assertEqual(elf_layout(self.paths["android"]),NATIVE_LAYOUT)
        self.assertEqual(self.windows.layout,NATIVE_LAYOUT)

    def test_empty_end_iterator_preserves_free_list(self):
        case={"id":0,"nodes":{},"root":None,"target":"head","colors":{},"alias":True,"recycledCount":2,"seed":31}
        result=self.compare(case);self.assertEqual(result["recycled"],NODES)

    def test_black_leaf_preserves_observed_game_behavior(self):
        case={"id":0,"nodes":{1:["head",0,2],0:[1,None,None],2:[1,None,None]},"root":1,
            "target":0,"colors":{0:1,1:1,2:1},"alias":False,"recycledCount":0,"seed":3}
        result=self.compare(case);rows={row["offset"]:row for row in result["nodes"]}
        self.assertEqual(rows[NODES+2*STRIDE]["black"],1)
        self.assertIsNone(rows[NODES+STRIDE]["left"])

    def test_two_children_color_exchange_and_recycled_tail(self):
        nodes={3:["head",1,5],1:[3,0,2],5:[3,4,6],0:[1,None,None],2:[1,None,None],4:[5,None,None],6:[5,None,None]}
        case={"id":0,"nodes":nodes,"root":3,"target":3,"colors":{key:int(key!=4) for key in nodes},"alias":True,"recycledCount":2,"seed":18}
        result=self.compare(case);rows={row["offset"]:row for row in result["nodes"]}
        self.assertEqual(rows[NODES+3*STRIDE]["black"],0)
        self.assertEqual(rows[NODES+3*STRIDE]["right"],NODES+7*STRIDE)

    def test_full_seed_and_alias_cross_target_sample(self):
        for case in cases(64):
            with self.subTest(case=case["id"]):self.compare(case)

    def test_native_function_returns_real_high_output_pointer(self):
        self.assertGreater(self.windows.ram,0xffffffff)
        self.assertGreater(self.android.ram,0xffffffff)
        self.compare(list(cases(2))[1])

    def test_cycles_and_bad_parent_links_rejected_before_execution(self):
        case={"nodes":{0:["head",0,None]},"root":0,"target":0,"colors":{0:1},"recycledCount":0}
        with self.assertRaises(ValueError):validate(case)
        case["nodes"][0]=[0,None,None]
        with self.assertRaises(ValueError):validate(case)

    def test_unowned_target_and_unsupported_colors_rejected(self):
        case=next(cases());case["target"]=99
        with self.assertRaises(ValueError):validate(case)
        case=list(cases(2))[1]
        if case["nodes"]:
            case["colors"][next(iter(case["nodes"]))]=2
            with self.assertRaises(ValueError):validate(case)

    def test_read_outside_typed_fields_rejected(self):
        self.original.execute(next(cases()))
        with self.assertRaises(ValueError):self.original.read(None,None,self.original.ram+4000,4,0,None)

    def test_write_to_immutable_caller_bytes_rejected(self):
        self.original.execute(next(cases()))
        with self.assertRaises(ValueError):self.original.write(None,None,self.original.ram+4000,4,0,None)

    def test_private_stack_read_before_write_rejected(self):
        self.original.execute(next(cases()))
        with self.assertRaises(AssertionError):self.original.read(None,None,self.original.sp-512,4,0,None)

    def test_execution_outside_measured_function_rejected(self):
        with self.assertRaises(AssertionError):self.original.code(self.original.cpu,0x100000,4,None)


if __name__=="__main__":unittest.main()
