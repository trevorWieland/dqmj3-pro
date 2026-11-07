import copy
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_source_wave006 as lane
import squirrel_wave006_boundaries as boundaries
import squirrel_wave006_build as builder
import squirrel_wave006_cases as cases
import squirrel_wave006_model as model
import squirrel_wave006_oracle as oracle
import squirrel_wave006_fpscr as fpscr
from squirrel_wave006_programs import encode, instruction as op


class ExecuteReconstruction(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        cls.output = ROOT / 'work/squirrel-source-wave006/unit-tests'
        cls.component = builder.build(cls.output / 'normal')

    def compare(self, fields):
        return lane.verify_case(self.image, self.component, {'seed': 0x666001, **fields})

    def test_instruction_encoding_and_frame_bounds(self):
        encoded = encode([op('LOADINT', 1, -7), op('RETURN', 1, 1)])
        self.assertEqual(encoded[:8], bytes.fromhex('f9ffffff02010000'))
        for rows in ([op('MOVE', 1, 99)], [op('JUMP', 0, 99)], [op('PUSHTRAP', 1, -2)],
                     [op('CALL', 255, 1, 2, 2)], [op('LOADNULLS', 7, 2)]):
            with self.subTest(rows=rows), self.assertRaises(ValueError): encode(rows)

    def test_module_and_complete_boundary_seal(self):
        proof = boundaries.verify(ROOT, self.image)
        self.assertEqual((proof['instructionBytes'], proof['classifiedDataBytes']), (13184, 628))
        self.assertFalse(proof['wholeRootComplete'])
        changed = bytearray(self.image)
        changed[0x8d65c] ^= 1
        with self.assertRaises(ValueError): boundaries.verify(ROOT, bytes(changed))

    def test_real_source_script_native_array_chain(self):
        row = self.compare({'mode': 0, 'nativeArray': True,
            'program': [op('LOAD', 1, 0), op('CALL', 4, 1, 2, 1), op('RETURN', 1, 4)],
            'childProgram': [op('LOAD', 1, 0), op('LOADINT', 3, 5), op('CALL', 4, 1, 2, 2), op('RETURN', 1, 4)]})
        self.assertTrue(row['semanticStateEquivalent'])
        self.assertEqual(row['source']['trace']['handlerCalls'], 1)
        self.assertGreater(len(row['source']['actual']['executedInstructions']), 6)

    def test_caught_child_throw_restores_real_parent_frame(self):
        row = self.compare({'oldReference': True, 'probeRegister': 4,
            'childProgram': [op('LOAD', 1, 1), op('THROW', 1)],
            'program': [op('PUSHTRAP', 4, 3), op('LOAD', 1, 0), op('CALL', 4, 1, 2, 1), op('POPTRAP', 1), op('RETURN', 1, 4)]})
        self.assertEqual(row['original']['actual']['return'], 1)
        self.assertTrue(row['rawWholeHeapEqual'])

    def test_arithmetic_overflow_and_division_error(self):
        for a, b in ((-2147483648, -1), (-7, 3), (7, 0)):
            row = self.compare({'program': [op('LOADINT', 1, a), op('LOADINT', 2, b),
                                          op('ARITH', 3, 2, 1, ord('/')), op('RETURN', 1, 3)]})
            self.assertEqual(row['source']['actual']['return'], int(bool(b)))

    def test_source_unsupported_is_terminal_not_success(self):
        case = {'seed': 0x666002, 'program': [op(54), op('RETURN', 255)]}
        actual, trace, unused, unused = oracle.execute(self.image, self.component, case, True)
        self.assertEqual(actual['terminal'], 'unsupported')
        self.assertIsNone(actual['return'])
        self.assertFalse(trace['returned'])

    def test_rejects_unimplemented_entry_mode(self):
        with self.assertRaises(ValueError): model.prepare({'seed': 1, 'mode': 1})

    def test_real_type_names_include_flags_and_unknown_tag(self):
        rows = oracle.type_name_cases(self.image, self.component)
        self.assertEqual(len(rows), 60)
        self.assertTrue(all(row['originalReturned'] and row['sourceReturned'] and row['sourceMatchesOriginal'] for row in rows))
        self.assertEqual(sum(row['name'] is None for row in rows), 9)

    def test_control_masks_and_known_callers_are_scoped(self):
        import json
        census = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())
        report = fpscr.audit(self.image, census, self.component, oracle.ORIGINAL_RANGES, oracle.EXECUTE_RANGES)
        self.assertEqual({row['address'] for row in report['knownDirectCallers']}, {0x17ffac, 0x743584})
        self.assertFalse(report['indirectOrTransitiveCallerCompletenessClaimed'])
        self.assertEqual(sum(fpscr.CONTROL_FIELDS.values()), 0x07f79f00)

    def test_real_compiled_full_status_reader_is_not_a_condition_read(self):
        import io
        from elftools.elf.elffile import ELFFile
        probe = self.output / 'fpscr-reader.c'
        probe.write_text('unsigned fpscr_reader(void) { return __builtin_arm_get_fpscr(); }\n')
        obj = self.output / 'fpscr-reader.o'
        lane.prior.command([ROOT / 'tools/clang-21/clang.exe', *lane.prior.FLAGS, '-mfpu=vfp', '-mfloat-abi=softfp',
                            '-c', probe, '-o', obj], self.output / 'fpscr-reader.log')
        elf = ELFFile(io.BytesIO(obj.read_bytes()))
        text = elf.get_section_by_name('.text.fpscr_reader').data()
        rows = fpscr.scan(bytes(256) + text, [(0x100100, 0x100100 + len(text))])
        self.assertEqual([row['access'] for row in rows], ['full-status-read'])

    def test_script_loop_computes_native_array_length(self):
        fields = cases.comparison_cases()[-1]
        row = self.compare(fields)
        self.assertEqual(row['source']['actual']['return'], 1)
        self.assertEqual(row['source']['trace']['handlerCalls'], 1)
        self.assertGreater(len(row['source']['actual']['executedInstructions']), 20)

    def test_array_growth_has_an_observable_reference_lifetime(self):
        fields = cases.negative_inputs()['late-append-retain']
        self.compare(fields)
        case = {'seed': 0x666005, **fields}
        correct, trace, unused, unused = oracle.execute(self.image, self.component, case, True)
        wrong = builder.build(self.output / 'late-append-retain', 'late-append-retain')
        actual, wrong_trace, unused, unused = oracle.execute(self.image, wrong, case, True)
        self.assertTrue(wrong_trace['returned'])
        self.assertEqual(actual, correct)
        self.assertNotEqual(wrong_trace['allocationObservations'], trace['allocationObservations'])

    def test_failed_array_allocation_cannot_enter_normal_return_count(self):
        case = {'seed': 0x666006, 'allocationFails': True, 'program': [op('NEWARRAY', 1), op('RETURN', 1, 1)]}
        with self.assertRaises(ValueError): lane.verify_case(self.image, self.component, case)
        row = lane.verify_case(self.image, self.component, case, True)
        self.assertEqual(row['source']['actual']['terminal'], 'assertion')
        self.assertFalse(row['original']['trace']['returned'])

    def test_constructed_captured_closure_executes_as_source(self):
        row = self.compare(next(case for case in cases.closure_cases() if any(entry['opcode'] == 32 for entry in case['program'])))
        self.assertEqual(row['source']['actual']['return'], 1)
        self.assertTrue(row['rawWholeHeapEqual'])
        self.assertIn(48, [entry['opcode'] for entry in row['source']['actual']['executedInstructions']])
        self.assertGreater(len(row['source']['actual']['executedInstructions']), 8)

    def test_final_closure_release_is_source_and_ordered(self):
        fields = cases.negative_inputs()['wrong-closure-destruction-order']
        row = self.compare(fields)
        frees = [service for service in row['source']['actual']['services'] if service['operation'] == 'deallocate']
        self.assertEqual([service['bytes'] for service in frees], [16, 8, 64])
        wrong = builder.build(self.output / 'wrong-closure-destruction-order', 'wrong-closure-destruction-order')
        case = {'seed': 0x666007, **fields}
        actual, trace, unused, unused = oracle.execute(self.image, wrong, case, True)
        expected, unused = model.model(case, True)
        self.assertTrue(trace['returned'])
        self.assertEqual(actual['arenaSha256'], expected['arenaSha256'])
        self.assertNotEqual(actual['services'], expected['services'])

    def test_array_lookup_prepares_a_real_native_call(self):
        row = self.compare(next(case for case in cases.indexed_cases() if case.get('nativeArray')))
        self.assertEqual(row['source']['actual']['return'], 1)
        self.assertEqual(row['source']['trace']['handlerCalls'], 1)
        self.compare(cases.indexed_cases()[-1])

    def test_table_growth_and_named_capture_are_source(self):
        self.compare(cases.table_cases()[4])
        fields = next(case for case in cases.table_cases() if case.get('createClosure'))
        row = self.compare(fields)
        self.assertEqual(row['source']['actual']['return'], 1)
        self.assertTrue(any(service['operation'] == 'allocate' and service['bytes'] == 80
                            for service in row['source']['actual']['services']))

    def test_signed_local_updates_and_exists_execute(self):
        self.compare(cases.local_cases()[31])
        self.compare(cases.local_cases()[47])
        self.compare(cases.local_cases()[-1])
        wrong = builder.build(self.output / 'unsigned-local-increment', 'unsigned-local-increment')
        case = {'seed': 0x666008, **cases.negative_inputs()['unsigned-local-increment']}
        actual, trace, unused, unused = oracle.execute(self.image, wrong, case, True)
        expected, unused = model.model(case, True)
        self.assertTrue(trace['returned'])
        self.assertNotEqual(actual, expected)

    def test_set_replaces_real_array_and_table_values(self):
        for fields in (cases.setter_cases()[0], cases.setter_cases()[9]): self.compare(fields)
        wrong = builder.build(self.output / 'wrong-set-value', 'wrong-set-value')
        case = {'seed': 0x666009, **cases.negative_inputs()['wrong-set-value']}
        actual, trace, unused, unused = oracle.execute(self.image, wrong, case, True)
        expected, unused = model.model(case, True)
        self.assertTrue(trace['returned'])
        self.assertNotEqual(actual, expected)

    def test_table_finalization_order_has_a_returning_counterfactual(self):
        self.compare(cases.table_release_cases()[-1])
        wrong = builder.build(self.output / 'wrong-table-destruction-order', 'wrong-table-destruction-order')
        case = {'seed': 0x666010, **cases.negative_inputs()['wrong-table-destruction-order']}
        actual, trace, unused, unused = oracle.execute(self.image, wrong, case, True)
        expected, unused = model.model(case, True)
        self.assertTrue(trace['returned'])
        self.assertEqual(actual['arenaSha256'], expected['arenaSha256'])
        self.assertNotEqual(actual['services'], expected['services'])

    def test_delegated_access_and_cycles_use_source(self):
        for fields in cases.delegate_cases()[:9]: self.compare(fields)
        wrong = builder.build(self.output / 'accepted-delegate-cycle', 'accepted-delegate-cycle')
        case = {'seed': 0x666011, **cases.negative_inputs()['accepted-delegate-cycle']}
        actual, trace, unused, unused = oracle.execute(self.image, wrong, case, True)
        expected, unused = model.model(case, True)
        self.assertTrue(trace['returned'])
        self.assertNotEqual(actual, expected)

    def test_array_table_and_closure_key_iteration(self):
        for fields in (cases.iteration_cases()[6], cases.iteration_cases()[-1], cases.iteration_cases()[-2]): self.compare(fields)
        wrong = builder.build(self.output / 'skip-foreach-element', 'skip-foreach-element')
        case = {'seed': 0x666012, **cases.negative_inputs()['skip-foreach-element']}
        actual, trace, unused, unused = oracle.execute(self.image, wrong, case, True)
        expected, unused = model.model(case, True)
        self.assertTrue(trace['returned'])
        self.assertNotEqual(actual, expected)

    def test_compiled_wrong_trap_handler_really_returns_and_differs(self):
        wrong = builder.build(self.output / 'wrong-trap-handler', 'wrong-trap-handler')
        case = {'seed': 0x666003, **cases.negative_inputs()['wrong-trap-handler']}
        actual, trace, unused, unused = oracle.execute(self.image, wrong, case, True)
        expected, unused = model.model(case, True)
        self.assertTrue(trace['returned'])
        self.assertNotEqual(actual, expected)

    def test_forged_source_section_escape_is_rejected(self):
        bad = copy.deepcopy(self.component)
        section = next(row for row in bad['sections'] if row['address'] == 0x18d65c)
        section['data'] = bytes.fromhex('000000ea')
        with self.assertRaises((ValueError, oracle.unicorn.UcError)):
            lane.verify_case(self.image, bad, {'seed': 0x666004})


if __name__ == '__main__': unittest.main()
