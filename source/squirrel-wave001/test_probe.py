import importlib.util
import json
import os
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path
from unittest import mock

ROOT=Path(__file__).resolve().parents[2]
SPEC=importlib.util.spec_from_file_location('squirrel_public_probe',ROOT/'toolscripts/squirrel_source_wave001.py')
PROBE=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(PROBE)
REPORT_PATH=Path(os.environ.get('SQUIRREL_PUBLIC_REPORT',str(PROBE.EVIDENCE/'report.json')))


class SourceClosureTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report=json.loads(REPORT_PATH.read_text())
        cls.output=PROBE.WORK/'tests'
        cls.output.mkdir(parents=True,exist_ok=True)

    def test_import_integrity_and_historical_license(self):
        manifest=PROBE.check_import()
        self.assertEqual(len(manifest['files']),80)
        notice=(PROBE.UPSTREAM/'COPYRIGHT').read_text()
        self.assertIn('2003-2011 Alberto Demichelis',notice)
        self.assertIn('Altered source versions',notice)

    def test_import_and_coverage_remain_distinct(self):
        self.assertEqual(self.report['gameForkIdentity'],'unknown')
        self.assertEqual(self.report['acceptedRecoveredSourceFunctions'],0)
        self.assertEqual(self.report['acceptedRecoveredSourceBytes'],0)
        self.assertFalse(self.report['fullGameBuild'])
        self.assertTrue(self.report['sourceOnlyPublicVMAndCompilerWindowsBuild'])

    def test_abi_numeric_pointer_and_raw_widths(self):
        layouts={k:v['values'] for k,v in self.report['layouts'].items()}
        original=layouts['arm32-float-narrow-gc']
        host=layouts['windows64-float-narrow-gc']
        forced=layouts['windows64-forced-sq32-diagnostic']
        self.assertEqual([original[k] for k in ('pointerBytes','integerBytes','floatBytes','refcountBytes','objectBytes')],[4,4,4,4,8])
        self.assertEqual([host[k] for k in ('pointerBytes','integerBytes','floatBytes','refcountBytes','objectBytes')],[8,8,4,8,16])
        self.assertEqual([forced[k] for k in ('pointerBytes','integerBytes','rawBytes','unionBytes')],[8,4,4,8])
        self.assertNotEqual(layouts['arm32-double-narrow-gc']['objectBytes'],original['objectBytes'])
        self.assertNotEqual(layouts['arm32-float-narrow-no-gc']['vm.stack'],original['vm.stack'])
        self.assertEqual(layouts['arm32-float-wide-gc']['objectBytes'],original['objectBytes'])
        self.assertNotEqual(layouts['arm32-float-wide-gc']['charBytes'],original['charBytes'])

    def test_live_public_vm_programs_and_numeric_limitation(self):
        rows={r['name']:r for r in self.report['hostExecution']}
        self.assertEqual(len(rows),19)
        self.assertEqual(sum('passed' in r for r in rows.values()),15)
        self.assertTrue(all(r.get('passed',True) for r in rows.values()))
        self.assertEqual(rows['integer-width-boundary']['result'],2147483648)
        self.assertEqual(rows['float-width-boundary']['result'],0)
        self.assertEqual(rows['array-sort']['result'],1234)
        self.assertEqual(rows['closure']['result'],14)
        self.assertEqual(rows['generator']['result'],8)

    def test_original_public_method_pairs_and_compiled_controls(self):
        functions=self.report['functions']
        self.assertEqual({r['address'] for r in functions},set(PROBE.NATIVE))
        self.assertEqual(sum(r['boundedCases'] for r in functions),55)
        for row in functions:
            self.assertTrue(all(c['original']['semanticModelAgreed'] and c['public']['semanticModelAgreed'] for c in row['observations']))
            self.assertTrue(row['wrongSourceControl']['returnedToSentinel'])
            self.assertFalse(row['wrongSourceControl']['semanticModelAgreed'])
            self.assertEqual(row['liveUnresolvedRelocations'],[])
        self.assertEqual(sum(r['exactLinkedSpan'] for r in functions),2)

    def test_real_hash_width_difference_is_not_game_hash_proof(self):
        observation=self.report['publicStringHash']
        self.assertFalse(observation['gameBindingResolved'])
        self.assertEqual(len(observation['observations']),3)
        self.assertTrue(all(r['armExecution']['returnedToSentinel'] for r in observation['observations']))
        self.assertTrue(any(not r['sameLow32'] for r in observation['observations']))

    def test_import_corruption_is_rejected_without_original_mutation(self):
        folder=Path(tempfile.mkdtemp(prefix='corrupt-import-',dir=self.output)).resolve()
        self.assertTrue(folder.is_relative_to(self.output.resolve()))
        shutil.copytree(PROBE.UPSTREAM,folder/'upstream')
        shutil.copy2(PROBE.SOURCE/'upstream-manifest.json',folder/'upstream-manifest.json')
        path=folder/'upstream/include/squirrel.h'
        path.write_bytes(path.read_bytes()+b'\n')
        with mock.patch.object(PROBE,'SOURCE',folder),mock.patch.object(PROBE,'UPSTREAM',folder/'upstream'):
            with self.assertRaisesRegex(RuntimeError,'Imported upstream file changed'):
                PROBE.check_import()
        PROBE.check_import()

    def test_missing_live_function_dependency_is_rejected(self):
        folder=Path(tempfile.mkdtemp(prefix='missing-function-',dir=self.output)).resolve()
        self.assertTrue(folder.is_relative_to(self.output.resolve()))
        source=folder/'missing.c'
        source.write_text('extern int sq_definitely_missing(void);\nint sq_bad_entry(void){return sq_definitely_missing();}\n')
        obj=folder/'missing.o'
        result=subprocess.run([str(ROOT/'tools/clang-21/clang.exe'),'--target=arm-none-eabi','-mcpu=mpcore','-marm','-O2','-ffunction-sections','-c',str(source),'-o',str(obj)],capture_output=True)
        self.assertEqual(result.returncode,0,result.stderr.decode())
        with self.assertRaisesRegex(RuntimeError,'Build/execution failed'):
            PROBE.link_arm([obj],'sq_bad_entry',0x100000,folder,[],'missing')
        self.assertIn('undefined symbol: sq_definitely_missing',(folder/'missing-link.log').read_text())


if __name__=='__main__':
    unittest.main(verbosity=2)
