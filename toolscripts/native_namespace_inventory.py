import json
from pathlib import Path

from capstone import Cs,CS_ARCH_ARM,CS_MODE_THUMB
from capstone.arm_const import ARM_OP_MEM,ARM_REG_PC
import native_particle_inventory as predecessor
from native_sdk_inventory import decode,span,word

legacy=predecessor.legacy
CONFIG='config/native-namespace-overlays.json'
EXTENTS={0x44da8c:(20,0),0x123114:(204,8),0x44df60:(64,12)}
CLASSES={'instructionRanges':'defined-instruction','definedDataRanges':'defined-data','unclassifiedTextRanges':'unclassified'}


def require(value,reason):
    if not value:
        raise ValueError(reason)


def union(rows):
    result=[]
    for low,high in sorted(rows):
        if result and low<=result[-1][1]:
            result[-1]=(result[-1][0],max(high,result[-1][1]))
        else:
            result.append((low,high))
    return result


def intersection(a,b):
    i=j=total=0
    while i<len(a) and j<len(b):
        total+=max(0,min(a[i][1],b[j][1])-max(a[i][0],b[j][0]))
        if a[i][1]<b[j][1]:i+=1
        else:j+=1
    return total


def ranges(rows):
    return [(p['start'],p['endExclusive'])for r in rows for p in r['ranges']]


