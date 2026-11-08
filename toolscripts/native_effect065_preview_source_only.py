import json
import random
import re
import shutil
import struct

import native_effect065_build as common
import native_effect065_preview_build as builder
import native_effect065_preview_oracle as oracle
from native_effect065_preview_cases import ROOT, Machine, Native, observe


def run(output, expected_path=None):
    if output.exists():
        raise ValueError('Preserve the small source-only copy')
    source_root = output / 'source-only'
    source_root.mkdir(parents=True)
    selected, pending = set(), list(builder.SOURCES)
    pending.append(ROOT / 'src/native/wave065/effect_preview.h')
    while pending:
        path = pending.pop().resolve()
        if path in selected:
            continue
        relative = path.relative_to(ROOT)
        if path.suffix not in ['.c', '.h']:
            raise ValueError('Tiny source copy accepts authored C/H only')
        selected.add(path)
        for name in re.findall(r'^\s*#include\s+"([^"]+)"', path.read_text(), re.M):
            header = path.parent / name
            if not header.exists():
                header = ROOT / 'src/native/wave065' / name
            pending.append(header)
        destination = source_root / relative
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(path, destination)
    previous = builder.ROOT, builder.SOURCES
    try:
        builder.ROOT = source_root
        builder.SOURCES = [source_root / path.relative_to(ROOT) for path in previous[1]]
        builder.build(output / 'build')
    finally:
        builder.ROOT, builder.SOURCES = previous
    def forbidden_reference():
        raise ValueError('Source-only execution attempted to construct the original image')
    previous_reference = oracle.ReferenceImage
    oracle.ReferenceImage = forbidden_reference
    try:
        machines = [Machine('arm', output / 'build/arm/effect_preview.elf'),
            Native(output / 'build/windows/effect_preview.dll'), Machine('a64', output / 'build/a64/effect_preview.elf')]
        for machine in machines:
            if isinstance(machine, Machine) and any(max(low, 0x100000) < min(high + 1, 0xa00000)
                    for low, high, protection in machine.cpu.mem_regions()):
                raise ValueError('Source-only preview mapped an original-image address range')
        expected = json.loads((expected_path or ROOT / 'work/native-effect065/preview-corpus-v3/rows.json').read_text())
        rows = []
        for index, row in enumerate(expected):
            count = row['count']
            records = bytearray(random.Random(65000 + index).randbytes(320 * max(1, count)))
            for item in range(max(1, count)):
                struct.pack_into('<3f', records, item * 320 + 260, item + 0.25, -item - 0.5, item * 2.0)
            for machine in machines:
                machine.prepare(count, records)
                cache = machine.read(machine.cache - 32, machine.layout['cacheBytes'] + 64)
                entry = machine.read(machine.entry - 32, machine.layout['entryBytes'] + 64)
                machine.invoke('fn_002a41c4', [machine.cache, 0, machine.input], row['translationBits'])
                if observe(machine, cache, entry) != row['observation']:
                    raise ValueError('Copied source-only preview differs from the observed original corpus')
            rows.append({'count': count, 'targets': 3, 'agreed': True})
    finally:
        oracle.ReferenceImage = previous_reference
    report = {'status': 'tiny-C-header-copy-source-only-three-target-preview-replay', 'rows': rows,
        'copiedFiles': [common.pin(source_root / path.relative_to(ROOT)) for path in sorted(selected)],
        'copiedBytes': sum(path.stat().st_size for path in selected),
        'originalArchiveImageAssetsOrToolTreeCopied': False, 'originalImageConstructorForbidden': True,
        'toolchainReused': str(common.TOOLS.relative_to(ROOT)), 'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({name: value for name, value in report.items() if name not in ['rows', 'copiedFiles']}))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/preview-source-only-v1')
