import json
from pathlib import Path

import native_teardown_inventory as predecessor
from native_sdk_inventory import decode, span

legacy=predecessor.legacy
CONFIG='config/native-particle-overlays.json'
EXTENTS={
    0x52f20c: ([(0x52f20c,0x52f4d0)],list(range(0x52f4d0,0x52f4f4,4))),
    0x5351a8: ([(0x5351a8,0x5351ac)],[]),
    0x5352b0: ([(0x5352b0,0x5352b4)],[]),
    0x5354a4: ([(0x5354a4,0x5354e0)],[0x5354e0]),
    0x53c7bc: ([(0x53c7bc,0x53c7c0)],[]),
    0x53c7c0: ([(0x53c7c0,0x53ca80)],[0x53ca80,0x53ca84]),
    0x53ca88: ([(0x53ca88,0x53cc60)],[0x53cc60]),
    0x53e430: ([(0x53e430,0x53e78c),(0x53e7a0,0x53e7fc)],list(range(0x53e78c,0x53e7a0,4))),
    0x6dc6fc: ([(0x6dc6fc,0x6dc704)],[]),
    0x6dc70c: ([(0x6dc70c,0x6dc714)],[])}


def require(value,reason):
    if not value:
        raise ValueError(reason)


def overlap(left,right):
    return left['start']<right['endExclusive'] and right['start']<left['endExclusive']


def owners(composed,part):
    return [r['address'] for r in composed['functions'] if any(overlap(p,part) for p in r['ranges'])]


def cfg(entry,instructions):
    from capstone.arm_const import ARM_INS_B,ARM_INS_BL,ARM_INS_BLX,ARM_INS_BX,ARM_OP_IMM,ARM_OP_REG,ARM_REG_PC,ARM_CC_AL
    pending=[entry]
    visited=set()
    calls=[]
    boundaries=[]
    while pending:
        pc=pending.pop()
        if pc in visited:
            continue
        require(pc in instructions,'Particle CFG entered undeclared instruction or literal data')
        visited.add(pc)
        ins=instructions[pc]
        conditional=ins.cc!=ARM_CC_AL
        following=True
        if ins.id in [ARM_INS_BL,ARM_INS_BLX]:
            if ins.operands[0].type==ARM_OP_IMM:
                calls.append((pc,ins.operands[0].imm))
        elif ins.id==ARM_INS_B:
            require(ins.operands[0].type==ARM_OP_IMM,'Particle immediate branch operand differs')
            target=ins.operands[0].imm
            if target in instructions:
                pending.append(target)
            else:
                boundaries.append(dict(pc=pc,target=target,kind='tail-or-return',operands=ins.op_str))
            following=conditional
        elif ins.id==ARM_INS_BX:
            boundaries.append(dict(pc=pc,target=None,kind='tail-or-return',operands=ins.op_str))
            following=conditional
        elif ins.mnemonic.startswith(('pop','ldm')) and any(o.type==ARM_OP_REG and o.reg==ARM_REG_PC for o in ins.operands):
            boundaries.append(dict(pc=pc,kind='return',operands=ins.op_str))
            following=conditional
        if following:
            target=pc+4
            if target in instructions:
                pending.append(target)
            else:
                boundaries.append(dict(pc=pc,target=target,kind='external-fallthrough'))
    require(visited==set(instructions),'Particle declared body contains unreachable or unreviewed instruction positions')
    return sorted(calls),sorted(boundaries,key=lambda r:r['pc'])


