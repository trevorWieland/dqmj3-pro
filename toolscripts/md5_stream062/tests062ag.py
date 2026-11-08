import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys
import unittest
W=Path(__file__).resolve().parent
sys.path.insert(0,str(W))
from build062ag import build
from runtime062ag import Arm,Windows,Android,CTX
from qualify062ag import structural,program
import model062ag as model
RUNTIMES={}
COMPILED=None


class DigestTests(unittest.TestCase):
    def test_qualification_metadata_is_not_linked_into_production(self):
        from digest024_build import load
        for target in ["arm","android"]:
            symbols=load(COMPILED/target/"digest.elf")[1]
            self.assertNotIn("fixture_md5_layout062ag",symbols)
            info=json.loads((COMPILED/target/"layout.json").read_text())
            self.assertFalse(info["linkedIntoProduction"])
        import ctypes
        with self.assertRaises(ValueError):
            (ctypes.c_uint32*8).in_dll(RUNTIMES["windows"].library,"fixture_md5_layout062ag")

    def test_compiled_layouts(self):
        self.assertEqual(RUNTIMES["arm"].layout,[104,4,4,20,24,88,32,4])
        for target in ["windows","android"]:
            self.assertEqual(RUNTIMES[target].layout,[112,8,8,24,28,92,64,8])
            self.assertGreater(RUNTIMES[target].vtable,0xffffffff)

    def test_initializer_preserves_initialized_nonoutputs(self):
        for runtime in RUNTIMES.values():
            memory=structural(runtime,97,0xffffffff)
            actual=runtime.execute("init",memory)
            self.assertEqual(actual,model.operation(memory,runtime.layout,"init"))
            low=CTX+runtime.layout[4];high=CTX+runtime.layout[5]+16
            self.assertEqual(actual[low:high],memory[low:high])

    def test_unsigned_count_wrap(self):
        for runtime in RUNTIMES.values():
            memory=structural(runtime,31,0xffffffff)
            actual=runtime.execute("update",memory,1)
            self.assertEqual(actual,model.operation(memory,runtime.layout,"update",1))
            self.assertEqual(struct.unpack_from("<I",actual,CTX+runtime.layout[3])[0],0)

    def test_sdk_low_length_high_word_zero(self):
        for runtime in RUNTIMES.values():
            memory=structural(runtime,71,0x20000001)
            actual=runtime.execute("finish",memory)
            self.assertEqual(actual,model.operation(memory,runtime.layout,"finish"))
            block=CTX+runtime.layout[4]
            self.assertEqual(struct.unpack_from("<II",actual,block+56),(8,0))
            self.assertEqual(struct.unpack_from("<I",actual,CTX+runtime.layout[3])[0],0x20000002)

    def test_padding_boundary_and_chunking(self):
        for runtime in RUNTIMES.values():
            for size in [55,56,63,64,65]:
                data=bytes((i*19+size)&255 for i in range(size))
                result=program(runtime,data,[1,7,3],size)
                self.assertEqual(result["digest"],hashlib.md5(data).hexdigest())

    def test_separate_output_and_caller_guards(self):
        for runtime in RUNTIMES.values():
            memory=structural(runtime,41,37)
            actual=runtime.execute("finish",memory,output=3072)
            self.assertEqual(actual,model.operation(memory,runtime.layout,"finish",output=3072))
            self.assertEqual(actual[3072+16:],memory[3072+16:])

    def test_harness_rejects_unbacked_counts(self):
        for runtime in RUNTIMES.values():
            memory=structural(runtime,41,0)
            for count in [-1,2049]:
                with self.assertRaises(ValueError):runtime.execute("update",memory,count)

    def test_zero_tail_alignment_invariants(self):
        for context in range(0x2000000,0x2000100,4):
            for endpoint,starts in [(64,range(57,64)),(56,range(57))]:
                for used in starts:
                    remaining=endpoint-used
                    lead=(-(context+24+used))&3 if remaining else 0
                    self.assertLessEqual(lead,remaining)
                    self.assertEqual((remaining-lead)%4,0)


def main():
    global COMPILED
    parser=argparse.ArgumentParser();parser.add_argument("--output",type=Path,required=True)
    parser.add_argument("--compiled",type=Path);args=parser.parse_args()
    out=args.output.resolve();out.mkdir(parents=True,exist_ok=False)
    folder=args.compiled
    if folder is None:
        folder=out/"compiled"
        for target in ["arm","windows","android"]:build(target,folder/target)
    COMPILED=folder
    RUNTIMES.update(arm=Arm(folder/"arm/digest.elf"),windows=Windows(folder/"windows/digest.dll"),android=Android(folder/"android/digest.elf"))
    result=unittest.TextTestRunner(verbosity=2).run(unittest.defaultTestLoader.loadTestsFromTestCase(DigestTests))
    (out/"report.json").write_text(json.dumps(dict(status="passed"if result.wasSuccessful()else"failed",testsRun=result.testsRun,failures=len(result.failures),errors=len(result.errors),compiledFixturePath=str(folder),fixtureSelection="fresh current-scope compile or explicitly supplied current-scope artifacts"),indent=2)+"\n")
    if not result.wasSuccessful():raise SystemExit(1)

if __name__=="__main__":main()
