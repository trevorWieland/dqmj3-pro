import copy
import hashlib
import json
import sys
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import functional_report as functional


class FunctionalReportTests(unittest.TestCase):
    def setUp(self):
        scratch = ROOT / 'work/functional-report-tests'
        scratch.mkdir(parents=True, exist_ok=True)
        temporary = tempfile.TemporaryDirectory(dir=scratch)
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name).resolve()
        self.source = self.root / 'src/native/test/unit.c'
        self.source.parent.mkdir(parents=True)
        self.source.write_text('int fn_00100000(void) { return 1; }\n')
        self.header = self.source.with_suffix('.h')
        self.header.write_text('typedef unsigned int Word;\n')
        self.module = 'f' * 64
        self.identity = {'address': 0x100000, 'mode': 'ARM', 'moduleSha256': self.module, 'programId': '0004000e001acb00'}
        self.proof = {'symbol': 'fn_00100000', 'canonicalIdentity': self.identity,
                      'source': self.record(self.source), 'functionalConfidence': 'medium',
                      'exactObjectSpan': False, 'exactLinkedSpan': False,
                      'behavior': {'allPassed': True}, 'originalInstructionBytes': 4}
        self.packet = {'moduleSha256': self.module, 'acceptedSourceCreditGranted': 0,
                       'functions': [self.proof], 'headers': [self.record(self.header)]}
        self.packet_path = self.root / 'evidence/packet.json'
        self.packet_path.parent.mkdir()
        self.packet_path.write_text(json.dumps(self.packet))
        inventory = self.root / 'evidence/inventory'
        inventory.mkdir()
        (inventory / 'update-content0.json').write_text(json.dumps({'codeSha256': self.module,
                                                                  'programId': self.identity['programId']}))
        (self.root / 'recovery.json').write_text(json.dumps({'acceptedCohorts': [], 'acceptedRecoveredFunctions': 0,
                                                            'acceptedRecoveredBytes': 0}))
        self.registry = {'schemaVersion': 1, 'version': 'update-content0', 'moduleSha256': self.module,
                         'programId': self.identity['programId'], 'functions': [
                             {'name': 'fn_00100000', 'confidence': 'medium', 'packet': self.record(self.packet_path)}]}
        self.report = {'units': [{'metadata': {'source_path': 'src/native'}, 'functions': [
            {'name': 'fn_00100000', 'size': '4', 'metadata': {'virtual_address': str(0x100000)}}]}]}

    def record(self, path):
        return {'path': path.relative_to(self.root).as_posix(), 'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}

    def update_packet(self):
        self.packet_path.write_text(json.dumps(self.packet))
        self.registry['functions'][0]['packet'] = self.record(self.packet_path)

    def generate(self):
        return functional.generate(self.root, self.report, self.registry)

    def test_emits_only_requested_schema(self):
        self.assertEqual(self.generate(), {'functions': [{'name': 'fn_00100000', 'confidence': 'medium'}]})

    def test_source_change_rejects_stale_approval(self):
        self.source.write_text('int fn_00100000(void) { return 2; }\n')
        with self.assertRaisesRegex(ValueError, 'input changed'):
            self.generate()

    def test_quoted_header_change_rejects_stale_approval(self):
        self.header.write_text('typedef unsigned long long Word;\n')
        with self.assertRaisesRegex(ValueError, 'input changed'):
            self.generate()

    def test_function_must_exist_in_actual_report(self):
        self.report['units'][0]['functions'] = []
        with self.assertRaisesRegex(ValueError, 'absent from this report'):
            self.generate()

    def test_report_metadata_must_expose_actual_c_file(self):
        self.report['units'][0]['metadata']['source_path'] = 'evidence'
        with self.assertRaisesRegex(ValueError, 'source ownership'):
            self.generate()

    def test_report_address_and_extent_cannot_drift(self):
        self.report['units'][0]['functions'][0]['metadata']['virtual_address'] = str(0x100004)
        with self.assertRaisesRegex(ValueError, 'extent differs'):
            self.generate()

    def test_confidence_cannot_exceed_reviewed_proof(self):
        self.registry['functions'][0]['confidence'] = 'high'
        with self.assertRaisesRegex(ValueError, 'confidence'):
            self.generate()

    def test_exact_candidate_cannot_be_silently_treated_as_functional(self):
        self.proof['exactLinkedSpan'] = True
        self.update_packet()
        with self.assertRaisesRegex(ValueError, 'separate source admission'):
            self.generate()

    def test_failed_behavior_cannot_be_marked_working(self):
        self.proof['behavior']['allPassed'] = False
        self.update_packet()
        with self.assertRaisesRegex(ValueError, 'behavior proof'):
            self.generate()

    def test_duplicate_function_approval_fails(self):
        self.registry['functions'].append(copy.deepcopy(self.registry['functions'][0]))
        with self.assertRaisesRegex(ValueError, 'duplicated'):
            self.generate()


if __name__ == '__main__':
    unittest.main()
