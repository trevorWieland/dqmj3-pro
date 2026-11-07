import ctypes
import json
import sys
import unittest
from pathlib import Path


ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_wave013_nfa as wave
import native_wave013_nfa_layout as model
from native_wave013_nfa_lifetime import LifetimeObserver


class PatternNfaTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work=wave.WORK/'nfa-tests'
        cls.receipts=[]
        cls.source=wave.build_tools.arm(cls.work/'source',cls.receipts)
        cls.original=wave.originals.load([row['canonicalOriginalAddress'] for row in cls.source['functions'].values()
                                        if row['canonicalOriginalAddress'] is not None])
        cls.library=ctypes.CDLL(str(wave.build_tools.windows(cls.work/'windows',cls.receipts)))
        cls.data=wave.services.load()
        cls.binding=wave.services.bind_windows(cls.library,cls.data)

    def compare(self,specification):
        reference=wave.runtime.execute(self.original,specification,self.data,seed=70,thumb=True,flags=15)
        source=wave.runtime.execute(self.source,specification,self.data,source=True,seed=70,thumb=True,flags=15)
        wave.runtime.compare(source,reference)
        native=wave.native.execute(self.library,self.binding,specification,reference,seed=70)
        self.assertTrue(native['everyOtherByteAgrees'])
        return reference

    def states(self,reference):
        memory,base=reference['after'],reference['layout']['base']
        head=base+0x2104
        at=int.from_bytes(memory[0x2108:0x210c],'little')
        result=[]
        while at!=head:
            self.assertLess(len(result),2624)
            offset=at-base
            edge_head=at+8
            edge=int.from_bytes(memory[offset+12:offset+16],'little')
            edges=[]
            while edge!=edge_head:
                self.assertLess(len(edges),2624)
                position=edge-base
                kind=memory[position+12]
                ranges=[]
                node=int.from_bytes(memory[position+20:position+24],'little')
                while node!=edge+16:
                    self.assertLess(len(ranges),2624)
                    local=node-base
                    ranges.append([int.from_bytes(memory[local+8:local+10],'little'),int.from_bytes(memory[local+10:local+12],'little')])
                    node=int.from_bytes(memory[local+4:local+8],'little')
                edges.append({'kind':kind,'destination':int.from_bytes(memory[position+8:position+12],'little'),
                              'value':int.from_bytes(memory[position+14:position+16],'little'),'ranges':ranges})
                edge=int.from_bytes(memory[position+4:position+8],'little')
            result.append({'address':at,'id':int.from_bytes(memory[offset+20:offset+24],'little'),'edges':edges})
            at=int.from_bytes(memory[offset+4:offset+8],'little')
        return result

    def test_empty_and_alternation_build_complete_owned_state_lists(self):
        for pattern,count in [('',1),('a',2),('ab',3),('a|b',4),('(ab|c)',5)]:
            reference=self.compare({'pattern':pattern})
            self.assertEqual(reference['result'],0)
            self.assertEqual([row['id'] for row in self.states(reference)],list(range(count)))

    def test_ascii_literal_adds_measured_case_equivalent(self):
        state=self.states(self.compare({'pattern':'a'}))[0]
        self.assertEqual([edge['value'] for edge in state['edges']],[97,65])

    def test_repetition_zero_removes_original_edges_and_keeps_epsilon(self):
        rows=self.states(self.compare({'pattern':'a{0}'}))
        self.assertEqual([edge['kind'] for edge in rows[0]['edges']],[1])
        self.assertEqual(rows[0]['edges'][0]['destination'],rows[1]['address'])

    def test_star_uses_initial_accepting_state_and_back_edge(self):
        reference=self.compare({'pattern':'a*'})
        rows=self.states(reference)
        accept=int.from_bytes(reference['after'][0x2110:0x2114],'little')
        self.assertEqual(accept,rows[0]['address'])
        self.assertEqual(rows[1]['edges'][0]['destination'],rows[0]['address'])

    def test_clone_repetition_retains_disjoint_source_states(self):
        rows=self.states(self.compare({'pattern':'a{2}'}))
        self.assertEqual(len(rows),4)
        self.assertEqual(sum(len(row['edges']) for row in rows),5)

    def test_class_case_expansion_merges_adjacent_ranges(self):
        rows=self.states(self.compare({'pattern':'[a-z]'}))
        self.assertEqual(rows[0]['edges'][0]['ranges'],[[65,90],[97,122],[304,305],[383,383],[8490,8490]])

    def test_original_class_errors_and_nested_item_count_are_preserved(self):
        for pattern,result in [('[b-a]',7),('[[ab]]',6),('[]',6),('(',3)]:
            self.assertEqual(self.compare({'pattern':pattern})['result'],result)

    def test_negated_ascii_property_keeps_utf16_upper_boundary(self):
        rows=self.states(self.compare({'pattern':'\\P{ASCII}'}))
        self.assertEqual(rows[0]['edges'][0]['ranges'],[[128,65535]])

    def test_single_zero_complement_preserves_original_empty_quirk(self):
        reference=self.compare({'range_cycles':1,'range_initial':[0,0]})
        base=reference['layout']['base']
        self.assertEqual(int.from_bytes(reference['after'][0x2404:0x2408],'little'),base+0x2400)

    def test_intersection_oom_keeps_original_partial_trim(self):
        reference=self.compare({'range_steps':[{'insert':[3,10]},{'intersection':[[2,4]]}],'free_slots':2})
        self.assertEqual(reference['result'],0)
        self.assertEqual(reference['after'][0x8008:0x800c],bytes([3,0,4,0]))

    def test_reallocation_reinitializes_retired_fields_before_use(self):
        reference=self.compare({'range_cycles':1800})
        self.assertGreater(reference['lifetime']['reinitializedByteEvents'],0)
        self.assertEqual(reference['lifetime']['readBeforeReinitialization'],[])

    def test_readonly_data_cannot_be_executed_as_the_source_root(self):
        broken={**self.source,'functions':{**self.source['functions']}}
        broken['functions']['pattern_compile_nfa']={**broken['functions']['pattern_compile_nfa'],
                                                  'address':broken['readonlyRanges'][0][0]}
        with self.assertRaisesRegex(RuntimeError,'escaped owned'):
            wave.runtime.execute(broken,{'pattern':'a'},self.data,source=True)

    def test_invalid_data_binding_preserves_previous_valid_service(self):
        invalid=wave.services.UnicodeData()
        self.assertEqual(self.library.pattern_bind_unicode_data(ctypes.byref(invalid)),0)
        self.library.fn_004c35b0.argtypes=[ctypes.c_uint]
        self.library.fn_004c35b0.restype=ctypes.c_void_p
        value=self.library.fn_004c35b0(97)
        base=ctypes.addressof(self.binding['buffers'][0])
        self.assertGreaterEqual(value,base)
        self.assertLess(value,base+1398*8)
        self.assertTrue(wave.services.unchanged(self.binding))

    def test_effective_runtime_identities_are_recorded_without_hiding_package_differences(self):
        import importlib.metadata
        import capstone
        import unicorn
        values = {'schemaVersion': 1, 'producer': wave.record(Path(__file__)),
                  'capstoneDistribution': importlib.metadata.version('capstone'),
                  'capstoneNative': list(capstone.cs_version()),
                  'capstoneModuleVersion': capstone.__version__,
                  'unicornDistribution': importlib.metadata.version('unicorn'),
                  'unicornNative': list(unicorn.uc_version()),
                  'capstoneDll': wave.record(ROOT/'tools/python/Lib/site-packages/capstone/lib/capstone.dll'),
                  'unicornDll': wave.record(ROOT/'tools/python/Lib/site-packages/unicorn/lib/unicorn.dll')}
        self.assertEqual(values['capstoneNative'][0], 5)
        self.assertEqual(values['unicornNative'][0], 2)
        wave.save(wave.OUTPUT/'runtime-identity.json', values)

    def test_packet_records_complete_body_set_and_qualified_lifetime_control(self):
        packet=json.loads((wave.OUTPUT/'packet.json').read_text())
        self.assertEqual(len(packet['functions']),40)
        self.assertEqual(packet['functionalOriginalInstructionBytes'],9564)
        self.assertEqual(packet['behavior']['u16CaseLookup']['queries'],65540)
        self.assertFalse(packet['behavior']['wholeMemoryEquivalenceClaimed'])
        control=next(row for row in packet['negativeControls'] if row['name']=='retired-map-read-order')
        self.assertTrue(control['returnedNormally'])
        self.assertTrue(control['lifetime']['readBeforeReinitialization'])
        self.assertEqual(packet['dependencies']['retainedOriginalExecutableHelpers'],[])
        self.assertFalse(packet['platform']['wholeGameBuildOrExecution'])


