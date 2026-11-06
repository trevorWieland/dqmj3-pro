import copy
import json
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from semantic_report import validate


class SemanticEvidenceChecks(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.registry = json.loads((ROOT / 'config/semantic-names.json').read_text())

    def test_cross_build_address_reuse_is_rejected(self):
        changed = copy.deepcopy(self.registry)
        changed['records'][0]['canonicalIdentity']['programId'] = '00040000001acb00'
        with self.assertRaises(ValueError):
            validate(changed)

    def test_descriptive_alias_cannot_claim_original_name(self):
        changed = copy.deepcopy(self.registry)
        changed['records'][0]['originalHistoricalNameKnown'] = True
        with self.assertRaises(ValueError):
            validate(changed)

    def test_unknowns_cannot_be_silently_removed(self):
        changed = copy.deepcopy(self.registry)
        changed['records'][0]['remainingQuestions'] = []
        with self.assertRaises(ValueError):
            validate(changed)


if __name__ == '__main__':
    unittest.main()
