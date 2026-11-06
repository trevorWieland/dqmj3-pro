import argparse
import collections
import hashlib
import json
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/executable-scope'
WORK = ROOT / 'work/executable-scope'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def pin(root, path):
    return {'path': path.relative_to(root).as_posix(), 'sha256': digest(path), 'bytes': path.stat().st_size}


def verify_pin(root, row):
    path = (root / row['path']).resolve()
    if not path.is_relative_to(root.resolve()) or not path.is_file() or digest(path) != row['sha256']:
        raise ValueError('Executable-scope evidence identity changed')
    return path


def main_mapping(metadata, code, exheader):
    if hashlib.sha256(code).hexdigest() != metadata['codeSha256'] or hashlib.sha256(exheader).hexdigest() != metadata['exheaderSha256']:
        raise ValueError('Main executable/ExHeader identity mismatch')
    segments, physical = [], 0
    for name, offset in [('text', 0x10), ('rodata', 0x20), ('data', 0x30)]:
        address, pages, size = struct.unpack_from('<III', exheader, offset)
        if not pages or size > pages * 4096 or address % 4096:
            raise ValueError('Invalid initialized executable segment')
        segments.append({'name': name, 'address': address, 'pages': pages,
                         'initializedBytes': size, 'codeBinOffset': physical})
        physical += pages * 4096
    if segments != metadata['layout']['segments'] or len(code) != physical:
        raise ValueError('ExHeader layout and complete decompressed image disagree')
    text = segments[0]
    return {'programId': metadata['programId'], 'codeSha256': metadata['codeSha256'],
            'exheaderSha256': metadata['exheaderSha256'], 'segments': segments,
            'nativeTextStart': text['address'], 'nativeTextEndExclusive': text['address'] + text['initializedBytes'],
            'nativeTextGrossBytes': text['initializedBytes'],
            'excludedTextPagePaddingBytes': text['pages'] * 4096 - text['initializedBytes'],
            'excludedInitializedRodataBytes': segments[1]['initializedBytes'],
            'excludedInitializedDataBytes': segments[2]['initializedBytes'],
            'extentMeasure': 'ExHeader initialized ARM text region; includes any text literal pools, tables and alignment',
            'instructionOnlyMeasure': False, 'functionBoundaryProofProvided': False}


def arm_branches(code, size, base):
    result = []
    for offset in range(0, size - 3, 4):
        word = struct.unpack_from('<I', code, offset)[0]
        if word & 0x0e000000 == 0x0a000000 and word >> 28 != 15:
            immediate = word & 0xffffff
            if immediate & 0x800000:
                immediate -= 0x1000000
            result.append({'site': base + offset, 'target': base + offset + 8 + immediate * 4,
                           'link': bool(word & 0x1000000), 'condition': word >> 28})
    return result


def service_trace(code, mapping):
    import capstone
    from capstone.arm import ARM_OP_MEM, ARM_REG_PC
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    base, size = mapping['nativeTextStart'], mapping['nativeTextGrossBytes']
    branches = arm_branches(code, size, base)
    clients = []
    for offset in range(0, size - 3, 4):
        if struct.unpack_from('<I', code, offset)[0] != 0xef000032:
            continue
        start = max(0, offset - 100)
        instructions = list(engine.disasm(code[start:offset + 32], base + start))
        headers = []
        for instruction in instructions:
            operands = instruction.operands
            if instruction.mnemonic != 'ldr' or len(operands) != 2 or operands[1].type != ARM_OP_MEM or operands[1].mem.base != ARM_REG_PC:
                continue
            at = instruction.address + 8 + operands[1].mem.disp - base
            if 0 <= at <= len(code) - 4 and struct.unpack_from('<I', code, at)[0] == 0x50100:
                headers.append(instruction.address)
        if len(headers) != 1:
            continue
        entry = base + offset - 0x38
        body = list(engine.disasm(code[offset - 0x38:offset + 0x1c], entry))
        expected = ['push', 'mov', 'mov', 'mov', 'mrc', 'ldr', 'add', 'add', 'str', 'mov', 'bl', 'ldr', 'strd', 'ldr', 'svc', 'ands', 'bmi', 'ldr', 'str', 'ldr', 'pop']
        if [instruction.mnemonic for instruction in body] != expected:
            raise ValueError('Service handle IPC body differs from reviewed structure')
        if body[14].op_str != '#0x32' or body[6].op_str != 'r4, r4, #0x80' or body[8].op_str != 'r0, [r4]' or body[12].op_str != 'r6, r7, [r4, #0xc]':
            raise ValueError('Service IPC thread buffer/header/length fields differ')
        incoming = [row for row in branches if row['target'] == entry]
        if len(incoming) != 1 or incoming[0]['link']:
            raise ValueError('Service IPC API wrapper is missing or ambiguous')
        wrapper = incoming[0]['site'] - 0x20
        wrapper_body = list(engine.disasm(code[wrapper - base:wrapper - base + 40], wrapper))
        if [instruction.mnemonic for instruction in wrapper_body] != ['ldr', 'ldr', 'cmp', 'ldrle', 'ble', 'cmp', 'ldrgt', 'bgt', 'b', 'bx']:
            raise ValueError('Service wrapper validation structure changed')
        calls = [row for row in branches if row['target'] == wrapper]
        clients.append({'entry': entry, 'ipcSendSite': base + offset, 'requestHeader': 0x50100,
                        'requestHeaderLoadSite': headers[0],
                        'structure': 'TLS+0x80 IPC buffer, two service-name words and length/flags, SVC SendSyncRequest',
                        'bodySha256': hashlib.sha256(code[offset - 0x38:offset + 0x1c]).hexdigest(),
                        'checkedApiWrapper': wrapper, 'directCallerSites': calls,
                        'directCallerCount': len(calls), 'dynamicServiceNamesFullyResolved': False})
    if len(clients) != 1:
        raise ValueError('Expected one structurally identified service handle IPC client')
    tokens = (b'ldr:ro', b'ldr:', b'.cro', b'.crr', b'.crs', b'LoadCRO', b'nn::ro')
    named_port_sites = []
    for offset in range(0, size - 3, 4):
        if struct.unpack_from('<I', code, offset)[0] == 0xef00002d:
            named_port_sites.append(base + offset)
    return {'serviceHandleClients': clients, 'connectToPortSvcSites': named_port_sites,
            'srvPortLiteralPresent': b'srv:\0' in code,
            'ordinaryRoLoaderLiteralPresent': any(token in code for token in tokens),
            'observedRoModuleLoading': False,
            'interpretation': 'A real service-handle IPC path is linked. No RO module-loading path or additional ARM module is established by these observations. Permissions alone do not establish use.',
            'scopeLimit': 'Static structural call-site evidence; not a runtime execution trace or complete service-name dataflow proof'}


