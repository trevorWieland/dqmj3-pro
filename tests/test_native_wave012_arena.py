import ctypes
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_wave012_arena as wave


class NativeArenaTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work = wave.WORK / 'arena-tests'
        cls.receipts = []
        cls.graph = wave.build_tools.arm(wave.build_tools.SOURCE, cls.work / 'source', cls.receipts)
        cls.library = ctypes.CDLL(str(wave.build_tools.windows(wave.build_tools.SOURCE, cls.work / 'windows', cls.receipts)))
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if wave.sha(cls.image) != wave.MODULE_SHA:
            raise RuntimeError('Original module changed')

    def compare(self, specification):
        address = 0x4c39c8 if specification['operation'] == 'allocate' else 0x4c3994
        raw = self.image[address - 0x100000:address - 0x100000 + wave.SIZES[address]]
        candidate = self.graph['functions'][address]
        original = wave.oracle.execute([(address, raw)], address, specification, 12, True, 15)
        source = wave.oracle.execute([(candidate['address'], candidate['raw'])], candidate['address'], specification, 12, True, 15)
        native = wave.native.execute(self.library, wave.native.create(specification), specification)
        for result in [source, native]:
            self.assertEqual({name: result[name] for name in ['slot', 'next', 'occupiedSha256']},
                             {name: original[name] for name in ['slot', 'next', 'occupiedSha256']})
        return original

    def test_cursor_partition_can_reject_a_full_free_arena(self):
        self.assertIsNone(self.compare({'pattern': 'empty', 'next': 1, 'blocks': wave.model.CAPACITY, 'operation': 'allocate'})['slot'])
        self.assertEqual(self.compare({'pattern': 'empty', 'next': wave.model.CAPACITY,
                                       'blocks': wave.model.CAPACITY, 'operation': 'allocate'})['slot'], 0)

    def test_suffix_then_prefix_and_zero_huge_counts(self):
        for cursor, count, expected in [(0, 0, None), (0, 0xffffffff, None), (wave.model.CAPACITY, 1, 0), (100, 2, 100)]:
            with self.subTest(cursor=cursor, count=count):
                self.assertEqual(self.compare({'pattern': 'empty', 'next': cursor, 'blocks': count, 'operation': 'allocate'})['slot'], expected)

    def test_full_capacity_free_and_payload_preservation(self):
        result = self.compare({'pattern': 'full', 'next': wave.model.CAPACITY, 'start': 0,
                               'blocks': wave.model.CAPACITY, 'operation': 'free'})
        self.assertEqual(result['next'], wave.model.CAPACITY)
        self.assertTrue(result['immutableMemoryPreserved'])
        self.assertEqual(result['occupiedSha256'], wave.sha(bytes(wave.model.CAPACITY)))

    def test_host64_full_capacity_then_actual_reuse(self):
        graph = wave.native.create({'pattern': 'empty', 'next': 0})
        operations = [('allocate', wave.model.CAPACITY, 0), ('allocate', 1, 0), ('free', wave.model.CAPACITY, 0),
                      ('allocate', wave.model.CAPACITY, 0), ('free', wave.model.CAPACITY, 0), ('allocate', 1, 0),
                      ('allocate', 1, 0), ('free', 1, 0), ('allocate', wave.model.CAPACITY - 2, 0), ('allocate', 1, 0)]
        for operation, blocks, start in operations:
            last = wave.native.execute(self.library, graph, {'operation': operation, 'blocks': blocks, 'start': start})
        self.assertEqual(last['slot'], 0)
        self.assertEqual(last['next'], 1)
        self.assertTrue(last['truePointersAbove32Bits'])
        self.assertEqual(wave.native.STRIDE, 32)
        self.assertEqual(ctypes.sizeof(wave.native.NativeArena), 24)
        self.assertEqual(wave.native.NativeArena.next.offset, 16)

    def test_all_four_compiled_semantic_mutations_return_normally(self):
        for name, before, after, specification in wave.mutations():
            with self.subTest(name=name):
                directory = self.work / 'negative' / name
                directory.mkdir(parents=True, exist_ok=True)
                source = directory / 'wrong.c'
                source.write_text(wave.build_tools.SOURCE.read_text().replace(before, after))
                graph = wave.build_tools.arm(source, directory / 'arm', self.receipts)
                address = 0x4c39c8 if specification['operation'] == 'allocate' else 0x4c3994
                candidate = graph['functions'][address]
                with self.assertRaises(wave.oracle.SemanticMismatch) as caught:
                    wave.oracle.execute([(candidate['address'], candidate['raw'])], candidate['address'], specification, 1, True, 15)
                self.assertTrue(caught.exception.details['returnedToSentinel'])
                self.assertTrue(caught.exception.details['immutableMemoryPreserved'])
                library = ctypes.CDLL(str(wave.build_tools.windows(source, directory / 'windows', self.receipts)))
                with self.assertRaises(wave.native.SemanticMismatch) as caught:
                    wave.native.execute(library, wave.native.create(specification), specification)
                self.assertTrue(caught.exception.details['nativeWindowsReturnedNormally'])
                self.assertTrue(caught.exception.details['immutableMemoryAndGuardsPreserved'])

    def test_invalid_domain_rejected(self):
        data = bytes(wave.model.CAPACITY)
        for size, cursor, count, operation, start in [(len(data) - 1, 0, 1, 'allocate', 0),
                (len(data), len(data) + 1, 1, 'allocate', 0), (len(data), 0, -1, 'allocate', 0),
                (len(data), 0, 1, 'free', len(data))]:
            with self.assertRaises(ValueError):
                wave.model.apply(bytes(size), cursor, count, operation, start)

    def test_native_memory_failure_precedes_semantic_result(self):
        def bad(arena, blocks):
            arena._obj.storage = 0x1234
            return None
        class BadLibrary:
            fn_004c39c8 = staticmethod(bad)
        specification = {'pattern': 'empty', 'next': 0, 'blocks': 1, 'operation': 'allocate'}
        with self.assertRaisesRegex(RuntimeError, 'immutable descriptor'):
            wave.native.execute(BadLibrary(), wave.native.create(specification), specification)


if __name__ == '__main__':
    unittest.main()
