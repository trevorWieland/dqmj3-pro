"""Unit tests for the draft-repair loop's difference analysis and rewrites.

These test the signal, not the compiler: a difference is classified from bytes,
the repair ordering is a deterministic function of the class, and the text
operators are ordinary string rewrites. The end-to-end measurement (a candidate
is credited only when armcc's placed bytes equal the original) is exercised by
the loop itself, which needs the original image and is not a unit test.
"""

import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

import permute_text                              # noqa: E402
import repair_diff                                # noqa: E402
import repair_ops                                 # noqa: E402


class Symbol:
    def __init__(self, size, mode='arm'):
        self.size = size
        self.mode = mode
        self.address = 0x00100000


def arm(*words):
    return b''.join(word.to_bytes(4, 'little') for word in words)


class DifferenceTests(unittest.TestCase):
    def test_identical_bytes_are_exact(self):
        code = arm(0xe92d4010, 0xe1a04000, 0xe8bd8010)
        result = repair_diff.classify(Symbol(len(code)), code, code, len(code))
        self.assertTrue(result['exact'])
        self.assertEqual(result['class'], 'exact')

    def test_one_changed_register_is_a_register_difference(self):
        # mov r0, r1  vs  mov r0, r2
        original = arm(0xe1a00001, 0xe1a00000)
        compiled = arm(0xe1a00002, 0xe1a00000)
        result = repair_diff.classify(Symbol(len(original)), original,
                                      compiled, len(compiled))
        self.assertEqual(result['class'], 'register')
        self.assertEqual(result['instructions'][0]['kind'], 'register')

    def test_one_changed_immediate_is_an_immediate_difference(self):
        # mov r0, #1  vs  mov r0, #2
        original = arm(0xe3a00001, 0xe1a00000)
        compiled = arm(0xe3a00002, 0xe1a00000)
        result = repair_diff.classify(Symbol(len(original)), original,
                                      compiled, len(compiled))
        self.assertEqual(result['class'], 'immediate')

    def test_a_longer_compile_reports_its_size_delta(self):
        original = arm(0xe92d4010, 0xe8bd8010)
        compiled = arm(0xe92d4010, 0xe1a00000, 0xe8bd8010)
        result = repair_diff.classify(Symbol(len(original)), original,
                                      compiled, len(compiled))
        self.assertEqual(result['sizeDelta'], 4)
        self.assertEqual(result['class'], 'size')

    def test_pool_word_difference_is_reported_as_a_pool(self):
        instructions = arm(0xe59f0000, 0xe12fff1e)
        original = instructions + arm(0x00000001)
        compiled = instructions + arm(0x00000002)
        result = repair_diff.classify(Symbol(len(instructions)), original,
                                      compiled, len(instructions))
        self.assertEqual(result['class'], 'pool')
        self.assertEqual(result['pool']['words'], 1)


class OrderingTests(unittest.TestCase):
    def test_the_class_mapping_orders_its_operators_first(self):
        mutations = [('block-reorder@1', 'c'), ('narrow-read@2', 'b'),
                     ('local-inline@3', 'a')]
        ordered = repair_diff.order_mutations(
            mutations, {'class': 'register'})
        self.assertEqual([label.split('@')[0] for label, _ in ordered],
                         ['narrow-read', 'local-inline', 'block-reorder'])


class RewriteTests(unittest.TestCase):
    def function(self, body):
        text = 'void fn_00100000(int *param_1)\n{\n%s\n}\n' % body
        span = permute_text.function_span(text, 'fn_00100000')
        return text, span

    def test_narrow_read_matches_the_store_width(self):
        text, span = self.function(
            "  *(char *)(param_1 + 100) = (char)param_1[100] + '\\x01';")
        labels = [label for label, mutant in repair_ops.mutations(text, span)
                  if 'narrow-read' in label]
        self.assertEqual(len(labels), 1)
        mutants = [mutant for label, mutant in repair_ops.mutations(text, span)
                   if 'narrow-read' in label]
        self.assertIn('*(char *)(param_1 + 100) +', mutants[0])
        self.assertNotIn('(char)param_1[100]', mutants[0])

    def test_store_swap_exchanges_distinct_fields(self):
        text, span = self.function('  param_1[3] = 4;\n  param_1[4] = 0;')
        mutants = [mutant for label, mutant in repair_ops.mutations(text, span)
                   if 'store-swap' in label]
        self.assertTrue(mutants)
        self.assertIn('param_1[4] = 0;\nparam_1[3] = 4;', mutants[0])

    def test_a_guarded_assignment_becomes_a_conditional_expression(self):
        text, span = self.function('  param_1[0] = 0;\n  if (param_1[1] == 0) param_1[0] = 1;')
        mutants = [mutant for label, mutant in repair_ops.mutations(text, span)
                   if 'if-guarded' in label]
        self.assertTrue(mutants)
        self.assertIn('param_1[0] = param_1[1] == 0 ? 1 : param_1[0];', mutants[0])

    def test_split_compound_writes_two_guards(self):
        text, span = self.function(
            '  if (param_1[0] == 1) {\n    param_1[1] = 2;\n    param_1[2] = 3;\n  }')
        mutants = [mutant for label, mutant in repair_ops.mutations(text, span)
                   if 'split-compound' in label]
        self.assertTrue(mutants)
        self.assertIn('if (param_1[0] == 1) param_1[1] = 2; if (param_1[0] == 1) param_1[2] = 3;',
                      mutants[0])

    def test_cast_width_changes_one_pointee(self):
        text, span = self.function('  *(undefined4 *)(param_1 + 4) = 1;')
        mutants = [mutant for label, mutant in repair_ops.mutations(text, span)
                   if 'cast-size' in label]
        self.assertTrue(mutants)
        self.assertTrue(any('*(undefined1 *)(param_1 + 4) = 1;' in mutant
                            for mutant in mutants))


if __name__ == '__main__':
    unittest.main()
