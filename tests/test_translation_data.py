"""Tests for translation-unit data placement.

The mechanism is tested at two levels: a real Clang object whose function loads
a static constant table (so the relocation, the section and the link are real),
and a synthetic two-level graph (a descriptor that points at a table) because
the optimiser folds a C descriptor away before it can be observed.
"""

import sys
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import elf_objects
import objdiff_objects
import split as split_module
import translation_data


CLANG = ROOT / 'tools/clang-21/clang.exe'
TEXT = 0x00100000
TEXT_BYTES = 0x1000
RODATA = 0x00200000
RODATA_BYTES = 0x1000
OUTSIDE = 0x00900000


def layout():
    return {'segments': [
        {'name': 'text', 'address': TEXT, 'initializedBytes': TEXT_BYTES, 'codeBinOffset': 0},
        {'name': 'rodata', 'address': RODATA, 'initializedBytes': RODATA_BYTES,
         'codeBinOffset': TEXT_BYTES},
        {'name': 'data', 'address': RODATA + RODATA_BYTES, 'initializedBytes': 0x100,
         'codeBinOffset': TEXT_BYTES + RODATA_BYTES}],
        'bssBytes': 0}


def image_size():
    return TEXT_BYTES + RODATA_BYTES + 0x100


def image_offset(address):
    value = layout()
    for segment in value['segments']:
        if segment['address'] <= address < segment['address'] + segment['initializedBytes']:
            return segment['codeBinOffset'] + address - segment['address']
    raise AssertionError('test address outside the synthetic image')


def word(image, address):
    offset = image_offset(address)
    return int.from_bytes(image[offset:offset + 4], 'little')


def put(image, address, value):
    offset = image_offset(address)
    image[offset:offset + 4] = value.to_bytes(4, 'little')


def row(offset, target, value=0):
    return {'offset': offset, 'type': 2, 'symbol': '', 'target': target, 'value': value,
            'abs': False, 'rela': False, 'addend': None}


SOURCE = '''
static const unsigned table[4] = {1u, 2u, 3u, 4u};
unsigned fn_00100000(unsigned x) { return table[x]; }
'''


@unittest.skipUnless(CLANG.is_file(), 'the pinned compiler is not installed')
class TranslationDataTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory(dir=ROOT / 'work')
        self.addCleanup(directory.cleanup)
        self.output = Path(directory.name)
        source = self.output / 'unit.c'
        source.write_text(SOURCE, encoding='utf-8')
        unit = {'source': source.relative_to(ROOT).as_posix(), 'compilerProfile': 'clang-21'}
        definitions, _ = objdiff_objects.compile_units(ROOT, self.output / 'compiled', [unit])
        self.function = definitions['fn_00100000']
        self.read = elf_objects.read(self.function['object'])
        self.split = split_module.Split(
            [split_module.Symbol('fn_00100000', TEXT, 'arm', self.function['size'])], 'test')
        section = self.read['sections']['.text.fn_00100000']
        self.reference = [item for item in section['rows'] if item['target']][0]
        self.data = self.read['sections'][self.reference['target']]
        self.addend = int.from_bytes(
            section['data'][self.reference['offset']:self.reference['offset'] + 4], 'little')

    def picture(self, table_address):
        """An image in which the function's pool word names this table address."""
        image = bytearray(image_size())
        section = self.read['sections']['.text.fn_00100000']
        image[0:len(section['data'])] = section['data']
        offset = image_offset(RODATA)
        image[offset:offset + len(self.data['data'])] = self.data['data']
        put(image, TEXT + self.reference['offset'], table_address + self.reference['value'] + self.addend)
        return bytes(image)

    def test_a_loaded_table_is_proven_and_placed_at_its_original_address(self):
        plan = translation_data.plan(self.read, ['fn_00100000'], self.split,
                                     layout(), self.picture(RODATA), 'unit')
        self.assertEqual(plan['keep'], [self.reference['target']])
        record = plan['sections'][self.reference['target']]
        self.assertEqual(record['address'], RODATA)
        self.assertEqual(record['kind'], 'data')
        base, dropped, reasons, _ = objdiff_objects.select_base(
            ROOT, self.function['object'], ['fn_00100000'], self.output, 'unit', None,
            [(self.reference['target'], record['name'])])
        self.assertEqual((dropped, reasons), ([], {}))
        placed, _ = objdiff_objects.place(ROOT, self.output, [base], ['fn_00100000'],
                                          self.split, data=[record])
        sections = elf_objects.placed_sections(placed)['sections']
        self.assertEqual(sections[record['name']]['address'], RODATA)
        self.assertEqual(sections[record['name']]['data'], self.data['data'])
        self.assertEqual(word(sections['fn_00100000']['data'], TEXT + self.reference['offset']),
                         RODATA)

    def test_an_address_outside_every_segment_fails_closed(self):
        with self.assertRaisesRegex(ValueError, 'escapes its segment'):
            translation_data.plan(self.read, ['fn_00100000'], self.split,
                                  layout(), self.picture(OUTSIDE), 'unit')

    def test_a_second_level_is_proven_through_the_first(self):
        read = {
            'sections': {
                '.text.fn_00100000': {'kind': 'code', 'size': 8, 'align': 4, 'data': bytes(8),
                                      'rows': [row(0, '.data.desc')]},
                '.data.desc': {'kind': 'data', 'size': 8, 'align': 4,
                               'data': (0).to_bytes(4, 'little') + (4).to_bytes(4, 'little'),
                               'rows': [row(0, '.rodata.table')]},
                '.rodata.table': {'kind': 'data', 'size': 16, 'align': 4, 'data': bytes(16),
                                  'rows': []},
            },
            'functions': {'fn_00100000': {'offset': 0}},
        }
        image = bytearray(image_size())
        put(image, TEXT, RODATA)            # the function's word names the descriptor
        put(image, RODATA, RODATA + 0x10)   # the descriptor's word names the table
        plan = translation_data.plan(read, ['fn_00100000'], self.split, layout(), bytes(image), 'unit')
        self.assertEqual(sorted(plan['keep']), ['.data.desc', '.rodata.table'])
        self.assertEqual(plan['sections']['.data.desc']['address'], RODATA)
        self.assertEqual(plan['sections']['.rodata.table']['address'], RODATA + 0x10)
        self.assertEqual(plan['needed']['fn_00100000'], ['.data.desc', '.rodata.table'])

    def test_two_references_that_disagree_are_an_error(self):
        read = {
            'sections': {
                '.text.fn_00100000': {'kind': 'code', 'size': 8, 'align': 4, 'data': bytes(8),
                                      'rows': [row(0, '.rodata.table'), row(4, '.rodata.table')]},
                '.rodata.table': {'kind': 'data', 'size': 16, 'align': 4, 'data': bytes(16),
                                  'rows': []},
            },
            'functions': {'fn_00100000': {'offset': 0}},
        }
        image = bytearray(image_size())
        put(image, TEXT, RODATA)
        put(image, TEXT + 4, RODATA + 0x10)
        with self.assertRaisesRegex(ValueError, 'disagree'):
            translation_data.plan(read, ['fn_00100000'], self.split, layout(), bytes(image), 'unit')


if __name__ == '__main__':
    unittest.main()
