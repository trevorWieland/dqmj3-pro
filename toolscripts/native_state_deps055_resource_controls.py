import json
from pathlib import Path
from native_state_deps055_resource_measure import SOURCE,WORK,pin
from native_state_deps055_resource_reference import cases
from native_state_deps055_resource_build import build
from native_state_deps055_resource_models import Windows,machine


def run():
    source=(SOURCE/'resource055.c').read_text(encoding='utf-8')
    by_label={row['label']:row for row in cases()}
    specs=[('final-valid-index-rejected',source.replace('index >= 32u','index >= 31u'),'resource-31-1-1-7',False),
           ('adjacent-entry-selected',source.replace('entries[index]','entries[index ^ 1u]'),'resource-1-1-1-7',False),
           ('native-resource-pointer-truncated',source.replace('entry->resource : 0','(StateResource055 *)(StateAddress055)(StateWord055)(StateAddress055)entry->resource : 0'),'resource-0-1-1-7',True)]
    rows=[]
    for label,wrong,selected,wide_only in specs:
        assert wrong!=source
        folder=WORK/'controls'/label
        folder.mkdir(parents=True,exist_ok=True)
        path=folder/'resource055.c'
        path.write_text(wrong,encoding='utf-8')
        built=build(folder,path)
        case=by_label[selected]
        native=Windows(folder/'resource055.dll')
        try:
            arm=machine(folder/'arm.elf',case,False,False)
            windows=native.execute(case,False)
            a64=machine(folder/'a64.elf',case,True,False)
        finally:
            native.close()
        assert all(row['actualFunctionReturned']and row['fullPlatformInputArenaUnchanged']for row in [arm,windows,a64])
        assert not windows['actualResourcePointerMatched']and not a64['actualResourcePointerMatched']
        assert arm['actualResourcePointerMatched']==wide_only
        rows.append(dict(label=label,input=case,source=pin(path),build=pin(folder/'build.json'),
                         authoredArm=arm,actualWindows=windows,highAarch64=a64,
                         allReturnedNormally=True,consumersOfWrongPointersInvoked=False,
                         widePlatformSpecificControl=wide_only,rejectedPlatforms=2 if wide_only else 3))
        print('resource055 returning control rejected:',label,flush=True)
    report=dict(schemaVersion=1,normallyReturningControls=3,platformExecutions=9,
                rejectedObservations=8,expectedArmIdentityObservations=1,cases=rows,
                sourceCreditGranted=0,producer=pin(Path(__file__).resolve()))
    path=WORK/'controls.json'
    path.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return report


if __name__=='__main__':
    run()
