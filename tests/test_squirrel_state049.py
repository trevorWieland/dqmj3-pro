import copy
import ctypes
import sys
import unittest
import uuid
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_state049_build as build
from squirrel_state049_model import FRAME_KEYS
from squirrel_state049_native import execute, maps
from squirrel_state049_observe import Observer


@unittest.skipUnless(sys.platform == 'win32', 'This ABI qualification executes the actual Windows DLL')
class Startup049Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        folder = ROOT / 'work/squirrel-state049/tests' / uuid.uuid4().hex
        cls.library = ctypes.CDLL(str(build.windows(folder, [])))
        cls.mapping = maps(cls.library)
        cls.frame = dict(zip(FRAME_KEYS,
            list((ctypes.c_uint * len(FRAME_KEYS)).in_dll(cls.library, 'sq_fixture_frame_layout049')), strict=True))
        cls.result = cls.run_case()
        cls.observer = Observer(cls.result, *cls.mapping)
        cls.state = cls.observer.observe()

    @classmethod
    def run_case(cls, scenario='cold', text=b'caller_value'):
        result = execute(cls.library, 'factory', seed=49, mask=text, scenario=scenario)
        result['frameAbi'] = cls.frame
        return result

    def changed(self, address, value, size=8):
        result = dict(self.result)
        after = bytearray(result['after'])
        offset = address - result['state']['base']
        after[offset:offset+size] = value.to_bytes(size, 'little')
        result['after'] = bytes(after)
        return result

    def test_actual_complete_native_storage_and_widened_owners(self):
        c = self.result['state']['core']
        self.assertEqual((c['vmBytes'], c['sharedBytes'], self.frame['frameBytes']), (264, 448, 72))
        self.assertGreater(self.observer.vm, 0xffffffff)
        self.assertGreater(self.observer.shared, 0xffffffff)
        self.assertTrue(self.state['vm']['ownerCorrect'])

    def test_every_live_allocation_has_one_exact_typed_budget(self):
        self.assertEqual(len(self.observer.roles), 276)
        self.assertTrue(all(row['logicalBytes'] == row['physicalBytes'] for row in self.observer.roles.values()))

    def test_root_vm_is_in_the_exact_gc_membership(self):
        self.assertEqual((len(self.state['tables']), len(self.state['closures']), len(self.state['gcChain'])), (14, 83, 98))
        self.assertEqual(self.state['gcChain'].count('root-vm'), 1)
        self.assertEqual(self.state['interned']['used'], 92)

    def test_factory_publishes_the_correct_thread_tag_and_reference(self):
        self.assertEqual(self.state['special'], {'type': 0x08001000, 'rootVmCorrect': True})
        self.assertEqual(self.state['vm']['references'], 1)
        self.assertTrue(self.state['vm']['vtableCorrect'])

    def test_empty_stack_and_real_call_frames_are_initialized(self):
        vm = self.state['vm']
        self.assertEqual((vm['top'], vm['base'], vm['callCount'], vm['allocatedCalls']), (0, 0, 0, 4))
        self.assertEqual((vm['stack']['size'], vm['stack']['capacity']), (64, 64))
        self.assertTrue(all(value == {'type': 0x01000001, 'zeroPayload': True} for value in vm['stack']['values']))
        self.assertEqual(len(vm['calls']['frames']), 4)
        self.assertTrue(vm['callStackCorrect'])

    def test_runtime_version_and_target_scalar_sizes_are_game_constants(self):
        table = next(row for row in self.state['tables'] if row['name'] == 'vm-root')
        values = {row['key']['string']: row['value'] for row in table['nodes'] if 'string' in row['key']}
        self.assertEqual(values['_version_'], {'type': 0x08000010, 'string': 'Squirrel 2.2.5 stable'})
        self.assertEqual([values[key]['integerBits'] for key in ['_charsize_', '_intsize_', '_floatsize_']], [1, 4, 4])

    def test_truncated_shared_owner_is_rejected(self):
        at = self.observer.vm + self.result['state']['core']['shared']
        with self.assertRaises(ValueError):
            Observer(self.changed(at, self.observer.shared & 0xffffffff), *self.mapping).observe()

    def test_changed_vm_vtable_is_visible(self):
        wrong = Observer(self.changed(self.observer.vm, 0xdeadc0de), *self.mapping).observe()
        self.assertFalse(wrong['vm']['vtableCorrect'])

    def test_call_stack_must_reference_the_real_frame_vector(self):
        c = self.result['state']['core']
        stack = self.observer.pointer(self.observer.vm + c['stack'])
        wrong = Observer(self.changed(self.observer.vm + c['callStack'], stack), *self.mapping).observe()
        self.assertFalse(wrong['vm']['callStackCorrect'])

    def test_source_overallocation_is_rejected(self):
        result = copy.deepcopy(self.result)
        block = next(row for row in result['allocations']
            if row['offset'] is not None and result['state']['base'] + row['offset'] == self.observer.vm)
        block['bytes'] += 8
        with self.assertRaisesRegex(ValueError, 'logical budget'):
            Observer(result, *self.mapping)

    def test_root_table_alias_is_rejected(self):
        c = self.result['state']['core']
        meta = self.observer.pointer(self.observer.shared + c['metaValue'])
        with self.assertRaisesRegex(ValueError, 'alias'):
            Observer(self.changed(self.observer.vm + c['root'] + c['objectValue'], meta), *self.mapping).observe()

    def test_wrong_type_api_returns_a_real_owned_error_string(self):
        result = self.run_case('wrong-type-name')
        observed = Observer(result, *self.mapping).observe()
        self.assertEqual(result['apiResults'], [{'function': 'fn_00177160', 'result': -1}])
        self.assertEqual(observed['vm']['objects']['error']['string'], 'the object is not a nativeclosure')

    def test_invalid_mask_preserves_the_defined_error_result(self):
        result = self.run_case('invalid-mask', b'a@')
        observed = Observer(result, *self.mapping).observe()
        self.assertEqual(result['apiResults'], [{'function': 'fn_00177270', 'result': -1}])
        self.assertEqual(observed['vm']['objects']['error']['string'], 'invalid typemask')

    def test_mask_sentinel_uses_the_compiled_mask_count(self):
        result = self.run_case('valid-mask', b'n|fs.t')
        observed = Observer(result, *self.mapping).observe()
        closure = next(row for row in observed['closures'] if row['name'] == 'vm-root.assert')
        self.assertEqual(closure['parameterCheckBits'], 4)
        self.assertEqual(closure['typeChecks']['values'], [6, 16, 0xffffffff, 32])

    def test_caller_temporary_strings_are_released_and_all_live_roles_remain_explained(self):
        result = self.run_case('push-pop', b'temporary_value')
        observer = Observer(result, *self.mapping)
        observed = observer.observe()
        self.assertEqual(observed, self.state)
        self.assertEqual(len(observer.roles), 276)


if __name__ == '__main__':
    unittest.main()
