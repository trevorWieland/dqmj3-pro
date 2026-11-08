import json
import time
from pathlib import Path

import native_effect065_resource_graph_oracle as oracle
from native_effect065_resource_graph_observation import Observation, logical
from native_effect065_resource_graph_cases import cases, fixture


def run(build, output):
    output = Path(output).resolve()
    if output.exists():
        raise ValueError('Preserve resource lifecycle comparison attempt')
    output.mkdir(parents=True)
    machines = {profile: oracle.Native(build / 'windows/effect_resource.dll') if profile == 'windows' else
        oracle.Machine(profile, build / ('arm' if profile == 'original' else profile) / 'effect_resource.elf')
        for profile in ['original', 'arm', 'windows', 'a64']}
    rows = []
    started = time.monotonic()
    try:
        for index, (name, specification, options) in enumerate(cases()):
            raw = fixture(**specification)
            for profile, machine in machines.items():
                machine.prepare(raw, [0, 0x5a, 0xa5, 0xff][index % 4], **options)
                machine.construct(options=index % 2 == 1)
                created = Observation(machine).snapshot()
                machine.release()
                released = Observation(machine).snapshot(released=True)
                rows.append({'name': name, 'profile': profile, 'created': created, 'released': released})
            for phase in ['created', 'released']:
                expected = logical(rows[-4][phase])
                if any(logical(row[phase]) != expected for row in rows[-3:]):
                    raise ValueError('Resource ' + phase + ' graph differs: ' + name)
            with (output / 'rows.jsonl').open('a', encoding='utf-8') as stream:
                for row in rows[-4:]:
                    stream.write(json.dumps(row, separators=(',', ':')) + '\n')
            print(json.dumps({'case': name, 'sets': len(rows) // 4}), flush=True)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'rows': rows,
            'originalPc': machines['original'].cpu.reg_read(oracle.ar.UC_ARM_REG_PC), 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    original = machines['original']
    report = {'status': 'bounded-resource-construction-and-lifetime-four-target-corpus', 'sets': len(rows) // 4,
        'rows': oracle.common.pin(output / 'rows.jsonl'), 'elapsedSeconds': time.monotonic() - started,
        'originalInstructionWitnesses': sorted(original.witnesses.values(), key=lambda row: row['address']),
        'originalConditions': oracle.conditions.serializable(original.condition_outcomes), 'kernelEvents': original.kernel_events,
        'sourceCreditGranted': 0, 'limits': ['Fresh synthetic borrowed files; successful class allocations except explicit texture scratch failure.',
            'Exactly one finalization; retained backing permits private retired-byte inspection but grants no post-free game access.',
            'CPU storage0 and declared stateful reference cache-flush boundary; transfer/render/device startup remain unqualified.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'sets': report['sets'], 'elapsedSeconds': report['elapsedSeconds'], 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output)
