import argparse
import ast
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from native_caller055_measure import ROOT, WORK, SOURCE, EVIDENCE, pin, measure
from native_caller055_preflight import run as preflight
from native_caller055_address_reference import run as address_reference
from native_caller055_reference import run as reference
from native_caller055_address_build import build as address_build
from native_caller055_build import build
from native_caller055_address_qualify import run as address_qualify
from native_caller055_qualify import run as qualify
from native_caller055_address_controls import run as address_controls
from native_caller055_controls import run as controls
from native_caller055_snapshot import run as snapshot

PRIVATE_READY = dict(path='work/native-state055/caller-v1/ready.json',bytes=27545,
                     sha256='5c90ca7194821a8489941ad0f064e25918f7a5f8621284da8f7444e8628aabc3')


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def write(path,value):
    Path(path).write_text(json.dumps(value,indent=2)+'\n',encoding='utf-8')


def verify(rows):
    for row in rows:
        assert pin(ROOT/row['path'])==row,row['path']


def inputs():
    names=['measure','preflight','address_reference','reference','address_build','build','address_models','models',
           'address_qualify','qualify','address_controls','controls','model','snapshot','packet']
    paths={ROOT/'toolscripts'/('native_caller055_'+name+'.py') for name in names}
    paths|={SOURCE/name for name in ['state055.c','state055.h','selector055.c','selector055.h','address055.c','address055.h']}
    paths|={ROOT/'tests/test_native_caller055.py',ROOT/'docs/native-caller055.md'}
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
    for key in ['compiledSourcePcs','originalPcs']:
        if key in row:
            result[key+'Count']=len(row[key])
            result[key+'Sha256']=hashlib.sha256(json.dumps(row[key],separators=(',',':')).encode()).hexdigest()
    if 'reads' in row:
        result['readEventsCount']=len(row['reads'])
    if 'orderedWrites' in row:
        result['orderedWriteCount']=len(row['orderedWrites'])
        if row['input']['label'] in ['capacity-0-13','format-0-0-0','initial-2-1-20000008']:
            result['orderedWrites']=row['orderedWrites']
    return result


def compact_report(report):
    result={key:value for key,value in report.items() if key!='cases'}
    rows=[]
    for row in report['cases']:
        if 'original' in row:
            current={key:compact_row(value) if key in ['original','authoredArm','actualWindows','highAarch64'] else value for key,value in row.items()}
        else:
            current=compact_row(row)
        rows.append(current)
    result['cases']=rows
    original=[row['original'] if 'original' in row else row for row in report['cases']]
    result['originalInstructionPcsUnion']=sorted(set().union(*(set(row.get('originalPcs',[])) for row in original)))
    result['rawSyntheticTracesRetainedPrivately']=True
    return result


def compact_controls(report):
    value=json.loads(json.dumps(report))
    for case in value['cases']:
        for name in ['authoredArm','actualWindows','highAarch64']:
            if name in case:
                case[name]=compact_row(case[name])
        for observation in case.get('observations',[]):
            observation['actual']=compact_row(observation['actual'])
    return value


def normalized(value):
    if isinstance(value,str):
        return value.replace(str(ROOT),'<repo>')
    if isinstance(value,list):
        return [normalized(item) for item in value]
    if isinstance(value,dict):
        return {key:normalized(item) for key,item in value.items()}
    return value


def relocation():
    expected={'selector055.c':'7ee06adb4db98fa1162355e783d6ab36a5c449b552f08c64195ed96380b0fd5b',
              'selector055.h':'83623f1980e8f220315cfb616e22cde6289c7f0e0563da9ea6c27bcfc1929e72',
              'address055.c':'3db78c15e7629b8d10951f927f56866dee1591bd95f89b5b802a8a98ef358123',
              'address055.h':'552153305ec11808d94197d58ee68076fd6bc1eb188713e5d0e71063d143eb8c'}
    rows=[]
    for name,sha in expected.items():
        public=pin(SOURCE/name)
        assert public['sha256']==sha,(name,public)
        rows.append(dict(privateSource=dict(path='work/native-state055/caller-v1/'+name,bytes=public['bytes'],sha256=sha),
                         publicSource=public,byteForByte=True))
    return dict(schemaVersion=1,privateFrozenReady=PRIVATE_READY,files=rows,sourceSemanticsChanged=False,
                priorPublicLeafChanged=False,sharedAliasesOrRegistriesChanged=False,sourceCreditGranted=0)


