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
import native_particle_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def require(value,reason):
    if not value:
        raise ValueError(reason)


def main():
    proof_path=ROOT/'evidence/verification/particle019-coordinator-c12a7b6.json'
    proof=read(proof_path)
    require(proof['status']=='coordinator-reviewed-committed-particle019-replay-passed'
        and proof['pipelineTests']==95 and proof['mandatoryPackets']==124
        and proof['completeNativeArtifactsChecked']==90 and proof['allRawNativeArtifactsEqualAcrossModes']
        and proof['actualOriginalCases']==20 and proof['sourceOriginalImageReadsOrCpuConstructors']==0,
        'Independent committed velocity replay incomplete')
    require(pin(ROOT/proof['producer']['path'])==proof['producer']
        and pin(ROOT/proof['rawReplay']['path'])==proof['rawReplay'],'Independent coordinator proof changed')
    require([(r['mode'],r['positiveCases'],r['returningControlCases'],r['boundaryPrograms']) for r in proof['scopes']]
        ==[('public-only',57,114,20),('full',117,120,20),('source-only',117,120,20)],
        'Independent positive, returning control or boundary roster changed')
    registry=read(ROOT/'config/functional-functions.json')
    require(len(registry['functions'])==520,'Unexpected pre-admission working-C registry')
    address=0x5354a4
    require(address not in {int(r['name'][3:],16) for r in registry['functions']}
        and address not in {r['address'] for r in ci.accepted_functions(ROOT)},'Velocity already admitted')
    census,_=inventory.compose(ROOT,read(ROOT/registry['census']['path']))
    canonical=next(r for r in census['functions'] if r['address']==address)
    expected=[dict(start=address,endExclusive=address+60,bytes=60)]
    require(canonical['mode']=='ARM' and canonical['textBodyBytes']==60 and canonical['ranges']==expected
        and proof['originalInstructionPositions']==list(range(address,address+60,4)),
        'Complete canonical velocity instruction coverage differs')
    source=ROOT/'src/native/particle019-velocity/particle_velocity.c'
    require(source.read_bytes()==subprocess.check_output(['git','show',proof['sourceRevision']+':'+source.relative_to(ROOT).as_posix()],cwd=ROOT)
        and definitions.has_definition(source.read_text(),'particle_velocity_scale019'),'Qualified C definition changed')
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest()==registry['moduleSha256'],'Original image changed')
    body=image[address-0x100000:address-0x100000+60]
    pool=image[address-0x100000+60:address-0x100000+64]
    contract_path=ROOT/'evidence/lanes/native-particle019-velocity/public-inputs-v1/contract-v1.json'
    contract=read(contract_path)
    require(hashlib.sha256(body).hexdigest()==contract['instructionRanges'][0]['sha256']
        and hashlib.sha256(pool).hexdigest()==contract['literalPools'][0]['sha256'],'Original body or literal differs')
    limits=['Non-null consumed particle/resource views and the declared binary32 operation order, with the default measured floating-point environment.',
        'Finite public edge-case vectors and one genuine original-created particle; universal NaN payload, exception and alternate floating-point environment equivalence is unqualified.',
        'Native Windows execution and high-address AArch64 CPU execution are qualified; physical Android/GPU execution and complete owning-class layouts remain unqualified.']
    function=dict(symbol='fn_005354a4',source=pin(source),sourceName='particle_velocity_scale019',
        symbolNames=pin(ROOT/'include/bytematch_names.h'),
        canonicalIdentity=dict(address=address,mode='ARM',programId=registry['programId'],moduleSha256=registry['moduleSha256']),
        originalInstructionBytes=60,originalInstructionRanges=expected,originalBodySha256=hashlib.sha256(body).hexdigest(),
        reportEntryBytes=60,literalPoolsExcluded=[dict(start=address+60,endExclusive=address+64,bytes=4,sha256=hashlib.sha256(pool).hexdigest())],
        exactObjectSpan=False,exactLinkedSpan=False,functionalConfidence='medium',
        behavior=dict(allPassed=True,boundedNotUniversalEquivalence=True,independentSourceComponentReplay=pin(proof_path),
            allInstructionPositionsEncountered=True,originalImageMappedInSource=False,
            actualWindowsExecution=True,androidA64HighAddressCpuExecution=True,physicalAndroidExecutionClaimed=False,
            pipelineTests=95,completeNativeArtifactChecks=90,publicPositiveCases=57,fullPositiveCases=117,
            sourceOnlyPositiveCases=117,returningSemanticControlProgramsPerScope=6,persistentBoundaryProgramsPerScope=20,
            limits=limits,confidenceJustification='Medium: independently reproduced committed original and source behavior, complete body coverage, returning wrong-source controls and post-exit input-boundary monitoring in the declared finite floating-point domain.'))
    packet=dict(schemaVersion=1,status='coordinator-reviewed-bounded-particle-velocity-operation',moduleSha256=registry['moduleSha256'],
        functions=[function],headers=[pin(ROOT/'src/native/particle019-velocity/particle_velocity.h'),pin(ROOT/'include/bytematch_names.h')],
        sourceDependencies=[pin(source),pin(ROOT/'src/native/particle019-velocity/particle_velocity.h')],
        originalPackets=[pin(proof_path),pin(contract_path),pin(ROOT/'evidence/verification/particle019-inventory-review.json')],
        producer=pin(Path(__file__).resolve()),acceptedSourceCreditGranted=0,exactMatchingClaimed=False,
        overallConfirmedSourceCoverageClaimed=False,wholeGameClaimed=False)
    output=ROOT/'evidence/functional/particle019.json'
    require(not output.exists(),'Preserve the prior velocity functional packet')
    output.write_text(json.dumps(packet,indent=2)+'\n',encoding='utf-8')
    fragment=copy.deepcopy(registry)
    fragment['functions']=[dict(name='fn_005354a4',confidence='medium',packet=pin(output),sourceLookup='repository-function-index')]
    report=read(ROOT/'build/update-content0/report.json')
    require(functional_report.generate(ROOT,report,fragment)['functions']==[dict(name='fn_005354a4',confidence='medium')],
        'Functional schema rejected velocity proof')
    folder=ROOT/'work/particle019-admission/negative-proofs-v1'
    folder.mkdir(parents=True,exist_ok=False)
    controls=[]
    for name in ['wrong-byte-count','wrong-mode','wrong-source','wrong-source-name','wrong-entry','wrong-confidence','wrong-range','wrong-address']:
        bad=copy.deepcopy(packet)
        row=bad['functions'][0]
        if name=='wrong-byte-count':row['originalInstructionBytes']-=4
        elif name=='wrong-mode':row['canonicalIdentity']['mode']='Thumb'
        elif name=='wrong-source':row['source']=pin(ROOT/'src/native/particle019-velocity/particle_velocity.h')
        elif name=='wrong-source-name':row['sourceName']='unimplemented_velocity_operation'
        elif name=='wrong-entry':row['reportEntryBytes']-=4
        elif name=='wrong-confidence':row['functionalConfidence']='high'
        elif name=='wrong-range':row['originalInstructionRanges'][0]['endExclusive']-=4
        else:row['canonicalIdentity']['address']+=4
        path=folder/(name+'.json')
        path.write_text(json.dumps(bad,indent=2)+'\n')
        invalid=copy.deepcopy(fragment)
        invalid['functions'][0]['packet']=pin(path)
        try:
            functional_report.generate(ROOT,report,invalid)
        except ValueError as error:
            controls.append(dict(case=name,rejected=True,reason=str(error)))
        else:
            raise ValueError('Malformed velocity proof accepted: '+name)
    result=dict(status='one-medium-velocity-operation-schema-validated-pending-registry',functions=fragment['functions'],
        instructionFootprintBytes=60,packet=pin(output),controls=controls,exactMatchingCreditGranted=0)
    (ROOT/'evidence/verification/particle019-functional-validation.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(functions=1,instructionBytes=60,malformedProofControls=len(controls))))


if __name__=='__main__':
    main()
