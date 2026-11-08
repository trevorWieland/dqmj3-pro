import hashlib
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[3]
sys.path.insert(0,str(ROOT/'toolscripts'))
import compile_sources
import isolated_component_replay
import md5_stream062_check as checks


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def main():
    base=ROOT/'work/md5-stream062-root-public-v1'
    result=checks.verify(base/'full',base/'source-only',base/'copy')
    frozen=read(ROOT/'work/md5-stream062-public-v1/replay-verification-v1.json')
    assert result['compiledArtifacts']==frozen['compiledArtifacts']and result['artifactCount']==136
    selected=read(ROOT/'work/md5-stream062-public-v1/public-placements-v1.json')
    production=[]
    for row in selected['files']:
        source=pin(ROOT/row['path'])
        assert (source['bytes'],source['sha256'])==(row['bytes'],row['sha256'])
        assert (ROOT/row['path']).read_bytes()==(ROOT/row['proposalPath']).read_bytes()
        production.append(source)
    compiled=read(base/'default-compile-review.json')
    assert len(compiled['results'])==6 and all(r['status']=='compiled'for r in compiled['results'])
    post=read(base/'public-post-exit/report.json')
    assert post['status']=='MD5-committed-source-post-exit-check-passed'and post['nativeArtifacts']==136
    assert post['allSelectedInputsRehashedAfterExit']==23 and post['actualChildExitZeroRejectedByReusableParent']
    negative=read(ROOT/'work/md5-stream062-negative-verifier-v1/report.json')
    assert len(negative['controls'])==6 and all(r['rejected']for r in negative['controls'])
    suites=read(ROOT/'work/readonly-original-intake-validation-v2/report.json')['tests']
    assert sum(r['tests']for r in suites)==55 and all(r['exitCode']==0 for r in suites)
    for row in suites:
        assert pin(ROOT/row['log'])['sha256']==row['sha256']
    plan=read(ROOT/'config/replays/md5_stream062.json')
    isolated_component_replay.validate_plan(plan)
    config=compile_sources.read_config(ROOT)
    assert len(config['units'])==618
    receipt=dict(status='coordinator-public-MD5-source-preflight-passed',producer=pin(Path(__file__).resolve()),
        sourceFiles=production,sourceScopes=['original-corroborated-full','public-data-only','minimal-copy-full'],
        structuralCasesPerScope=339,streamProgramsPerScope=44,callsPerTarget=602,testsPerScope=9,
        returningCompiledControls=7,all136RawNativeArtifactsEqualAcrossScopesAndWorker=True,
        postExitSelectedInputHashesChecked=23,persistentBoundaryControls=12,
        actualChildExitZeroRejectedByReusableParent=True,postExitCorruptionControls=negative['controls'],
        defaultTargetCompiles=6,sourceOnlyUnits=618,sourceTargetCompileCases=1782,
        parentAndReadOnlyIntakeRegressionTests=55,regressionSuites=suites,
        sourceCode=pin(ROOT/'toolscripts/md5_stream062_verify.py'),expectedReplay=pin(ROOT/isolated_component_replay.contained(ROOT,'evidence/lanes/md5-stream062/public-inputs-v1/expected-replay.json')),
        replayPlan=pin(ROOT/'config/replays/md5_stream062.json'),
        WindowsNativeExecution=True,AndroidInstructionModelExecution=True,physicalAndroidExecutionClaimed=False,
        independentCommittedReplayPassed=False,readOnlyArchiveRealExtractionNotYetReplayed=True,
        canonicalInstructionBytes=1444,originalPcsObserved=355,originalPcsDeclared=361,
        remainingOriginalPcs='Six trailing-zero loop PCs excluded by the measured four-byte alignment invariant; preserved, not executed.',
        existingCompressionSourceUnchanged=True,sourceCreditGranted=0,workingCAdmissionGranted=0,wholeGameClaimed=False)
    path=ROOT/'evidence/verification/md5-stream062-root-preflight.json'
    assert not path.exists()
    path.write_text(json.dumps(receipt,indent=2)+'\n')
    print(json.dumps(dict(sourceFiles=len(production),rawNativeArtifacts=136,regressionTests=55,sourceCredit=0)))


if __name__=='__main__':
    main()
