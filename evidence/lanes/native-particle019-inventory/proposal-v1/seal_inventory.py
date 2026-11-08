import hashlib
import json
from pathlib import Path
import sys

ROOT=Path.cwd();WORK=ROOT/'work/particle019-inventory-proposal-v1';sys.path.insert(0,str(ROOT/'toolscripts'))
import native_shader_inventory as inventory


def pin(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def write(name,value):
    path=WORK/name;assert not path.exists();path.write_text(json.dumps(value,indent=2)+'\n');return pin(path)


def main():
    assert not(WORK/'ready-v1.json').exists();proposal_path=WORK/'inventory-proposal-v1.public.json';proposal=json.loads(proposal_path.read_bytes());inspection=json.loads((WORK/'ownership-inspection-v1.json').read_bytes());base=json.loads((ROOT/inspection['canonicalBase']['path']).read_bytes());composed,refs=inventory.compose(ROOT,base)
    assert len(composed['functions'])==26659 and all(pin(ROOT/row['path'])==row for row in inspection['configurationInputs']);assert proposal['proposedCallableEntries']==10 and len(proposal['excludedUnreachedCandidates'])==4
    tools=[]
    for name,module in list(sys.modules.items()):
        filename=getattr(module,'__file__',None)
        if filename:
            path=Path(filename)
            if path.is_relative_to(ROOT/'toolscripts')and path.suffix=='.py':tools.append(dict(module=name,input=pin(path)))
    preservation=[]
    for relative,expected in [('work/shader018-normal-emitter-v1/ready-v1.json','5f7cd5e81d43bf42ac2d0bd8964dbbb18275b293932c3548bd4bcf2e6cb2c1f5'),('work/particle019-velocity-v1/ready-v1.json','503490478e14d5518ed029c4ece548e6067dd52b6014dd6642fc44efeeff9f96')]:
        path=ROOT/relative;identity=pin(path);assert identity['sha256']==expected;value=json.loads(path.read_bytes())
        for row in value['files']:assert pin(ROOT/row['path'])==row,row['path']
        preservation.append(dict(ready=identity,filePinsReverified=len(value['files'])))
    provenance=write('proposal-provenance-v1.public.json',dict(status='read-only-composition-and-producer-identities-frozen',canonicalCompositionFunctionCount=26659,compositionHelperSources=tools,configurations=inspection['configurationInputs'],baseCensus=inspection['canonicalBase'],originalModule=dict(path='generated/update-content0/code.bin',sha256=base['codeSha256']),preservedSealedPackets=preservation,sourceCreditGranted=0,inventoryAdmissionGranted=False))
    frontier=[]
    for row in proposal['proposedFunctions']:
        for edge in row['staticCallsAndTails']:
            if edge['unownedNonCandidateTarget']:frontier.append(dict(fromEntry=row['canonicalIdentity']['address'],edge=edge,independentFunctionNotAssumed=True,includedInProposedFunctionCount=False))
    unresolved=write('unowned-tail-frontier-v1.public.json',dict(status='unowned-outgoing-target-preserved-no-automatic-function-creation',frontiers=frontier,sourceCreditGranted=0,inventoryAdmissionGranted=False))
    selected=[WORK/'README.md',WORK/'inspect_ownership.py',WORK/'capture_callers.py',WORK/'build_proposal.py',WORK/'seal_inventory.py',WORK/'ownership-inspection-v1.json',*WORK.glob('*.public.json')]
    public=[dict(input=pin(path),proposedPath='evidence/lanes/native-particle019-inventory/proposal-v1/'+path.name,role='coordinator-reviewable-inventory-proposal')for path in sorted(set(selected))]
    manifest=write('public-proposal-manifest-v1.json',dict(status='proposed-public-inventory-review-subset-only',publicFiles=public,privateExternalInputs=['original executable by hash','raw original observations/arenas','private disassembly','sealed private static CFG identity'],productionSourceFiles=[],sourceCreditGranted=0,inventoryAdmissionGranted=False,sharedFilesEdited=False))
    for path in WORK.glob('*.py'):assert len(path.read_text().splitlines())<=500;compile(path.read_text(),str(path),'exec')
    files=[pin(path)for path in sorted(WORK.rglob('*'))if path.is_file()and'__pycache__'not in path.parts and path.name!='ready-v1.json']
    ready=write('ready-v1.json',dict(status='sealed-callable-ownership-proposal-pending-coordinator-review',proposal=pin(proposal_path),validation=pin(WORK/'proposal-validation-v1.public.json'),provenance=provenance,unownedOutgoingFrontier=unresolved,publicManifest=manifest,currentCanonicalFunctionCount=26659,proposedCallableEntries=10,excludedUnreachedCandidates=4,proposedInstructionOwnershipBytes=2924,alreadyDefinedExcludedLiteralBytes=72,byteConservingPartitions=12,negativeMetadataControls=6,classificationInstructionBytesAdded=0,classificationDataBytesAdded=0,unclassifiedBytesRemoved=0,existingCanonicalFunctionOwnersModified=0,initializedTextGrossBytes=7051280,denominatorComplete=False,sourceCreditGranted=0,inventoryAdmissionGranted=False,nativeTextDenominatorChanged=False,sourcePacketModified=False,sharedFilesEdited=False,preservedSealedPackets=preservation,files=files,excludedMutableBytecodeCaches=True))
    for row in files:assert pin(ROOT/row['path'])==row
    print(json.dumps(dict(ready=ready,filePins=len(files),packetBytes=sum(row['bytes']for row in files),allPinnedFilesReverified=True)),flush=True)


if __name__=='__main__':main()
