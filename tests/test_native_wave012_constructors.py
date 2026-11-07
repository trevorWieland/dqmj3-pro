import ctypes
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_wave012_constructors as wave


class NativeConstructorTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work = wave.WORK / 'ctor-tests'
        cls.receipts = []
        cls.graph = wave.build_tools.arm(cls.work / 'source', cls.receipts)
        cls.library = ctypes.CDLL(str(wave.build_tools.windows(cls.work / 'windows', cls.receipts)))
        image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if wave.sha(image) != wave.MODULE_SHA:
            raise RuntimeError('Original module changed')
        cls.original = [(address, image[address - 0x100000:address - 0x100000 + size]) for address, size in wave.build_tools.SIZES.items()]

    def compare(self, spec):
        entry = wave.model.OPERATIONS[spec['operation']]
        original = wave.runtime.execute_arm(self.original, entry, spec, 70, True, 15)
        source = wave.runtime.execute_arm(self.graph['blocks'], wave.build_tools.PLACEMENTS[entry], spec, 70, True, 15)
        self.assertEqual(original['memorySha256'], source['memorySha256'])
        wave.runtime.execute_windows(self.library, spec, 70)
        return original

    def test_singleton_updates_scalar_payload_without_destroying_ring(self):
        for character in [0, 32768, 65535]:
            result = self.compare({'operation': 'single', 'character': character, 'nodes': 3, 'owner': True})
            self.assertTrue(result['immutableMemoryPreserved'])

    def test_default_constructor_retains_value_and_does_not_release_old_nodes(self):
        for operation in ['default_a', 'default_b']:
            spec = {'operation': operation, 'nodes': 3, 'owner': True}
            layout = wave.model.encode(spec, 0x3000000, 4)
            self.assertEqual(layout['before'][0x1000:0x1000 + 0xa40], layout['after'][0x1000:0x1000 + 0xa40])
            self.assertEqual(layout['before'][0x406:0x408], layout['after'][0x406:0x408])
            self.compare(spec)

    def test_owned_and_borrowed_destructor_semantics(self):
        for owner in [False, True]:
            self.compare({'operation': 'destroy', 'nodes': 16, 'owner': owner})
        empty = self.compare({'operation': 'destroy', 'nodes': 0, 'owner': True})
        self.assertEqual(empty['result'], 0x3200400)

    def test_state_constructor_resets_old_heads_and_preserves_padding(self):
        for result in [-128, 0, 127]:
            self.compare({'operation': 'state_default', 'result': result})

    def test_failed_state_initialization_keeps_partial_mutation(self):
        spec = {'operation': 'state_init', 'members': 17, 'clear': 1, 'pattern': 'full', 'next': 0}
        self.assertEqual(self.compare(spec)['result'], 0)
        for count in [0, 1, 15, 16, 17, 32, 128]:
            self.compare({'operation': 'state_init', 'members': count, 'clear': 1, 'pattern': 'empty', 'next': 0})

    def test_raw_clear_count_is_not_doubled_with_native_blocks(self):
        for clear in [0, 1, -1]:
            self.compare({'operation': 'state_init', 'members': 17, 'clear': clear, 'pattern': 'empty', 'next': 0})

    def test_five_real_source_mutations_return_and_fail_semantically(self):
        for name, file_name, before, after, spec in wave.mutations():
            with self.subTest(name=name):
                directory = self.work / 'negative' / name
                directory.mkdir(parents=True, exist_ok=True)
                source = directory / file_name
                source.write_text((ROOT / 'src/native/wave012' / file_name).read_text().replace(before, after))
                wrong = wave.build_tools.arm(directory / 'arm', self.receipts, {file_name: source})
                entry = wave.model.OPERATIONS[spec['operation']]
                with self.assertRaises(wave.runtime.SemanticMismatch) as caught:
                    wave.runtime.execute_arm(wrong['blocks'], wave.build_tools.PLACEMENTS[entry], spec, 1, True, 15)
                self.assertTrue(caught.exception.details['returnedNormally'])
                self.assertTrue(caught.exception.details['immutableMemoryPreserved'])
                library = ctypes.CDLL(str(wave.build_tools.windows(directory / 'windows', self.receipts, {file_name: source})))
                with self.assertRaises(wave.runtime.SemanticMismatch):
                    wave.runtime.execute_windows(library, spec, 1)


if __name__ == '__main__':
    unittest.main()
