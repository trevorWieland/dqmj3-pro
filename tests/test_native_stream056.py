import hashlib
from pathlib import Path
import shutil
import sys
import tempfile
import unittest

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))

from native_stream056_build import ROOT, WORK, SOURCE, SYMBOLS, build
from native_stream056_cases import corpus, materialize, LENGTH_CODES, DEEP_LENGTH_CODES, DEEP_DISTANCE_CODES
from native_stream056_layout import TARGET, NATIVE, layout_words
from native_stream056_measure import measure
from native_stream056_oracle import Machine, Windows
from native_stream056_proof import prove
from native_stream056_controls import mismatch_regions


class Stream056Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder = WORK/'test-temporary'
        cls.folder.mkdir(parents=True,exist_ok=True)
        cls.temporary = tempfile.TemporaryDirectory(prefix='fresh-',dir=cls.folder)
        cls.root = Path(cls.temporary.name).resolve()
        if not cls.root.is_relative_to(cls.folder.resolve()):
            raise ValueError('Test fixture escaped its private root')
        source = cls.root/'source'
        source.mkdir()
        for name in ('stream056.c','stream056.h'):
            shutil.copyfile(SOURCE.parent/name,source/name)
        cls.artifacts = {target:build(cls.root/target,target,source/'stream056.c')[0]
                         for target in ('arm','windows','a64')}
        cls.machines = dict(original=Machine(),arm=Machine('arm',cls.artifacts['arm']),
                            windows=Windows(cls.artifacts['windows']),a64=Machine('a64',cls.artifacts['a64']))

    @classmethod
    def tearDownClass(cls):
        cls.machines['windows'].close()
        cls.machines.clear()
        cls.temporary.cleanup()

    def test_complete_canonical_leaf_and_private_data_claim(self):
        claim = measure()
        self.assertEqual(claim['instructionBytes'],3612)
        self.assertEqual([row['instructionBytes'] for row in claim['functions']],[1808,1804])
        for row in claim['functions']:
            self.assertEqual(row['directCallees'],[])
            self.assertEqual(len(row['callers']),1)
            self.assertEqual(len({dep['text'] for dep in row['dependencies'] if dep['kind']=='diagnostic-string'}),3)

    def test_compiled_layout_and_real_native_pointer_width(self):
        self.assertEqual(layout_words(TARGET)[:3],[56,7108,4])
        self.assertEqual(layout_words(NATIVE)[:3],[88,7128,4])
        self.assertGreater(self.machines['a64'].ram,0xffffffff)
        self.assertEqual(NATIVE['state']['sane'],7124)

    def test_representative_original_and_all_source_targets(self):
        wanted = {'literal-root-preload','invalid-length286','invalid-distance','length-extra-overlap',
                  'distance-extra','circular-window','history-sanity','output-boundary',
                  'deterministic-mixed','deep-dynamic-extra-refills'}
        selected=[]
        for case in corpus():
            if case['name'] in wanted:
                wanted.remove(case['name'])
                selected.append(case)
        selected += corpus()[-16:]
        for case in selected:
            for symbol in SYMBOLS:
                for target,machine in self.machines.items():
                    with self.subTest(case=case['id'],symbol=symbol,target=target):
                        self.assertTrue(machine.execute(symbol,case)['fullInitializedArenaMatchedIndependentModel'])

    def test_invalid_fixture_domains_rejected_before_execution(self):
        base=corpus()[0]
        for option,value in [('preload',8),('preload',True),('available_output',257),('window_size',0),
                             ('window_have',65),('window_next',64),('alignment',4)]:
            with self.subTest(option=option,value=value), self.assertRaises(ValueError):
                materialize(dict(base,**{option:value}))

    def test_fixed_and_fifteen_bit_codes_are_complete_prefix_codes(self):
        for codes in (LENGTH_CODES,DEEP_LENGTH_CODES,DEEP_DISTANCE_CODES):
            self.assertEqual(sum(1 << (15-bits) for value,bits in codes.values()),1 << 15)
            for symbol,(value,bits) in codes.items():
                for other,(other_value,other_bits) in codes.items():
                    if symbol != other and bits <= other_bits:
                        self.assertNotEqual(value,other_value & ((1 << bits)-1))

    def test_exact_unreachable_guard_proof(self):
        proof=prove()
        self.assertEqual([row['unreachableInstructionPcs'] for row in proof['functions']],[39,39])
        self.assertTrue(all(row['blsTaken'] and not row['carry'] and not row['zero']
                            for function in proof['functions'] for row in function['ranges']))

    def test_pointer_coincidences_do_not_change_report_field_identity(self):
        first=mismatch_regions([288,289,291,292,293,4096],'windows')
        second=mismatch_regions([288,289,290,291,292,293,4096],'windows')
        self.assertEqual(first,second)
        self.assertEqual(first,['byte:0x1000','pointer:stream.message'])
        self.assertNotEqual(mismatch_regions([4096],'windows'),mismatch_regions([4097],'windows'))

    def test_fresh_normally_returning_rewind_control(self):
        folder=self.root/'wrong-rewind'
        folder.mkdir()
        source=SOURCE.read_text()
        (folder/'stream056.c').write_text(source.replace('input -= bits >> 3;','input -= 0;'))
        shutil.copyfile(SOURCE.with_suffix('.h'),folder/'stream056.h')
        for target in ('arm','windows','a64'):
            artifact,_=build(folder/target,target,folder/'stream056.c')
            machine=Windows(artifact) if target=='windows' else Machine(target,artifact)
            for symbol in SYMBOLS:
                with self.subTest(target=target,symbol=symbol), self.assertRaises(ValueError) as caught:
                    machine.execute(symbol,corpus()[0])
                self.assertTrue(caught.exception.normal_return)
            if target == 'windows':
                machine.close()


if __name__ == '__main__':
    unittest.main(verbosity=2)
