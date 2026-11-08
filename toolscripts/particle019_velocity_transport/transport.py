import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import types

ROOT=Path.cwd();WORK=ROOT/'work/particle019-public-transport-v1'
PUBLIC_BASE=None
BOUNDARIES=['open','io-open','os-open','stat','lstat','listdir','scandir','resolve','original-constructor','original-cpu','undeclared-library','whole-private-arena','old-helper','original-library','private-normal-snapshot','atexit','cleared-rejection','after-finalizer','after-finalizer-global-teardown','after-finalizer-json-teardown']


def pin(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def module(name,path):
    value=types.ModuleType(name);value.__file__=str(path);exec(compile(path.read_bytes(),str(path),'exec'),value.__dict__);return value


def main(args):
    output=WORK/args.output;assert output.resolve().is_relative_to(WORK.resolve());output.mkdir(exist_ok=False);manifest=json.loads((WORK/'input-manifest-v1.json').read_bytes());intake=output/'intake';intake.mkdir();monitor=output/'parent-owned-monitor';monitor.mkdir();logs=output/'logs';logs.mkdir()
    for row in manifest['files']:
        source=PUBLIC_BASE/row['proposedPublicPath']if PUBLIC_BASE else ROOT/row['input']['path'];actual=pin(source);assert(actual['bytes'],actual['sha256'])==(row['input']['bytes'],row['input']['sha256']);target=intake/row['snapshot'];target.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(source,target);assert source.read_bytes()==target.read_bytes()
    (intake/'runs').mkdir();builder=module('velocity019_public_build',intake/'build_source.py');builder.WORK=intake;builder.SOURCE=PUBLIC_BASE/'src/native/particle019-velocity'if PUBLIC_BASE else intake/'proposed/src/native/particle019-velocity';builds=[]
    for control,folder in [('none','build-v1'),('algebraic','algebraic-build-v1'),('skip_z','skip-z-build-v1')]:builder.main(argparse.Namespace(output=folder,control=control));builds.append(pin(intake/folder/'build.json'))
    artifact_matches=[]
    for row in manifest['expectedCompiledArtifacts']:
        actual=pin(intake/'build-v1'/row['name']);expected=row['identity'];assert(actual['bytes'],actual['sha256'])==(expected['bytes'],expected['sha256']);artifact_matches.append(dict(name=row['name'],artifact=actual))
    if args.mode!='public-only':
        for row in manifest['privateCoupledInputs']:assert pin(ROOT/row['path'])==row
    reference=None
    if args.mode=='full':
        expected=manifest['privateOriginalReferenceOnly'];assert pin(ROOT/expected['path'])==expected;log=logs/'original.log';reference_output=output/'original-reference'
        with log.open('wb')as stream:result=subprocess.run([sys.executable,'-B',str(WORK/'child_replay.py'),'--transport-root',str(WORK),'--role','original','--intake',str(intake),'--reference-output',str(reference_output)],cwd=ROOT,stdout=stream,stderr=subprocess.STDOUT)
        assert result.returncode==0,log;value=json.loads((reference_output/'reference-receipt.public.json').read_bytes());assert value['publicCases']==19 and value['genuineObjectCases']==1;reference=pin(reference_output/'reference-receipt.public.json')
    runs=[]
    def child(label,target,build='build-v1',public_only=False,control='none',wrong_source=False):
        events=monitor/(label+'.events.jsonl');sidecar=monitor/(label+'.finalizer.jsonl');log=logs/(label+'.log');relative='runs/'+label
        argv=[sys.executable,'-B',str(WORK/'child_replay.py'),'--transport-root',str(WORK),'--role','source','--intake',str(intake),'--target',target,'--build',build,'--output',relative,'--monitor',str(events),'--sidecar',str(sidecar),'--control',control]
        if public_only:argv.append('--public-only')
        if wrong_source:argv.append('--allow-mismatch')
        with log.open('wb')as stream:result=subprocess.run(argv,cwd=ROOT,stdout=stream,stderr=subprocess.STDOUT)
        event_rows=[json.loads(line)for line in events.read_text().splitlines()if line];final_rows=[json.loads(line)for line in sidecar.read_text().splitlines()if line];receipt_path=intake/relative/'receipt.json';value=json.loads(receipt_path.read_bytes());count=19 if public_only else 20
        assert value['status']=='source-only-callback-executed'and value['returningCases']==count and len(value['freshHelpers'])==1 and not value['invalid'],(label,log)
        rejected_after_exit=bool(event_rows)or result.returncode!=0 or not final_rows or final_rows[-1]['status']!='post-exit-check-clean-at-finalizer'
        if control=='none':
            assert not rejected_after_exit and not value['guardFinal']['forbiddenAttempts']
            if wrong_source:assert not value['allEqual']and value['matchingCases']<count
            else:assert value['allEqual']and value['matchingCases']==count
        else:
            assert rejected_after_exit and len(event_rows)==1 and value['allEqual']and value['matchingCases']==19
            if control.startswith('after-finalizer'):assert result.returncode==0 and final_rows[-1]['status']=='post-exit-check-clean-at-finalizer'and event_rows[0]['afterFinalizer']is True
            if control=='cleared-rejection':assert result.returncode==97 and not final_rows[-1]['allInMemoryRejections'][0]
        if public_only:assert value['privateRuntimeDataInputs']==0
        run=dict(label=label,target=target,publicOnly=public_only,control=control,wrongSource=wrong_source,semanticControlRejected=wrong_source and not value['allEqual'],childExitCode=result.returncode,parentRejectedAfterProcessExit=rejected_after_exit,returningCases=count,matchingCases=value['matchingCases'],sourceReceipt=pin(receipt_path),eventLog=pin(events),finalizerLog=pin(sidecar),log=pin(log),postExitEvents=event_rows,finalizerReports=final_rows)
        runs.append(run);return run
    for target in ['arm','windows','a64']:
        if args.mode!='public-only':child('coupled-'+target,target)
        child('public-'+target,target,public_only=True)
        for name,build in [('algebraic','algebraic-build-v1'),('skip-z','skip-z-build-v1')]:child('returning-'+name+'-'+target,target,build,public_only=args.mode=='public-only',wrong_source=True)
    if args.boundaries:
        for name in BOUNDARIES:child('boundary-'+name,'windows'if name.startswith('after-finalizer')else'arm',public_only=True,control=name)
    for row in manifest['files']:
        target=intake/row['snapshot'];source=PUBLIC_BASE/row['proposedPublicPath']if PUBLIC_BASE else ROOT/row['input']['path'];assert target.read_bytes()==source.read_bytes()
    if args.mode!='public-only':
        for row in manifest['privateCoupledInputs']:assert pin(ROOT/row['path'])==row
    report=dict(status='closed-velocity-public-transport-qualified',mode=args.mode,originalReference=reference,sourceOriginalImageReadsOrConstructors=0,copiedInputFiles=len(manifest['files']),copiedInputBytes=manifest['publicInputBytes'],identicalCompiledArtifacts=artifact_matches,builds=builds,runs=runs,returningControlPrograms=sum(row['wrongSource']for row in runs),persistentBoundaryPrograms=sum(row['control']!='none'for row in runs),authoritativeBoundaryDecisionAfterChildExit=True,originalBytesOrToolsCopied=False,canonicalPredecessorDelta=manifest['canonicalPredecessorDelta'],sourceCreditGranted=0,sharedFilesEdited=False)
    (output/'transport-receipt.public.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(dict(status=report['status'],mode=args.mode,sourcePrograms=len(runs),returningControls=report['returningControlPrograms'],boundaryControls=report['persistentBoundaryPrograms'],inputFiles=report['copiedInputFiles'],inputBytes=report['copiedInputBytes'])),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--mode',choices=['full','source-only','public-only'],required=True);parser.add_argument('--output',required=True);parser.add_argument('--boundaries',action='store_true');main(parser.parse_args())
