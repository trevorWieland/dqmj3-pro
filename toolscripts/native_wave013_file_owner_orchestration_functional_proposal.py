import json

import functional_report
import native_census_overlay
from native_wave013_common import ROOT,OUT,record,save,sha


def propose():
    folder=OUT/'file/owner/orchestration'
    source_path=folder/'packet.json'
    source=json.loads(source_path.read_text())
    verification=json.loads((folder/'verification.json').read_text())
    if verification['packet']!=record(source_path) or verification['status']!='packet-and-current-inputs-verified':
        raise ValueError('Frozen owner orchestration verification is absent or stale')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census=json.loads(census_path.read_text())
    composed,overlays=native_census_overlay.compose(ROOT,census)
    canonical={row['address']:row for row in composed['functions']}
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    rows=[]
    excluded=[]
    for row in source['functions']:
        if row['exactLinkedSpanCandidate']:
            excluded.append(row['symbol'])
            continue
        address=row['canonicalIdentity']['address']
        original=canonical[address]
        ranges=original['ranges']
        if (sum(part['endExclusive']-part['start'] for part in ranges)!=row['originalInstructionBytes']
            or original['mode']!=row['canonicalIdentity']['mode']):
            raise ValueError('Proposed owner orchestration function differs from complete canonical body')
        entry=next(part for part in ranges if part['start']<=address<part['endExclusive'])
        raw=b''.join(image[part['start']-0x100000:part['endExclusive']-0x100000] for part in ranges)
        if row['candidateObject']['sha256']==sha(raw):
            raise ValueError('An unexcluded exact object span needs separate review')
        behavior={'allPassed':True,'boundedNotUniversalEquivalence':True,'frozenPacket':record(source_path),
          'verifiedTests':verification['testCount'],'constructionAndRangeCases':source['behavior']['constructionAndRangeCases'],
          'attemptedFixtureCases':source['behavior']['attemptedFixtureCases'],
          'unsupportedRepresentationCases':source['behavior'].get('unsupportedRepresentationCases',[]),
          'allAttemptedCasesQualified':True,
          'originalInstructions':row['originalInstructions'],'originalInstructionsReached':row['originalInstructionsReached'],
          'unhitInstructionAddresses':row['unhitInstructionAddresses'],
          'provenExcludedInstructionAddresses':row['provenExcludedInstructionAddresses'],
          'everyLiveAndNonPrivateByteCompared':True,'wholeMemoryEquivalenceClaimed':False,
          'lifetimeQualification':source['behavior']['lifetimeContract'],
          'independentCleanReplayClaimed':False,'limits':source['limits']}
        rows.append({'canonicalIdentity':row['canonicalIdentity'],'symbol':row['symbol'],'source':row['source'],
          'originalMode':original['mode'],'originalInstructionBytes':row['originalInstructionBytes'],
          'originalInstructionRanges':ranges,'originalPoolRanges':row['originalLiteralPoolRanges'],
          'reportEntryBytes':entry['endExclusive']-address,'originalSpanSha256':sha(raw),
          'callerWitnesses':row['callerWitnesses'],'candidateObject':row['candidateObject'],
          'candidateInstructionAndPoolBytes':row['candidateInstructionAndPoolBytes'],
          'candidateLinkedSpanSha256':row['candidateLinkedSpanSha256'],
          'exactObjectSpan':False,'exactLinkedSpan':False,'functionalConfidence':'medium',
          'sourceCreditRequested':0,'behavior':behavior})
    if len(rows)!=6 or len(excluded)!=0:
        raise ValueError('Proposed non-exact owner orchestration selection differs')
    packet={'schemaVersion':1,'programId':'0004000e001acb00','moduleSha256':source['moduleSha256'],
      'status':'proposed-functional-proof-pending-coordinator-review-and-replay','acceptedSourceCreditGranted':0,
      'functions':rows,'headers':source['headers'],'originalPackets':[record(source_path),record(folder/'verification.json')],
      'producer':record(__import__('pathlib').Path(__file__)),'census':record(census_path),
      'supplementalInventory':overlays,'exactCandidateExcludedPendingSeparateAdmission':excluded,
      'originalInstructionBytes':sum(row['originalInstructionBytes'] for row in rows),
      'independentCleanReplayClaimed':False,'sharedRegistryChanged':False}
    path=folder/'functional-proof-proposal.json'
    save(path,packet)
    registry=json.loads((ROOT/'config/functional-functions.json').read_text())
    registry['functions']=[{'name':row['symbol'],'confidence':'medium','packet':record(path),
                            'sourceLookup':'repository-function-index'} for row in rows]
    proposed=folder/'functional-registry-proposal.json'
    save(proposed,{'schemaVersion':1,'status':'proposal-only-no-shared-registry-change',
                   'functions':registry['functions'],'sourceCreditRequested':0})
    report=json.loads((ROOT/'build/update-content0/report.json').read_text())
    emitted=functional_report.generate(ROOT,report,registry)
    if len(emitted['functions'])!=6:
        raise ValueError('Existing functional-report schema rejected proposed owner orchestration selection')
    save(folder/'functional-schema-validation.json',{'schemaVersion':1,'status':'passed',
      'producer':record(__import__('pathlib').Path(__file__)),'proposedPacket':record(path),
      'proposedRegistryEntries':record(proposed),'report':record(ROOT/'build/update-content0/report.json'),
      'emittedFunctions':emitted['functions'],'sharedRegistryChanged':False,'acceptedSourceCreditGranted':0})
    print(json.dumps({'functions':len(rows),'originalInstructionBytes':packet['originalInstructionBytes'],
                      'excludedExactCandidates':excluded,'packet':record(path),'existingFunctionalReportSchemaPassed':True}),flush=True)


if __name__=='__main__':
    propose()
