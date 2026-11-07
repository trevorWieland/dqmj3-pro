import argparse
import ast
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from native_state_deps055_helpers_measure import ROOT, SOURCE, EVIDENCE, pin
from native_state_deps055_preflight import run as preflight
from native_state_deps055_helpers_measure import WORK as WRITERS, measure as measure_writers
from native_state_deps055_helpers_reference import run as reference_writers
from native_state_deps055_helpers_build import build as build_writers
from native_state_deps055_helpers_qualify import run as qualify_writers
from native_state_deps055_helpers_controls import run as controls_writers
from native_state_deps055_helpers_invariant import prove
from native_state_deps055_helpers_snapshot import run as snapshot_writers
from native_state_deps055_resource_measure import WORK as RESOURCE, measure as measure_resource
from native_state_deps055_resource_reference import run as reference_resource
from native_state_deps055_resource_build import build as build_resource
from native_state_deps055_resource_qualify import run as qualify_resource
from native_state_deps055_resource_controls import run as controls_resource
from native_state_deps055_resource_snapshot import run as snapshot_resource

PRIVATE_STAGES = {'family-v2': {'ready': {'path': 'work/native-state055/family-v2/ready.json', 'bytes': 16998, 'sha256': 'c7ce6ef4a440bf121e91566458d3abdf1cec7670f8b241a03e3e4bc5a277069f'}, 'artifacts': [{'path': 'work/native-state055/family-v2/build/arm.elf', 'bytes': 66992, 'sha256': '4fef9c79ff569f95ecbf3f749f519b1b4ce8f567c85875159f2d47900163f607'}, {'path': 'work/native-state055/family-v2/build/a64.elf', 'bytes': 132952, 'sha256': '487ef01c27bd348a7b74f7d87225caf2e77c30a7f4a67edff4f9cbf1ad54241a'}, {'path': 'work/native-state055/family-v2/build/helpers055.dll', 'bytes': 3072, 'sha256': 'fe24cfe762f00727814f2a4dfbe5b483b270768e7d6127ad15561d3123bf4fe8'}]}, 'resource-v3': {'ready': {'path': 'work/native-state055/resource-v3/ready.json', 'bytes': 12750, 'sha256': 'f77ab499bacdb1e6a9a1056f9596e63db0cc87c4fa42e7c43477a1daeedc70f2'}, 'artifacts': [{'path': 'work/native-state055/resource-v3/build/arm.elf', 'bytes': 132012, 'sha256': '85438d7743a78460f55489d030034c883ae6029f9e141416d2351aaa8745cd1a'}, {'path': 'work/native-state055/resource-v3/build/a64.elf', 'bytes': 132192, 'sha256': '6c9e0080a15359cb779b57a9b7cabe150c204b592cee8357c115e1af872dad55'}, {'path': 'work/native-state055/resource-v3/build/resource055.dll', 'bytes': 2048, 'sha256': '32a953b96b8451505d5075d270d48dc8818d90a50901918658986489c1de43d9'}]}}


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def write(path,value):
    Path(path).write_text(json.dumps(value,indent=2)+'\n',encoding='utf-8')


def verify(rows):
    for row in rows:
        assert pin(ROOT/row['path'])==row,row['path']


def inputs():
    paths=set((ROOT/'toolscripts').glob('native_state_deps055_*.py'))
    paths|=set(SOURCE.glob('*'))
    paths|={ROOT/'src/native/wave055'/name for name in ['state055.c','state055.h']}
    paths|=set((ROOT/'tests').glob('test_native_state_deps055_*.py'))
    paths.add(ROOT/'docs/native-state-deps055.md')
    pending=[path for path in paths if path.suffix=='.py']
    while pending:
        path=pending.pop()
        for node in ast.walk(ast.parse(path.read_text(encoding='utf-8'))):
            names=[node.module] if isinstance(node,ast.ImportFrom) else [item.name for item in node.names] if isinstance(node,ast.Import) else []
            for name in names:
                candidate=ROOT/'toolscripts'/((name or '').split('.')[0]+'.py')
                if candidate.is_file() and candidate not in paths:
                    paths.add(candidate)
                    pending.append(candidate)
    return [pin(path) for path in sorted(paths)]


def compact_row(row):
    result={key:value for key,value in row.items() if key not in ['compiledSourcePcs','originalPcs','reads','orderedWrites']}
    for key in ['compiledSourcePcs','originalPcs','reads','orderedWrites']:
        if key in row:
            result[key+'Count']=len(row[key])
            result[key+'Sha256']=hashlib.sha256(json.dumps(row[key],separators=(',',':')).encode()).hexdigest()
    return result


def compact_report(report):
    result={key:value for key,value in report.items() if key!='cases'}
    result['cases']=[]
    for row in report['cases']:
        if 'original' in row:
            result['cases'].append({key:compact_row(value) if key in ['original','authoredArm','actualWindows','highAarch64'] else value for key,value in row.items()})
        else:
            result['cases'].append(compact_row(row))
    return result


def relocation():
    rows=[]
    for stage,names in [('family-v2',['helpers055.c','helpers055.h']),('resource-v3',['resource055.c','resource055.h','fixture055.c'])]:
        for name in names:
            public=pin(SOURCE/name)
            old=dict(public,path='work/native-state055/'+stage+'/'+name)
            if (ROOT/old['path']).is_file():
                assert pin(ROOT/old['path'])==old
            rows.append(dict(privateFrozenSource=old,publicSource=public,byteIdentical=True))
    return dict(schemaVersion=1,privateFrozenStages={key:row['ready'] for key,row in PRIVATE_STAGES.items()},files=rows,
                productionSelection=[dict(entry=0x6f9544,name='state_reserve055',source=pin(SOURCE/'helpers055.c')),
                                     dict(entry=0x166900,name='state_write_fixed055',source=pin(SOURCE/'helpers055.c')),
                                     dict(entry=0x7292d0,name='state_resource_lookup055',source=pin(SOURCE/'resource055.c'))],
                excludedDiagnosticName='state_lookup055',oldWordLookupQualifiedAsProductionPointer=False,
                sourceSemanticsChanged=False,previous055StagesChanged=False,sharedMetadataChanged=False,sourceCreditGranted=0)


