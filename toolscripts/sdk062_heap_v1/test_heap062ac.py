import json,struct,sys,tempfile,unittest
from pathlib import Path
W=Path(__file__).resolve().parent;R=next(p for p in W.parents if(p/'AGENTS.md').is_file());sys.path.insert(0,str(R/'toolscripts'))
from sdk062_original_v1 import Original
from unicorn import arm_const as arm
from heap_build062ac import build
from heap_runtime062ac import Runtime
from heap_model062ac import Model
from heap_proof062ac import ARMS,execute,program
from heap_default_proof062ac import execute as default_execute
from heap_registry_proof062ac import run as registry_run
from heap_domain062ac import request,disposal
from heap_setter_proof062ac import run as setter_run

NATIVE=[8,112,24,8,0,8,16,24,48,56,64,72,80,88,96,104,106,108,176,32,144,152]

class HeapTests(unittest.TestCase):
 @classmethod
 def setUpClass(cls):
  cls.output=Path(tempfile.mkdtemp(prefix='fresh-test-',dir=W));cls.build=build(cls.output/'build',full=True)
 def original(self):
  oracle=Original();oracle.cpu.mem_write(0x2020000,b'\xa7'*0x18000);return oracle
 def test_arm_layout(self):self.assertEqual(Runtime('arm',self.build).layout,ARMS)
 def test_windows_layout(self):self.assertEqual(Runtime('windows',self.build).layout,NATIVE)
 def test_a64_layout(self):self.assertEqual(Runtime('a64',self.build).layout,NATIVE)
 def test_actual_arm_allocator_full_arena(self):
  oracle=self.original();base=0x2020000;oracle.call(0x123c6c,[base,base+512,65536,1]);oracle.cpu.mem_write(base+52,struct.pack('<HHB',263,1,0));execute('arm',self.build,1,263,1,0,program(5480),oracle)
 def test_native_windows_ownership_model(self):execute('windows',self.build,1,263,1,0,program(5480))
 def test_high_a64_ownership_model(self):execute('a64',self.build,1,263,1,0,program(5480))
 def test_actual_default_heap_constructor_and_free(self):
  oracle=self.original();oracle.ranges.append((0x10b980,0x10ba20,0x10b980));oracle.ranges.sort();oracle.starts=[r[0]for r in oracle.ranges];oracle.cpu.mem_write(0x89a508,b'\1');oracle.cpu.reg_write(arm.UC_ARM_REG_C13_C0_3,0x2038000);oracle.call(0x10b980,[0x2020003,65536]);default_execute('arm',self.build,5864,False,oracle,3)
 def test_windows_sdk_prefix_lifecycle(self):default_execute('windows',self.build,5866,True)
 def test_a64_sdk_prefix_lifecycle(self):default_execute('a64',self.build,5866,True)
 def test_actual_nested_heap_registry(self):
  oracle=self.original();oracle.call(0x123c6c,[0x2020000,0x2020200,65536,0]);registry_run('arm',self.build,oracle)
 def test_native_nested_heap_registry(self):registry_run('windows',self.build);registry_run('a64',self.build)
 def test_invalid_requests_rejected_before_execution(self):
  for n,a in [(True,4),(-1,4),(0xffffffff,4),(4,0),(4,3),(4,-2147483648),(4,128)]:
   with self.assertRaises(ValueError):request(n,a)
 def test_invalid_disposal_rejected_before_execution(self):
  model=Model(0x2020000,ARMS);pointer=model.allocate(32,4)
  for bad in [0,pointer+1,pointer+4,pointer-16,0x1234]:
   with self.assertRaises(ValueError):disposal(model,bad)
  disposal(model,pointer);model.dispose(pointer)
  with self.assertRaises(ValueError):disposal(model,pointer)
 def test_corrupt_header_model_is_rejected(self):
  model=Model(0x2020000,ARMS);pointer=model.allocate(32,4);actual=bytearray(model.bytes);actual[pointer-model.base-16]^=1
  with self.assertRaises(ValueError):model.validate(actual)
 def test_native_setter_abi(self):setter_run('windows',self.build);setter_run('a64',self.build)
 def test_small_storage_rejected_without_writes(self):
  for target in ['arm','windows','a64']:
   runtime=Runtime(target,self.build);base=runtime.ram;runtime.store(base,b'\xa7'*0x18000);runtime.call('fixture_heap_reset062ac',[])
   for count in [0,1,4,8,12,16]:
    self.assertEqual(runtime.call('heap_initialize062ac',[base,base+513,count,0]),0)
    self.assertEqual(runtime.load(base,0x18000),b'\xa7'*0x18000)
  oracle=self.original();self.assertEqual(oracle.call(0x123c6c,[0x2020000,0x2020201,0,0]),0);self.assertEqual(bytes(oracle.cpu.mem_read(0x2020000,0x18000)),b'\xa7'*0x18000)
 def test_authored_sources_follow_file_rules(self):
  for path in (W/'source').glob('*.c'):
   text=path.read_text();self.assertLessEqual(len(text.splitlines()),500,path.name);self.assertNotIn('/*',text);self.assertNotIn('//',text)
if __name__=='__main__':unittest.main()