def validate(base,current,witness,dynamic,image):
    origin=0x100000
    require(legacy.sha(image)==base['codeSha256']==witness['moduleSha256']
        and witness['programId']=='0004000e001acb00','Namespace original identity differs')
    require(current['functionCount']==witness['frozenBeforeDiscoveredEntries']==26673
        and witness['canonicalPredecessor']=='native_particle_inventory.compose',
        'Namespace predecessor differs')
    require(witness['sourceCreditGranted']==0 and witness['canonicalAdmissionPerformed'] is False
        and witness['functionalAdmissionPerformed'] is False and dynamic['sourceCreditGranted']==0
        and dynamic['canonicalAdmissionPerformed'] is False,'Namespace proposal claims admission')
    old={r['address']:r for r in current['functions']}
    require(len(old)==len(current['functions']) and all(a not in old for a in EXTENTS),
        'Namespace entries duplicated or already owned')
    owner=old[0x117378]
    require(owner==witness['oldOwner'] and owner.get('acceptedSourceBytes',0)==0
        and owner['textBodyBytes']==312 and owner['ranges']==[
            dict(start=0x117378,endExclusive=0x1173e4,bytes=108),
            dict(start=0x123114,endExclusive=0x1231e0,bytes=204)],'Namespace historical owner differs')
    views=witness['candidates']
    require([r['entry']for r in views]==[0x44da8c,0x123114,0x44df60,0x117378],
        'Namespace complete code views differ')
    derived={}
    for view in views:
        entry=view['entry']
        size,pool=(108,0)if entry==0x117378 else EXTENTS[entry]
        require(view['mode']=='ARM' and view['completeStaticCfg'] is True
            and view['instructionRanges']==[dict(start=entry,endExclusive=entry+size,bytes=size,
                sha256=legacy.sha(image[entry-origin:entry-origin+size]))], 'Namespace instruction extent differs')
        expected_pool=[]if not pool else[dict(start=entry+size,endExclusive=entry+size+pool,bytes=pool,
            sha256=legacy.sha(image[entry-origin+size:entry-origin+size+pool]))]
        require(view['literalPoolRanges']==expected_pool,'Namespace literal extent differs')
        body=decode(image,origin,entry,size)
        require(len(body)*4==size,'Namespace decoder left bytes unresolved')
        instructions={i.address:i for i in body}
        require(view['instructions']==[dict(pc=i.address,mnemonic=i.mnemonic,operands=i.op_str,
            sha256=legacy.sha(i.bytes))for i in body],'Namespace decoded instructions changed')
        calls,boundaries=predecessor.cfg(entry,instructions)
        require(view['calls']==[dict(pc=pc,target=target,exactCanonicalEntry=target in old)for pc,target in calls]
            and view['boundaries']==boundaries,'Namespace CFG, calls or returns differ')
        readers=[]
        for ins in body:
            for operand in ins.operands:
                if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                    address=ins.address+8+operand.mem.disp
                    readers.append(dict(reader=ins.address,literalAddress=address,value=word(image,origin,address),
                        readerSha256=legacy.sha(ins.bytes),literalSha256=legacy.sha(image[address-origin:address-origin+4]),
                        poolOwner='retained-caller-external-literal'if entry==0x117378 else'candidate-excluded-literal'))
        require(readers==view['literalReaders'],'Namespace literal readers differ')
        if entry!=0x117378:
            require({r['literalAddress']for r in readers}==set(range(entry+size,entry+size+pool,4)),
                'Namespace complete literal-use closure differs')
        coverage=[]
        for part in view['instructionRanges']+expected_pool:
            span(image,origin,part)
            classes={label:sum(max(0,min(part['endExclusive'],p['endExclusive'])-max(part['start'],p['start']))
                for p in base[key])for key,label in CLASSES.items()}
            require(sum(classes.values())==part['bytes'],'Namespace original classification has gaps or overlaps')
            overlaps=[dict(entry=r['address'],intersection=dict(start=max(part['start'],p['start']),
                endExclusive=min(part['endExclusive'],p['endExclusive']),bytes=min(part['endExclusive'],p['endExclusive'])-max(part['start'],p['start']),
                sha256=legacy.sha(image[max(part['start'],p['start'])-origin:min(part['endExclusive'],p['endExclusive'])-origin])))
                for r in current['functions']for p in r['ranges']if p['start']<part['endExclusive']and part['start']<p['endExclusive']]
            coverage.append(dict(part=part,originalClassification=classes,existingOverlaps=overlaps))
        require(coverage==view['classificationsAndOverlaps'],'Namespace prior classifications or ownership differ')
        if entry!=0x117378:
            require({r['entry']for p in coverage for r in p['existingOverlaps']}==({0x117378}if entry==0x123114 else set()),
                'Namespace repair overlaps another owner')
            derived[entry]=dict(address=entry,mode='ARM',ranges=[dict(start=entry,endExclusive=entry+size,bytes=size)],
                textBodyBytes=size,bodyBytesOutsideInitializedText=0,
                entryInstructionDefined=coverage[0]['originalClassification']['defined-instruction']>=4
                    and any(p['start']<=entry and entry+4<=p['endExclusive']for p in base['instructionRanges']),
                isThunk=False,calledFunctionAddresses=sorted({target for pc,target in calls}|
                    {b['target']for b in boundaries if isinstance(b.get('target'),int)}),acceptedSourceBytes=0,
                boundaryStatus='proposal-original-backed-filesystem-entry-no-source-admission')
    require(witness['proposedAddedRows']==[derived[a]for a in [0x44da8c,0x123114,0x44df60]],
        'Namespace new canonical rows differ')
    retained=dict(owner,ranges=[dict(start=0x117378,endExclusive=0x1173e4,bytes=108)],textBodyBytes=108,
        calledFunctionAddresses=[0x123070,0x123114,0x12336c,0x2fecec],
        boundaryStatus='proposed-retained-caller-with-restored-frame-alias-tail')
    require(witness['proposedRetainedOwner']==retained,'Namespace retained caller changed')
    tail=decode(image,origin,0x1173d8,12)
    require([(i.mnemonic,i.op_str)for i in tail]==[('pop','{r4, lr}'),('add','r0, pc, #4'),('b','#0x123114')],
        'Namespace caller does not restore its frame before the alias tail')
    edges=dynamic['genuineIncomingEdges']
    require([(e['source'],e['sourceMode'],e['sourceBytes'],e['target'],e['targetMode'],e['kind'])for e in edges]==[
        (0x101a2e,'Thumb',2,0x44da8c,'ARM','blx'),(0x10c4e4,'ARM',4,0x123114,'ARM','b'),
        (0x1173e0,'ARM',4,0x123114,'ARM','b'),(0x13b214,'ARM',4,0x44df60,'ARM','blx')],
        'Namespace genuine incoming transfer roster differs')
    for edge in edges:
        low=edge['source'];data=image[low-origin:low-origin+edge['sourceBytes']]
        decoder=Cs(CS_ARCH_ARM,CS_MODE_THUMB)if edge['sourceMode']=='Thumb'else None
        body=list(decoder.disasm(data,low))if decoder else decode(image,origin,low,len(data))
        require(len(body)==1 and body[0].mnemonic==edge['kind'] and legacy.sha(data)==edge['instructionSha256'],
            'Namespace actual incoming opcode or mode differs')
    require(dynamic['observedPositions']=={'0x44da8c':5,'0x123114':51,'0x44df60':12,'0x117378':9}
        and dynamic['unvisitedPositions']=={'0x44da8c':[],'0x123114':[],
            '0x44df60':[0x44df90,0x44df94,0x44df98,0x44df9c],
            '0x117378':list(range(0x117388,0x1173d0,4))}
        and dynamic['oldCallerTail']['source']==0x1173e0 and dynamic['oldCallerTail']['target']==0x123114
        and dynamic['oldCallerTail']['restoredSpLrAndSavedRegisters'], 'Namespace observation limits differ')
    result=dict(current)
    result['functions']=sorted([retained if r['address']==0x117378 else r for r in current['functions']]
        +list(derived.values()),key=lambda r:r['address'])
    result['functionCount']=len(result['functions'])
    before,after=ranges(current['functions']),ranges(result['functions'])
    u_before,u_after=union(before),union(after)
    measure=lambda parts:sum(b-a for a,b in parts)
    require(measure(before)==measure(u_before)==5942845 and measure(after)==measure(u_after)==5942929,
        'Namespace union, ownership overlap or byte conservation differs')
    accounting=witness['byteAccounting']
    require(accounting==dict(beforeDiscoveredEntries=26673,proposedDiscoveredEntries=26676,discoveryDelta=3,
        before=dict(sumBodyBytes=5942845,bodyUnionBytes=5942845,overlapBytes=0),
        after=dict(sumBodyBytes=5942929,bodyUnionBytes=5942929,overlapBytes=0),instructionOwnershipNetDelta=84,
        oldOwnerInstructionBytes=312,retainedOldOwnerInstructionBytes=108,reparentedAliasInstructionBytes=204,
        candidateInstructionBytes=288,previouslyUnownedInstructionBytes=84,excludedLiteralPoolBytes=20,
        grossInitializedTextBytes=7051280,grossDenominatorDelta=0,sourceCreditGranted=0),'Namespace accounting differs')
    cross={}
    for key,label in CLASSES.items():
        pieces=union([(p['start'],p['endExclusive'])for p in base[key]])
        total=measure(pieces);old_owned=intersection(u_before,pieces);new_owned=intersection(u_after,pieces)
        cross[label]=dict(originalBytes=total,beforeOwned=old_owned,afterOwned=new_owned,
            beforeOutside=total-old_owned,afterOutside=total-new_owned,ownershipDelta=new_owned-old_owned)
    require(cross==witness['originalClassificationCrossTable']and result['functionCount']==26676
        and result['initializedTextGrossBytes']==7051280,'Namespace final classification or denominator differs')
    return result


