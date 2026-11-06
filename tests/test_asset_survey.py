import importlib.util
import io
import json
import struct
import unittest
from pathlib import Path

from pyctr.fileio import SubsectionIO
from pyctr.type.romfs import RomFSReader


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('asset_survey_under_test', ROOT / 'toolscripts/asset_survey.py')
ASSETS = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(ASSETS)


class AssetSurveyTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        inventory = json.loads((ROOT / 'evidence/inventory/base.json').read_text(encoding='utf-8'))
        content = next(item for item in inventory['contents'] if item['index'] == 0)
        records = {item['path']: item for item in content['ncch']['romfsFiles']}
        selected = {'sarc': '/data/Icons/ic/ic_0001.arc',
                    'xbb': '/data/Effect/ef00001.pef',
                    'script': '/data/Test/ReproductionBattle.nut'}
        cls.raw = {}
        with Path(inventory['path']).open('rb') as original:
            original.seek(content['offset'])
            header = original.read(512)
            if header[256:260] != b'NCCH' or not header[0x18f] & 4:
                raise ValueError('Expected unencrypted NCCH fixture')
            start, size = struct.unpack_from('<II', header, 0x1b0)
            reader = RomFSReader(SubsectionIO(original, content['offset'] + start * 512,
                                             size * 512), case_insensitive=False, closefd=False)
            for key, path in selected.items():
                with reader.open(path) as stream:
                    raw = stream.read()
                if len(raw) != records[path]['size'] or ASSETS.sha(raw) != records[path]['sha256']:
                    raise ValueError('Fixture differs from measured inventory: ' + path)
                cls.raw[key] = raw

    def parse(self, key, data=None):
        raw = self.raw[key] if data is None else data
        return ASSETS.inspect_archive(io.BytesIO(raw), len(raw), raw[:4])

    def test_actual_sarc(self):
        result = self.parse('sarc')
        self.assertTrue(result['supported'])
        self.assertEqual(result['format'], 'SARC')
        self.assertGreater(result['memberCount'], 0)

    def test_sarc_rejects_incorrect_declared_size(self):
        raw = bytearray(self.raw['sarc'])
        struct.pack_into('<I', raw, 8, len(raw) + 1)
        with self.assertRaises(ValueError):
            self.parse('sarc', raw)

    def test_sarc_rejects_member_outside_container(self):
        raw = bytearray(self.raw['sarc'])
        struct.pack_into('<I', raw, 44, len(raw) + 1)
        with self.assertRaises(ValueError):
            self.parse('sarc', raw)

    def test_actual_xbb(self):
        result = self.parse('xbb')
        self.assertTrue(result['supported'])
        self.assertEqual(result['format'], 'XBB1')
        self.assertGreater(result['memberCount'], 0)

    def test_xbb_rejects_excessive_member_count(self):
        raw = bytearray(self.raw['xbb'])
        struct.pack_into('<I', raw, 4, 100001)
        with self.assertRaises(ValueError):
            self.parse('xbb', raw)

    def test_xbb_rejects_member_outside_container(self):
        raw = bytearray(self.raw['xbb'])
        struct.pack_into('<I', raw, 36, len(raw) + 1)
        with self.assertRaises(ValueError):
            self.parse('xbb', raw)

    def test_actual_text_with_controls_stays_qualified(self):
        result = ASSETS.classify_script(self.raw['script'])
        self.assertEqual(result['classification'], 'text-candidate-with-controls')
        self.assertEqual(result['controlBytes'], 8)
        self.assertEqual(result['controlByteCounts'], {'0x1': 4, '0x16': 4})
        self.assertIn('cp932', result['decodableEncodings'])


if __name__ == '__main__':
    unittest.main()
