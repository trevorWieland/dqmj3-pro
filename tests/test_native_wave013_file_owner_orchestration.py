import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))

import native_wave013_file_owner_state as state
import native_wave013_file_owner_provider_layout as abi_tools
from native_wave013_file_owner_cases import cases
from native_wave013_file_owner_mutations import mutations,apply
from native_wave013_file_owner_evidence import headers


class OwnerRepresentation(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.abi=abi_tools.layouts(ROOT/'work/wave013-native/file-owner-unit-layout',[])['profiles']

    def layouts(self,specification=None):
        callbacks={name:0 for name in ['provider_open','provider_close','provider_read','provider_size','file_close','heap_free',
            'cfg_region','cfg_language','cfg_failure','sync_thread','sync_acquire','sync_release','backend_work','backend_mount',
            'backend_unmount','backend_open','backend_release','backend_delete','backend_failure']}
        original=state.encode(specification or {},0x3000000,4,2,self.abi['arm'],callbacks,0x855dd4,0x85238c)
        native=state.encode(specification or {},0x100000000,8,2,self.abi['windows'],callbacks,0x200000000,0x200001000)
        return original,native

    def test_real_provider_target_methods(self):
        self.assertEqual((self.abi['arm']['sizeMethod'],self.abi['arm']['destroyMethod']),(12,48))

    def test_real_provider_native_methods(self):
        self.assertEqual((self.abi['windows']['sizeMethod'],self.abi['windows']['destroyMethod']),(24,96))

    def test_owner_storage_layout_adaptation(self):
        a,b=self.layouts()
        self.assertEqual((a['ownerBytes'],b['ownerBytes']),(52,96))
        self.assertEqual((a['storageBytes'],b['storageBytes']),(65536,107520))
        self.assertEqual((a['allocationBytes'],b['allocationBytes']),(65536,110592))

    def test_payload_budgets_do_not_widen(self):
        a,b=self.layouts()
        for layout in [a,b]:
            self.assertEqual(layout['resourceWork']-layout['fileBuffer'],16384)
            self.assertEqual(layout['candidateStorage']-layout['resourceWork'],2048)
            self.assertEqual(state.STORAGE+layout['storageBytes']-layout['candidateStorage'],2048)

    def test_intrusive_owner_node_is_typed(self):
        a,b=self.layouts();p=state.Projection(a,b)
        self.assertEqual(p.pointer(a['base']+0x3004,'heap.anchor'),b['base']+0x3008)

    def test_intrusive_identity_rejected_as_storage(self):
        a,b=self.layouts()
        with self.assertRaises(ValueError):state.Projection(a,b).pointer(a['base']+0x3004,'owner.storage')

    def test_owner_method_table_identity_is_scoped(self):
        a,b=self.layouts();p=state.Projection(a,b)
        self.assertEqual(p.pointer(0x855dd4,'owner.operations'),b['ownerOperations'])
        with self.assertRaises(ValueError):p.pointer(0x855dd4,'owner.storage')

    def test_original_tls_identity_is_not_truncated(self):
        a,b=self.layouts();p=state.Projection(a,b)
        self.assertEqual(p.pointer(state.TLS,'heap.mutex.thread'),b['base']+0x5100)
        with self.assertRaises(ValueError):p.pointer(state.TLS,'owner.storage')

    def test_file_pointer_translation_preserves_interior(self):
        a,b=self.layouts();p=state.Projection(a,b)
        self.assertEqual(p.pointer(a['base']+a['fileBuffer']+14,'owner.file_buffer'),b['base']+b['fileBuffer']+14)

    def test_scalar_flags_crossing_store_preserves_file_id(self):
        a,b=self.layouts();p=state.Projection(a,b)
        p.write(a['base']+state.OWNER+24,4,0x0d000000,0x4c4358)
        at=next(row['offset'] for row in b['fields'] if row['name']=='owner.file_id')
        self.assertEqual(p.expected[at],13)

    def test_native_pointer_write_remains_full_width(self):
        a,b=self.layouts();p=state.Projection(a,b)
        p.write(a['base']+state.OWNER+28,4,a['base']+state.STORAGE,0x4c3e08)
        at=next(row['offset'] for row in b['fields'] if row['name']=='owner.storage')
        self.assertEqual(int.from_bytes(p.expected[at:at+8],'little'),b['base']+state.STORAGE)

    def test_partial_pointer_write_rejected(self):
        a,b=self.layouts()
        with self.assertRaises(ValueError):state.Projection(a,b).write(a['base']+state.OWNER+28,2,0,0x4c3e08)

    def test_provider_trace_is_not_outside_old_projection_limit(self):
        a,b=self.layouts();p=state.Projection(a,b)
        row=next(item for item in a['fields'] if item['name']=='provider.open_calls')
        p.write(a['base']+row['offset'],4,2,0xa00000)
        at=next(item['offset'] for item in b['fields'] if item['name']==row['name'])
        self.assertEqual(int.from_bytes(p.expected[at:at+4],'little'),2)

    def test_snapshot_preserves_target_to_native_pointer_mapping(self):
        a,b=self.layouts();p=state.Projection(a,b)
        row=next(item for item in a['fields'] if item['name']=='snapshot.operations')
        p.write(a['base']+row['offset'],4,0x855dd4,0xa00000)
        at=next(item['offset'] for item in b['fields'] if item['name']==row['name'])
        self.assertEqual(int.from_bytes(p.expected[at:at+8],'little'),b['ownerOperations'])

    def test_cases_cover_all_seventeen_file_identifiers(self):
        self.assertEqual(len([row for row in cases() if row['name'].startswith('locale-file-')]),17)

    def test_validation_and_teardown_cases_are_explicit(self):
        names={row['name'] for row in cases()}
        self.assertIn('apply-null-flags',names);self.assertIn('delete-001',names)
        self.assertIn('unregistered-provider',names)

    def test_mutations_change_real_authored_bodies(self):
        for name,filename,before,after,specification in mutations():
            text=(ROOT/'src/native/wave013'/filename).read_text()
            self.assertNotEqual(apply(name,text,before,after),text)

    def test_quoted_dependencies_are_complete(self):
        found=headers([ROOT/'src/native/wave013/pattern_file_owner_apply.c'])
        self.assertIn(ROOT/'src/native/wave013/pattern_file_owner_view.h',found)
        self.assertIn(ROOT/'src/native/wave013/pattern_file_view.h',found)


if __name__=='__main__':unittest.main()
