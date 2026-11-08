import hashlib
import json
from pathlib import Path
from unittest.mock import patch

from registry_build062ad import W, S, build
from registry_proof062ad import execute, SemanticMismatch


def corpus(seed):
    rows = [('register', 0, 0, 3, 1), ('register', 1, 0, 1, 1),
            ('register', 2, 0, 2, 1), ('register', 3, 7, 0, 1),
            ('register', 4, 7, 0x100, 1)]
    rows += [('register', i, 0, i + 5, 1) for i in range(40)]
    rows += [('remove', 0, 1), ('find', 2)]
    return rows


def main():
    output = W / 'controls-attempt001'
    output.mkdir(exist_ok=False)
    tail = '    if (chosen != 0)\n        *chosen = (SdkByte062s)slot;\n    mutex->methods->release(mutex);'
    definitions = [
        ('auto-slot-first', 'register062ad.c', 'slot = 15;', 'slot = 1;'),
        ('component-shift', 'register062ad.c', 'owner->component << 4', 'owner->component << 3'),
        ('explicit-slot-mask', 'register062ad.c', '| slot);', '| (slot & 15));'),
        ('erase-repeats-first', 'remove062ad.c', 'destination[i] = source[i];', 'destination[i] = source[0];'),
        ('growth-leaks-old-vector', 'register062ad.c', 'registry_dispose062ad(registry->begin);', '(void)registry->begin;'),
        ('constructor-capacity', 'lifetime062ad.c', '32', '16'),
        ('only-one-locks-lookup', 'lookup062ad.c', 'lookup_lock != 0', 'lookup_lock == 1'),
        ('unlock-before-output', 'register062ad.c', tail,
         '    mutex->methods->release(mutex);\n    if (chosen != 0)\n        *chosen = (SdkByte062s)slot;'),
    ]
    rows = []
    try:
        for name, filename, before, after in definitions:
            folder = output / name
            folder.mkdir()
            original = (S / filename).read_text()
            if before not in original:
                raise ValueError('mutation no longer applies: ' + name)
            changed = original.replace(before, after)
            candidate = folder / filename
            candidate.write_text(changed)
            artifact = build(folder / 'build', {filename: candidate})
            outcomes = []
            for target in ['arm', 'windows', 'a64']:
                try:
                    with patch('registry_proof062ad.steps', corpus):
                        execute(target, artifact, 629, 128, False, False)
                except SemanticMismatch as error:
                    if not error.evidence['normallyReturned']:
                        raise ValueError('semantic control did not return normally')
                    outcomes.append(dict(target=target, status='rejected-returning-wrong-source',
                                         **error.evidence))
                else:
                    raise ValueError('wrong-source control was not rejected: ' + name)
            rows.append(dict(name=name, sourceFile=filename,
                             originalSha256=hashlib.sha256((S / filename).read_bytes()).hexdigest(),
                             changedSha256=hashlib.sha256(candidate.read_bytes()).hexdigest(), outcomes=outcomes))
            print('registry control', name, 'three returning rejections', flush=True)
        result = dict(status='passed', controls=rows, returningRejections=sum(len(x['outcomes']) for x in rows))
    except BaseException as error:
        result = dict(status='failed', error=repr(error), controls=rows)
        raise
    finally:
        (output / 'report.json').write_text(json.dumps(result, indent=2) + '\n')


if __name__ == '__main__':
    main()
