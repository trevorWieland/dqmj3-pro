import copy
import hashlib
import json
import os
from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import isolated_intake_cleanup as cleanup
import isolated_component_replay as replay


class IntakeCleanupTests(unittest.TestCase):
    def setUp(self):
        folder = ROOT / 'work/intake-cleanup-unit-tests'
        folder.mkdir(parents=True, exist_ok=True)
        self.temporary = tempfile.TemporaryDirectory(dir=folder)
        self.addCleanup(self.temporary.cleanup)
        self.owner = Path(self.temporary.name).resolve() / 'owner'
        self.destination = self.owner / 'work/clean-replay/component-1234567'
        self.destination.mkdir(parents=True)
        self.plan = {'schemaVersion': 1, 'name': 'component',
            'producerSteps': [{'name': 'producer', 'args': ['toolscripts/producer.py'],
                'inputKinds': ['code', 'exheader']}],
            'tests': ['component'], 'packets': ['work/component/report.json'],
            'intakeCleanup': {'mode': 'code-exheader-only', 'producerInputs': ['code', 'exheader']}}
        project = {'inputs': {}}
        self.inputs = []
        for label in ['base', 'update']:
            relative = 'inputs/archive/game/' + label + '.cia'
            original = self.owner / relative
            original.parent.mkdir(parents=True, exist_ok=True)
            raw = ('synthetic CIA identity ' + label).encode()
            original.write_bytes(raw)
            target = self.destination / relative
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_bytes(raw)
            self.inputs.append(target)
            project['inputs'][label] = relative
            project[label + 'CiaSha256'] = hashlib.sha256(raw).hexdigest()
            code = ('synthetic code ' + label).encode()
            exheader = bytes([len(label)]) * 2048
            frozen = {'codeBytes': len(code), 'codeSha256': hashlib.sha256(code).hexdigest(),
                'exheaderSha256': hashlib.sha256(exheader).hexdigest()}
            inventory = self.destination / 'evidence/inventory' / (label + '-content0.json')
            inventory.parent.mkdir(parents=True, exist_ok=True)
            inventory.write_text(json.dumps(frozen))
            generated = self.destination / 'generated' / (label + '-content0')
            generated.mkdir(parents=True)
            (generated / 'code.bin').write_bytes(code)
            (generated / 'exheader.bin').write_bytes(exheader)
            stage = self.destination / cleanup.STAGING / (label + '-content0')
            stage.mkdir(parents=True)
            (stage / 'code.bin').write_bytes(code)
            (stage / 'exheader.bin').write_bytes(exheader)
            (stage / 'code-compressed.bin').write_bytes(b'synthetic compressed')
            measured = self.destination / 'work/component-intake/private/evidence/inventory'
            measured.mkdir(parents=True, exist_ok=True)
            (measured / (label + '.json')).write_text(json.dumps({'sha256': project[label + 'CiaSha256']}))
            (measured / (label + '-content0.json')).write_text(json.dumps(frozen))
        (self.destination / 'project.json').write_text(json.dumps(project))

    def assert_nothing_removed(self):
        self.assertTrue(all(path.is_file() for path in self.inputs))
        self.assertTrue((self.destination / cleanup.STAGING).is_dir())
        self.assertFalse((self.destination / 'intake-cleanup.json').exists())

    def run_cleanup(self, plan=None):
        return cleanup.cleanup(self.owner, self.destination, self.plan if plan is None else plan)

    def test_default_plan_does_not_remove_inputs(self):
        plan = copy.deepcopy(self.plan)
        del plan['intakeCleanup']
        self.assertFalse(cleanup.validate_policy(plan))
        self.assertIsNone(self.run_cleanup(plan))
        self.assert_nothing_removed()

    def test_asset_container_and_romfs_producers_fail_closed(self):
        for kind in ['asset', 'container', 'romfs', 'cia', 'save']:
            plan = copy.deepcopy(self.plan)
            plan['producerSteps'][0]['inputKinds'] = ['code', kind]
            with self.subTest(kind=kind), self.assertRaises(ValueError):
                replay.validate_plan(plan)
        self.assert_nothing_removed()

    def test_missing_or_ambiguous_producer_declarations_fail_closed(self):
        for kinds in [None, [], ['code', 'code'], [['romfs']], 'code']:
            plan = copy.deepcopy(self.plan)
            plan['producerSteps'][0]['inputKinds'] = kinds
            with self.subTest(kinds=kinds), self.assertRaises(ValueError):
                cleanup.validate_policy(plan)
        self.assert_nothing_removed()

    def test_policy_typo_and_extra_asset_declarations_are_rejected(self):
        for policy in [{'mode': 'code-exheader-only', 'producerInputs': ['code', 'romfs']},
            {'mode': 'assets', 'producerInputs': ['code', 'exheader']},
            {'mode': 'code-exheader-only', 'producerInputs': ['code', 'exheader'], 'assetInputs': []}]:
            plan = copy.deepcopy(self.plan)
            plan['intakeCleanup'] = policy
            with self.assertRaises(ValueError):
                cleanup.validate_policy(plan)

    def test_success_removes_only_copies_and_preserves_verified_receipts(self):
        primary_hashes = {path.name: cleanup.digest(self.owner / path.relative_to(self.destination)) for path in self.inputs}
        record = self.run_cleanup()
        receipt = json.loads((self.destination / record['path']).read_text())
        self.assertEqual(record['sha256'], cleanup.digest(self.destination / record['path']))
        self.assertEqual(receipt['status'], 'removed-verified-replay-input-copies')
        self.assertEqual((len(receipt['copiedInputs']), len(receipt['finalCopies']), len(receipt['preservedFreshInventory'])), (2, 4, 4))
        self.assertFalse((self.destination / cleanup.STAGING).exists())
        for path in self.inputs:
            self.assertFalse(path.exists())
            self.assertEqual(cleanup.digest(self.owner / path.relative_to(self.destination)), primary_hashes[path.name])
        for row in receipt['finalCopies'] + receipt['preservedFreshInventory']:
            self.assertEqual(cleanup.digest(self.destination / row['path']), row['sha256'])

    def test_corrupt_final_code_prevents_all_removal(self):
        path = self.destination / 'generated/update-content0/code.bin'
        path.write_bytes(b'corrupt final copy')
        with self.assertRaisesRegex(ValueError, 'final code/ExHeader'):
            self.run_cleanup()
        self.assert_nothing_removed()

    def test_corrupt_final_exheader_prevents_all_removal(self):
        path = self.destination / 'generated/base-content0/exheader.bin'
        path.write_bytes(bytes(2048))
        with self.assertRaisesRegex(ValueError, 'final code/ExHeader'):
            self.run_cleanup()
        self.assert_nothing_removed()

    def test_copied_cia_change_prevents_all_removal(self):
        self.inputs[1].write_bytes(b'changed copied CIA')
        with self.assertRaisesRegex(ValueError, 'copied CIA'):
            self.run_cleanup()
        self.assert_nothing_removed()

    def test_changed_fresh_measurement_prevents_all_removal(self):
        path = self.destination / 'work/component-intake/private/evidence/inventory/base-content0.json'
        path.write_text('{}')
        with self.assertRaisesRegex(ValueError, 'fresh-intake receipt'):
            self.run_cleanup()
        self.assert_nothing_removed()

    def test_owner_or_outside_directory_cannot_be_a_cleanup_target(self):
        for destination in [self.owner, self.owner.parent / 'outside', self.owner / 'work/clean-replay']:
            with self.subTest(destination=destination), self.assertRaises(ValueError):
                cleanup.cleanup(self.owner, destination, self.plan)
        self.assert_nothing_removed()

    def test_project_input_cannot_escape_or_name_a_final_copy(self):
        path = self.destination / 'project.json'
        original = json.loads(path.read_text())
        for value in ['../primary.cia', '/primary.cia', 'generated/base-content0/code.bin']:
            project = copy.deepcopy(original)
            project['inputs']['base'] = value
            path.write_text(json.dumps(project))
            with self.assertRaises(ValueError):
                self.run_cleanup()
        self.assert_nothing_removed()

    def test_owner_hardlink_is_rejected(self):
        target = self.inputs[0]
        primary = self.owner / target.relative_to(self.destination)
        target.unlink()
        os.link(primary, target)
        with self.assertRaisesRegex(ValueError, 'owner primary'):
            self.run_cleanup()
        self.assert_nothing_removed()

    def test_linked_staging_is_rejected_before_traversal(self):
        outside = self.owner / 'private-primary'
        outside.mkdir()
        (outside / 'keep.bin').write_bytes(b'owner primary sentinel')
        linked = self.destination / cleanup.STAGING / 'linked'
        try:
            linked.symlink_to(outside, target_is_directory=True)
        except OSError as error:
            self.skipTest('Host does not permit unprivileged directory symlinks: ' + str(error))
        with self.assertRaisesRegex(ValueError, 'linked replay'):
            self.run_cleanup()
        self.assertEqual((outside / 'keep.bin').read_bytes(), b'owner primary sentinel')
        self.assert_nothing_removed()

    def test_unexpected_asset_or_auxiliary_module_is_not_deleted(self):
        path = self.destination / cleanup.STAGING / 'update-content0/modules/extra.cro'
        path.parent.mkdir()
        path.write_bytes(b'synthetic auxiliary module')
        with self.assertRaisesRegex(ValueError, 'assets, modules'):
            self.run_cleanup()
        self.assertEqual(path.read_bytes(), b'synthetic auxiliary module')
        self.assert_nothing_removed()

    def test_runner_cleans_immediately_after_successful_intake(self):
        receipt = {'status': 'running', 'steps': [], 'plan': self.plan}
        path = self.destination / 'runner-receipt.json'
        commands = [('fresh-original-intake', ['-c', 'pass']), ('producer', ['-c',
            'from pathlib import Path;assert not list(Path("inputs/archive/game").glob("*.cia"));'
            'assert Path("generated/update-content0/code.bin").is_file();Path("result.json").write_text("ok")'])]
        replay.run_steps(self.destination, Path(sys.executable), commands, receipt, path, ['result.json'], self.owner)
        saved = json.loads(path.read_text())
        self.assertEqual(saved['status'], 'passed')
        self.assertEqual(saved['intakeCleanupReceipt']['sha256'], cleanup.digest(self.destination / 'intake-cleanup.json'))

    def test_runner_keeps_failed_cleanup_checkpoint_and_intake_log(self):
        receipt = {'status': 'running', 'steps': [], 'plan': self.plan}
        path = self.destination / 'runner-receipt.json'
        (self.destination / 'generated/update-content0/code.bin').write_bytes(b'changed final copy')
        with self.assertRaises(ValueError):
            replay.run_steps(self.destination, Path(sys.executable),
                [('fresh-original-intake', ['-c', 'pass'])], receipt, path, ['result.json'], self.owner)
        saved = json.loads(path.read_text())
        self.assertEqual((saved['status'], saved['failedStage']), ('failed', 'intake-cleanup'))
        self.assertEqual(saved['steps'][0]['returncode'], 0)
        self.assertTrue((self.destination / 'fresh-original-intake.log').is_file())
        self.assert_nothing_removed()


if __name__ == '__main__':
    unittest.main()
