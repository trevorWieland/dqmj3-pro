import copy
import ctypes
import sys
import unittest
import uuid
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_state045_build as build
import squirrel_state045_model as model
from squirrel_state045_native import execute,maps
from squirrel_state045_observe import Observer


@unittest.skipUnless(sys.platform=='win32','The qualified Windows initialization DLL requires its actual host')
class SharedInitialization045Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        folder=ROOT/'work/squirrel-state040/initialization045/tests'/uuid.uuid4().hex
        cls.library=ctypes.CDLL(str(build.windows(folder,[])));cls.result=execute(cls.library,'shared',451)
        cls.mapping=maps(cls.library);cls.observer=Observer(cls.result,*cls.mapping);cls.state=cls.observer.observe()

    def changed(self,address,value,size=8):
        result=dict(self.result);after=bytearray(result['after']);offset=address-result['state']['base']
        after[offset:offset+size]=value.to_bytes(size,'little');result['after']=bytes(after)
        return result

    def test_complete_graph_has_all_declared_live_allocations(self):
        self.assertEqual(len(self.observer.roles),227)
        self.assertEqual(sum(row['active'] for row in self.result['allocations']),227)

    def test_complete_graph_shape_and_exact_gc_membership(self):
        self.assertEqual((len(self.state['tables']),len(self.state['closures']),len(self.state['gcChain'])),(13,66,79))
        self.assertEqual(self.state['interned']['used'],71)

    def test_shared_vector_roles_follow_measured_callers(self):
        self.assertEqual(self.state['typeNames']['size'],15)
        self.assertEqual(self.state['metamethodNames']['size'],18)
        self.assertEqual(self.state['auxiliaryVector'],{'size':0,'capacity':0,'hasBacking':False,'values':[]})

    def test_callable_and_generator_publication_slots_are_distinct(self):
        names={row['name'] for row in self.state['closures']}
        self.assertIn('delegate4.getstatus',names)
        self.assertIn('delegate5.bindenv',names)
        self.assertNotIn('delegate4.bindenv',names)

    def test_root_owners_and_vtables_are_independently_expected(self):
        for row in [*self.state['tables'],*self.state['closures'],*self.state['interned']['strings']]:
            self.assertTrue(row['ownerCorrect']);self.assertTrue(row['vtableCorrect']);self.assertTrue(row['weakNull'])

    def test_callbacks_resolve_to57_distinct_actual_compiled_functions(self):
        self.assertEqual(len(self.mapping[1]),57)
        self.assertEqual(len(set(self.mapping[1].values())),57)

    def test_unknown_live_callback_pointer_is_rejected(self):
        address=next(iter(self.observer.closures));offset=self.result['state']['abi']['closureFunction']
        with self.assertRaisesRegex(ValueError,'callback'):
            Observer(self.changed(address+offset,0xdeadc0de),*self.mapping).observe()

    def test_gc_cycle_is_rejected(self):
        c=self.result['state']['core'];base=self.result['state']['base'];at=base+model.SHARED+c['chain']
        head=self.observer.pointer(at)
        with self.assertRaisesRegex(ValueError,'GC'):
            Observer(self.changed(head+c['nextOffset'],head),*self.mapping).observe()

    def test_truncated_native_owner_is_visible_as_semantic_mismatch(self):
        self.assertTrue(self.result['actualWidenedPointers']);address=next(iter(self.observer.closures))
        offset=self.result['state']['abi']['closureShared'];owner=self.result['state']['base']+model.SHARED
        wrong=Observer(self.changed(address+offset,owner&0xffffffff),*self.mapping).observe()
        self.assertTrue(any(not row['ownerCorrect'] for row in wrong['closures']))

    def test_root_table_alias_is_rejected(self):
        c=self.result['state']['core'];base=self.result['state']['base'];meta=self.observer.pointer(base+model.SHARED+c['metaValue'])
        with self.assertRaisesRegex(ValueError,'alias'):
            Observer(self.changed(base+model.SHARED+c['registry']+c['objectValue'],meta),*self.mapping).observe()

    def test_unexplained_live_allocation_is_rejected(self):
        result=copy.copy(self.result);result['allocations']=list(result['allocations'])+[
            {'ordinal':999,'offset':model.POOL+0xf0000,'bytes':16,'alignment':8,'active':True}]
        with self.assertRaisesRegex(ValueError,'unexplained'):
            Observer(result,*self.mapping).observe()

    def test_real_parameter_mask_special_cases(self):
        for text,returned,values in [(b'a|',0,None),(b'a| ',1,None),(b'a |b',0,[64]),(b'a| b',1,[72]),(b'.|a',0,[0xffffffff])]:
            result=execute(self.library,'mask',452,text)
            self.assertEqual(result['returned'],returned)
            self.assertEqual(result['mask']['values'],values)


if __name__=='__main__':unittest.main()
