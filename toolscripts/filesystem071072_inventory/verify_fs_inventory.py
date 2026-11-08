import copy
import hashlib
import json
import sys
from pathlib import Path

sys.dont_write_bytecode=True
HERE=Path(__file__).resolve().parent
ROOT=HERE.parents[1]


def require(value,message):
    if not value:
        raise ValueError(message)


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def validate(proposal,dynamic):
    accounting=proposal['byteAccounting']
    require(accounting['beforeDiscoveredEntries']==26673 and accounting['proposedDiscoveredEntries']==26676 and accounting['discoveryDelta']==3,'Discovery accounting')
    require(accounting['instructionOwnershipNetDelta']==84 and accounting['reparentedAliasInstructionBytes']==204,'Reparent versus added instruction accounting')
    require(accounting['excludedLiteralPoolBytes']==20 and accounting['candidateInstructionBytes']==288,'Excluded literal/code totals')
    require(accounting['grossInitializedTextBytes']==7051280 and accounting['grossDenominatorDelta']==0,'Gross executable denominator changed')
    require(accounting['before']['bodyUnionBytes']==5942845 and accounting['after']['bodyUnionBytes']==5942929,'Whole callable union changed')
    require(accounting['before']['overlapBytes']==accounting['after']['overlapBytes']==0,'Callable ownership overlap')
    retained=proposal['proposedRetainedOwner']
    require(retained['ranges']==[dict(start=0x117378,endExclusive=0x1173e4,bytes=108)] and retained['textBodyBytes']==108,'Retained old caller extent')
    require(set(retained['calledFunctionAddresses'])=={0x123070,0x123114,0x12336c,0x2fecec},'Retained caller dependency ownership')
    added={row['address']:row for row in proposal['proposedAddedRows']}
    require(set(added)=={0x44da8c,0x123114,0x44df60},'Three exact new identities')
    for entry,size in ((0x44da8c,20),(0x123114,204),(0x44df60,64)):
        row=added[entry]
        require(row['mode']=='ARM' and row['ranges']==[dict(start=entry,endExclusive=entry+size,bytes=size)] and row['textBodyBytes']==size,'Exact proposed ARM instruction extent')
        require(row['acceptedSourceBytes']==0,'Source credit in inventory proposal')
    require(added[0x44df60]['entryInstructionDefined'] is False,'Originally unclassified stream entry misreported')
    expected={'defined-instruction':(6253782,20),'defined-data':(382573,0),'unclassified':(414925,64)}
    for key,(count,delta) in expected.items():
        row=proposal['originalClassificationCrossTable'][key]
        require(row['originalBytes']==count and row['ownershipDelta']==delta and row['afterOwned']-row['beforeOwned']==delta,'Original classification/ownership distinction')
    require(proposal['sourceCreditGranted']==0 and proposal['canonicalAdmissionPerformed'] is False and proposal['functionalAdmissionPerformed'] is False,'Unapproved source/function admission')
    require(dynamic['observedPositions']=={'0x44da8c':5,'0x123114':51,'0x44df60':12,'0x117378':9},'Actual observed instruction positions')
    require(dynamic['unvisitedPositions']['0x44df60']==[0x44df90,0x44df94,0x44df98,0x44df9c],'Unvisited stream failure positions dropped')
    require(len(dynamic['unvisitedPositions']['0x117378'])==18,'Unvisited old caller positions dropped')
    require(dynamic['oldCallerTail']['restoredSpLrAndSavedRegisters'] and dynamic['oldCallerTail']['source']==0x1173e0 and dynamic['oldCallerTail']['target']==0x123114,'Restored-frame original tail transfer')
    require(any(edge['source']==0x101a2e and edge['sourceMode']=='Thumb' and edge['target']==0x44da8c and edge['targetMode']=='ARM' for edge in dynamic['genuineIncomingEdges']),'Actual Thumb-to-ARM constructor transfer')


