import ctypes
import json
import struct
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_wave013_lexer as wave


class NativePatternTokenizerTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work = wave.WORK / 'tokenizer-tests'
        cls.receipts = []
        cls.graph = wave.build_tools.arm(cls.work / 'source', cls.receipts)
        cls.library = ctypes.CDLL(str(wave.build_tools.windows(cls.work / 'windows', cls.receipts)))
        cls.original = wave.original_tools.load([row['canonicalOriginalAddress'] for row in cls.graph['functions'].values()
                                                if row['canonicalOriginalAddress'] is not None])

    def compare(self, specification):
        reference = wave.arm(self.original, wave.entry(specification), specification, 70, True, 15)
        source = wave.arm(self.graph, wave.entry(specification), specification, 70, True, 15)
        wave.runtime.compare_arm(source, reference)
        native = wave.runtime.execute_windows(self.library, specification, reference, 70)
        self.assertTrue(native['truePointersAbove32Bits'])
        return reference

    def tokens(self, reference):
        memory, base = reference['after'], reference['layout']['base']
        address = int.from_bytes(memory[0x2004:0x2008], 'little')
        result = []
        while address != base + 0x2000:
            self.assertLess(len(result), 256)
            offset = address - base
            result.append({'kind': memory[offset + 8], 'value': int.from_bytes(memory[offset + 10:offset + 12], 'little'),
                           'maximum': int.from_bytes(memory[offset + 12:offset + 14], 'little')})
            address = int.from_bytes(memory[offset + 4:offset + 8], 'little')
        return result

    def test_constructor_returns_input_pointer_and_resets_owned_view(self):
        reference = self.compare({'operation': 'construct', 'units': [97], 'position': 1, 'depth': -2, 'existing': 2})
        self.assertEqual(reference['result'], reference['layout']['base'] + 0x2000)
        self.assertEqual(reference['after'][0x2010:0x201c], bytes(12))
        self.assertEqual(reference['layout']['before'][0x1000:0x1a40], reference['after'][0x1000:0x1a40])

    def test_quoted_operators_are_literals_and_both_space_forms_are_skipped(self):
        specification = {'operation': 'lex', 'units': wave.case_tools.units('\\Q [a]\u3000 \\E')}
        tokens = self.tokens(self.compare(specification))
        self.assertEqual([(row['kind'], row['value']) for row in tokens[:-1]], [(0, 91), (0, 97), (0, 93)])
        self.assertEqual(tokens[-1]['kind'], 18)

    def test_repetition_bounds_are_u16_scalars_and_errors_preserve_partial_state(self):
        tokens = self.tokens(self.compare({'operation': 'lex', 'units': wave.case_tools.units('a{32768,32769}')}))
        self.assertEqual(tokens[1], {'kind': 16, 'value': 32768, 'maximum': 32769})
        for text in ['{65536}', '{12,11}', '{1,2x}']:
            self.assertEqual(self.compare({'operation': 'handler', 'entry': 0x4bf9e0, 'units': wave.case_tools.units(text)})['result'], 3)

    def test_hexadecimal_failure_keeps_original_precheck_shift(self):
        reference = self.compare({'operation': 'lex', 'units': wave.case_tools.units('\\xF')})
        self.assertEqual(reference['result'], 6)
        self.assertEqual(self.tokens(reference)[0]['value'], 0xf0)
        tokens = self.tokens(self.compare({'operation': 'lex', 'units': wave.case_tools.units('\\uFFFF')}))
        self.assertEqual(tokens[0]['value'], 65535)

    def test_octal_initial_digit_limits_consumption(self):
        tokens = self.tokens(self.compare({'operation': 'lex', 'units': wave.case_tools.units('\\0477')}))
        self.assertEqual([row['value'] for row in tokens[:-1]], [39, 55])

    def test_property_lookup_consumed_count_changes_only_on_success(self):
        for name, expected in [('Lower}', 4), ('IsCs}', 131), ('unknown}', 133), ('Lower', 133)]:
            reference = self.compare({'operation': 'property', 'units': wave.case_tools.units(name)})
            self.assertEqual(reference['result'], expected)
            consumed = int.from_bytes(reference['after'][0x700:0x704], 'little')
            self.assertEqual(consumed, len(name) if expected != 133 else 0x12345678)

    def test_utf16_compare_preserves_exact_signed_result_and_nul_stop(self):
        for left, right, expected in [([0], [65535], -65535), ([65535], [0], 65535), ([0, 2], [0, 3], 0)]:
            self.assertEqual(self.compare({'operation': 'compare', 'units': left, 'right': right})['result'], expected)

    def test_allocation_failure_and_last_slot_wrap_preserve_full_native_layout(self):
        for free in [0, 1, 2]:
            self.assertEqual(self.compare({'operation': 'lex', 'units': [97, 98], 'free_slots': free})['result'], 1)
        self.assertEqual(self.compare({'operation': 'lex', 'units': [97, 98], 'cursor': 0xa3f})['result'], 0)
        self.assertEqual(self.compare({'operation': 'lex', 'units': []})['result'], 0)

    def test_typed_pointer_translation_rejects_unqualified_interior_address(self):
        original = wave.model.encode({'operation': 'lex', 'units': []}, 0x3000000, 4)
        native = wave.model.encode({'operation': 'lex', 'units': []}, 0x100000000, 8)
        self.assertEqual(wave.model.translate_pointer(0x3008000 + 2623 * 16, original, native), 0x100008000 + 2623 * 32)
        with self.assertRaisesRegex(ValueError, 'interior token pointer'):
            wave.model.translate_pointer(0x3008004, original, native)

    def test_source_execution_into_readonly_data_is_rejected(self):
        with self.assertRaisesRegex(RuntimeError, 'escaped'):
            wave.runtime.execute_arm(self.graph, self.graph['readonlyRanges'][0][0], {'operation': 'lex', 'units': []})

    def test_coverage_and_genuine_returning_negative_controls(self):
        packet = json.loads((wave.OUTPUT / 'packet.json').read_text())
        behavior = packet['behavior']
        self.assertEqual(behavior['newOriginalInstructions'], 1070)
        self.assertEqual(behavior['reachableOriginalInstructionsReached'], 1065)
        self.assertEqual(behavior['unreachableImmutableTableAbiInstructions'], 5)
        self.assertEqual(len(packet['negativeControls']), 26)
        self.assertTrue(all(row['returnedNormally'] and row['immutableMemoryPreserved'] for row in packet['negativeControls']))
        self.assertEqual(packet['dependencies']['retainedOriginalExecutableHelpers'], [])
        self.assertFalse(packet['platform']['wholeGameBuildOrExecution'])

    def test_layout_assertions_compile_for_all_three_architectures(self):
        source = self.work / 'layout.c'
        source.write_text('#include "pattern_tokens.h"\n'
                         '_Static_assert(sizeof(PatternToken)==(sizeof(void *)==4?16:24),"token");\n'
                         '_Static_assert(sizeof(PatternLexer)==(sizeof(void *)==4?28:48),"lexer");\n'
                         '_Static_assert(__builtin_offsetof(PatternToken,value)==2*sizeof(void *)+2,"value");\n')
        for target in ['arm-none-eabi', 'x86_64-pc-windows-msvc', 'aarch64-linux-android29']:
            wave.command([ROOT / 'tools/clang-21/clang.exe', '--target=' + target, '-std=c11',
                          '-I', ROOT / 'src/native/wave013', '-c', source, '-o', self.work / (target + '.o')],
                         self.work / (target + '.log'), self.receipts)


if __name__ == '__main__':
    unittest.main()
