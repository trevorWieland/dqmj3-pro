import hashlib
import json

from squirrel_lookup023_build import ROOT, WORK, SOURCES, arm, windows, pin, save
from squirrel_lookup023_oracle import Arm, Windows


CONTROLS = [
    ('wrong-instance-selector', 'source/squirrel-wave023/instance_meta.c',
        'values + selector', 'values + (selector ^ 1u)', 18),
    ('null-instance-method-overwrites-destination', 'source/squirrel-wave023/instance_meta.c',
        'if (method->type == 0x01000001u) return 0;',
        'if (method->type == 0x01000001u) { sq_prefix_clear(destination); return 0; }', 16),
    ('instance-method-without-owned-assignment', 'source/squirrel-wave023/instance_meta.c',
        'sq_prefix_assign(destination, method);', '*destination = *method;', 18),
    ('delegate-recursion-without-temporary-owner', 'source/squirrel-wave020/lookup_fallback.c',
        'sq_prefix_retain(temporary.type, temporary.value);', '(void)temporary;', 8),
    ('stringify-without-input-temporary-owner', 'source/squirrel-wave020/lookup_error.c',
        'SqPrefixObject012 temporary = *object;\n    sq_prefix_retain(temporary.type, temporary.value);',
        'SqPrefixObject012 temporary = *object;', 7),
    ('float-ties-always-up', 'source/squirrel-wave023/float_text.c',
        '(significant[13] & 1u)', '1u', 78),
    ('float-negative-zero-loses-sign', 'source/squirrel-wave023/float_text.c',
        'if (bits >> 31)', 'if ((bits >> 31) && (bits & 0x7fffffffu))', 65),
    ('float-fixed-threshold-off-by-one', 'source/squirrel-wave023/float_text.c',
        'exponent < -4', 'exponent < -3', 86),
    ('actual-native-failure-release-before-arguments', 'source/squirrel-wave020/metamethod_call.c',
        'for (SqPrototypeI32 index = 0; index < arguments; ++index) sq_lookup_pop020(vm);\n    sq_prefix_release(callable.type, callable.value);',
        'sq_prefix_release(callable.type, callable.value);\n    for (SqPrototypeI32 index = 0; index < arguments; ++index) sq_lookup_pop020(vm);', 202),
    ('actual-native-result-discarded', 'source/squirrel-wave022/native_call.c',
        'if(returned) {', 'if(0) {', 200),
    ('actual-native-failure-arguments-not-cleaned', 'source/squirrel-wave020/metamethod_call.c',
        'for (SqPrototypeI32 index = 0; index < arguments; ++index) sq_lookup_pop020(vm);',
        '(void)arguments;', 202)]


def run():
    sections, symbols, functions, _ = arm(WORK / 'controls/baseline/arm')
    reference = Arm(sections, symbols, functions, True)
    results = []
    for name, path, before, after, variant in CONTROLS:
        original = ROOT / path
        text = original.read_text()
        if text.count(before) != 1:
            raise ValueError('023 returning control edit is not unique: ' + name)
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        changed = text.replace(before, after)
        if original.parent.name == 'squirrel-wave023':
            header = original.with_suffix('.h')
            changed = changed.replace('#include "' + header.name + '"',
                '#include "' + header.as_posix() + '"')
        if original.parent.name == 'squirrel-wave022':
            changed = changed.replace('#include "vm_call.h"',
                '#include "' + (original.parent/'vm_call.h').as_posix() + '"')
        mutant = folder / original.name
        mutant.write_text(changed)
        sources = [mutant if p == original else p for p in SOURCES]
        s, y, f, build = arm(folder / 'arm', sources)
        native = Windows(windows(folder / 'windows', sources))
        source = Arm(s, y, f)
        expected, baseline_heap = reference.execute(variant, 1)
        actual, changed_heap = source.execute(variant, 1)
        host = native.execute(variant, 1)
        if actual == expected or host == expected or actual != host:
            raise ValueError('023 returning semantic control was not independently rejected: ' + name)
        result = {'name': name, 'variant': variant, 'cleanup': 1,
            'normalArmAndWindowsReturn': True, 'orderedLogicalObservationsDifferFromOriginal': True,
            'armAndWindowsWrongResultsAgree': True,
            'finalArmArenaStillEqual': baseline_heap == changed_heap,
            'mutatedSource': pin(mutant), 'armBuild': build,
            'expectedObservationsSha256': hashlib.sha256(json.dumps(expected).encode()).hexdigest(),
            'wrongObservationsSha256': hashlib.sha256(json.dumps(actual).encode()).hexdigest()}
        if name == 'actual-native-failure-release-before-arguments' and baseline_heap != changed_heap:
            raise ValueError('023 order control must preserve the same final normalized arena')
        results.append(result)
        print(json.dumps({'controlRejected': name}), flush=True)
    report = {'schemaVersion': 1, 'controls': results,
        'compileOrAbiFailureAcceptedAsNegative': False, 'frozenProductionFilesEdited': False,
        'executingBytesPatched': False, 'originalPayloadsPublished': False}
    save(WORK / 'controls.json', report)
    return report


if __name__ == '__main__':
    run()
