import importlib.util
import sys
import unittest
from pathlib import Path


TOOLS = Path(__file__).resolve().parents[1] / 'toolscripts'
sys.path.insert(0, str(TOOLS))
SPEC = importlib.util.spec_from_file_location('native_inventory_qualification', TOOLS / 'native_inventory_qualification.py')
qualification = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(qualification)


def fixture():
    preparation = {key: True for key in ['preparationSucceeded', 'allContextsInstalledBeforeAnyDisassembly',
                                        'allSeedsDisassembled', 'allSeedFunctionsCreated']}
    preparation.update({'contextsInstalled': 2, 'seedInstructionEntries': 2, 'seedFunctionEntries': 2,
                        'instructionCountWhenAllContextsVerified': 0, 'conflicts': []})
    census = {'functionCount': 5, 'functionBodyUnionBytes': 20}
    launch = {'processExitCode': 0, 'processTimedOut': False, 'analysisTimedOut': False, 'seedCount': 2}
    lines = ['INFO REPORT: Analysis succeeded for file: private-input', 'Total Time 438 secs',
             'INFO NATIVE_INVENTORY_DETAIL_EXPORT_SUCCESS 5 20',
             'INFO REPORT: Post-analysis succeeded for file: private-input']
    return preparation, census, launch, lines


class InventoryQualificationTests(unittest.TestCase):
    def test_actual_ghidra_success_marker_qualifies(self):
        facts = qualification.validate(*fixture())
        self.assertTrue(facts['automaticAnalysisSucceeded'])
        self.assertEqual(facts['analyzerReportedSeconds'], [438])
        self.assertFalse(facts['functionBoundariesComplete'])
        self.assertEqual(facts['sourceCredit'], 0)

    def test_invented_success_marker_does_not_qualify(self):
        preparation, census, launch, lines = fixture()
        lines[0] = 'ANALYSIS SUCCESSFUL'
        with self.assertRaisesRegex(ValueError, 'automatic analysis'):
            qualification.validate(preparation, census, launch, lines)

    def test_zero_process_exit_does_not_override_actual_timeout(self):
        preparation, census, launch, lines = fixture()
        lines.append('ERROR REPORT: Analysis timed out at 480 seconds')
        with self.assertRaisesRegex(ValueError, 'timeout'):
            qualification.validate(preparation, census, launch, lines)

    def test_process_failures_and_timeouts_rejected(self):
        for change in [{'processExitCode': 1}, {'processTimedOut': True}, {'analysisTimedOut': True}]:
            preparation, census, launch, lines = fixture()
            launch.update(change)
            with self.subTest(change=change), self.assertRaises(ValueError):
                qualification.validate(preparation, census, launch, lines)

    def test_preparation_seed_counts_and_ordering_must_agree(self):
        for change in [{'preparationSucceeded': False}, {'contextsInstalled': 1}, {'instructionCountWhenAllContextsVerified': 1},
                       {'seedFunctionEntries': 1}, {'allSeedsDisassembled': False}, {'conflicts': ['mode conflict']}]:
            preparation, census, launch, lines = fixture()
            preparation.update(change)
            with self.subTest(change=change), self.assertRaises(ValueError):
                qualification.validate(preparation, census, launch, lines)

    def test_export_facts_and_post_analysis_are_required(self):
        for index, value in [(2, 'NATIVE_INVENTORY_DETAIL_EXPORT_SUCCESS 6 20'), (2, ''), (3, '')]:
            preparation, census, launch, lines = fixture()
            lines[index] = value
            with self.subTest(index=index, value=value), self.assertRaises(ValueError):
                qualification.validate(preparation, census, launch, lines)

    def test_preserved_overlap_diagnostic_does_not_imply_boundary_proof(self):
        preparation, census, launch, lines = fixture()
        lines.append('ERROR function body repair failed due to overlap with another function')
        facts = qualification.validate(preparation, census, launch, lines)
        self.assertTrue(facts['automaticAnalysisSucceeded'])
        self.assertFalse(facts['functionBoundariesComplete'])


if __name__ == '__main__':
    unittest.main()