def compose(root,base):
    root=Path(root)
    result,references=predecessor.compose(root,base)
    if not(root/CONFIG).exists():return result,references
    config=json.loads((root/CONFIG).read_bytes())
    require(config['schemaVersion']==1 and config['moduleSha256']==base['codeSha256']
        and legacy.checked(root,config['baseCensus'])==base and len(config['overlays'])==1,'Namespace registry differs')
    entry=config['overlays'][0]
    witness=legacy.checked(root,entry['packet']);dynamic=legacy.checked(root,entry['dynamicProof'])
    review=legacy.checked(root,entry['coordinatorReview'])
    require(entry['approvedForFunctionInventory'] is True and entry['sourceCreditGranted']==0
        and review['overlay']==entry['packet'] and review['dynamicProof']==entry['dynamicProof']
        and review['moduleSha256']==base['codeSha256'] and review['addedDiscoveredEntries']==3
        and review['resultingDiscoveredEntries']==26676 and review['sourceCreditGranted']==0,
        'Namespace coordinator approval differs')
    for row in [entry['referenceProducer'],review['producer'],review['validator']]:legacy.checked_file(root,row)
    result=validate(base,result,witness,dynamic,(root/'generated/update-content0/code.bin').read_bytes())
    result['supplementalInventory']=[*references,entry['packet']]
    result['historicalFunctionCompletenessClaim']=False
    return result,result['supplementalInventory']