def execute():
    before=inputs()
    EVIDENCE.mkdir(parents=True,exist_ok=True)
    preflight()
    measure()
    address_reference()
    reference()
    address_build(WORK/'address-build')
    build(WORK/'selector-build')
    address_qualify()
    qualify()
    address_controls()
    controls()
    snapshot()
    for name in ['address-reference','selector-reference','address-execution','selector-execution']:
        write(EVIDENCE/(name+'.json'),compact_report(read(WORK/(name+'.json'))))
    for name in ['address-controls','selector-controls']:
        write(EVIDENCE/(name+'.json'),compact_controls(read(WORK/(name+'.json'))))
    write(EVIDENCE/'claim.json',read(WORK/'claim.json'))
    write(EVIDENCE/'preflight.json',normalized(read(WORK/'preflight.json')))
    write(EVIDENCE/'source-snapshot.json',read(WORK/'source-snapshot.json'))
    write(EVIDENCE/'relocation.json',relocation())
    test=subprocess.run([sys.executable,'-m','unittest','discover','-s','tests','-p','test_native_caller055.py','-v'],cwd=ROOT,capture_output=True)
    (WORK/'tests.log').write_bytes(test.stdout+test.stderr)
    assert test.returncode==0 and b'Ran 11 tests' in test.stderr and test.stderr.strip().endswith(b'OK')
    verify(before)
    names=['address-reference','selector-reference','address-execution','selector-execution',
           'address-controls','selector-controls','claim','preflight','source-snapshot','relocation']
    files=before+[pin(EVIDENCE/(name+'.json')) for name in names]
    ready=dict(schemaVersion=1,status='public-caller055-v1-ready-for-independent-review',files=files,
               privateFrozenReady=PRIVATE_READY,selectorEntry=0x7440bc,selectorInstructionBytes=3944,
               selectorExcludedPoolBytes=64,selectorVisitedPcs=986,addressInstructionBytes=436,addressVisitedPcs=109,
               selectorCaseSets=424,selectorObservationsPerRun=1696,addressCaseSets=156,addressObservationsPerRun=624,
               sourceSnapshotCompleteObservationsIdentical=True,sourceSnapshotArtifactsIdentical=6,
               normallyReturningControls=10,controlExecutions=30,testsPassed=11,sourceOnlyCompilations=6,
               sourceGraphContainsOriginalExecutable=False,actualWindowsExecuted=True,highAarch64CpuModel=True,
               targetTokensU32AndNativePointersDistinct=True,nativeRegionTokenIsNotOriginalFieldClaim=True,
               productionGlobalInitializationQualified=False,hardwarePhysicalAddressOrGameClaimed=False,
               floatingEnvironmentUniversalEquivalenceClaimed=False,wholeFamilyQualified=False,
               sourceSnapshotOnly=True,repositoryToolOrOriginalInputCopied=False,
               rawReports=[pin(WORK/(name+'.json')) for name in ['address-reference','selector-reference','address-execution','selector-execution']],
               rawTests=pin(WORK/'tests.log'),sourceCreditGranted=0,sharedMetadataModified=False,
               producer=pin(Path(__file__).resolve()))
    write(EVIDENCE/'ready.json',ready)
    verify(ready['files'])
    print(json.dumps(dict(ready=pin(EVIDENCE/'ready.json'),files=len(files),tests=11,controls=10)))


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
