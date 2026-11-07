import json

from unicorn import UcError
from native_wave014_build import SOURCE, SOURCES, WORK, arm, pin, save
from native_wave014_oracle import Arm, compare, original
from native_wave014_vectors import cases


FLAGS = ['-fsanitize=float-cast-overflow', '-fsanitize-trap=float-cast-overflow']


def run():
    folder = WORK / 'conversion-sanitizer'
    blocks, executable, symbols, receipt = arm(folder / 'valid', extra_flags=FLAGS)
    selected = [case for case in cases() if case['operation'] == 'trig']
    comparison = compare(original(), Arm(blocks, symbols, executable), selected, 'finite float-cast sanitizer')
    if not comparison['passed']:
        raise ValueError('Sanitized finite indexed-angle sweep differs')
    path = folder / 'unsafe-trigonometry.c'
    source = (SOURCE / 'trigonometry.c').read_text()
    marker = 'float magnitude = normalized_angle(indexed_angle);'
    if source.count(marker) != 1:
        raise ValueError('Unsafe conversion control marker is ambiguous')
    path.write_text(source.replace(marker, marker + '\n    magnitude = indexed_angle;'))
    changed = [path if item.name == 'trigonometry.c' else item for item in SOURCES]
    bad_blocks, bad_executable, bad_symbols, bad_receipt = arm(folder / 'invalid', changed, FLAGS)
    largest = max(selected, key=lambda row: row['angle'])
    trapped = False
    try:
        Arm(bad_blocks, bad_symbols, bad_executable).execute(largest)
    except UcError:
        trapped = True
    if not trapped:
        raise ValueError('Deliberately undefined conversion escaped float-cast sanitizer')
    report = {'schemaVersion': 1, 'finiteCases': len(selected), 'allFiniteCasesReturnedWithoutSanitizerTrap': True,
        'allComparedBytesEqualOriginal': True, 'validBuild': receipt['linkedElf'], 'sanitizerFlags': FLAGS,
        'unsafeControlSource': pin(path), 'unsafeControlBuild': bad_receipt['linkedElf'],
        'unsafeControlCase': largest['id'], 'unsafeControlTrapped': True,
        'finiteDomainIncludesSubnormalsSignedZerosAndFloatMax': True,
        'nonfiniteInputsAdmitted': False, 'originalNonfiniteErrnoBehaviorClaimed': False}
    save(WORK / 'conversion-sanitizer.json', report)
    print(json.dumps({'sanitizedFiniteCases': len(selected), 'unsafeConversionControlTrapped': True}))
    return report


if __name__ == '__main__':
    run()
