import hashlib
import json
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_capture041_model import parse,compare_native
from squirrel_coercion026_android import inspect


class Capture041(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report=json.loads((ROOT/'work/squirrel-capture041/primary-qualified/execution.json').read_text())
        cls.rows=cls.report['observations'];cls.terminals=cls.report['terminalObservations']

    def test_four_target_normal_and_terminal_sets(self):
        self.assertEqual((self.report['sets'],self.report['normalReturnSets'],self.report['terminalBoundarySets']),(136,132,4))
        self.assertEqual(self.report['targetObservations'],544)

    def test_frozen108_observations_and_defined_memory_preserved(self):
        self.assertEqual(self.report['preservedFrozen038Sets'],108)
        self.assertEqual(self.report['frozen038SourceComparisonViewsEqual'],108)
        for row in self.rows:
            self.assertEqual(row['armOriginal'],row['armSource'])
            self.assertTrue(row['armMemory']['definedMemoryEqual'])

    def test_legacy_identity_comparison_never_changes_executed_state(self):
        for row in self.rows:
            if row['variant']<54:
                view=row['frozen038Compatibility'];self.assertFalse(view['executedStateAltered'])
                self.assertEqual([item['arenaOffset']for item in view['typedFixtureAddressAliases']],[0xe000,0xe400,0xe600])
                self.assertEqual(len(view['actualSourceArenaSha256']),64)

    def test_all_frozen038_pins_unchanged(self):
        path=ROOT/'evidence/lanes/squirrel-capture038/ready.json'
        self.assertEqual(hashlib.sha256(path.read_bytes()).hexdigest(),'970446171bf8aabfb185b021623a12a455770d417651104ee40e9c58220ac6c1')
        record=json.loads(path.read_text());self.assertEqual(len(record['files']),32)
        for row in record['files']:
            data=(ROOT/row['path']).read_bytes();self.assertEqual(hashlib.sha256(data).hexdigest(),row['sha256'])

    def test_failed_get_and_byte_precision_error_reference(self):
        for row in self.rows:
            if 54<=row['variant']<60:
                state=parse(row['armOriginal'],0x2000000)
                if not row['cleanup']:self.assertLessEqual(len(state['text']),len(b"the index '' does not exist")+50)

    def test_old_error_owner_observes_new_error_already_retained(self):
        for row in self.rows:
            if 54<=row['variant']<60:
                events=parse(row['armOriginal'],0x2000000)['events']
                self.assertEqual(next(event for event in events if event[0]==1)[4:6],[0x08000010,2])

    def test_real_default_mutation_forces_reserve_and_growth(self):
        for row in self.rows:
            if 60<=row['variant']<=62:
                state=parse(row['armOriginal'],0x2000000)
                closure=next(block for block in state['blocks']if block['kind']==6)
                self.assertEqual(closure['vectors'][1][:2],(2,2))

    def test_last_temporary_owns_fresh_publication_until_weak_invalidation(self):
        for row in self.rows:
            if row['variant']in(63,64):
                events=parse(row['armOriginal'],0x2000000)['events']
                self.assertEqual([event[0]for event in events[:2]],[2,3])
                self.assertEqual(events[0][1],2);self.assertEqual(events[1][2],0x01000001)

    def test_wrap_hazard_is_recorded_without_reference_repair(self):
        for row in self.rows:
            if row['variant']==65:
                state=parse(row['armOriginal'],0x2000000)
                self.assertEqual(state['blocks'][1]['kind'],7);self.assertEqual(state['blocks'][1]['frees'],1)
        self.assertTrue(self.report['refcountWrapContextIsAnExplicitLifetimeHazard'])

    def test_panic_request_uses_actual_fallthrough_and_svc_arguments(self):
        for row in self.terminals[:2]:
            self.assertEqual(row['originalOutcome']['svc'],0x3c)
            self.assertEqual(row['originalOutcome']['actualPc'],0x12d61c)
            self.assertEqual(row['originalOutcome']['actualArguments'],[0,0,0])
            self.assertFalse(row['windows']['normalReturn'])

    def test_invalid_storage_is_explicit_portable_terminal_policy(self):
        for row,address,pc in zip(self.terminals[2:],[48,60],[0x196bf8,0x196e20]):
            self.assertEqual(row['originalOutcome']['actualFault']['address'],address)
            self.assertEqual(row['originalOutcome']['actualFault']['pc'],pc)
            self.assertEqual(row['sourceOutcome']['kind'],2)
            self.assertTrue(row['armMemory']['definedMemoryEqual'])

    def test_live_null_template_and_unforced_conditional_branch(self):
        for row in self.rows:
            self.assertEqual(row['actualStartupGlobals'][:2],[0x01000001,0])
            for read in row['liveNullTemplateReads']:self.assertEqual(read['type']&0x08000000,0)
        coverage=self.report['coverage'][0]
        self.assertEqual(coverage['coveredArmInstructions'],273)
        self.assertEqual(coverage['missingInstructionAddresses'],[0x196ca8,0x196cac,0x196cb0])

    def test_high_address_native_topology_and_independent_semantics(self):
        for row in self.rows:
            compare_native(row['variant'],row['armOriginal'],row['windows'],0x120000000)
            compare_native(row['variant'],row['armOriginal'],row['androidObjectModel'],0x110000000)

    def test_returning_controls_reject_semantics_and_order(self):
        controls=json.loads((ROOT/'work/squirrel-capture041/controls-corrected/controls.json').read_text())
        self.assertEqual(controls['count'],7);self.assertTrue(controls['allNormallyReturned']);self.assertTrue(controls['allRejected'])
        self.assertEqual(controls['nativeTargetNormalReturns'],14)
        self.assertGreaterEqual(controls['sameFinalSourceArenaControls'],1)

    def test_android_packaging_is_separate_from_kernel_or_device_execution(self):
        self.assertTrue(inspect(ROOT/'work/squirrel-capture041/primary-qualified/android/libcoercion026.so'))
        for row in self.terminals:self.assertFalse(row['physicalKernelOutcomeClaimed'])


if __name__=='__main__':unittest.main()
