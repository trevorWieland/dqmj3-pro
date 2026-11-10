"""The armcc object splitter, tested with a pinned-Clang single-.text object.

armcc emits one executable section per translation unit; the splitter rewrites
it into one ``.text.<symbol>`` section per function without touching code bytes
or losing relocations. Clang without ``-ffunction-sections`` produces the same
shape, so the splitter can be tested on a public tool in CI and the armcc path
only needs the compiler itself.
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
        self.assertEqual(sum(value['size'] for value in read['functions'].values()),
                         len(original))

    def test_relocations_survive_the_rewrite(self):
        read = elf_objects.read(self.split)
        relocations = read['functions']['fn_00100000']['relocations']
        self.assertTrue(relocations)
        self.assertNotIn(0, relocations)
        self.assertIn('external', read['functions']['fn_00100000']['references'])

    def test_selection_can_discard_data_and_drop_only_its_referencing_function(self):
        names = ['fn_00100000', 'fn_00100020']
        base, dropped, _ = objdiff_objects.select_base(ROOT, self.split, names, self.output, 'unit')
        self.assertEqual(dropped, ['fn_00100000'])
        self.assertEqual(set(elf_objects.read(base)['functions']), {'fn_00100020'})


if __name__ == '__main__':
    unittest.main()
