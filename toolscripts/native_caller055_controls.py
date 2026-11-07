import hashlib
import json
from pathlib import Path
from native_caller055_measure import WORK, SOURCE, pin
from native_caller055_build import build
from native_caller055_reference import cases, ARENA
from native_caller055_model import expected
from native_caller055_models import Windows, machine


def run():
    source = (SOURCE/'selector055.c').read_text(encoding='utf-8')
    rows = {row['label']: row for row in cases()}
    call = '    state_write055(unit == 0 ? 0x81u : unit == 1 ? 0x91u : 0x99u,unit == 0 ? 10u : 6u,cache+index);'
    prefetched = source.replace(call, '    StateWord055 saved_tail = cache[14];\n'+call).replace('output[0] = cache[14];', 'output[0] = saved_tail;')
    early = '    if (!state_format_valid055(descriptor->format) && descriptor->format != 0x6050 && !(unit == 0 && descriptor->format == 0x6040))\n        return 0x502;\n'
    specs = [
        ('append-requires-two-logical-words', source.replace('(StateAddress055)output < (StateAddress055)state_pair055.limit', '(StateAddress055)(output+2) <= (StateAddress055)state_pair055.limit'), 'capacity-0-13'),
        ('tail-prefetched-before-aliased-writer', prefetched, 'cache-alias-0-4'),
        ('format-error-before-partial-cache-update', source.replace('    StateWord055 color = state_color055', early+'    StateWord055 color = state_color055'), 'format-0-0-0'),
        ('flags-published-after-writer', source.replace('    cache[0] |= 1u << unit;\n', '').replace(call, call+'\n    cache[0] |= 1u << unit;'), 'cache-alias-0-0'),
        ('dimension-preserved-bits-cleared', source.replace('~0x07ff07ffu', '~0x07ffffffu'), 'initial-0-1-20000008'),
        ('bias-offset-omitted', source.replace('(value+16.0f)*256.0f', 'value*256.0f'), 'bias-0-3f800000'),
    ]
    results = []
    for label, wrong, selected in specs:
        assert wrong != source
        case = rows[selected]
        model, cursor, limit, returned = expected(case)
        folder = WORK/'selector-controls'/label
        folder.mkdir(parents=True, exist_ok=True)
        target = folder/'selector055.c'
        target.write_text(wrong, encoding='utf-8')
        built = build(folder, target)
        native = Windows(folder/'selector055.dll')
        try:
            arm, arm_data = machine(folder/'arm.elf', case)
            windows, windows_data = native.execute(case)
            a64, a64_data = machine(folder/'a64.elf', case, True)
        finally:
            native.close()
        observations = []
        for name, row, data in [('authoredArm', arm, arm_data), ('actualWindows', windows, windows_data), ('highAarch64', a64, a64_data)]:
            assert row['actualFunctionReturned']
            same_return = row['returned'] == returned
            same_pair = [row['cursorOffset'], row['limitOffset']] == [cursor-ARENA, limit-ARENA]
            same_arena = data == bytes(model)
            assert not(same_return and same_pair and same_arena)
            observations.append(dict(platform=name, returnedNormally=True, returnValueSame=same_return,
                                     finalPairSame=same_pair, fullInitializedArenaSame=same_arena,
                                     actual=row, rejectedByIndependentModel=True))
        results.append(dict(label=label, source=pin(target), build=pin(folder/'build.json'),
                            input=case, observations=observations))
        print('selector055 returning control rejected:', label, flush=True)
    result = dict(schemaVersion=1, normallyReturningControls=len(results), platformExecutions=len(results)*3,
                  cases=results, noOriginalOrFrozenSourceModified=True, producer=pin(Path(__file__).resolve()))
    target = WORK/'selector-controls.json'
    target.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(pin(target)))
    return result


if __name__ == '__main__':
    run()
