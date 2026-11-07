import ctypes
import json
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_wave010 as wave


class NativeWave010Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work = wave.WORK / 'tests'
        cls.receipts = []
        cls.graph = wave.build_tools.arm(wave.build_tools.SOURCE, cls.work / 'source', cls.receipts)
        cls.library = ctypes.CDLL(str(wave.build_tools.windows(wave.build_tools.SOURCE, cls.work / 'windows', cls.receipts)))
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if wave.sha(cls.image) != wave.MODULE_SHA:
            raise RuntimeError('Canonical original image changed')
        cls.reference = [(0x4becdc, cls.image[0x3becdc:0x3beed0]), (0x780578, cls.image[0x680578:0x6805e4])]

    def compare(self, case, operation='match', mask=0):
        original_entry = 0x4bed30 if operation == 'match' else 0x4becdc
        source_entry = wave.build_tools.PLACEMENTS['fn_' + format(original_entry, '08x')]
        original = wave.oracle.execute(self.reference, original_entry, case, 107, operation, mask, True, 15)
        source = wave.oracle.execute(self.graph['blocks'], source_entry, case, 107, operation, mask, True, 15,
                                     allowed_execution=self.graph['executable'])
        native = wave.native.execute(self.library, case, operation, mask)
        for result in [source, native]:
            self.assertEqual((result['result'], result['state']), (original['result'], original['state']))
        return original

    def test_complete_boundaries_and_actual_caller_witnesses(self):
        census = json.loads(wave.CENSUS.read_text())
        rows = wave.boundaries(self.image, census)
        self.assertEqual([row['bytes'] for row in rows], [84, 416])
        self.assertEqual({row['target'] for row in rows[1]['originalDirectCalls']}, {0x4becdc, 0x780578})
        self.assertEqual(rows[1]['callerWitnesses'][0]['callerFunction'], 0x4c3c20)
        self.assertTrue(all(row['poolBytes'] == 0 for row in rows))

    def test_full_source_graph_has_real_named_call_relocations(self):
        function = self.graph['functions']['fn_004bed30']
        self.assertEqual({row['symbol'] for row in function['relocations']}, {'fn_00780578'})
        self.assertTrue(all(row['name'] == 'R_ARM_CALL' for row in function['relocations']))
        dependency = json.loads((ROOT / 'evidence/lanes/wave009-native/packet.json').read_text())
        expected = dependency['functions'][0]['candidateObjectSpanSha256']
        self.assertEqual(self.graph['functions']['fn_00780578']['sectionSha256'], expected)
        self.assertEqual(set(self.graph['functions']), {'fn_004becdc', 'fn_004bed30', 'fn_00780578'})
        self.assertTrue(all(start >= 0x900000 for start, raw in self.graph['blocks']))

    def test_signed_results_empty_input_and_failure_cursor(self):
        state, edge = wave.fixtures.state, wave.fixtures.edge
        self.assertEqual(self.compare({'states': [state(-128)], 'initial': 0, 'text': []})['result'], -128)
        case = {'states': [state(-7, [edge(4, 1, 2)]), state(9)], 'initial': 0, 'text': [97]}
        result = self.compare(case)
        self.assertEqual((result['result'], result['state']), (0, 1))

    def test_measured_whitespace_excludes_nbsp_and_emspace(self):
        state, edge = wave.fixtures.state, wave.fixtures.edge
        states = [state(-7, [edge(4, 1, 2), edge(3, 0, ranges=[(1, 65535)])]),
                  state(23, [edge(3, 1, ranges=[(1, 65535)])])]
        for character, expected in [(0xa0, 23), (0x2003, 23), (32, -7), (0x3000, -7)]:
            with self.subTest(character=character):
                self.assertEqual(self.compare({'states': states, 'initial': 0, 'text': [character]})['result'], expected)

    def test_crlf_is_one_break_group(self):
        case = wave.mutations()[1][3]
        self.assertEqual(self.compare(case)['result'], 17)
        self.assertEqual(self.compare({**case, 'text': [13]})['result'], 17)
        self.assertEqual(self.compare({**case, 'text': [10]})['result'], 17)

    def test_first_matching_transition_wins(self):
        state, edge = wave.fixtures.state, wave.fixtures.edge
        case = {'states': [state(0, [edge(3, 1, ranges=[(0, 255)]), edge(3, 2, ranges=[(1, 65535)])]),
                           state(5), state(9)], 'initial': 0, 'text': [97]}
        self.assertEqual(self.compare(case)['result'], 5)

    def test_maximum_graph_and_64_codeunit_traversal(self):
        case = wave.fixtures.fixtures()[220]
        self.assertEqual(len(case['states']), 16)
        self.assertEqual(sum(len(edge['ranges']) for state in case['states'] for edge in state['edges']), 4096)
        self.assertEqual(len(case['text']), 64)
        self.assertTrue(self.compare(case)['graphOutsideCursorPreserved'])

    def test_all_32_control_bits_and_low_byte_payload_preserve_host_pointers(self):
        for case, mask in wave.fixtures.controls():
            self.compare(case, 'control', mask)
        self.assertEqual(ctypes.sizeof(wave.native.NativeLink._fields_[0][1]), 8)
        self.assertEqual(wave.native.NativeLink.next.offset, 8)
        self.assertEqual(wave.native.NativeEdge.label.offset, 16)
        self.assertEqual(wave.native.NativeState.data.offset + wave.native.NativeStateData.result.offset, 84)
        self.assertEqual(wave.native.NativeContext.initial.offset, 8)

    def test_compiled_wrong_source_returns_and_fails_semantically(self):
        for name, before, after, case, operation, mask in wave.mutations():
            with self.subTest(name=name):
                directory = self.work / 'negative' / name
                directory.mkdir(parents=True, exist_ok=True)
                source = directory / 'wrong.c'
                source.write_text(wave.build_tools.SOURCE.read_text().replace(before, after))
                graph = wave.build_tools.arm(source, directory / 'arm', self.receipts)
                entry = wave.build_tools.PLACEMENTS['fn_004bed30' if operation == 'match' else 'fn_004becdc']
                with self.assertRaises(wave.oracle.SemanticMismatch) as caught:
                    wave.oracle.execute(graph['blocks'], entry, case, 1, operation, mask, True, 15,
                                        allowed_execution=graph['executable'])
                self.assertTrue(caught.exception.details['returnedToSentinel'])
                self.assertTrue(caught.exception.details['graphOutsideCursorPreserved'])
                library = ctypes.CDLL(str(wave.build_tools.windows(source, directory / 'windows', self.receipts)))
                with self.assertRaises(wave.native.NativeMismatch) as caught:
                    wave.native.execute(library, case, operation, mask)
                self.assertTrue(caught.exception.details['nativeWindowsReturnedNormally'])
                self.assertTrue(caught.exception.details['guardedGraphOutsideCursorPreserved'])

    def test_execution_requires_an_explicit_owned_body(self):
        case = {'states': [wave.fixtures.state(1)], 'initial': 0, 'text': []}
        with self.assertRaisesRegex(RuntimeError, 'Execution escaped'):
            wave.oracle.execute(self.reference, 0x4bed30, case, 1, allowed_execution=[])

    def test_invalid_domains_fail_before_execution(self):
        state, edge = wave.fixtures.state, wave.fixtures.edge
        base = {'states': [state(0)], 'initial': 0, 'text': []}
        invalid = [{**base, 'states': []}, {**base, 'initial': 1}, {**base, 'text': [0]},
                   {**base, 'text': [97] * 65}, {**base, 'states': [state(128)]},
                   {**base, 'states': [state(0, [edge(4, 0, 1)])]},
                   {**base, 'states': [state(0, [edge(3, 0, ranges=[(0, 0)] * 17)])]}]
        for case in invalid:
            with self.subTest(case=case), self.assertRaises(ValueError):
                wave.model.validate(case)

    def test_native_memory_checked_before_semantic_mismatch(self):
        def bad(cursor, context, text):
            context._obj.unknown_00 = 0
            return 0
        class BadLibrary:
            fn_004bed30 = staticmethod(bad)
        case = {'states': [wave.fixtures.state(-128)], 'initial': 0, 'text': []}
        with self.assertRaisesRegex(RuntimeError, 'changed a graph field'):
            wave.native.execute(BadLibrary(), case)


if __name__ == '__main__':
    unittest.main()
