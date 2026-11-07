import json

from native_wave014_build import SOURCE, SOURCES, WORK, arm, pin, save, windows
from native_wave014_oracle import Arm, Windows, compare, original
from native_wave014_vectors import cases


CONTROLS = [
    ('multiply-translation-sign', 'matrix.c', 'multiply',
        'left->m[row][3] + left->m[row][0] * right->m[0][3]',
        'left->m[row][3] - left->m[row][0] * right->m[0][3]'),
    ('inverse-translation-sign', 'matrix.c', 'inverse',
        'float translation = -(result.m[row][0] * input->m[0][3]);',
        'float translation = result.m[row][0] * input->m[0][3];'),
    ('sine-interpolation-sign', 'trigonometry.c', 'trig',
        'entry->sine + fraction * entry->sineStep', 'entry->sine - fraction * entry->sineStep'),
    ('srt-y-orientation', 'trigonometry.c', 'srt',
        'output[5] = 1.0f - translate_y;', 'output[5] = translate_y;'),
    ('projection-shift-sign', 'projection.c', 'projection',
        'float translate_x = 0.5f - (shift_x / parameters->scaleX) / width;',
        'float translate_x = 0.5f + (shift_x / parameters->scaleX) / width;')]


def run():
    results = []
    for name, filename, operation, before, after in CONTROLS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        text = (SOURCE / filename).read_text()
        if text.count(before) != 1:
            raise ValueError('Semantic control marker is ambiguous')
        modified = folder / filename
        modified.write_text(text.replace(before, after))
        sources = [modified if path.name == filename else path for path in SOURCES]
        blocks, executable, symbols, receipt = arm(folder / 'arm', sources)
        dll = windows(folder / 'windows', sources)
        selected = [case for case in cases() if case['operation'] == operation]
        arm_result = compare(original(), Arm(blocks, symbols, executable), selected, name)
        native_result = compare(original(), Windows(dll), selected, name)
        if arm_result['passed'] or native_result['passed']:
            raise ValueError('Returning semantic control escaped qualification: ' + name)
        results.append({'control': name, 'operation': operation, 'modifiedSource': pin(modified),
            'compiledSourceElf': receipt['linkedElf'], 'compiledNativeDll': pin(dll),
            'originalAndChangedCExecutionReturnedNormally': True, 'boundedWritesAndSavedStatePassed': True,
            'armRejectedCase': arm_result['case'], 'nativeRejectedCase': native_result['case'],
            'armExpectedSha256': __import__('hashlib').sha256(bytes.fromhex(arm_result['expectedHex'])).hexdigest(),
            'armChangedSha256': __import__('hashlib').sha256(bytes.fromhex(arm_result['actualHex'])).hexdigest(),
            'objectOrInstructionPatching': False, 'metadataOnlyControl': False})
    report = {'schemaVersion': 1, 'allRejected': True, 'controls': results}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'returningSourceAndNativeControlsRejected': len(results)}))
    return report


if __name__ == '__main__':
    run()
