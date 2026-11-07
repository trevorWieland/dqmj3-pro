import json
from pathlib import Path
from native_state055_build import build
from native_state055_measure import WORK, SOURCE, pin
from native_state055_models import Windows, machine_execute
from native_state055_reference import cases


def run():
    source = SOURCE.read_text(encoding='utf-8')
    by_label = {row['label']: row for row in cases()}
    specs = [
        ('equal-limit-accepted', source.replace('state_pair055.limit <= boundary', 'state_pair055.limit < boundary'), 'count-6-capacity-8'),
        ('block-reservation-omitted', source.replace('((count >> 7) << 1)', '0u'), 'count-128-capacity-131'),
        ('padding-zeroed', source.replace('*output++ = input[offset+index+1u];', '*output++ = index+1u == block ? 0u : input[offset+index+1u];'), 'count-2-capacity-5'),
        ('cursor-not-saturated', source.replace('state_pair055.cursor = state_pair055.limit;', 'state_pair055.cursor = output;'), 'count-6-capacity-7'),
    ]
    delayed = source.replace('*output++ = (base+offset) | ((block-1u) << 20) | 0x800f0000u;', 'StateWord055 *header = output++;')
    delayed = delayed.replace('*output++ = input[offset+index+1u];', '*output++ = input[offset+index+1u];\n        *header = (base+offset) | ((block-1u) << 20) | 0x800f0000u;')
    specs.append(('header-published-after-copy', delayed, 'alias-0-count-6'))
    rows = []
    for label, wrong, selected in specs:
        assert wrong != source
        folder = WORK/'controls'/label
        folder.mkdir(parents=True, exist_ok=True)
        path = folder/'wrong.c'
        path.write_text(wrong)
        receipt = build(folder, path)
        case = by_label[selected]
        arm = machine_execute(folder/'arm.elf', case, strict=False)
        a64 = machine_execute(folder/'a64.elf', case, True, False)
        windows = Windows(folder/'state055.dll')
        try:
            native = windows.execute(case, False)
        finally:
            windows.close()
        assert all(row['actualFunctionReturned'] and not row['independentModelPassed'] for row in [arm, native, a64])
        rows.append(dict(label=label, source=pin(path), case=case, authoredArm=arm,
                         actualWindows=native, highAarch64=a64, build=pin(folder/'build.json'),
                         allActuallyReturned=True, rejectedByIndependentStateModel=True))
        print('055 returning control rejected:', label, flush=True)
    result = dict(schemaVersion=1, returningControls=5, platformExecutions=15, rows=rows,
                  sourceCreditGranted=0, producer=pin(Path(__file__).resolve()))
    target = WORK/'controls.json'
    target.write_text(json.dumps(result, indent=2)+'\n')
    print(json.dumps(pin(target)))


if __name__ == '__main__':
    run()
