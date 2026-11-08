import argparse
import hashlib
import json
import lzma
from pathlib import Path
import shutil
import struct
import sys
import types

ROOT=Path.cwd();WORK=ROOT/'work/particle019-velocity-v1';ADAPTER=ROOT/'work/shader017-outer-v2/transport-v4/adapter'


def pin(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def module(name,path):
    value=types.ModuleType(name);value.__file__=str(path);exec(compile(path.read_bytes(),str(path),'exec'),value.__dict__);return value


def main(args):
    output=WORK/args.output;assert output.resolve().is_relative_to(WORK.resolve());output.mkdir(exist_ok=False);build=WORK/args.build;adapter_pin=pin(Path(__file__))
    fields=json.loads((WORK/'fields-v2.public.json').read_bytes());callback=fields['callback'];public_only=getattr(args,'public_only',False);private_rows=[]if public_only else[callback[key]for key in ['particleBefore','resourceBefore','after']]
    support=pin(WORK/'velocity_machine019.py');support.update(logicalPath=support['path'],snapshot='velocity_machine019.py');(output/'code').mkdir();shutil.copyfile(WORK/'velocity_machine019.py',output/'code/velocity_machine019.py')
    runtime=[build/'build.json',build/'arm.elf',build/'a64.elf',build/'velocity019.dll',WORK/'original-unit-results-v1.public.json',WORK/'fields-v2.public.json',ROOT/'tools/python/Lib/site-packages/unicorn/lib/unicorn.dll']
    manifest=dict(privateAssetContainer=dict(path='generated/update-content0/code.bin'),privateObservations=private_rows,runtimeFiles=[pin(path)for path in runtime],productionAndFixtures=[],support=[support]);(output/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
    guard=module('velocity019_guard',ADAPTER/'guard.py').Guard(ROOT,output,manifest);loader=module('velocity019_loader',ADAPTER/'loader.py').FreshSources(ROOT,output,manifest,guard)
    guard.install();loader.install();report=dict(status='failed',target=args.target,sourceAdapter=adapter_pin,sourceCreditGranted=0,sourceOnlyExecution=True,publicOnly=public_only,privateRuntimeDataInputs=len(private_rows),originalImageOpenedOrCpuConstructed=False)
    try:
        import velocity_machine019 as machines
        machines.GUARD=guard;machine=machines.Machine019(args.target,build);layout=struct.unpack('<7I',machine.read(machine.call('velocity_layout019'),28));size,offset,resource_size,retention_offset,width,view_size,resource_view_size=layout
        assert layout==((456,324,900,768,4,328,772)if args.target=='arm'else(464,328,900,768,8,336,772)),layout
        particle=machine.call('velocity_particle019');resource=machine.call('velocity_resource019')
        if width==8:assert min(particle,resource)>0xffffffff
        cases=json.loads((WORK/'original-unit-results-v1.public.json').read_bytes())['cases'];results=[]
        def retain(name,data):
            path=output/(name+'.private.bin.xz');path.write_bytes(lzma.compress(data));return dict(**pin(path),rawBytes=len(data),rawSha256=hashlib.sha256(data).hexdigest())
        def run_case(row,index,loaded=False):
            if not loaded:machine.call('velocity_setup019',index,*row['velocityBits'],row['retentionBits'],row['stepBits'])
            before=machine.read(particle,size);resource_before=machine.read(resource,resource_size)
            if not loaded:
                expected=bytearray((0xa7^(i*17+index*3))&255 for i in range(size));expected_resource=bytearray((0xa7^(i*17+index*3))&255 for i in range(resource_size));struct.pack_into('<3I',expected,0x24,*row['velocityBits']);expected[offset:offset+width]=resource.to_bytes(width,'little');struct.pack_into('<I',expected_resource,retention_offset,row['retentionBits']);assert before==expected and resource_before==expected_resource
            assert int.from_bytes(before[offset:offset+width],'little')==resource
            machine.call('velocity_apply019');actual=machine.read(particle,size);resource_after=machine.read(resource,resource_size);expected=bytearray(before);struct.pack_into('<3I',expected,0x24,*row['outputVelocityBits'])
            record=dict(name=row['name'],returned=True,equal=actual==expected,resourceUnchanged=resource_before==resource_after,expected=retain(str(index)+'-expected',bytes(expected)),actual=retain(str(index)+'-actual',actual),before=retain(str(index)+'-before',before),resourceBefore=retain(str(index)+'-resource-before',resource_before),resourceAfter=retain(str(index)+'-resource-after',resource_after),outputVelocityBits=list(struct.unpack_from('<3I',actual,0x24)))
            assert record['resourceUnchanged'];results.append(record)
        for index,row in enumerate(cases):run_case(row,index)
        if not public_only:
            before=lzma.decompress((ROOT/callback['particleBefore']['path']).read_bytes());resource_raw=lzma.decompress((ROOT/callback['resourceBefore']['path']).read_bytes());after=lzma.decompress((ROOT/callback['after']['path']).read_bytes());assert struct.unpack_from('<I',before,0x144)[0]==callback['resource']
            machine.write(machine.arena,before);machine.write(machine.arena+0x1000,resource_raw);machine.call('velocity_load019',machine.arena,machine.arena+0x1000,callback['stepBits']);projected=bytearray([0xd3])*size;projected[:0x144]=before[:0x144];projected[offset:offset+width]=resource.to_bytes(width,'little');projected[offset+width:offset+width+32]=before[0x148:0x168];assert machine.read(particle,size)==projected
            run_case(dict(name='genuine-normal-created-particle',outputVelocityBits=list(struct.unpack_from('<3I',after,0x24))),len(cases),True)
        guard.assert_clean();report.update(status='source-only-callback-executed',layout=layout,particleAddress=particle,resourceAddress=resource,results=results,matchingCases=sum(row['equal']for row in results),returningCases=len(results),allEqual=all(row['equal']for row in results),instructions=machine.instructions,compiledInstructionRegions=machine.instruction_regions,invalid=machine.invalid,freshHelpers=loader.loaded,guard=guard.receipt(),fullOwningClassesQualified=False,upstreamFpPrior58=fields['upstreamPriorByte58']['value'])
        if not args.allow_mismatch:assert report['allEqual']
    finally:
        report['guardFinal']=guard.receipt();(output/'receipt.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(status=report['status'],target=args.target,matchingCases=report['matchingCases'],returningCases=report['returningCases'],instructions=report['instructions'],freshHelpers=len(loader.loaded))),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('target',choices=['arm','a64','windows']);parser.add_argument('--build',default='build-v4');parser.add_argument('--output',required=True);parser.add_argument('--allow-mismatch',action='store_true');parser.add_argument('--public-only',action='store_true');main(parser.parse_args())
