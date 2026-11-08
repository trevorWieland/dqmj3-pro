import argparse
import hashlib
import importlib
import json
import os
from pathlib import Path
import subprocess
import sys
import unittest
sys.dont_write_bytecode=True
sys.pycache_prefix=str(Path(__file__).resolve().parent/'bytecode-forbidden-entry')
from bindings_v3 import bind,STAGES
ROOT=next(p for p in Path(__file__).resolve().parents if(p/'AGENTS.md').is_file())
INTAKE=Path(__file__).resolve().parent
sys.dont_write_bytecode=True

def pin(path):
    b=path.read_bytes();return dict(bytes=len(b),sha256=hashlib.sha256(b).hexdigest())

def checked(path,row,base):
    path=path.resolve()
    if not path.is_relative_to(base.resolve()):raise ValueError('intake path escaped declared root')
    if pin(path)!={k:row[k]for k in ['bytes','sha256']}:raise ValueError('intake input changed '+str(path))
    return path

def snapshot(output,source,support):
    for row in support['files']:
        destination=output/row['lane']/Path(row['proposedPath']).relative_to('toolscripts/sdk062_runtime_v1/'+row['lane'])
        destination.parent.mkdir(parents=True,exist_ok=True);destination.write_bytes(checked(INTAKE/row['intakePath'],row,INTAKE).read_bytes())
    for lane in STAGES:
        for row in source['files']:
            if row['lane']!=lane:continue
            destination=output/lane/'source'/Path(row['proposedPath']).name
            destination.parent.mkdir(parents=True,exist_ok=True);destination.write_bytes(checked(INTAKE/row['intakePath'],row,INTAKE).read_bytes())

def inputs(source,support):
    result={}
    for row in source['files']+support['files']:result[str(INTAKE/row['intakePath'])]=pin(checked(INTAKE/row['intakePath'],row,INTAKE))
    for row in source['frozenPrerequisites']:
        result[str(INTAKE/row['intakePath'])]=pin(checked(INTAKE/row['intakePath'],row,INTAKE))
    for row in source['existingSdkInputs']:result[str(ROOT/row['path'])]=pin(checked(ROOT/row['path'],row,ROOT))
    for row in support['inheritedFiles']+[support['inheritedSupportManifest']]:
        if not row['path'].startswith('toolscripts/')and not row['path'].startswith('evidence/lanes/native-sdk062/public-inputs-v1/'):raise ValueError('inherited authored support namespace escaped')
        result[str(ROOT/row['path'])]=pin(checked(ROOT/row['path'],row,ROOT))
    for path in [INTAKE/'source-manifest-v1.json',INTAKE/'support-manifest-v3.json',INTAKE/'bindings_v3.py',Path(__file__)]:result[str(path)]=pin(path)
    return result

def main():
    parser=argparse.ArgumentParser();parser.add_argument('stage',choices=STAGES);parser.add_argument('--output',required=True,type=Path);parser.add_argument('--mode',choices=['proof','tests'],default='proof');args=parser.parse_args();output=args.output.resolve()
    if not output.is_relative_to(INTAKE)or output==INTAKE:raise ValueError('exclusive own-source output required')
    source=json.loads((INTAKE/'source-manifest-v1.json').read_bytes());support=json.loads((INTAKE/'support-manifest-v3.json').read_bytes());before=inputs(source,support)
    snapshot(output,source,support)
    cache=output/'bytecode-forbidden'
    if cache.exists():raise ValueError('fresh-source bytecode prefix must not exist')
    sys.pycache_prefix=str(cache)
    snapshot_before={str(p):pin(p)for p in output.rglob('*')if p.is_file()and p.suffix in ['.py','.c','.h']and ('source'in p.parts or p.suffix=='.py')}
    reads,libraries,rejected=audited(ROOT,INTAKE,output,set(before))
    result=dict(status='failed',stage=args.stage,mode=args.mode,sourceCreditGranted=0,wholeFactoryTaskOwnerCredit=0)
    try:
        builder,baseline=bind(ROOT,INTAKE,output,args.stage,source)
        sys.path.insert(0,str(ROOT/'toolscripts'))
        import public_sdk062_runtime as runtime
        runtime_before=runtime.verify(ROOT);identity=runtime.identity()
        suffix=STAGES[args.stage]
        if args.mode=='proof':
            report=importlib.import_module('proof'+suffix).run(output/args.stage/'final-v1')
            controller=importlib.import_module('controls'+suffix).controls
            controls=controller(output/args.stage/'final-v1/controls',baseline)if args.stage=='manager'else controller(output/args.stage/'final-v1/controls')
            result.update(report=pin(output/args.stage/'final-v1/report.json'),controls=pin(output/args.stage/'final-v1/controls/report.json'))
        else:
            suite=unittest.defaultTestLoader.discover(str(output/args.stage/'tests'));tests=unittest.TextTestRunner(verbosity=2).run(suite)
            if not tests.wasSuccessful():raise ValueError('public intake fresh tests failed')
            result['tests']=tests.testsRun
        require_clean(rejected)
        if inputs(source,support)!=before or runtime.verify(ROOT)!=runtime_before or any(pin(Path(p))!=v for p,v in snapshot_before.items()):raise ValueError('intake input guard changed')
        if cache.exists():raise ValueError('fresh-source bytecode cache was unexpectedly written')
        result.update(status='version3-exclusive-output-public-input-stage-passed',inputPins=before,snapshotInputPins=snapshot_before,runtimePins=runtime_before,actualRuntimeIdentity=identity,canonicalOriginalOnly=True,inheritedAuthoredSupportFiles=len(support['inheritedFiles']),freshSourceImports=True,exclusiveCurrentOutput=str(output),allowedIntakeInputs=sorted(str(p)for p in before if Path(p).resolve().is_relative_to(INTAKE)))
    finally:
        result.update(readPaths=sorted(reads),loadedLibraries=sorted(libraries),rejectedHistoricalReads=rejected)
        destination=output/args.stage/('transport-'+args.mode+'.json');destination.parent.mkdir(parents=True,exist_ok=True);destination.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')

def audited(root,intake,output,pinned):
    output=output.resolve()
    permitted={Path(p).resolve()for p in pinned if Path(p).resolve().is_relative_to(intake.resolve())}
    reads=set();libraries=set();rejected=[]
    def audit(event,values):
        if event not in ['open','ctypes.dlopen']or not values or not isinstance(values[0],(str,bytes)):return
        path=Path(os.fsdecode(values[0])).resolve()
        if path.is_relative_to(root/'work')and not path.is_relative_to(output)and path not in permitted:
            rejected.append(str(path));raise ValueError('historical private input forbidden '+str(path))
        if event=='ctypes.dlopen':libraries.add(str(path));return
        mode=values[1]if len(values)>1 else None
        if not isinstance(mode,str)or not any(c in mode for c in 'wax+'):reads.add(str(path))
    sys.addaudithook(audit)
    return reads,libraries,rejected

def require_clean(rejected):
    if rejected:raise ValueError('caught historical audit attempt is terminal')

if __name__=='__main__':main()
