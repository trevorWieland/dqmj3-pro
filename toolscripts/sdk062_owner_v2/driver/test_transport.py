import copy
import importlib.util
import json
import os
from pathlib import Path
import py_compile
import subprocess
import sys
import tempfile
import unittest
I=Path(__file__).resolve().parent
sys.dont_write_bytecode=True
sys.pycache_prefix=str(I/'guard-entry-unwritten')
sys.path.insert(0,str(I))
from contract import ROOT,checked,load,pin

class TransportTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.parent=Path(os.environ.get('OWNER_INTAKE_TEST_OUTPUT',str(I/'transport-tests-v1')))
        cls.parent.mkdir(parents=True,exist_ok=True)
    def child(self,action,source_only=False,synthetic=False,pinned=False):
        folder=Path(tempfile.mkdtemp(dir=self.parent));root=folder/'root'if synthetic else ROOT
        if synthetic:
            (root/'work/sibling').mkdir(parents=True);(root/'work/sibling/receipt.json').write_text('{}')
            (root/'generated').mkdir();(root/'generated/code.bin').write_bytes(b'fixture-code');(root/'generated/other.bin').write_bytes(b'other')
        reference={'files':[{'path':'generated/code.bin'}]}if synthetic else json.loads((I/'reference-inputs-v1.json').read_text())
        params=folder/'params.json';params.write_text(json.dumps(dict(root=str(root),reference=reference,source_only=source_only,action=action,pinned=pinned)))
        code='import sys,json;from pathlib import Path;sys.dont_write_bytecode=True;sys.pycache_prefix=sys.argv[1]+"/current/unwritten";sys.path[:0]=[sys.argv[2],sys.argv[3]+"/toolscripts"];import sdk062_original_v1;from gates import Gate;p=json.loads(Path(sys.argv[1]+"/params.json").read_text());root=Path(p["root"]);declared={root/"work/sibling/receipt.json"}if p["pinned"]else set();g=Gate(root,Path(sys.argv[1])/"current",declared,p["reference"],p["source_only"]);exec(p["action"])'
        child=subprocess.run([sys.executable,'-I','-B','-c',code,str(folder),str(I),str(ROOT)],capture_output=True,text=True)
        return child,root
    def terminal(self,action,**kwargs):
        child,root=self.child(action,**kwargs);self.assertNotEqual(child.returncode,0,child.stdout);self.assertIn('caught owner intake boundary attempt is terminal',child.stderr);return root
    def test_caught_missing_path_exists_is_terminal(self):
        self.terminal('\ntry:(root/"work/missing-private/receipt.json").exists()\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_caught_real_stat_is_terminal(self):
        self.terminal('import os\ntry:os.stat(root/"work/sibling/receipt.json")\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_caught_real_lstat_is_terminal(self):
        self.terminal('import os\ntry:os.lstat(root/"work/sibling/receipt.json")\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_caught_real_listdir_is_terminal(self):
        self.terminal('import os\ntry:os.listdir(root/"work/sibling")\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_caught_real_scandir_is_terminal(self):
        self.terminal('import os\ntry:list(os.scandir(root/"work/sibling"))\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_caught_path_stat_is_terminal(self):
        self.terminal('\ntry:(root/"work/sibling/receipt.json").stat()\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_pinned_file_stat_allowed_but_parent_enumeration_forbidden(self):
        self.terminal('import os;assert os.stat(root/"work/sibling/receipt.json").st_size==2\ntry:os.listdir(root/"work/sibling")\nexcept ValueError:pass\ng.require_clean()',synthetic=True,pinned=True)
    def test_bootstrap_native_stat_alias_is_terminal(self):
        self.terminal('import importlib._bootstrap_external as b\ntry:b._os.stat(root/"work/sibling/receipt.json")\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_recursive_source_only_test_selection(self):
        from gates import SourceOnlyLoader
        spec=importlib.util.spec_from_loader('owner_runner_filter',SourceOnlyLoader('owner_runner_filter',str(I/'run.py')));module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
        case=unittest.FunctionTestCase(lambda:None);nested=unittest.TestSuite([unittest.TestSuite([unittest.TestSuite([case])])]);self.assertEqual(list(module.individual_tests(nested)),[case])
    def test_source_original_construction_caught_is_terminal(self):
        self.terminal('import sdk062_original_v1 as o;g.install_original(o)\ntry:o.Original()\nexcept ValueError:pass\ng.require_clean()',source_only=True)
    def test_source_original_read_caught_is_terminal(self):
        self.terminal('\ntry:(root/"generated/update-content0/code.bin").read_bytes()\nexcept ValueError:pass\ng.require_clean()',source_only=True)
    def test_source_mode_cannot_promote_reference_profile(self):
        self.terminal('\ntry:\n with g.profile("original"):pass\nexcept ValueError:pass\ng.require_clean()',source_only=True)
    def test_nondeclared_original_rejected_even_reference(self):
        self.terminal('\ntry:\n with g.profile("original"):(root/"generated/other.bin").read_bytes()\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_original_write_rejected_before_synthetic_write(self):
        root=self.terminal('\ntry:g.audit("open",(str(root/"generated/code.bin"),"wb",0))\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
        self.assertEqual((root/'generated/code.bin').read_bytes(),b'fixture-code')
    def test_caught_retained_receipt_read_is_terminal(self):
        self.terminal('\ntry:(root/"work/sibling/receipt.json").read_bytes()\nexcept ValueError:pass\ng.require_clean()',synthetic=True)
    def test_exact_pinned_receipt_is_allowed(self):
        child,_=self.child('assert (root/"work/sibling/receipt.json").read_text()=="{}";g.require_clean()',synthetic=True,pinned=True);self.assertEqual(child.returncode,0,child.stderr)
    def test_declared_reference_read_is_allowed(self):
        child,_=self.child('\nwith g.profile("original"):assert (root/"generated/code.bin").read_bytes()==b"fixture-code"\ng.require_clean()',synthetic=True);self.assertEqual(child.returncode,0,child.stderr)
    def test_pure_source_loader_ignores_valid_stale_pyc(self):
        folder=Path(tempfile.mkdtemp(dir=self.parent));p=folder/'probe.py';p.write_text('answer=1\n');stamp=p.stat();cache=folder/'probe.pyc';py_compile.compile(str(p),cfile=str(cache),doraise=True);p.write_text('answer=2\n');os.utime(p,ns=(stamp.st_atime_ns,stamp.st_mtime_ns))
        from gates import SourceOnlyLoader
        spec=importlib.util.spec_from_loader('owner_stale_probe',SourceOnlyLoader('owner_stale_probe',str(p)));module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module);self.assertEqual(module.answer,2)
    def test_source_hash_tamper_fails(self):
        folder=Path(tempfile.mkdtemp(dir=self.parent));p=folder/'a.c';p.write_bytes(b'int a;');row=pin(p);p.write_bytes(b'int b;')
        with self.assertRaisesRegex(ValueError,'input changed'):checked(folder,'a.c',row)
    def test_parent_escape_fails_before_read(self):
        with self.assertRaisesRegex(ValueError,'path escape'):checked(I,'../missing',dict(bytes=0,sha256='0'*64))
    def test_fixture_role_swap_fails_before_execution(self):
        folder=Path(tempfile.mkdtemp(dir=self.parent));(folder/'provenance').mkdir();source=json.loads((I/'source-manifest-v1.json').read_text());a=next(r for r in source['files']if r['role']=='production-algorithm');b=next(r for r in source['files']if r['role']=='qualification-fixture');a['role'],b['role']=b['role'],a['role']
        (folder/'source-manifest-v1.json').write_text(json.dumps(source))
        for name in ['support-manifest-v1.json','reference-inputs-v1.json']:(folder/name).write_bytes((I/name).read_bytes())
        (folder/'provenance/providers-v1.json').write_bytes((I/'provenance/providers-v1.json').read_bytes())
        with self.assertRaisesRegex(ValueError,'role moved'):load(folder,True)

if __name__=='__main__':unittest.main(verbosity=2)
