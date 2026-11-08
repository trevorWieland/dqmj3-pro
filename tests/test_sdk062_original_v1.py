import json
from pathlib import Path
import sys
import unittest
from unittest.mock import patch
ROOT=next(p for p in Path(__file__).resolve().parents if(p/'AGENTS.md').is_file())
sys.path.insert(0,str(ROOT/'toolscripts'))
import sdk062_original_v1 as oracle

class PoisonHistoricalPath:
    def __fspath__(self):raise AssertionError('historical path must never be resolved or read')

class OracleTests(unittest.TestCase):
    def synthetic(self):
        values={'generated/update-content0/code.bin':bytes(16),'generated/update-content0/exheader.bin':b'synthetic-header','evidence/lanes/native-inventory-completion/seeded/update-census.json':json.dumps({'functions':[{'address':0x100000,'ranges':[{'start':0x100000,'endExclusive':0x100004}]}]}).encode()}
        layout={'segments':[{'name':'text','pages':1,'initializedBytes':16,'address':0x100000,'codeBinOffset':0}],'bssBytes':0}
        with patch.object(oracle,'frozen_input',side_effect=values.__getitem__),patch.object(oracle.inventory,'code_layout',return_value=layout):
            return oracle.Original(PoisonHistoricalPath())
    def test_no_historical_mapping_or_path_lookup(self):
        original=self.synthetic()
        self.assertEqual(list(original.cpu.mem_regions()),[(0x100000,0x100fff,5),(oracle.RAM,oracle.RAM+0xfffff,7),(oracle.STACK,oracle.STACK+0x1ffff,7),(oracle.STOP,oracle.STOP+4095,7)])
        self.assertEqual(original.symbols,{})
        self.assertEqual(original.fixture_ranges,[])
    def test_canonical_input_tamper_rejected(self):
        with patch.object(Path,'read_bytes',return_value=b'wrong canonical image'):
            with self.assertRaisesRegex(ValueError,'canonical input changed'):
                oracle.frozen_input('generated/update-content0/code.bin')
    def test_original_ownership_and_endpoint_negatives(self):
        original=self.synthetic();original.code(original.cpu,0x100000,4,None)
        self.assertEqual(original.coverage,{0x100000})
        with self.assertRaisesRegex(ValueError,'lacks canonical ownership'):
            original.code(original.cpu,0x100004,4,None)
        with self.assertRaisesRegex(ValueError,'undeclared authored endpoint'):
            original.code(original.cpu,0x1300000,4,None)
        self.assertEqual(original.coverage,{0x100000})
if __name__=='__main__':unittest.main(verbosity=2)
