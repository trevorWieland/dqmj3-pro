import tempfile
import unittest
from pathlib import Path
from build061 import build
from runtime061 import Runtime,execute
from first061 import compressed,visible
from helper061 import allocate,status

WORK=Path(__file__).resolve().parent


class Asset061Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        folder=WORK/'test-artifacts';folder.mkdir(exist_ok=True)
        cls.temporary=tempfile.TemporaryDirectory(prefix='fresh-',dir=folder)
        cls.output=Path(cls.temporary.name)
        for target in ['arm','windows','a64']:build(cls.output/target,target)
        cls.runtimes={t:Runtime(t,cls.output)for t in ['original','arm','windows','a64']}

    @classmethod
    def tearDownClass(cls):
        for runtime in cls.runtimes.values():runtime.close()
        cls.temporary.cleanup()

    def compare(self,image,capacity,seed=0):
        values={t:execute(r,image,capacity,seed)for t,r in self.runtimes.items()}
        self.assertTrue(all(visible(v)==visible(values['original'])for v in values.values()))
        for target in ['arm','a64']:
            self.assertEqual(values[target]['initializationContracts'],values['original']['initializationContracts'])
            self.assertEqual(values[target]['allocatorArguments'],values['original']['allocatorArguments'])
        return values['original']

    def test_real_init_decode_end_returns_authored_payload_length(self):
        self.assertEqual(self.compare(compressed(b'source asset'*31),400)['status'],372)

    def test_exact_output_extent(self):
        self.assertEqual(self.compare(compressed(bytes(range(256))),256,0xa7)['status'],256)

    def test_short_output_keeps_real_failure_and_partial_state(self):
        self.assertLess(self.compare(compressed(b'bounded'*91),80)['status'],0)

    def test_empty_payload(self):
        self.assertEqual(self.compare(compressed(b''),0)['status'],0)

    def test_wrong_checksum_is_preserved(self):
        image=compressed(b'checksum'*51)
        self.assertEqual(self.compare(image[:-1]+bytes([image[-1]^128]),512)['status'],-1)

    def test_short_header(self):
        self.assertEqual(self.compare(b'x',64)['status'],-2)

    def test_full_unsigned_product_wrap_keeps_pointer_abi(self):
        values=[allocate(r,16,0,0x80000000,2)for r in self.runtimes.values()]
        self.assertTrue(all(v==values[0]for v in values));self.assertEqual(values[0]['cursor'],0)

    def test_exhausted_bump_storage_keeps_entire_initialized_arena(self):
        values=[allocate(r,16,16,1,1)for r in self.runtimes.values()]
        self.assertTrue(all(v==values[0]for v in values));self.assertIsNone(values[0]['returned'])

    def test_status_extremes_and_defined_failures(self):
        for value in [-0x80000000,0x7fffffff,-5,-4,-3,-2,0,1,2]:
            values=[status(r,value)for r in self.runtimes.values()]
            self.assertTrue(all(v==values[0]for v in values))

    def test_unsafe_local_harness_extents_rejected_before_execution(self):
        for runtime in self.runtimes.values():
            with self.assertRaises(ValueError):execute(runtime,b'',0x10001)
            with self.assertRaises(ValueError):execute(runtime,b'x'*0x10001,0)
            with self.assertRaises(ValueError):allocate(runtime,16,0,0xffffffff,2)

if __name__=='__main__':unittest.main()
