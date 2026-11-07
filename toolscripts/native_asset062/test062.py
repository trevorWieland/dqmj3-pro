import struct
import tempfile
import unittest
from pathlib import Path
from build062 import build
from runtime062 import Runtime,SIZE
from controls062 import packet
from records_proof062 import program
from seed_proof062 import observe
from manager_proof062 import case
from lifetime_proof062 import initialize,destroy

WORK=Path(__file__).resolve().parent


class Providers062Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        folder=WORK/'test-artifacts';folder.mkdir(exist_ok=True);cls.temporary=tempfile.TemporaryDirectory(prefix='fresh-',dir=folder);cls.output=Path(cls.temporary.name)
        for target in ['arm','windows','a64']:build(cls.output/target,target)
        cls.runtimes={t:Runtime(t,cls.output,heap_services=True,seed_entry=True,manager_entry=True,lifetime_entry=True)for t in ['original','arm','windows','a64']}

    @classmethod
    def tearDownClass(cls):
        for runtime in cls.runtimes.values():runtime.close()
        cls.temporary.cleanup()

    def test_full_block_requires_exhaustion_query(self):
        for runtime in self.runtimes.values():packet(runtime,'full-completion')

    def test_first_payload_receive_clears_all_unused_bytes(self):
        for runtime in self.runtimes.values():packet(runtime,'packet-zero')

    def test_actual_metadata_receiver_clips_saved_frame_tail(self):
        for runtime in self.runtimes.values():packet(runtime,'metadata-clip')

    def test_vector_genuine_growth_and_dispose_order(self):
        values=[program(r,65)for r in self.runtimes.values()];self.assertTrue(all(v==values[0]for v in values));self.assertEqual(values[0][-1]['capacity'],104)

    def test_first_queue_preserves_noncanonical_flag_byte(self):
        values=[program(r,5,0)for r in self.runtimes.values()];self.assertTrue(all(v==values[0]for v in values))

    def test_second_queue_uses_its_actual_native_offset(self):
        values=[program(r,5,1)for r in self.runtimes.values()];self.assertTrue(all(v==values[0]for v in values))

    def test_unsigned_seed_extremes_and_high_table_pointers(self):
        for seed in [0,1,0x80000000,0xffffffff]:
            values=[observe(r,seed)for r in self.runtimes.values()];self.assertTrue(all(v==values[0]for v in values))

    def test_manager_calls_genuine_request_provider(self):
        for runtime in self.runtimes.values():self.assertEqual(case(runtime,'matches',7,255,True)['returnedAliasOffset'],1)

    def test_disabled_binding_skips_request_callback(self):
        for runtime in self.runtimes.values():self.assertEqual(case(runtime,'matches',2,0,True)['returnedAliasOffset'],0)

    def test_actual_slot_record_stride_and_pointer_width(self):
        for runtime in self.runtimes.values():case(runtime,'record',7)

    def test_word_and_both_block_publications(self):
        for runtime in self.runtimes.values():
            for kind in ['post-word','post-block3','post-block8']:case(runtime,kind,3)

    def test_unsafe_packet_extents_and_cursor_rejected_before_native_call(self):
        data=bytearray(b'\xa7'*SIZE);struct.pack_into('<i',data,0x500,-1)
        for runtime in self.runtimes.values():
            with self.assertRaises(ValueError):runtime.run('resource_packet_slice062',data,[0x6000,0x1000,0x500])
            with self.assertRaises(ValueError):runtime.run('resource_metadata_receive062',data,[SIZE-8,0x1000,0x500])
            with self.assertRaises(ValueError):case(runtime,'record',8)

    def test_resource_constructor_keeps_inactive_fields_defined(self):
        for runtime in self.runtimes.values():initialize(runtime,0xa7)

    def test_owned_scratch_release_precedes_clear_even_on_reentry(self):
        for runtime in self.runtimes.values():destroy(runtime,True,1,0xa7)

    def test_missing_member_constructor_overlay_is_not_fabricated(self):
        runtime=Runtime('original',self.output)
        try:
            with self.assertRaisesRegex(ValueError,'canonical ownership'):initialize(runtime,0xa7)
        finally:runtime.close()

    def test_missing_thumb_overlay_is_not_silently_filled(self):
        runtime=Runtime('original',self.output)
        try:
            with self.assertRaisesRegex(ValueError,'canonical ownership'):observe(runtime,1)
        finally:runtime.close()

    def test_missing_query_overlay_is_not_a_fixture_return(self):
        runtime=Runtime('original',self.output)
        try:
            with self.assertRaisesRegex(ValueError,'canonical ownership'):case(runtime,'matches',0,1,True)
        finally:runtime.close()

if __name__=='__main__':unittest.main()