def validate(base,composed,witness,image):
    from capstone.arm_const import ARM_OP_MEM,ARM_REG_PC,ARM_OP_IMM,ARM_INS_BL,ARM_INS_BLX,ARM_INS_B
    identity=witness['canonicalIdentity']
    require(legacy.sha(image)==base['codeSha256']==identity['moduleSha256'] and identity['programId']=='0004000e001acb00'
        and identity['loadAddress']==0x100000 and identity['mode']=='ARM','Particle original module identity differs')
    require(witness['sourceCreditGranted']==0 and witness['inventoryAdmissionGranted'] is False
        and witness['nativeTextDenominatorChanged'] is False and witness['denominatorComplete'] is False
        and witness['currentCanonicalFunctionCount']==26659 and witness['proposedCallableEntries']==10
        and witness['proposedInstructionOwnershipBytes']==2924 and witness['alreadyDefinedExcludedLiteralBytes']==72
        and witness['instructionClassificationBytesAdded']==0 and witness['dataClassificationBytesAdded']==0
        and witness['unclassifiedBytesRemoved']==0 and witness['existingCanonicalFunctionOwnersModified']==0,
        'Particle ownership-only proposal accounting differs')
    rows=witness['proposedFunctions']
    require(len(rows)==10 and {r['canonicalIdentity']['address'] for r in rows}==set(EXTENTS), 'Particle entry roster differs')
    current={r['address']:r for r in composed['functions']}
    require(len(current)==len(composed['functions']) and not set(EXTENTS)&current.keys(), 'Particle entry is already owned or canonical identities overlap')
    segments=[]
    added=[]
    for row in rows:
        entry=row['canonicalIdentity']['address']
        require(row['canonicalIdentity']==dict(programId=identity['programId'],moduleSha256=identity['moduleSha256'],address=entry,mode='ARM')
            and row['name']==f'fn_{entry:08x}' and row['currentCanonicalOwnership']==[], 'Particle callable identity differs')
        expected,pools=EXTENTS[entry]
        require([(p['start'],p['endExclusive']) for p in row['instructionRanges']]==expected
            and sorted(p['start'] for p in row['excludedLiteralPools'])==pools
            and all(p['bytes']==4 and p['endExclusive']==p['start']+4 for p in row['excludedLiteralPools']), 'Particle complete instruction or literal extents differ')
        instructions={}
        for part in row['instructionRanges']+row['excludedLiteralPools']:
            span(image,0x100000,part)
            require(not owners(composed,part), 'Particle new code or literal pool overlaps a canonical owner')
            segments.append(part)
        for part in row['instructionRanges']:
            require(any(p['start']<=part['start']<part['endExclusive']<=p['endExclusive'] for p in base['instructionRanges']), 'Particle proposed code was not already classified as instructions')
            instructions.update({i.address:i for i in decode(image,0x100000,part['start'],part['bytes'])})
        for part in row['excludedLiteralPools']:
            require(any(p['start']<=part['start']<part['endExclusive']<=p['endExclusive'] for p in base['definedDataRanges']), 'Particle literal was not already classified as data')
        calls,boundaries=cfg(entry,instructions)
        require(boundaries==sorted(row['allStaticBoundaries'],key=lambda r:r['pc']), 'Particle return, tail or fallthrough boundary differs')
        direct=sorted((r['pc'],r['target']) for r in row['staticCallsAndTails'] if r.get('kind') is None)
        require(calls==direct, 'Particle direct call roster differs')
        require(sorted((r['pc'],r['target']) for r in row['staticCallsAndTails'] if r.get('kind') is not None)
            ==sorted((r['pc'],r['target']) for r in boundaries if r.get('target') is not None), 'Particle external tail roster differs')
        actual_readers=[]
        for ins in instructions.values():
            for operand in ins.operands:
                if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                    actual_readers.append(dict(pc=ins.address,literalAddress=ins.address+8+operand.mem.disp,bytes=4,instructionSha256=legacy.sha(bytes(ins.bytes))))
        require(sorted(actual_readers,key=lambda r:r['pc'])==sorted(row['literalReaders'],key=lambda r:r['pc'])
            and {r['literalAddress'] for r in actual_readers}==set(pools), 'Particle literal-reader closure differs')
        require(row['independentEntryWitnesses'], 'Particle actual original entry transfer is absent')
        for event in row['independentEntryWitnesses']:
            transfer=event['actualTransfer']
            require(event['entry']==entry and transfer['target']==entry and transfer['pc']==event['previousPc']
                and transfer['mode']=='ARM' and transfer['bytes']==4 and event['args']==transfer['argsBefore']
                and event['entrySp']==transfer['spBefore'], 'Particle original transfer state differs')
            ins=decode(image,0x100000,transfer['pc'],4)[0]
            require(legacy.sha(bytes(ins.bytes))==transfer['sha256'], 'Particle actual caller instruction differs')
            if transfer['kind']=='BLX-register':
                require(ins.id==ARM_INS_BLX and ins.op_str in [f"r{transfer['register']}",{12:'ip',14:'lr'}.get(transfer['register'])]
                    and event['caller']==ins.address+4, 'Particle original register call differs')
            else:
                require(ins.id in [ARM_INS_BL,ARM_INS_B] and ins.operands[0].type==ARM_OP_IMM
                    and ins.operands[0].imm==entry and transfer['kind'] in ['BL-immediate','B-immediate'], 'Particle original immediate call/tail differs')
        size=sum(p['bytes'] for p in row['instructionRanges'])
        require(size==row['instructionBytes'] and sum(p['bytes'] for p in row['excludedLiteralPools'])==row['literalBytes'], 'Particle function byte accounting differs')
        expected_row=dict(address=entry,mode='ARM',ranges=[{k:p[k] for k in ['start','endExclusive','bytes']} for p in row['instructionRanges']],
            textBodyBytes=size,bodyBytesOutsideInitializedText=0,entryInstructionDefined=True,isThunk=entry==0x53c7bc,
            calledFunctionAddresses=sorted({target for pc,target in calls}),acceptedSourceBytes=0,
            boundaryStatus='proposal-unowned-normal-route-callable-complete-static-instruction-and-pool-extents')
        require(expected_row==row['proposedInventoryRow'] and row['isThunk']==expected_row['isThunk'], 'Particle proposed canonical row differs')
        added.append(dict(expected_row,boundaryStatus='reviewed-particle-callable-with-complete-instruction-literal-and-transfer-witnesses'))
    ordered=sorted(segments,key=lambda p:p['start'])
    require(all(a['endExclusive']<=b['start'] for a,b in zip(ordered,ordered[1:])), 'Particle proposed instruction/data spans overlap')
    owned=literal=0
    require(len(witness['byteConservingPartitions'])==12, 'Particle partition roster differs')
    require(len({(p['before']['start'],p['before']['endExclusive']) for p in witness['byteConservingPartitions']})==12, 'Particle partition before ranges duplicate')
    for partition in witness['byteConservingPartitions']:
        before=partition['before']
        span(image,0x100000,before)
        category=partition['existingClassification']
        original=base['instructionRanges'] if category=='existing-defined-instructions' else base['definedDataRanges'] if category=='existing-defined-data' else []
        require(any(p['start']==before['start'] and p['endExclusive']==before['endExclusive'] for p in original), 'Particle prior classification extent differs')
        pieces=partition['after']
        require(pieces and pieces[0]['start']==before['start'] and pieces[-1]['endExclusive']==before['endExclusive']
            and all(a['endExclusive']==b['start'] for a,b in zip(pieces,pieces[1:])), 'Particle partition has a gap or overlap')
        for part in pieces:
            span(image,0x100000,part)
            require(part['existingClassification']==partition['existingClassification'], 'Particle existing code/data classification changed')
            if part['role']=='proposed-callable-instructions':
                require(part['proposedOwner'] in EXTENTS and not owners(composed,part), 'Particle partition claims existing ownership')
                require(category=='existing-defined-instructions' and any(low<=part['start']<part['endExclusive']<=high for low,high in EXTENTS[part['proposedOwner']][0]), 'Particle instruction partition does not belong to its declared callable')
                owned+=part['bytes']
            elif part['role']=='already-defined-excluded-literal-data':
                require(part['proposedOwner'] is None and not owners(composed,part), 'Particle literal partition gains instruction ownership')
                require(category=='existing-defined-data' and any(address<=part['start']<part['endExclusive']<=address+4 for ranges,pools in EXTENTS.values() for address in pools), 'Particle literal partition escapes excluded data')
                literal+=part['bytes']
            else:
                require(part['role']=='unchanged-context', 'Particle partition role differs')
                require({r['entry'] for r in part['priorCanonicalOwners']}==set(owners(composed,part)), 'Particle unchanged context ownership differs')
        require(partition['byteConserving'] and legacy.sha(b''.join(image[p['start']-0x100000:p['endExclusive']-0x100000] for p in pieces))
            ==before['sha256']==partition['concatenatedAfterSha256'], 'Particle partition changes original bytes')
    require((owned,literal)==(2924,72), 'Particle partition ownership totals differ')
    result=dict(composed)
    result['functions']=sorted([*composed['functions'],*added],key=lambda r:r['address'])
    result['functionCount']=len(result['functions'])
    require(result['functionCount']==composed['functionCount']+10 and sum(r['textBodyBytes'] for r in added)==2924
        and result['initializedTextGrossBytes']==7051280, 'Particle final callable ownership or denominator differs')
    return result


