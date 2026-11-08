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
import native_namespace_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def main():
    proof_path=ROOT/'evidence/verification/md5-stream062-coordinator-6c41894.json'
    proof=read(proof_path)
    assert proof['status']=='coordinator-reviewed-committed-MD5-source-replay-passed'
    assert proof['pipelineStages']==19 and proof['unitTests']==120 and proof['nativeArtifactsChecked']==136
    assert proof['selectedInputsRehashedAfterExit']==23 and proof['actualChildExitZeroRejectedByReusableParent']
    assert pin(ROOT/proof['producer']['path'])==proof['producer']and pin(ROOT/proof['rawReplay']['path'])==proof['rawReplay']
    registry=read(ROOT/'config/functional-functions.json');assert len(registry['functions'])==533
    existing={r['name']for r in registry['functions']}|{r['symbol']for r in ci.accepted_functions(ROOT)}
    census,_=inventory.compose(ROOT,read(ROOT/registry['census']['path']))
    canonical={r['address']:r for r in census['functions']}
    roster_path=ROOT/'evidence/lanes/md5-stream062/public-inputs-v1/entry-roster.json'
    roster=read(roster_path)
    assert len(roster['entries'])==4 and roster['instructionBytes']==1444 and roster['observedPcs']==355
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    assert hashlib.sha256(image).hexdigest()==registry['moduleSha256']
    invariant_path=ROOT/'evidence/lanes/md5-stream062/public-inputs-v1/padding-invariant.json'
    invariant=read(invariant_path)
    assert invariant['states']==65536 and invariant['zeroSpans']==72704 and invariant['allTrailingRemaindersZero']
    for context_low in range(0,4096,4):
        for used in range(64):
            block=context_low+24;second=used
            if 64-used<8:
                start=block+used;length=64-used;leading=(-start)&3
                assert length>=leading and (length-leading)%4==0
                second=0
            start=block+second;length=56-second;leading=(-start)&3
            assert length>=leading and (length-leading)%4==0
    invariant_pcs=[int(r['pc'],16)for r in invariant['originalInstructionHashes']]
    for r in invariant['originalInstructionHashes']:
        a=int(r['pc'],16);assert hashlib.sha256(image[a-0x100000:a-0x100000+4]).hexdigest()==r['sha256']
    functions=[]
    limits=['Fixed measured SDK method table; fully backed, four-byte-aligned context and disjoint input/output in the qualified domains.',
        'Preserves original low32 length, zero high length and count-plus-one finalization semantics; arbitrary method replacements, aliases, invalid pointers and misaligned contexts are unqualified.',
        'Finalizer six trailing-zero loop PCs are invariant-only under the declared alignment; all branch outcomes and universal equivalence are unclaimed.',
        'Existing public compression source is reused; its original physical interval is not counted again. No task wrapper, cache producer, SDK startup, physical Android or whole game is qualified here.']
    for entry in roster['entries']:
        address=entry['canonicalAddress'];symbol=f'fn_{address:08x}';assert symbol not in existing
        original=canonical[address];ranges=[dict(start=int(r['start'],16),endExclusive=int(r['endExclusive'],16),bytes=r['bytes'])for r in entry['instructionRanges']]
        assert original['mode']=='ARM'and original['ranges']==ranges and original['textBodyBytes']==entry['instructionBytes']
        assert sum(r['bytes']for r in ranges)==entry['instructionBytes']
        for r,expected in zip(ranges,entry['instructionRanges'],strict=True):
            assert hashlib.sha256(image[r['start']-0x100000:r['endExclusive']-0x100000]).hexdigest()==expected['sha256']
        source=ROOT/entry['productionPath'];source_pin=pin(source)
        assert source_pin['sha256']==entry['sourceSha256']
        assert source.read_bytes()==subprocess.check_output(['git','show',proof['sourceRevision']+':'+entry['productionPath']],cwd=ROOT)
        assert definitions.has_definition(source.read_text(),entry['sourceFunction'])
        body=b''.join(image[r['start']-0x100000:r['endExclusive']-0x100000]for r in ranges)
        unvisited=invariant_pcs if address==0x160190 else []
        functions.append(dict(symbol=symbol,source=source_pin,sourceName=entry['sourceFunction'],
            symbolNames=pin(ROOT/'include/bytematch_names.h'),canonicalIdentity=dict(address=address,mode='ARM',
                programId=registry['programId'],moduleSha256=registry['moduleSha256']),originalInstructionBytes=entry['instructionBytes'],
            originalInstructionRanges=ranges,originalBodySha256=hashlib.sha256(body).hexdigest(),reportEntryBytes=ranges[0]['bytes'],
            exactObjectSpan=False,exactLinkedSpan=False,functionalConfidence='medium',
            behavior=dict(allPassed=True,boundedNotUniversalEquivalence=True,independentCommittedReplay=pin(proof_path),
                declaredInstructionPositions=entry['instructionBytes']//4,observedInstructionPositions=entry['instructionBytes']//4-len(unvisited),
                invariantOnlyInstructionPositions=unvisited,allInstructionPositionsEncountered=not unvisited,
                allConditionalOutcomesProven=False,structuralCases=339,streamPrograms=44,callsPerTarget=602,
                returningCompiledControls=7,persistentBoundaryPrograms=12,sourceOnlyOriginalReads=0,
                actualWindowsNativeExecution=True,AndroidInstructionModelExecution=True,physicalAndroidExecutionClaimed=False,
                domain=entry['domain'],limits=limits,
                confidenceJustification='Medium: original-before-C full-arena comparisons, genuine method ABI, compiled returning controls, independent committed replay and explicit alignment-only positions in finite declared domains.')))
    manifest=read(ROOT/'toolscripts/md5_stream062/inputs.json')
    paths=sorted({r['path']for r in manifest['authored']+manifest['existingPublic']}|{'toolscripts/md5_stream062/inputs.json','toolscripts/md5_stream062_verify.py'})
    packet=dict(schemaVersion=1,status='coordinator-reviewed-bounded-SDK-MD5-streams',moduleSha256=registry['moduleSha256'],
        functions=functions,sourceDependencies=[pin(ROOT/p)for p in paths],
        headers=[pin(ROOT/p)for p in paths if p.endswith('.h')]+[pin(ROOT/'include/bytematch_names.h')],
        originalPackets=[pin(proof_path),pin(roster_path),pin(invariant_path)],producer=pin(Path(__file__).resolve()),
        acceptedSourceCreditGranted=0,exactMatchingClaimed=False,overallConfirmedCoverageClaimed=False,wholeGameClaimed=False)
    target=ROOT/'evidence/functional/md5-stream062.json';assert not target.exists();target.write_text(json.dumps(packet,indent=2)+'\n')
    fragment=copy.deepcopy(registry)
    fragment['functions']=[dict(name=r['symbol'],confidence='medium',packet=pin(target),sourceLookup='repository-function-index')for r in functions]
    report=read(ROOT/'build/update-content0/report.json')
    assert len(functional_report.generate(ROOT,report,fragment)['functions'])==4
    folder=ROOT/'work/md5-stream062-functional-negative-v1';folder.mkdir(exist_ok=False);controls=[]
    for name in ['wrong-bytes','wrong-mode','wrong-source','wrong-definition','wrong-entry','wrong-confidence','wrong-range','wrong-address']:
        bad=copy.deepcopy(packet);r=bad['functions'][0]
        if name=='wrong-bytes':r['originalInstructionBytes']-=4
        elif name=='wrong-mode':r['canonicalIdentity']['mode']='Thumb'
        elif name=='wrong-source':r['source']=pin(ROOT/'src/native/md5-stream062/sdk_md5062ag.h')
        elif name=='wrong-definition':r['sourceName']='unimplemented_sdk_digest'
        elif name=='wrong-entry':r['reportEntryBytes']-=4
        elif name=='wrong-confidence':r['functionalConfidence']='high'
        elif name=='wrong-range':r['originalInstructionRanges'][0]['endExclusive']-=4
        else:r['canonicalIdentity']['address']+=4
        path=folder/(name+'.json');path.write_text(json.dumps(bad,indent=2)+'\n');invalid=copy.deepcopy(fragment)
        for row in invalid['functions']:row['packet']=pin(path)
        try:functional_report.generate(ROOT,report,invalid)
        except ValueError as error:controls.append(dict(case=name,rejected=True,reason=str(error)))
        else:raise ValueError('Malformed MD5 proof accepted: '+name)
    result=dict(status='four-medium-SDK-MD5-source-proofs-schema-validated-pending-registry',functions=fragment['functions'],
        packet=pin(target),instructionBytes=1444,invariantOnlyInstructionPositions=invariant_pcs,controls=controls,exactMatchingCreditGranted=0)
    (ROOT/'evidence/verification/md5-stream062-functional-validation.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(functions=4,instructionBytes=1444,invariantOnlyPositions=6,malformedProofControls=8)))


if __name__=='__main__':
    main()
