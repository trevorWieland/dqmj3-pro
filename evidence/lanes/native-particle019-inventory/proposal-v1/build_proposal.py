import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT=Path.cwd();WORK=ROOT/'work/particle019-inventory-proposal-v1';PARENT=ROOT/'work/shader018-normal-emitter-v1';sys.path.insert(0,str(ROOT/'toolscripts'))
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_OP_MEM,ARM_REG_PC
import native_shader_inventory as inventory


def sha(data):return hashlib.sha256(data).hexdigest()


def pin(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=sha(data))


def intersects(a,b):return max(a[0],b[0])<min(a[1],b[1])


def span(image,start,end):return dict(start=start,endExclusive=end,bytes=end-start,sha256=sha(image[start-0x100000:end-0x100000]))


def main():
    inspected=json.loads((WORK/'ownership-inspection-v1.json').read_bytes());base_path=ROOT/inspected['canonicalBase']['path'];assert pin(base_path)==inspected['canonicalBase'];base=json.loads(base_path.read_bytes());current,refs=inventory.compose(ROOT,base);assert len(current['functions'])==inspected['composedFunctionCount']==26659
    assert all(pin(ROOT/row['path'])==row for row in inspected['configurationInputs']);image=(ROOT/'generated/update-content0/code.bin').read_bytes();assert sha(image)==base['codeSha256'];metadata_path=ROOT/'evidence/inventory/update-content0.json';metadata=json.loads(metadata_path.read_bytes());assert metadata['codeSha256']==sha(image)
    cfg=json.loads((PARENT/'normal-update-cfg-v8.json').read_bytes());qualified={row['entry']:row for row in cfg['functions']};selected=[row['entry']for row in inspected['entries']if row['genuinelyObservedEntry']];excluded=[row for row in inspected['entries']if not row['genuinelyObservedEntry']];owners=current['functions'];canonical={row['address']:row for row in owners};decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM);decoder.detail=True
    def ownership(address,end=None):
        end=address+4 if end is None else end
        return[dict(entry=row['address'],mode=row['mode'],ranges=row['ranges'],exactCanonicalEntry=address==row['address'])for row in owners if any(intersects((address,end),(part['start'],part['endExclusive']))for part in row['ranges'])]
    profiles=[];events=[]
    for path in sorted(WORK.glob('normal-callers-v1/*/observation.private.json')):
        report=json.loads(path.read_bytes());route=report['normalEmitterRoute'];assert route['error']is None and not report['frontiers']and not report['invalid'];assert route['priorStackProvenance'][0]['bytes'][58]['value']==42;profiles.append(pin(path))
        events.extend(dict(profile=path.parent.name,**row)for row in route['inventoryEntries'])
    assert len(profiles)==2
    proposed=[];segments=[];private_asm=[]
    for entry in selected:
        row=qualified[entry];assert entry not in canonical;parts=row['instructionRanges'];pools=[span(image,item['address'],item['address']+item['bytes'])for item in row['pools']];witnesses=[];readers=[]
        for event in events:
            if event['entry']!=entry:continue
            transfer=event['actualTransfer'];assert transfer and transfer['target']==entry and transfer['pc']==event['previousPc'];instruction=next(decoder.disasm(image[transfer['pc']-0x100000:transfer['pc']-0x100000+4],transfer['pc']));assert sha(bytes(instruction.bytes))==transfer['sha256'];assert instruction.mnemonic in ['blx','b','bl']
            if transfer['kind']=='BLX-register':assert instruction.op_str=='r'+str(transfer['register'])or instruction.op_str=={12:'ip',14:'lr'}.get(transfer['register'])
            caller=ownership(transfer['pc']);proposed_caller=[candidate for candidate in selected if any(part['start']<=transfer['pc']<part['endExclusive']for part in qualified[candidate]['instructionRanges'])]
            witnesses.append(dict(**event,canonicalCallsiteOwners=caller,proposedCallsiteOwners=proposed_caller))
        assert witnesses,hex(entry)
        assert any(witness['actualTransfer']['kind']in ['BLX-register','BL-immediate']for witness in witnesses)or entry==0x53e430
        for part in parts:
            assert span(image,part['start'],part['endExclusive'])==part;assert not ownership(part['start'],part['endExclusive'])
            segments.append(dict(**part,role='proposed-callable-instructions',entry=entry))
        for pool in pools:
            assert not ownership(pool['start'],pool['endExclusive']);segments.append(dict(**pool,role='already-defined-excluded-literal-data',entry=entry))
        decoded=[]
        for part in parts:decoded.extend(decoder.disasm(image[part['start']-0x100000:part['endExclusive']-0x100000],part['start']))
        assert len(decoded)*4==sum(part['bytes']for part in parts)
        for instruction in decoded:
            for operand in instruction.operands:
                if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                    target=instruction.address+8+operand.mem.disp;assert any(pool['start']<=target and target+4<=pool['endExclusive']for pool in pools)
                    readers.append(dict(pc=instruction.address,literalAddress=target,bytes=4,instructionSha256=sha(bytes(instruction.bytes))))
        assert {reader['literalAddress']for reader in readers}=={pool['start']for pool in pools}
        transfers=[]
        for item in row['calls']+row['boundaries']:
            if item.get('target')is None:continue
            target=item['target'];transfers.append(dict(**item,currentTargetOwnership=ownership(target),targetAlreadyCanonicalEntry=target in canonical,targetIsProposedEntry=target in selected,unownedNonCandidateTarget=target not in selected and not ownership(target)))
        matches=[];needle=entry.to_bytes(4,'little');cursor=image.find(needle)
        while cursor>=0:
            if cursor%4==0:matches.append(dict(address=0x100000+cursor,bytes=4,sha256=sha(needle),pointerSemanticsNotAssumed=True))
            cursor=image.find(needle,cursor+1)
        instruction_bytes=sum(part['bytes']for part in parts);thunk=len(decoded)==1 and decoded[0].mnemonic=='b'
        proposed.append(dict(canonicalIdentity=dict(programId=metadata['programId'],moduleSha256=sha(image),address=entry,mode='ARM'),name='fn_'+format(entry,'08x'),instructionRanges=parts,excludedLiteralPools=pools,instructionBytes=instruction_bytes,literalBytes=sum(pool['bytes']for pool in pools),currentCanonicalOwnership=[],independentEntryWitnesses=witnesses,entryKind='virtual-callback-tail-forwarder'if thunk else'empty-callback-return-stub'if instruction_bytes==4 else'constant-kind-query-callback'if instruction_bytes==8 else'normal-route-callback',isThunk=thunk,literalReaders=readers,staticCallsAndTails=transfers,allStaticBoundaries=row['boundaries'],alignedOriginalWordReferences=matches,proposedInventoryRow=dict(address=entry,mode='ARM',ranges=[{key:part[key]for key in ['start','endExclusive','bytes']}for part in parts],textBodyBytes=instruction_bytes,bodyBytesOutsideInitializedText=0,entryInstructionDefined=True,isThunk=thunk,calledFunctionAddresses=sorted(set(item['target']for item in row['calls']if item['target']is not None)),acceptedSourceBytes=0,boundaryStatus='proposal-unowned-normal-route-callable-complete-static-instruction-and-pool-extents')))
        private_asm.append('ENTRY '+hex(entry)+'\n'+'\n'.join(hex(instruction.address)+' '+instruction.mnemonic+' '+instruction.op_str for instruction in decoded))
    assert len(proposed)==10 and sum(row['instructionBytes']for row in proposed)==2924 and sum(row['literalBytes']for row in proposed)==72
    ordered=sorted(segments,key=lambda row:row['start']);assert all(a['endExclusive']<=b['start']for a,b in zip(ordered,ordered[1:]))
    partitions=[]
    for category,rows in [('existing-defined-instructions',base['instructionRanges']),('existing-defined-data',base['definedDataRanges']),('existing-unclassified',base['unclassifiedTextRanges'])]:
        for old in rows:
            inside=[row for row in ordered if intersects((old['start'],old['endExclusive']),(row['start'],row['endExclusive']))]
            if not inside:continue
            cuts={old['start'],old['endExclusive']}
            for row in inside:cuts.update([max(old['start'],row['start']),min(old['endExclusive'],row['endExclusive'])])
            pieces=[];points=sorted(cuts)
            for start,end in zip(points,points[1:]):
                affected=next((row for row in inside if row['start']<=start and end<=row['endExclusive']),None);prior=ownership(start,end)
                if affected:
                    assert not prior
                    assert(category=='existing-defined-instructions')==(affected['role']=='proposed-callable-instructions')
                pieces.append(dict(**span(image,start,end),existingClassification=category,priorCanonicalOwners=prior,proposedOwner=affected['entry']if affected and affected['role']=='proposed-callable-instructions'else None,role=affected['role']if affected else'unchanged-context'))
            raw=b''.join(image[row['start']-0x100000:row['endExclusive']-0x100000]for row in pieces);before_span=span(image,old['start'],old['endExclusive']);assert len(raw)==before_span['bytes']and sha(raw)==before_span['sha256'];partitions.append(dict(before=before_span,existingClassification=category,after=pieces,byteConserving=True,concatenatedAfterSha256=sha(raw)))
    assert sum(row['bytes']for partition in partitions for row in partition['after']if row['role']=='proposed-callable-instructions')==2924
    assert sum(row['bytes']for partition in partitions for row in partition['after']if row['role']=='already-defined-excluded-literal-data')==72
    proposal=dict(status='coordinator-reviewable-callable-ownership-proposal-not-admission',canonicalIdentity=dict(programId=metadata['programId'],moduleSha256=sha(image),mode='ARM',loadAddress=base['initializedTextStart']),currentCanonicalFunctionCount=26659,proposedCallableEntries=10,proposedInstructionOwnershipBytes=2924,alreadyDefinedExcludedLiteralBytes=72,allProposedBytesAlreadyClassified=True,initializedTextGrossBytes=base['initializedTextGrossBytes'],instructionClassificationBytesAdded=0,dataClassificationBytesAdded=0,unclassifiedBytesRemoved=0,existingCanonicalFunctionOwnersModified=0,proposedFunctions=proposed,excludedUnreachedCandidates=excluded,byteConservingPartitions=partitions,referenceProfiles=profiles,currentOwnershipInspection=pin(WORK/'ownership-inspection-v1.json'),canonicalCompositionInputs=inspected['configurationInputs'],baseCensus=pin(base_path),baseMetadata=pin(metadata_path),compositionReferences=refs,originalStaticCfgExternalReference=pin(PARENT/'normal-update-cfg-v8.json'),sourceCreditGranted=0,inventoryAdmissionGranted=False,nativeTextDenominatorChanged=False,denominatorComplete=False,sharedFilesEdited=False)
    target=WORK/'inventory-proposal-v1.public.json';target.write_text(json.dumps(proposal,indent=2)+'\n');(WORK/'proposed-callbacks-v1.private.asm').write_text('\n'.join(private_asm)+'\n')
    def validate(value):
        if value['canonicalIdentity']['moduleSha256']!=sha(image)or value['sourceCreditGranted']!=0 or value['inventoryAdmissionGranted']:raise ValueError('identity or admission differs')
        entries=[row['canonicalIdentity']['address']for row in value['proposedFunctions']]
        if len(entries)!=10 or len(set(entries))!=10 or set(entries)!=set(selected):raise ValueError('entry membership differs')
        for row in value['proposedFunctions']:
            entry=row['canonicalIdentity']['address'];expected=qualified[entry]
            if row['instructionRanges']!=expected['instructionRanges']:raise ValueError('complete instruction extents differ')
            if not row['independentEntryWitnesses']:raise ValueError('actual entry transfer missing')
            for part in row['instructionRanges']+row['excludedLiteralPools']:
                if span(image,part['start'],part['endExclusive'])!=part or ownership(part['start'],part['endExclusive']):raise ValueError('hash or current ownership differs')
        if sum(row['instructionBytes']for row in value['proposedFunctions'])!=2924 or sum(row['literalBytes']for row in value['proposedFunctions'])!=72:raise ValueError('byte conservation differs')
        return True
    assert validate(proposal);controls=[]
    for name,mutate in [('wrong-module',lambda value:value['canonicalIdentity'].update(moduleSha256='0'*64)),('duplicate-entry',lambda value:value['proposedFunctions'].append(copy.deepcopy(value['proposedFunctions'][0]))),('missing-caller',lambda value:value['proposedFunctions'][0].update(independentEntryWitnesses=[])),('truncate-body',lambda value:value['proposedFunctions'][0]['instructionRanges'][0].update(endExclusive=value['proposedFunctions'][0]['instructionRanges'][0]['endExclusive']-4)),('bad-pool-hash',lambda value:value['proposedFunctions'][0]['excludedLiteralPools'][0].update(sha256='0'*64)),('self-admission',lambda value:value.update(inventoryAdmissionGranted=True))]:
        trial=copy.deepcopy(proposal);mutate(trial);rejected=False
        try:validate(trial)
        except ValueError:rejected=True
        assert rejected,name;controls.append(dict(name=name,rejected=True))
    (WORK/'proposal-validation-v1.public.json').write_text(json.dumps(dict(status='proposal-structure-validated-not-coordinator-admitted',proposal=pin(target),negativeControls=controls,sourceCreditGranted=0,inventoryAdmissionGranted=False),indent=2)+'\n');print(json.dumps(dict(proposedEntries=10,instructionOwnershipBytes=2924,excludedLiteralBytes=72,currentCanonicalCount=26659,excludedUnreached=4,byteConservingPartitions=len(partitions),negativeControls=len(controls),sourceCreditGranted=0)))


if __name__=='__main__':main()
