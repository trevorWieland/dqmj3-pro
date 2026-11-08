import copy
import hashlib
import importlib.util
import json
import os
from pathlib import Path
import py_compile
import subprocess
import sys
import tempfile
import unittest
import replay_v3 as transport
W=Path(__file__).resolve().parent
class TransportTests(unittest.TestCase):
    def test_inherited_helper_hash_drift_rejected(self):
        source=json.loads((W/'source-manifest-v1.json').read_bytes());support=json.loads((W/'support-manifest-v3.json').read_bytes());self.assertEqual(len(support['inheritedFiles']),40)
        transport.inputs(source,support)
        changed=copy.deepcopy(support);changed['inheritedFiles'][0]['sha256']='0'*64
        with self.assertRaisesRegex(ValueError,'input changed'):transport.inputs(source,changed)
    def test_declared_root_escape_rejected_before_read(self):
        with self.assertRaisesRegex(ValueError,'escaped declared root'):transport.checked(W/'outside-missing',dict(bytes=0,sha256='0'*64),W/'test-owned/inside')
    def test_owned_source_tamper_rejected(self):
        root=W/'test-owned/guard';root.mkdir(parents=True,exist_ok=True);p=root/'sample.c';p.write_bytes(b'int value;');expected=transport.pin(p);transport.checked(p,expected,root);p.write_bytes(b'int other;')
        with self.assertRaisesRegex(ValueError,'input changed'):transport.checked(p,expected,root)
    def test_caught_audit_attempt_remains_terminal(self):
        command='from pathlib import Path;import replay_v3 as r;reads,libs,rejected=r.audited(r.ROOT,r.INTAKE,r.INTAKE/"test-owned/audit-current",set())\ntry: (r.ROOT/"work/sdk062-unapproved-missing-read").read_bytes()\nexcept ValueError: pass\nr.require_clean(rejected)'
        child=subprocess.run([sys.executable,'-c',command],cwd=W,capture_output=True,text=True,encoding='utf-8');self.assertNotEqual(child.returncode,0);self.assertIn('caught historical audit attempt is terminal',child.stderr)
    def test_caught_retained_sibling_receipt_read_is_terminal(self):
        root=W/'test-owned/audit-negative-root';sibling=root/'work/intake/retained-sibling/receipt.json';sibling.parent.mkdir(parents=True,exist_ok=True);sibling.write_text('{"status":"synthetic-retained-receipt"}',encoding='utf-8')
        command='import sys;from pathlib import Path;import replay_v3 as r;root=Path(sys.argv[1]);intake=root/"work/intake";reads,libs,rejected=r.audited(root,intake,intake/"current",set())\ntry: (intake/"retained-sibling/receipt.json").read_bytes()\nexcept ValueError: pass\nr.require_clean(rejected)'
        child=subprocess.run([sys.executable,'-c',command,str(root.resolve())],cwd=W,capture_output=True,text=True,encoding='utf-8');self.assertNotEqual(child.returncode,0);self.assertIn('caught historical audit attempt is terminal',child.stderr)
    def test_fresh_source_ignores_valid_looking_stale_pyc(self):
        root=W/'test-owned/fresh-import';root.mkdir(parents=True,exist_ok=True);p=root/'sdk_runtime_stale_probe.py';p.write_text('answer=1\n',encoding='utf-8');stamp=p.stat();old=sys.pycache_prefix
        try:
            sys.pycache_prefix=None;cache=importlib.util.cache_from_source(str(p));py_compile.compile(str(p),cfile=cache,doraise=True)
            p.write_text('answer=2\n',encoding='utf-8');os.utime(p,ns=(stamp.st_atime_ns,stamp.st_mtime_ns));self.assertTrue(Path(cache).is_file());self.assertEqual(p.stat().st_size,stamp.st_size)
            sys.pycache_prefix=str(root/'unwritten-cache');spec=importlib.util.spec_from_file_location('sdk_runtime_stale_probe',p);module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module);self.assertEqual(module.answer,2);self.assertFalse((root/'unwritten-cache').exists())
        finally:sys.pycache_prefix=old
if __name__=='__main__':unittest.main()
