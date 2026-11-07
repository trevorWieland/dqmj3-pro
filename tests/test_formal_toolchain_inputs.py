import hashlib
import json
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


class FormalToolchainInputs(unittest.TestCase):
    def test_independent_solver_is_in_offline_dependency_lock(self):
        lock = json.loads((ROOT / 'tools.lock.json').read_text())
        wheels = [row for row in lock['wheels'] if row['name'] == 'cvc5']
        self.assertEqual(len(wheels), 1)
        self.assertEqual(wheels[0]['version'], '1.4.2')
        self.assertEqual(wheels[0]['sha256'], '0ee0a51862d9e8ae8a38572909641a88cdf8d5e1640dee481b24289b6811b9da')
        self.assertTrue(wheels[0]['url'].startswith('https://files.pythonhosted.org/'))
        metadata = json.loads((ROOT / lock['formalAuditRuntime']['cvc5Metadata']).read_text())
        candidates = [row for row in metadata['urls'] if row['filename'] == wheels[0]['filename']]
        self.assertEqual(len(candidates), 1)
        self.assertEqual(candidates[0]['digests']['sha256'], wheels[0]['sha256'])

    def test_prior_queries_are_owned_immutable_public_inputs(self):
        path = ROOT / 'evidence/lanes/formal-audit-wave002/frozen-prior/manifest.json'
        manifest = json.loads(path.read_text())
        pilot = ROOT / manifest['pilot']['path']
        self.assertTrue(pilot.resolve().is_relative_to(path.parent.resolve()))
        self.assertEqual(hashlib.sha256(pilot.read_bytes()).hexdigest(), manifest['pilot']['sha256'])
        proofs = json.loads(pilot.read_text())['proofs']
        self.assertEqual(len(proofs), len(manifest['queries']))
        for proof in proofs:
            selected = [row for row in manifest['queries'] if row['originalPath'] == proof['query']['path']]
            self.assertEqual(len(selected), 1)
            query = ROOT / selected[0]['path']
            self.assertTrue(query.resolve().is_relative_to(path.parent.resolve()))
            self.assertEqual(hashlib.sha256(query.read_bytes()).hexdigest(), proof['query']['sha256'])

    def test_ghidra_runtime_is_project_owned_and_fully_enumerated(self):
        lock = json.loads((ROOT / 'tools.lock.json').read_text())
        prefix = lock['formalAuditRuntime']['ghidraRoot'] + '/'
        self.assertTrue(prefix.startswith('tools/formal-audit-wave002/'))
        files = [row for row in lock['files'] if row['path'].startswith(prefix)]
        self.assertGreater(len(files), 5000)
        names = {row['path'][len(prefix):] for row in files}
        for name in ('support/analyzeHeadless.bat', 'Ghidra/Processors/ARM/data/languages/ARM6_le.sla',
                     'Ghidra/Framework/SoftwareModeling/lib/SoftwareModeling.jar'):
            self.assertIn(name, names)
        self.assertEqual(len(names), len(files))


if __name__ == '__main__':
    unittest.main()
