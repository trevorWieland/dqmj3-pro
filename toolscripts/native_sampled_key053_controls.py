from native_sampled_key053_build import build
from native_sampled_key053_cases import fixture, normalized_target
from native_sampled_key053_domain import validate
from native_sampled_key053_elf import graph
from native_sampled_key053_measure import ROOT, pin
from native_sampled_key053_reference import run as reference
from native_sampled_key053_source import run as source
from native_sampled_key053_windows import Native


def run(folder, receipts):
    source_root = ROOT / 'src/native/wave053'
    mutations = [
        ('reverse-tangent-fields', 'prepare.c',
         '-first.outgoing, -second.incoming', '-first.incoming, -second.outgoing',
         fixture(7, -0.5, 2, 2)),
        ('constant-value', 'prepare.c', 'output->value = first;', 'output->value = second;',
         fixture(1, 0.25, 0, 0)),
        ('period-counter', 'prepare.c', 'output->period = 0;', 'output->period = 1;',
         fixture(1, 0.25, 1, 1)),
        ('cached-neighbor', 'prepare.c', 'output->cached_key = neighbor;', 'output->cached_key = key;',
         fixture(1, 0.25, 0, 0)),
        ('quantized-value-offset', 'key_records.c',
         'input->value_offset + (float)value * input->value_scale',
         '(float)value * input->value_scale', fixture(0, 0.25, 0, 1)),
        ('signed-slope-scale', 'key_records.c', 'slope_scale = 0.00390625f;',
         'slope_scale = 0.0078125f;', fixture(6, 0.25, 0, 2)),
        ('linear-direction', 'prepare.c', '(second - first) / width', '(first - second) / width',
         fixture(1, 0.25, 0, 1))]
    rows = []
    for name, filename, before, after, case in mutations:
        validate(case)
        location = folder / name
        location.mkdir(parents=True, exist_ok=True)
        original_source = source_root / filename
        text = original_source.read_text()
        expected_count = 2 if name == 'signed-slope-scale' else 1
        if text.count(before) != expected_count:
            raise ValueError('Control mutation is no longer precise: ' + name)
        mutant = location / filename
        mutant.write_text(text.replace(before, after))
        observed = reference(case['entry'], case['header'], case['keys'], case['state'], case['position'])
        expected = normalized_target(observed['output'])
        profiles = []
        for profile in ['arm', 'windows', 'a64']:
            artifact = build(location / profile, profile, receipts, {filename: mutant})
            if profile == 'windows':
                result = Native(artifact).run(case)
            else:
                result = source(graph(artifact), case)
            if not result['returnedNormally'] or not result['callerGuardsPreserved']:
                raise ValueError('Wrong source did not return with caller guards')
            if result['result'] == expected:
                raise ValueError('Returning wrong source was not rejected: ' + name + '/' + profile)
            profiles.append({'profile': profile, 'artifact': pin(artifact),
                             'returnedNormally': True, 'callerGuardsPreserved': True,
                             'semanticMismatchDetected': True,
                             'actualResult': result['result'],
                             'windowsCalleeSavedRegistersDirectlyObserved': False if profile == 'windows' else None,
                             'sourceOnlyExecution': True})
        rows.append({'name': name, 'source': pin(original_source), 'wrongSource': pin(mutant),
                     'entry': case['entry'], 'position': case['position'],
                     'expectedReferenceResult': expected, 'profiles': profiles})
    return {'status': 'returning-authored-source-semantic-controls',
            'controlCount': len(rows), 'sourcePlatformExecutions': len(rows) * 3,
            'rows': rows, 'sourceCreditGranted': 0}
