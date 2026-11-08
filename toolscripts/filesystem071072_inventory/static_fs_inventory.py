import hashlib
import json
import struct
import sys
from pathlib import Path

sys.dont_write_bytecode=True
HERE=Path(__file__).resolve().parent
ROOT=HERE.parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
from capstone import Cs,CS_ARCH_ARM,CS_MODE_ARM
from capstone.arm import ARM_OP_MEM,ARM_REG_PC


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=sha(raw))


def require(value,message):
    if not value:
        raise ValueError(message)


def span(image,low,high):
    return dict(start=low,endExclusive=high,bytes=high-low,sha256=sha(image[low-0x100000:high-0x100000]))


def union(parts):
    rows=[]
    for low,high in sorted(parts):
        if rows and low<=rows[-1][1]:
            rows[-1][1]=max(high,rows[-1][1])
        else:
            rows.append([low,high])
    return rows


def measure(rows):
    parts=[(part['start'],part['endExclusive']) for row in rows for part in row['ranges']]
    joined=union(parts)
    return dict(sumBodyBytes=sum(high-low for low,high in parts),bodyUnionBytes=sum(high-low for low,high in joined),
        overlapBytes=sum(high-low for low,high in parts)-sum(high-low for low,high in joined))


def intersection(left,right):
    first=second=total=0
    while first<len(left) and second<len(right):
        a,b=left[first]
        c,d=right[second]
        total+=max(0,min(b,d)-max(a,c))
        if b<=d: first+=1
        else: second+=1
    return total


