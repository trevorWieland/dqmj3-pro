import argparse
import ctypes
import json
import shutil
from pathlib import Path

import effect_request066_build as builder
import effect_request066_oracle as constructor
import effect_request066_session as session
import effect_request066_errors as errors


ROOT = builder.ROOT
MUTATIONS = [
    ('initial-state', 'request_control.c', 'control->state = 0;', 'control->state = 1;', 'constructor'),
    ('alignment', 'request_task.c', 'provider->alignment = alignment;', 'provider->alignment = alignment + 1u;', 'constructor'),
    ('owned-path', 'request_strings.c', 'header->code_units[index] = path[index];',
        'header->code_units[index] = path[index] + (index == 0);', 'constructor'),
    ('short-read-success', 'request_provider.c', 'if ((unsigned long long)(long long)(int)copied == length)',
        'if ((unsigned long long)(long long)(int)copied <= length)', 'short'),
    ('read-error-leak-repair', 'request_provider.c', '    request_failed066(provider, task);',
        '    if (provider->data != 0)\n        provider->heap->operations->release(provider->heap, provider->data);\n    request_failed066(provider, task);', 'read-error'),
    ('returned-native-pointer-width', 'request_control.c', 'return task->provider->operations->bytes(task->provider);',
        'return (const unsigned char *)(__SIZE_TYPE__)(unsigned int)(__SIZE_TYPE__)task->provider->operations->bytes(task->provider);', 'session'),
]


def run(output):
    if output.exists():
        raise ValueError('Preserve request returning semantic controls')
    output.mkdir(parents=True)
    results = []
    for name, filename, before, after, mode in MUTATIONS:
        directory = output / name
        directory.mkdir()
        source = ROOT / 'src/native/wave066-request' / filename
        text = source.read_text()
        if text.count(before) != 1:
            raise ValueError('Request source mutation anchor is not unique')
        variant = directory / filename
        variant.write_text(text.replace(before, after))
        shutil.copyfile(source.parent / 'request.h', directory / 'request.h')
        builder.build(directory / 'build', {source: variant})
        for profile in ['arm', 'windows', 'a64']:
            binary = directory / 'build' / profile
            if mode == 'constructor':
                machine = constructor.Native(binary) if profile == 'windows' else constructor.Machine(profile, binary / 'effect_resource.elf')
                machine.prepare_case('rom:/data/Effect/ef00007.pef', 0)
                observe = lambda: constructor.observe(machine)
            elif mode == 'session':
                machine = session.Native(binary) if profile == 'windows' else session.Machine(profile, binary / 'effect_resource.elf')
                machine.prepare_session('rom:/data/Effect/ef00007.pef')
                observe = lambda: session.observe(machine)
            else:
                machine = errors.Native(binary) if profile == 'windows' else errors.Machine(profile, binary / 'effect_resource.elf')
                case = next(row for row in errors.CASES if row['name'] == ('short-read' if mode == 'short' else 'read-error-retains-buffer'))
                machine.prepare_case(case)
                observe = lambda: errors.observe(machine, case)
            if not machine.returned:
                raise ValueError('Request wrong-source control did not return normally')
            try:
                observe()
            except ValueError as error:
                if name == 'returned-native-pointer-width' and profile == 'arm':
                    raise ValueError('Pointer-width control rejected an unaffected ARM32 result') from error
                results.append({'control': name, 'profile': profile, 'returned': True, 'rejected': True, 'reason': str(error)})
            else:
                if name != 'returned-native-pointer-width' or profile != 'arm':
                    raise ValueError('Returning request wrong-source control escaped independent observer')
                results.append({'control': name, 'profile': profile, 'returned': True, 'rejected': False,
                    'applicability': 'U32 truncation is inapplicable to an ARM32 pointer'})
        print(json.dumps({'control': name, 'observations': len(results)}), flush=True)
    report = {'status': 'returning-request-source-semantic-controls', 'results': results, 'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.output.resolve())
