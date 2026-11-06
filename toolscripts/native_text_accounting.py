import argparse
import hashlib
import json
from pathlib import Path

import native_inventory_complete as inventory


ROOT = inventory.ROOT
OUT = ROOT / 'evidence/lanes/native-inventory-completion/static-text'


def measure_layout(label):
    metadata_path = ROOT / f'evidence/inventory/{label}-content0.json'
    metadata = inventory.read(metadata_path)
    code_path = ROOT / f'generated/{label}-content0/code.bin'
    header_path = ROOT / f'generated/{label}-content0/exheader.bin'
    code, header = code_path.read_bytes(), header_path.read_bytes()
    if hashlib.sha256(code).hexdigest() != metadata['codeSha256'] or hashlib.sha256(header).hexdigest() != metadata['exheaderSha256']:
        raise ValueError('Static text input differs from measured code/ExHeader identity')
    segments, cursor = [], 0
    for index, name in enumerate(['text', 'rodata', 'data']):
        at = 0x10 + 0x10 * index
        address = int.from_bytes(header[at:at + 4], 'little')
        pages = int.from_bytes(header[at + 4:at + 8], 'little')
        initialized = int.from_bytes(header[at + 8:at + 12], 'little')
        expected = metadata['layout']['segments'][index]
        if initialized > pages * 4096 or (address, pages, initialized, cursor) != (
                expected['address'], expected['pages'], expected['initializedBytes'], expected['codeBinOffset']):
            raise ValueError('Independent ExHeader page/address/initialized extent differs from loader inventory')
        if index and address != segments[0]['address'] + cursor:
            raise ValueError('Static text contract requires qualified contiguous page mapping')
        segments.append({'name': name, 'address': address, 'initializedBytes': initialized,
                         'mappedPageBytes': pages * 4096, 'codeBinOffset': cursor,
                         'excludedPagePaddingBytes': pages * 4096 - initialized})
        cursor += pages * 4096
    if cursor != len(code):
        raise ValueError('Code image and declared page extent differ')
    text = segments[0]
    return metadata, code, {'programId': metadata['programId'], 'moduleSha256': metadata['codeSha256'],
                            'exheaderSha256': metadata['exheaderSha256'], 'metadata': inventory.pin(metadata_path),
                            'segments': segments, 'textStart': text['address'],
                            'textEndExclusive': text['address'] + text['initializedBytes'],
                            'grossInitializedExecutableTextBytes': text['initializedBytes'],
                            'executablePagePaddingExcludedBytes': text['excludedPagePaddingBytes'],
                            'rodataAndDataExcludedBytes': sum(row['initializedBytes'] for row in segments[1:])}


def accepted(label, code, start, end):
    if label == 'base':
        return [], []
    recovery = inventory.read(ROOT / 'recovery.json')
    result, pins = [], []
    for cohort in recovery['acceptedCohorts']:
        path = ROOT / cohort['path']
        if inventory.digest(path) != cohort['sha256']:
            raise ValueError('Frozen accepted cohort identity changed')
        pins.append(inventory.pin(path))
        for row in inventory.read(path)['functions']:
            low, size = row['address'], row['instructionBytes'] + row.get('poolBytes', 0)
            if not start <= low < low + size <= end or row['mode'] != 'ARM':
                raise ValueError('Accepted span outside executable text contract')
            if inventory.digest(ROOT / row['sourcePath']) != row['sourceSha256']:
                raise ValueError('Accepted source bytes changed')
            raw = code[low - start:low - start + size]
            if hashlib.sha256(raw).hexdigest() != row['originalSpanSha256']:
                raise ValueError('Accepted original span changed')
            result.append({'start': low, 'endExclusive': low + size, 'bytes': size, 'symbol': row['symbol'],
                           'mode': row['mode'], 'sourcePath': row['sourcePath'], 'sourceSha256': row['sourceSha256'],
                           'originalSpanSha256': row['originalSpanSha256'], 'kind': 'accepted-source-span'})
    result.sort(key=lambda row: row['start'])
    if any(left['endExclusive'] > right['start'] for left, right in zip(result, result[1:])):
        raise ValueError('Accepted source spans overlap')
    if (len(result), sum(row['bytes'] for row in result)) != (recovery['acceptedRecoveredFunctions'], recovery['acceptedRecoveredBytes']):
        raise ValueError('Accepted source totals differ from recovery ledger')
    return result, pins


