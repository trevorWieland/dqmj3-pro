import hashlib
import sys
import unittest
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

from crc054_build import SOURCE, SYMBOLS, build
from crc054_cases import cases, metadata
from crc054_controls import mutated
from crc054_measure import measure, polynomial_tables
from crc054_oracle import Machine, Windows


class Crc054Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder = ROOT / 'work/crc054/unit-tests'
        artifacts = {target: build(cls.folder / target, target) for target in ('arm', 'windows', 'a64')}
        cls.targets = [Machine(), Machine('arm', artifacts['arm'][0]),
                       Windows(artifacts['windows'][0]), Machine('a64', artifacts['a64'][0])]

    def test_published_vector_with_all_input_alignments(self):
        for target in self.targets:
            for symbol in SYMBOLS:
                for alignment in range(4):
                    self.assertEqual(target.execute(symbol, 0, b'123456789', alignment)['result'], 0xcbf43926)

    def test_null_buffer_ignores_full_unsigned_length_and_seed(self):
        for target in self.targets:
            for symbol in SYMBOLS:
                result = target.execute(symbol, 0xdeadbeef, b'', null=True, null_length=0xffffffff)
                self.assertEqual(result['result'], 0)
                self.assertTrue(result['returned'])

    def test_empty_nonnull_preserves_all_seed_bits(self):
        for target in self.targets:
            for symbol in SYMBOLS:
                self.assertEqual(target.execute(symbol, 0x80000001, b'')['result'], 0x80000001)

    def test_streaming_can_cross_duplicate_entry_apis(self):
        payload, seed = bytes(range(256)), 0x87654321
        for target in self.targets:
            prefix = target.execute(SYMBOLS[0], seed, payload[:33], 3)['result']
            final = target.execute(SYMBOLS[1], prefix, payload[33:], 1)['result']
            self.assertEqual(final, zlib.crc32(payload, seed))

    def test_unsigned_high_bytes_and_word_block_boundary(self):
        payload = (b'\x80\xff\x01\x00' * 9) + b'\xfe'
        for target in self.targets:
            for symbol in SYMBOLS:
                self.assertEqual(target.execute(symbol, 0xffffffff, payload, 3)['result'], zlib.crc32(payload, 0xffffffff))

    def test_complete_discontiguous_extents_and_derived_tables(self):
        result = measure()
        self.assertEqual(result['totalInstructionBytes'], 5392)
        self.assertEqual([row['instructionBytes'] for row in result['functions']], [2696,2696])
        self.assertTrue(all(len(row['instructionRanges']) == 2 for row in result['functions']))
        self.assertTrue(all(row['allEntriesMatchGeneratedTables'] for row in result['tableDependencies']))
        self.assertTrue(all(row['expectedReachableInstructionPcs'] == 277 for row in result['functions']))
        self.assertTrue(all(row['residualLengthProof']['residualScalarFallbackPcs'] == 30
                            for row in result['functions']))
        self.assertEqual(hashlib.sha256(polynomial_tables()).hexdigest(),
                         '24363a766de82f6877f1c0e25912659526684c30b689fea3d960cc703067a718')

    def test_corpus_is_small_deterministic_and_complete(self):
        first, second = cases(), cases()
        self.assertEqual(len(first), 512)
        self.assertEqual([metadata(row) for row in first], [metadata(row) for row in second])
        self.assertEqual({row['payload'][0] for row in first[:256]}, set(range(256)))

    def test_bad_fixture_parameter_rejected_before_execution(self):
        target = self.targets[1]
        for seed, alignment, payload in ((-1,0,b''), (1 << 32,0,b''), (0,True,b''), (0,0,b'x'*32769)):
            with self.assertRaises(ValueError):
                target.execute(SYMBOLS[0], seed, payload, alignment)

    def test_genuine_returning_wrong_polynomial_rejected(self):
        directory = self.folder / 'wrong-polynomial'
        directory.mkdir(parents=True, exist_ok=True)
        source = directory / 'crc.c'
        source.write_text(mutated(SOURCE.read_text(), 'wrong-polynomial'))
        (directory / 'crc.h').write_bytes(SOURCE.with_name('crc.h').read_bytes())
        artifact, unused = build(directory / 'arm', 'arm', source)
        wrong = Machine('arm', artifact)
        result = wrong.execute(SYMBOLS[0], 0, b'123456789')
        self.assertTrue(result['returned'])
        self.assertTrue(result['callerArenaUnchanged'])
        self.assertNotEqual(result['result'], 0xcbf43926)

    def test_authored_source_is_small_and_contains_no_original_table(self):
        text = SOURCE.read_text()
        self.assertLessEqual(len(text.splitlines()), 500)
        self.assertNotIn('/*', text)
        self.assertNotIn('//', text)
        self.assertNotIn('crc_table', text)
        self.assertNotIn('Original', text)


if __name__ == '__main__':
    unittest.main()
