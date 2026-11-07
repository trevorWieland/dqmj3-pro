import hashlib
import json
import struct
import unittest
from squirrel_generator044_state_build import ROOT,WORK,SOURCE
from squirrel_generator044_state_replay import source_closure,python_closure,PRIMARY,CONTROLS
from squirrel_generator044_state_model import decode,roles,validate_native
from squirrel_generator044_state_native import Windows


class Generator046(unittest.TestCase):
 @classmethod
 def setUpClass(cls):
  cls.report=json.loads((WORK/PRIMARY/'execution.json').read_text());cls.controls=json.loads((WORK/CONTROLS/'controls.json').read_text())
  cls.by_case={(r['profile'],r['cleanup']):r for r in cls.report['cases']}
 def test_four_target_corpus(self):
  self.assertEqual((self.report['caseSets'],self.report['targetObservations']),(88,352));self.assertTrue(all(r['nativeModelsValidated']for r in self.report['cases']))
 def test_complete_arm_comparison_arenas(self):
  for row in self.report['cases']:self.assertEqual(row['originalArenaSha256'],row['sourceArenaSha256']);self.assertTrue(row['wholeArenaEqual'])
 def test_strengthened_native_model_recheck(self):
  row=json.loads((WORK/'native-model-validation.json').read_text());self.assertEqual(row['validatedObservations'],176)
  self.assertTrue(row['allPassed']);self.assertEqual(row['model']['sha256'],hashlib.sha256((ROOT/row['model']['path']).read_bytes()).hexdigest())
 def test_exact_condition_partition(self):
  coverage=self.report['coverage'];self.assertEqual([len(r['coveredPCs'])for r in coverage],[156,250,30])
  conditions=json.loads((ROOT/'evidence/lanes/squirrel-generator046/qualification-conditions.json').read_text())
  expected={pc for r in conditions['validDomainUnobserved']+conditions['outsideQualifiedDomain']for pc in r['pcs']}
  self.assertEqual(expected,{pc for row in coverage for pc in row['unobservedPCs']})
 def test_actual_vm_and_frame_widths(self):
  for row in self.report['cases']:
   self.assertEqual(decode(row['originalWords'])['header'][1:3],[4,168])
   for key in['windowsWords','androidModelWords']:
    value=decode(row[key]);self.assertEqual(value['header'][1:3],[8,264]);self.assertGreater(value['lifetime']['header'][5]|value['lifetime']['header'][6]<<32,0xffffffff)
 def test_native_current_pointer_corruption_rejected(self):
  row=self.by_case[(36,0)];observation=Windows(WORK/PRIMARY/'windows/generator044.dll').execute(36,0)
  validate_native(observation,dict(words=row['originalWords']))
  damaged=bytearray(observation['arena']);current=struct.unpack_from('<Q',damaged,0x6000+216)[0];struct.pack_into('<Q',damaged,0x6000+216,current-72)
  with self.assertRaises(ValueError):validate_native(dict(observation,arena=bytes(damaged)),dict(words=row['originalWords']))
 def test_all_dynamic_buffers_have_typed_roots(self):
  for row in self.report['cases']:
   record=decode(row['windowsWords']);labels=roles(record)
   for block in record['lifetime']['blocks']:
    if block['kind']in[7,8,12,14]:self.assertIn(block['id'],labels)
 def test_repeated_saved_slot_zero_behavior(self):
  record=decode(self.by_case[(10,0)]['originalWords']);generator=next(r for r in record['lifetime']['blocks']if r['kind']==6)
  self.assertEqual([v[0]for v in generator['vectors'][1]['values']],[0x01000001,0x08002000,0x08000010])
 def test_real_error_publication_order(self):
  record=decode(self.by_case[(16,0)]['originalWords'])
  self.assertTrue(any(row[8:10]==[0x08000010,2]for row in record['observations']))
 def test_normally_returning_controls(self):
  self.assertTrue(self.controls['allNormallyReturned']);self.assertEqual(len(self.controls['controls']),6);self.assertEqual(self.controls['sameFinalArenaControls'],2)
 def test_no_legacy_vm_storage_casts(self):
  for path in SOURCE.glob('*.c'):
   text=path.read_text()
   for name in['SqLookupVmStorage020','SqVmCallStorage022','SqExecuteStorage028']:self.assertNotIn(name,text)
 def test_owned_source_header_closure(self):
  self.assertLessEqual(set(SOURCE.glob('*.c'))|set(SOURCE.glob('*.h')),source_closure());self.assertIn(ROOT/'toolscripts/squirrel_generator044_state_packet.py',python_closure())
 def test_frozen044_unchanged(self):
  path=ROOT/'evidence/lanes/squirrel-generator044/ready.json'
  self.assertEqual(hashlib.sha256(path.read_bytes()).hexdigest(),'697c044d9897da2b2a6e7e0856f8cbdfeddbec10de5c520e0114fe9da9384d94')
  for row in json.loads(path.read_text())['files']:self.assertEqual(hashlib.sha256((ROOT/row['path']).read_bytes()).hexdigest(),row['sha256'])


if __name__=='__main__':unittest.main()
