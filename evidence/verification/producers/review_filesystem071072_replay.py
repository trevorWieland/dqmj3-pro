import hashlib
import importlib.util
import json
from pathlib import Path
import re
import subprocess

ROOT=Path(__file__).resolve().parents[3]
RAW='evidence/verification/filesystem071072-isolated-2ae0940.json'
OUTPUT='work/filesystem071072-public-replay-v1'


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def require(value,reason):
    if not value:
        raise ValueError(reason)


def roster(folder):
    return {p.relative_to(folder).as_posix():dict(bytes=p.stat().st_size,sha256=hashlib.sha256(p.read_bytes()).hexdigest())
        for p in folder.rglob('*')if p.is_file()and p.suffix in ['.o','.obj','.elf','.dll','.lib','.exp','.a','.so']}


def main():
    raw=read(ROOT/RAW)
    clone=Path(raw['replayRoot']).resolve()
    require(raw['status']=='passed' and raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
        and clone==ROOT/'work/clean-replay/filesystem071072-2ae0940'
        and len(raw['steps'])==15 and len(raw['packets'])==440,'Committed filesystem pipeline incomplete')
    for row in raw['packets']:
        p=(clone/row['path']).resolve()
        require(p.is_relative_to(clone) and p.stat().st_size==row['bytes']
            and hashlib.sha256(p.read_bytes()).hexdigest()==row['sha256'],'Mandatory committed packet changed')
    tests=0
    for step in raw['steps']:
        p=clone/step['log']
        require(step['returncode']==0 and hashlib.sha256(p.read_bytes()).hexdigest()==step['logSha256'],
            'Committed pipeline log changed')
        if step['name'].endswith('-tests'):
            matches=re.findall(r'^Ran (\d+) tests? in ',p.read_text(),re.M)
            require(len(matches)==1,'Committed test count missing')
            tests+=int(matches[0])
    require(tests==84,'Committed test roster differs')
    relative='toolscripts/file071072/verify_public.py'
    require((clone/relative).read_bytes()==subprocess.check_output(
        ['git','show',raw['sourceRevision']+':'+relative],cwd=ROOT),'Committed verifier source changed')
    spec=importlib.util.spec_from_file_location('committed_filesystem071072_verifier',clone/relative)
    module=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    verified=module.verify(clone,clone,clone/OUTPUT)
    require(verified['children']==217 and verified['allUniquePinnedFilesRehashedAfterExit']==8049,
        'Committed source child or selected-input roster differs')
    folder=clone/OUTPUT
    actual=roster(folder)
    frozen=roster(ROOT/'work/native-file071072-public-input-v1/source-only-v2')
    require(actual==frozen and len(actual)==4410,'Complete raw native artifact roster differs')
    require(sum(Path(name).suffix=='.lib'for name in actual)==30,'Automatic import library roster differs')
    for name in ['build-combined','tiny/build-combined']:
        require(len(roster(folder/name))==146,'Positive source build actual roster differs')
    abi=read(folder/'receipt-abi-branch.json')['headerABI']
    require(abi['status']=='versioned-header-ABI-analysis-passed'
        and len(abi['allFiveExistingDependentTranslationUnits'])==15
        and len(abi['mixedModelFences'])==6 and all(r['compilerRejected']for r in abi['mixedModelFences']),
        'Complete dependent header closure or mixed-model fence differs')
    intake='evidence/lanes/native-file071072/public-inputs-v1'
    placements=read(ROOT/intake/'placements.json')
    for row in placements['files']:
        name=row['proposedPublicPath']
        expected=subprocess.check_output(['git','show',raw['sourceRevision']+':'+name],cwd=ROOT)
        require((ROOT/name).read_bytes()==(clone/name).read_bytes()==expected,'Published source or input changed')
    for row in placements['unchangedPublicReferences']:
        name=row['path']
        require((ROOT/name).read_bytes()==(clone/name).read_bytes()
            and hashlib.sha256((clone/name).read_bytes()).hexdigest()==row['sha256'],'Frozen public provider changed')
    bindings=read(ROOT/intake/'candidate-bindings.json')
    source_positions=[dict(address=r['entry'],sourceFunction=r['sourceSymbol'],
        totalPositions=r['originalTotalInstructionPositions'],observedPositions=r['originalObservedInstructionPositions'],
        unvisitedPositions=r['originalUnvisitedPositions'])for r in bindings['candidates']]
    require(sum(r['totalPositions']for r in source_positions)==861
        and sum(r['observedPositions']for r in source_positions)==815,'Original before-C witness count differs')
    result=dict(status='coordinator-reviewed-committed-filesystem071072-source-replay-passed',
        sourceRevision=raw['sourceRevision'],producer=pin(Path(__file__).resolve()),rawReplay=pin(ROOT/RAW),
        mandatoryPackets=440,pipelineStages=15,pipelineTests=84,sourceChildren=217,
        sourcePositiveProfiles=84,returningWrongSourcePrograms=84,compiledWrongSourceVariants=28,
        persistentBoundaryPrograms=18,completeNativeArtifactsChecked=4410,primaryArtifactsPerBuild=145,
        actualNativeArtifactsPerBuild=146,additionalAutomaticImportLibrariesChecked=30,
        completeHeaderAbiObjectsChecked=30,allRawNativeArtifactsEqualFrozenWorker=True,
        completeOriginalInstructionPositions=source_positions,originalObservedPositions=815,originalTotalPositions=861,
        originalExpectations='Frozen immutable original-before-C observations; source children never open original code.',
        declaredHeaderModel='Versioned072 isolated component with all five legacy dependent C files rebuilt consistently',
        canonicalHeadersChanged=False,physicalAndroidExecutionClaimed=False,hostFilesystemExecuted=False,
        sourceCreditGranted=0,exactMatchingClaimed=False,overallSourceCoverageClaimed=False,wholeGameClaimed=False)
    path=ROOT/'evidence/verification/filesystem071072-coordinator-2ae0940.json'
    require(not path.exists(),'Preserve the previous committed replay review')
    path.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps({k:v for k,v in result.items()if k!='completeOriginalInstructionPositions'}))


if __name__=='__main__':
    main()
