import json
from pathlib import Path
from native_caller055_measure import WORK, ROOT, pin
from native_caller055_reference import cases, ARENA
from native_caller055_models import Windows, machine
from native_caller055_model import expected
import hashlib


def run(folder=None,target=None):
    reference = json.loads((WORK/'selector-reference.json').read_text(encoding='utf-8'))
    folder = Path(folder) if folder else WORK/'selector-build'
    target = Path(target) if target else WORK/'selector-execution.json'
    built = json.loads((folder/'build.json').read_text(encoding='utf-8'))
    inputs = built['sources']+built['headers']+[pin(Path(__file__).resolve()),
        pin(Path(__file__).with_name('native_caller055_models.py')), pin(Path(__file__).with_name('native_caller055_reference.py'))]
    inputs.append(pin(Path(__file__).with_name('native_caller055_model.py')))
    assert reference['caseSets'] == len(cases()) == 424 and reference['callerVisitedPcs'] == 986
    assert not reference['callerUnvisitedPcs']
    native = Windows(folder/'selector055.dll')
    rows = []
    try:
        for case, original in zip(cases(), reference['cases']):
            assert case == original['input']
            outputs = {}
            try:
                model, cursor, limit, returned = expected(case)
                assert hashlib.sha256(model).hexdigest() == original['dataArenaSha256']
                assert [cursor, limit] == original['finalPair'] and returned == original['returned']
                for name, call in [('authoredArm', lambda:machine(folder/'arm.elf', case)),
                                   ('actualWindows', lambda:native.execute(case)),
                                   ('highAarch64', lambda:machine(folder/'a64.elf', case, True))]:
                    value, arena = call()
                    outputs[name] = value
                    assert value['returned'] == original['returned'], (name, 'return', value['returned'], original['returned'])
                    assert value['dataArenaSha256'] == original['dataArenaSha256'], (name, 'data arena', value['cacheWords'], original['cacheWords'])
                    assert value['cursorOffset'] == original['finalPair'][0]-ARENA
                    assert value['limitOffset'] == original['finalPair'][1]-ARENA
            except BaseException as error:
                failure = dict(case=case, error=repr(error), original=original, source=outputs, inputs=inputs)
                path = WORK/'selector-qualification.failure.json'
                path.write_text(json.dumps(failure, indent=2)+'\n', encoding='utf-8')
                raise
            rows.append(dict(input=case, original=original, independentModelPassed=True, **outputs))
    finally:
        native.close()
    assert all(pin(ROOT/row['path']) == row for row in inputs)
    result = dict(schemaVersion=1, status='selector055-four-path-comparison-not-admission',
                  sourceFiles=inputs, originalReference=pin(WORK/'selector-reference.json'),
                  build=pin(folder/'build.json'), cases=rows, caseSets=len(rows), targetObservations=len(rows)*4,
                  allOriginalSourceFullInitializedDataArenasEqual=True, originalCallerInstructionPcsVisited=986,
                  actualWindows=True, highAddressAarch64CpuModel=True, originalExecutableInSourceExecution=False,
                  floatingStatusBitsEqualClaimed=False, productionGlobalInitializationQualified=False,
                  rendererGameOrDeviceExecuted=False, sourceCreditGranted=0, producer=pin(Path(__file__).resolve()))
    target.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(dict(report=pin(target), cases=len(rows), observations=len(rows)*4)))
    return result


if __name__ == '__main__':
    run()
