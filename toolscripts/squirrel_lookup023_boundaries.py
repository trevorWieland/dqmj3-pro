import hashlib
import json

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from native_material_wave011_build import ROOT, pin, save
from native_wave014_oracle import original_image


EVIDENCE = ROOT / 'evidence/lanes/squirrel-lookup023'
INPUT = ROOT / 'evidence/lanes/squirrel-lookup020/execution.json'
READY = ROOT / 'evidence/lanes/squirrel-lookup020/ready.json'
EXPECTED_READY = 'a48bda1f2ed39c1f7b49ead8b6d250a3d841a5e21a57c1c40940bac7b15d1884'


def region(image, start, end):
    return {'address': start, 'endExclusive': end, 'bytes': end - start,
        'sha256': hashlib.sha256(image[start - 0x100000:end - 0x100000]).hexdigest()}


def measure():
    if hashlib.sha256(READY.read_bytes()).hexdigest() != EXPECTED_READY:
        raise ValueError('023 frozen020 receipt identity changed')
    original = original_image()
    previous = json.loads(INPUT.read_text())
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    rows = {row['address']: row for row in census['functions']}
    expected = [(0x1cdaec, 44), (0x1cdb18, 136), (0x192548, 216), (0x19e1ec, 216)]
    for entry, size in expected:
        if rows[entry]['ranges'] != [{'start': entry, 'endExclusive': entry + size, 'bytes': size}]:
            raise ValueError('023 canonical instance witness extent changed')
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    instructions = list(decoder.disasm(original[0xcdaec:0xcdb18], 0x1cdaec))
    if len(instructions) != 11 or instructions[-1].mnemonic != 'pop':
        raise ValueError('023 complete instance method decode changed')
    table = original[0x71bd48:0x71bd60]
    if table[20:24] != (0x1cdaec).to_bytes(4, 'little'):
        raise ValueError('023 real instance slot5 identity changed')
    groups = [
        (0x198578, 0x198718, 0x19873c, 'class-member-index-reference-release',
            'requires-invariant-evidence', 'The member descriptor normally has an integer tag and encoded index payload. Do not fabricate an object pointer whose bits also act as an index.'),
        (0x197b18, 0x197bd8, 0x197bec, 'instance-dispatch-recognition',
            'missing-real-provider', 'Exercise exact instance type through its independently measured slot5 provider.'),
        (0x197b18, 0x197c68, 0x197c8c, 'class-member-index-reference-release',
            'requires-invariant-evidence', 'Same integer member-descriptor constraint as Get; not declared universally unreachable without the real member writer.'),
        (0x197b18, 0x197d18, 0x197d28, 'last-temporary-delegate-owner',
            'valid-domain-missing-callback-case', 'A destination release callback removes the original delegate owner while the recursive lookup retains its temporary.'),
        (0x197b18, 0x197e00, 0x197e0c, 'float-string-index',
            'valid-domain-missing-case', 'Finite signed32-representable float index using the actual byte string.'),
        (0x197b18, 0x197ea0, 0x197f18, 'instance-meta-and-default-path',
            'missing-real-provider', 'Use real instance method dispatch and actual callable providers; no synthetic method answer.'),
        (0x197b18, 0x197f3c, 0x197f60, 'generator-default-dispatch',
            'missing-borrowed-tag-dispatch-case', 'This path reads only the receiver tag; object construction and lifetime remain separate.'),
        (0x197b18, 0x197f7c, 0x197fac, 'thread-default-dispatch',
            'missing-borrowed-tag-dispatch-case', 'This path reads only the receiver tag; a complete thread provider is not implied.'),
        (0x19828c, 0x1982ec, 0x1982f4, 'null-string-assertion',
            'excluded-failed-allocation-assertion', 'The original calls its assertion service after a NULL string result; not a normally returning admitted allocation domain.'),
        (0x197fe0, 0x1980cc, 0x198114, 'float-formatting',
            'missing-general-formatter-provider', 'Variable/general floating formatting remains explicit; no canned float answers.'),
        (0x197fe0, 0x198114, 0x198124, 'last-stringify-input-owner',
            'valid-domain-missing-callback-case', 'The real string allocator callback drops the external compact-prototype owner while stringify retains a temporary.'),
        (0x19813c, 0x1981e4, 0x1981e8, 'retained-previous-error',
            'valid-domain-missing-case', 'Keep another actual string owner so replacement decrements without final destruction.'),
        (0x19813c, 0x1981e8, 0x1981f0, 'null-error-string-assertion',
            'excluded-failed-allocation-assertion', 'Failed string allocation invokes the original assertion and is excluded.'),
        (0x191f28, 0x191f9c, 0x191fa0, 'unknown-small-type-name',
            'valid-domain-missing-case', 'Unknown low24 type code between userdata and function returns NULL.'),
        (0x191f28, 0x191fd4, 0x191fd8, 'unknown-middle-type-name',
            'valid-domain-missing-case', 'Unknown low24 type code between thread and function-prototype returns NULL.'),
        (0x18d4fc, 0x18d634, 0x18d644, 'failed-call-last-callable-owner',
            'valid-domain-missing-callback-case', 'Failure cleanup destroys the last callable only after argument cleanup; prefer actual022 native invocation.')]
    gaps = []
    for row in previous['originalInstructionCoverage']:
        for pc in row['unvisited']:
            choices = [g for g in groups if g[0] == row['entry'] and g[1] <= pc < g[2]]
            if len(choices) != 1:
                raise ValueError('023 missing-PC condition not classified: ' + hex(pc))
            group = choices[0]
            gaps.append({'entry': row['entry'], 'pc': pc, 'condition': group[3],
                'classification': group[4], 'evidenceOrNextScenario': group[5]})
    record = {'schemaVersion': 1, 'status': 'measured-before-new023-source',
        'program': previous['program'], 'version': previous['version'], 'module': previous['module'],
        'moduleSha256': previous['moduleSha256'], 'frozen020': pin(READY), 'frozen020Execution': pin(INPUT),
        'census': pin(census_path), 'missingInstructionAddresses': len(gaps), 'gaps': gaps,
        'newProvider': {'name': 'sq_instance_get_meta023', 'mode': 'ARM',
            'instructions': region(original, 0x1cdaec, 0x1cdb18), 'literalPoolBytes': 0,
            'nextCanonicalEntry': 0x1cdb18, 'callee': 0x19e864,
            'vtableSixSlotPrefix': region(original, 0x81bd48, 0x81bd60), 'slot': 5,
            'instanceClassTargetOffset': 28, 'classValuesTargetOffset': 56,
            'constructors': [dict(region(original, a, a + 216),
                pool=region(original, a + 216, a + 224)) for a in [0x192548, 0x19e1ec]],
            'typedStorageContract': 'frozen020 named read-only class/instance storage; no factory or lifetime qualification',
            'behavior': 'NULL-tag selected method returns false without destination change; otherwise assign actual selected object and return true'},
        'typeNameEntryPrefixStandaloneFunction': False, 'frozen020Modified': False,
        'fullVmGameAllocatorGcOrDeviceClaimed': False, 'sourceOrInventoryCreditGranted': 0,
        'originalPayloadsPublished': False, 'producer': pin(ROOT / 'toolscripts/squirrel_lookup023_boundaries.py')}
    path = EVIDENCE / 'claim.json'
    if path.exists() and json.loads(path.read_text()) != record:
        raise ValueError('023 pre-source claim changed; preserve the original record')
    save(path, record)
    return record


if __name__ == '__main__':
    print(json.dumps({'missing': len(measure()['gaps'])}))
