import json
import importlib.metadata
import platform
from pathlib import Path
import unicorn
import capstone
from native_state055_measure import ROOT, WORK, SOURCE, HEADER, pin
from native_state055_reference import cases, execute
from native_state055_models import Windows, machine_execute


def run(folder=None, target=None):
    folder = Path(folder) if folder else WORK/'build'
    target = Path(target) if target else WORK/'execution.json'
    build = json.loads((folder/'build.json').read_text(encoding='utf-8'))
    names = ['measure', 'reference', 'build', 'models', 'qualify']
    inputs = [pin(ROOT/'toolscripts'/('native_state055_'+name+'.py')) for name in names]
    inputs += [pin(ROOT/row['path']) for row in [build['source'], build['header']]]
    for row in [build['source'], build['header'], *build['artifacts']]:
        assert pin(ROOT/row['path']) == row
    windows = Windows(folder/'state055.dll')
    rows = []
    try:
        for case in cases():
            original = execute(case)
            arm = machine_execute(folder/'arm.elf', case)
            native = windows.execute(case)
            a64 = machine_execute(folder/'a64.elf', case, True)
            assert all(row['dataArenaSha256'] == original['fullDataArenaSha256'] for row in [arm, native, a64])
            rows.append(dict(input=case, original=original, authoredArm=arm, actualWindows=native, highAarch64=a64))
    finally:
        windows.close()
    assert all(pin(ROOT/row['path']) == row for row in inputs)
    result = dict(schemaVersion=1, status='primary-four-path-leaf-comparison-not-admission',
                  source=build['source'], header=build['header'], build=pin(folder/'build.json'),
                  producer=pin(Path(__file__).resolve()), inputFiles=inputs, cases=rows, caseSets=len(rows), targetObservations=len(rows)*4,
                  allOriginalSourceFullDataArenasEqual=True, actualWindows=True, highAarch64CpuModel=True,
                  originalModuleInSourceExecution=False, androidOsOrDeviceExecuted=False,
                  tools=dict(python=platform.python_version(), unicornDistribution=importlib.metadata.version('unicorn'),
                             unicornInterface=unicorn.__version__, unicornRuntime=list(unicorn.uc_version()),
                             capstoneDistribution=importlib.metadata.version('capstone'), capstoneInterface=capstone.__version__,
                             capstoneRuntime=list(capstone.cs_version())),
                  sharedMetadataModified=False, sourceCreditGranted=0)
    target.write_text(json.dumps(result, indent=2)+'\n')
    print(json.dumps(dict(report=pin(target), caseSets=len(rows), observations=len(rows)*4)))
    return result


if __name__ == '__main__':
    run()
