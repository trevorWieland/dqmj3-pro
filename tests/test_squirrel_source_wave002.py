import json
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_source_wave002 as lane
import squirrel_wave002_oracle as oracle


class ArrayLifecycleTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if lane.sha(cls.image) != lane.MODULE_SHA:
            raise RuntimeError('Original update identity differs')
        cls.component = lane.build(ROOT / 'work/squirrel-source-wave002/test-component')

    def check_case(self, case):
        result = lane.verify_case(self.image, self.component, case)
        self.assertTrue(result['passed'], json.dumps(result))
        self.assertTrue(result['originalTrace']['returned'])
        self.assertTrue(result['sourceTrace']['returned'])
        self.assertTrue(result['sourceTrace']['sourceOnlyOwnedCodeExecuted'])
        return result

    def test_shrink_releases_last_owned_references_before_size_publication(self):
        result = self.check_case({'root': 'resize', 'size': 8, 'capacity': 8, 'requested': 0,
                                  'oldReferences': True, 'seed': 121})
        self.assertEqual(result['originalTrace']['callbacks'], 2)
        self.assertEqual(result['sourceTrace']['callbacks'], 2)
        expected, arena = oracle.model(result['input'], oracle.prepare(result['input']))
        self.assertEqual(oracle.get(arena, oracle.OBSERVATION + 8), 8)
        self.assertEqual(oracle.get(arena, oracle.VECTOR + 4), 0)
        self.assertEqual(oracle.get(arena, oracle.VECTOR + 8), 8)

    def test_external_owner_prevents_release_callback(self):
        result = self.check_case({'root': 'resize', 'size': 8, 'capacity': 8, 'requested': 0,
                                  'oldReferences': True, 'externalReferences': 1, 'seed': 122})
        self.assertEqual(result['sourceTrace']['callbacks'], 0)

    def test_growth_preserves_prior_capacity_bytes_and_adds_fill_ownership(self):
        case = {'root': 'resize', 'size': 3, 'capacity': 4, 'requested': 9,
                'oldReferences': True, 'referenceFill': True, 'seed': 123}
        self.check_case(case)
        expected, arena = oracle.model(case, oracle.prepare(case))
        self.assertEqual(oracle.get(arena, oracle.NODES[2] + 4), 13)
        self.assertEqual(expected['services'], [{'operation': 'reallocate', 'oldBytes': 32, 'newBytes': 72}])

    def test_array_factory_constructs_null_elements_and_repairs_chain_backlink(self):
        case = {'root': 'create', 'requested': 7, 'chainLength': 2, 'seed': 124}
        self.check_case(case)
        expected, arena = oracle.model(case, oracle.prepare(case))
        array = expected['return']
        self.assertEqual(oracle.get(arena, oracle.STATE + 68), array)
        self.assertEqual(oracle.get(arena, oracle.HEAP + 0x4000 + 16), array)
        self.assertEqual(oracle.get(arena, array + 4), 0)
        self.assertEqual(oracle.get(arena, array + 20), oracle.STATE)
        values = oracle.get(arena, array + 24)
        self.assertTrue(all(oracle.get(arena, values + index * 8) == oracle.NULL
                            and oracle.get(arena, values + index * 8 + 4) == 0 for index in range(7)))

    def test_factory_allocation_failure_returns_without_publishing_object(self):
        result = self.check_case({'root': 'create', 'requested': 11, 'chainLength': 2,
                                  'allocationFails': True, 'seed': 125})
        self.assertEqual(result['observation']['return'], 0)
        self.assertEqual(result['observation']['services'], [{'operation': 'allocate', 'bytes': 36}])

    def test_real_link_fails_when_source_chain_dependency_is_missing(self):
        directory = ROOT / 'work/squirrel-source-wave002/missing-dependency-test'
        directory.mkdir(parents=True, exist_ok=True)
        arguments = [argument.replace('${ROOT}', str(ROOT)) for argument in self.component['commands'][-1]['argv']]
        arguments = [argument for argument in arguments if not argument.endswith('chain.o')]
        arguments[-1] = str(directory / 'missing-chain.elf')
        result = subprocess.run(arguments, capture_output=True, timeout=60)
        (directory / 'link.log').write_bytes(result.stdout + result.stderr)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn(b'fn_0019e8c4', result.stderr)

    def test_wrong_measured_shared_state_layout_cannot_compile(self):
        with tempfile.TemporaryDirectory(dir=ROOT / 'work/squirrel-source-wave002') as temporary:
            folder = Path(temporary)
            header = (lane.SOURCE / 'array_views.h').read_text().replace('unknown_0000[68]', 'unknown_0000[64]')
            header = header.replace('../../src/native/wave005/vm_views.h', (ROOT / 'src/native/wave005/vm_views.h').as_posix())
            (folder / 'array_views.h').write_text(header)
            (folder / 'array_create.c').write_text((lane.SOURCE / 'array_create.c').read_text())
            result = subprocess.run([str(ROOT / 'tools/clang-21/clang.exe'), *lane.FLAGS, '-O2', '-std=c11',
                                     '-c', str(folder / 'array_create.c'), '-o', str(folder / 'wrong-layout.o')],
                                    capture_output=True, timeout=60)
            self.assertNotEqual(result.returncode, 0)
            self.assertIn(b'Original shared chain offset', result.stderr)

    def test_published_packet_preserves_nonmatching_and_source_credit_limits(self):
        report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave002/report.json').read_text())
        self.assertEqual(report['sourceCodeCreditGranted'], 0)
        self.assertEqual(report['originalReturns'], 97)
        self.assertEqual(report['sourceReturns'], 97)
        self.assertEqual(len(report['negativeControls']), 4)
        self.assertTrue(all(row['actuallyReturned'] and row['semanticDifferenceDetected'] for row in report['negativeControls']))
        self.assertFalse(report['independentCommittedReplay'])
        self.assertTrue(all(not function['exactCompleteInstructionAndPoolMatch']
                            for profile in report['profiles'] for function in profile['functions']))

    def test_native_windows_component_really_executes_with_host_width_objects(self):
        report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave002/report.json').read_text())
        platform = report['platformComponent']
        command = next(row['argv'] for row in platform['commands']
                       if len(row['argv']) == 1 and row['argv'][0].endswith('array-lifecycle.exe')
                       and not row['argv'][0].endswith('wrong-array-lifecycle.exe'))
        executable = Path(command[0].replace('${ROOT}', str(ROOT))).resolve()
        self.assertTrue(executable.is_relative_to(ROOT / 'work/squirrel-source-wave002'))
        self.assertEqual(lane.sha(executable.read_bytes()), platform['windowsExeSha256'])
        result = subprocess.run([str(executable)], capture_output=True, timeout=30)
        self.assertEqual(result.returncode, 0)
        observed = json.loads(result.stdout)
        self.assertEqual((observed['pointerBytes'], observed['objectBytes'], observed['arrayBytes']), (8, 16, 64))
        self.assertEqual(observed['releaseCallbacks'], 1)
        self.assertEqual(platform['windowsWrongSourceExitCode'], 5)

    def test_android_result_is_three_real_objects_without_device_execution_claim(self):
        report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave002/report.json').read_text())
        platform = report['platformComponent']
        self.assertEqual(len(platform['androidArm64Objects']), 3)
        self.assertFalse(platform['androidExecution'])
        self.assertFalse(platform['wholeGameBuild'])
        commands = [row['argv'] for row in platform['commands'] if '--target=aarch64-linux-android29' in row['argv']]
        self.assertEqual(len(commands), 3)
        for command in commands:
            path = Path(command[command.index('-o') + 1].replace('${ROOT}', str(ROOT))).resolve()
            content = path.read_bytes()
            self.assertEqual(content[:6], b'\x7fELF\x02\x01')
            self.assertEqual(int.from_bytes(content[18:20], 'little'), 183)


if __name__ == '__main__':
    unittest.main()
