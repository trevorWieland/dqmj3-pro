import hashlib
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[3]


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def require(value,reason):
    if not value:
        raise ValueError(reason)


def checked(row):
    path=(ROOT/row['path']).resolve()
    require(path.is_relative_to(ROOT) and pin(path)==row,'Velocity replay dependency or artifact changed')
    return path


def scope(folder,mode):
    outer=read(folder/'public-replay-receipt.public.json')
    require(outer['status']=='published-placement-replay-qualified' and outer['publishedProductionCompiledDirectly'],
        'Velocity published wrapper incomplete')
    path=folder/outer['transportReceipt']
    report=read(path)
    require(report['status']=='closed-velocity-public-transport-qualified' and report['mode']==mode
        and report['copiedInputFiles']==15 and report['copiedInputBytes']==63830
        and report['sourceOriginalImageReadsOrConstructors']==0 and report['returningControlPrograms']==6
        and report['persistentBoundaryPrograms']==20 and report['authoritativeBoundaryDecisionAfterChildExit'],
        'Velocity public/source-only scope differs')
    binaries={}
    build_count=0
    for item in report['builds']:
        build=read(checked(item))
        require(build['status']=='source-production-and-separate-fixture-built-from-actual-proposed-paths'
            and len(build['units'])==6,'Velocity production/fixture build separation differs')
        if build['control']=='none':
            require(len([r for r in build['units'] if r['role']=='production'])==3
                and all(r['source']['path']=='src/native/particle019-velocity/particle_velocity.c'
                        for r in build['units'] if r['role']=='production'),'Velocity production compiled from a staged substitute')
        for unit in build['units']:
            checked(unit['object'])
            checked(unit['source'])
            for header in unit['quotedHeaders']:
                checked(header)
        for artifact in build['artifacts']:
            checked(artifact)
        build_dir=ROOT/Path(item['path']).parent
        native=[p for p in build_dir.iterdir() if p.suffix in ['.o','.obj','.elf','.dll','.lib','.exp']]
        require(len(native)==10 and sum(p.suffix=='.lib' for p in native)==1,'Velocity complete object/library/executable roster differs')
        for file in native:
            identity=pin(file)
            binaries[build['control']+'/'+file.name]={k:identity[k] for k in ['bytes','sha256']}
        build_count+=1
    require(build_count==3 and len(binaries)==30,'Velocity compiled control closure incomplete')
    positive=returning=boundaries=late=0
    for row in report['runs']:
        source=read(checked(row['sourceReceipt']))
        events=[json.loads(s) for s in checked(row['eventLog']).read_text().splitlines() if s]
        final=[json.loads(s) for s in checked(row['finalizerLog']).read_text().splitlines() if s]
        checked(row['log'])
        require(events==row['postExitEvents'] and final==row['finalizerReports'],'Velocity actual parent monitor logs differ')
        rejected=bool(events) or row['childExitCode']!=0 or not final or final[-1]['status']!='post-exit-check-clean-at-finalizer'
        require(rejected==row['parentRejectedAfterProcessExit'] and source['returningCases']==row['returningCases']
            and not source['originalImageOpenedOrCpuConstructed'] and not source['invalid']
            and len(source['freshHelpers'])==1 and not source['freshHelpers'][0]['bytecodeCacheUsed'],
            'Velocity source/monitor/import contract differs')
        count=19 if row['publicOnly'] else 20
        require(source['returningCases']==count,'Velocity test-vector roster differs')
        if row['control']!='none':
            require(rejected and len(events)==1 and source['allEqual'] and source['matchingCases']==19,
                'Velocity boundary program did not finish its valid cases then fail closed')
            boundaries+=1
            if row['control'].startswith('after-finalizer'):
                require(row['childExitCode']==0 and final[-1]['status']=='post-exit-check-clean-at-finalizer'
                    and events[0]['afterFinalizer'] is True,'Velocity clean-finalizer late rejection disappeared')
                late+=1
        elif row['wrongSource']:
            require(not rejected and not source['allEqual'] and source['matchingCases']<count,
                'Velocity wrong source did not return normally and disagree')
            returning+=count
        else:
            require(not rejected and source['allEqual'] and source['matchingCases']==count,
                'Velocity genuine source observations disagree')
            positive+=count
        if row['publicOnly']:
            require(source['privateRuntimeDataInputs']==0,'Public-only source used private runtime data')
    require((positive,returning,boundaries,late)==((57,114,20,3) if mode=='public-only' else (117,120,20,3)),
        'Velocity positive/control/post-exit counts differ')
    if mode=='full':
        original=read(checked(report['originalReference']))
        require(original['status']=='closed-original-leaf-public-and-genuine-object-replay-identical'
            and original['publicCases']==19 and original['genuineObjectCases']==1 and original['incomingFpPrior58']==42
            and original['wholeUnknownParticleAndResourceCompared'],'Actual original velocity replay incomplete')
    else:
        require(report['originalReference'] is None,'Source-only/public-only constructed original machine state')
    return dict(mode=mode,positiveCases=positive,returningControlCases=returning,boundaryPrograms=boundaries,
        cleanExitFinalizerButParentRejected=late,compiledArtifacts=binaries,receipt=pin(path))


def main():
    scopes=[scope(ROOT/path,mode) for path,mode in [('work/particle019-root-full-v1','full'),
        ('work/particle019-root-source-only-v1','source-only'),('work/particle019-root-integrated-public-v1','public-only')]]
    require(all(r['compiledArtifacts']==scopes[0]['compiledArtifacts'] for r in scopes),'Raw artifacts differ across replay modes')
    result=dict(status='coordinator-velocity-integrated-path-preflight-passed',producer=pin(Path(__file__).resolve()),
        scopes=[{k:v for k,v in r.items() if k!='compiledArtifacts'} for r in scopes],completeNativeArtifactRowsChecked=90,
        artifactsPerBuild=10,additionalExportImportLibrariesChecked=9,declaredPrimaryArtifactsPerBuild=9,
        missingImportLibraryFromOriginalDeclaredRosterCorrectedByExhaustiveCoordinatorCheck=True,
        completeActualOriginalCases=20,persistentBoundaryProgramsPerScope=20,sourceCreditGranted=0,
        independentCommittedReplayPending=True,canonicalInventoryRepairSeparate=True,wholeGameClaimed=False)
    (ROOT/'evidence/verification/particle019-root-preflight.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps({k:v for k,v in result.items() if k not in ['producer','scopes']}))


if __name__=='__main__':
    main()
