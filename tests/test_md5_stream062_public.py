import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

ROOT=Path(__file__).resolve().parents[1]
SPEC=importlib.util.spec_from_file_location('md5_stream062_parent',ROOT/'toolscripts/md5_stream062_run.py')
PARENT=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(PARENT)


class Md5PublicParentTests(unittest.TestCase):
    def assert_rejected(self,changes,returncode=0,source_only=True):
        with tempfile.TemporaryDirectory() as folder:
            output=Path(folder)
            gate=dict(status='qualified-guarded-source-closure',rejected=[],sourceOnly=True,
                originalReadsSucceeded=0,originalConstructors=0,publicDataOnly=True,inputs=[])
            gate.update(changes)
            (output/'gate-receipt.json').write_text(json.dumps(gate))
            with self.assertRaises(ValueError):
                PARENT.validate_completed(output,returncode,source_only)

    def test_forced_child_exit_zero_cannot_hide_persisted_denial(self):
        self.assert_rejected(dict(rejected=[dict(operation='read-original',caught=True)]))

    def test_nonzero_child_cannot_qualify(self):
        self.assert_rejected({},returncode=86)

    def test_incomplete_gate_cannot_qualify(self):
        self.assert_rejected(dict(status='started'))

    def test_source_only_original_read_cannot_qualify(self):
        self.assert_rejected(dict(originalReadsSucceeded=1))

    def test_source_only_original_constructor_cannot_qualify(self):
        self.assert_rejected(dict(originalConstructors=1))

    def test_source_scope_mismatch_cannot_qualify(self):
        self.assert_rejected(dict(sourceOnly=False))

    def test_full_mode_wrong_canonical_original_cannot_qualify(self):
        self.assert_rejected(dict(sourceOnly=False,publicDataOnly=False,originalConstructors=1,
            inputs=[dict(path=str(ROOT/'generated/update-content0/code.bin'),sha256='0'*64)]),source_only=False)


if __name__=='__main__':
    unittest.main()
