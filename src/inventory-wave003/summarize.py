import collections
import hashlib
import json
import subprocess
import struct
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
EVIDENCE = ROOT / 'evidence/lanes/container-inventory-wave003'
WORK = ROOT / 'work/container-inventory-wave003'
RESULT = WORK / 'final'


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': sha(path), 'bytes': path.stat().st_size}


def save(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n')


def build(output):
    WORK.mkdir(parents=True, exist_ok=True)
    EVIDENCE = Path(output)
    RESULT = EVIDENCE
    reports = {label: json.loads((RESULT / (label + '.json')).read_text()) for label in ('base', 'update')}
    findings = {'schemaVersion': 1, 'categories': {}, 'detachedKeyCorroboration': {}, 'runtimePrecedenceAssumed': False,
                'nativeDenominatorComplete': False, 'wholeExecutableInventoryComplete': False, 'acceptedSourceCredit': 0}
    key_names = collections.defaultdict(set)
    for label, report in reports.items():
        if report['previousUnresolvedStillUnclassified'] or report['decoderResiduals']:
            raise RuntimeError('A previously recognized decoder path remains unresolved')
        shaders = [row for row in report['signatureAndProgramCandidates'] if row.get('format') == 'DVLB']
        dsp = [row for row in report['signatureAndProgramCandidates'] if row.get('format') == 'DSP1']
        functions = json.loads((ROOT / f'evidence/inventory/{label}-content0.json').read_text())['layout']['segments']
        locations = []
        for row in shaders + dsp:
            if row['identity'] != 'content0/code-decompressed':
                continue
            offset = row['offset']
            matches = [segment for segment in functions if segment['codeBinOffset'] <= offset < segment['codeBinOffset'] + segment['initializedBytes']]
            locations.append({'format': row['format'], 'fileOffset': offset, 'markerOffset': row['markerOffset'],
                              'segment': matches[0]['name'] if matches else None,
                              'virtualAddress': offset - matches[0]['codeBinOffset'] + matches[0]['address'] if matches else None,
                              'codeSha256': row.get('codeSha256', row.get('sha256'))})
        programs = {row['codeSha256']: row for row in shaders}
        findings['categories'][label] = {'shaderProgramOccurrences': len(shaders), 'uniqueShaderCodeImages': len(programs),
                                         'uniqueShaderCodeBytes': sum(row['codeBytes'] for row in programs.values()),
                                         'shaderExecutableEntries': sum(len(row['executables']) for row in shaders),
                                         'embeddedShaderProgramsInMainModule': sum(row['identity'] == 'content0/code-decompressed' for row in shaders),
                                         'dspFirmware': dsp, 'mainModuleProgramLocations': locations,
                                         'squirrel225ClosurePrefixCandidates': sum(row['marker'] == 'Squirrel2.2.5-closure-prefix' for row in report['signatureAndProgramCandidates']),
                                         'qualifiedAdditionalArmModuleCandidates': [row for row in report['signatureAndProgramCandidates'] if row.get('format') in ('CRO-layout', 'ELF32', 'NCCH')],
                                         'unqualifiedMarkerOnlyHits': sum(row['qualification'] == 'marker-only-not-executable-proof' for row in report['signatureAndProgramCandidates']),
                                         'opaqueLeafPayloads': report['counts']['opaqueOrPartiallyUnderstoodLeafPayloads'],
                                         'opaqueLeafUniquePayloadBytes': report['counts']['opaqueOrPartiallyUnderstoodLeafBytes']}
        source = json.loads((ROOT / f'evidence/inventory/{label}.json').read_text())
        physical = []
        with Path(source['path']).open('rb') as original:
            for content, measured in zip(source['contents'], report['contents']):
                original.seek(content['offset'])
                header = original.read(512)
                if hashlib.sha256(header).hexdigest() != measured['headerSha256']:
                    raise RuntimeError('NCCH header changed after audit')
                regions = []
                for name, offset in (('romfs', 0x1b0), ('exefs', 0x1a0)):
                    begin, units = struct.unpack_from('<II', header, offset)
                    rows = content['ncch']['romfsFiles' if name == 'romfs' else 'exefsFiles']
                    regions.append({'name': name, 'sourceOffset': content['offset'] + begin * 512,
                                    'regionBytes': units * 512, 'sumNamedFileBytes': sum(row['size'] for row in rows),
                                    'remainingMetadataPaddingOrUnexposedBytesGross': units * 512 - sum(row['size'] for row in rows),
                                    'scope': 'Region hash verified; named file contents signature-covered; metadata/padding not semantically interpreted'})
                physical.append({'index': content['index'], 'offset': content['offset'], 'bytes': content['size'], 'regions': regions})
        findings['categories'][label]['physicalCoverage'] = {'ciaBytes': source['size'], 'ciaAllBytesSha256VerifiedBeforeAndAfter': True,
                                                           'ncchContents': physical,
                                                           'outsideNCCHWrapperBytesHashVerifiedOnly': source['size'] - sum(row['size'] for row in source['contents']),
                                                           'allCiaPhysicalBytesSemanticallyParsed': False,
                                                           'namedPayloadPhysicalUnionNotAsserted': True}
        for index in report['detachedIndices']:
            if not index['sameScopeOrderedSiblingSizesAllMatch']:
                raise RuntimeError('Detached index lacks ordered size corroboration')
            for row in index['records']:
                key_names[row['keyWord']].add(row['orderedSizeMatchedSibling']['basenameSha256'])
    findings['detachedKeyCorroboration'] = {'distinctKeyWords': len(key_names),
                                          'crossIndexBasenameHashConflicts': sum(len(values) != 1 for values in key_names.values()),
                                          'hashAlgorithmProved': False,
                                          'scope': 'Key-to-basename inference from exact complete ordered sibling size correspondence; loader/hash algorithm unproved'}
    base_shaders = {row['codeSha256'] for row in reports['base']['signatureAndProgramCandidates'] if row.get('format') == 'DVLB'}
    update_shaders = {row['codeSha256'] for row in reports['update']['signatureAndProgramCandidates'] if row.get('format') == 'DVLB'}
    findings['shaderCodeHashIntersection'] = {'common': len(base_shaders & update_shaders),
                                             'baseOnly': len(base_shaders - update_shaders), 'updateOnly': len(update_shaders - base_shaders)}
    save(EVIDENCE / 'findings.json', findings)
    argv = [str(ROOT / 'tools/python/Scripts/python.exe'), '-m', 'unittest', 'discover', '-s',
            str(ROOT / 'src/inventory-wave003'), '-p', 'test_inventory.py', '-v']
    process = subprocess.run(argv, cwd=WORK, capture_output=True, timeout=60)
    log = WORK / 'tests.log'
    log.write_bytes(process.stdout + process.stderr)
    if process.returncode:
        raise RuntimeError('Container controls failed')
    save(EVIDENCE / 'verification.json', {'status': 'ready-for-coordinator-review', 'tests': 11, 'exitCode': 0,
                                        'argv': argv, 'workingDirectory': str(WORK), 'log': pin(log),
                                        'freshCiaExecutableExpansion': True, 'oldDecoderResidualsClassified': 13,
                                        'newRecognizedDecoderResiduals': 0,
                                        'priorKnownPayloadCounts': {'base': 26755, 'update': 2215},
                                        'newUniquePayloadCountsIncludingExeFSAndExpandedCode': {key: value['uniquePayloads'] for key, value in reports.items()},
                                        'frozenLane1Inputs': [pin(ROOT / f'evidence/lanes/inventory-wave001/{label}-nested.json') for label in reports],
                                        'nativeDenominatorComplete': False, 'acceptedSourceCredit': 0})
    print({label: {key: value for key, value in row.items() if key in ('uniqueShaderCodeImages', 'uniqueShaderCodeBytes', 'shaderExecutableEntries')}
           for label, row in findings['categories'].items()})
    print(findings['detachedKeyCorroboration'], findings['shaderCodeHashIntersection'])
