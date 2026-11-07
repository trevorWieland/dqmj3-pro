import json
from pathlib import Path
from native_state_deps055_helpers_measure import SOURCE,ROOT,WORK,pin
from native_state_deps055_helpers_reference import cases
from native_state_deps055_helpers_models import Windows,machine


def run(folder=None,target=None):
    reference=json.loads((WORK/'reference.json').read_text(encoding='utf-8'))
    folder=Path(folder)if folder else WORK/'build'
    target=Path(target)if target else WORK/'execution.json'
    built=json.loads((folder/'build.json').read_text(encoding='utf-8'))
    inputs=built['sources']+built['headers']+[pin(Path(__file__).resolve()),pin(Path(__file__).with_name('native_state_deps055_helpers_models.py')),pin(Path(__file__).with_name('native_state_deps055_helpers_reference.py'))]
    rows=[]
    native=Windows(folder/'helpers055.dll')
    try:
        for case,original in zip(cases(),reference['cases']):
            assert case==original['input']
            outputs={}
            try:
                outputs['authoredArm']=machine(folder/'arm.elf',case)
                outputs['actualWindows']=native.execute(case)
                outputs['highAarch64']=machine(folder/'a64.elf',case,True)
                for row in outputs.values():
                    assert row['returnKind']==original['returnKind']
                    if case['kind']!='lookup':
                        assert row['fullPlatformDataArenaSha256']==original['fullDataArenaSha256']
                assert outputs['authoredArm']['returned']==original['returned']
            except BaseException as error:
                (WORK/'qualification.failure.json').write_text(json.dumps(dict(case=case,error=repr(error),source=outputs),indent=2)+'\n',encoding='utf-8')
                raise
            rows.append(dict(input=case,original=original,**outputs))
    finally:
        native.close()
    assert all(pin(ROOT/row['path'])==row for row in inputs)
    report=dict(schemaVersion=1,status='additional-state055-helpers-four-path-comparison',
                sourceInputs=inputs,reference=pin(WORK/'reference.json'),build=pin(folder/'build.json'),
                caseSets=len(rows),targetObservations=len(rows)*4,cases=rows,
                lookupNativePointerGraphSeparatelyModeled=True,sourceHasOriginalExecutable=False,
                returnObservationKindPreserved=True,semanticOriginalReturnTypeInferred=False,
                nativePointersTruncated=False,physicalDeviceOrGameExecuted=False,sourceCreditGranted=0,
                producer=pin(Path(__file__).resolve()))
    target.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(report=pin(target),cases=len(rows),observations=len(rows)*4)))
    return report


if __name__=='__main__':
    run()
