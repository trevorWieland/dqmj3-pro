import importlib.util
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import elf_objects
import objdiff_objects
import split as split_module


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

CALLS = '''
__attribute__((noinline)) unsigned fn_00100000(unsigned x) { return x + 1; }
unsigned fn_00100020(unsigned x) { return fn_00100000(x) * 3; }
'''

FOREIGN = '''
extern int other_translation_unit(int);
unsigned fn_00100000(unsigned x) { return other_translation_unit(x); }
'''


def branch_targets(data, address):
    """Every ARM BL this byte string encodes, as an absolute target address."""
    targets = []
    for offset in range(0, len(data) - 3, 4):
        word = int.from_bytes(data[offset:offset + 4], 'little')
        if word >> 24 != 0xEB:
            continue
        immediate = word & 0xFFFFFF
        if immediate & 0x800000:
            immediate -= 1 << 24
        targets.append(address + offset + 8 + (immediate << 2))
    return targets


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

    def split_of(self, definitions, addresses):
        """A split that places these compiled functions at the given addresses."""
        read = elf_objects.read(next(iter(definitions.values()))['object'])
        symbols = [split_module.Symbol(name, address, 'arm', read['functions'][name]['size'])
                   for name, address in addresses.items()]
        return split_module.Split(symbols, 'test')

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
        base, dropped, reasons, _ = objdiff_objects.select_base(ROOT, raw, ['fn_00100000'], self.output, 'unit')
        self.assertEqual(set(elf_objects.read(base)['functions']), {'fn_00100000'})
        self.assertEqual(dropped, [])
        self.assertEqual(reasons, {})

    def test_functions_whose_relocations_cannot_be_represented_are_dropped(self):
        definitions = self.compile(RELOCATED)
        raw = definitions['fn_00100000']['object']
        base, dropped, reasons, _ = objdiff_objects.select_base(ROOT, raw, ['fn_00100000', 'fn_00100004'],
                                                               self.output, 'unit')
        self.assertEqual(dropped, ['fn_00100000'])
        self.assertIn('data the split does not place', reasons['fn_00100000'])
        self.assertEqual(set(elf_objects.read(base)['functions']), {'fn_00100000', 'fn_00100004'})

    def test_a_call_to_a_function_outside_the_split_is_rejected_with_its_name(self):
        definitions = self.compile(FOREIGN)
        raw = definitions['fn_00100000']['object']
        size = elf_objects.read(raw)['functions']['fn_00100000']['size']
        known = self.split_of(definitions, {'fn_00100000': 0x100000})
        base, dropped, reasons, _ = objdiff_objects.select_base(ROOT, raw, ['fn_00100000'], self.output,
                                                               'unit', known.by_name)
        self.assertEqual(dropped, ['fn_00100000'])
        self.assertIn('other_translation_unit', reasons['fn_00100000'])
        self.assertEqual(elf_objects.read(base)['functions']['fn_00100000']['size'], size)

    def test_a_call_to_a_split_function_is_resolved_to_its_split_address(self):
        definitions = self.compile(CALLS)
        raw = definitions['fn_00100020']['object']
        known = self.split_of(definitions, {'fn_00100000': 0x100000, 'fn_00100020': 0x100020})
        names = ['fn_00100000', 'fn_00100020']
        base, dropped, reasons, _ = objdiff_objects.select_base(ROOT, raw, names, self.output, 'unit',
                                                               known.by_name)
        self.assertEqual((dropped, reasons), ([], {}))
        unresolved = elf_objects.read(base)
        self.assertIn('fn_00100000', unresolved['functions']['fn_00100020']['references'])
        self.assertNotIn(0x100000, branch_targets(unresolved['functions']['fn_00100020']['data'], 0x100020))
        placed, _ = objdiff_objects.place(ROOT, self.output, [base], names, known)
        sections = elf_objects.placed_sections(placed)['sections']
        self.assertEqual(branch_targets(sections['fn_00100020']['data'], 0x100020), [0x100000])
        self.assertEqual(sections['fn_00100000']['data'],
                         unresolved['functions']['fn_00100000']['data'])

    def test_a_function_left_out_of_the_link_still_resolves_its_callers(self):
        definitions = self.compile(CALLS)
        raw = definitions['fn_00100020']['object']
        known = self.split_of(definitions, {'fn_00100000': 0x100000, 'fn_00100020': 0x100020})
        names = ['fn_00100000', 'fn_00100020']
        base, _, _, _ = objdiff_objects.select_base(ROOT, raw, names, self.output, 'unit', known.by_name)
        placed, _ = objdiff_objects.place(ROOT, self.output, [base], ['fn_00100020'], known)
        sections = elf_objects.placed_sections(placed)['sections']
        self.assertNotIn('fn_00100000', sections)
        self.assertEqual(branch_targets(sections['fn_00100020']['data'], 0x100020), [0x100000])

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
