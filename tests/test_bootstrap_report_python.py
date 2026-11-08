import io
from pathlib import Path
import sys
import tempfile
import unittest
import zipfile

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import bootstrap_report_python as runtime


class FrozenRuntimeArchiveTests(unittest.TestCase):
    def archive(self, extra=None):
        data = io.BytesIO()
        with zipfile.ZipFile(data, 'w') as archive:
            for name in ['tools/python.exe', 'tools/python313.dll', 'tools/Lib/venv/__init__.py']:
                archive.writestr(name, b'fixture')
            for name in extra or []:
                archive.writestr(name, b'fixture')
        return zipfile.ZipFile(io.BytesIO(data.getvalue()))

    def test_expected_runtime_closure_is_selected(self):
        with self.archive(['package.nuspec']) as archive:
            self.assertEqual(len(runtime.members(archive)), 3)

    def test_parent_absolute_drive_and_backslash_members_are_rejected(self):
        for name in ['tools/../escape.exe', 'tools//absolute.exe', 'tools/C:/escape.exe', 'tools/Lib\\escape.py']:
            with self.subTest(path=name), self.archive([name]) as archive, self.assertRaises(ValueError):
                archive.infolist()[-1].filename = name
                runtime.members(archive)

    def test_case_insensitive_duplicates_are_rejected(self):
        with self.archive(['tools/PYTHON.exe']) as archive, self.assertRaises(ValueError):
            runtime.members(archive)

    def test_incomplete_runtime_cannot_be_accepted(self):
        data = io.BytesIO()
        with zipfile.ZipFile(data, 'w') as archive:
            archive.writestr('tools/python.exe', b'fixture')
        with zipfile.ZipFile(io.BytesIO(data.getvalue())) as archive, self.assertRaises(ValueError):
            runtime.members(archive)

    def test_symlink_members_are_rejected(self):
        data = io.BytesIO()
        with zipfile.ZipFile(data, 'w') as archive:
            row = zipfile.ZipInfo('tools/link')
            row.create_system = 3
            row.external_attr = (0o120777 << 16)
            archive.writestr(row, 'outside')
        with zipfile.ZipFile(io.BytesIO(data.getvalue())) as archive, self.assertRaises(ValueError):
            runtime.members(archive)

    def test_existing_bad_runtime_is_rejected_without_modification(self):
        with tempfile.TemporaryDirectory() as temp, self.archive() as archive:
            root = Path(temp)
            for name in runtime.members(archive):
                path = root / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(b'fixture')
            (root / 'python.exe').write_bytes(b'corrupt')
            with self.assertRaises(ValueError):
                runtime.verify_files(root, archive, runtime.members(archive))
            self.assertEqual((root / 'python.exe').read_bytes(), b'corrupt')


if __name__ == '__main__':
    unittest.main()
