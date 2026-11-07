import capstone
from capstone.arm import ARM_OP_MEM,ARM_OP_IMM,ARM_REG_PC,ARM_INS_BL,ARM_INS_BLX

from native_wave013_common import ROOT,MODULE_SHA,record,sha
from native_wave013_dfa_boundaries import incoming_witnesses


METHODS=[(0x5f5f90,132),(0x5f5d60,56),(0x5f5d98,24),(0x6edec8,12),(0x5f5eac,224),(0x5f601c,60)]


def load(reference):
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM);decoder.detail=True
    image=reference.image
    if sha(image)!=MODULE_SHA:raise ValueError('Gzip original module differs')
    rows=[]
    for address,expected in METHODS:
        census=reference.functions[address]
        if census['mode']!='ARM' or len(census['ranges'])!=1 or census['ranges'][0]['start']!=address or census['ranges'][0]['endExclusive']!=address+expected:
            raise ValueError('Gzip full canonical boundary differs')
        raw=image[address-0x100000:address-0x100000+expected];instructions=list(decoder.disasm(raw,address))
        if sum(i.size for i in instructions)!=expected:raise ValueError('Gzip function has incomplete instruction decode')
        pools={};calls=[]
        for item in instructions:
            if item.id in [ARM_INS_BL,ARM_INS_BLX] and item.operands[0].type==ARM_OP_IMM:
                calls.append({'instruction':item.address,'target':item.operands[0].imm&~1,'bytes':item.size,'sha256':sha(item.bytes)})
            for operand in item.operands:
                if operand.type==ARM_OP_MEM and operand.mem.base==ARM_REG_PC:
                    if operand.mem.index or not item.mnemonic.startswith('ldr'):raise ValueError('Gzip indexed PC data needs separate qualification')
                    at=item.address+8+operand.mem.disp;data=image[at-0x100000:at-0x100000+4]
                    pools[at]={'start':at,'endExclusive':at+4,'bytes':4,'sha256':sha(data),'loadInstruction':item.address,
                        'resolvedWord':int.from_bytes(data,'little')}
        ranges=[{'start':address,'endExclusive':address+expected,'bytes':expected,'sha256':sha(raw)}]
        rows.append({'address':address,'symbol':'fn_'+format(address,'08x'),'mode':'ARM','instructionBytes':expected,
            'instructionRanges':ranges,'literalPoolRanges':[pools[a] for a in sorted(pools)],
            'instructionAddresses':[i.address for i in instructions],'directCallees':calls,
            'inventoryOwnership':'frozen-composed-census','reportEntryBytes':expected,
            'canonicalIdentity':{'build':'owner-archive-update','programId':'0004000e001acb00','module':'content0/.code-decompressed',
                'moduleSha256':MODULE_SHA,'address':address,'mode':'ARM'},'sourceCreditGranted':0})
    table_start=0x858f7c;table_raw=image[table_start-0x100000:table_start-0x100000+4]
    if int.from_bytes(table_raw,'little')!=0x5f601c:raise ValueError('Gzip one-slot release table differs')
    table={'name':'gzip-view-measured-release-slot-only','start':table_start,'bytes':4,'sha256':sha(table_raw),
        'entries':[{'slotOffset':0,'target':0x5f601c}],'additionalVirtualSlotsClaimed':False}
    constructor=next(row for row in rows if row['address']==0x5f5f90)
    if not any(pool['resolvedWord']==table_start for pool in constructor['literalPoolRanges']):raise ValueError('Gzip constructor has no release-table literal')
    original={'census':reference.pins['census']}
    witnesses=incoming_witnesses(original,{'tables':[table]},[row['address'] for row in rows])
    for row in rows:row['callerWitnesses']=witnesses[row['address']]
    caller=reference.functions[0x238fec]
    caller_ranges=[{**part,'sha256':sha(image[part['start']-0x100000:part['endExclusive']-0x100000])} for part in caller['ranges']]
    return {'schemaVersion':1,'kind':'measured-complete-gzip-wrapper-family','moduleSha256':MODULE_SHA,
        'functions':[row for row in rows if row['address']!=0x6edec8],
        'existingAcceptedSourceDependencies':[{**row,'originalSource':record(ROOT/'src/native/wave002/views_03.c'),
            'existingAcceptanceEvidence':record(ROOT/'evidence/cohorts/bundle001/acceptance.json'),
            'nativeAdapterSymbol':'archive_gzip_output_size','newSourceOrMatchingCreditGranted':0}
            for row in rows if row['address']==0x6edec8],
        'instructionBytes':sum(row['instructionBytes'] for row in rows if row['address']!=0x6edec8),
        'completeSixMethodInstructionBytes':sum(row['instructionBytes'] for row in rows),
        'operationTable':table,'actualGameCaller':{'address':0x238fec,'mode':caller['mode'],
            'instructionRanges':caller_ranges,'instructionBytes':sum(p['endExclusive']-p['start'] for p in caller['ranges']),
            'observedReturnHandling':'The measured resource caller ignores the inflate wrapper status before XBB construction.',
            'originalHelperFallbackInSourcePermitted':False},
        'underlyingSdkEntries':[0x733bfc,0x7321e0,0x733bac],
        'underlyingSdkFunctionBoundariesClaimedComplete':False,
        'underlyingSdkSourceCreditGranted':0,'inventoryChangesGranted':False,
        'producer':record(__import__('pathlib').Path(__file__))}
