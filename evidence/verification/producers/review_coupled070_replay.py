import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[3]
REVISION='e5e88533e8014049457024d6566d0ca7481b2407'
FRESH=ROOT/'work/clean-replay/coupled070-e5e8853'
sys.path.insert(0,str(ROOT/'toolscripts'))
from coupled_file070_replay import verify_journal


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    with path.open('rb') as stream:
        digest=hashlib.file_digest(stream,'sha256').hexdigest()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=path.stat().st_size,sha256=digest)


def require(value,reason):
    if not value:
        raise ValueError(reason)


def scope(folder,source_only):
    parent=read(folder/'ready.json')
    require(parent['status']=='coupled069070-public-transport-passed' and parent['sourceOnly']==source_only
        and not parent['smoke'] and len(parent['children'])==(83 if source_only else 87), 'Coupled scope is incomplete')
    artifacts={}
    counts=dict(positive=0,returningControls=0,boundaryProbes=0,originalProfiles=0,builds=0)
    originals={}
    semantics={}
    for child in parent['children']:
        row=read(folder/('receipt-'+child['child']+'.json'))
        require(verify_journal(folder/('journal-'+child['child']+'.jsonl'),bool(row['probe']))==child['postExitJournal']
            and row['immutableInputsUnchanged'] and row['bytecodePrefixAbsent'], 'Completed child journal or immutable receipt differs')
        if row['probe']:
            counts['boundaryProbes']+=1
            continue
        if row['mode']=='original':
            counts['originalProfiles']+=1
            continue
        if row['mode'] in ['source','control']:
            report=read(Path(row['result']['report']))
            rejected=row['mode']=='control'
            require(report['sourceReturned'] and bool(report['mismatch'])==rejected and not report['originalImageMapped']
                and report['immutableInputsUnchanged'] and report['bytecodePrefixAbsent'], 'Source observation or original exclusion differs')
            if not rejected:
                if row['family']=='sdk':
                    require(report['semantic']==report['expected'], 'Independent SDK semantic model differs')
                    semantics[child['child']]=report['semantic']
                else:
                    require(report['stages'] and all(value['semantic']==value['expected'] and value['allocationGuardBytes']>0
                        for value in report['stages'].values()), 'Independent branch stage model or allocation guard differs')
                    semantics[child['child']]={name:value['semantic'] for name,value in report['stages'].items()}
            counts['returningControls' if rejected else 'positive']+=1
        elif row['mode'] in ['build','control-build']:
            counts['builds']+=1
            target=folder/'tiny' if row['tiny'] else folder
            if row['mode']=='control-build':
                meta=read(target/'metadata'/row['family']/'controls.json')[row['control']]
                expected=meta['artifacts']
                built=target/'controls'/row['family']/row['control']/'build'
            else:
                expected=read(target/'metadata'/row['family']/'build-seed.json')['artifacts']
                built=target/('build-'+row['family'])
            flattened=[]
            for profile,values in expected.items():
                for item in values['objects']+[values['linked']]:
                    path=built/profile/Path(item['path']).name
                    actual=pin(path)
                    require(all(actual[k]==item[k] for k in ['bytes','sha256']), 'Actual compiled object or executable differs')
                    flattened.append(dict(profile=profile,bytes=actual['bytes'],sha256=actual['sha256']))
            require(flattened==row['exactArtifacts'] and len(flattened)==133, 'Complete native artifact identities differ')
            artifacts[child['child']]=flattened
    for path in folder.glob('actual-original-*.json'):
        originals[path.name]=read(path)
    require(counts==dict(positive=24,returningControls=30,boundaryProbes=15,
        originalProfiles=0 if source_only else 4,builds=14), 'Qualified child roster differs')
    require(len(originals)==(0 if source_only else 4), 'Original observation roster differs')
    return dict(counts=counts,artifacts=artifacts,semantics=semantics,originals=originals)


