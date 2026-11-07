import json
from pathlib import Path
from native_caller055_measure import WORK, SOURCE, pin
from native_caller055_address_build import build
from native_caller055_address_reference import cases, expected
from native_caller055_address_models import Windows, machine


def run():
    source = (SOURCE/'address055.c').read_text(encoding='utf-8')
    by_label = {row['label']: row for row in cases()}
    specs = [
        ('fixed-window-upper-end-exclusive', source.replace(' || address == 0x1f600000u', ''), 'empty-0x1f600000'),
        ('first-window-end-inclusive', source.replace('next <= end', 'next <= end+1u'), 'first-converted-0x20000040'),
        ('wrong-first-offset', source.replace('address_offsets055.first+address', 'address_offsets055.second+address'), 'first-converted-0x20000000'),
        ('region-start-one-word-early', source.replace('+128u', '+124u'), 'middle-object-0x1400017f'),
    ]
    rows = []
    for label, wrong, selected in specs:
        assert wrong != source
        case = by_label[selected]
        folder = WORK/'address-controls'/label
        folder.mkdir(parents=True, exist_ok=True)
        path = folder/'address055.c'
        path.write_text(wrong, encoding='utf-8')
        built = build(folder, path)
        native = Windows(folder/'address055.dll')
        try:
            arm = machine(folder/'arm.elf', case, False, False)
            windows = native.execute(case, False)
            a64 = machine(folder/'a64.elf', case, True, False)
        finally:
            native.close()
        assert all(row['actualFunctionReturned'] and not row['independentModelPassed'] for row in [arm, windows, a64])
        rows.append(dict(label=label, source=pin(path), build=pin(folder/'build.json'), input=case,
                         actualOriginalValue=expected(case), authoredArm=arm, actualWindows=windows, highAarch64=a64,
                         allReturnedNormally=True, allRejectedByIndependentModel=True))
        print('address055 returning control rejected:', label, flush=True)
    result = dict(schemaVersion=1, normallyReturningControls=len(rows), platformExecutions=len(rows)*3,
                  cases=rows, originalAndProductionSourceUnchanged=True, producer=pin(Path(__file__).resolve()))
    path = WORK/'address-controls.json'
    path.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(pin(path)))
    return result


if __name__ == '__main__':
    run()
