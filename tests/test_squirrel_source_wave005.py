import json
import subprocess
import sys
import unittest
from pathlib import Path

import unicorn
from unicorn import arm_const as arm

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_wave005_build as builder
import squirrel_wave005_model as model
import squirrel_wave005_oracle as oracle
import squirrel_wave005_execute_inventory as execute_inventory
import squirrel_wave005_platform as platform_tools


class GenericDispatch(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        cls.component = builder.build(ROOT / 'work/squirrel-source-wave005/tests')
        cls.platform = platform_tools.build(ROOT, ROOT / 'source/squirrel-wave005',
                                             ROOT / 'work/squirrel-source-wave005/test-platform')
        cls.report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave005/report.json').read_text())
        cls.census = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())

    def run_case(self, fields):
        case = {'seed': 0x555800, **fields}
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

    def test_generic_native_path_reaches_real_array_source_dependencies(self):
        for actual, trace, arena in self.run_case({'handler': 'array', 'length': 5, 'growStack': True, 'calls': 4}):
            self.assertTrue({0x17ffac, 0x196f6c, 0x1b33dc, 0x665a44} <= set(trace['visited']))
            array = model.get(arena, model.RESULT + 4)
            self.assertEqual(1, model.get(arena, array + 4))
            self.assertEqual(5, model.get(arena, array + 28))
            self.assertEqual(0, model.get(arena, model.EXTRA + 28))
            self.assertEqual(0, model.get(arena, model.EXTRA + 32))

    def test_raw_sqbool_patterns_reach_execute_service_unchanged(self):
        for flags in (0, 1, 0x80000000, 0x7fc12345, 0xffffffff):
            for actual, trace, arena in self.run_case({'kind': 'script', 'raiseError': flags}):
                self.assertEqual(flags, model.get(arena, model.EXTRA + 48))
                self.assertEqual(8, model.get(arena, model.EXTRA + 36))
                self.assertEqual(1, model.get(arena, model.EXTRA + 76))

    def test_recursive_script_constructor_retains_raw_flags_and_discards_return(self):
        for actual, trace, arena in self.run_case({'kind': 'class', 'constructor': 'script', 'raiseError': 0x80000001,
                                                  'referenceResult': True, 'returnedReferences': 0}):
            self.assertEqual(0x80000001, model.get(arena, model.EXTRA + 48))
            self.assertEqual(0, model.get(arena, model.EXTRA + 76))
            self.assertEqual(model.INSTANCE, model.get(arena, model.RESULT + 4))
            self.assertEqual(2, model.get(arena, model.INSTANCE + 4))
            self.assertEqual(0, model.get(arena, model.NODES[2] + 4))
            self.assertEqual(1, model.get(arena, model.FIXTURE + 72))

    def test_native_constructor_owns_closure_until_nested_frame_cleanup(self):
        for actual, trace, arena in self.run_case({'kind': 'class', 'referenceResult': True, 'returnedReferences': 0}):
            self.assertEqual(10, model.get(arena, model.FIXTURE + 40))
            self.assertEqual(7, model.get(arena, model.CLOSURE + 4))
            self.assertEqual(model.INSTANCE_TAG, model.get(arena, model.FIXTURE + 56))
            self.assertEqual(0, model.get(arena, model.NODES[2] + 4))
            event = model.FIXTURE + 76
            self.assertEqual(0, model.get(arena, event + 12))
            self.assertEqual(1, model.get(arena, event + 16))
            self.assertEqual(2, model.get(arena, event + 24))

    def test_constructor_failure_keeps_constructed_instance_and_receiver(self):
        for constructor, fields in (('invalid', {}), ('native', {'returnCode': -1}), ('script', {'executeSuccess': 0})):
            for actual, trace, arena in self.run_case({'kind': 'class', 'constructor': constructor, **fields}):
                self.assertEqual(0, actual['return'])
                self.assertTrue(trace['returned'])
                self.assertEqual(model.INSTANCE, model.get(arena, model.RESULT + 4))
                self.assertEqual(model.INSTANCE, model.get(arena, model.SLOTS + 5 * 8 + 4))

    def test_class_without_constructor_does_not_replace_receiver(self):
        for actual, trace, arena in self.run_case({'kind': 'class', 'constructor': 'none'}):
            self.assertEqual(1, actual['return'])
            self.assertEqual(1, model.get(arena, model.INSTANCE + 4))
            self.assertEqual(model.INTEGER, model.get(arena, model.SLOTS + 5 * 8))
            self.assertEqual(0, trace['handlerCalls'])

    def test_noncallable_returns_false_without_heap_changes(self):
        case = {'seed': 0x555800, 'kind': 'invalid'}
        for actual, trace, arena in self.run_case({'kind': 'invalid'}):
            self.assertEqual(0, actual['return'])
            self.assertEqual(model.prepare(case), arena)
            self.assertEqual(0, trace['handlerCalls'])

    def test_registered_array_allocation_assertion_is_not_a_return(self):
        for actual, trace, arena in self.run_case({'handler': 'array', 'allocationFails': True}):
            self.assertEqual('assertion', actual['terminal'])
            self.assertIsNone(actual['return'])
            self.assertFalse(trace['returned'])
            self.assertEqual(1, model.get(arena, model.VM + 100))

    def test_indeterminate_native_frames_have_explicit_semantic_scope(self):
        rows = self.report['indeterminateFrameSeedControls']
        self.assertEqual(4, len({row['original']['actual']['arenaSha256'] for row in rows}))
        self.assertEqual(1, len({row['source']['actual']['arenaSha256'] for row in rows}))
        self.assertTrue(all(row['allRawDifferencesConfinedToIndeterminateFields'] for row in rows))
        self.assertFalse(self.report['rawWholeMemoryEquivalenceClaimed'])

    def test_original_vfp_disabled_is_an_excluded_precondition(self):
        machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
        machine.ctl_set_cpu_model(arm.UC_CPU_ARM_1176)
        machine.mem_map(0x100000, 0x800000)
        machine.mem_write(0x100000, self.image)
        machine.mem_map(0x1100000, 0x10000)
        machine.reg_write(arm.UC_ARM_REG_SP, 0x110ff00)
        machine.reg_write(arm.UC_ARM_REG_C1_C0_2, 0)
        machine.reg_write(arm.UC_ARM_REG_FPEXC, 0)
        with self.assertRaises(unicorn.UcError):
            machine.emu_start(0x17ffac, 0x17ffc0, count=6)

    def test_execute_inventory_classifies_data_without_source_credit(self):
        report = execute_inventory.inventory(self.image, self.census)
        self.assertEqual(8, len(report['instructionRanges']))
        self.assertEqual(13184, report['instructionBytes'])
        self.assertEqual(628, report['classifiedDataBytes'])
        self.assertEqual(0, report['unclassifiedDataBytes'])
        self.assertEqual([61, 7], [row['entries'] for row in report['dataRanges'] if row['kind'] == 'bounded-pointer-dispatch-table'])
        self.assertFalse(report['wholeFunctionSourceReconstructed'])
        self.assertEqual(0, report['sourceCodeCreditGranted'])

    def test_execute_table_guard_and_padding_tampering_fail(self):
        changed = bytearray(self.image)
        changed[0x18d8b0 - 0x100000] ^= 1
        with self.assertRaisesRegex(ValueError, 'guard'):
            execute_inventory.inventory(changed, self.census)
        report = execute_inventory.inventory(self.image, self.census)
        padding = next(row['start'] for row in report['dataRanges'] if row['kind'] == 'zero-alignment-padding')
        changed = bytearray(self.image)
        changed[padding - 0x100000] = 1
        with self.assertRaisesRegex(ValueError, 'Unclassified'):
            execute_inventory.inventory(changed, self.census)

    def test_missing_real_native_dependency_makes_the_link_fail(self):
        arguments = [value.replace('${ROOT}', str(ROOT)) for value in self.component['commands'][-1]['argv']]
        arguments = [value for value in arguments if not value.endswith('native_call.o')]
        arguments[-1] = str(ROOT / 'work/squirrel-source-wave005/tests/missing-native.elf')
        result = subprocess.run(arguments, capture_output=True, timeout=30)
        self.assertNotEqual(0, result.returncode)
        self.assertIn(b'fn_00196f6c', result.stderr)

    def test_platform_execution_and_qualified_android_objects(self):
        executable = next(row['argv'][0] for row in self.platform['commands']
                          if len(row['argv']) == 1 and row['argv'][0].endswith('native-dispatch.exe'))
        normal = Path(executable.replace('${ROOT}', str(ROOT)))
        observed = subprocess.run([str(normal)], capture_output=True, timeout=20)
        self.assertEqual(0, observed.returncode)
        self.assertEqual(12, json.loads(observed.stdout)['cases'])
        wrong = subprocess.run([str(normal.with_name('wrong-dispatch.exe'))], capture_output=True, timeout=20)
        self.assertEqual(5, wrong.returncode)
        self.assertEqual(13, len(self.platform['androidArm64Objects']))
        self.assertFalse(self.platform['androidDeviceExecution'])
        self.assertFalse(self.report['scriptBytecodeExecutionClaimed'])
        self.assertFalse(self.report['wholeGameBuild'])

    def test_returning_negative_controls_and_no_credit_promotion(self):
        rows = self.report['negativeControls']
        self.assertEqual(6, len(rows))
        self.assertTrue(all(row['actuallyReturned'] and row['semanticDifferenceDetected'] for row in rows))
        self.assertEqual(0, self.report['sourceCodeCreditGranted'])
        with self.assertRaisesRegex(ValueError, 'destructor'):
            model.prepare({'seed': 1, 'kind': 'class', 'handler': 'array'})


if __name__ == '__main__':
    unittest.main()