def main():
    raw_path=ROOT/'evidence/verification/coupled070-isolated-e5e8853.json'
    raw=read(raw_path)
    require(raw['status']=='passed' and raw['sourceRevision']==REVISION and raw['freshEnvironment']
        and not raw['sharedGeneratedOrWorkInputs'] and not raw['sourceAdmissionGranted'], 'Committed replay is incomplete')
    archive=subprocess.check_output(['git','archive','--format=zip',REVISION],cwd=ROOT)
    require(hashlib.sha256(archive).hexdigest()==raw['sourceArchiveSha256'], 'Committed archive differs')
    plan=read(ROOT/'config/replays/coupled070.json')
    expected=set(plan['packets'])|{'build/update-content0/report.json','build/update-content0/functional.json'}
    require(raw['plan']==plan and len(expected)==236 and {r['path'] for r in raw['packets']}==expected,
        'Mandatory packet roster differs')
    for row in raw['packets']:
        actual=pin(FRESH/row['path'])
        require(all(actual[k]==row[k] for k in ['bytes','sha256']), 'Mandatory packet changed')
    tests=0
    for row in raw['steps']:
        require(row['returncode']==0 and pin(FRESH/row['log'])['sha256']==row['logSha256'], 'Pipeline phase or log differs')
        if row['name'].endswith('-tests'):
            match=re.search(r'Ran (\d+) tests?',(FRESH/row['log']).read_text())
            require(match is not None,'Missing regression test count')
            tests+=int(match[1])
    full=scope(ROOT/'work/coupled070-root-public-v1',False)
    source_only=scope(ROOT/'work/coupled070-root-source-only-v1',True)
    fresh=scope(FRESH/'work/coupled070-public-replay-v1',False)
    require(full==fresh and full['artifacts']==source_only['artifacts']
        and full['semantics']==source_only['semantics'], 'Fresh/original/source-only semantics or native artifacts differ')
    pcs=set(p for value in fresh['originals'].values() for p in value['instructionPositions'])
    intake=ROOT/'evidence/lanes/native-file-coupled070/public-inputs-v1'
    coverage=[]
    for row in read(intake/'verification.json')['instructionCoverage']:
        positions={p for r in row['instructionRanges'] for p in range(r['start'],r['endExclusive'],4)}
        missing=sorted(positions-pcs)
        require(missing==row['unseenInstructionPositions'],'Original instruction-position witness differs')
        coverage.append(dict(address=row['entry'],sourceFunction=row['sourceFunction'],totalPositions=len(positions),
            observedPositions=len(positions&pcs),unobservedPositions=missing))
    require(sum(r['totalPositions'] for r in coverage)==226 and sum(r['observedPositions'] for r in coverage)==219,
        'Complete original instruction corpus differs')
    manifest=read(intake/'manifest.json')
    for row in manifest['productionAndFixtures']:
        source=ROOT/row['proposedPublicPath']
        require(source.read_bytes()==subprocess.check_output(['git','show',REVISION+':'+row['proposedPublicPath']],cwd=ROOT)
            and all(pin(source)[key]==row[key] for key in ['bytes','sha256']), 'Published selected C/header input differs')
    result=dict(status='coordinator-reviewed-committed-coupled070-replay-passed',sourceRevision=REVISION,
        producer=pin(Path(__file__).resolve()),rawReplay=pin(raw_path),mandatoryPackets=236,pipelineStages=17,pipelineTests=tests,
        comparedScopes=3,completeNativeArtifactsChecked=5586,sourcePositiveProfilesPerScope=24,
        returningWrongSourceRejectionsPerScope=30,persistentBoundaryRejectionsPerScope=15,
        selectedCAndHeaderInputs=93,selectedPythonHelpers=85,allActualNativeArtifactBytesRehashed=True,
        actualOriginalObservationsEqual=True,originalInstructionCoverage=coverage,
        totalInstructionPositions=226,observedInstructionPositions=219,excludedUnvisitedEmbeddedPositions=7,
        explicitSemanticProjectionOnly=True,physicalAndroidExecutionClaimed=False,hostFilesystemMounted=False,
        constructorNamespaceAndKernelBoundariesRemainQualificationPorts=True,sourceCreditGranted=0,
        overallConfirmedSourceCoverageClaimed=False,wholeGameQualified=False)
    output=ROOT/'evidence/verification/coupled070-coordinator-e5e8853.json'
    output.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps({k:v for k,v in result.items() if k not in ['originalInstructionCoverage','producer','rawReplay']}))


if __name__=='__main__':
    main()
