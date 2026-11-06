import gzip
import importlib.util
import json
import struct
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch


ROOT = Path(__file__).resolve().parents[1]


def imported(name):
    spec = importlib.util.spec_from_file_location(name, ROOT / 'toolscripts' / (name + '.py'))
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


EXECUTABLE = imported('executable_inventory')
SCRIPT = imported('script_interfaces')


class ExecutableInventoryControls(unittest.TestCase):
    def test_prel31_signed_backward_and_forward(self):
        self.assertEqual(EXECUTABLE.prel31(0x7ffffff8, 0x100100), 0x1000f8)
        self.assertEqual(EXECUTABLE.prel31(0x00000008, 0x100100), 0x100108)

    def test_mapping_rejects_padding_as_initialized(self):
        segments = [{'address': 0x1000, 'initializedBytes': 0x10, 'pages': 1, 'codeBinOffset': 0}]
        self.assertEqual(EXECUTABLE.mapped_offset(0x100f, segments), 15)
        self.assertIsNone(EXECUTABLE.mapped_offset(0x1010, segments))
        self.assertEqual(EXECUTABLE.mapped_offset(0x1010, segments, False), 16)

    def test_nested_xbb_outside_member_rejected(self):
        data = bytearray(48)
        data[:4] = b'XBB\x01'
        struct.pack_into('<I', data, 4, 1)
        struct.pack_into('<II', data, 32, 48, 1)
        with self.assertRaises(ValueError):
            EXECUTABLE.nested_ranges(data)

    def test_nested_xbb_unnamed_member_supported(self):
        data = bytearray(52)
        data[:4] = b'XBB\x01'
        struct.pack_into('<I', data, 4, 1)
        struct.pack_into('<II', data, 32, 48, 4)
        self.assertEqual(EXECUTABLE.nested_ranges(data), [(48, 4)])

    def test_gzip_bound_is_enforced(self):
        compressed = gzip.compress(b'x' * 4096)
        with self.assertRaises(ValueError):
            EXECUTABLE.bounded_inflate(compressed, 1024)
        self.assertEqual(EXECUTABLE.bounded_inflate(compressed, 4096), b'x' * 4096)

    def test_gzip_truncation_and_trailing_stream_rejected(self):
        compressed = gzip.compress(b'test')
        with self.assertRaises(ValueError):
            EXECUTABLE.bounded_inflate(compressed[:-2], 100)
        with self.assertRaises(ValueError):
            EXECUTABLE.bounded_inflate(compressed + gzip.compress(b'other'), 100)

    def test_queue_counts_only_actual_interface_associations(self):
        functions = [{'address': address, 'mode': 'ARM', 'textBodyBytes': 8,
                      'ranges': [{'start': address, 'endExclusive': address + 8}],
                      'calledFunctionAddresses': calls}
                     for address, calls in [(0x1000, [0x1010]), (0x1010, [0x1000]), (0x1020, [])]]
        ghidra = {'codeSha256': '0' * 64, 'functions': functions}
        scripts = {'unresolvedCallIdentifierQueue': [{'identifierSha256': '1' * 64, 'callSites': 1,
                   'nativePointerWordReferences': [{'segment': 'text', 'pointerWordAddress': 0x1004}]}]}
        with tempfile.TemporaryDirectory() as directory, patch.object(EXECUTABLE, 'OUT', Path(directory)):
            (Path(directory) / 'ghidra-functions.json').write_text(json.dumps(ghidra))
            (Path(directory) / 'script-interfaces.json').write_text(json.dumps(scripts))
            result = EXECUTABLE.build_queue()
            self.assertEqual(result['scriptInterfaceCandidateFunctions'], 1)
            queue = json.loads((Path(directory) / 'reconstruction-queue.json').read_text())
            self.assertEqual(len(queue['candidateSCCs']), 2)
            self.assertEqual([row['addresses'] for row in queue['candidateSCCs'] if row['cyclic']], [[0x1000, 0x1010]])


class ScriptInterfaceControls(unittest.TestCase):
    def test_comments_and_strings_do_not_invent_calls(self):
        row = SCRIPT.analyze_script(b'function leaf(){} leaf(); print("invented()"); // falsecall()\n/* bad() */')
        self.assertEqual(row['definitions'], {SCRIPT.token_hash('leaf'): 1})
        self.assertEqual(row['calls'], {SCRIPT.token_hash('leaf'): 1, SCRIPT.token_hash('print'): 1})
        self.assertNotIn(SCRIPT.token_hash('invented'), row['calls'])

    def test_qualified_calls_and_assignment_functions_stay_distinct(self):
        row = SCRIPT.analyze_script(b'leaf <- function(){}; object.leaf(); leaf();')
        digest = SCRIPT.token_hash('leaf')
        self.assertEqual(row['definitions'][digest], 1)
        self.assertEqual(row['calls'][digest], 2)
        self.assertEqual(row['qualifiedCalls'][digest], 1)

    def test_literal_dependency_is_metadata_only(self):
        row = SCRIPT.analyze_script(b'load("Folder/child.nut");')
        dependency = row['literalDependencies'][0]
        self.assertEqual(dependency['literalSha256'], SCRIPT.token_hash('Folder/child.nut'))
        self.assertEqual(SCRIPT.resolve_literal(dependency['candidate'], '/data/Script/main.nut',
                                              {'/data/Script/Folder/child.nut'}), ['/data/Script/Folder/child.nut'])

    def test_dependency_traversal_does_not_resolve(self):
        self.assertEqual(SCRIPT.resolve_literal('../outside.nut', '/data/Script/a.nut',
                                               {'/data/outside.nut'}), [])

    def test_unterminated_source_is_rejected(self):
        with self.assertRaises(ValueError):
            SCRIPT.analyze_script(b'call("unterminated)')
        with self.assertRaises(ValueError):
            SCRIPT.analyze_script(b'/* unterminated')

    def test_escaped_quote_does_not_create_phantom_call(self):
        row = SCRIPT.analyze_script(b'print("quoted \\" escaped()"); actual();')
        self.assertIn(SCRIPT.token_hash('actual'), row['calls'])
        self.assertNotIn(SCRIPT.token_hash('escaped'), row['calls'])


if __name__ == '__main__':
    unittest.main()
