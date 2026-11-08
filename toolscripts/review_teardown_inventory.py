import hashlib
import json
from pathlib import Path
import subprocess

import native_teardown_inventory as inventory

ROOT = Path(__file__).resolve().parents[1]
SOURCE_COMMIT = 'e5e88533e8014049457024d6566d0ca7481b2407'


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(raw), sha256=hashlib.sha256(raw).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def main():
    base_path = ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    base = read(base_path)
    before, _ = inventory.predecessor.compose(ROOT,base)
    folder = ROOT/'evidence/lanes/native-file-coupled070/inventory-v1'
    proposal = folder/'proposal.json'
    witness = read(proposal)
    replay_path = ROOT/'evidence/verification/coupled070-isolated-e5e8853.json'
    replay = read(replay_path)
    require(replay['status']=='passed' and replay['sourceRevision']==SOURCE_COMMIT
        and len(replay['steps'])==17 and all(row['returncode']==0 for row in replay['steps'])
        and len(replay['packets'])==236, 'Complete committed coupled replay is required')
    archive=subprocess.check_output(['git','archive','--format=zip',SOURCE_COMMIT],cwd=ROOT)
    require(hashlib.sha256(archive).hexdigest()==replay['sourceArchiveSha256'], 'Committed source archive differs')
    clone = Path(replay['replayRoot'])
    require(clone.is_relative_to(ROOT/'work/clean-replay'), 'Independent replay root differs')
    expected_steps=['offline-dependencies','fresh-original-intake','coupled070-proof','coupled070-terminal-review',
        'public-compilation','coupled_file070_public-tests','native_heap_inventory-tests','compile_source_include_dirs-tests',
        'c_function_definitions-tests','compile_sources-tests','functional_report-tests','native_census_overlay-tests',
        'reporting-objects','report-configuration','stock-report','normalized-report','functional-companion']
    require([row['name'] for row in replay['steps']]==expected_steps
        and pin(ROOT/'config/replays/coupled070.json')['sha256']==replay['planSha256'], 'Independent replay phase roster or plan differs')
    for row in [*replay['packets'], *[dict(path=r['log'],sha256=r['logSha256']) for r in replay['steps']]]:
        path=(clone/row['path']).resolve()
        require(path.is_relative_to(clone) and pin(path)['sha256']==row['sha256'], 'Independent packet or phase log differs')
        if 'bytes' in row:
            require(path.stat().st_size==row['bytes'], 'Independent packet size differs')
    independent = clone/'work/teardown-inventory-reference-output-v1/proposal.json'
    require(independent.read_bytes()==proposal.read_bytes()
        and (clone/'work/teardown-inventory-reference-v1/propose.py').read_bytes()==(folder/'propose.py').read_bytes(),
        'Independent reference proposal or producer differs')
    observed = clone/'work/coupled070-public-replay-v1'
    for row in witness['actualOriginalObservations']:
        path=observed/row['path']
        require(path.is_relative_to(observed) and path.name==row['path'], 'Observation escapes replay')
        actual=pin(path)
        require(all(actual[key]==row[key] for key in ['bytes','sha256']), 'Actual-original observation differs')
    result=inventory.validate(base,before,witness,(ROOT/'generated/update-content0/code.bin').read_bytes())
    previous={row['address']:row for row in before['functions'] if row['address']!=0x10555c}
    require(all(row==previous[row['address']] for row in result['functions'] if row['address'] in previous),
        'Unrelated canonical entries changed')
    require(sum(row['textBodyBytes'] for row in result['functions'])-sum(row['textBodyBytes'] for row in before['functions'])==204,
        'Classified instruction byte delta differs')
    receipt=dict(status='coordinator-reviewed-three-teardown-entries-with-pool-exclusion',overlay=pin(proposal),
        producer=pin(Path(__file__).resolve()),validator=pin(ROOT/'toolscripts/native_teardown_inventory.py'),
        moduleSha256=base['codeSha256'],beforeDiscoveredEntries=before['functionCount'],addedDiscoveredEntries=3,
        resultingDiscoveredEntries=result['functionCount'],retainedApplicationShutdownBytes=48,detachedFilesystemShutdownBytes=80,
        newlyClassifiedInstructionBytes=204,excludedLiteralPoolBytes=28,grossInitializedTextBytes=7051280,
        grossDenominatorChange=0,sourceCreditGranted=0,independentSourceCommit=SOURCE_COMMIT,
        independentReplay=pin(replay_path),independentReference=pin(independent),
        fourActualOriginalObservationsVerified=True,knownOwnedArmIncomingBranchesScanned=True,
        originalVirtualTableSlotsVerified=True,fullyObservedProposedInstructionPositions=71,
        historicalFunctionInventoryComplete=False,wholeGameClaimed=False)
    target=ROOT/'evidence/verification/teardown-inventory-review.json'
    target.write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8')
    config=dict(schemaVersion=1,moduleSha256=base['codeSha256'],baseCensus=pin(base_path),overlays=[dict(
        packet=pin(proposal),referenceProducer=pin(folder/'propose.py'),coordinatorReview=pin(target),
        approvedForFunctionInventory=True,sourceCreditGranted=0)])
    (ROOT/inventory.CONFIG).write_text(json.dumps(config,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(receipt))


if __name__=='__main__':
    main()