class ArenaLifetimeObserverTests(unittest.TestCase):
    def observer(self):
        value=LifetimeObserver(0x3000000)
        before=bytearray(model.SIZE)
        before[0x1000]=1
        value.initialize(before)
        value.write(0x3001000,1,0,1)
        return value

    def test_write_while_free_does_not_restore_a_lifetime(self):
        observer=self.observer()
        observer.write(0x3008000,4,0,2)
        observer.read(0x3008000,4,3)
        self.assertTrue(observer.violations)

    def test_reallocation_does_not_initialize_retired_fields(self):
        observer=self.observer()
        observer.write(0x3001000,1,1,2)
        observer.write(0x3008000,1,0,3)
        observer.read(0x3008000,4,4)
        self.assertEqual(observer.violations[0]['retiredOffsets'],[0x8001,0x8002,0x8003])

    def test_complete_field_write_after_reallocation_allows_read(self):
        observer=self.observer()
        observer.write(0x3001000,1,1,2)
        observer.write(0x3008000,4,0,3)
        observer.read(0x3008000,4,4)
        self.assertEqual(observer.violations,[])

    def test_projection_maps_interior_state_ring_and_rejects_live_stack_link(self):
        original=model.encode({'pattern':''},0x3000000,4,1)
        native=model.encode({'pattern':''},0x100000000,8,1)
        projection=model.Projection(original,native)
        projection.allocate(0x3008000,2,'state',0x4c04a0)
        self.assertEqual(projection.pointer(0x3008008),0x100008010)
        projection.write(0x3008000,4,0x2000f00,0x4c387c)
        after=bytearray(original['before']);after[0x1000]=1
        with self.assertRaisesRegex(ValueError,'live/non-link'):
            projection.qualified_masks(after)


if __name__=='__main__':
    unittest.main()
