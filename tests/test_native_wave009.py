import ctypes
import importlib.util
import json
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
SPEC = importlib.util.spec_from_file_location('native_wave009', ROOT / 'toolscripts/native_wave009.py')
wave = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(wave)
oracle = wave.oracle


class NativeWave009Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work = wave.WORK / 'tests'
        cls.work.mkdir(parents=True, exist_ok=True)
        obj = cls.work / 'membership.o'
        cls.receipts = []
        wave.command([wave.ROOT / 'tools/clang-21/clang.exe', *wave.FLAGS, '-c', wave.SOURCE, '-o', obj],
                     cls.work / 'compile.log', cls.receipts)
        cls.compiled = wave.functions(obj)
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if wave.sha(cls.image) != wave.MODULE_SHA:
            raise RuntimeError('Canonical original image changed')
        source = cls.work / 'wrong-upper.c'
        source.write_text(wave.SOURCE.read_text().replace('value <= node->last', 'value < node->last'))
        wrong = cls.work / 'wrong-upper.o'
        wave.command([wave.ROOT / 'tools/clang-21/clang.exe', *wave.FLAGS, '-I', wave.HEADER.parent,
                      '-c', source, '-o', wrong], cls.work / 'wrong.log', cls.receipts)
        cls.wrong = wave.functions(wrong)

    def original(self, address):
        return self.image[address - 0x100000:address - 0x100000 + 108]

    def test_inclusive_singleton_ranges_and_unsigned_queries(self):
        for query, expected in [(1, 1), (7, 1), (8, 0), (0, 0), (65536, 0), (0xffffffff, 0)]:
            case = {'kind': 3, 'value': 0, 'query': query, 'ranges': [(1, 7)]}
            self.assertEqual(oracle.expected(case), expected)
        self.assertEqual(oracle.expected({'kind': 3, 'value': 0, 'query': 7, 'ranges': [(9, 2)]}), 0)
        self.assertEqual(oracle.expected({'kind': 2, 'value': 65535, 'query': 65535, 'ranges': []}), 1)

    def test_unknown_tags_never_use_the_interval_list(self):
        for kind in [0, 1, 4, 127, 255]:
            case = {'kind': kind, 'value': 9, 'query': 9, 'ranges': [(0, 65535)]}
            for address in wave.ADDRESSES:
                self.assertEqual(oracle.execute(self.original(address), address, case, kind)['result'], 0)

    def test_actual_original_source_return_flag_cross_product(self):
        for address in wave.ADDRESSES:
            for flags in range(16):
                for return_thumb in [False, True]:
                    for query in [7, 8]:
                        case = {'kind': 3, 'value': 0, 'query': query, 'ranges': [(1, 7)]}
                        arguments = (address, case, flags + 7, return_thumb, flags)
                        reference = oracle.execute(self.original(address), *arguments)
                        candidate = oracle.execute(self.compiled[address]['raw'], *arguments)
                        self.assertEqual(reference['result'], candidate['result'])

    def test_long_list_reads_last_node_without_writes(self):
        case = oracle.fixtures()[-1]
        for address in wave.ADDRESSES:
            for raw in [self.original(address), self.compiled[address]['raw']]:
                result = oracle.execute(raw, address, case, 543, True, 15)
                self.assertEqual(result['result'], 1)
                self.assertGreater(result['steps'], 128)
                self.assertTrue(result['allMemoryPreserved'])
                self.assertTrue(result['typedReadFootprintOnly'])

    def test_compiled_wrong_boundary_returns_and_fails_semantically(self):
        case = {'kind': 3, 'value': 0, 'query': 7, 'ranges': [(1, 7)]}
        for address in wave.ADDRESSES:
            with self.assertRaises(oracle.ResultMismatch) as caught:
                oracle.execute(self.wrong[address]['raw'], address, case, 1, True, 15)
            self.assertTrue(caught.exception.details['returnedToSentinel'])
            self.assertTrue(caught.exception.details['allMemoryPreserved'])

    def test_host64_uses_a_real_destination_pointer(self):
        self.assertEqual(ctypes.sizeof(oracle.NativeSet), 40)
        self.assertEqual(ctypes.sizeof(oracle.NativeNode), 24)
        self.assertEqual(oracle.NativeSet.destination.offset, 0)
        self.assertEqual(oracle.NativeSet.kind.offset, 8)
        self.assertEqual(oracle.NativeSet.intervals.offset, 16)
        self.assertEqual(oracle.NativeNode.link.offset, 0)
        baseline = json.loads((wave.OUT / 'v1-packet.json').read_text())
        for row in baseline['functions']:
            raw = self.compiled[row['canonicalIdentity']['address']]['raw']
            self.assertEqual(wave.sha(raw), row['candidateObjectSpanSha256'])

    def test_windows_checks_memory_before_reporting_wrong_result(self):
        def bad(instance, query):
            instance._obj.kind = 0
            return 0
        case = {'kind': 2, 'value': 7, 'query': 7, 'ranges': []}
        with self.assertRaisesRegex(RuntimeError, 'changed memory'):
            oracle.execute_windows(bad, case)
        with self.assertRaises(oracle.ResultMismatch) as caught:
            oracle.execute_windows(lambda instance, query: 0, case)
        self.assertTrue(caught.exception.details['nativeWindowsReturnedNormally'])
        self.assertTrue(caught.exception.details['allMemoryPreserved'])
        self.assertNotIn('calleeSavedSpLrPreserved', caught.exception.details)

    def test_executed_address_outside_owned_body_is_rejected(self):
        source, obj, linked = [self.work / ('escape.' + suffix) for suffix in ['c', 'o', 'elf']]
        source.write_text('extern int outside(const void *, unsigned int);\n'
                          'int fn_00780578(const void *p, unsigned int q) { return outside(p, q); }\n'
                          'int fn_007805e4(const void *p, unsigned int q) { return outside(p, q); }\n')
        wave.command([ROOT / 'tools/clang-21/clang.exe', *wave.FLAGS, '-c', source, '-o', obj],
                     self.work / 'escape-compile.log', self.receipts)
        script = self.work / 'escape.ld'
        script.write_text('outside = 0x780700; SECTIONS { .text.fn_00780578 0x780578 : { *(.text.fn_00780578) } '
                          '.text.fn_007805e4 0x7805e4 : { *(.text.fn_007805e4) } '
                          '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) } }')
        wave.command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '-T', script, obj, '-o', linked,
                      '--entry=fn_00780578'], self.work / 'escape-link.log', self.receipts)
        raw = wave.functions(linked)[0x780578]['raw']
        with self.assertRaisesRegex(RuntimeError, 'escaped the complete owned'):
            oracle.execute(raw, 0x780578, {'kind': 2, 'value': 7, 'query': 7, 'ranges': []}, 1)

    def test_invalid_fixture_domain_rejected(self):
        base = {'kind': 3, 'value': 0, 'query': 7, 'ranges': [(1, 7)]}
        for change in [{'kind': 256}, {'value': 65536}, {'query': -1}, {'ranges': [(0, 0)] * 129}, {'ranges': [(0, 65536)]}]:
            with self.subTest(change=change), self.assertRaises(ValueError):
                oracle.expected({**base, **change})

    def test_candidate_is_explicitly_nonmatching(self):
        for address in wave.ADDRESSES:
            self.assertNotEqual(self.original(address), self.compiled[address]['raw'])
            self.assertEqual(self.compiled[address]['size'], 104)


if __name__ == '__main__':
    unittest.main()
