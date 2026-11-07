import json
from pathlib import Path

import functional_report
import native_census_overlay
from native_wave013_common import ROOT,record,save,sha
from squirrel_state045_extents import measure as measure_extents


def propose():
    folder=ROOT/'evidence/lanes/squirrel-state040/initialization045-v1';path=folder/'packet.json'
    packet=json.loads(path.read_text());verification=json.loads((folder/'verification.json').read_text())
    if verification['packet']!=record(path) or verification['status']!='verified-bounded-shared-initialization-stage-not-admission':
        raise ValueError('045 final packet verification is absent or stale')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    composed,overlays=native_census_overlay.compose(ROOT,json.loads(census_path.read_text()))
    canonical={row['address']:row for row in composed['functions']}
    registry=json.loads((ROOT/'config/functional-functions.json').read_text());existing={row['name'] for row in registry['functions']}
    image=(ROOT/'generated/update-content0/code.bin').read_bytes();rows=[]
    extent_path,extent_rows=measure_extents();extents={row['entry']:row for row in extent_rows}
    for row in packet['functions']:
        original=canonical[row['entry']];ranges=original['ranges'];symbol=row['symbol']
        if symbol in existing or original['mode']!='ARM' or original['textBodyBytes']!=row['instructionBytes']:
            raise ValueError('045 candidate is duplicated or lacks a complete canonical body')
        entry_bytes=next(part['endExclusive']-row['entry'] for part in ranges if part['start']<=row['entry']<part['endExclusive'])
        raw=b''.join(image[part['start']-0x100000:part['endExclusive']-0x100000] for part in ranges)
        source=row['source'];origin=source['objectOrigin']
        behavior={'allPassed':True,'boundedNotUniversalEquivalence':True,'frozenPacket':record(path),
            'sharedConstructionCases':16,'parameterMaskCases':560,'normallyReturningCompiledControlsRejected':7,
            'normallyReturningControlPlatformExecutions':21,'actualWindowsObserverTests':12,
            'originalInstructions':row['instructionBytes']//4,'originalInstructionsReached':len(row['observedInstructionAddresses']),
            'unhitInstructionAddresses':row['unobservedInstructionAddresses'],'provenExcludedInstructionAddresses':[],
            'everyLiveAndNonPrivateByteCompared':False,'everyDefinedLiveGraphFieldAndNonPrivateCallerByteCompared':True,
            'wholeMemoryEquivalenceClaimed':False,'universalEquivalenceClaimed':False,
            'independentCleanReplayClaimed':False,'qualifiedDomain':packet['declaredDomain'],
            'allocatorDomain':'Actual original SDK heap/resize/free versus typed portable C heap; actual object budgets and all227live allocation roles checked; SDK slack/private representations differ.',
            'limits':['No SDK source credit','56uninvoked required-engine callbacks retain distinct identities and fail closed',
                'No allocation-failure qualification','No arbitrary repeated shared initialization','No base-library/VM initialization or root factory',
                'No whole interpreter/game/AndroidOS/device execution','Native object padding and uninitialized spare vector capacity are private',
                'Unhit finalizer/assert paths stay explicit; no universal or whole-memory equivalence']}
        rows.append({'canonicalIdentity':{'programId':registry['programId'],'moduleSha256':packet['moduleSha256'],
            'address':row['entry'],'mode':'ARM'},'symbol':symbol,'source':origin['source'],'functionalConfidence':'medium',
            'originalMode':'ARM','originalInstructionBytes':row['instructionBytes'],'originalInstructionRanges':ranges,
            'reportEntryBytes':entry_bytes,'originalSpanSha256':sha(raw),'originalPoolRanges':extents[row['entry']]['noninstructionDataRanges'],
            'callerWitnesses':extents[row['entry']]['callerWitnesses'],'completePhysicalExtent':extents[row['entry']]['physicalSpan'],
            'candidateObject':origin['object'],'candidateInstructionAndPoolBytes':source['bytes'],
            'candidateLinkedSpanSha256':source['linkedSpanSha256'],'exactObjectSpan':False,'exactLinkedSpan':False,
            'sourceCreditRequested':0,'behavior':behavior})
    if len(rows)!=4 or sum(row['originalInstructionBytes'] for row in rows)!=8556:raise ValueError('045 proposed function selection differs')
    headers=[row for row in packet['inputs'] if row['path'].endswith('.h')]
    target=folder/'functional-proof-proposal.json'
    save(target,{'schemaVersion':1,'programId':registry['programId'],'moduleSha256':packet['moduleSha256'],
        'status':'proposed-functional-proof-pending-coordinator-review-and-independent-replay','acceptedSourceCreditGranted':0,
        'functions':rows,'headers':headers,'originalPackets':[record(path),record(folder/'verification.json'),record(extent_path)],
        'producer':record(Path(__file__)),'census':record(census_path),'supplementalInventory':overlays,
        'originalInstructionBytes':8556,'underlyingSdkCreditGranted':0,'alreadyAccepted040ConstructorExcluded':True,
        'alreadyAcceptedArrayHandlerExcluded':True,'independentCleanReplayClaimed':False,'sharedRegistryChanged':False})
    registry['functions']=[{'name':row['symbol'],'confidence':'medium','packet':record(target),'sourceLookup':'repository-function-index'} for row in rows]
    save(folder/'functional-registry-proposal.json',{'status':'proposal-only-no-shared-registry-change','functions':registry['functions'],'sourceCreditRequested':0})
    report_path=ROOT/'build/update-content0/report.json';report=json.loads(report_path.read_text())
    emitted=functional_report.generate(ROOT,report,registry)
    if len(emitted['functions'])!=4:raise ValueError('045 functional-report schema rejected proposed selection')
    save(folder/'functional-schema-validation.json',{'status':'passed','producer':record(Path(__file__)),'packet':record(target),
        'report':record(report_path),'emittedFunctions':emitted['functions'],'sharedRegistryChanged':False,'sourceCreditGranted':0})
    print(json.dumps({'functions':4,'instructionBytes':8556,'proposal':record(target)}),flush=True)


if __name__=='__main__':propose()