def main():
    contract=json.loads((HERE/'contract-v1.json').read_text())
    for row in contract['compositorSources']+contract['configurations']:
        require(pin(ROOT/row['path'])==row,'Frozen compositor/configuration changed')
    import native_particle_inventory
    base=json.loads((ROOT/contract['seededCensus']['path']).read_text())
    canonical,unused=native_particle_inventory.compose(ROOT,base)
    require(canonical['functionCount']==26673,'Frozen discovered count changed')
    entries={row['address']:row for row in canonical['functions']}
    require(entries[0x117378]==contract['oldOwner'],'Historical owner changed')
    image=(ROOT/contract['originalImage']['path']).read_bytes()
    require(sha(image)==contract['moduleSha256'],'Original image changed')
    decoder=Cs(CS_ARCH_ARM,CS_MODE_ARM)
    decoder.detail=True
    categories=[('instructionRanges','defined-instruction'),('definedDataRanges','defined-data'),('unclassifiedTextRanges','unclassified')]
    def classification(low,high):
        result={label:sum(max(0,min(high,part['endExclusive'])-max(low,part['start'])) for part in base[key]) for key,label in categories}
        require(sum(result.values())==high-low,'Original byte classification leaves a gap or overlap')
        return result
    candidates=[]
    all_views=[*contract['candidates'],dict(entry=0x117378,mode='ARM',instructionRanges=[span(image,0x117378,0x1173e4)],literalPoolRanges=[])]
    for candidate in all_views:
        entry=candidate['entry']
        parts=candidate['instructionRanges']
        instructions={}
        literals=[]
        for part in parts:
            require({key:span(image,part['start'],part['endExclusive'])[key] for key in part}==part,'Body extent/hash changed')
            for instruction in decoder.disasm(image[part['start']-0x100000:part['endExclusive']-0x100000],part['start']):
                require(instruction.size==4,'Unexpected candidate instruction width')
                instructions[instruction.address]=instruction
                for operand in instruction.operands:
                    if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                        target=instruction.address+8+operand.mem.disp
                        literals.append(dict(reader=instruction.address,literalAddress=target,value=struct.unpack_from('<I',image,target-0x100000)[0],
                            readerSha256=sha(instruction.bytes),literalSha256=sha(image[target-0x100000:target-0x100000+4]),
                            poolOwner='retained-caller-external-literal' if entry==0x117378 else 'candidate-excluded-literal'))
        calls,boundaries=native_particle_inventory.cfg(entry,instructions)
        actual_pools=candidate['literalPoolRanges']
        if entry!=0x117378:
            expected_literals={address for pool in actual_pools for address in range(pool['start'],pool['endExclusive'],4)}
            require({row['literalAddress'] for row in literals}==expected_literals,'Literal-use closure differs')
        coverage=[]
        for part in [*parts,*actual_pools]:
            require(span(image,part['start'],part['endExclusive'])==part,'Code/pool identity differs')
            overlap=[dict(entry=row['address'],intersection=span(image,max(part['start'],p['start']),min(part['endExclusive'],p['endExclusive'])))
                for row in canonical['functions'] for p in row['ranges'] if p['start']<part['endExclusive'] and part['start']<p['endExclusive']]
            coverage.append(dict(part=part,originalClassification=classification(part['start'],part['endExclusive']),existingOverlaps=overlap))
        candidates.append(dict(entry=entry,mode='ARM',instructionRanges=parts,literalPoolRanges=actual_pools,
            literalReaders=literals,completeStaticCfg=True,
            calls=[dict(pc=site,target=target,exactCanonicalEntry=target in entries) for site,target in calls],boundaries=boundaries,
            classificationsAndOverlaps=coverage,instructions=[dict(pc=pc,mnemonic=ins.mnemonic,operands=ins.op_str,sha256=sha(ins.bytes)) for pc,ins in sorted(instructions.items())]))
    preserved=dict(contract['oldOwner'],ranges=[dict(start=0x117378,endExclusive=0x1173e4,bytes=108)],textBodyBytes=108,
        calledFunctionAddresses=[0x123070,0x123114,0x12336c,0x2fecec],boundaryStatus='proposed-retained-caller-with-restored-frame-alias-tail')
    added=[]
    for row in candidates[:3]:
        require(row['entry'] not in entries,'Candidate already exact')
        added.append(dict(address=row['entry'],mode='ARM',ranges=[{key:part[key] for key in ('start','endExclusive','bytes')} for part in row['instructionRanges']],
            textBodyBytes=sum(part['bytes'] for part in row['instructionRanges']),bodyBytesOutsideInitializedText=0,
            entryInstructionDefined=classification(row['entry'],row['entry']+4)['defined-instruction']==4,
            isThunk=False,calledFunctionAddresses=sorted({call['target'] for call in row['calls']}|{b['target'] for b in row['boundaries'] if isinstance(b.get('target'),int)}),
            acceptedSourceBytes=0,boundaryStatus='proposal-original-backed-filesystem-entry-no-source-admission'))
    proposed=[preserved if row['address']==0x117378 else row for row in canonical['functions']]+added
    before,after=measure(canonical['functions']),measure(proposed)
    require(before['overlapBytes']==after['overlapBytes']==0,'Existing or proposed callable overlap')
    require(after['bodyUnionBytes']-before['bodyUnionBytes']==84 and len(proposed)-len(canonical['functions'])==3,'Measured ownership/discovery delta differs')
    pools=sum(part['bytes'] for row in candidates[:3] for part in row['literalPoolRanges'])
    require(pools==20 and sum(row['textBodyBytes'] for row in added)==288,'Candidate instruction/pool totals differ')
    accounting=dict(beforeDiscoveredEntries=len(canonical['functions']),proposedDiscoveredEntries=len(proposed),discoveryDelta=3,
        before=before,after=after,instructionOwnershipNetDelta=after['bodyUnionBytes']-before['bodyUnionBytes'],
        oldOwnerInstructionBytes=312,retainedOldOwnerInstructionBytes=108,reparentedAliasInstructionBytes=204,
        candidateInstructionBytes=288,previouslyUnownedInstructionBytes=84,excludedLiteralPoolBytes=20,
        grossInitializedTextBytes=canonical['initializedTextGrossBytes'],grossDenominatorDelta=0,sourceCreditGranted=0)
    before_union=union([(p['start'],p['endExclusive']) for r in canonical['functions'] for p in r['ranges']])
    after_union=union([(p['start'],p['endExclusive']) for r in proposed for p in r['ranges']])
    cross={}
    for key,label in categories:
        ranges=union([(part['start'],part['endExclusive']) for part in base[key]])
        total=sum(high-low for low,high in ranges)
        old_inside=intersection(before_union,ranges)
        new_inside=intersection(after_union,ranges)
        cross[label]=dict(originalBytes=total,beforeOwned=old_inside,afterOwned=new_inside,
            beforeOutside=total-old_inside,afterOutside=total-new_inside,ownershipDelta=new_inside-old_inside)
    require(sum(row['originalBytes'] for row in cross.values())==7051280,'Full original classification does not conserve gross text')
    require({key:row['ownershipDelta'] for key,row in cross.items()}=={'defined-instruction':20,'defined-data':0,'unclassified':64},'Original classification ownership deltas differ')
    result=dict(status='proposed-three-entry-byte-conserving-filesystem-ownership-repair',programId=contract['programId'],moduleSha256=sha(image),
        canonicalPredecessor='native_particle_inventory.compose',frozenBeforeDiscoveredEntries=26673,oldOwner=contract['oldOwner'],
        proposedRetainedOwner=preserved,proposedAddedRows=added,candidates=candidates,byteAccounting=accounting,originalClassificationCrossTable=cross,
        canonicalAdmissionPerformed=False,functionalAdmissionPerformed=False,sourceCreditGranted=0,
        limits=['Static complete CFG does not imply all branches were dynamically visited',
            'Stream-allocation failure and SVC23 close path remain unvisited unless separately qualified',
            'Old caller null branch is observed; non-null allocation/setup branch remains outside the dynamic contract'])
    (HERE/'inventory-proposal-v1.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(accounting))


if __name__=='__main__':
    main()