def audit_container_metadata(root, label, audit):
    if audit['label'] != label or audit['decoderResiduals'] or audit['previousUnresolvedStillUnclassified']:
        raise ValueError('Known archive decoder scope has unresolved structural failures')
    if audit['allTopLevelRomfsBytesSignatureCoveredDirectlyOrByVerifiedAlias'] is not True:
        raise ValueError('Recursive payload coverage is incomplete')
    verify_pin(root, audit['inventoryInput'])
    payloads = audit['payloadOccurrences']
    if len(payloads) != audit['counts']['streamVerifiedPayloadOccurrences']:
        raise ValueError('Payload occurrence census differs from audit counters')
    identities = {row['identity'] for row in payloads}
    if len(identities) != len(payloads):
        raise ValueError('Ambiguous recursive payload identity')
    unique = [row for row in payloads if 'samePayloadAs' not in row]
    if len(unique) != audit['uniquePayloads'] or len({row['sha256'] for row in unique}) != len(unique):
        raise ValueError('Unique payload identity accounting changed')
    by_identity = {row['identity']: row for row in payloads}
    for row in payloads:
        if row['signatureScanBytes'] != row['bytes']:
            raise ValueError('Payload is incompletely covered')
        if 'samePayloadAs' in row:
            prior = by_identity.get(row['samePayloadAs'])
            if prior is None or (prior['bytes'], prior['sha256']) != (row['bytes'], row['sha256']):
                raise ValueError('Payload alias is not size/hash identical')
    candidates = audit['signatureAndProgramCandidates']
    qualified_arm = [row for row in candidates if row.get('format') in ('CRO-layout', 'ELF32', 'NCCH')]
    if qualified_arm:
        raise ValueError('Additional structurally qualifying ARM/container candidates need explicit module mapping')
    rejected, registration_markers = [], []
    for row in candidates:
        if row['qualification'] != 'marker-only-not-executable-proof':
            continue
        safe = {key: row[key] for key in ('identity', 'marker', 'markerOffset')}
        if row['marker'] == b'CRR0'.hex():
            registration_markers.append({**safe, 'disposition': 'Registration-data marker; CRR is not an ARM executable code image'})
        elif row.get('structuralFailure'):
            rejected.append({**safe, 'failure': row['structuralFailure']})
        else:
            raise ValueError('Unresolved recognized executable candidate')
    opaque = [row for row in unique if row.get('format') not in ('XBB1', 'SARC', 'gzip-single-stream')]
    families = collections.Counter(row['magic4'] for row in opaque)
    return {'payloadOccurrences': len(payloads), 'uniquePayloads': len(unique),
            'topLevelRomfsBytesVerified': audit['topLevelRomfsStreamVerifiedBytes'],
            'knownArchiveDecoderResiduals': 0, 'priorUnclassifiedArchiveLayoutsRemaining': 0,
            'additionalRecognizedArmModules': [], 'rejectedExecutableCandidates': rejected,
            'registrationDataMarkers': registration_markers,
            'opaqueOrPartialLeafPayloads': len(opaque),
            'partiallyQualifiedBchLeaves': sum('bch' in row for row in opaque),
            'largestLeafMagicFamilies': [{'magic4': key, 'payloads': count} for key, count in families.most_common(12)],
            'leafScope': 'RomFS data resources and recursive supported archive members; a leaf lacking an executable-format structure is not invented as an ARM code image',
            'universalPayloadSemanticClassificationClaimed': False}


