from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))
from generate_source_names import write_generated


class GeneratedNamesOutputTests(unittest.TestCase):
    def test_append_preserves_mixed_line_endings_and_every_existing_byte(self):
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)/'names.h'
            old=b'#define fn_00100000 first\r\n#define fn_00100004 second\n'
            path.write_bytes(old)
            content=old.decode().replace('\r\n','\n')+'#define fn_00100008 third\n'
            self.assertTrue(write_generated(path,content))
            self.assertEqual(path.read_bytes(),old+b'#define fn_00100008 third\n')

    def test_unchanged_logical_content_never_rewrites_physical_bytes(self):
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)/'names.h'
            old=b'#define fn_00100000 first\r\n'
            path.write_bytes(old)
            self.assertFalse(write_generated(path,old.decode().replace('\r\n','\n')))
            self.assertEqual(path.read_bytes(),old)

    def test_new_file_uses_generated_utf8_bytes(self):
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)/'nested/names.h'
            self.assertTrue(write_generated(path,'#define fn_00100000 first\n'))
            self.assertEqual(path.read_bytes(),b'#define fn_00100000 first\n')

    def test_changed_mapping_is_written_for_separate_proof_review(self):
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)/'names.h'
            path.write_bytes(b'#define fn_00100000 first\r\n')
            self.assertTrue(write_generated(path,'#define fn_00100000 changed\n'))
            self.assertEqual(path.read_bytes(),b'#define fn_00100000 changed\n')


if __name__=='__main__':
    unittest.main()