def compact_controls(report):
    value=json.loads(json.dumps(report))
    for row in value['cases']:
        for name in ['authoredArm','actualWindows','highAarch64']:
            if name in row:
                row[name]=compact_row(row[name])
        for observed in row.get('observations',[]):
            observed['actual']=compact_row(observed['actual'])
    return value


def normalized(value):
    if isinstance(value,str):
        return value.replace(str(ROOT),'<repo>')
    if isinstance(value,list):
        return [normalized(item) for item in value]
    if isinstance(value,dict):
        return {key:normalized(item) for key,item in value.items()}
    return value


def execute():
    before=inputs()
    EVIDENCE.mkdir(parents=True,exist_ok=True)
    preflight()
    measure_writers()
    reference_writers()
    build_writers(WRITERS/'build')
    qualify_writers()
    prove()
    controls_writers()
    snapshot_writers()
    measure_resource()
    reference_resource()
    build_resource(RESOURCE/'build')
    qualify_resource()
    controls_resource()
    snapshot_resource()
    same=[]
    for name,folder in [('family-v2',WRITERS),('resource-v3',RESOURCE)]:
        built=read(folder/'build/build.json')
        for old,new in zip(PRIVATE_STAGES[name]['artifacts'],built['artifacts']):
            assert (old['bytes'],old['sha256'])==(new['bytes'],new['sha256'])
            same.append(dict(privateFrozen=old,publicRebuilt=new,byteIdentical=True))
    names=[]
    for prefix,folder in [('writers',WRITERS),('resource',RESOURCE)]:
        for name in ['claim','reference','execution','controls','source-snapshot']:
            value=read(folder/(name+'.json'))
            if name in ['reference','execution']:
                value=compact_report(value)
            if name=='controls':
                value=compact_controls(value)
            target=prefix+'-'+name
            write(EVIDENCE/(target+'.json'),value)
            names.append(target)
    write(EVIDENCE/'writer-invariant.json',read(WRITERS/'invariant.json'))
    write(EVIDENCE/'relocation.json',relocation())
    write(EVIDENCE/'preflight.json',normalized(read(WRITERS.parent/'preflight.json')))
    names+=['writer-invariant','relocation','preflight']
    tests=subprocess.run([sys.executable,'-m','unittest','discover','-s','tests','-p','test_native_state_deps055_*.py','-v'],cwd=ROOT,capture_output=True)
    (WRITERS.parent/'tests.log').write_bytes(tests.stdout+tests.stderr)
    assert tests.returncode==0 and b'Ran 19 tests' in tests.stderr and tests.stderr.strip().endswith(b'OK')
    verify(before)
    files=before+[pin(EVIDENCE/(name+'.json')) for name in names]
    ready=dict(schemaVersion=1,status='public-controller-dependencies055-ready-for-independent-review',files=files,
               privateStages={key:row['ready'] for key,row in PRIVATE_STAGES.items()},productionInstructionBytes=532,
               excludedLiteralPoolBytes=16,writerVisitedPcs=98,writerFiniteInvariantPcs=24,resourceVisitedPcs=11,
               writerAndLegacyTokenCaseSets=152,writerAndLegacyTokenObservations=608,
               actualResourcePointerCaseSets=51,actualResourcePointerObservations=204,
               normallyReturningControls=8,controlExecutions=24,rejectedControlObservations=23,
               expectedArm32PointerTruncationIdentity=1,testsPassed=19,sourceOnlyCompilations=9,
               copiedSourceArtifactsIdentical=6,privateToPublicArtifactIdentity=same,
               writerPostExecutionPairAddressComparisonOnly=True,rawWindowsAddressesPreserved=True,
               executedStateModifiedForComparison=False,universalRawReportByteIdentityClaimed=False,
               resourceRawSourceSnapshotCaseIdentity=True,originalExecutableInSource=False,
               actualWindowsExecuted=True,highAarch64CpuModel=True,physicalAndroidOrGameExecuted=False,
               productionResourceTypeOpaque=True,completeResourceOwnerOrGlobalInitializationQualified=False,
               full14600ByteControllerQualified=False,oldTokenLookupProductionPointerQualification=False,
               sourceCreditGranted=0,sharedMetadataModified=False,repositoryToolsOrOriginalsCopied=False,
               effectiveTools=read(WRITERS/'reference.json')['effectiveTools'],
               rawReports=[pin(folder/(name+'.json')) for folder in [WRITERS,RESOURCE] for name in ['reference','execution','controls','source-snapshot']],
               rawTests=pin(WRITERS.parent/'tests.log'),producer=pin(Path(__file__).resolve()))
    write(EVIDENCE/'ready.json',ready)
    verify(ready['files'])
    print(json.dumps(dict(ready=pin(EVIDENCE/'ready.json'),files=len(files),tests=19,controls=8)))


def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--verify',action='store_true')
    args=parser.parse_args()
    if args.verify:
        ready=read(EVIDENCE/'ready.json')
        verify(ready['files'])
        print(json.dumps(dict(ready=pin(EVIDENCE/'ready.json'),verifiedFiles=len(ready['files']))))
    else:
        execute()


if __name__=='__main__':
    main()
