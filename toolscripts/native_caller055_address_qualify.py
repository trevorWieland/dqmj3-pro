import json
from pathlib import Path
from native_caller055_measure import WORK, ROOT, SOURCE, pin
from native_caller055_address_reference import cases
from native_caller055_address_models import Windows, machine


def run(folder=None,target=None):
    names = ['native_caller055_measure.py', 'native_caller055_address_reference.py', 'native_caller055_address_build.py', 'native_caller055_address_models.py', 'native_caller055_address_qualify.py']
    paths = [Path(__file__).resolve().parent/name for name in names]
    paths += [SOURCE/'address055.c', SOURCE/'address055.h']
    inputs = [pin(path) for path in paths]
    folder = Path(folder) if folder else WORK/'address-build'
    target = Path(target) if target else WORK/'address-execution.json'
    original = json.loads((WORK/'address-reference.json').read_text(encoding='utf-8'))
    assert len(original['cases']) == len(cases()) == 156
    assert original['visitedInstructionPcs'] == 109 and not original['unvisitedPcs']
    build = json.loads((folder/'build.json').read_text(encoding='utf-8'))
    for row in [build['source'], build['header'], *build['artifacts']]:
        assert pin(ROOT/row['path']) == row
    native = Windows(folder/'address055.dll')
    rows = []
    try:
        for case, reference in zip(cases(), original['cases']):
            assert case == reference['input']
            arm = machine(folder/'arm.elf', case)
            windows = native.execute(case)
            a64 = machine(folder/'a64.elf', case, True)
            assert all(row['returned'] == reference['returned'] for row in [arm, windows, a64])
            rows.append(dict(input=case, original=reference, authoredArm=arm, actualWindows=windows, highAarch64=a64))
    finally:
        native.close()
    assert all(pin(ROOT/row['path']) == row for row in inputs)
    result = dict(schemaVersion=1, status='closed-address-arithmetic-component-four-path-comparison',
                  inputFiles=inputs, originalReference=pin(WORK/'address-reference.json'),
                  build=pin(folder/'build.json'), cases=rows, caseSets=len(rows), targetObservations=len(rows)*4,
                  actualWindows=True, highAddressAarch64CpuModel=True, originalExecutableInSourceExecution=False,
                  originalInstructionBytes=436, originalInstructionPcsVisited=109,
                  pointerBinding='Native region pointer stays full width; its separately supplied U32 target_address is data, never derived by truncation. ARM uses the original pointer value directly.',
                  nativeBindingFieldIsClaimedOriginalField=False, actualNativePhysicalAddressClaimed=False,
                  productionGlobalInitializationQualified=False, mapHelperLengthDomain=[1],
                  rendererGameOrDeviceExecuted=False, sharedMetadataChanged=False, sourceCreditGranted=0,
                  producer=pin(Path(__file__).resolve()))
    target.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(dict(report=pin(target), caseSets=len(rows), observations=len(rows)*4)))
    return result


if __name__ == '__main__':
    run()
