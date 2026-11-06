import argparse
import json
import re
from pathlib import Path

import native_inventory_complete as inventory


ROOT = inventory.ROOT
EVIDENCE = ROOT / 'evidence/lanes/native-inventory-completion/seeded'


def validate(preparation, census, launch, lines):
    if launch['processExitCode'] != 0 or launch['processTimedOut'] or launch['analysisTimedOut']:
        raise ValueError('Analysis process failed or timed out')
    if any('timed out' in line.lower() for line in lines):
        raise ValueError('Actual analyzer timeout in log')
    count = launch['seedCount']
    required = ['preparationSucceeded', 'allContextsInstalledBeforeAnyDisassembly', 'allSeedsDisassembled', 'allSeedFunctionsCreated']
    if any(preparation.get(key) is not True for key in required) or preparation.get('conflicts'):
        raise ValueError('Explicit context/seed preparation incomplete')
    if preparation.get('instructionCountWhenAllContextsVerified') != 0 or any(
            preparation.get(key) != count for key in ['contextsInstalled', 'seedInstructionEntries', 'seedFunctionEntries']):
        raise ValueError('Seed counts or preparation ordering do not qualify')
    if not any('REPORT: Analysis succeeded for file:' in line for line in lines):
        raise ValueError('Explicit successful automatic analysis marker absent')
    if not any('REPORT: Post-analysis succeeded for file:' in line for line in lines):
        raise ValueError('Explicit post-analysis success marker absent')
    exports = [re.search(r'NATIVE_INVENTORY_DETAIL_EXPORT_SUCCESS (\d+) (\d+)', line) for line in lines]
    exports = [match for match in exports if match]
    if len(exports) != 1 or (int(exports[0][1]), int(exports[0][2])) != (
            census['functionCount'], census['functionBodyUnionBytes']):
        raise ValueError('Explicit census export facts disagree with emitted census')
    times = [int(match[1]) for line in lines if (match := re.search(r'Total Time\s+(\d+) secs', line))]
    return {'explicitPreparationSucceeded': True, 'automaticAnalysisSucceeded': True, 'postAnalysisSucceeded': True,
            'allSeedInstructionsAndFunctionsCreated': True, 'analyzerReportedSeconds': times,
            'sourceCredit': 0, 'functionBoundariesComplete': False}


def qualify(folder):
    folder = folder.resolve()
    if not folder.is_relative_to((ROOT / 'work/native-inventory-seeded').resolve()):
        raise ValueError('Qualification may only read this lane\'s private run directories')
    launch = inventory.read(folder / 'run.json')
    label = launch['label']
    metadata = inventory.read(ROOT / f'evidence/inventory/{label}-content0.json')
    manifest_path, preparation_path, census_path = [folder / name for name in [
        'inputs/manifest.json', 'export/preparation.json', 'export/ghidra-functions.json']]
    manifest, preparation, census = map(inventory.read, [manifest_path, preparation_path, census_path])
    stdout = folder / 'stdout.log'
    if inventory.digest(stdout) != launch['privateStdout']['sha256']:
        raise ValueError('Frozen analysis log changed')
    facts = validate(preparation, census, launch, stdout.read_text(encoding='utf-8', errors='replace').splitlines())
    facts.update({'candidateFunctions': census['functionCount'], 'bodyBytes': census['functionBodyUnionBytes'],
                  'unclassifiedTextBytes': census['unclassifiedTextBytes']})
    for name, key in [('code.bin', 'codeSha256'), ('exheader.bin', 'exheaderSha256')]:
        if inventory.digest(folder / 'inputs' / name) != metadata[key] or census[key] != metadata[key] or preparation[key] != metadata[key]:
            raise ValueError('Original run/export/preparation input identity mismatch')
    if census['seedManifestSha256'] != inventory.digest(manifest_path) or census['preparationSha256'] != inventory.digest(preparation_path):
        raise ValueError('Census manifest/preparation hash mismatch')
    java = folder / 'scripts/NativeInventoryDetail.java'
    if inventory.digest(java) != launch['java']['sha256']:
        raise ValueError('Exact analysis exporter source changed')
    for record in launch['tools']:
        path = Path(record['path'])
        path = path if path.is_absolute() else ROOT / path
        if inventory.digest(path) != record['sha256']:
            raise ValueError('Effective analysis tool input changed')
    original_driver = EVIDENCE / 'initial-launch-driver.py.txt'
    if inventory.digest(original_driver) != launch['driver']['sha256']:
        raise ValueError('Preserved original launch producer differs from recorded hash')
    entries = {row['address']: row['mode'] for row in census['functions']}
    facts['postAnalysisSeedEntriesFound'] = sum(row['address'] in entries for row in manifest['functionSeeds'])
    facts['postAnalysisSeedModesAgree'] = sum(entries.get(row['address']) == row['mode'] for row in manifest['functionSeeds'])
    initial = EVIDENCE / (label + '-initial-qualification.json')
    receipt = {**launch, **facts, 'status': 'qualified-seeded-analysis', 'initialQualification': inventory.pin(initial),
               'originalLaunchProducer': launch['driver'], 'driver': inventory.pin(original_driver),
               'validationProducer': inventory.pin(Path(__file__)), 'originalLaunchProducerSnapshot': inventory.pin(original_driver),
               'qualifiedCensus': inventory.pin(census_path), 'qualifiedPreparation': inventory.pin(preparation_path),
               'qualificationCorrection': 'Initial guard expected ANALYSIS SUCCESSFUL; actual Ghidra marker is REPORT: Analysis succeeded for file:. Initial guard-failure receipt preserved. Raw successful analysis is independently requalified without rerunning or altering it.'}
    inventory.save(EVIDENCE / (label + '-run.json'), receipt)
    print(json.dumps({key: receipt[key] for key in ['label', 'status', 'candidateFunctions', 'postAnalysisSeedEntriesFound', 'postAnalysisSeedModesAgree']}))
    return receipt


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('folders', nargs='+', type=Path)
    args = parser.parse_args()
    for folder in args.folders:
        qualify(folder)


if __name__ == '__main__':
    main()
