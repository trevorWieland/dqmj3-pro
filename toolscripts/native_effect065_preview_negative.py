import json
import struct

import native_effect065_build as common
import native_effect065_preview_build as builder
from native_effect065_preview_cases import ROOT, FOLDER, Machine, Native, observe


def execute(machine, clear=False):
    records = bytearray(bytes([0x5a]) * 640)
    for item in range(2):
        struct.pack_into('<3f', records, item * 320 + 260, item + 1, item + 2, item + 3)
    machine.prepare(2, records)
    before_cache = machine.read(machine.cache - 32, machine.layout['cacheBytes'] + 64)
    before_entry = machine.read(machine.entry - 32, machine.layout['entryBytes'] + 64)
    translation = list(struct.unpack('<3I', struct.pack('<3f', 10, 20, 30)))
    machine.invoke('fn_002a41c4', [machine.cache, 0, machine.input], translation)
    if clear:
        before_entry = machine.read(machine.entry - 32, machine.layout['entryBytes'] + 64)
        machine.invoke('fn_002a41c4', [machine.cache, 0, 0], translation)
    return observe(machine, before_cache, before_entry)


def run(output):
    if output.exists():
        raise ValueError('Preserve returning preview controls')
    output.mkdir(parents=True)
    original = Machine('original', FOLDER / 'arm/effect_preview.elf')
    expected = {False: execute(original), True: execute(original, True)}
    source = (ROOT / 'src/native/wave065/effect_preview.c').read_text()
    controls = [
        ('translation-z', 'preview->position[2] += translation.z;', 'preview->position[2] -= translation.z;', False),
        ('primary-translation', 'EffectPreviewHeader065 header;',
            'entry->primary_preview->position[0] += translation.x;\n    EffectPreviewHeader065 header;', False),
        ('preserved-prefix', 'append_preview065(&entry->previews, preview);',
            'append_preview065(&entry->previews, preview);\n        preview->unknown_000[0] = 0;', False),
        ('growth-budget', 'size + 32', 'size + 16', False),
        ('native-budget', '(__SIZE_TYPE__)next * sizeof(*replacement)', '(__SIZE_TYPE__)next * 4', False),
        ('clear-primary', 'entry->primary_preview = 0;', '(void)entry;', True)]
    rows = []
    for name, old, new, clear in controls:
        if old not in source:
            raise ValueError('Returning preview mutation no longer applies: ' + name)
        folder = output / name
        folder.mkdir()
        mutant = folder / 'effect_preview.c'
        mutant.write_text(source.replace(old, new))
        builder.build(folder / 'build', {'effect_preview.c': mutant})
        machines = [Machine('arm', folder / 'build/arm/effect_preview.elf'), Native(folder / 'build/windows/effect_preview.dll'),
            Machine('a64', folder / 'build/a64/effect_preview.elf')]
        for profile, machine in zip(['arm', 'windows', 'a64'], machines, strict=True):
            reason = None
            try:
                value = execute(machine, clear)
                if value != expected[clear]:
                    reason = 'Caller-visible complete record/ownership result differs'
            except ValueError as error:
                reason = str(error)
            applicable = not (name == 'native-budget' and profile == 'arm')
            returned = machine.returned
            if not returned or (reason is not None) != applicable:
                raise ValueError('Preview control failed returning/applicability contract: ' + name + '/' + profile)
            rows.append({'control': name, 'profile': profile, 'returnedNormally': returned,
                'applicable': applicable, 'rejected': reason is not None, 'reason': reason,
                'authoredMutation': common.pin(mutant)})
    report = {'status': 'genuine-returning-compiled-preview-semantic-controls', 'checks': len(rows),
        'semanticRejections': sum(row['rejected'] for row in rows), 'rows': rows,
        'sourceOrObjectOutputPatched': False, 'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'checks': len(rows), 'semanticRejections': report['semanticRejections']}))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/preview-negative-v1')
