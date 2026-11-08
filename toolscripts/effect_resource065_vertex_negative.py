import json

import native_effect065_build as common
import effect_resource065_build as builder
from effect_resource065_vertex_oracle import ROOT, Machine, Native
from effect_resource065_vertex_cases import base_input, put, model


def run(output):
    if output.exists():
        raise ValueError('Preserve the returning vertex controls')
    output.mkdir(parents=True)
    source = (ROOT / 'src/native/wave065-resource/effect_vertex.c').read_text()
    raw = base_input(6500065)
    raw[0x154 + 5] = 1
    at = 0x160 + 5 * 112
    put(raw, at, 0xf1234567)
    put(raw, at + 64 + 6 * 4, 5)
    raw[at + 5] = 0xa5
    remove = bytes(raw)
    fresh = bytes(base_input(6500066))
    controls = [
        ('no-op-write', '(void)storage;', '*storage = 0;', 'fn_0016771c', bytes([0xa5]), 0),
        ('constant-blanket-zero', 'attribute->enabled = 0;',
            'for (unsigned int byte = 0; byte < sizeof(*attribute); ++byte)\n        ((unsigned char *)attribute)[byte] = 0;',
            'fn_0015d210', bytes([0xa5]) * 20, 0),
        ('binding-constructor-zero', 'binding->buffer_word = 0;',
            'binding->buffer_word = 0;\n    for (unsigned int byte = 0; byte < 12; ++byte) binding->format[byte] = 0;',
            'fn_0015d258', bytes([0xa5]) * 112, 0),
        ('reset-indices-zero', 'binding->attributes[index] = 0xffffffffu;', 'binding->attributes[index] = 0;',
            'fn_0015d21c', bytes([0xa5]) * 112, 0),
        ('remove-unowned-format', 'if (!remaining) {', 'if (!remaining) {\n                binding->format[1] = 0;',
            'fn_0014db24', remove, 5),
        ('wrong-format-width', 'case 3:\n    case 6:\n    case 12:\n    case 13:\n        return 4;',
            'case 3:\n    case 6:\n    case 12:\n    case 13:\n        return 8;', 'fn_0015d0e0', fresh, 5),
        ('wrong-index', 'available->attributes[0] = index;', 'available->attributes[0] = (index + 1) % 12;',
            'fn_0015d0e0', fresh, 5),
        ('cache-not-invalidated', 'input->cache_word = 0;\n}', '(void)input;\n}', 'fn_0015d0e0', fresh, 5)]
    rows = []
    for name, old, new, function, initial, index in controls:
        if old not in source:
            raise ValueError('Vertex mutation no longer applies')
        folder = output / name
        folder.mkdir()
        mutant = folder / 'effect_vertex.c'
        mutant.write_text(source.replace(old, new, 1))
        builder.build(folder / 'build', mutant)
        expected = model(function, initial, index, 3, 0xe1234567)
        machines = [Machine('arm', folder / 'build/arm/effect_vertex.elf'), Native(folder / 'build/windows/effect_vertex.dll'),
            Machine('a64', folder / 'build/a64/effect_vertex.elf')]
        for profile, machine in zip(['arm', 'windows', 'a64'], machines, strict=True):
            actual = machine.call(function, initial, index, 3, 0xe1234567)
            if not machine.returned or actual == expected:
                raise ValueError('Vertex semantic control did not return and fail: ' + name + '/' + profile)
            rows.append({'control': name, 'profile': profile, 'returnedNormally': True, 'semanticallyRejected': True,
                'mutatedSource': common.pin(mutant), 'observedSha256': common.hashlib.sha256(actual).hexdigest()})
    report = {'status': 'genuine-returning-compiled-vertex-semantic-controls', 'checks': len(rows),
        'semanticRejections': len(rows), 'rows': rows, 'anyCompiledOutputOrOriginalCodePatched': False,
        'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'checks': len(rows), 'semanticRejections': len(rows)}))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/resource/vertex-negative-v1')
