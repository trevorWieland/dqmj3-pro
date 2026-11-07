import json
from pathlib import Path
from native_state_deps055_helpers_measure import SOURCE,ROOT,WORK,pin
from native_state_deps055_helpers_build import build
from native_state_deps055_helpers_qualify import run as qualify


def comparison_view(cases):
    view=json.loads(json.dumps(cases))
    for row in view:
        observed=row['actualWindows']
        symbol=dict(declaredObject='state_pair055',rva=observed['actualDeclaredPairRva'])
        if observed['returnKind']=='pair-pointer':
            assert observed['returned']==observed['actualDeclaredPairAddress']
            assert observed['actualReturnObservationExpected']
            observed['returned']=symbol
        observed['actualDeclaredPairAddress']=symbol
        observed['actualLibraryLoadBase']='<dynamic-native-module-load-base>'
    return view


def run():
    inputs=[SOURCE/'helpers055.c',SOURCE/'helpers055.h',ROOT/'src/native/wave055/state055.c',ROOT/'src/native/wave055/state055.h']
    before=[pin(path)for path in inputs]
    folder=WORK/'source-snapshot'
    folder.mkdir(parents=True,exist_ok=True)
    for path in inputs:
        (folder/path.name).write_bytes(path.read_bytes())
    primary=json.loads((WORK/'build/build.json').read_text(encoding='utf-8'))
    rebuilt=build(folder/'build',folder/'helpers055.c',folder/'state055.c')
    artifacts=[]
    for old,new in zip(primary['artifacts'],rebuilt['artifacts']):
        assert old['bytes']==new['bytes']and old['sha256']==new['sha256']
        assert (ROOT/old['path']).read_bytes()==(ROOT/new['path']).read_bytes()
        artifacts.append(dict(primary=old,copiedSource=new,byteIdentical=True))
    report=qualify(folder/'build',folder/'execution.json')
    original=json.loads((WORK/'execution.json').read_text(encoding='utf-8'))
    assert comparison_view(report['cases'])==comparison_view(original['cases'])
    raw_same=report['cases']==original['cases']
    aliases=[]
    for first,second in zip(original['cases'],report['cases']):
        old,new=first['actualWindows'],second['actualWindows']
        if old['returnKind']=='pair-pointer':
            assert old['returned']==old['actualDeclaredPairAddress']and new['returned']==new['actualDeclaredPairAddress']
            aliases.append(dict(case=first['input']['label'],primaryRawReturn=old['returned'],snapshotRawReturn=new['returned'],
                                primaryDeclaredPair=old['actualDeclaredPairAddress'],snapshotDeclaredPair=new['actualDeclaredPairAddress'],
                                primaryModuleBase=old['actualLibraryLoadBase'],snapshotModuleBase=new['actualLibraryLoadBase'],
                                stablePairRva=old['actualDeclaredPairRva']))
    assert all(pin(ROOT/row['path'])==row for row in before)
    result=dict(schemaVersion=1,sourceFiles=before,copiedSourceFiles=[pin(folder/path.name)for path in inputs],
                copiedSourceBytes=sum(path.stat().st_size for path in inputs),caseSets=152,targetObservations=608,
                allSemanticCaseObservationsIdentical=True,rawCasesByteIdentical=raw_same,
                postExecutionComparisonAliases=aliases,comparisonViewOnly=True,
                executedObjectRegisterCodeLiteralModified=False,
                rawPrimaryReport=pin(WORK/'execution.json'),
                artifacts=artifacts,sourceOnlySnapshot=True,
                repositoryToolOriginalImageCopied=False,fullColdRepositoryReplayClaimed=False,
                report=pin(folder/'execution.json'),producer=pin(Path(__file__).resolve()))
    path=WORK/'source-snapshot.json'
    path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return result


if __name__=='__main__':
    run()
