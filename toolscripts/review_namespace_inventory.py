import hashlib
import json
from pathlib import Path

import native_namespace_inventory as inventory

ROOT=Path(__file__).resolve().parents[1]
FOLDER=ROOT/'evidence/lanes/native-file071072-inventory/public-inputs-v1'


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def require(value,reason):
    if not value:
        raise ValueError(reason)


def main():
    base_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    base=read(base_path)
    before,_=inventory.predecessor.compose(ROOT,base)
    proposal_path=FOLDER/'inventory-proposal-v1.json'
    dynamic_path=FOLDER/'dynamic-proof-v1.json'
    proposal,dynamic=read(proposal_path),read(dynamic_path)
    replay_path=ROOT/'work/filesystem071072-inventory-root-reference-review-v1.json'
    replay=read(replay_path)
    require(replay['status']=='three-independent-original-profiles-and-full-static-proposal-reproduced'
        and replay['allThree185EffectivePythonSourceCodeMultisetsEqual']
        and replay['allEffectivePythonFilesRehashed'] and len(replay['profiles'])==3,
        'Independent original caller replay incomplete')
    require(pin(ROOT/replay['proposal']['path'])==replay['proposal']
        and read(ROOT/replay['proposal']['path'])==proposal,'Independent static proposal changed')
    old_root=ROOT/'work/filesystem071072-inventory-v1'
    for row in replay['profiles']:
        path=ROOT/row['observation']['path']
        require(pin(path)==row['observation'],'Independent original observation changed')
        current=read(path)
        prior=read(old_root/('original-'+row['profile']+'-v1')/'inventory-observation-v1.json')
        require({k:v for k,v in current.items()if k!='effectivePythonSources'}
            =={k:v for k,v in prior.items()if k!='effectivePythonSources'},'Actual original caller state differs')
        require(not current['originalCodeOrDataPatched'] and not current['sdkGlobalsRegistryOrPoolsManuallySeeded'],
            'Original caller used patched code or fabricated globals')
        identities=lambda rows:sorted((r['bytes'],r['sha256'])for r in rows)
        require(identities(current['effectivePythonSources'])==identities(prior['effectivePythonSources']),
            'Original observer effective code changed')
    after=inventory.validate(base,before,proposal,dynamic,(ROOT/'generated/update-content0/code.bin').read_bytes())
    result=dict(status='coordinator-reviewed-three-original-backed-filesystem-entries',
        overlay=pin(proposal_path),dynamicProof=pin(dynamic_path),producer=pin(Path(__file__).resolve()),
        validator=pin(ROOT/'toolscripts/native_namespace_inventory.py'),moduleSha256=base['codeSha256'],
        addedDiscoveredEntries=3,resultingDiscoveredEntries=after['functionCount'],instructionOwnershipNetDelta=84,
        reparentedAliasInstructionBytes=204,retainedOldCallerInstructionBytes=108,excludedLiteralPoolBytes=20,
        additionalOwnershipOfDefinedInstructions=20,additionalOwnershipOfPreviouslyUnclassifiedInstructions=64,
        priorClassificationRangesChanged=False,grossInitializedTextBytes=7051280,grossDenominatorChange=0,
        originalProfilesReproduced=3,effectivePythonSourceIdentitiesPerProfile=185,
        independentOriginalReplay=pin(replay_path),streamFailurePositionsRemainUnvisited=4,
        oldCallerNonNullPositionsRemainUnvisited=18,sourceCreditGranted=0,historicalFunctionInventoryComplete=False,
        wholeGameClaimed=False)
    review_path=ROOT/'evidence/verification/namespace-inventory-review.json'
    config_path=ROOT/inventory.CONFIG
    require(not review_path.exists() and not config_path.exists(),'Preserve existing namespace approval')
    review_path.write_text(json.dumps(result,indent=2)+'\n')
    config=dict(schemaVersion=1,moduleSha256=base['codeSha256'],baseCensus=pin(base_path),overlays=[
        dict(packet=pin(proposal_path),dynamicProof=pin(dynamic_path),referenceProducer=pin(ROOT/'toolscripts/filesystem071072_inventory/static_fs_inventory.py'),
            coordinatorReview=pin(review_path),approvedForFunctionInventory=True,sourceCreditGranted=0)])
    config_path.write_text(json.dumps(config,indent=2)+'\n')
    print(json.dumps(result))


if __name__=='__main__':
    main()
