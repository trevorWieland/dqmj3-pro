from pathlib import Path
import sys
import unittest


ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_lookup020_build import WORK,windows
from squirrel_lookup020_oracle import Windows


def details(words):
    at=17
    message=[]
    if words[14]==0x08000010:
        message=words[at:at+words[16]]
        at+=words[16]+1
    length=words[at]
    text=bytes(words[at+1:at+1+length]).decode('ascii')
    at+=length+2
    events=[words[at+i*16:at+(i+1)*16] for i in range(words[5])]
    return {'message':bytes(message),'text':text,'events':events,'frees':words[at+words[5]*16:]}


@unittest.skipUnless(sys.platform=='win32','020 tests require actual Windows')
class LookupController(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native=Windows(windows(WORK/'tests/native'))

    def case(self,variant,cleanup=0):
        words=self.native.execute(variant,cleanup)
        self.assertEqual(words[3:5],[0,0])
        return words

    def test_declared_portable_bindings_and_extended_vtable_layout(self):
        self.assertEqual(self.native.layout,[152,280,64,72,132,144,152,80,48,40,88,264])

    def test_extended_object_is_complete_before_publication_observer(self):
        row=details(self.case(13))['events'][0]
        self.assertEqual(row[:3],[1,1,1])

    def test_null_delegate_does_not_require_vm_or_name_storage(self):
        words=self.case(64)
        self.assertEqual(words[:3],[0,0x08002000,21])
        self.assertEqual(words[12],1)

    def test_real_table_hit_returns_native_payload_and_disposes_old_compact_prototype(self):
        words=self.case(0)
        self.assertEqual(words[:3],[1,0x08000200,24])
        self.assertEqual(words[12],0)

    def test_array_integer_and_finite_float_indices(self):
        self.assertEqual(self.case(2)[:3],[1,0x08000200,24])
        self.assertEqual(self.case(3)[:3],[1,0x08002000,20])

    def test_numeric_array_out_of_bounds_returns_before_defaults_and_root_fallback(self):
        for variant in [4,5]:
            words=self.case(variant)
            self.assertEqual(words[:3],[0,0x08002000,21])
            self.assertEqual(words[12],1)

    def test_nonnumeric_array_key_uses_array_default_delegate(self):
        self.assertEqual(self.case(6)[:3],[1,0x05000002,1001])

    def test_string_index_sign_extends_measured_byte(self):
        self.assertEqual(self.case(7)[:3],[1,0x05000002,0xffffff80])

    def test_negative_string_index_preserves_physically_backed_original_padding_read(self):
        self.assertEqual(self.case(8)[:3],[1,0x05000002,0xfffffffe])

    def test_string_boundary_and_default_delegate(self):
        self.assertEqual(self.case(9)[0],0)
        self.assertEqual(self.case(10)[:3],[1,0x05000002,1002])

    def test_real_delegate_recursion_finds_native_payload_without_vm_invocation(self):
        words=self.case(11)
        self.assertEqual(words[:3],[1,0x08000200,24])
        self.assertEqual(words[13],0)

    def test_metamethod_miss_cleans_arguments_then_allows_root_fallback(self):
        words=self.case(12)
        self.assertEqual(words[:3],[1,0x05000002,2000])
        self.assertEqual(words[6],4)
        self.assertEqual(words[13],0)

    def test_typed_vm_call_boundary_uses_real_script_prototype_and_restores_stack(self):
        words=self.case(13)
        self.assertEqual(words[:3],[1,0x05000002,702])
        self.assertEqual(words[6],4)
        self.assertEqual(words[13],1)
        row=next(row for row in details(words)['events'] if row[0]==2)
        self.assertEqual(row[1:4],[2,4,6])

    def test_vm_call_failure_still_cleans_arguments_and_can_fall_back(self):
        words=self.case(14)
        self.assertEqual(words[:3],[1,0x05000002,2000])
        self.assertEqual(words[6],4)

    def test_root_fallback_compares_payload_and_type(self):
        self.assertEqual(self.case(15)[:3],[1,0x05000002,2000])
        self.assertEqual(self.case(16)[0],0)

    def test_builtin_defaults_use_separate_measured_delegate_slots(self):
        for variant,value in [(17,1003),(18,1005),(19,1005),(20,1009)]:
            self.assertEqual(self.case(variant)[:3],[1,0x05000002,value])

    def test_read_only_class_member_views_and_instance_fields_unwrap_weak(self):
        for variant in [21,23]:self.assertEqual(self.case(variant)[:3],[1,0x08000200,24])

    def test_class_and_instance_method_views_return_actual_script(self):
        for variant in [22,24]:self.assertEqual(self.case(variant)[:3],[1,0x08000100,25])

    def test_read_only_userdata_delegate_and_root_cases(self):
        self.assertEqual(self.case(25)[:3],[1,0x08000200,24])
        self.assertEqual(self.case(26)[:3],[1,0x05000002,2000])

    def test_raw_flag_suppresses_table_default_before_root_fallback(self):
        self.assertEqual(self.case(27)[:3],[1,0x05000002,2000])

    def test_byte_string_error_preserves_raw_high_byte(self):
        message=details(self.case(28))['message']
        self.assertEqual(message,b"the index 'ab\x80def' does not exist")

    def test_error_key_precision_is_fifty_bytes(self):
        message=details(self.case(29))['message']
        key=bytes(ord('A')+i%26 for i in range(50))
        self.assertEqual(message,b"the index '"+key+b"' does not exist")

    def test_integer_minimum_error_formatting(self):
        self.assertEqual(details(self.case(30))['message'],b"the index '-2147483648' does not exist")

    def test_error_type_names_handle_boolean_and_real_compact_prototype(self):
        self.assertEqual(details(self.case(31))['message'],b"the index 'bool' does not exist")
        self.assertEqual(details(self.case(32))['message'],b"the index 'function' does not exist")

    def test_error_publication_temporary_keeps_message_alive_during_old_owner_callback(self):
        rows=details(self.case(28))['events']
        before=next(row for row in rows if row[0]==5)
        self.assertEqual(before[6],0x08000010)
        self.assertEqual(before[10],2)

    def test_error_callback_can_clear_new_error_without_escaping_temporary_lifetime(self):
        words=self.case(33)
        self.assertEqual(words[14:16],[0x01000001,0])
        rows=[row for row in details(words)['events'] if row[0] in [5,6]]
        self.assertEqual(rows[0][10],2)
        self.assertEqual(rows[1][6],0x01000001)

    def test_all_known_type_names_unknown_tag_and_high_flags(self):
        names=['null','integer','float','bool','string','table','array','userdata','function','function',
            'generator','userdata','thread','function','class','instance','weakref']
        for index,name in enumerate(names):self.assertEqual(details(self.case(34+index))['text'],name)
        self.assertEqual(self.case(51)[0],0)
        self.assertEqual(details(self.case(52))['text'],'integer')

    def test_scratch_growth_shrink_queries_and_callback_overwrite_order(self):
        expected=[0,0,1,76,100,512,512,1024,6144,76,6]
        for index,capacity in enumerate(expected):self.assertEqual(self.case(53+index)[2],capacity)

    def test_callable_owner_survives_argument_cleanup_observer(self):
        words=self.case(65)
        row=next(row for row in details(words)['events'] if row[0]==5)
        self.assertEqual(row[11],1)
        self.assertEqual(words[10],0)

    def test_explicit_destination_and_error_cleanup_return_owned_refs(self):
        self.assertEqual(self.case(0,1)[7:9],[0x01000001,0])
        self.assertEqual(self.case(28,1)[14:16],[0x01000001,0])


if __name__=='__main__':
    unittest.main()
