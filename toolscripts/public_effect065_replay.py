import argparse
import json
from pathlib import Path
import native_stream061_stage as common

ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / 'evidence/lanes/native-effect065/public-replay-v1'
OUTPUT = ROOT / 'work/native-effect065/public-replay-v1'
GUARD = ROOT / 'work/effect065-public/v1/input-guard.json'


def contract():
    value = common.read(PUBLIC / 'input-manifest.json')
    if len(value['files']) != 46 or len(value['stageCapturedTools']) != 19:
        raise ValueError('Complete effect foundation input/tool roster differs')
    membership = {}
    for key in ['frozenOrigin', 'sourceDependencies', 'postSealMetadataInput']:
        row = value[key]
        path = (ROOT / row['path']).resolve()
        if not path.is_relative_to(ROOT) or common.pin(path) != row:
            raise ValueError('Effect source/dependency membership anchor changed')
        if key == 'frozenOrigin':
            for item in common.read(path)['files']:
                membership[item['path']] = item
        elif key == 'sourceDependencies':
            for item in common.read(path):
                if item['path'] in membership and membership[item['path']] != item:
                    raise ValueError('Effect frozen/reused dependency identities conflict')
                membership[item['path']] = item
        else:
            if row['path'] != 'toolscripts/native_effect065_intake.py':
                raise ValueError('Unrecognized post-seal metadata producer')
            membership[row['path']] = row
    records, seen = [], set()
    for row in value['files']:
        path = (ROOT / row['path']).resolve()
        if (not path.is_relative_to(ROOT) or path in seen or common.pin(path) != row
                or membership.get(row['path']) != row):
            raise ValueError('Effect public input changed, duplicated or absent from frozen closure')
        if path.relative_to(ROOT).parts[0] not in ['src', 'toolscripts', 'tests', 'docs', 'evidence']:
            raise ValueError('Effect public source input outside public namespaces')
        records.append(row)
        seen.add(path)
    tools = sorted(path.relative_to(ROOT).as_posix() for path in (ROOT / 'toolscripts').glob('native_effect065*'))
    if tools != value['stageCapturedTools']:
        raise ValueError('Effect stage would capture an undeclared or mutable successor tool')
    return records


def proof():
    before = contract()
    producer = common.pin(Path(__file__))
    if OUTPUT.exists() or GUARD.exists():
        raise ValueError('Effect public replay refuses existing proof/output')
    import native_effect065_stage as stage
    stage.run(OUTPUT)
    if before != contract() or common.pin(Path(__file__)) != producer:
        raise ValueError('Effect public replay inputs/producer changed during execution')
    value = common.read(OUTPUT / 'packet.json')
    if (not value['ownedInputsUnchanged'] or value['authoredOriginalBodies'] != 6
            or value['originalInstructionBytes'] != 1144 or value['fullEffectFamilyQualified']
            or value['GPUExecutionQualified'] or value['sourceCreditGranted'] != 0):
        raise ValueError('Effect bounded foundation scope changed')
    common.write(GUARD, dict(status='unchanged-exact-public-effect-foundation-inputs',
        files=before, producer=producer, capturedToolFiles=19, sourceCreditGranted=0,
        originalArchivesAssetsOrToolTreesCopied=False, fullGameClaim=False))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('phase', choices=['check', 'proof'])
    phase = parser.parse_args().phase
    if phase == 'proof':
        proof()
    else:
        contract()
    print(json.dumps(dict(phase=phase, completed=True, sourceCreditGranted=0)))
