import json
from pathlib import Path
from native_state_deps055_helpers_measure import SOURCE,WORK,pin
from native_state_deps055_helpers_reference import cases
from native_state_deps055_helpers_build import build
from native_state_deps055_helpers_models import Windows,machine


def run():
    source=(SOURCE/'helpers055.c').read_text(encoding='utf-8')
    by_label={row['label']:row for row in cases()}
    specs=[('reserve-odd-budget-rounded-down',source.replace('((StateAddress055)count+2u)*4u','((StateAddress055)(count & ~1u)+2u)*4u'),'reserve-3-5'),
           ('reserved-holes-zeroed',source.replace('    output += 2u+(count & ~1u);','    for (StateWord055 index = 2; index < 2u+(count & ~1u); index++)\n        output[index] = 0;\n    output += 2u+(count & ~1u);'),'reserve-4-7'),
           ('fixed-writer-increment-flag-added',source.replace('| 0xf0000u','| 0x800f0000u'),'count-1-capacity-3'),
           ('fixed-header-base-increments',source.replace('*output++ = base |','*output++ = (base+offset) |'),'count-129-capacity-133'),
           ('last-valid-table-index-rejected',source.replace('if (index >= 32u)','if (index >= 31u)'),'lookup-31-deadbeef')]
    rows=[]
    for label,wrong,selected in specs:
        assert wrong!=source
        folder=WORK/'controls'/label
        folder.mkdir(parents=True,exist_ok=True)
        path=folder/'helpers055.c'
        path.write_text(wrong,encoding='utf-8')
        built=build(folder,path)
        case=by_label[selected]
        native=Windows(folder/'helpers055.dll')
        try:
            arm=machine(folder/'arm.elf',case,False,False)
            windows=native.execute(case,False)
            a64=machine(folder/'a64.elf',case,True,False)
        finally:
            native.close()
        assert all(row['actualFunctionReturned']and not row['independentModelPassed']for row in [arm,windows,a64])
        rows.append(dict(label=label,input=case,source=pin(path),build=pin(folder/'build.json'),
                         authoredArm=arm,actualWindows=windows,highAarch64=a64,allReturnedNormally=True,allRejected=True))
        print('additional helper055 returning control rejected:',label,flush=True)
    report=dict(schemaVersion=1,normallyReturningControls=5,platformExecutions=15,cases=rows,
                productionAndOriginalSourceUnchanged=True,producer=pin(Path(__file__).resolve()))
    path=WORK/'controls.json'
    path.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return report


if __name__=='__main__':
    run()
