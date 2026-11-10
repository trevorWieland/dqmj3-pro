import importlib.util
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import elf_objects
import objdiff_objects


CLANG = ROOT / 'tools/clang-21/clang.exe'

SOURCE = '''
unsigned fn_00100000(unsigned x) { return x + 1; }
unsigned fn_00100004(unsigned x) { return x * 3; }
unsigned helper(unsigned x) { return x - 2; }
unsigned fn_00100020(unsigned x) { return helper(x) + 4; }
'''

RELOCATED = '''
static unsigned table[4] = {1, 2, 3, 4};
unsigned fn_00100000(unsigned x) { return table[x]; }
unsigned fn_00100004(unsigned x) { return x + 1; }
'''


@unittest.skipUnless(CLANG.is_file(), 'the pinned compiler is not installed')
class ObjectConstructionTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory(dir=ROOT / 'work')
        self.addCleanup(directory.cleanup)
        self.output = Path(directory.name)

    def compile(self, text=SOURCE):
        source = self.output / 'unit.c'
        source.write_text(text, encoding='utf-8')
        unit = {'source': source.relative_to(ROOT).as_posix(), 'compilerProfile': 'clang-21'}
        definitions, commands = objdiff_objects.compile_units(ROOT, self.output / 'compiled', [unit])
        self.assertTrue(commands)
        return definitions

    def test_default_profile_is_the_best_evidenced_original_compiler(self):
        table = objdiff_objects.profiles(ROOT)
        self.assertEqual(table['default'], 'armcc-4.1-b1454')
        self.assertTrue(table['profiles']['armcc-4.1-b1454']['measuredOriginal'])
        self.assertFalse(table['profiles']['clang-21']['measuredOriginal'])

    def test_unknown_compiler_profile_is_refused(self):
        source = self.output / 'unit.c'
        source.write_text('unsigned fn_00100000(unsigned x) { return x; }\n', encoding='utf-8')
        with self.assertRaisesRegex(ValueError, 'Unknown compiler profile'):
            objdiff_objects.compiler_argv(ROOT, {'source': 'x', 'compilerProfile': 'guess'}, source,
                                          self.output / 'x.o')

    def test_compiler_argv_follows_the_declared_unit_profile(self):
        source = self.output / 'unit.c'
        unit = {'source': 'src/native/wave001/x.c', 'compilerProfile': 'clang-21',
                'layoutProfile': 'packed-4',
                'publicHeaderProfile': 'zlib-solo', 'includeDirectories': ['src/native/wave001']}
        argv = [str(item) for item in objdiff_objects.compiler_argv(ROOT, unit, source, self.output / 'x.o')]
        self.assertIn('-fpack-struct=4', argv)
        self.assertIn('-DZ_SOLO', argv)
        self.assertIn(str(source.parent), argv)
        self.assertIn(str(ROOT / 'src/native/wave001'), argv)
        self.assertEqual(argv[-1], str(self.output / 'x.o'))
        with self.assertRaisesRegex(ValueError, 'layout profile'):
            objdiff_objects.compiler_argv(ROOT, {'source': 'x', 'layoutProfile': 'wide'}, source,
                                          self.output / 'x.o')

    def test_compiling_reports_only_canonical_function_names(self):
        definitions = self.compile()
        self.assertEqual(set(definitions), {'fn_00100000', 'fn_00100004', 'fn_00100020'})

    def test_carve_reproduces_the_original_bytes_and_symbols(self):
        image = bytearray(0x100)
        image[0x00:0x04] = b'\x01\x00\xa0\xe3'
        image[0x40:0x44] = b'\x02\x00\xa0\xe3'
        path = self.output / 'code.bin'
        path.write_bytes(bytes(image))
        spans = [(0x100000, 4, 0x00), (0x100040, 4, 0x40)]
        target, _ = objdiff_objects.carve(ROOT, self.output, 'unit', path, spans,
                                          {0: [('fn_00100000', 0, 4, 'arm')],
                                           1: [('fn_00100040', 0, 4, 'thumb')]})
        read = elf_objects.read(target)
        self.assertEqual(read['sections']['.text.original_00100000']['data'], bytes(image[0:4]))
        self.assertEqual(read['sections']['.text.original_00100040']['data'], bytes(image[0x40:0x44]))
        self.assertEqual(read['functions']['fn_00100000']['offset'], 0)
        self.assertEqual(read['functions']['fn_00100040']['mode'], 'thumb')

    def test_select_base_keeps_only_measured_functions(self):
        definitions = self.compile()
        raw = definitions['fn_00100000']['object']
        base, dropped, _ = objdiff_objects.select_base(ROOT, raw, ['fn_00100000'], self.output, 'unit')
        self.assertEqual(set(elf_objects.read(base)['functions']), {'fn_00100000'})
        self.assertEqual(dropped, [])

    def test_functions_whose_relocations_cannot_be_represented_are_dropped(self):
        definitions = self.compile(RELOCATED)
        raw = definitions['fn_00100000']['object']
        base, dropped, _ = objdiff_objects.select_base(ROOT, raw, ['fn_00100000', 'fn_00100004'],
                                                       self.output, 'unit')
        self.assertEqual(dropped, ['fn_00100000'])
        self.assertEqual(set(elf_objects.read(base)['functions']), {'fn_00100004'})

    def test_a_unit_with_no_representable_function_gets_an_empty_base(self):
        definitions = self.compile(RELOCATED)
        raw = definitions['fn_00100000']['object']
        base, dropped, _ = objdiff_objects.select_base(ROOT, raw, ['fn_00100000'], self.output, 'only')
        self.assertEqual(dropped, ['fn_00100000'])
        self.assertEqual(elf_objects.read(base)['functions'], {})

    def test_duplicate_definitions_are_refused(self):
        second = self.output / 'second.c'
        second.write_text('unsigned fn_00100000(unsigned x) { return x; }\n', encoding='utf-8')
        source = self.output / 'unit.c'
        source.write_text('unsigned fn_00100000(unsigned x) { return x; }\n', encoding='utf-8')
        units = [{'source': source.relative_to(ROOT).as_posix(), 'compilerProfile': 'clang-21'},
                 {'source': second.relative_to(ROOT).as_posix(), 'compilerProfile': 'clang-21'}]
        with self.assertRaisesRegex(ValueError, 'both define'):
            objdiff_objects.compile_units(ROOT, self.output / 'compiled', units)


if __name__ == '__main__':
    unittest.main()
