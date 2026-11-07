import copy
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import refresh_functional_source_names as names


def json_bytes(value):
    return (json.dumps(value, indent=2) + '\n').encode()


def sha(data):
    return hashlib.sha256(data).hexdigest()


class FunctionalSourceNamesIntegrationTests(unittest.TestCase):
    def assert_rejection_is_transactional(self, appended, malformed=None):
        workspace = (ROOT / 'work/temporary-refresh-functional-source-names').resolve()
        workspace.mkdir(parents=True, exist_ok=True)
        with tempfile.TemporaryDirectory(prefix='rejection-', dir=workspace) as temporary:
            root = Path(temporary).resolve()
            self.assertTrue(root.is_relative_to(workspace))

            def write(relative, data):
                path = root / relative
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(data)
                return path

            old = b'#define fn_00100000 recovered_a\n'
            header = write(names.HEADER, old)
            packet = {'functions': [{'symbolNames': names.identity(names.HEADER, old)}]}
            first = write('evidence/functional/first.json', json_bytes(packet))
            second_bytes = (json.dumps(packet, separators=(',', ':')).encode()
                            if malformed == 'packet' else json_bytes(packet))
            second = write('evidence/functional/second.json', second_bytes)
            registry_value = {'functions': [
                {'packet': {'path': path.relative_to(root).as_posix(),
                            'sha256': sha(path.read_bytes())}} for path in (first, second)]}
            registry_bytes = (json.dumps(registry_value, separators=(',', ':')).encode()
                              if malformed == 'registry' else json_bytes(registry_value))
            registry = write('config/functional-functions.json', registry_bytes)
            write('config/build-units.json', json_bytes({'units': []}))
            source = write('source/fixture.c', b'unsigned recovered_a(void) { return 1; }\n')
            behavior = write('evidence/lanes/frozen/behavior.json', json_bytes({'allPassed': True}))
            frozen = write('evidence/lanes/frozen/packet.json', json_bytes(packet))
            base = ['git', '-C', str(root), '-c', 'user.name=Fixture',
                    '-c', 'user.email=fixture@example.invalid', '-c', 'commit.gpgsign=false',
                    '-c', 'core.hooksPath=' + str(root / 'no-hooks')]
            for arguments in (['init', '--quiet'], ['add', '.'],
                              ['commit', '--quiet', '-m', 'Synthetic rejection baseline']):
                subprocess.check_output(base + arguments, stderr=subprocess.STDOUT)
            revision = subprocess.check_output(base + ['rev-parse', 'HEAD']).decode().strip()
            header.write_bytes(old + appended)
            before = {path: path.read_bytes() for path in
                      (header, first, second, registry, source, behavior, frozen)}
            receipt = root / 'evidence/verification/rejected-refresh.json'
            with self.assertRaises(ValueError):
                names.refresh(root, revision, receipt)
            for path, contents in before.items():
                self.assertEqual(path.read_bytes(), contents, path.relative_to(root).as_posix())
            self.assertFalse(receipt.exists())

    def test_later_packet_or_registry_format_failure_does_not_partially_write(self):
        for malformed in ('packet', 'registry'):
            with self.subTest(malformed=malformed):
                self.assert_rejection_is_transactional(
                    b'#define fn_00100004 recovered_b\n', malformed)

    def test_appended_undef_is_rejected_without_any_mutation(self):
        self.assert_rejection_is_transactional(
            b'#define fn_00100004 recovered_b\n#undef fn_00100000\n')

    def test_git_root_refresh_without_optional_bytes_preserves_runtime_and_receipt(self):
        workspace = (ROOT / 'work/temporary-refresh-functional-source-names').resolve()
        workspace.mkdir(parents=True, exist_ok=True)
        with tempfile.TemporaryDirectory(prefix='git-fixture-', dir=workspace) as temporary:
            root = Path(temporary).resolve()
            self.assertTrue(root.is_relative_to(workspace))

            def write(relative, data):
                path = root / relative
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(data)
                return path

            def git(*arguments):
                return subprocess.check_output([
                    'git', '-C', str(root), '-c', 'user.name=Fixture',
                    '-c', 'user.email=fixture@example.invalid', '-c', 'commit.gpgsign=false',
                    '-c', 'core.hooksPath=' + str(root / 'no-hooks'), *arguments],
                    stderr=subprocess.STDOUT)

            old_header = b'#define fn_00100000 recovered_a\n'
            header = write(names.HEADER, old_header)
            old_pin = names.identity(names.HEADER, old_header)
            source = write('source/fixture.c', b'unsigned recovered_a(unsigned value) { return value + 1; }\n')
            behavior = write('evidence/lanes/frozen/behavior.json', json_bytes({
                'allPassed': True, 'orderedDigest': 'synthetic-only', 'cases': 3}))
            frozen_packet = write('evidence/lanes/frozen/packet.json', json_bytes({
                'functions': [{'symbolNames': old_pin}], 'immutableLane': True}))
            packet = {
                'schemaVersion': 1,
                'functions': [{
                    'symbol': 'fn_00100000', 'sourceName': 'recovered_a',
                    'symbolNames': old_pin.copy(),
                    'source': {'path': 'source/fixture.c', 'sha256': sha(source.read_bytes())},
                    'behavior': {'path': 'evidence/lanes/frozen/behavior.json',
                                 'sha256': sha(behavior.read_bytes())}}],
                'headers': [old_pin.copy()], 'sourceDependencies': [old_pin.copy()]}
            original_packet = copy.deepcopy(packet)
            active = write('evidence/functional/active.json', json_bytes(packet))
            reference = {'path': 'evidence/functional/active.json', 'sha256': sha(active.read_bytes())}
            registry = write('config/functional-functions.json', json_bytes({
                'functions': [{'name': 'fn_00100000', 'packet': reference}]}))
            write('config/build-units.json', json_bytes({
                'units': [{'path': 'source/fixture.c', 'headers': []}]}))
            frozen_files = {path: path.read_bytes() for path in (source, behavior, frozen_packet)}
            git('init', '--quiet')
            git('add', '.')
            git('commit', '--quiet', '-m', 'Synthetic metadata baseline')
            revision = git('rev-parse', 'HEAD').decode().strip()
            current_header = old_header + b'#define fn_00100004 recovered_b\n'
            header.write_bytes(current_header)
            receipt = root / 'evidence/verification/refresh.json'

            result = names.refresh(root, revision, receipt)
            self.assertEqual(result, {'packets': 1, 'aliasPins': 3, 'mappings': 2})
            refreshed = json.loads(active.read_bytes())
            new_pin = names.identity(names.HEADER, current_header)
            self.assertEqual(refreshed['functions'][0]['symbolNames'], new_pin)
            self.assertEqual(refreshed['headers'], [new_pin])
            self.assertEqual(refreshed['sourceDependencies'], [new_pin])
            for field in ('source', 'behavior'):
                self.assertEqual(refreshed['functions'][0][field], original_packet['functions'][0][field])
            new_reference = json.loads(registry.read_bytes())['functions'][0]['packet']
            self.assertEqual(set(new_reference), {'path', 'sha256'})
            self.assertEqual(new_reference['path'], reference['path'])
            self.assertEqual(new_reference['sha256'], sha(active.read_bytes()))
            recorded = json.loads(receipt.read_bytes())
            self.assertEqual(recorded['packets'][0]['before'], reference)
            self.assertEqual(recorded['packets'][0]['after'], new_reference)
            self.assertEqual(recorded['registryAfter']['sha256'], sha(registry.read_bytes()))
            self.assertEqual(recorded['currentHeader'], new_pin)
            self.assertFalse(recorded['runtimeSourceChanged'])
            for path, before in frozen_files.items():
                self.assertEqual(path.read_bytes(), before)

            first_receipt = receipt.read_bytes()
            first_registry, first_active = registry.read_bytes(), active.read_bytes()
            self.assertEqual(names.refresh(root, revision, receipt),
                             {'packets': 0, 'aliasPins': 0, 'mappings': 2})
            self.assertEqual(receipt.read_bytes(), first_receipt)
            self.assertEqual(registry.read_bytes(), first_registry)
            self.assertEqual(active.read_bytes(), first_active)
            for path, before in frozen_files.items():
                self.assertEqual(path.read_bytes(), before)


if __name__ == '__main__':
    unittest.main()
