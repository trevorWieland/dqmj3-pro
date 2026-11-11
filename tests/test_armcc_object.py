"""The armcc object splitter, tested with pinned-Clang objects.

armcc emits one executable section per translation unit by default and one
``i.<symbol>`` section per function with ``--split_sections``. The splitter
rewrites either layout into one ``.text.<symbol>`` section per function without
touching code bytes or losing relocations. Clang can produce the single-``.text``
shape (omit ``-ffunction-sections``) and, from assembly, the split shape, so both
paths are tested on a public tool in CI and the armcc run only needs the compiler
itself.
"""

import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import armcc_object
import elf_objects
import objdiff_objects


CLANG = ROOT / 'tools/clang-21/clang.exe'
SOURCE = '''
extern int external(int);
static const int table[3] = {1, 2, 3};
int fn_00100000(int x) { return table[x & 1] + external(x); }
int fn_00100020(int x) { return x + 1; }
'''

# The shape armcc --split_sections emits: one i.<symbol> section per function,
# the function at offset zero, and its literal pool after a $d mapping symbol.
SPLIT_SOURCE = '''
	.syntax unified
	.arm
	.section i.fn_00100000,"ax",%progbits
	.global fn_00100000
	.type fn_00100000,%function
fn_00100000:
	bl external
	ldr r0, .Lpool
	bx lr
$d:
.Lpool:
	.word 0x12345678
	.size fn_00100000, 12
	.section i.fn_00100020,"ax",%progbits
	.global fn_00100020
	.type fn_00100020,%function
fn_00100020:
	add r0, r0, #1
	bx lr
	.size fn_00100020, 8
'''


@unittest.skipUnless(CLANG.is_file(), 'the pinned compiler is not installed')
class SplitterTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory(dir=ROOT / 'work')
        self.addCleanup(directory.cleanup)
        self.output = Path(directory.name)
        source = self.output / 'unit.c'
        source.write_text(SOURCE, encoding='utf-8')
        self.raw = self.output / 'unit.raw.o'
        objdiff_objects.run([CLANG, '--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2',
                             '-ffreestanding', '-c', source, '-o', self.raw],
                            self.output / 'clang.log')
        self.split = self.output / 'unit.o'
        self.report = armcc_object.split(self.raw, self.split)

    def test_every_function_becomes_its_own_section(self):
        read = elf_objects.read(self.split)
        self.assertEqual(set(read['functions']), {'fn_00100000', 'fn_00100020'})
        self.assertIn('.text.fn_00100000', read['sections'])
        self.assertIn('.text.fn_00100020', read['sections'])
        self.assertEqual(read['functions']['fn_00100000']['offset'], 0)

    def test_function_extents_partition_the_original_text(self):
        raw = elf_objects.read(self.raw)
        read = elf_objects.read(self.split)
        original = raw['sections']['.text']['data']
        rebuilt = bytearray()
        for name in ('.text.fn_00100000', '.text.fn_00100020'):
            rebuilt.extend(read['sections'][name]['data'])
        self.assertEqual(bytes(rebuilt), original)
        self.assertEqual(sum(value['size'] for value in read['sections'].values()
                             if value['kind'] == 'code'), len(original))
        for name, function in read['functions'].items():
            self.assertLessEqual(function['size'], read['sections'][function['section']]['size'])

    def test_a_literal_pool_is_the_section_tail_not_the_symbol_size(self):
        read = elf_objects.read(self.split)
        function = read['functions']['fn_00100000']
        self.assertLess(function['size'], read['sections'][function['section']]['size'])
        self.assertEqual(len(function['tail']), function['extent'] - function['size'])
        self.assertIn(2, function['relocations'])

    def test_relocations_survive_the_rewrite(self):
        read = elf_objects.read(self.split)
        relocations = read['functions']['fn_00100000']['relocations']
        self.assertTrue(relocations)
        self.assertNotIn(0, relocations)
        self.assertIn('external', read['functions']['fn_00100000']['references'])

    def test_selection_can_discard_data_and_name_the_referencing_function(self):
        names = ['fn_00100000', 'fn_00100020']
        base, dropped, reasons, _ = objdiff_objects.select_base(ROOT, self.split, names, self.output, 'unit')
        self.assertEqual(dropped, ['fn_00100000'])
        self.assertIn('data the split does not place', reasons['fn_00100000'])
        self.assertEqual(set(elf_objects.read(base)['functions']), set(names))


@unittest.skipUnless(CLANG.is_file(), 'the pinned compiler is not installed')
class SplitSectionTests(unittest.TestCase):
    """The i.<symbol> layout armcc --split_sections emits."""

    def setUp(self):
        directory = tempfile.TemporaryDirectory(dir=ROOT / 'work')
        self.addCleanup(directory.cleanup)
        self.output = Path(directory.name)
        source = self.output / 'unit.s'
        source.write_text(SPLIT_SOURCE, encoding='utf-8')
        self.raw = self.output / 'unit.raw.o'
        objdiff_objects.run([CLANG, '--target=arm-none-eabi', '-mcpu=mpcore', '-marm',
                             '-c', source, '-o', self.raw], self.output / 'clang.log')
        self.split = self.output / 'unit.o'
        self.report = armcc_object.split(self.raw, self.split)

    def test_each_function_section_keeps_its_own_pool(self):
        read = elf_objects.read(self.split)
        self.assertEqual(set(read['functions']), {'fn_00100000', 'fn_00100020'})
        pooled = read['functions']['fn_00100000']
        self.assertEqual((pooled['size'], pooled['extent']), (12, 16))
        self.assertEqual(pooled['tail'], b'\x78\x56\x34\x12')
        self.assertEqual(read['functions']['fn_00100020']['tail'], b'')
        self.assertEqual(read['sections']['.text.fn_00100000']['size'], 16)

    def test_relocations_stay_in_the_function_section_they_name(self):
        read = elf_objects.read(self.split)
        self.assertIn(28, read['functions']['fn_00100000']['relocations'])
        self.assertIn('external', read['functions']['fn_00100000']['references'])
        self.assertEqual(read['functions']['fn_00100020']['relocations'], {})

    def test_selection_can_take_the_pooled_function_and_its_data(self):
        names = ['fn_00100000', 'fn_00100020']
        known = dict.fromkeys(names + ['external'])
        base, dropped, _, _ = objdiff_objects.select_base(ROOT, self.split, names,
                                                          self.output, 'unit', known)
        self.assertEqual(dropped, [])
        read = elf_objects.read(base)
        self.assertEqual(set(read['functions']), set(names))
        self.assertEqual(read['functions']['fn_00100000']['extent'], 16)


if __name__ == '__main__':
    unittest.main()
