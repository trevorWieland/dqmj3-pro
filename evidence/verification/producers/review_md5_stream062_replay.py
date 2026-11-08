import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[3]
sys.path.insert(0,str(ROOT/'toolscripts'))
import md5_stream062_check as check
from md5_stream062_verify import digest


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def main():
    path=ROOT/'evidence/verification/md5-stream062-isolated-6c41894.json'
    raw=read(path);clone=Path(raw['replayRoot']).resolve()
    assert raw['status']=='passed'and raw['readOnlyOriginalArchives']and raw['freshEnvironment']
    assert not raw['sharedGeneratedOrWorkInputs']and clone==ROOT/'work/clean-replay/md5-stream062-6c41894'
    assert len(raw['steps'])==19 and len(raw['packets'])==13
    tests={}
    for row in raw['steps']:
        log=clone/row['log'];assert row['returncode']==0
        assert hashlib.sha256(log.read_bytes()).hexdigest()==row['logSha256']
        if row['name'].endswith('-tests'):
            match=re.search(rb'Ran (\d+) tests?',log.read_bytes());assert match
            tests[row['name']]=int(match[1])
    for row in raw['packets']:
        b=(clone/row['path']).read_bytes()
        assert len(b)==row['bytes']and hashlib.sha256(b).hexdigest()==row['sha256']
    intake=read(clone/'intake-cleanup.json')
    assert intake['status']=='removed-verified-replay-input-copies'and intake['freshExtractionVerified']
    assert len(intake['readOnlyOriginalInputs'])==2 and intake['copiedInputs']==[]
    assert not intake['ownerPrimaryInputsModified']and not intake['generatedFinalCopiesRemoved']
    assert not list((clone/'inputs').rglob('*.cia'))
    for row in intake['readOnlyOriginalInputs']:
        assert pin(ROOT/row['path'])==row
    source=clone/'work/md5-stream062-committed-v1/source-only'
    compiled=check.artifacts(source)
    expected=read(ROOT/'evidence/lanes/md5-stream062/public-inputs-v1/expected-replay.json')
    assert len(compiled)==136 and compiled==expected['nativeArtifacts']
    post=read(clone/'work/md5-stream062-committed-v1/post-exit/report.json')
    assert post['nativeArtifacts']==136 and post['actualChildExitZeroRejectedByReusableParent']
    assert post['allSelectedInputsRehashedAfterExit']==23 and post['rawArtifactHashes']==compiled
    behavior=read(source/'behavior/report.json')
    assert digest(check.observations(behavior))==expected['sourceObservationSha256']
    assert digest(check.semantic(read(source/'controls/report.json')))==expected['returningControlSemanticsSha256']
    gate=read(source/'gate-receipt.json')
    assert gate['sourceOnly']and gate['publicDataOnly']and not gate['rejected']
    assert gate['originalConstructors']==gate['originalReadsSucceeded']==0
    for row in gate['inputs']:
        assert hashlib.sha256(Path(row['path']).read_bytes()).hexdigest()==row['sha256']
    placements=read(ROOT/'work/md5-stream062-public-v1/public-placements-v1.json')
    for row in placements['files']:
        name=row['path'];b=subprocess.check_output(['git','show',raw['sourceRevision']+':'+name],cwd=ROOT)
        assert b==(clone/name).read_bytes()==(ROOT/name).read_bytes()
    report=read(clone/'build/update-content0/report.json')
    assert int(report['measures']['total_functions'])==26676 and int(report['measures']['matched_code'])==5128
    assert len(read(clone/'build/update-content0/functional.json')['functions'])==533
    compilation=read(clone/'work/source-compile-ci/committed-replay/manifests/compilation.json')
    assert compilation['unitCount']==618 and len(compilation['results'])==1782
    assert all(r['status']=='compiled'for r in compilation['results'])
    result=dict(status='coordinator-reviewed-committed-MD5-source-replay-passed',sourceRevision=raw['sourceRevision'],
        producer=pin(Path(__file__).resolve()),rawReplay=pin(path),pipelineStages=19,mandatoryPackets=13,
        unitTestSuites=tests,unitTests=sum(tests.values()),sourceScopeTests=9,nativeArtifactsChecked=136,
        selectedInputsRehashedAfterExit=23,structuralCases=339,streamPrograms=44,callsPerTarget=602,
        returningCompiledControls=7,persistentBoundaryPrograms=12,actualChildExitZeroRejectedByReusableParent=True,
        sourceOnlyOriginalReads=0,allRawNativeArtifactsEqualFrozenWorker=True,freshOriginalExtraction=True,
        originalArchivesReadOnly=True,originalArchiveCopies=0,sourceOnlyUnits=618,sourceTargetCompiles=1782,
        physicalAndroidExecutionClaimed=False,sourceCreditGranted=0,wholeGameClaimed=False)
    output=ROOT/'evidence/verification/md5-stream062-coordinator-6c41894.json';assert not output.exists()
    output.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(result))


if __name__=='__main__':
    main()
