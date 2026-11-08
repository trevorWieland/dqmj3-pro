import argparse
import hashlib
import json
from pathlib import Path

import capstone
from capstone import arm
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
import unicorn

import native_effect065_build as common


ROOT = common.ROOT
FUNCTIONS = [(0x53a688, 'effect_shader.c'), (0x53e2c4, 'effect_shader.c'), (0x17db84, 'effect_shader.c'),
    (0x2a41c4, 'effect_preview.c'), (0x5e6a68, 'effect_preview.c'), (0x5e7318, 'effect_preview.c')]


def verify(row):
    path = Path(row['path'])
    path = path if path.is_absolute() else ROOT / path
    if not path.is_file() or path.stat().st_size != row['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest() != row['sha256']:
        raise ValueError('Frozen effect checkpoint input/artifact differs: ' + str(path))


def object_record(path):
    with path.open('rb') as stream:
        elf = ELFFile(stream)
        sections = []
        relocations = []
        for section in elf.iter_sections():
            if section['sh_flags'] & 2 and section['sh_size']:
                sections.append({'name': section.name, 'fileOffset': section['sh_offset'], 'bytes': section['sh_size'],
                    'flags': section['sh_flags'], 'type': section['sh_type'],
                    'sha256': hashlib.sha256(section.data()).hexdigest()})
            if isinstance(section, RelocationSection):
                symbols = elf.get_section(section['sh_link'])
                for relocation in section.iter_relocations():
                    symbol = symbols.get_symbol(relocation['r_info_sym'])
                    relocations.append({'section': section.name, 'offset': relocation['r_offset'],
                        'type': relocation['r_info_type'], 'symbol': symbol.name,
                        'addend': relocation['r_addend'] if relocation.is_RELA() else None})
        return {'object': common.pin(path), 'allocatedSections': sections, 'relocations': relocations}


def run(stage, output):
    if output.exists():
        raise ValueError('Preserve the effect foundation checkpoint')
    output.mkdir(parents=True)
    ready = json.loads((stage / 'ready.json').read_text())
    verify(ready['packet'])
    packet = json.loads((ROOT / ready['packet']['path']).read_text())
    for row in packet['inputs'] + packet['reports']:
        verify(row)
    runtime = []
    for name in ['runtime-closure-during-stage-v1.json', 'loaded-runtime-closure-v1.json']:
        path = ROOT / 'work/native-effect065' / name
        record = json.loads(path.read_text())
        for row in record['files']:
            verify(row)
        runtime.append(common.pin(path))
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if hashlib.sha256(image).hexdigest() != census['codeSha256']:
        raise ValueError('Original effect module identity differs')
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    functions = []
    for address, source in FUNCTIONS:
        row = next(row for row in census['functions'] if row['address'] == address)
        literals, spans = {}, []
        for part in row['ranges']:
            raw = image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
            spans.append({**part, 'sha256': hashlib.sha256(raw).hexdigest()})
            decoded = list(decoder.disasm(raw, part['start']))
            if sum(instruction.size for instruction in decoded) != len(raw):
                raise ValueError('Effect original instruction range does not decode completely')
            for instruction in decoded:
                for operand in instruction.operands:
                    if operand.type == arm.ARM_OP_MEM and operand.mem.base == arm.ARM_REG_PC:
                        if operand.mem.index:
                            raise ValueError('Unqualified indexed PC literal in effect foundation')
                        first = instruction.operands[0]
                        size = 8 if instruction.mnemonic.startswith('ldrd') or instruction.mnemonic.startswith('vldr') and instruction.reg_name(first.reg).startswith('d') else 4
                        location = instruction.address + 8 + operand.mem.disp
                        data = image[location - 0x100000:location - 0x100000 + size]
                        literals[location] = {'start': location, 'endExclusive': location + size, 'bytes': size,
                            'sha256': hashlib.sha256(data).hexdigest(), 'witnessPC': instruction.address}
        functions.append({'entry': address, 'mode': row['mode'], 'symbol': 'fn_' + format(address, '08x'),
            'sourcePath': 'src/native/wave065/' + source, 'instructionRanges': spans,
            'instructionBytes': row['textBodyBytes'], 'PCRelativeData': sorted(literals.values(), key=lambda item: item['start']),
            'wholeInstructionBodyAuthored': True, 'boundedBehaviorOnly': True,
            'exactMatchingProposed': False, 'sourceCreditGranted': 0})
    original = {'moduleSha256': census['codeSha256'], 'census': common.pin(census_path), 'functions': functions}
    (output / 'original-boundaries.json').write_text(json.dumps(original, indent=2) + '\n')
    objects = [object_record(path) for name in ['shader-build/arm', 'shader-build/a64', 'preview-build/arm', 'preview-build/a64']
               for path in sorted((stage / name).glob('*.o'))]
    (output / 'source-objects.json').write_text(json.dumps(objects, indent=2) + '\n')
    closure = {'metadataCapturedDuringSealingWasVerifiedUnchangedAfterward': True, 'closures': runtime,
        'unicornPackageVersion': unicorn.__version__, 'unicornNativeVersion': list(unicorn.uc_version()),
        'capstonePackageVersion': capstone.__version__, 'capstoneNativeVersion': list(capstone.cs_version()),
        'originalInputsRequired': ['generated/update-content0/code.bin', 'generated/update-content0/exheader.bin'],
        'originalCIAFullAssetsToolTreeOrRepositoryCopyRequired': False,
        'referenceDependencyPins': common.pin(stage / 'preview-corpus/reference-inputs.json')}
    (output / 'runtime-closure.json').write_text(json.dumps(closure, indent=2) + '\n')
    proposal = {'status': 'coordinator-review-only-six-whole-body-bounded-candidates', 'functions': functions,
        'sourceRoot': 'src/native/wave065', 'completeEffectGraph': False, 'hardwareAndroidTested': False,
        'sharedRegistryEdited': False, 'sourceCreditGranted': 0, 'matchingCreditGranted': 0,
        'replayArgv': ['tools/python/Scripts/python.exe', 'toolscripts/native_effect065_stage.py',
            '--output', 'work/native-effect065/coordinator-replay-v1'],
        'stageReady': common.pin(stage / 'ready.json'), 'runtimeClosure': common.pin(output / 'runtime-closure.json'),
        'sourceObjects': common.pin(output / 'source-objects.json'), 'originalBoundaries': common.pin(output / 'original-boundaries.json'),
        'ABI': common.pin(ROOT / 'work/native-effect065/preview-abi-measurement-v1.json'),
        'staticExclusions': common.pin(ROOT / 'work/native-effect065/preview-static-exclusions-v1.json')}
    (output / 'intake-proposal.json').write_text(json.dumps(proposal, indent=2) + '\n')
    artifacts = [common.pin(path) for path in sorted(stage.rglob('*')) if path.is_file()]
    (output / 'stage-artifacts.json').write_text(json.dumps(artifacts, indent=2) + '\n')
    files = [ROOT / row['path'] for row in packet['inputs']]
    files += [ROOT / 'docs/native-effect065.md', Path(__file__), stage / 'ready.json', stage / 'packet.json']
    files += sorted(output.glob('*.json'))
    manifest = {'status': 'frozen-effect-foundation-checkpoint', 'files': [common.pin(path) for path in sorted(set(files))],
        'stageArtifacts': common.pin(output / 'stage-artifacts.json'), 'sourceCreditGranted': 0}
    (output / 'frozen-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    result = {'status': manifest['status'], 'manifest': common.pin(output / 'frozen-manifest.json'),
        'proposal': common.pin(output / 'intake-proposal.json'), 'sourceCreditGranted': 0}
    (output / 'ready.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({'ready': common.pin(output / 'ready.json'), **result}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--stage', default='work/native-effect065/stage-v1')
    parser.add_argument('--output', default='evidence/lanes/native-effect065/foundation-v1')
    arguments = parser.parse_args()
    run(ROOT / arguments.stage, ROOT / arguments.output)