def compose(root,base):
    root=Path(root)
    result,references=predecessor.compose(root,base)
    if not (root/CONFIG).exists():
        return result,references
    config=json.loads((root/CONFIG).read_bytes())
    require(config['schemaVersion']==1 and config['moduleSha256']==base['codeSha256']
        and legacy.checked(root,config['baseCensus'])==base and len(config['overlays'])==1,'Particle registry differs')
    entry=config['overlays'][0]
    witness,review=legacy.checked(root,entry['packet']),legacy.checked(root,entry['coordinatorReview'])
    require(entry['approvedForFunctionInventory'] is True and entry['sourceCreditGranted']==0
        and review['overlay']==entry['packet'] and review['addedDiscoveredEntries']==10
        and review['resultingDiscoveredEntries']==result['functionCount']+10 and review['sourceCreditGranted']==0
        and review['moduleSha256']==base['codeSha256'],
        'Particle coordinator approval differs')
    for row in [entry['referenceProducer'],review['producer'],review['validator']]:
        legacy.checked_file(root,row)
    result=validate(base,result,witness,(root/'generated/update-content0/code.bin').read_bytes())
    result['supplementalInventory']=[*references,entry['packet']]
    result['historicalFunctionCompletenessClaim']=False
    return result,result['supplementalInventory']
