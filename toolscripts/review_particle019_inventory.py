import hashlib
import json
from pathlib import Path

import native_particle_inventory as inventory
import native_shader_inventory as historical

ROOT=Path(__file__).resolve().parents[1]


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
    frozen,refs=historical.compose(ROOT,base)
    before,_=inventory.predecessor.compose(ROOT,base)
    require(frozen['functionCount']==26659 and before['functionCount']==26663,'Particle historical/current composition bridge differs')
    old={r['address']:r for r in frozen['functions']}
    current={r['address']:r for r in before['functions']}
    require(set(current)-set(old)=={0x10b980,0x10c4f4,0x44dfac,0x44e000}
        and {a for a,r in old.items() if current[a]!=r}=={0x105408,0x10555c},'Unexplained historical/current owner delta')
    folder=ROOT/'evidence/lanes/native-particle019-inventory/proposal-v1'
    proposal=folder/'inventory-proposal-v1.public.json'
    witness=read(proposal)
    require(witness['compositionReferences']==refs,'Frozen particle composition references differ')
    review_path=ROOT/'evidence/verification/particle019-original-caller-replay.json'
    reference=read(review_path)
    require(reference['status']=='public-proposal-materialized-and-two-original-caller-profiles-independently-reproduced'
        and len(reference['profiles'])==2,'Independent original callers incomplete')
    profiles={}
    for row in reference['profiles']:
        path=ROOT/row['independentReport']['path']
        require(pin(path)==row['independentReport'],'Independent original report bytes differ')
        value=read(path)
        route=value['normalEmitterRoute']
        require(not value['frontiers'] and not value['invalid'] and route['error'] is None
            and route['priorStackProvenance'][0]['bytes'][58]['value']==42,'Original caller frontier or incoming stack provenance differs')
        profiles[row['profile']]=route
    for row in witness['proposedFunctions']:
        for event in row['independentEntryWitnesses']:
            original={k:v for k,v in event.items() if k not in ['profile','canonicalCallsiteOwners','proposedCallsiteOwners']}
            require(original in profiles[event['profile']]['inventoryEntries'],'Proposed caller is absent from independent original execution')
    result=inventory.validate(base,before,witness,(ROOT/'generated/update-content0/code.bin').read_bytes())
    require(result['functionCount']==26673 and all(current[r['address']]==r for r in result['functions'] if r['address'] in current),
        'Particle repair changed existing callable ownership')
    receipt=dict(status='coordinator-reviewed-ten-particle-callable-entries-with-unchanged-classification',overlay=pin(proposal),
        producer=pin(Path(__file__).resolve()),validator=pin(ROOT/'toolscripts/native_particle_inventory.py'),
        moduleSha256=base['codeSha256'],historicalProposalStageEntries=26659,predecessorCurrentEntries=26663,
        addedDiscoveredEntries=10,resultingDiscoveredEntries=26673,addedInstructionOwnershipBytes=2924,
        excludedAlreadyDefinedLiteralBytes=72,instructionClassificationBytesAdded=0,dataClassificationBytesAdded=0,
        unclassifiedBytesRemoved=0,existingCanonicalOwnersModified=0,grossInitializedTextBytes=7051280,
        grossDenominatorChange=0,sourceCreditGranted=0,historicalFunctionInventoryComplete=False,
        independentOriginalCallerProfiles=2,originalCallerStateAndTransferWitnessesVerified=True,
        incomingFpStackByte58=42,completeCfgReachabilityAndBoundariesVerified=True,
        allLiteralReadersAndByteConservingPartitionsVerified=True,referenceReplay=pin(review_path),wholeGameClaimed=False)
    output=ROOT/'evidence/verification/particle019-inventory-review.json'
    output.write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8')
    config=dict(schemaVersion=1,moduleSha256=base['codeSha256'],baseCensus=pin(base_path),overlays=[dict(
        packet=pin(proposal),referenceProducer=pin(folder/'build_proposal.py'),coordinatorReview=pin(output),
        approvedForFunctionInventory=True,sourceCreditGranted=0)])
    (ROOT/inventory.CONFIG).write_text(json.dumps(config,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(receipt))


if __name__=='__main__':
    main()
