import argparse
import hashlib
import importlib
import io
import json
import os
from pathlib import Path
import random
import sys
import unittest
sys.dont_write_bytecode=True
INTAKE=Path(__file__).resolve().parent
sys.path.insert(0,str(INTAKE))
sys.pycache_prefix=str(INTAKE/'bootstrap-unwritten-bytecode')
from contract import ROOT,load,pin
from gates import Gate
from bindings import bind

def artifacts(folder):
    return {p.relative_to(folder).as_posix():pin(p)for p in folder.rglob('*')if p.is_file()and p.suffix in ['.o','.elf','.dll','.lib']}

def individual_tests(value):
    if isinstance(value,unittest.TestSuite):
        for child in value:yield from individual_tests(child)
    else:yield value

def run(output,mode='full'):
    output=Path(output).resolve();source_only=mode=='source-only'
    if output.exists()or not output.is_relative_to(INTAKE):raise ValueError('exclusive owner intake child output required')
    source,support,reference,before=load(INTAKE,source_only);output.mkdir(parents=True);sys.pycache_prefix=str(output/'unwritten-bytecode')
    gate=Gate(ROOT,output,before,reference,source_only);record=dict(status='failed',mode=mode,sourceCreditGranted=0)
    try:
        builder=bind(INTAKE,output,source,support,gate)
        copied={str(p):pin(p)for p in(output/'owner').rglob('*')if p.is_file()};copied[str(output/'AGENTS.md')]=pin(output/'AGENTS.md')
        identity=importlib.import_module('public_sdk062_runtime').identity()
        runtime=importlib.import_module('runtime062ab');cfg=importlib.import_module('proof062ab');selector=importlib.import_module('selector062ab');owner=importlib.import_module('owner_proof062ab');controller=importlib.import_module('owner_controls062ab')
        profiles=['arm','windows','a64']if source_only else['original','arm','windows','a64']
        program_manifest=json.loads((INTAKE/'programs-v1.json').read_bytes());observations={};coverage=set();primary_coverage=set();selector_coverage=set()
        for stage in ['record','selector','owner']:
            folder=output/stage
            for target in ['arm','windows','a64']:builder.build(folder/'build'/target,target)
            rows=[]
            for target in profiles:
                with gate.profile(target):
                    machine=runtime.ConfigRuntime(target,folder/'build')
                    try:
                        if stage=='record':rows.extend(dict(profile=target,**cfg.program(machine,seed))for seed in [0,1,0x5a,0xa7,0xff])
                        elif stage=='selector':
                            rows.extend(dict(profile=target,**selector.disabled_program(machine,seed))for seed in [0,0xa7,0xff]);rows.extend(dict(profile=target,**selector.enabled_program(machine,index,128 if index==3 else 1))for index in [0,1,3])
                        else:rows.extend(dict(profile=target,**owner.program(machine,**p))for p in program_manifest['owner'])
                        if target=='original':
                            coverage.update(machine.original.coverage)
                            if stage=='owner':primary_coverage.update(machine.original.coverage)
                            if stage=='selector':selector_coverage.update(machine.original.coverage)
                    finally:machine.close()
            (folder/'report.json').write_text(json.dumps(dict(stage=stage,observations=rows),indent=2)+'\n',encoding='utf-8');observations[stage]=len(rows)
            print('owner public',mode,stage,len(rows),'passed',flush=True)
        controls=controller.run(output/'controls')
        extra=[]
        for target in profiles:
            with gate.profile(target):
                machine=runtime.ConfigRuntime(target,output/'owner/build')
                try:
                    for parameters in program_manifest['rotation']:
                        p={k:v for k,v in parameters.items()if k!='label'};extra.append(dict(profile=target,label=parameters['label'],**owner.program(machine,**p)))
                    if target=='original':coverage.update(machine.original.coverage)
                finally:machine.close()
        mutation=output/'rotation-control/owner_insert88062ab.c';mutation.parent.mkdir();text=(output/'owner/source/owner_insert88062ab.c').read_text();old='owner_left062ab(map, current);'
        if text.count(old)!=1:raise ValueError('inner-rotation mutation selector differs')
        mutation.write_text(text.replace(old,old+' current->black = 1;'),encoding='utf-8')
        for target in ['arm','windows','a64']:builder.build(output/'rotation-control/build'/target,target,{mutation.name:mutation})
        rotation_controls=[]
        for target in ['arm','windows','a64']:
            machine=runtime.ConfigRuntime(target,output/'rotation-control/build')
            try:
                error=None
                try:owner.program(machine,keys=[3,1,2],destroy=True)
                except ValueError as exc:error=str(exc)
                if not error or not machine.last_comparison.get('normallyReturned'):raise ValueError('rotation control failed normal-return discrimination')
                rotation_controls.append(dict(profile=target,error=error,observation=machine.last_comparison))
            finally:machine.close()
        selected=set(range(0x76fd78,0x770150,4))
        if not source_only and selected-coverage:raise ValueError('coupled insertion coverage incomplete')
        (output/'rotation-report.json').write_text(json.dumps(dict(observations=extra,controls=rotation_controls,combinedOriginalPcs=len(selected&coverage),primaryOriginalPcs=len(selected&primary_coverage)),indent=2)+'\n',encoding='utf-8')
        suite=unittest.defaultTestLoader.discover(str(output/'owner/tests'))
        os.environ['SDK062AB_TEST_OUTPUT']=str(output/'test-owned')
        test_module=sys.modules['test_owner062ab'];prior=test_module.OwnerTests.check
        def check(self,target,**kwargs):
            with gate.profile(target):return prior(self,target,**kwargs)
        test_module.OwnerTests.check=check
        if source_only:
            suite=unittest.TestSuite(t for t in individual_tests(suite) if t._testMethodName not in ['test_actual_target_constructor','test_real_deleting_wrapper_original'])
        stream=io.StringIO();tests=unittest.TextTestRunner(stream=stream,verbosity=2).run(suite);(output/'tests.log').write_text(stream.getvalue(),encoding='utf-8')
        if not tests.wasSuccessful():raise ValueError('owner public fresh tests failed')
        expected=json.loads((INTAKE/'expected-artifacts-v1.json').read_bytes())['files'];actual=artifacts(output);selected_actual={p:v for p,v in actual.items()if not p.startswith('rotation-control/')}
        if expected!=selected_actual:raise ValueError('owner public compiled artifact mismatch '+str([p for p in expected.keys()|selected_actual.keys()if expected.get(p)!=selected_actual.get(p)][:10]))
        gate.require_clean()
        if source_only and gate.original_constructions:raise ValueError('source-only original construction occurred')
        after={}
        for p in before:
            with gate.profile('original'if Path(p)in gate.reference else 'source'):after[p]=pin(p)
        if before!=after or copied!={p:pin(p)for p in copied}:raise ValueError('owner transport frozen source changed')
        gate.require_clean()
        modules={name:dict(path=str(Path(m.__file__).resolve()),**pin(Path(m.__file__)))for name,m in list(sys.modules.items())if getattr(m,'__file__',None)and Path(m.__file__).suffix=='.py'and (Path(m.__file__).resolve().is_relative_to(ROOT/'toolscripts')or Path(m.__file__).resolve().is_relative_to(output))}
        record.update(actualRuntimeIdentity=identity,status='public-owner-input-and-closure-replay-passed',sourceInputs=before,authoredModules=modules,sourceOnlyOriginalReadsOrConstructions=0 if source_only else None,originalConstructions=gate.original_constructions,observations=observations,rotationObservations=len(extra),primaryInsertionPcVisits=len(selected&primary_coverage),combinedInsertionPcVisits=len(selected&coverage),selectorPcVisits=len(set(range(0x4b616c,0x4b61c0,4))&selector_coverage),tests=tests.testsRun,returningControls=controls['count']+3,sameFinalPrimaryArenaControls=controls['sameFinalPrimaryArena'],artifactsIdentical=len(expected),compiledSources=33,existingSdkFiles=len(source['existingSdkInputs']),freshPyOnlyAuthoredImports=True)
    except BaseException as exc:record['error']=repr(exc);raise
    finally:
        record.update(metadataAccessCounts=gate.metadataCounts,metadataAccessPaths={p:sorted(v)for p,v in gate.metadataPaths.items()},rejectedMetadata=gate.rejectedMetadata,blockedReadsOrConstructions=gate.rejected,readPaths=sorted(gate.reads),loadedLibraries=sorted(gate.libraries));(output/'transport.json').write_text(json.dumps(record,indent=2)+'\n',encoding='utf-8')
    return record
if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,required=True);parser.add_argument('--mode',choices=['full','source-only'],default='full');a=parser.parse_args();run(a.output,a.mode)
