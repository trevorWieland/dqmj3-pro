import json
from pathlib import Path

import native_effect065_build as build
from native_effect065_shader_oracle import Machine, Native
from native_effect065_shader_lifetime import MachineLifetime, NativeLifetime


ROOT = build.ROOT
WORK = ROOT / 'work/native-effect065'


def canonical(row):
    return {name: value for name, value in row.items() if name != 'nativeABIExtraPaddingChanged'}


def main(output=None):
    output = output or WORK / 'shader-negatives-v1'
    output.mkdir(exist_ok=False)
    source = (ROOT / 'src/native/wave065/effect_shader.c').read_text()
    variants = [
        ('wrong_kind8', 'kind == 8 ? 5 : kind', 'kind == 8 ? 4 : kind', 'select', 8, 0, 0xa5, False),
        ('wrong_orientation', '24 + orientation * 2', '24 + orientation', 'select', 5 | 2 << 16, 1, 0x5a, False),
        ('wrong_flag', '((flags >> 1) & 1)', '((flags >> 0) & 1)', 'select', 0, 2, 0xff, False),
        ('cleared_unknown', 'binding->unknown_00 = 0;', 'binding->unknown_00 = 0; binding->unknown_0d[0] = 0;',
         'construct', 0x08080808, 0xff, 0xa5, False),
        ('wrong_this_return', 'return binding;', 'return 0;', 'construct', 7, 3, 0x5a, False),
        ('truncated_pointer',
         'binding->commands = active_effect_shader_pool065->programs[index].commands;',
         'binding->commands = (const EffectDeviceWord065 *)(__UINTPTR_TYPE__)(unsigned int)(__UINTPTR_TYPE__)active_effect_shader_pool065->programs[index].commands;',
         'select', 8, 2, 0x12, True),
        ('wrong_ownership', '!binding->commands_borrowed', 'binding->commands_borrowed', 'release', 0, 0, 0, False)]
    reference = Machine('original')
    reference_lifetime = MachineLifetime('original')
    rows = []
    for name, old, new, operation, key, flags, pattern, native_only in variants:
        if source.count(old) != 1:
            raise ValueError('Returning source mutation does not bind exactly one expression')
        folder = output / name
        folder.mkdir()
        mutated = folder / 'effect_shader.c'
        mutated.write_text(source.replace(old, new))
        build.build(folder / 'build', mutated, fixture=True)
        directory = folder / 'build'
        if operation == 'release':
            expected = reference_lifetime.release(True, 7, 0, False)
            machines = [MachineLifetime('arm', directory / 'arm/effect_shader.elf'),
                NativeLifetime(directory / 'windows/effect_shader.dll'),
                MachineLifetime('a64', directory / 'a64/effect_shader.elf')]
        else:
            expected = canonical(reference.call(operation, key, flags, pattern))
            machines = [Machine('arm', directory / 'arm/effect_shader.elf'),
                Native(directory / 'windows/effect_shader.dll'), Machine('a64', directory / 'a64/effect_shader.elf')]
        results = []
        for index, machine in enumerate(machines):
            semantic_error = None
            try:
                if operation == 'release':
                    observed = machine.release(True, 7, 0, False)
                    returned = True
                else:
                    observed = canonical(machine.call(operation, key, flags, pattern))
                    returned = machine.last_call_returned_normally if isinstance(machine, Native) else machine.returned
            except ValueError as error:
                returned = machine.last_call_returned_normally if isinstance(machine, Native) else machine.returned
                semantic_error, observed = str(error), None
            if not returned:
                raise ValueError('A wrong-source control did not return normally')
            rejected = semantic_error is not None or observed != expected
            required = not native_only or index != 0
            if rejected != required:
                raise ValueError('Returning mutation observer result differs from its explicit platform domain')
            results.append({'profile': ['sourceARM', 'nativeWindows', 'highA64'][index],
                'returnedNormally': returned, 'semanticallyRejected': rejected,
                'applicableToThisPointerWidth': required, 'observed': observed, 'semanticError': semantic_error})
        rows.append({'name': name, 'source': build.pin(mutated), 'operation': operation,
                     'expectedOriginal': expected, 'results': results})
    report = {'status': 'genuine-returning-source-semantic-and-pointer-width-controls',
        'controls': rows, 'sourceInputs': [build.pin(ROOT / 'src/native/wave065/effect_shader.c')],
        'noCompiledBytesOrOriginalInstructionsPatched': True, 'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'controls': len(rows), 'normalReturningChecks': sum(len(row['results']) for row in rows),
                      'semanticRejections': sum(r['semanticallyRejected'] for row in rows for r in row['results'])}))


if __name__ == '__main__':
    main()
