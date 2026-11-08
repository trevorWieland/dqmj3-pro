import copy
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[3]
sys.path.insert(0,str(ROOT/'toolscripts'))
import ci_native_build as ci
import c_function_definitions as definitions
import functional_report
import native_teardown_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def require(value,reason):
    if not value:
        raise ValueError(reason)


def main():
    proof_path=ROOT/'evidence/verification/coupled070-coordinator-e5e8853.json'
    proof=read(proof_path)
    require(proof['status']=='coordinator-reviewed-committed-coupled070-replay-passed'
        and proof['pipelineTests']==98 and proof['completeNativeArtifactsChecked']==5586
        and proof['mandatoryPackets']==236 and proof['observedInstructionPositions']==219,
        'Committed coupled replay is incomplete')
    require(pin(ROOT/proof['producer']['path'])==proof['producer']
        and pin(ROOT/proof['rawReplay']['path'])==proof['rawReplay'], 'Coordinator producer or raw replay differs')
    registry=read(ROOT/'config/functional-functions.json')
    require(len(registry['functions'])==510,'Unexpected pre-admission working-C registry')
    census,_=inventory.compose(ROOT,read(ROOT/registry['census']['path']))
    canonical={r['address']:r for r in census['functions']}
    existing={int(r['name'][3:],16) for r in registry['functions']}|{r['address'] for r in ci.accepted_functions(ROOT)}
    intake=ROOT/'evidence/lanes/native-file-coupled070/public-inputs-v1'
    verification=read(intake/'verification.json')
    manifest=read(intake/'manifest.json')
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest()==registry['moduleSha256'],'Original image differs')
    selected={0x1054f8,0x10c444,0x44e000,0x44dc58,0x44de20,0x6ceb3c,0x44e6d8,0x44dfac,0x10555c,0x10c4f4}
    functions=[]
    limits=[
        'Successful declared service/kernel contracts, stable SDK context/TLS and uncontended locking; host filesystem and physical Android are unqualified.',
        'Namespace mount, alias/registration and SDK device construction remain typed qualification ports in this committed closure.',
        'Cold enabled-patch startup, disabled-patch alias, NULL old/new manager allocation failure, and warm distinct-manager replacement after actual filesystem teardown.',
        'Warm replacement requires the old worker paused idle, with no queued or current jobs; live nonnull allocation aliasing and still-mounted duplicate registration are excluded.',
        'Both embedded device lists are empty; nonempty/fatal list paths, zero stream handles and negative service results remain unqualified.',
        'Pointer ownership and native64 layout use explicit named semantic views; full owning-class ABI, arbitrary pointer normalization, concurrency and full games are unqualified.']
    for row in verification['instructionCoverage']:
        address=row['entry']
        if address not in selected:
            continue
        require(address not in existing and not row['unseenInstructionPositions'], 'Already admitted or partially observed entry')
        ranges=[{k:p[k] for k in ['start','endExclusive','bytes']} for p in row['instructionRanges']]
        require(canonical[address]['mode']=='ARM' and canonical[address]['ranges']==ranges
            and canonical[address]['textBodyBytes']==sum(p['bytes'] for p in ranges), 'Canonical function extent differs')
        coverage=next(r for r in proof['originalInstructionCoverage'] if r['address']==address)
        require(not coverage['unobservedPositions'] and coverage['observedPositions']*4==canonical[address]['textBodyBytes'],
            'Complete original instruction-position witness is required')
        sources=[ROOT/r['proposedPublicPath'] for r in manifest['productionAndFixtures']
            if r['proposedPublicPath'].endswith('.c') and definitions.has_definition((ROOT/r['proposedPublicPath']).read_text(),row['sourceFunction'])]
        require(len(sources)==1,'Qualified source definition is not unique')
        source=sources[0]
        require(source.read_bytes()==subprocess.check_output(['git','show',proof['sourceRevision']+':'+source.relative_to(ROOT).as_posix()],cwd=ROOT),
            'Qualified committed C source changed')
        body=b''.join(image[p['start']-0x100000:p['endExclusive']-0x100000] for p in ranges)
        functions.append(dict(symbol=f'fn_{address:08x}',source=pin(source),sourceName=row['sourceFunction'],
            symbolNames=pin(ROOT/'include/bytematch_names.h'),canonicalIdentity=dict(address=address,mode='ARM',
                programId=registry['programId'],moduleSha256=registry['moduleSha256']),originalInstructionBytes=len(body),
            originalInstructionRanges=ranges,originalBodySha256=hashlib.sha256(body).hexdigest(),
            reportEntryBytes=ranges[0]['endExclusive']-address,literalPoolsExcluded=row['dataRanges'],
            exactObjectSpan=False,exactLinkedSpan=False,functionalConfidence='medium',behavior=dict(allPassed=True,
                boundedNotUniversalEquivalence=True,independentSourceComponentReplay=pin(proof_path),
                completeCanonicalWitnesses=pin(intake/'verification.json'),actualWindowsAndHighAddressA64=True,
                physicalAndroidExecutionClaimed=False,sourceCodeOriginalImageMapped=False,pipelineTests=98,
                completeNativeArtifactChecks=5586,sourcePositiveProfilesPerScope=24,
                returningSemanticRejectionsPerScope=30,persistentCaughtAttemptControlsPerScope=15,
                allInstructionPositionsEncountered=True,allConditionalOutcomesProven=False,
                constructorNamespaceAndKernelBoundariesRemainQualificationPorts=True,limits=limits,
                confidenceJustification='Medium: independent committed original/ARM/native execution, declared ownership projections, returning controls and persistent input boundaries; finite successful service and lifecycle domains.')))
    require(len(functions)==10 and sum(r['originalInstructionBytes'] for r in functions)==812,'Coupled accounting differs')
    dependencies=[pin(ROOT/r['proposedPublicPath']) for r in manifest['productionAndFixtures'] if r['proposedPublicPath'].startswith('src/native/')]
    packet=dict(schemaVersion=1,status='coordinator-reviewed-bounded-coupled-filesystem-operations',moduleSha256=registry['moduleSha256'],
        functions=functions,sourceDependencies=dependencies,headers=[r for r in dependencies if r['path'].endswith('.h')]+[pin(ROOT/'include/bytematch_names.h')],
        qualificationOnlySources=[r['proposedPublicPath'] for r in manifest['productionAndFixtures'] if not r['proposedPublicPath'].startswith('src/native/')],
        excludedUnvisitedBodies=['fn_00170c3c'],originalPackets=[pin(proof_path),pin(intake/'verification.json'),pin(intake/'manifest.json'),
            pin(ROOT/'evidence/verification/teardown-inventory-review.json')],producer=pin(Path(__file__).resolve()),
        acceptedSourceCreditGranted=0,exactMatchingClaimed=False,overallConfirmedSourceCoverageClaimed=False,wholeGameClaimed=False)
    output=ROOT/'evidence/functional/coupled070.json'
    require(not output.exists(),'Preserve the prior coupled functional packet')
    output.write_text(json.dumps(packet,indent=2)+'\n',encoding='utf-8')
    fragment=copy.deepcopy(registry)
    fragment['functions']=[dict(name=r['symbol'],confidence='medium',packet=pin(output),sourceLookup='repository-function-index') for r in functions]
    report=read(ROOT/'build/update-content0/report.json')
    require(len(functional_report.generate(ROOT,report,fragment)['functions'])==10,'Functional schema rejected the coupled proof')
    folder=ROOT/'work/coupled070-admission/negative-proofs-v1'
    folder.mkdir(parents=True,exist_ok=False)
    controls=[]
    for name in ['wrong-byte-count','wrong-mode','wrong-source','wrong-source-name','wrong-entry','wrong-confidence','wrong-range','wrong-address']:
        bad=copy.deepcopy(packet)
        row=bad['functions'][0]
        if name=='wrong-byte-count':row['originalInstructionBytes']-=4
        elif name=='wrong-mode':row['canonicalIdentity']['mode']='Thumb'
        elif name=='wrong-source':row['source']=pin(ROOT/'src/native/wave069-device/device069.h')
        elif name=='wrong-source-name':row['sourceName']='unimplemented_coupled_operation'
        elif name=='wrong-entry':row['reportEntryBytes']-=4
        elif name=='wrong-confidence':row['functionalConfidence']='high'
        elif name=='wrong-range':row['originalInstructionRanges'][0]['endExclusive']-=4
        else:row['canonicalIdentity']['address']+=4
        path=folder/(name+'.json')
        path.write_text(json.dumps(bad,indent=2)+'\n')
        invalid=copy.deepcopy(fragment)
        for item in invalid['functions']:item['packet']=pin(path)
        try:
            functional_report.generate(ROOT,report,invalid)
        except ValueError as error:
            controls.append(dict(case=name,rejected=True,reason=str(error)))
        else:
            raise ValueError('Malformed coupled proof accepted: '+name)
    result=dict(status='ten-medium-coupled-operations-schema-validated-pending-registry',functions=fragment['functions'],
        instructionFootprintBytes=812,packet=pin(output),controls=controls,excludedUnvisitedBodies=['fn_00170c3c'],exactMatchingCreditGranted=0)
    (ROOT/'evidence/verification/coupled070-functional-validation.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(functions=10,instructionBytes=812,malformedProofControls=len(controls))))


if __name__=='__main__':
    main()
