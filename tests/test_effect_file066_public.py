import copy
import json
import os
from pathlib import Path
import sys
import unittest

SUPPORT = Path(os.environ.get('DQM_PUBLIC066_ADAPTER', Path(__file__).resolve().parents[1] / 'toolscripts'))
sys.path.insert(0, str(SUPPORT))
import effect_file066_public_guard as protection
import effect_file066_public_inputs as inputs


class PublicInputGuards(unittest.TestCase):
    def setUp(self):
        self.root = Path('C:/public066-test-root')
        self.output = self.root / 'work/current066'

    def test_historical_open_rejection_persists_if_caught(self):
        guard = protection.Guard(self.root, self.output, 'source', {})
        try:
            guard.location(self.root / 'work/old066/bytes.bin', 'open')
        except ValueError:
            pass
        with self.assertRaisesRegex(ValueError, 'including a caught attempt'):
            guard.assert_clean()

    def test_historical_stat_rejection_persists_if_caught(self):
        guard = protection.Guard(self.root, self.output, 'source', {})
        with self.assertRaises(ValueError):
            guard.location(self.root / 'work/old066/bytes.bin', 'stat-request')
        self.assertEqual(len(guard.rejected), 1)

    def test_current_output_prefix_does_not_allow_a_sibling(self):
        guard = protection.Guard(self.root, self.output, 'source', {})
        with self.assertRaises(ValueError):
            guard.location(self.root / 'work/current066-other/object.o', 'open')

    def test_exact_declared_metadata_maps_to_current_snapshot(self):
        old = self.root / 'work/old066/exact.json'
        new = self.output / 'metadata/exact.json'
        guard = protection.Guard(self.root, self.output, 'source', {old: new})
        self.assertEqual(guard.location(old, 'open'), guard.path(new))
        guard.assert_clean()

    def test_metadata_mapping_does_not_allow_neighbors(self):
        guard = protection.Guard(self.root, self.output, 'source', {
            self.root / 'work/old066/exact.json': self.output / 'metadata/exact.json'})
        with self.assertRaises(ValueError):
            guard.location(self.root / 'work/old066/other.json', 'open')

    def test_source_image_read_is_forbidden(self):
        guard = protection.Guard(self.root, self.output, 'source', {})
        with self.assertRaises(ValueError):
            guard.location(self.root / 'generated/update-content0/code.bin', 'open')

    def test_build_image_read_is_also_forbidden(self):
        guard = protection.Guard(self.root, self.output, 'build', {})
        with self.assertRaises(ValueError):
            guard.location(self.root / 'generated/update-content0/code.bin', 'open')

    def test_caught_original_constructor_attempt_still_fails(self):
        guard = protection.Guard(self.root, self.output, 'source', {})
        class Original:
            def __init__(self):
                raise AssertionError('Original constructor body must never start')
        try:
            guard.block_original_constructor(Original)()
        except ValueError:
            pass
        with self.assertRaises(ValueError):
            guard.assert_clean()

    def test_manifest_paths_cannot_escape_or_be_absolute(self):
        for path in ['../escape.c', '/escape.c', 'C:/escape.c', 'src/../../escape.c', 'src\\escape.c']:
            with self.subTest(path=path), self.assertRaises(ValueError):
                inputs.relative(path)

    def test_normal_quoted_source_path_remains_relative(self):
        self.assertEqual(inputs.relative('src/native/wave066-request/request.h'), Path('src/native/wave066-request/request.h'))


if __name__ == '__main__':
    unittest.main()
