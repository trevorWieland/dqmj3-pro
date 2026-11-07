import hashlib
import json
import struct
import unittest
from squirrel_generator044_build import ROOT,WORK,SOURCE,SOURCES
from squirrel_generator044_replay import source_closure,python_closure,PRIMARY,CONTROLS
from squirrel_generator044_model import decode,normalized,validate_native
from squirrel_generator044_native import Windows


class Generator044(unittest.TestCase):
 @classmethod
 def setUpClass(cls):
  cls.report=json.loads((WORK/PRIMARY/'execution.json').read_text());cls.controls=json.loads((WORK/CONTROLS/'controls.json').read_text())
 def test_four_target_corpus(self):
  self.assertEqual((self.report['caseSets'],self.report['targetObservations']),(34,136));self.assertTrue(all(r['nativeModelsValidated']for r in self.report['cases']))
 def test_whole_arm_arenas(self):
  for row in self.report['cases']:self.assertEqual(row['originalArenaSha256'],row['sourceArenaSha256']);self.assertTrue(row['wholeArenaEqual'])
 def test_complete_lifetime_coverage(self):
  for row in self.report['coverage'][1:]:self.assertEqual(row['unobservedPCs'],[])
 def test_factory_missing_paths_explicit(self):
  self.assertEqual(len(self.report['coverage'][0]['unobservedPCs']),6);self.assertIn('NULL-script',self.report['limits'][0])
 def test_full_width_native_models(self):
  for row in self.report['cases']:
   for key in['windowsWords','androidModelWords']:
    words=row[key];self.assertEqual(words[1:5],[8,192,72,24]);self.assertGreater(words[5]|words[6]<<32,0xffffffff)
 def test_ownership_models(self):
  for row in self.report['cases']:self.assertEqual(normalized(decode(row['originalWords'])),normalized(decode(row['windowsWords'])))
 def test_returning_order_controls(self):
  self.assertTrue(self.controls['allNormallyReturned']);self.assertEqual(len(self.controls['controls']),4);self.assertEqual(self.controls['sameFinalArenaControls'],3)
 def test_actual_native_pointer_corruption_rejected(self):
  case=self.report['cases'][0];observation=Windows(WORK/PRIMARY/'windows/generator044.dll').execute(0,0)
  validate_native(observation,dict(words=case['originalWords']))
  damaged=bytearray(observation['arena']);struct.pack_into('<Q',damaged,0x10200+40,0x1000)
  with self.assertRaises(ValueError):validate_native(dict(observation,arena=bytes(damaged)),dict(words=case['originalWords']))
 def test_every_owned_source_and_header_in_closure(self):
  self.assertLessEqual(set(SOURCE.glob('*.c'))|set(SOURCE.glob('*.h')),source_closure());self.assertIn(ROOT/'toolscripts/squirrel_generator044_packet.py',python_closure())
 def test_no_legacy_generator_source(self):
  self.assertFalse(any('squirrel-wave008'in str(p)or'squirrel-wave006'in str(p)for p in SOURCES))
 def test_sealed040_contract(self):
  path=ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json'
  self.assertEqual(hashlib.sha256(path.read_bytes()).hexdigest(),'23a38012b40a93aa1426a9fa08f424949d418a95c9cac939f7abdc2b237f2e28')


if __name__=='__main__':unittest.main()
