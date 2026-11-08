import argparse
import atexit
import hashlib
import json
from pathlib import Path
import struct
import sys
import types

ROOT=Path.cwd();WORK=ROOT/'work/particle019-public-transport-v1'


def module(name,path):
    value=types.ModuleType(name);value.__file__=str(path);raw=path.read_bytes();exec(compile(raw,str(path),'exec'),value.__dict__);return value


def source(args):
    watch_module=module('velocity019_boundary_watch',WORK/'boundary_watch.py');holder={}
    if args.control=='after-finalizer':atexit.register(lambda:holder['watch'].probe('open'))
    if args.control=='after-finalizer-global-teardown':
        def late_global_teardown():watch_module.json=None;holder['watch'].probe('open')
        atexit.register(late_global_teardown)
    if args.control=='after-finalizer-json-teardown':
        def late_json_teardown():watch_module.json._default_encoder=None;holder['watch'].probe('open')
        atexit.register(late_json_teardown)
    watch=watch_module.BoundaryWatch019(ROOT,Path(args.monitor),Path(args.sidecar));holder['watch']=watch
    runner=module('velocity019_frozen_source_entry',Path(args.intake)/'run_source.py');runner.WORK=Path(args.intake);runner.ADAPTER=Path(args.intake)/'adapter';original_module=runner.module
    def loaded(name,path):
        value=original_module(name,path)
        if name=='velocity019_guard':
            base=value.Guard
            class WatchedGuard019(base):
                def __init__(self,*values,**options):super().__init__(*values,**options);watch.attach(self)
            value.Guard=WatchedGuard019
        return value
    runner.module=loaded;runner.main(argparse.Namespace(target=args.target,build=args.build,output=args.output,allow_mismatch=args.allow_mismatch,public_only=args.public_only));watch.phase='after-main'
    if args.control=='atexit':atexit.register(lambda:watch.probe('open'))
    elif args.control=='cleared-rejection':watch.probe('open');watch.guards[-1].rejected.clear()
    elif args.control not in ['none','after-finalizer','after-finalizer-global-teardown','after-finalizer-json-teardown']:watch.probe(args.control)


def original(args):
    intake=Path(args.intake);output=Path(args.reference_output);output.mkdir(exist_ok=False);manifest=json.loads((WORK/'input-manifest-v1.json').read_bytes());row=manifest['privateOriginalReferenceOnly'];original_path=ROOT/row['path'];reads=[]
    def original_image():
        data=original_path.read_bytes();assert len(data)==row['bytes']and hashlib.sha256(data).hexdigest()==row['sha256'];reads.append(dict(path=row['path'],bytes=len(data),sha256=row['sha256'],profile='original-reference-only'));return data
    provider=types.ModuleType('native_wave014_oracle');provider.original_image=original_image;assert' native_wave014_oracle'.strip()not in sys.modules;sys.modules['native_wave014_oracle']=provider
    for name in ['contract-v1.json','cases-v1.json']:(output/name).write_bytes((intake/name).read_bytes())
    oracle=module('velocity019_frozen_original_leaf',intake/'reference_units.py');oracle.WORK=output;oracle.main();expected=json.loads((intake/'original-unit-results-v1.public.json').read_bytes());actual=json.loads((output/'original-unit-results-v1.public.json').read_bytes());assert expected==actual
    import unicorn
    from unicorn import arm_const as arm
    import lzma
    fields=json.loads((intake/'fields-v2.public.json').read_bytes());callback=fields['callback'];particle=lzma.decompress((ROOT/callback['particleBefore']['path']).read_bytes());resource=lzma.decompress((ROOT/callback['resourceBefore']['path']).read_bytes());after=lzma.decompress((ROOT/callback['after']['path']).read_bytes());assert struct.unpack_from('<I',particle,0x144)[0]==callback['resource']
    image=original_image();cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);cpu.mem_map(0x535000,4096);cpu.mem_write(0x5354a4,image[0x4354a4:0x4354e4])
    for address,data in [(callback['particle'],particle),(callback['resource'],resource)]:cpu.mem_map(address&-4096,4096);cpu.mem_write(address,data)
    stack=0x70000000;stop=0x19000000;cpu.mem_map(stack,4096);cpu.mem_map(stop,4096);cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20);cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000);cpu.reg_write(arm.UC_ARM_REG_FPSCR,0);cpu.reg_write(arm.UC_ARM_REG_SP,stack+0xf00);cpu.reg_write(arm.UC_ARM_REG_LR,stop);cpu.reg_write(arm.UC_ARM_REG_R0,callback['particle']);cpu.reg_write(arm.UC_ARM_REG_S0,callback['stepBits']);visited=[]
    def code(machine,address,size,unused):
        assert 0x5354a4<=address<0x5354e0 and size==4 and bytes(machine.mem_read(address,4))==image[address-0x100000:address-0x100000+4];visited.append(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.emu_start(0x5354a4,stop,count=100);assert cpu.reg_read(arm.UC_ARM_REG_PC)==stop and bytes(cpu.mem_read(callback['particle'],360))==after and bytes(cpu.mem_read(callback['resource'],0x304))==resource
    report=dict(status='closed-original-leaf-public-and-genuine-object-replay-identical',publicCases=19,genuineObjectCases=1,incomingFpPrior58=fields['upstreamPriorByte58']['value'],actualOriginalObjectAddressesRetained=True,wholeUnknownParticleAndResourceCompared=True,instructions=visited,privateImageReads=reads,sourceHelperOriginalImagePermission=False,sourceCreditGranted=0);(output/'reference-receipt.public.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(dict(status=report['status'],cases=20)))


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--transport-root');parser.add_argument('--role',choices=['source','original'],required=True);parser.add_argument('--intake',required=True);parser.add_argument('--reference-output');parser.add_argument('--target',choices=['arm','a64','windows'],default='arm');parser.add_argument('--build',default='build-v1');parser.add_argument('--output',default='source-output');parser.add_argument('--monitor');parser.add_argument('--sidecar');parser.add_argument('--allow-mismatch',action='store_true');parser.add_argument('--public-only',action='store_true');parser.add_argument('--control',default='none');args=parser.parse_args()
    if args.transport_root:WORK=Path(args.transport_root)
    source(args)if args.role=='source'else original(args)
