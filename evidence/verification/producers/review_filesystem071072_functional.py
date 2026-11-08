import copy
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[3]
sys.path.insert(0,str(ROOT/'toolscripts'))
import ci_native_build as ci
import functional_report
import c_function_definitions as definitions
import native_namespace_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def require(value,reason):
    if not value:
        raise ValueError(reason)


def main():
    proof_path=ROOT/'evidence/verification/filesystem071072-coordinator-2ae0940.json'
    proof=read(proof_path)
    require(proof['status']=='coordinator-reviewed-committed-filesystem071072-source-replay-passed'
        and proof['pipelineTests']==84 and proof['mandatoryPackets']==440
        and proof['completeNativeArtifactsChecked']==4410 and proof['sourceChildren']==217
        and proof['sourcePositiveProfiles']==84 and proof['returningWrongSourcePrograms']==84
        and proof['persistentBoundaryPrograms']==18,'Committed filesystem source replay incomplete')
    require(pin(ROOT/proof['producer']['path'])==proof['producer']
        and pin(ROOT/proof['rawReplay']['path'])==proof['rawReplay'],'Independent replay proof changed')
    registry=read(ROOT/'config/functional-functions.json')
    require(len(registry['functions'])==521,'Unexpected pre-admission working-C registry')
    existing={r['name']for r in registry['functions']}|{r['symbol']for r in ci.accepted_functions(ROOT)}
    census,_=inventory.compose(ROOT,read(ROOT/registry['census']['path']))
    canonical={r['address']:r for r in census['functions']}
    intake=ROOT/'evidence/lanes/native-file071072/public-inputs-v1'
    bindings=read(intake/'candidate-bindings.json')
    selected=[r for r in bindings['candidates']if not r['originalUnvisitedPositions']and r['canonicalIdentity']not in existing]
    require({r['entry']for r in selected}=={0x44da8c,0x123114,0x14d7ec,0x14d8d4,0x14d2ec,0x13b294,
        0x44dcc8,0x44e680,0x15e5e0,0x15cf6c,0x14d9b8,0x16e9a8},'New complete source entry roster differs')
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest()==registry['moduleSha256'],'Original image changed')
    functions=[]
    limits=['Explicit versioned072 consumed layouts and consistent recompilation of all five legacy dependent C files; canonical069 headers and earlier proofs remain unchanged.',
        'Finite successful and declared failure profiles use qualified service/kernel contracts; the original3DS filesystem, arbitrary scheduling, physical Android and whole games are unqualified by this proof.',
        'Namespace alias ordering, constructor workspace and pool ownership, priority buckets, descriptor and stream reads use the frozen caller-driven profiles; complete owning-class and all conditional-outcome equivalence are unclaimed.']
    for row in selected:
        address=row['entry'];original=canonical[address]
        ranges=[{k:p[k]for k in ['start','endExclusive','bytes']}for p in row['instructionRanges']]
        require(original['mode']=='ARM' and original['ranges']==ranges
            and original['textBodyBytes']==sum(p['bytes']for p in ranges),'Complete canonical source extent differs')
        coverage=next(r for r in proof['completeOriginalInstructionPositions']if r['address']==address)
        require(not coverage['unvisitedPositions'] and coverage['observedPositions']==coverage['totalPositions']
            and coverage['totalPositions']*4==original['textBodyBytes'],'Complete original instruction witness missing')
        source=ROOT/row['source']['proposedPublicPath']
        require(source.read_bytes()==subprocess.check_output(['git','show',proof['sourceRevision']+':'+source.relative_to(ROOT).as_posix()],cwd=ROOT)
            and definitions.has_definition(source.read_text(),row['sourceSymbol']),'Qualified C definition changed')
        body=b''.join(image[p['start']-0x100000:p['endExclusive']-0x100000]for p in ranges)
        functions.append(dict(symbol=row['canonicalIdentity'],source=pin(source),sourceName=row['sourceSymbol'],
            symbolNames=pin(ROOT/'include/bytematch_names.h'),canonicalIdentity=dict(address=address,mode='ARM',
                programId=registry['programId'],moduleSha256=registry['moduleSha256']),originalInstructionBytes=original['textBodyBytes'],
            originalInstructionRanges=ranges,originalBodySha256=hashlib.sha256(body).hexdigest(),
            reportEntryBytes=ranges[0]['bytes'],literalPoolsExcluded=row['literalPoolRanges'],
            exactObjectSpan=False,exactLinkedSpan=False,functionalConfidence='medium',
            behavior=dict(allPassed=True,boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(proof_path),allInstructionPositionsEncountered=True,
                allConditionalOutcomesProven=False,pipelineTests=84,completeNativeArtifactChecks=4410,
                sourcePositiveProfiles=84,returningWrongSourcePrograms=84,persistentBoundaryPrograms=18,
                actualWindowsAndHighAddressA64=True,physicalAndroidExecutionClaimed=False,hostFilesystemExecuted=False,
                sourceCodeOriginalImageMapped=False,limits=limits,
                confidenceJustification='Medium: original-before-C witnesses, independently rebuilt committed source, complete body positions, returning semantic controls and actual parent post-exit monitoring in the declared finite domains.')))
    require(len(functions)==12 and sum(r['originalInstructionBytes']for r in functions)==2220,
        'Physical instruction accounting or duplicate SDK exclusion differs')
    manifest=read(intake/'manifest.json')
    paths=sorted({r['proposedPublicPath']for r in manifest['productionAndFixtures']})
    deps=[pin(ROOT/p)for p in paths]
    packet=dict(schemaVersion=1,status='coordinator-reviewed-bounded-versioned-filesystem-operations',
        moduleSha256=registry['moduleSha256'],functions=functions,sourceDependencies=deps,
        headers=[p for p in deps if p['path'].endswith('.h')]+[pin(ROOT/'include/bytematch_names.h')],
        originalPackets=[pin(proof_path),pin(intake/'candidate-bindings.json'),pin(ROOT/'evidence/verification/namespace-inventory-review.json')],
        producer=pin(Path(__file__).resolve()),alreadyCreditedSdkEntriesExcluded=['fn_0013c500','fn_00123678'],
        partialEntriesExcluded=[r['canonicalIdentity']for r in bindings['candidates']if r['originalUnvisitedPositions']],
        acceptedSourceCreditGranted=0,exactMatchingClaimed=False,overallConfirmedSourceCoverageClaimed=False,wholeGameClaimed=False)
    path=ROOT/'evidence/functional/filesystem071072.json'
    require(not path.exists(),'Preserve the prior versioned filesystem packet')
    path.write_text(json.dumps(packet,indent=2)+'\n')
    fragment=copy.deepcopy(registry)
    fragment['functions']=[dict(name=r['symbol'],confidence='medium',packet=pin(path),sourceLookup='repository-function-index')for r in functions]
    report=read(ROOT/'build/update-content0/report.json')
    require(len(functional_report.generate(ROOT,report,fragment)['functions'])==12,'Functional schema rejected source packet')
    folder=ROOT/'work/filesystem071072-admission/negative-proofs-v1'
    folder.mkdir(parents=True,exist_ok=False)
    controls=[]
    for name in ['wrong-byte-count','wrong-mode','wrong-source','wrong-source-name','wrong-entry','wrong-confidence','wrong-range','wrong-address']:
        bad=copy.deepcopy(packet);row=bad['functions'][0]
        if name=='wrong-byte-count':row['originalInstructionBytes']-=4
        elif name=='wrong-mode':row['canonicalIdentity']['mode']='Thumb'
        elif name=='wrong-source':row['source']=pin(ROOT/'src/native/wave071-namespace/namespace071.h')
        elif name=='wrong-source-name':row['sourceName']='unimplemented_namespace_operation'
        elif name=='wrong-entry':row['reportEntryBytes']-=4
        elif name=='wrong-confidence':row['functionalConfidence']='high'
        elif name=='wrong-range':row['originalInstructionRanges'][0]['endExclusive']-=4
        else:row['canonicalIdentity']['address']+=4
        candidate=folder/(name+'.json');candidate.write_text(json.dumps(bad,indent=2)+'\n')
        invalid=copy.deepcopy(fragment)
        for item in invalid['functions']:item['packet']=pin(candidate)
        try:functional_report.generate(ROOT,report,invalid)
        except ValueError as error:controls.append(dict(case=name,rejected=True,reason=str(error)))
        else:raise ValueError('Malformed source proof accepted: '+name)
    result=dict(status='12medium-versioned-filesystem-operations-schema-validated-pending-registry',
        functions=fragment['functions'],packet=pin(path),instructionFootprintBytes=2220,controls=controls,
        excludedAlreadyCreditedFunctions=['fn_0013c500','fn_00123678'],exactMatchingCreditGranted=0)
    (ROOT/'evidence/verification/filesystem071072-functional-validation.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(functions=12,instructionBytes=2220,malformedProofControls=len(controls))))


if __name__=='__main__':
    main()