def build(root, refresh=False):
    root = root.resolve()
    summary_path = root / 'evidence/lanes/container-inventory-wave003/summary.json'
    summary = read(summary_path)
    for row in summary['toolCodePins']:
        verify_pin(root, row)
    sources = [pin(root, summary_path)]
    versions = []
    for label in ('base', 'update'):
        source = root / 'evidence/inventory' / (label + '.json')
        inventory = read(source)
        project = read(root / 'project.json')
        if inventory['sha256'] != project[label + 'CiaSha256']:
            raise ValueError('Inventory does not identify the measured owner CIA')
        metadata = read(root / 'evidence/inventory' / (label + '-content0.json'))
        code = (root / 'generated' / (label + '-content0') / 'code.bin').read_bytes()
        exheader = (root / 'generated' / (label + '-content0') / 'exheader.bin').read_bytes()
        mapping = main_mapping(metadata, code, exheader)
        declarations = []
        for content in inventory['contents']:
            ncch = content['ncch']
            entries = [row for row in ncch['exefsFiles'] if row['name'] == '.code']
            if bool(entries) != bool(ncch.get('codeSha256')) or len(entries) > 1:
                raise ValueError('ExeFS executable declaration and mapped image disagree')
            declarations.append({'contentIndex': content['index'], 'ncchSha256': content['sha256'],
                                 'exefsCodeEntries': len(entries), 'romfsFiles': len(ncch['romfsFiles']),
                                 'role': 'main-game-program' if entries else 'non-program-NCCH-content'})
        if sum(row['exefsCodeEntries'] for row in declarations) != 1:
            raise ValueError('Static corpus no longer has exactly one declared main image per build')
        audit_path = root / 'evidence/lanes/container-inventory-wave003' / (label + '.json')
        audit = read(audit_path)
        if refresh:
            import container_inventory_wave003 as scanner
            if scanner.ROOT != root:
                raise ValueError('Fresh corpus scan must run from its actual source checkout')
            destination = root / 'work/executable-scope/fresh-container-audit'
            destination.mkdir(parents=True, exist_ok=True)
            fresh, unused = scanner.scan(label, destination)
            if fresh != audit:
                raise ValueError('Fresh recursive corpus scan differs from frozen structural evidence')
        services = [exheader[offset:offset + 8].split(b'\0')[0] for offset in range(0x250, 0x360, 8)]
        versions.append({'version': label + '-content0', 'declarations': declarations, 'mainImage': mapping,
                         'containerScope': audit_container_metadata(root, label, audit),
                         'loaderEvidence': {**service_trace(code, mapping), 'roServicePermitted': b'ldr:ro' in services},
                         'staticMainImageScopeComplete': True,
                         'freshRecursiveContainerAuditReproduced': refresh})
        sources.extend([pin(root, source), pin(root, audit_path),
                        pin(root, root / 'evidence/inventory' / (label + '-content0.json'))])
    programs_path = root / 'evidence/lanes/container-inventory-wave003/findings.json'
    programs = read(programs_path)['categories']
    return {'schemaVersion': 1, 'status': 'reviewed-finite-static-main-image-scope',
            'producer': pin(root, root / 'toolscripts/executable_scope.py'), 'sources': sources + [pin(root, programs_path)],
            'contract': {'included': 'Every ExHeader-declared initialized text byte of both measured owner main ARM images, with all recognized auxiliary ARM executable candidates reconciled against recursive structural container evidence',
                         'excluded': ['Text page padding', 'Main-image initialized rodata/data and BSS', 'RomFS resources lacking an established executable-format structure',
                                      'System firmware/applets not distributed as game executable images', 'DSP firmware and PICA shaders, tracked in separate categories'],
                         'notClaimed': ['Universal absence of hidden or deliberately reinterpreted asset bytes', 'Runtime base/update precedence',
                                        'Semantic instruction-only denominator', 'Function boundaries or source/behavior completeness'],
                         'permittedButUnobservedLoaderServicesDoNotInventModules': True},
            'versions': versions,
            'separateProgramCategories': [{'build': label, 'dspProgramBytes': sum(sum(segment['bytes'] for segment in image['segments'] if segment['memoryType'] == 0) for image in programs[label]['dspFirmware']),
                                           'gpuCodeImages': programs[label]['uniqueShaderCodeImages'], 'gpuCodeBytes': programs[label]['uniqueShaderCodeBytes']}
                                          for label in ('base', 'update')],
            'staticMainImageScopeComplete': True, 'acceptedSourceCreditGranted': 0,
            'sourceOnlyGame': False}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--refresh-container-scan', action='store_true')
    args = parser.parse_args()
    report = build(ROOT, args.refresh_container_scan)
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / 'scope.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'status': report['status'], 'versions': [{'version': row['version'], 'nativeTextGrossBytes': row['mainImage']['nativeTextGrossBytes']}
                                                             for row in report['versions']]}))


if __name__ == '__main__':
    main()
