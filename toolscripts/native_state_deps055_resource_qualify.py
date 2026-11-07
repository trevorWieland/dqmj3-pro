import json
from pathlib import Path
from native_state_deps055_resource_measure import SOURCE,ROOT,WORK,pin
from native_state_deps055_resource_reference import cases,RESOURCE
from native_state_deps055_resource_models import Windows,machine


def run(folder=None,target=None):
    folder=Path(folder)if folder else WORK/'build'
    target=Path(target)if target else WORK/'execution.json'
    reference=json.loads((WORK/'reference.json').read_text(encoding='utf-8'))
    built=json.loads((folder/'build.json').read_text(encoding='utf-8'))
    inputs=[built[key]for key in ['productionSource','productionHeader','fixtureSource','frozenWordHeader']]
    inputs+=[pin(Path(__file__).resolve()),pin(Path(__file__).with_name('native_state_deps055_resource_models.py')),pin(Path(__file__).with_name('native_state_deps055_resource_reference.py'))]
    rows=[]
    native=Windows(folder/'resource055.dll')
    try:
        for case,original in zip(cases(),reference['cases']):
            assert case==original['input']
            arm=machine(folder/'arm.elf',case)
            windows=native.execute(case)
            a64=machine(folder/'a64.elf',case,True)
            assert arm['returnedResourcePointer']==original['returnedResourcePointer']
            for observed in [arm,windows,a64]:
                assert observed['actualResourcePointerMatched']and observed['fullPlatformInputArenaUnchanged']
                if original['actualOriginalConsumers']:
                    assert observed['consumers']['byte']==original['actualOriginalConsumers']['byteValue']
                    assert observed['consumers']['flags']==original['actualOriginalConsumers']['flags']
            rows.append(dict(input=case,original=original,authoredArm=arm,actualWindows=windows,highAarch64=a64))
    finally:
        native.close()
    assert all(pin(ROOT/row['path'])==row for row in inputs)
    report=dict(schemaVersion=1,status='actual-resource-pointer-provider-four-path-comparison',
                sourceInputs=inputs,reference=pin(WORK/'reference.json'),build=pin(folder/'build.json'),
                caseSets=len(rows),targetObservations=len(rows)*4,cases=rows,canonicalEntry=0x7292d0,instructionBytes=44,
                actualGetterOriginalPcs=11,sourceUsesActualWidePointerFields=True,productionResourceTypeOpaque=True,
                completeNativeResourceOwnerLayoutClaimed=False,fixtureOnlyResourceCompletion=True,
                originalAndNativePointerArenaBytesClaimedEqual=False,nativeOwnTopologyIndependentlyVerified=True,
                referenceFragmentsCanonicalCredit=0,sourceCreditGranted=0,originalExecutableInSource=False,
                wholeControllerOrGameDeviceExecuted=False,producer=pin(Path(__file__).resolve()))
    target.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(report=pin(target),cases=len(rows),observations=len(rows)*4)))
    return report


if __name__=='__main__':
    run()
