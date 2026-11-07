import argparse
import hashlib
import json
import os
import subprocess
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'


def digest(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def guard_private_inputs(origin):
    origin=origin.resolve()
    allowed_tools=origin/'tools'
    reads=set()
    def audit(event,args):
        if event!='open'or not args or not isinstance(args[0],(str,bytes,os.PathLike)):return
        path=Path(os.fsdecode(args[0])).resolve()
        if path.is_relative_to(origin)and not path.is_relative_to(ROOT)and not path.is_relative_to(allowed_tools):
            raise ValueError('Source-only copy attempted to open outside its copied public inputs: '+str(path))
        if path.is_relative_to(origin):reads.add(path.as_posix())
    sys.addaudithook(audit)
    return reads


def child(origin):
    reads=guard_private_inputs(origin)
    from squirrel_compose057_source import Source
    from squirrel_compose057_observe import observe
    from squirrel_compose057_packet import post_residuals,expected,digest as value_digest
    cases=json.loads((ROOT/'expected-cases.json').read_text())
    rows=[]
    for index,case in enumerate(cases):
        inputs=case['input']
        for profile in ['arm','a64']:
            session=Source(profile,inputs['seed'])
            startup=session.boot(inputs['stackSize'])
            cold=observe(session,profile)
            meta=session.meta_contract()
            result=session.execute(inputs['profile'],inputs['value'],inputs['flags'],inputs['cleanup'])
            cleanup=session.cleanup()if not inputs['cleanup']else result['state']
            after=observe(session,profile)
            original=case['original']
            if startup!=original['startup']or value_digest(cold)!=original['coldGraphSha256']or \
               meta!=original['metamethod']or result!=original['program']or cleanup!=original['afterCleanup']:
                raise ValueError('Tiny copied source differs from the genuine original composed witness')
            post_residuals(inputs,case['originalAfterGraph'],after)
            rows.append({'case':index,'profile':profile,'originalCallerAndBoundedOwnershipMatch':True})
        request={**inputs,'emitAfterGraph':True}
        result=subprocess.run([sys.executable,str(ROOT/'toolscripts/squirrel_compose057_tiny.py'),
            'windows-child','--origin-root',str(origin),'--request',json.dumps(request)],
            cwd=ROOT,capture_output=True,timeout=120)
        if result.returncode:raise ValueError(result.stderr.decode())
        native=json.loads(result.stdout)
        for key in ['startup','metamethod','program','afterCleanup','coldGraphSha256']:
            if native[key]!=case['original'][key]:raise ValueError('Tiny actual Windows composition differs')
        post_residuals(inputs,case['originalAfterGraph'],native['afterGraph'])
        rows.append({'case':index,'profile':'windows','originalCallerAndBoundedOwnershipMatch':True,
                     'privateInputsOpened':False})
    return {'status':'tiny-public-source-copy-composed-execution','rows':rows,
            'sourceOnly':True,'originalImagesSdkToolsOrCiaCopied':False,
            'outsideCopyProjectReadsRestrictedToSharedTools':True,'projectReadPaths':sorted(reads),
            'fullPostGraphEqualityClaimed':False,'sourceCreditGranted':0}


def parent(packet_path=None,copy_name='tiny-source-copy'):
    from squirrel_compose057_build import selected,inputs,pin
    import squirrel_compose057_packet
    import squirrel_compose057_layout
    packet_path=packet_path or ROOT/'evidence/lanes/squirrel-compose057/stage-v1/packet.json'
    packet=json.loads(packet_path.read_text())
    graphs=json.loads((ROOT/packet['typedGraphs']['path']).read_text())
    if Path(copy_name).name!=copy_name or copy_name in ['.','..']:
        raise ValueError('Tiny source copy name must be one owned directory component')
    target=WORK/copy_name
    if target.exists():raise ValueError('Tiny source-only copy already exists; preserve its result')
    target.mkdir(parents=True)
    probes=[ROOT/path for path in ['source/squirrel-wave040/layout.c','source/squirrel-wave045/fixture_layout.c',
        'source/squirrel-wave049/fixture_layout.c','source/squirrel-wave057/layout_probe.c',
        'toolscripts/squirrel_compose057_api_probe.c']]
    identities=inputs([*selected()[0],*probes,ROOT/'source/squirrel-wave057/component.h'])
    paths={ROOT/row['path']for row in identities}
    paths.update((ROOT/'toolscripts').glob('squirrel_compose057_*.py'))
    for module in list(sys.modules.values()):
        name=getattr(module,'__file__',None)
        if name:
            path=Path(name).resolve()
            if path.is_relative_to(ROOT/'toolscripts')and path.suffix=='.py':paths.add(path)
    copies=[]
    for path in sorted(paths):
        destination=target/path.relative_to(ROOT)
        destination.parent.mkdir(parents=True,exist_ok=True)
        destination.write_bytes(path.read_bytes())
        copies.append({'path':path.relative_to(ROOT).as_posix(),'bytes':path.stat().st_size,'sha256':digest(path)})
    expected=[]
    for row in packet['rows']:
        expected.append({'input':row['input'],'original':row['original'],
                         'originalAfterGraph':graphs[row['original']['afterGraphSha256']]})
    (target/'expected-cases.json').write_text(json.dumps(expected)+'\n')
    environment=dict(os.environ,SQUIRREL_COMPOSE057_TOOL_ROOT=str(ROOT),PYTHONUTF8='1')
    logs=[]
    for profile in ['arm','a64','windows','android']:
        argv=[sys.executable,str(target/'toolscripts/squirrel_compose057_build.py'),'--profile',profile]
        result=subprocess.run(argv,cwd=target,env=environment,capture_output=True,timeout=120)
        logs.append({'argv':argv,'exitCode':result.returncode,'stdout':result.stdout.decode(),'stderr':result.stderr.decode()})
        if result.returncode:raise ValueError(logs[-1])
    result=subprocess.run([sys.executable,str(target/'toolscripts/squirrel_compose057_layout.py')],
        cwd=target,env=environment,capture_output=True,timeout=120)
    if result.returncode:raise ValueError(result.stderr.decode())
    binaries=[]
    for profile,name in [('arm','compose057.elf'),('a64','compose057.elf'),('windows','compose057.dll'),('android','compose057.so')]:
        original=WORK/('session-v2-'+profile)/name
        copied=target/'work/squirrel-compose057'/('session-v2-'+profile)/name
        if copied.read_bytes()!=original.read_bytes():raise ValueError('Tiny copied source component artifact differs: '+profile)
        binaries.append({'profile':profile,'sha256':digest(copied),'byteIdenticalToMainPublicComponent':True})
    result=subprocess.run([sys.executable,str(target/'toolscripts/squirrel_compose057_tiny.py'),
        'child','--origin-root',str(ROOT)],cwd=target,env=environment,capture_output=True,timeout=240)
    (WORK/'tiny-source-copy.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise ValueError(result.stderr.decode())
    record=json.loads(result.stdout)
    record.update({'producer':pin(Path(__file__)),'copiedInputs':copies,'copyBytes':sum(row['bytes']for row in copies),
        'compiledArtifacts':binaries,'buildLogs':logs,'copiedFiles':len(copies),'sharedToolRoot':str(ROOT/'tools'),
        'sourceTargetExecutions':42})
    output=ROOT/'evidence/lanes/squirrel-compose057/stage-v1'/(copy_name+'.json')
    output.write_text(json.dumps(record,indent=2)+'\n')
    print(json.dumps({'receipt':pin(output),'copiedFiles':len(copies),'copyBytes':record['copyBytes'],'sourceTargetExecutions':42}))


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('mode',nargs='?',default='parent',choices=['parent','child','windows-child'])
    parser.add_argument('--origin-root',type=Path)
    parser.add_argument('--request')
    parser.add_argument('--packet',type=Path)
    parser.add_argument('--copy-name',default='tiny-source-copy')
    args=parser.parse_args()
    if args.mode=='child':print(json.dumps(child(args.origin_root)))
    elif args.mode=='windows-child':
        guard_private_inputs(args.origin_root)
        from squirrel_compose057_windows import case
        print(json.dumps(case(json.loads(args.request))))
    else:parent(args.packet,args.copy_name)