def exhaustive_partition(start, end, sources):
    result, cursor = [], start
    for row in sources:
        if row['start'] < cursor or row['endExclusive'] > end or row['endExclusive'] <= row['start']:
            raise ValueError('Source span is not disjoint inside initialized text')
        if row['bytes'] != row['endExclusive'] - row['start']:
            raise ValueError('Source span size differs from its exact extent')
        if row['start'] > cursor:
            result.append({'start': cursor, 'endExclusive': row['start'], 'bytes': row['start'] - cursor,
                           'kind': 'unmatched-initialized-text'})
        result.append(row)
        cursor = row['endExclusive']
    if cursor < end:
        result.append({'start': cursor, 'endExclusive': end, 'bytes': end - cursor, 'kind': 'unmatched-initialized-text'})
    if not result or result[0]['start'] != start or result[-1]['endExclusive'] != end:
        raise ValueError('Partition fails to span initialized text')
    if any(left['endExclusive'] != right['start'] for left, right in zip(result, result[1:])):
        raise ValueError('Partition contains overlap or a dropped byte')
    if sum(row['bytes'] for row in result) != end - start:
        raise ValueError('Partition byte conservation failed')
    return result


def observation_partition(census, start, end):
    definitions = [('instruction', census['instructionRanges']), ('defined-data', census['definedDataRanges']),
                   ('unclassified', census['unclassifiedTextRanges'])]
    result = []
    for kind, rows in definitions:
        for row in rows:
            if not start <= row['start'] < row['endExclusive'] <= end or row['bytes'] != row['endExclusive'] - row['start']:
                raise ValueError('Observed code/data interval invalid')
            result.append({**row, 'kind': kind})
    result.sort(key=lambda row: row['start'])
    if not result or result[0]['start'] != start or result[-1]['endExclusive'] != end or any(
            left['endExclusive'] != right['start'] for left, right in zip(result, result[1:])):
        raise ValueError('Instruction/data/unclassified observations fail disjoint exhaustive partition')
    return result


def build(label, require_seeded=False):
    metadata, code, layout = measure_layout(label)
    start, end = layout['textStart'], layout['textEndExclusive']
    sources, cohorts = accepted(label, code, start, end)
    partition = exhaustive_partition(start, end, sources)
    scope_path = ROOT / 'evidence/lanes/executable-scope/scope.json'
    scope = inventory.read(scope_path)
    matches = [row for row in scope['versions'] if row['version'] == label + '-content0']
    if scope['staticMainImageScopeComplete'] is not True or len(matches) != 1:
        raise ValueError('Finite main-image scope review is missing or incomplete')
    main = matches[0]['mainImage']
    if (main['codeSha256'], main['exheaderSha256'], main['nativeTextStart'], main['nativeTextEndExclusive'], main['nativeTextGrossBytes']) != (
            metadata['codeSha256'], metadata['exheaderSha256'], start, end, end - start):
        raise ValueError('Independent static layout differs from reviewed finite corpus scope')
    seeded = ROOT / f'evidence/lanes/native-inventory-completion/seeded/{label}-census.json'
    run_path = seeded.with_name(label + '-run.json')
    observations, census_pin, discovered, analysis_pin = None, None, None, None
    if seeded.exists():
        run, census = inventory.read(run_path), inventory.read(seeded)
        if run['status'] != 'qualified-seeded-analysis' or census['codeSha256'] != metadata['codeSha256']:
            raise ValueError('Seeded observations are incomplete or identify another executable')
        observations = observation_partition(census, start, end)
        census_pin, discovered = inventory.pin(seeded), census['functionCount']
        analysis_pin = inventory.pin(run_path)
    elif require_seeded:
        raise ValueError('Qualified seeded observation census is not yet available')
    source_bytes = sum(row['bytes'] for row in sources)
    report = {'schemaVersion': 1, 'label': label, 'scope': label + '-content0-initialized-text',
              'producer': inventory.pin(Path(__file__)), 'layout': layout, 'acceptedCohorts': cohorts,
              'finiteScopeReview': inventory.pin(scope_path),
              'staticExecutableByteAccountingComplete': True, 'staticBytePartition': partition,
              'knownSourceFunctionCount': len(sources), 'matchedSourceBytes': source_bytes,
              'totalInitializedTextBytes': end - start, 'unmatchedInitializedTextBytes': end - start - source_bytes,
              'knownSourceShareOfInitializedTextPercent': source_bytes * 100 / (end - start),
              'discoveredFunctionEntryCount': discovered, 'discoveredEntryCountIsHistoricalFunctionTotal': False,
              'seededCensus': census_pin, 'seededAnalysisRun': analysis_pin, 'instructionDataObservationPartition': observations,
              'historicalFunctionBoundariesComplete': False, 'wholeGameInventoryComplete': False,
              'convention': 'Every initialized text byte counts in the conservative static executable baseline, including literal pools, alignment and unclassified regions. Only accepted exact source spans count as matched; no synthetic functions or zeroed unknown denominators.'}
    inventory.save(OUT / (label + '.json'), report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--require-seeded', action='store_true')
    args = parser.parse_args()
    OUT.mkdir(parents=True, exist_ok=True)
    for label in ['base', 'update']:
        report = build(label, args.require_seeded)
        print(json.dumps({key: report[key] for key in ['label', 'staticExecutableByteAccountingComplete', 'totalInitializedTextBytes', 'matchedSourceBytes', 'unmatchedInitializedTextBytes', 'discoveredFunctionEntryCount']}))


if __name__ == '__main__':
    main()
