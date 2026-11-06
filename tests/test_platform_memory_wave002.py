import copy
import importlib.util
import json
import unittest
import uuid
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('platform_memory_wave002', ROOT / 'toolscripts/platform_memory_wave002.py')
BUILD = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(BUILD)


class PlatformMemoryWave002Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = BUILD.run_build()
        cls.spec = BUILD.load_inputs()
        cls.descriptor = json.loads((ROOT / cls.spec['descriptorPath']).read_text())
        cls.original = (ROOT / cls.spec['modulePath']).read_bytes()

    def test_all_315_production_definitions_and_7560_fresh_original_returns(self):
        self.assertEqual(self.report['getterFunctions'], 257)
        self.assertEqual(self.report['qualifiedSetterFunctions'], 58)
        self.assertEqual(self.report['caseCount'], 7560)
        self.assertEqual(self.report['actualOriginalFixtureReturns'], 7560)
        self.assertTrue(self.report['freshOriginalCapture'])
        self.assertTrue(self.report['windows']['actuallyExecuted'])
        self.assertTrue(self.report['windows']['allMemoryGuardsPassed'])
        self.assertEqual(self.report['windows']['semanticMismatchCount'], 0)

    def test_host64_typed_layouts_pointer_returns_and_geometries(self):
        self.assertEqual(self.report['windows']['hostPointerWidth'], 8)
        self.assertEqual(self.report['windows']['geometries'], [0, 1])
        self.assertGreater(len(self.report['windows']['hostOffsetChangedFunctions']), 100)
        self.assertTrue(self.report['windows']['logicalRecordReturnGuardsPassed'])
        self.assertEqual(self.report['setterLogicalPointerReturnCases'], 1392)

    def test_compiled_wrong_getter_and_setter_controls_return_then_fail(self):
        wrong = self.report['compiledWrongSource']
        self.assertTrue(wrong['actuallyExecuted'])
        self.assertEqual(wrong['actualSourceFixtureReturns'], 7560)
        self.assertEqual(wrong['semanticMismatchCount'], 7560)
        self.assertEqual(wrong['memoryMismatchCount'], 1392)
        self.assertEqual(len(wrong['mismatchingSymbols']), 315)
        self.assertTrue(wrong['logicalRecordReturnGuardsPassed'])

    def test_android_source_symbols_and_16k_elf_constraints(self):
        android = self.report['android']
        self.assertEqual(android['library']['definedFunctionCount'], 315)
        for kind in ('library', 'executable'):
            self.assertEqual(android[kind]['machine'], 'EM_AARCH64')
            self.assertTrue(all(value >= 16384 for value in android[kind]['loadAlignments']))
        self.assertEqual(android['executable']['interpreters'], ['/system/bin/linker64'])
        self.assertFalse(android['actuallyExecuted'])

    def test_isolated_minimal_root_with_different_runtime_receipt_paths(self):
        spec = importlib.util.spec_from_file_location('memory_isolation_test', ROOT / 'platform/memory-wave002/isolation.py')
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        receipt = module.run(ROOT, ROOT / ('work/platform-memory-wave002/isolated-test-' + uuid.uuid4().hex[:10]))
        self.assertEqual(receipt['status'], 'isolated-minimal-root-passed')
        self.assertEqual(receipt['actualOriginalFixtureReturns'], 7560)
        self.assertEqual(receipt['windowsActualFixtureReturns'], 7560)
        self.assertEqual(receipt['wrongSourceActualReturns'], 7560)
        self.assertEqual(receipt['wrongSourceMismatches'], 7560)
        self.assertEqual(receipt['unchangedInputManifestSha256'], BUILD.sha(ROOT / 'platform/memory-wave002/inputs.json'))
        self.assertEqual(receipt['corpus']['sha256'], self.report['corpus']['sha256'])
        self.assertTrue(all(row['sourceSha256'] != row['isolatedSha256'] for row in receipt['runtimeReceiptRewrites']))
        self.assertEqual(receipt['androidDefinedFunctions'], 315)
        self.assertTrue(receipt['freshVenvCreated'])
        self.assertTrue(receipt['offlinePackagesInstalled'])
        self.assertEqual(receipt['freshVenvImmutableInputPreflight']['effectiveToolPinsChecked'], len(self.spec['toolPins']))
        BUILD.save(ROOT / 'evidence/lanes/platform-memory-wave002/isolated-replay.json', receipt)

    def test_venv_structure_checks_runtime_but_ignores_creation_command(self):
        runtime = json.loads((ROOT / self.spec['runtimeDescriptor']['path']).read_text())
        launcher = next(pin for pin in self.spec['toolPins'] if pin['path'] == 'tools/python/Scripts/python.exe')
        text = (ROOT / 'tools/python/pyvenv.cfg').read_text()
        path = ROOT / 'work/platform-memory-wave002/build/test-pyvenv.cfg'
        lines = [line for line in text.splitlines() if not line.startswith('command =')]
        lines.append('command = Z:\\diagnostic-only\\different-checkout')
        path.write_text('\n'.join(lines))
        self.assertFalse(BUILD.CONTRACTS.validate_venv(path, runtime, launcher['sha256'])['includeSystemSitePackages'])
        creator = next(line for line in lines if line.startswith('executable ='))
        path.write_text('\n'.join(lines).replace(creator, 'executable = ' + str(BUILD.CLANG)))
        with self.assertRaisesRegex(RuntimeError, 'Venv creator is not a qualified launcher'):
            BUILD.CONTRACTS.validate_venv(path, runtime, launcher['sha256'])
        for old, new in [('include-system-site-packages = false', 'include-system-site-packages = true'),
                         ('version = 3.13.5', 'version = 0.0.0')]:
            path.write_text('\n'.join(lines).replace(old, new))
            with self.assertRaisesRegex(RuntimeError, 'Venv isolation/version/runtime home'):
                BUILD.CONTRACTS.validate_venv(path, runtime, launcher['sha256'])

    def test_mutable_packet_input_is_explicitly_rejected(self):
        value = json.loads((ROOT / 'platform/memory-wave002/inputs.json').read_text())
        value['inputs'].append({'path': 'evidence/lanes/wave002-native/packet.json', 'sha256': '0' * 64})
        path = ROOT / 'work/platform-memory-wave002/build/forbidden-packet.json'
        path.write_text(json.dumps(value))
        with self.assertRaisesRegex(RuntimeError, 'Mutable runtime packet'):
            BUILD.load_inputs(path)

    def test_missing_function_fails_canonical_completeness(self):
        descriptor = copy.deepcopy(self.descriptor)
        descriptor['functions'].pop()
        with self.assertRaisesRegex(RuntimeError, 'Missing/duplicate'):
            BUILD.CONTRACTS.validate_functions(ROOT, self.spec, descriptor, self.original)

    def test_changed_source_pin_fails_before_compilation(self):
        value = json.loads((ROOT / 'platform/memory-wave002/inputs.json').read_text())
        value['inputs'][0]['sha256'] = '0' * 64
        path = ROOT / 'work/platform-memory-wave002/build/changed-pin.json'
        path.write_text(json.dumps(value))
        with self.assertRaisesRegex(RuntimeError, 'Pinned source/tool input changed'):
            BUILD.load_inputs(path)

    def test_changed_layout_cannot_relabel_original_memory_operation(self):
        row = copy.deepcopy(self.descriptor['functions'][0])
        row['fieldOffset'] += 4
        with self.assertRaisesRegex(RuntimeError, 'Native scalar offset/width/sign/direction'):
            BUILD.CONTRACTS.native_descriptor(row, self.original)

    def test_wrong_canonical_identity_and_original_hash_fail(self):
        row = copy.deepcopy(self.descriptor['functions'][0])
        row['canonicalIdentity']['moduleSha256'] = '0' * 64
        with self.assertRaisesRegex(RuntimeError, 'Canonical function identity'):
            BUILD.CONTRACTS.native_descriptor(row, self.original)
        row = copy.deepcopy(self.descriptor['functions'][0])
        row['originalSpanSha256'] = '0' * 64
        with self.assertRaisesRegex(RuntimeError, 'Canonical original span'):
            BUILD.CONTRACTS.native_descriptor(row, self.original)

    def test_component_status_and_indirect_exclusions_remain_explicit(self):
        self.assertEqual(len(self.report['excludedDiagnosticFunctions']), 3)
        self.assertEqual(self.report['compiledUnqualifiedFunctions'], [])
        self.assertTrue(self.report['stableCanonicalInputs'])
        self.assertEqual(self.report['mutableRuntimePacketInputs'], [])
        self.assertFalse(self.report['fullGameBuild'])
        self.assertEqual(self.report['acceptedSourceCredit'], 0)


if __name__ == '__main__':
    unittest.main()
