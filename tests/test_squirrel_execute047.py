import json
import sys
import unittest
from datetime import datetime
from pathlib import Path
from elftools.elf.elffile import ELFFile
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_execute047_build as builder
import squirrel_execute047_model as model
import squirrel_execute047_oracle as oracle
import squirrel_execute047_android as android
from squirrel_source_wave002 import sha


class Execute047Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output=ROOT/'work/squirrel-execute047'/('tests-'+datetime.now().strftime('%Y%m%d-%H%M%S-%f'))
        cls.arm=builder.arm(cls.output/'arm');cls.windows=builder.native(cls.output/'windows');cls.a64=builder.android_model(cls.output/'android')
        cls.library=builder.component_library(cls.output/'component-library');cls.case=dict(mode=256,value=3,flags=1,cleanup=1)
        cls.source,cls.trace,cls.raw=oracle.execute(b'',cls.arm,cls.case,True)
        cls.portable,cls.portable_trace,unused=android.execute(cls.a64,cls.case)

    def test_all_fresh_windows_contracts(self):
        self.assertEqual([{k:row[k]for k in('mode','value','flags','cleanup')}for row in self.windows['observations']],model.cases())
        for row in self.windows['observations']:model.validate(row['words'],{k:row[k]for k in('mode','value','flags','cleanup')})

    def test_actual040_source_only_arm_and_high_native_pointer(self):
        model.validate(self.source['words'],self.case);model.validate(self.portable['words'],self.case)
        self.assertEqual(model.normalized(self.source['words'],self.case),model.normalized(self.portable['words'],self.case))
        self.assertEqual(self.source['words'][15:18],[168,180,4]);self.assertEqual(self.portable['words'][15:18],[264,448,8])
        self.assertFalse(self.trace['sourceOriginalModuleMapped']);self.assertTrue(self.portable_trace['highPointersAbove32Bits'])

    def test_actual_windows_matches_mixed_state(self):
        row=next(r for r in self.windows['observations']if all(r[k]==v for k,v in self.case.items()))
        self.assertEqual(model.normalized(self.source['words'],self.case),model.normalized(row['words'],self.case))

    def test_mixed_return_corruption_rejected(self):
        bad=list(self.source['words']);bad[7]=7
        with self.assertRaises(ValueError):model.validate(bad,self.case)

    def test_full_vm_wrong_field_corruption_rejected(self):
        bad=list(self.source['words']);bad[-15]=0xffffffff
        with self.assertRaises(ValueError):model.validate(bad,self.case)

    def test_ownership_order_corruption_rejected(self):
        bad=list(self.source['words']);bad[19+5]=0
        with self.assertRaises(ValueError):model.validate(bad,self.case)

    def test_original_mixed_arena_without_masks(self):
        path=ROOT/'generated/update-content0/code.bin'
        if not path.exists():self.skipTest('Private original module required')
        result,trace,raw=oracle.execute(path.read_bytes(),self.arm,self.case,False)
        self.assertEqual(result['words'],self.source['words']);self.assertEqual(raw,self.raw)
        self.assertFalse(trace['nativeInactiveFieldReadPcs'])

    def test_historical_layout_projection_is_metadata_only(self):
        case=dict(mode=0,value=0,flags=0,cleanup=0);row=next(r for r in self.windows['observations']if all(r[k]==v for k,v in case.items()))
        words=row['words'];self.assertEqual(words[19],264);projected=model.project_iteration_contract(words,case)
        self.assertEqual([i for i,(a,b)in enumerate(zip(words,projected))if a!=b],[19]);self.assertEqual(projected[19],296)
        bad=list(words);bad[19]=296
        with self.assertRaises(ValueError):model.validate(bad,case)

    def test_unsafe_vm_units_are_not_selected(self):
        paths={p.relative_to(ROOT).as_posix()for p in builder.sources(self.output,'normal')}
        for name in('source/squirrel-wave016/vm_storage.c','source/squirrel-wave020/lookup_bindings.c','source/squirrel-wave022/vm_storage.c','source/squirrel-wave028/storage.c','source/squirrel-wave035/storage.c'):
            self.assertNotIn(name,paths)
        for name in('call_storage.c','lookup_storage.c','object_storage.c','exception_storage.c','native_call.c','execute_core.c'):
            text=(builder.SOURCE/name).read_text(encoding='utf-8');self.assertNotIn('__builtin_offsetof(SqLookupVmStorage020',text);self.assertNotIn('(SqExecuteStorage028',text)

    def test_every047_c_and_header_is_small(self):
        for path in builder.SOURCE.glob('*'):
            if path.suffix in('.c','.h'):self.assertLessEqual(len(path.read_text(encoding='utf-8').splitlines()),500,path.name)

    def test_component_entry_executes_same_source(self):
        result,trace,unused=android.execute(self.a64,self.case,component_entry=True)
        self.assertEqual(result['words'],self.portable['words']);self.assertTrue(trace['freestandingComponentEntry']);self.assertFalse(trace['originalModuleMapped'])

    def test_component_native_call_profile(self):
        case=dict(mode=8,value=3,flags=1,cleanup=1);result,trace,unused=android.execute(self.a64,case,component_entry=True)
        model.validate(result['words'],case);self.assertTrue(trace['freestandingComponentEntry'])

    def test_shared_component_contains_actual_entry(self):
        with (ROOT/self.library['path']).open('rb')as stream:
            elf=ELFFile(stream);self.assertEqual(elf['e_type'],'ET_DYN');self.assertEqual(elf['e_machine'],'EM_AARCH64')
            symbols={s.name for s in elf.get_section_by_name('.dynsym').iter_symbols()};self.assertIn('sq_component_execute047',symbols);self.assertIn('sq_component047_abi',symbols)
            self.assertFalse([t for t in elf.get_section_by_name('.dynamic').iter_tags()if t.entry.d_tag=='DT_NEEDED'])
        self.assertFalse(self.library['originalModuleLinked']);self.assertTrue(self.library['fixtureProvisioningOnly'])

    def test_normally_returning_wrong_native_field_rejected(self):
        wrong=builder.arm(self.output/'wrong-field','wrong_native_depth_field');case=dict(mode=256,value=3,flags=0,cleanup=0)
        result,unused,unused_heap=oracle.execute(b'',wrong,case,True);self.assertTrue(result['returned']);self.assertEqual(result['words'][4],0)
        with self.assertRaises(ValueError):model.validate(result['words'],case)

    def test_frozen043_and_sealed040_inputs(self):
        for name,expected in[('evidence/lanes/squirrel-iteration043/ready.json','524af070d6429776a95a3d62e49fd2173127c16d13d0f816a91ea5102ea6d46a'),('evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json','23a38012b40a93aa1426a9fa08f424949d418a95c9cac939f7abdc2b237f2e28')]:
            path=ROOT/name;self.assertEqual(sha(path.read_bytes()),expected)
            for row in json.loads(path.read_text(encoding='utf-8'))['files']:self.assertEqual(sha((ROOT/row['path']).read_bytes()),row['sha256'])

    def test_versioned_definitions_do_not_duplicate_frozen_names(self):
        import re
        names=[]
        for filename in('lookup_storage.c','call_storage.c','object_storage.c','exception_storage.c','error.c','native_call.c','call_adapter.c','capture_bindings.c','iteration_bindings.c','execute_core.c'):
            text=(builder.SOURCE/filename).read_text(encoding='utf-8')
            names+=re.findall(r'(?m)^(?:const\s+)?(?:void|_Bool|Sq\w+)\s*\**\s+(sq_\w+)\s*\([^;{}]*\)\s*\{',text)
        self.assertTrue(names);self.assertEqual(len(names),len(set(names)))
        self.assertFalse([name for name in names if re.search(r'(016|020|022|028|035|039|041)$',name)])
        header=(builder.SOURCE/'binding_names.h').read_text(encoding='utf-8')
        for name in('sq_lookup_index_error020','sq_lookup_stringify020','sq_lookup_raise_format020'):self.assertIn('#define '+name+' ',header)

    def test_authoritative041_closure_and_every_selected_source(self):
        import squirrel_execute047 as producer
        path=ROOT/'evidence/verification/capture041-source-closure-supplement.json'
        self.assertEqual(sha(path.read_bytes()),'644dabcc1a6498690c1e5e0532161416c6aeb09ae491644cd00b3c8c1b543b15')
        for row in json.loads(path.read_text(encoding='utf-8'))['sourceFiles']:self.assertEqual(sha((ROOT/row['path']).read_bytes()),row['sha256'])
        pins={row['path']for row in producer.inputs()}
        for source in builder.sources(self.output,'normal'):self.assertIn(source.relative_to(ROOT).as_posix(),pins)

    def test_profile_bool_or_unknown_mode_rejected(self):
        for changes in(dict(flags=True),dict(mode=999),dict(cleanup=3)):
            with self.assertRaises(ValueError):model.validate_case(dict(self.case,**changes))


if __name__=='__main__':unittest.main()
