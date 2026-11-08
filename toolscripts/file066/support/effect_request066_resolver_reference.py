import argparse
import json
import struct
from pathlib import Path

import effect_request066_device_reference as reference


CASES = [(0, 'data:/data/Effect/ef00007.pef'), (1, 'rom:/data/Effect/ef00007.pef'),
    (2, '/data/Effect/ef00007.pef'), (3, 'rom:/data/Effect/ef00007.pef'),
    (4, 'data:/data/Effect/ef00007.pef'), (0, ''), (2, 'x:y:z'), (6, 'rom:/A')]


def run(build, output):
    if output.exists():
        raise ValueError('Preserve actual original resolver selector attempt')
    output.mkdir(parents=True)
    machine = reference.Machine(build / 'arm/effect_resource.elf')
    machine.functions.update(request_string_assign_ref066=0x147974, request_string_release_ref066=0x1588d4)
    rows = []
    try:
        for selector, path in CASES:
            machine.setup()
            machine.owner_prepare(reference.generated_file())
            machine.invoke('effect_cached_fixture_reset065', [1, 7, machine.image])
            input_at, output_at, prefix_at, prefix_input = [machine.base + n for n in [0xc000, 0xc800, 0xc804, 0xd000]]
            raw = path.encode('utf-16le') + b'\0\0'
            machine.cpu.mem_write(input_at, raw)
            machine.cpu.mem_write(prefix_input, 'sdmc:/base/'.encode('utf-16le') + b'\0\0')
            machine.cpu.mem_write(output_at, struct.pack('<II', 0x8f9cf4, 0x8f9cf4))
            machine.active = True
            machine.invoke('request_string_assign_ref066', [prefix_at, prefix_input])
            result = machine.invoke('request_resolve066', [0, output_at, prefix_at, selector, input_at])
            machine.active = False
            pointer = int.from_bytes(machine.read_bytes(output_at, 4), 'little')
            header = struct.unpack('<3I', machine.read_bytes(pointer - 12, 12))
            if header[2] > 255:
                raise ValueError('Actual resolver result exceeds initialized observer bound')
            result_raw = machine.read_bytes(pointer, (header[2] + 1) * 2)
            before = machine.allocations()
            machine.active = True
            machine.invoke('request_string_release_ref066', [output_at])
            machine.invoke('request_string_release_ref066', [prefix_at])
            machine.active = False
            if machine.read_bytes(input_at, len(raw)) != raw:
                raise ValueError('Actual resolver modified caller path input')
            rows.append({'selector': selector, 'input': path, 'result': result, 'resultUtf16Hex': result_raw.hex(),
                'resultHeader': header, 'beforeRelease': before, 'afterRelease': machine.allocations()})
            (output / 'rows.json').write_text(json.dumps(rows, indent=2) + '\n')
            print(json.dumps({'selector': selector, 'result': result, 'path': result_raw.decode('utf-16le')}), flush=True)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'completedCases': len(rows),
            'witnesses': list(machine.witnesses.values()), 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    (output / 'report.json').write_text(json.dumps({'status': 'actual-original-path-source-selector-contract',
        'cases': len(rows), 'sourceCreditGranted': 0, 'witnesses': list(machine.witnesses.values())}, indent=2) + '\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
