import importlib.util
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('finalize_module', ROOT / 'toolscripts/finalize_objdiff_report.py')
FINALIZE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(FINALIZE)


def unit(name='src/native/wave001/leaves', source='src/native/wave001/leaves.c', code=12, data=0,
         functions=None, matched=(), relocated=(), sections=None):
    functions = functions or {'fn_00100000': 8, 'fn_00100004': 4}
    sections = sections or [{'address': address, 'size': size, 'kind': 'code'}
                            for address, size in ((0x100000, 8), (0x100004, 4))]
    return {'name': name, 'source_path': source, 'code': code, 'data': data,
            'functions': {key: {'size': size} for key, size in functions.items()},
            'matched': set(matched), 'relocated': set(relocated), 'sections': sections,
            'aligned_code': FINALIZE.aligned(sections), 'aligned_data': data,
            'section_names': {'.text.original_%08x' % row['address'] for row in sections}}


def cli_unit(name, functions, sections, metadata):
    return {'name': name, 'metadata': metadata,
            'functions': [{'name': key, 'size': str(size), 'fuzzy_match_percent': percent}
                          for key, size, percent in functions],
            'sections': [{'name': section, 'size': str(size), 'fuzzy_match_percent': 0.0}
                         for section, size in sections],
            'measures': {'total_code': str(sum(size for _, size, _ in functions)), 'matched_code': '8',
                         'matched_functions': 1, 'total_functions': len(functions),
                         'total_data': '0', 'total_units': 1}}


class NormalisationTests(unittest.TestCase):
    def report(self, functions, sections):
        unit_row = cli_unit('src/native/wave001/leaves', functions, sections,
                            {'source_path': 'src/native/wave001/leaves.c', 'complete': False})
        return {'version': 2, 'units': [unit_row],
                'measures': dict(unit_row['measures'])}

    def test_byte_identical_functions_are_the_only_credit(self):
        units = {'src/native/wave001/leaves': unit(matched={'fn_00100000'})}
        report = self.report([('fn_00100000', 8, 100.0), ('fn_00100004', 4, 42.0)],
                             [('.text.original_00100000', 8), ('.text.original_00100004', 4)])
        result = FINALIZE.normalize(report, units, {'fn_00100000'}, 8)
        self.assertEqual(result['measures']['total_code'], '12')
        self.assertEqual(result['measures']['matched_code'], '8')
        self.assertEqual(result['measures']['matched_functions'], 1)
        self.assertEqual(result['measures']['matched_code_percent'], 8 * 100 / 12)
        self.assertEqual([row['fuzzy_match_percent'] for row in result['units'][0]['functions']], [100.0, 0.0])
        self.assertEqual(result['units'][0]['functions'][0]['metadata']['virtual_address'], str(0x100000))

    def test_withheld_credit_for_byte_identical_bytes_is_refused(self):
        units = {'src/native/wave001/leaves': unit(matched={'fn_00100000'})}
        report = self.report([('fn_00100000', 8, 0.0), ('fn_00100004', 4, 0.0)],
                             [('.text.original_00100000', 8), ('.text.original_00100004', 4)])
        with self.assertRaisesRegex(ValueError, 'withheld credit'):
            FINALIZE.normalize(report, units, {'fn_00100000'}, 8)

    def test_credit_without_byte_equality_needs_relocations(self):
        units = {'src/native/wave001/leaves': unit(matched=set())}
        report = self.report([('fn_00100000', 8, 100.0), ('fn_00100004', 4, 0.0)],
                             [('.text.original_00100000', 8), ('.text.original_00100004', 4)])
        with self.assertRaisesRegex(ValueError, 'without byte equality'):
            FINALIZE.normalize(report, units, set(), 0)
        units['src/native/wave001/leaves']['relocated'] = {'fn_00100000'}
        result = FINALIZE.normalize(report, units, set(), 0)
        self.assertEqual(result['measures']['matched_code'], '8')

    def test_section_accounting_must_match_the_objects(self):
        units = {'src/native/wave001/leaves': unit(matched={'fn_00100000'})}
        report = self.report([('fn_00100000', 8, 100.0), ('fn_00100004', 4, 0.0)],
                             [('.text.original_00100000', 16)])
        with self.assertRaisesRegex(ValueError, 'section accounting'):
            FINALIZE.normalize(report, units, {'fn_00100000'}, 8)

    def test_unknown_units_are_refused(self):
        units = {'src/native/wave001/leaves': unit(matched={'fn_00100000'})}
        report = self.report([('fn_00100000', 8, 100.0), ('fn_00100004', 4, 0.0)],
                             [('.text.original_00100000', 8), ('.text.original_00100004', 4)])
        with self.assertRaisesRegex(ValueError, 'omits or duplicates'):
            FINALIZE.normalize(report, {}, set(), 0)

    def test_objdiff_aligns_merged_section_extents(self):
        rows = [{'size': 6}, {'size': 10}, {'size': 3}]
        self.assertEqual(FINALIZE.aligned(rows), 8 + 12 + 4)


class ArithmeticTests(unittest.TestCase):
    def test_counter_encoding_is_strict(self):
        self.assertEqual(FINALIZE.number('0'), 0)
        self.assertEqual(FINALIZE.number(7), 7)
        for value in ('007', '-1', 1.5, True, None):
            with self.assertRaises(ValueError):
                FINALIZE.number(value)

    def test_percentages_are_derived_from_the_counters(self):
        values = dict.fromkeys(FINALIZE.COUNTS, 0)
        values.update({'total_code': 200, 'matched_code': 50, 'total_functions': 4, 'matched_functions': 1})
        result = FINALIZE.measures(values, 25.0)
        self.assertEqual(result['matched_code'], '50')
        self.assertEqual(result['matched_code_percent'], 25.0)
        self.assertEqual(result['matched_functions_percent'], 25.0)

    def test_partition_requires_exact_coverage(self):
        FINALIZE.partition([{'address': 8, 'size': 4}, {'address': 4, 'size': 4}], 4, 8)
        with self.assertRaisesRegex(ValueError, 'gap or overlap'):
            FINALIZE.partition([{'address': 4, 'size': 4}, {'address': 6, 'size': 4}], 4, 8)
        with self.assertRaisesRegex(ValueError, 'do not cover'):
            FINALIZE.partition([{'address': 4, 'size': 4}], 4, 8)


if __name__ == '__main__':
    unittest.main()
