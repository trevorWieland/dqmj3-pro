import argparse
import hashlib
import json
from pathlib import Path

import capstone
from capstone import arm

import native_effect065_build as common
from native_effect065_checkpoint import object_record
from native_wave013_file_owner_reference_image import ReferenceImage


ROOT = common.ROOT
FUNCTIONS = [(0x14db24, 'effect_vertex.c'), (0x15d0e0, 'effect_vertex.c'), (0x15d21c, 'effect_vertex.c'),
    (0x44f3b8, 'effect_commands.c'), (0x1830e0, 'effect_commands.c'), (0x6cf79c, 'effect_commands.c'),
    (0x44e7b4, 'effect_texture.c'), (0x535da8, 'effect_texture.c'), (0x535dec, 'effect_texture.c'),
    (0x53fe5c, 'effect_resource.c'), (0x160c68, 'effect_resource_release.c'),
    (0x5411a4, 'effect_resource.c'), (0x53ea1c, 'effect_resource.c'), (0x5411ec, 'effect_device.c')]


def checked(pin):
    path = Path(pin['path'])
    path = path if path.is_absolute() else ROOT / path
    if not path.is_file() or path.stat().st_size != pin['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest() != pin['sha256']:
        raise ValueError('Resource checkpoint file identity differs: ' + str(path))
    return path


def all_pins(value):
    if isinstance(value, dict):
        if {'path', 'bytes', 'sha256'} <= value.keys():
            yield value
        for child in value.values():
            yield from all_pins(child)
    elif isinstance(value, list):
        for child in value:
            yield from all_pins(child)


def original_data_spans(reference, ranges):
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    literals, indexed = {}, []
    for part in ranges:
        raw = reference.image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
        instructions = list(decoder.disasm(raw, part['start']))
        if sum(item.size for item in instructions) != len(raw):
            raise ValueError('Canonical resource instruction range does not decode completely')
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type != arm.ARM_OP_MEM or operand.mem.base != arm.ARM_REG_PC:
                    continue
                if operand.mem.index:
                    indexed.append(instruction.address)
                    continue
                name = instruction.mnemonic
                size = 1 if name.startswith(('ldrb', 'ldrsb')) else 2 if name.startswith(('ldrh', 'ldrsh')) else 4
                if name.startswith('ldrd') or name.startswith('vldr') and instruction.reg_name(instruction.operands[0].reg).startswith('d'):
                    size = 8
                start = instruction.address + 8 + operand.mem.disp
                raw = reference.image[start - 0x100000:start - 0x100000 + size]
                literals[start] = {'start': start, 'endExclusive': start + size, 'bytes': size,
                    'sha256': hashlib.sha256(raw).hexdigest(), 'actualPCRelativeReadWitness': instruction.address}
    gaps = []
    for left, right in zip(ranges, ranges[1:]):
        if left['endExclusive'] < right['start']:
            start, end = left['endExclusive'], right['start']
            gaps.append({'start': start, 'endExclusive': end, 'bytes': end - start,
                'sha256': hashlib.sha256(reference.image[start - 0x100000:end - 0x100000]).hexdigest()})
    return {'fixedPCRelativeDataReads': sorted(literals.values(), key=lambda row: row['start']),
        'indexedPCDataReadSitesRequiringExplicitDomain': indexed, 'interiorNoninstructionRanges': gaps}


def run(stage, output):
    if output.exists():
        raise ValueError('Preserve the resource CPU review checkpoint')
    output.mkdir(parents=True)
    ready = json.loads((stage / 'ready.json').read_text())
    packet = json.loads(checked(ready['packet']).read_text())
    for pin in packet['inputs'] + packet['reports']:
        checked(pin)
    reference_capture = ROOT / 'work/native-effect065/resource/reference-inputs-during-sealing-v1.json'
    reference_pins = json.loads(reference_capture.read_text())
    for pin in all_pins(reference_pins):
        checked(pin)
    reference = ReferenceImage()
    if reference.pins != reference_pins['reference']:
        raise ValueError('Reference evidence no longer equals the actual during-seal capture')
    graph_report = json.loads((stage / 'graph/report.json').read_text())
    lifetime_report = json.loads((stage / 'lifecycle/report.json').read_text())
    counters = {row['address']: row for row in graph_report['originalConditions']}
    for row in lifetime_report['originalConditions']:
        old = counters.setdefault(row['address'], row)
        if old is not row:
            old['hookEncounters'] += row['hookEncounters']
            old['conditionSatisfied'] += row['conditionSatisfied']
            old['conditionFailed'] += row['conditionFailed']
    functions = []
    for entry, source in FUNCTIONS:
        original = reference.functions[entry]
        addresses = [pc for part in original['ranges'] for pc in range(part['start'], part['endExclusive'], 4)]
        ranges = [{**part, 'sha256': hashlib.sha256(reference.image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]).hexdigest()}
            for part in original['ranges']]
        functions.append({'entry': entry, 'mode': original['mode'], 'instructionRanges': ranges,
            'originalDataSpans': original_data_spans(reference, original['ranges']),
            'instructionBytes': sum(part['endExclusive'] - part['start'] for part in original['ranges']),
            'sourcePath': 'src/native/wave065-resource/' + source, 'canonicalInstructionPCs': len(addresses),
            'joinedGraphVisitedPCs': sum(pc in counters for pc in addresses),
            'joinedGraphConditionSatisfiedPCs': sum(counters.get(pc, {}).get('conditionSatisfied', 0) > 0 for pc in addresses),
            'joinedGraphUnvisitedPCs': [pc for pc in addresses if pc not in counters],
            'joinedGraphNoSatisfiedConditionPCs': [pc for pc in addresses if not counters.get(pc, {}).get('conditionSatisfied', 0)],
            'sourceCreditGranted': 0, 'matchingCreditGranted': 0})
    boundaries = {'moduleSha256': hashlib.sha256(reference.image).hexdigest(), 'functions': functions,
        'supplementalConstructors': common.pin(ROOT / 'work/native-effect065/resource/constructor-candidates-v1/packet.json'),
        'referenceOnlyArrayHelper': {'entry': 0x101a1c, 'mode': 'Thumb', 'bytes': 34,
            'sha256': hashlib.sha256(reference.image[0x1a1c:0x1a3e]).hexdigest(), 'inventoryApprovalClaimed': False},
        'privateInputs': reference_pins['requiredPrivateOriginalInputs'], 'referencePinsCapturedDuringSealingNotAtProcessStart': common.pin(reference_capture)}
    (output / 'boundaries-and-coverage.json').write_text(json.dumps(boundaries, indent=2) + '\n')
    objects = [object_record(path) for profile in ['arm', 'a64'] for path in sorted((stage / 'graph-build' / profile).glob('*.o'))]
    (output / 'source-objects.json').write_text(json.dumps(objects, indent=2) + '\n')
    artifacts = [common.pin(path) for path in sorted(stage.rglob('*')) if path.is_file()]
    (output / 'private-artifacts.json').write_text(json.dumps(artifacts, indent=2) + '\n')
    proposal = {'status': 'resource-CPU-kernel-and-joined-graph-coordinator-review-only',
        'stageReady': common.pin(stage / 'ready.json'), 'boundaries': common.pin(output / 'boundaries-and-coverage.json'),
        'sourceObjects': common.pin(output / 'source-objects.json'), 'runtimeClosure': common.pin(stage / 'runtime-before.json'),
        'canonicalKernelCandidates': [entry for entry, source in FUNCTIONS[:9]], 'canonicalKernelInstructionBytes': 3396,
        'supplemental52InstructionBytesRequireIndependentInventoryReview': True,
        'resourceCtorAndFinalizerJoinedEvidenceOnly': [0x53fe5c, 0x160c68],
        'factoryWrapperAndTransferNotBehaviorQualified': [0x53ea1c, 0x5411a4, 0x5411ec],
        'replayArgv': ['tools/python/Scripts/python.exe', 'toolscripts/native_effect065_resource_stage.py',
            '--output', 'work/native-effect065/resource/coordinator-stage-v1'],
        'requiredPrivateOriginalInputs': reference_pins['requiredPrivateOriginalInputs'], 'fullArchiveAssetsOrToolCopiesRequired': False,
        'publicSourceRoot': 'src/native/wave065-resource', 'sourceCreditGranted': 0, 'matchingCreditGranted': 0,
        'fullEffectGraphQualified': False, 'nativeGPUQualified': False}
    (output / 'intake-proposal.json').write_text(json.dumps(proposal, indent=2) + '\n')
    files = [checked(pin) for pin in packet['inputs']]
    files += [Path(__file__), stage / 'ready.json', stage / 'packet.json', reference_capture]
    files += sorted(output.glob('*.json'))
    manifest = {'status': 'frozen-resource-CPU-successor-review-checkpoint', 'files': [common.pin(path) for path in sorted(set(files))],
        'privateArtifacts': common.pin(output / 'private-artifacts.json'), 'sourceCreditGranted': 0}
    (output / 'frozen-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    result = {'status': manifest['status'], 'manifest': common.pin(output / 'frozen-manifest.json'),
        'proposal': common.pin(output / 'intake-proposal.json'), 'sourceCreditGranted': 0, 'fullEffectGraphQualified': False}
    (output / 'ready.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({'ready': common.pin(output / 'ready.json'), 'proposal': result['proposal']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('stage', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.stage.resolve(), args.output.resolve())
