import copy
import json
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from native_bundle002 import direct_witness, verify_behavior


class CallerAndBehaviorAdmission(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        cls.setter = json.loads((ROOT / 'evidence/lanes/wave003-abi/packet.json').read_text())

    def test_conditional_tail_branch_is_a_complete_witness(self):
        direct_witness(self.image, 0x1458dc, 0x145900, tail=True)

    def test_tail_branch_cannot_masquerade_as_call(self):
        with self.assertRaises(ValueError):
            direct_witness(self.image, 0x1458dc, 0x145900)

    def test_thumb_blx_to_arm_entry_is_valid(self):
        direct_witness(self.image, 0x101222, 0x2ff9c0, 'Thumb')

    def test_wrong_mode_or_target_rejected(self):
        for site, target, mode in [(0x101222, 0x2ff9c0, 'ARM'),
                                   (0x101222, 0x2ff9c4, 'Thumb')]:
            with self.subTest(mode=mode, target=target), self.assertRaises(ValueError):
                direct_witness(self.image, site, target, mode)

    def test_stale_caller_hash_rejected(self):
        with self.assertRaises(ValueError):
            direct_witness(self.image, 0x101222, 0x2ff9c0, 'Thumb', expected_hash='0' * 64)

    def test_return_handle_proof_is_required(self):
        packet = copy.deepcopy(self.setter)
        row = packet['functions'][0]
        row['behavior']['actualOriginalAndSourceR0Compared'] = False
        with self.assertRaises(ValueError):
            verify_behavior('wave003-abi', packet, row)

    def test_crash_cannot_replace_wrong_return_semantic_control(self):
        packet = copy.deepcopy(self.setter)
        row = packet['functions'][0]
        for control in packet['negativeControls']:
            if control.get('address') == row['canonicalIdentity']['address'] and control['kind'] == 'wrong-return':
                control['returnedToSentinel'] = False
        with self.assertRaises(ValueError):
            verify_behavior('wave003-abi', packet, row)


if __name__ == '__main__':
    unittest.main()
