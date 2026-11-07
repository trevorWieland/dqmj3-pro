import json
import subprocess
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_source_wave004 as lane
import squirrel_wave004_boundaries as boundaries
import squirrel_wave004_build as builder
import squirrel_wave004_model as model
import squirrel_wave004_oracle as oracle


class NativeDispatch(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        cls.component = builder.build(ROOT / 'work/squirrel-source-wave004/tests')
        cls.report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave004/report.json').read_text())

    def run_case(self, fields):
        case = {'seed': 0x444800, **fields}
        outcomes = []
        for source in (False, True):
            expected, expected_arena = model.model(case, source)
            actual, trace, arena = oracle.execute(self.image, self.component, case, source)
            self.assertEqual(expected, actual)
            self.assertEqual(expected_arena, arena)
            self.assertFalse(trace['handlerInactiveFieldReads'])
            outcomes.append((actual, trace, arena))
        self.assertEqual(outcomes[0][0]['semanticArenaSha256'], outcomes[1][0]['semanticArenaSha256'])
        return outcomes

    def test_actual_registered_array_runs_through_native_dispatch(self):
        for actual, trace, arena in self.run_case({'handler': 'array', 'weakEnvironment': True, 'oldResultReference': True, 'length': 5}):
            array = model.get(arena, model.RESULT + 4)
            self.assertEqual(model.REF, model.get(arena, model.RESULT))
            self.assertEqual(5, model.get(arena, array + 28))
            self.assertEqual(1, model.get(arena, array + 4))
            self.assertEqual(array, model.get(arena, model.STATE + 68))
            self.assertIn(0x1b33dc, trace['visited'])
            self.assertEqual(1, trace['handlerCalls'])
            self.assertEqual('returned', actual['terminal'])

    def test_release_order_sees_published_result_before_frame_pop(self):
        for actual, trace, arena in self.run_case({'handler': 'array', 'weakEnvironment': True, 'oldResultReference': True}):
            self.assertEqual(2, model.get(arena, model.FIXTURE + 72))
            self.assertEqual(2, model.get(arena, model.FIXTURE + 76 + 16))
            second = model.FIXTURE + 76 + 28
            self.assertEqual(1, model.get(arena, second + 12))
            self.assertEqual(1, model.get(arena, second + 16))
            self.assertEqual(2, model.get(arena, second + 24))

    def test_stack_and_call_frame_growth_preserve_prior_frame_bytes(self):
        for actual, trace, arena in self.run_case({'growStack': True, 'calls': 4, 'outers': 2, 'referenceResult': True}):
            frames = model.get(arena, model.VM + 96)
            self.assertNotEqual(model.FRAMES, frames)
            self.assertEqual(8, model.get(arena, model.VM + 104))
            self.assertEqual(32, model.get(arena, model.VM + 28))
            self.assertEqual(arena[model.FRAMES - model.HEAP:model.FRAMES - model.HEAP + 192],
                             arena[frames - model.HEAP:frames - model.HEAP + 192])
            self.assertEqual(frames + 3 * 48, model.get(arena, model.VM + 132))

    def test_raw_frame_bytes_are_real_differences_not_whole_memory_equality(self):
        observed = self.run_case({'referenceResult': True})
        original, source = observed[0][2], observed[1][2]
        self.assertNotEqual(original, source)
        differences = {index for index, (left, right) in enumerate(zip(original, source)) if left != right}
        allowed = {model.FRAMES - model.HEAP + offset + byte for offset in model.INACTIVE_OFFSETS for byte in range(4)}
        self.assertTrue(differences)
        self.assertLessEqual(differences, allowed)
        for offset in model.INACTIVE_OFFSETS:
            self.assertEqual(0, model.get(source, model.FRAMES + offset))

    def test_varying_dead_stack_does_not_change_admitted_consumers(self):
        rows = self.report['indeterminateFrameSeedControls']
        self.assertEqual(4, len({row['original']['actual']['arenaSha256'] for row in rows}))
        self.assertEqual(1, len({row['source']['actual']['arenaSha256'] for row in rows}))
        self.assertEqual(1, len({row['original']['actual']['semanticArenaSha256'] for row in rows}))

    def test_callback_failure_returns_false_and_restores_active_frame(self):
        for actual, trace, arena in self.run_case({'returnCode': -1, 'calls': 1}):
            self.assertEqual(0, actual['return'])
            self.assertTrue(trace['returned'])
            self.assertEqual(1, model.get(arena, model.VM + 100))
            self.assertEqual(1, model.get(arena, model.VM + 144))
            self.assertEqual(0, arena[model.SUSPEND - model.HEAP])

    def test_suspension_transfers_result_without_leaking_temporary_owner(self):
        for actual, trace, arena in self.run_case({'returnCode': -666, 'referenceResult': True}):
            self.assertEqual(1, actual['return'])
            self.assertEqual(1, arena[model.SUSPEND - model.HEAP])
            self.assertEqual(8, model.get(arena, model.NODES[2] + 4))
            self.assertEqual(7, model.get(arena, model.CLOSURE + 4))

    def test_early_errors_preserve_output_and_suspend(self):
        for fields in ({'nativeDepth': 100}, {'arguments': 1}, {'argumentType': model.NULL}):
            for actual, trace, arena in self.run_case(fields):
                self.assertEqual(0, actual['return'])
                self.assertEqual(1, arena[model.SUSPEND - model.HEAP])
                self.assertEqual(0, trace['handlerCalls'])
                self.assertIsNone(actual['frameAddress'])

    def test_numeric_type_mask_uses_raw_integer_float_bits(self):
        for actual, trace, arena in self.run_case({'argumentType': 0x05000004}):
            self.assertEqual(1, actual['return'])
            self.assertEqual(1, trace['handlerCalls'])
        for actual, trace, arena in self.run_case({'argumentType': model.NULL}):
            self.assertEqual('type-error', actual['services'][0]['operation'])
            self.assertEqual(6, actual['services'][0]['mask'])

    def test_assertion_is_noreturn_with_live_frame_not_success(self):
        for actual, trace, arena in self.run_case({'handler': 'array', 'allocationFails': True}):
            self.assertEqual('assertion', actual['terminal'])
            self.assertIsNone(actual['return'])
            self.assertFalse(trace['returned'])
            self.assertEqual(2, model.get(arena, model.VM + 144))
            self.assertEqual(1, model.get(arena, model.VM + 100))
            self.assertEqual(9, model.get(arena, model.CLOSURE + 4))

    def test_original_initializer_prefix_and_error_encoding_are_measured(self):
        proof = boundaries.verify(ROOT, self.image)
        self.assertEqual(model.NULL, proof['globalNullPrecondition']['type'])
        self.assertTrue(proof['globalNullPrecondition']['prefixExecutionIsPreconditionEvidenceOnly'])
        self.assertEqual(8, proof['errorServiceABI']['formatCodeUnitBits'])
        self.assertTrue(all(not row['wcharTUsed'] for row in proof['errorLiteralEncoding']))

    def test_genuine_returning_semantic_negatives_are_kept_separate(self):
        rows = self.report['negativeControls']
        self.assertEqual(6, len(rows))
        self.assertTrue(all(row['actuallyReturned'] and row['semanticDifferenceDetected'] for row in rows))
        self.assertFalse(self.report['rawWholeMemoryEquivalenceClaimed'])
        self.assertEqual(0, self.report['sourceCodeCreditGranted'])

    def test_host_executables_run_and_android_compilation_is_qualified(self):
        executable = next(row['argv'][0] for row in self.report['platform']['commands']
                          if len(row['argv']) == 1 and row['argv'][0].endswith('native-dispatch.exe'))
        normal = Path(executable.replace('${ROOT}', str(ROOT)))
        wrong = normal.with_name('wrong-dispatch.exe')
        observed = subprocess.run([str(normal)], capture_output=True, timeout=20)
        self.assertEqual(0, observed.returncode)
        self.assertEqual(72, json.loads(observed.stdout)['frameBytes'])
        self.assertEqual(6, subprocess.run([str(wrong)], capture_output=True, timeout=20).returncode)
        self.assertEqual(11, len(self.report['platform']['androidArm64Objects']))
        self.assertFalse(self.report['platform']['androidDeviceExecution'])
        self.assertFalse(self.report['wholeGameBuild'])

    def test_real_link_rejects_missing_frame_dependency(self):
        arguments = [value.replace('${ROOT}', str(ROOT)) for value in self.component['commands'][-1]['argv']]
        arguments = [value for value in arguments if not value.endswith('frame_resize.o')]
        arguments[-1] = str(ROOT / 'work/squirrel-source-wave004/tests/missing-frame.elf')
        result = subprocess.run(arguments, capture_output=True, timeout=30)
        self.assertNotEqual(0, result.returncode)
        self.assertIn(b'fn_0019d408', result.stderr)


if __name__ == '__main__':
    unittest.main()
