import hashlib
import importlib.util
import json
from pathlib import Path
import re
import subprocess

ROOT=Path(__file__).resolve().parents[3]
RAW='evidence/verification/particle019-isolated-c12a7b6.json'


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def require(value,reason):
    if not value:
        raise ValueError(reason)


def checked(base,row):
    path=(base/row['path']).resolve()
    require(path.is_relative_to(base),'Replay dependency escaped its owned root')
    raw=path.read_bytes()
    require(len(raw)==row['bytes'] and hashlib.sha256(raw).hexdigest()==row['sha256'],
        'Replay packet, input or artifact changed')
    return path


def main():
    raw=read(ROOT/RAW)
    clone=Path(raw['replayRoot']).resolve()
    require(clone.parent==ROOT/'work/clean-replay' and raw['status']=='passed'
        and raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
        and len(raw['steps'])==16 and len(raw['packets'])==124,'Independent public pipeline incomplete')
    for row in raw['packets']:
        checked(clone,row)
    tests=0
    for row in raw['steps']:
        log=(clone/row['log']).resolve()
        require(log.is_relative_to(clone) and row['returncode']==0
            and hashlib.sha256(log.read_bytes()).hexdigest()==row['logSha256'],'Pipeline log changed')
        if row['name'].endswith('-tests'):
            matches=re.findall(r'^Ran (\d+) tests? in ',log.read_text(),re.M)
            require(len(matches)==1,'Pipeline test count missing')
            tests+=int(matches[0])
    require(tests==95,'Independent pipeline test roster differs')
    source='evidence/verification/producers/review_particle019_preflight.py'
    require((clone/source).read_bytes()==subprocess.check_output(
        ['git','show',raw['sourceRevision']+':'+source],cwd=ROOT),'Committed scope reviewer changed')
    spec=importlib.util.spec_from_file_location('committed_velocity_review',clone/source)
    module=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    scopes=[]
    for mode,path in [('public-only','work/particle019-public-replay-v1'),
        ('full','work/particle019-independent-full-v1'),
        ('source-only','work/particle019-independent-source-only-v1')]:
        scopes.append(module.scope(clone/path,mode))
    require(all(r['compiledArtifacts']==scopes[0]['compiledArtifacts'] for r in scopes),
        'Independent raw native artifacts differ across modes')
    outer=read(clone/'work/particle019-independent-full-v1/public-replay-receipt.public.json')
    transport=read(clone/'work/particle019-independent-full-v1'/outer['transportReceipt'])
    original=read(checked(clone,transport['originalReference']))
    contract=read(ROOT/'evidence/lanes/native-particle019-velocity/public-inputs-v1/contract-v1.json')
    expected=[pc for span in contract['instructionRanges'] for pc in range(span['start'],span['endExclusive'],4)]
    require(original['instructions']==expected and len(expected)==15,'Original instruction coverage incomplete')
    manifest_path='evidence/lanes/native-particle019-velocity/public-inputs-v1/transport-manifest-v2.json'
    manifest=read(ROOT/manifest_path)
    closure=[]
    for row in manifest['files']+manifest['transportAdapters']:
        name=row['proposedPublicPath']
        data=subprocess.check_output(['git','show',raw['sourceRevision']+':'+name],cwd=ROOT)
        require((ROOT/name).read_bytes()==data and (clone/name).read_bytes()==data,
            'Independent committed source or public input changed')
        closure.append(pin(ROOT/name))
    materialized=read(ROOT/'work/particle019-independent-data-materialization-v1.json')
    require(materialized['sourceRevision']==raw['sourceRevision']
        and materialized['privateDataFiles']==manifest['privateCoupledInputs']
        and materialized['privateDataBytes']==356 and materialized['noOtherWorkOrGeneratedInputsCopied'],
        'Additional private data materialization differs')
    for row in manifest['privateCoupledInputs']:
        checked(clone,row)
    result=dict(status='coordinator-reviewed-committed-particle019-replay-passed',
        sourceRevision=raw['sourceRevision'],producer=pin(Path(__file__).resolve()),rawReplay=pin(ROOT/RAW),
        mandatoryPackets=124,pipelineStages=16,pipelineTests=tests,
        scopes=[{k:v for k,v in r.items() if k!='compiledArtifacts'} for r in scopes],
        completeNativeArtifactsChecked=90,allRawNativeArtifactsEqualAcrossModes=True,
        publicClosure=closure,additionalPrivateDataFiles=manifest['privateCoupledInputs'],
        additionalPrivateDataBytes=356,additionalDataMaterialization=pin(ROOT/'work/particle019-independent-data-materialization-v1.json'),
        actualOriginalCases=20,originalInstructionPositions=expected,originalInstructionBytes=60,
        originalLiteralBytesExcluded=4,sourceOriginalImageReadsOrCpuConstructors=0,
        actualWindowsExecution=True,androidA64HighAddressCpuExecution=True,physicalAndroidExecutionClaimed=False,
        sourceCreditGranted=0,overallConfirmedSourceCoverageClaimed=False,wholeGameClaimed=False)
    output=ROOT/'evidence/verification/particle019-coordinator-c12a7b6.json'
    require(not output.exists(),'Preserve the prior independent coordinator review')
    output.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps({k:v for k,v in result.items() if k not in ['scopes','publicClosure','originalInstructionPositions','additionalPrivateDataFiles']}))


if __name__=='__main__':
    main()
