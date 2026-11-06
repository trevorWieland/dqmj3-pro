import importlib.util
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('source_policy', ROOT / 'toolscripts/source_policy.py')
POLICY = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(POLICY)


class SourcePolicyTests(unittest.TestCase):
    def test_comment_tokens_inside_strings_are_ordinary_data(self):
        self.assertFalse(POLICY.has_c_comment('const char *s = "https://test/";'))
        self.assertFalse(POLICY.has_c_comment('const char *s = "/* data */";'))

    def test_actual_line_and_block_comments_are_detected(self):
        self.assertTrue(POLICY.has_c_comment('int a; // comment'))
        self.assertTrue(POLICY.has_c_comment('int a; /* comment */'))

    def test_escaped_quote_cannot_hide_a_following_comment(self):
        self.assertTrue(POLICY.has_c_comment('const char *s = "a\\\"b"; // comment'))


if __name__ == '__main__':
    unittest.main()
