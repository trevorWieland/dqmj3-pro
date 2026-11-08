import hashlib
import json
import random
import struct

from native_effect065_preview_cases import ROOT, FOLDER, Machine, Native, observe


def store(machine, address, raw):
    if isinstance(machine, Native):
        import ctypes
        ctypes.memmove(address, raw, len(raw))
    else:
        machine.cpu.mem_write(address, raw)


def run(output, prior_path=None):
    if output.exists():
        raise ValueError('Preserve preview reuse proof')
    output.mkdir(parents=True)
    machines = [Machine('original', FOLDER / 'arm/effect_preview.elf'), Machine('arm', FOLDER / 'arm/effect_preview.elf'),
        Native(FOLDER / 'windows/effect_preview.dll'), Machine('a64', FOLDER / 'a64/effect_preview.elf')]
    translation = list(struct.unpack('<3I', struct.pack('<3f', -1, 0.5, 2.25)))
    for machine in machines:
        machine.prepare(0, bytes(320))
    rows = []
    for step, count in enumerate([1, 3, None, None, 33, None, 0]):
        records = bytearray(random.Random(65500 + step).randbytes(320 * max(1, count or 0)))
        for item in range(max(1, count or 0)):
            struct.pack_into('<3f', records, item * 320 + 260, item, -item, 0.125)
        results = []
        for machine in machines:
            store(machine, machine.input, struct.pack('<II', 0x65000001, (count or 0) & 0xffffffff) + records)
            before_cache = machine.read(machine.cache - 32, machine.layout['cacheBytes'] + 64)
            before_entry = machine.read(machine.entry - 32, machine.layout['entryBytes'] + 64)
            machine.invoke('fn_002a41c4', [machine.cache, 0, 0 if count is None else machine.input], translation)
            results.append(observe(machine, before_cache, before_entry))
        if any(row != results[0] for row in results[1:]):
            raise ValueError('Preview same-cache lifecycle comparison differs at step ' + str(step))
        rows.append({'step': step, 'count': count, 'observation': results[0]})
    census = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())
    function = next(row for row in census['functions'] if row['address'] == 0x2a41c4)
    all_pcs = {pc for part in function['ranges'] for pc in range(part['start'], part['endExclusive'], 4)}
    prior = json.loads((prior_path or ROOT / 'work/native-effect065/preview-corpus-v3/reference-instructions.json').read_text())
    visited = machines[0].pcs | {row['address'] for row in prior}
    report = {'status': 'same-cache-seven-step-preview-ownership-and-release-proof', 'sets': len(rows),
        'rows': rows, 'canonicalInstructionPCs': len(all_pcs), 'visitedCanonicalPCs': len(all_pcs & visited),
        'unhitCanonicalPCs': sorted(all_pcs - visited), 'sourceCreditGranted': 0,
        'retiredAllocationReadsMachineTargets': [machine.retired_reads for machine in machines if isinstance(machine, Machine)],
        'limits': ['Repeated nonnull loads preserve the original overwritten-primary allocation rather than repairing it.',
            'Null source frees only the current primary; it preserves the previously appended vector.',
            'Full effect ownership, allocator failure/overflow, GPU and outer file-task behavior remain unqualified.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({name: value for name, value in report.items() if name != 'rows'}))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/preview-reuse-v1')
