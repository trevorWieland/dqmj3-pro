import json
import struct
import time
from pathlib import Path

import effect_resource065_graph_oracle as oracle
from effect_resource065_graph_observation import Observation, logical


def run(build, output):
    output = Path(output).resolve()
    if output.exists():
        raise ValueError('Preserve the resource graph observation attempt')
    output.mkdir(parents=True)
    machines = {profile: oracle.Native(build / 'windows/effect_resource.dll') if profile == 'windows' else
        oracle.Machine(profile, build / ('arm' if profile == 'original' else profile) / 'effect_resource.elf')
        for profile in ['original', 'arm', 'windows', 'a64']}
    rows = []
    started = time.monotonic()
    try:
        for count in [0, 1, 3]:
            for pattern in [0, 0x5a, 0xa5, 0xff]:
                raw = bytearray(4096)
                for offset, value in [(8, count), (0x10, 0x800), (0x14, 0x900), (0x1c, 0xa00), (0x2c, 0xb00)]:
                    struct.pack_into('<I', raw, offset, value)
                for profile, machine in machines.items():
                    machine.prepare(raw, pattern)
                    machine.construct()
                    snapshot = Observation(machine).snapshot()
                    rows.append({'count': count, 'pattern': pattern, 'profile': profile, 'phase': 'construct', 'snapshot': snapshot})
                expected = logical(rows[-4]['snapshot'])
                for row in rows[-3:]:
                    if logical(row['snapshot']) != expected:
                        raise ValueError('Constructed resource logical graph differs: ' + row['profile'])
                if count:
                    for profile, machine in machines.items():
                        machine.release()
                        rows.append({'count': count, 'pattern': pattern, 'profile': profile, 'phase': 'release',
                            'snapshot': Observation(machine).snapshot(released=True)})
                    expected = logical(rows[-4]['snapshot'])
                    for row in rows[-3:]:
                        if logical(row['snapshot']) != expected:
                            raise ValueError('Released resource logical graph differs: ' + row['profile'])
                print(json.dumps({'count': count, 'pattern': pattern, 'observations': len(rows)}), flush=True)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'rows': rows, 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    report = {'status': 'empty-set-resource-graph-smoke-only', 'rows': rows, 'elapsedSeconds': time.monotonic() - started,
        'build': oracle.common.pin(build / 'build.json'), 'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'observations': len(rows), 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output)
