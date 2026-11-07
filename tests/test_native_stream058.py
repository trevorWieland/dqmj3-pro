from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))

from native_stream058_build import WORK,SOURCE,build
from native_stream058_execution import Backend
from native_stream058_caller import execute as caller
from native_stream058_layout import ARM_WORDS,NATIVE_WORDS,layout
from native_stream058_proof import prove


class Initializer058Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.base=WORK/'test-temporary';cls.base.mkdir(parents=True,exist_ok=True)
        cls.temp=tempfile.TemporaryDirectory(prefix='fresh-',dir=cls.base)
        cls.folder=Path(cls.temp.name).resolve()
        if not cls.folder.is_relative_to(cls.base.resolve()):raise ValueError('Test escaped private workspace')
        for target in('arm','windows','a64'):build(cls.folder/'build'/target,target)
        cls.backends={target:Backend(target,cls.folder/'build')for target in('original','arm','windows','a64')}

    @classmethod
    def tearDownClass(cls):
        cls.backends['windows'].machine.close();cls.backends.clear();cls.temp.cleanup()

    def test_real_full_state_differs_from_kernel_view(self):
        self.assertEqual(layout(ARM_WORDS)['state_size'],7116)
        self.assertEqual(layout(NATIVE_WORDS)['state_size'],7144)
        self.assertEqual(layout(ARM_WORDS)['state']['codes'],1328)
        self.assertEqual(layout(NATIVE_WORDS)['state']['codes'],1352)
        self.assertEqual(layout(NATIVE_WORDS)['state']['window_size'],44)

    def test_init_reset_and_end_full_initialized_arenas(self):
        cases=[{},dict(default_allocate=True,default_dispose=True),dict(window_bits=-15),dict(operation='reset'),
               dict(operation='reset',wrap=0,window=True),dict(operation='end',window=True)]
        for case in cases:
            for target,backend in self.backends.items():
                with self.subTest(target=target,case=case):self.assertTrue(backend.execute(case)['fullArenaExpected'])

    def test_version_precedence_and_allocation_failure(self):
        cases=[dict(version='bad',null_stream=True),dict(version='null'),dict(wrong_size=True),
               dict(fail_at=1,preexisting_state=True),dict(window_bits=-2147483648)]
        for case in cases:
            for target,backend in self.backends.items():
                with self.subTest(target=target,case=case):self.assertTrue(backend.execute(case)['normalReturn'])

    def test_target_and_native_allocator_results_are_not_truncated(self):
        case=dict(operation='allocate',count=0x80000001,bytes=2)
        for target,backend in self.backends.items():
            with self.subTest(target=target):self.assertEqual(backend.execute(case)['status'],dict(nonnull=True,offset=0x10010))

    def test_finalizer_reloads_state_disposer_and_context(self):
        for default in(False,True):
            for reentry in range(8):
                case=dict(operation='end',window=True,reentry=reentry,default_dispose=default)
                for target,backend in self.backends.items():
                    with self.subTest(target=target,case=case):self.assertTrue(backend.execute(case)['fullArenaExpected'])

    def test_real_gzip_calls_the_initialized_typed_kernel(self):
        rows={target:caller(backend,b'abcd0123456789'*400)for target,backend in self.backends.items()}
        for target,row in rows.items():
            self.assertEqual(row['status'],1)
            self.assertEqual(row['total_output'],5600)
            self.assertEqual(row['allocations'],1)
            self.assertEqual(row['releases'],1)
        self.assertEqual(rows['arm']['kernelEntries'],rows['original']['kernelEntries'])
        self.assertEqual(rows['a64']['kernelEntries'],rows['original']['kernelEntries'])
        self.assertEqual(rows['original']['kernelEntries'][0]['mode'],20)

    def test_old_window_release_is_statically_dead_in_fresh_init(self):
        self.assertEqual(prove()['instructionPcs'],4)

    def test_fresh_returning_wrong_back_value_rejected(self):
        folder=self.folder/'wrong-back';folder.mkdir()
        source=(SOURCE/'initialize058.c').read_text(encoding='utf-8')
        mutant=folder/'initialize058.c';mutant.write_text(source.replace('state->back = -1;','state->back = 0;'))
        for target in('arm','windows','a64'):build(folder/'build'/target,target,{'initialize058.c':mutant})
        for target in('arm','windows','a64'):
            backend=Backend(target,folder/'build')
            with self.subTest(target=target),self.assertRaises(ValueError)as error:backend.execute({})
            self.assertTrue(error.exception.normal_return)
            if target=='windows':backend.machine.close()


if __name__=='__main__':unittest.main(verbosity=2)
