import json
import subprocess
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_source_wave003 as lane
import squirrel_wave003_oracle as oracle
import squirrel_wave003_platform as platform_tools


class ArrayBuiltinControllerTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.platform = platform_tools.build(ROOT, ROOT / 'source/squirrel-wave003',
                                             ROOT / 'work/squirrel-source-wave003/test-platform')
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if lane.prior.sha(cls.image) != lane.prior.MODULE_SHA:
            raise RuntimeError('Original update changed')
        cls.component = lane.build(ROOT / 'work/squirrel-source-wave003/test-component')

    def check(self, case):
        result = lane.verify_case(self.image, self.component, case)
        self.assertTrue(result['passed'], json.dumps(result))
        return result

    def test_release_observes_published_result_incoming_ownership_and_advanced_top(self):
        case = {'count': 3, 'base': 2, 'length': 7, 'referenceFill': True,
                'oldResultReference': True, 'chainLength': 2, 'seed': 3361}
        result = self.check(case)
        self.assertTrue(result['sourceTrace']['returned'])
        self.assertEqual(result['sourceTrace']['callbacks'], 1)
        expected, arena = oracle.model(case, oracle.prepare(case))
        self.assertEqual(oracle.get(arena, oracle.OBSERVATION + 8), 6)
        self.assertEqual(oracle.get(arena, oracle.OBSERVATION + 12), oracle.REF)
        self.assertEqual(oracle.get(arena, oracle.OBSERVATION + 16), 2)
        destination = oracle.SLOTS + 5 * 8
        array = oracle.get(arena, destination + 4)
        self.assertEqual(oracle.get(arena, array + 4), 1)
        self.assertEqual(oracle.get(arena, oracle.NODES[2] + 4), 14)

    def test_negative_base_and_fractional_length_preserve_stack_namespace(self):
        result = self.check({'count': 3, 'base': -2, 'length': 5.75, 'floating': True,
                             'referenceFill': True, 'seed': 3362})
        self.assertTrue(result['sourceTrace']['returned'])
        self.assertEqual(result['expected']['services'], [{'operation': 'allocate', 'bytes': 36},
                                                        {'operation': 'reallocate', 'oldBytes': 0, 'newBytes': 40}])

    def test_default_arity_constructs_null_values_with_no_fill_owner_change(self):
        case = {'count': 2, 'base': 4, 'length': 9, 'seed': 3363}
        self.check(case)
        expected, arena = oracle.model(case, oracle.prepare(case))
        array = oracle.get(arena, oracle.SLOTS + 6 * 8 + 4)
        values = oracle.get(arena, array + 24)
        self.assertTrue(all(oracle.get(arena, values + index * 8) == oracle.NULL for index in range(9)))
        self.assertEqual(oracle.get(arena, oracle.NODES[2] + 4), 7)

    def test_extra_arguments_do_not_change_first_fill_argument(self):
        result = self.check({'count': 5, 'base': 1, 'length': 4, 'referenceFill': True, 'seed': 3364})
        self.assertTrue(result['sourceTrace']['returned'])

    def test_default_allocation_failure_is_noreturn_assertion_not_success(self):
        result = self.check({'count': 2, 'base': 0, 'length': 5, 'allocationFails': True, 'seed': 3365})
        self.assertFalse(result['originalTrace']['returned'])
        self.assertFalse(result['sourceTrace']['returned'])
        self.assertEqual(result['source']['terminal'], 'assertion')
        self.assertEqual(result['source']['assertion'], {'condition': 0, 'type': oracle.REF, 'value': 0})

    def test_fill_allocation_failure_is_explicitly_excluded_fault(self):
        result = self.check({'count': 3, 'base': 0, 'length': 5, 'allocationFails': True, 'seed': 3366})
        self.assertFalse(result['sourceTrace']['returned'])
        self.assertEqual(result['source']['terminal'], 'unsupported-memory-fault')

    def test_nonfinite_and_oversized_lengths_are_outside_the_proof_domain(self):
        for value in (float('nan'), float('inf'), -1, 33):
            with self.subTest(value=value):
                with self.assertRaises(ValueError):
                    oracle.prepare({'count': 2, 'base': 0, 'length': value, 'seed': 3367})

    def test_actual_host_controller_normal_and_assertion_programs_execute(self):
        platform = self.platform
        commands = [row['argv'] for row in platform['commands'] if len(row['argv']) == 1 and 'wrong-controller' not in row['argv'][0]]
        self.assertEqual(len(commands), 2)
        for command, expected in zip(commands, (0, 37)):
            executable = Path(command[0].replace('${ROOT}', str(ROOT))).resolve()
            self.assertTrue(executable.is_relative_to(ROOT / 'work/squirrel-source-wave003'))
            result = subprocess.run([str(executable)], capture_output=True, timeout=30)
            self.assertEqual(result.returncode, expected)
        self.assertEqual(platform['windowsObservations'][0]['publicationReferences'], 2)
        self.assertEqual(platform['wrongOwnershipExitCode'], 3)

    def test_android_objects_do_not_become_a_device_or_game_claim(self):
        report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave003/report.json').read_text())
        self.assertEqual(len(self.platform['androidArm64Objects']), 7)
        self.assertFalse(self.platform['androidExecution'])
        self.assertFalse(report['wholeGameBuild'])

    def test_real_link_rejects_missing_assignment_dependency(self):
        output = ROOT / 'work/squirrel-source-wave003/missing-assignment'
        output.mkdir(parents=True, exist_ok=True)
        command = [argument.replace('${ROOT}', str(ROOT)) for argument in self.component['commands'][-1]['argv']]
        command = [argument for argument in command if not argument.endswith('object.o')]
        command[-1] = str(output / 'missing-assignment.elf')
        result = subprocess.run(command, capture_output=True, timeout=60)
        (output / 'link.log').write_bytes(result.stdout + result.stderr)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn(b'fn_0019e864', result.stderr)

    def test_published_packet_does_not_promote_unmatched_controller_or_dependencies(self):
        report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave003/report.json').read_text())
        self.assertEqual(report['originalInstructionBytes'], 340)
        self.assertEqual(report['originalPoolBytes'], 8)
        self.assertFalse(report['exactCompleteInstructionAndPoolMatch'])
        self.assertEqual(report['sourceCodeCreditGranted'], 0)
        self.assertTrue(all(row['actuallyReturned'] and row['semanticDifferenceDetected'] for row in report['negativeControls']))
        self.assertFalse(report['independentCommittedReplay'])


if __name__ == '__main__':
    unittest.main()