def main():
    from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM,CS_MODE_THUMB
    from capstone.arm import ARM_INS_B,ARM_INS_BL,ARM_INS_BLX,ARM_OP_IMM,ARM_OP_REG
    from unicorn import arm_const as arm
    proposal=json.loads((HERE/'inventory-proposal-v1.json').read_text())
    contract=json.loads((HERE/'contract-v1.json').read_text())
    image=(ROOT/contract['originalImage']['path']).read_bytes()
    require(hashlib.sha256(image).hexdigest()==contract['moduleSha256'],'Original image identity')
    reports=[json.loads((HERE/('original-'+name+'-v1/inventory-observation-v1.json')).read_text()) for name in ('holes','bytes','normal-caller')]
    observed={}
    edges={}
    for report in reports:
        require(report['cpuModel']==arm.UC_CPU_ARM_11MPCORE and report['originalCodeOrDataPatched'] is False,'ARM11 unchanged reference profile')
        for witness in report['instructionWitnesses']:
            pc=witness['pc']
            require(witness['mode']=='ARM' and witness['bytes']==4 and witness['sha256']==hashlib.sha256(image[pc-0x100000:pc-0x100000+4]).hexdigest(),'Original witness hash/mode')
            observed[pc]=witness
        for event in report['events']:
            previous=event['previous']
            if event['pc'] not in (0x44da8c,0x123114,0x44df60) or not previous or not previous['originalTextAddress']:
                continue
            source=previous['pc']
            decoder=Cs(CS_ARCH_ARM,CS_MODE_THUMB if previous['mode']=='Thumb' else CS_MODE_ARM)
            decoder.detail=True
            raw=image[source-0x100000:source-0x100000+previous['bytes']]
            require(hashlib.sha256(raw).hexdigest()==previous['instructionSha256'],'Incoming original instruction hash')
            instruction=next(decoder.disasm(raw,source))
            require(instruction.id in (ARM_INS_B,ARM_INS_BL,ARM_INS_BLX),'Original incoming is not a qualified transfer')
            operand=instruction.operands[0]
            target=operand.imm if operand.type==ARM_OP_IMM else previous['registers'][instruction.reg_name(operand.reg)] if operand.type==ARM_OP_REG else None
            require(target==event['pc'],'Actual incoming target disagrees with original instruction and register state')
            edges[(source,event['pc'])]=dict(source=source,sourceMode=previous['mode'],sourceBytes=previous['bytes'],
                target=event['pc'],targetMode=event['mode'],kind=instruction.mnemonic,returnAddress=event['registers']['lr'],instructionSha256=previous['instructionSha256'])
    normal=reports[-1]
    events=normal['events']
    initial=next(e for e in events if e['pc']==0x117378)
    before=next(e for e in events if e['pc']==0x1173d8)
    restored=next(e for e in events if e['pc']==0x1173dc)
    branch=next(e for e in events if e['pc']==0x1173e0)
    alias=next(e for e in events if e['pc']==0x123114 and e['previous']['pc']==0x1173e0)
    preserved=['sp','lr',*['r'+str(i) for i in range(4,12)]]
    restored_ok=all(initial['registers'][key]==restored['registers'][key]==branch['registers'][key]==alias['registers'][key] for key in preserved)
    require(before['registers']['sp']+8==restored['registers']['sp'],'Original pop frame size')
    require(branch['registers']['r0']==alias['registers']['r0']==0x1173e8 and branch['registers']['r1']==alias['registers']['r1']==0x1173f0,'Original PC-relative alias arguments')
    positions={}
    unseen={}
    for candidate in proposal['candidates']:
        entry=candidate['entry']
        wanted={pc for part in candidate['instructionRanges'] for pc in range(part['start'],part['endExclusive'],4)}
        positions[hex(entry)]=len(wanted&set(observed))
        unseen[hex(entry)]=sorted(wanted-set(observed))
    dynamic=dict(status='actual-original-mixed-mode-incoming-and-restored-frame-tail-qualified',observedPositions=positions,
        unvisitedPositions=unseen,genuineIncomingEdges=sorted(edges.values(),key=lambda r:(r['source'],r['target'])),
        oldCallerTail=dict(source=0x1173e0,target=0x123114,restoredSpLrAndSavedRegisters=restored_ok,
            sourceInstructionSha256=hashlib.sha256(image[0x1173e0-0x100000:0x1173e4-0x100000]).hexdigest(),
            callerNullArgumentProfile=True,normalCallerReturnBits=normal['outcome']['resultBits'],higherGameCallerQualified=False),
        explicitEnvironment='Frozen original filesystem/SDK/kernel/IPC reference harness; actual ARM11 model, caller fixtures and modeled services; no physical filesystem/kernel claim',
        sourceCreditGranted=0,canonicalAdmissionPerformed=False)
    validate(proposal,dynamic)
    controls=[]
    for name in ('keep-alias-in-old-owner','truncate-old-caller','count-pools-as-instructions','wrong-instruction-delta','mark-original-stream-defined',
            'drop-unvisited-failure','wrong-constructor-state','mark-admitted','wrong-source-credit'):
        changed=copy.deepcopy(proposal)
        changed_dynamic=copy.deepcopy(dynamic)
        if name=='keep-alias-in-old-owner': changed['proposedRetainedOwner']=copy.deepcopy(changed['oldOwner'])
        if name=='truncate-old-caller': changed['proposedRetainedOwner']['ranges'][0]['endExclusive']-=4
        if name=='count-pools-as-instructions': changed['proposedAddedRows'][1]['textBodyBytes']+=8
        if name=='wrong-instruction-delta': changed['byteAccounting']['instructionOwnershipNetDelta']=288
        if name=='mark-original-stream-defined': changed['proposedAddedRows'][2]['entryInstructionDefined']=True
        if name=='drop-unvisited-failure': changed_dynamic['unvisitedPositions']['0x44df60']=[]
        if name=='wrong-constructor-state':
            for edge in changed_dynamic['genuineIncomingEdges']:
                if edge['source']==0x101a2e: edge['sourceMode']='ARM'
        if name=='mark-admitted': changed['canonicalAdmissionPerformed']=True
        if name=='wrong-source-credit': changed['sourceCreditGranted']=288
        reason=None
        try: validate(changed,changed_dynamic)
        except ValueError as error: reason=str(error)
        require(reason is not None,'Returning invalid repair proposal accepted')
        controls.append(dict(name=name,returnedNormally=True,rejected=True,reason=reason))
    dynamic['privateObservationReferences']=[pin(HERE/('original-'+name+'-v1/inventory-observation-v1.json')) for name in ('holes','bytes','normal-caller')]
    (HERE/'dynamic-proof-v1.json').write_text(json.dumps(dynamic,indent=2)+'\n')
    (HERE/'returning-controls-v1.json').write_text(json.dumps(dict(status='all-nine-returning-inventory-metadata-controls-rejected',controls=controls,
        originalCodePatched=False,sourceCreditGranted=0),indent=2)+'\n')
    print(json.dumps(dict(observed=positions,unvisited=unseen,genuineIncomingEdges=len(edges),returningControls=len(controls),restoredOriginalTail=restored_ok)))


if __name__=='__main__':
    main()
