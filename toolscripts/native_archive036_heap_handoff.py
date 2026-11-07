import json

import capstone
from capstone.arm import ARM_INS_BL,ARM_INS_BLX,ARM_INS_B,ARM_OP_IMM
from native_wave013_common import ROOT,MODULE_SHA,record,save,sha
from native_archive032_gzip_reference import ReferenceImage


OUTPUT=ROOT/'evidence/lanes/native-archive032/gzip/reference-heap-handoff.json'


def run():
    reference=ReferenceImage();folder=ROOT/'evidence/lanes/native-archive032/gzip'
    packet_path=folder/'packet.json';exchange_path=folder/'reference-sdk-exchange.json'
    packet=json.loads(packet_path.read_text());exchange=json.loads(exchange_path.read_text())
    if packet['moduleSha256']!=MODULE_SHA or exchange['moduleSha256']!=MODULE_SHA:raise ValueError('Handoff module differs')
    for pin in packet['inputs']:
        if pin['path'] in ['config/native-function-overlays.json','toolscripts/native_census_overlay.py']:
            if record(ROOT/pin['path'])!=pin:raise ValueError('Handoff shared ownership snapshot differs')
    image=reference.image;witnesses={row['address']:row for row in exchange['instructions']};groups={}
    for witness in witnesses.values():
        if not isinstance(witness['owner'],int):raise ValueError('Handoff encountered an unowned instruction')
        groups.setdefault(witness['owner'],[]).append(witness)
    decoders={mode:capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM if mode=='ARM' else capstone.CS_MODE_THUMB)
        for mode in ['ARM','Thumb']}
    for decoder in decoders.values():decoder.detail=True
    regions=[]
    for owner,executed in sorted(groups.items()):
        row=reference.functions[owner];calls=[];tails=[]
        for witness in sorted(executed,key=lambda x:x['address']):
            at=witness['address'];raw=image[at-0x100000:at-0x100000+witness['bytes']]
            if sha(raw)!=witness['sha256']:raise ValueError('Executed handoff instruction changed')
            values=list(decoders[witness['mode']].disasm(raw,at,count=1))
            if len(values)!=1 or values[0].size!=len(raw):raise ValueError('Handoff instruction decode differs')
            instruction=values[0]
            if instruction.id in [ARM_INS_BL,ARM_INS_BLX] and instruction.operands[0].type==ARM_OP_IMM:
                target=instruction.operands[0].imm&~1
                calls.append({'instruction':at,'target':target,'instructionSha256':witness['sha256'],
                    'targetInstructionAlsoObserved':target in witnesses,'takenEdgeIndependentlyRecorded':False})
            if instruction.id==ARM_INS_B and instruction.operands[0].type==ARM_OP_IMM:
                target=instruction.operands[0].imm&~1
                if not any(p['start']<=target<p['endExclusive'] for p in row['ranges']):
                    tails.append({'instruction':at,'target':target,'instructionSha256':witness['sha256'],
                        'targetInstructionAlsoObserved':target in witnesses,'takenEdgeIndependentlyRecorded':False})
        ranges=[{**part,'sha256':sha(image[part['start']-0x100000:part['endExclusive']-0x100000])} for part in row['ranges']]
        regions.append({'address':owner,'mode':row['mode'],'canonicalInstructionRanges':ranges,
            'canonicalInstructionBytes':sum(p['endExclusive']-p['start'] for p in ranges),
            'executedInstructionCount':len(executed),'executedInstructions':sorted(executed,key=lambda x:x['address']),
            'directCallInstructionsVisited':calls,'externalDirectBranchInstructionsVisited':tails,'completeBehaviorOrAssertFailureProofClaimed':False,
            'sourceOrInventoryCreditGranted':0})
    prefixes=[]
    for address in [0x2fece8,0x2feef4,0x733bfc,0x7321e0,0x733bac]:
        row=reference.functions.get(address)
        if row is not None and (row['mode']!='ARM' or [(p['start'],p['endExclusive']) for p in row['ranges']]!=[(address,address+4)]):
            raise ValueError('Expected existing four-byte entry prefix differs')
        raw=image[address-0x100000:address-0x100000+4];instruction=list(decoders['ARM'].disasm(raw,address,count=1))[0]
        if instruction.mnemonic!='mov' or instruction.op_str!='r0, r0':raise ValueError('Entry prefix is not the measured identity instruction')
        next_address=address+4;continuation=next((owner for low,high,owner in reference.ranges if low<=next_address<high),None)
        prefixes.append({'entry':address,'ownership':'existing-census-entry' if row is not None else 'unowned-word-before-observed-body-not-a-qualified-entry',
            'mode':'ARM','bytes':4,'sha256':sha(raw),'registerIdentityWithoutFlags':True,
            'entryInstructionObserved':address in witnesses,'fallthroughAddress':next_address,
            'existingContinuationOwner':continuation,'continuationInstructionObserved':next_address in witnesses,
            'historicalFunctionBoundaryCorrectionGranted':False})
    heap_owners={0x2fece8,0x2fecec,0x2feef4,0x2feef8,0x124ffc,0x1287dc,0x145b00,0x143b48,0x14e774,0x147e6c}
    result={'schemaVersion':1,'kind':'read-only-reference-sdk-heap-ownership-handoff','moduleSha256':MODULE_SHA,
        'programId':'0004000e001acb00','version':'update-content0','producer':record(__import__('pathlib').Path(__file__)),
        'frozenPacket':record(packet_path),'referenceExchange':record(exchange_path),'ownershipSnapshot':reference.pins,
        'allExecutedCensusRegions':regions,'heapOwnerAddressesObserved':sorted(groups.keys()&heap_owners),
        'measuredExistingEntryPrefixes':prefixes,'sdkOutsideCensusInstructionCount':len(exchange['sdkOutsideCensusDynamicInstructions']),
        'documentationClarification':'The SDK entry prefixes are four-byte census entries; their continuations were already owned by neighboring census functions. The optional SDK discovery-window fallback was not exercised. No new overlay is required by this gzip corpus.',
        'originalPlatformPreconditions':{'sdkHeapReadyByte':{'address':0x89a508,'value':1},
            'currentHeapPointerGlobal':0x89a688,'sdkFlagWords':[{'address':0x89a670,'value':0xf531},{'address':0x8bfb54,'value':0x531}],
            'mappedZeroTlsPage':0x6000000,'targetHeapObjectFields':[{'offset':0,'role':'actual-two-slot-operations-pointer'},
                {'offset':4,'role':'typed-provider-context-pointer'}],
            'targetOperationsSlots':[{'offset':0,'abi':'allocate(heap,u32 bytes,u32 alignment)'},
                {'offset':4,'abi':'release(heap,void *memory)'}],
            'typedProviderSource':record(ROOT/'toolscripts/native_archive032_gzip_fixture.c'),
            'typedProviderHeader':record(ROOT/'toolscripts/native_archive032_gzip_fixture.h'),
            'backingInitiallyZero':True,'allocationPrefixBytes':16,'originalFreePrefixReadOffset':-12,
            'freeNullIsNoop':True,'heapStartupReconstructedOrExecuted':False,
            'providerPolicy':'Bounded aligned bump allocations, explicit ordinal failures, ownership/release records; no original SDK return or output is supplied.'},
        'limits':['Visited direct-call instructions are listed; a separate taken-edge trace was not recorded.',
            'Complete canonical ranges are existing census ownership, not a new claim that historical function boundaries are correct.',
            'Assert-failure/abort semantics and SDK initialization are not qualified by this handoff.',
            'The initialized ready/current-heap service precondition must be qualified independently for other owners.',
            'No original instruction or immutable table bytes are included; private originals remain immutable.'],
        'acceptedSourceCreditGranted':0,'sdkCreditGranted':0,'inventoryChanged':False}
    save(OUTPUT,result)
    print(json.dumps({'handoff':record(OUTPUT),'regions':len(regions),'prefixes':len(prefixes),
        'heapOwnerAddressesObserved':result['heapOwnerAddressesObserved']}),flush=True)


if __name__=='__main__':run()
