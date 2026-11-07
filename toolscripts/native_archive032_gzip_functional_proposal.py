import json

import functional_report
import native_census_overlay
from native_wave013_common import ROOT,record,save,sha


def propose():
    folder=ROOT/'evidence/lanes/native-archive032/gzip';path=folder/'packet.json'
    source=json.loads(path.read_text());verification=json.loads((folder/'verification.json').read_text())
    if verification['packet']!=record(path) or verification['status']!='packet-and-current-inputs-verified':
        raise ValueError('Gzip verification is absent or stale')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census=json.loads(census_path.read_text());composed,overlays=native_census_overlay.compose(ROOT,census)
    canonical={row['address']:row for row in composed['functions']};image=(ROOT/'generated/update-content0/code.bin').read_bytes();rows=[]
    for row in source['functions']:
        address=row['address'];original=canonical[address];ranges=original['ranges']
        if original['mode']!='ARM' or sum(part['endExclusive']-part['start'] for part in ranges)!=row['instructionBytes']:
            raise ValueError('Gzip proposal is not a complete canonical body')
        raw=b''.join(image[p['start']-0x100000:p['endExclusive']-0x100000] for p in ranges)
        behavior={'allPassed':True,'boundedNotUniversalEquivalence':True,'frozenPacket':record(path),
            'verifiedTests':verification['testCount'],'constructionAndRangeCases':source['behavior']['cases'],
            'attemptedFixtureCases':source['behavior']['cases'],'unsupportedRepresentationCases':[],
            'allAttemptedCasesQualified':True,'originalInstructions':row['originalInstructions'],
            'originalInstructionsReached':row['originalInstructionsReached'],'unhitInstructionAddresses':row['unhitInstructionAddresses'],
            'provenExcludedInstructionAddresses':row['provenExcludedInstructionAddresses'],
            'everyLiveAndNonPrivateByteCompared':True,'wholeMemoryEquivalenceClaimed':False,
            'lifetimeQualification':'Every final live owner field/output byte and nonprivate fixture byte is compared after typed ABI/pointer translation. Transient codec payloads are representation-private; unpublished codec allocations must be freed. Retired storage cannot be executed-read/written in instruction oracles; Windows uses final guards and ordered typed-provider observations. No SDK internals or universal memory equivalence is claimed.',
            'independentCleanReplayClaimed':False,'limits':source['limits']}
        rows.append({'canonicalIdentity':row['canonicalIdentity'],'symbol':row['symbol'],'source':row['source'],
            'originalMode':'ARM','originalInstructionBytes':row['instructionBytes'],'originalInstructionRanges':ranges,
            'originalPoolRanges':row['literalPoolRanges'],'reportEntryBytes':row['reportEntryBytes'],
            'originalSpanSha256':sha(raw),'callerWitnesses':row['callerWitnesses'],'candidateObject':row['candidateObject'],
            'candidateInstructionAndPoolBytes':row['candidateInstructionAndPoolBytes'],
            'candidateLinkedSpanSha256':row['candidateLinkedSpanSha256'],'exactObjectSpan':False,'exactLinkedSpan':False,
            'functionalConfidence':'medium','sourceCreditRequested':0,'behavior':behavior})
    if len(rows)!=5 or sum(r['originalInstructionBytes'] for r in rows)!=496:raise ValueError('Gzip proposed selection differs')
    packet={'schemaVersion':1,'programId':'0004000e001acb00','moduleSha256':source['moduleSha256'],
        'status':'proposed-functional-proof-pending-coordinator-review-and-replay','acceptedSourceCreditGranted':0,
        'functions':rows,'headers':source['headers'],'originalPackets':[record(path),record(folder/'verification.json')],
        'producer':record(__import__('pathlib').Path(__file__)),'census':record(census_path),'supplementalInventory':overlays,
        'originalInstructionBytes':496,'alreadyAcceptedGetterExcluded':'fn_006edec8','underlyingSdkCreditGranted':0,
        'independentCleanReplayClaimed':False,'sharedRegistryChanged':False}
    target=folder/'functional-proof-proposal.json';save(target,packet)
    registry=json.loads((ROOT/'config/functional-functions.json').read_text())
    registry['functions']=[{'name':row['symbol'],'confidence':'medium','packet':record(target),
        'sourceLookup':'repository-function-index'} for row in rows]
    proposal=folder/'functional-registry-proposal.json'
    save(proposal,{'schemaVersion':1,'status':'proposal-only-no-shared-registry-change','functions':registry['functions'],'sourceCreditRequested':0})
    report_path=ROOT/'build/update-content0/report.json';report=json.loads(report_path.read_text())
    emitted=functional_report.generate(ROOT,report,registry)
    if len(emitted['functions'])!=5:raise ValueError('Functional-report schema rejected new gzip selection')
    save(folder/'functional-schema-validation.json',{'schemaVersion':1,'status':'passed',
        'producer':record(__import__('pathlib').Path(__file__)),'proposedPacket':record(target),
        'proposedRegistryEntries':record(proposal),'report':record(report_path),'emittedFunctions':emitted['functions'],
        'sharedRegistryChanged':False,'acceptedSourceCreditGranted':0})
    print(json.dumps({'functions':5,'originalInstructionBytes':496,'alreadyAcceptedGetterExcluded':True,'packet':record(target)}),flush=True)


if __name__=='__main__':propose()
