import hashlib
import sys
import tempfile
import unittest
from pathlib import Path

from build059 import ROOT,WORK,build
from run059 import Backend,execute,encoded
from session059 import Program
from supplement059 import gzip_optional
from table_leaf059 import execute as table_execute
from leaf059 import execute as adler_execute,expected as adler_expected
from native_stream058_cases import corpus


class NativeStream059Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        base=ROOT/'work/native-stream059/test-temporary';base.mkdir(parents=True,exist_ok=True)
        cls.temporary=tempfile.TemporaryDirectory(dir=base)
        cls.output=Path(cls.temporary.name)
        for target in ['arm','windows','a64']:build(cls.output/target,target)
        cls.backends={t:Backend(t,cls.output)for t in ['original','arm','windows','a64']}

    @classmethod
    def tearDownClass(cls):
        cls.backends['windows'].machine.close()
        cls.temporary.cleanup()

    def equal(self,values):
        self.assertTrue(all(v==values['original']for v in values.values()))

    def test_real_dynamic_gzip_complete_state_and_output(self):
        payload=b'genuine dynamic code-table and checksum '*151
        values={t:execute(b,encoded(payload,31),31,len(payload)+512)for t,b in self.backends.items()}
        self.equal(values)
        self.assertEqual(values['original']['status'],1)
        self.assertEqual(values['original']['outputSha256'],hashlib.sha256(payload).hexdigest())

    def test_stored_and_fixed_native_modes(self):
        payload=bytes(range(256))*3
        for level in [0,6]:
            values={t:execute(b,encoded(payload,-15,level),-15,len(payload)+512)for t,b in self.backends.items()}
            self.equal(values)
            self.assertEqual(values['original']['produced'],len(payload))

    def test_existing_initializer_models_still_pass(self):
        selected=[{},dict(window_bits=7),dict(operation='reset'),dict(operation='end',window=True),dict(operation='allocate',count=0xffffffff,bytes=2)]
        for case in selected:self.equal({t:b.execute(case)for t,b in self.backends.items()})

    def test_actual_allocator_argument_shape_and_high_pointers(self):
        image=encoded(b'allocator ABI '*60,-15)
        programs={t:Program(b,image,-15,custom_allocator=True)for t,b in self.backends.items()}
        values={t:p.advance(len(image),2048,0)for t,p in programs.items()}
        self.equal(values)
        self.assertEqual(values['original']['allocatorCountAndBytes'],[[1,'sizeof-actual-state'],[32768,1]])
        self.assertGreater(programs['windows'].ram,0xffffffff)
        self.assertGreater(programs['a64'].ram,0xffffffff)
        self.equal({t:p.close()for t,p in programs.items()})

    def test_every_byte_streaming_real_window_history(self):
        payload=b'abcd0123'*19;image=encoded(payload,15)
        programs={t:Program(b,image,15)for t,b in self.backends.items()}
        for step in range(512):
            end=min(step+1,len(image))
            values={t:p.advance(end,1,4 if end==len(image)else 0)for t,p in programs.items()}
            self.equal(values)
            if values['original']['status']==1:break
        else:self.fail('real streaming input did not finish')
        self.assertEqual(values['original']['produced'],len(payload))
        self.equal({t:p.close()for t,p in programs.items()})

    def test_borrowed_named_header_storage_and_clipping(self):
        image=gzip_optional(b'header data '*30,31)
        for maximum in [0,4,64]:
            programs={t:Program(b,image,31)for t,b in self.backends.items()}
            for p in programs.values():p.attach_header(maximum)
            values={t:p.advance(len(image),1024,4)for t,p in programs.items()}
            self.equal(values)
            self.assertEqual(values['original']['state']['borrowedHeaderSink']['done'],1)
            self.equal({t:p.close()for t,p in programs.items()})

    def test_unsafe_fragmented_extra_sink_rejected_before_body(self):
        image=gzip_optional(b'bounded',4)
        for backend in self.backends.values():
            p=Program(backend,image,31);p.attach_header(4)
            with self.assertRaisesRegex(ValueError,'before execution'):p.advance(13,256,0)
            p.close()

    def test_huffman_real_abi_complete_table_and_oversubscription(self):
        for case in [dict(kind=0,lengths=[],bits=7),dict(kind=1,lengths=[1,1,1],bits=9),dict(kind=2,lengths=[1,2,3,4,5,6,7,8,9,10,10],bits=15)]:
            self.equal({t:table_execute(b,case)for t,b in self.backends.items()})

    def test_adler_full_seed_bits_and_null_domain(self):
        for data,is_null in [(b'',False),(b'\xff',False),(bytes(range(32)),False),(bytes(2),True)]:
            values={t:adler_execute(b,0xffffffff,data,is_null,3)for t,b in self.backends.items()}
            self.equal(values)
            self.assertEqual(values['original'],adler_expected(0xffffffff,data,is_null))
        with self.assertRaisesRegex(ValueError,'outside returning domain'):adler_execute(self.backends['windows'],0,b'x',True,0)

    def test_original_rejects_authored_controller_before_execution(self):
        original=self.backends['original'].machine
        before=bytes(original.cpu.mem_read(0x2000000,0x100000))
        with self.assertRaisesRegex(ValueError,'authored non-service endpoint'):
            original.call(original.symbols['stream_inflate059'],[0,4,0,0])
        self.assertEqual(before,bytes(original.cpu.mem_read(0x2000000,0x100000)))

if __name__=='__main__':unittest.main(verbosity=2)
