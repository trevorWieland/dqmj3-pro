import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT=Path.cwd().resolve()
sys.path.insert(0,str(ROOT/'toolscripts'))
import ci_native_build as ci
import functional_report
import native_provider_inventory as inventory


def read(path):return json.loads(path.read_bytes())


def pin(path):
    data=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=hashlib.sha256(data).hexdigest())


def main():
    coor_path=ROOT/'evidence/verification/asset062-sdk063-coordinator-873f53b.json'
    coor=read(coor_path)
    if (coor['pipelineTests']!=114 or coor['identicalArtifactPairs']!=580
            or coor['providerCases']!=681 or coor['fourProfileObservations']!=2724
            or coor['standaloneSdk']['identicalArtifactPairs']!=10
            or coor['standaloneSdk']['returningControls']!=9):raise ValueError('Combined provider review incomplete')
    registry=read(ROOT/'config/functional-functions.json')
    if len(registry['functions'])!=367:raise ValueError('Unexpected pre-admission registry')
    composed,_=inventory.compose(ROOT,read(ROOT/registry['census']['path']))
    canonical={x['address']:x for x in composed['functions']}
    existing={int(x['name'][3:],16)for x in registry['functions']}
    existing.update(x['address']for x in ci.accepted_functions(ROOT))
    mappings=[x for x in read(ROOT/'config/source-names.json')['mappings']
        if x['sourcePath'].startswith(('src/native/wave062/','src/native/wave063/'))]
    if len(mappings)!=20:raise ValueError('Provider source mapping changed')
    source_scope=ROOT/'evidence/lanes/native-asset062/stage-v1/provider-scope-review.json'
    scope=read(source_scope);coverage={x['address']:x for x in scope['coverage']}
    invariants_path=ROOT/'evidence/verification/asset062-append-entry-invariants.json'
    invariants=read(invariants_path)
    if invariants['unexecutedInstructionCount']!=67:raise ValueError('Append invariants incomplete')
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if hashlib.sha256(image).hexdigest()!=registry['moduleSha256']:raise ValueError('Original image changed')
    functions=[]
    for alias in mappings:
        address=int(alias['symbol'][3:],16);original=canonical[address]
        if address in existing:raise ValueError('Provider overlaps previously credited function')
        for owner in existing:
            if any(max(a['start'],b['start'])<min(a['endExclusive'],b['endExclusive'])
                    for a in original['ranges']for b in canonical[owner]['ranges']):raise ValueError('Provider ownership overlaps credited code')
        body=b''.join(image[p['start']-0x100000:p['endExclusive']-0x100000]for p in original['ranges'])
        entry=next(p for p in original['ranges']if p['start']<=address<p['endExclusive'])
        observed=coverage.get(address)
        width=2 if original['mode']=='Thumb'else 4
        pcs=len(body)//width;unhit=[]if observed is None else observed['unvisitedPcs']
        if observed and (observed['instructionBytes']!=len(body)or observed['instructionPcs']!=pcs):raise ValueError('Provider canonical scope differs')
        if address==0x79a3ec:
            if unhit!=invariants['unexecutedPcs']:raise ValueError('Append unvisited list differs from invariant proof')
        elif unhit:raise ValueError('Unreviewed unexecuted provider code')
        functions.append(dict(symbol=alias['symbol'],source=pin(ROOT/alias['sourcePath']),
            sourceName=alias['sourceName'],symbolNames=pin(ROOT/'include/bytematch_names.h'),
            canonicalIdentity=dict(address=address,mode=original['mode'],programId=registry['programId'],moduleSha256=registry['moduleSha256']),
            originalInstructionBytes=len(body),originalInstructionRanges=original['ranges'],
            originalBodySha256=hashlib.sha256(body).hexdigest(),reportEntryBytes=entry['endExclusive']-address,
            exactObjectSpan=False,exactLinkedSpan=False,functionalConfidence='medium',
            behavior=dict(allPassed=True,boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(coor_path),originalInstructionPcs=pcs,
                originalInstructionPcsVisited=pcs-len(unhit),unexecutedOriginalPcs=unhit,
                unexecutedInstructionsNeverClaimedExecuted=True,
                conditionalClosedGraphArgument=pin(invariants_path)if unhit else pin(source_scope),
                actualWindowsAndHighAddressA64=True,sourceGraphOriginalCodeMapped=False,
                returningSourceControlExecutions=48,wholeResourceCallerQualified=False,
                metadataSenderWholeFunctionQualified=False,physicalAndroidOrWholeGameClaimed=False,
                portableExplicitStateApi=address==0x100670,volatileReturnEqualityClaimed=False,
                domain='Valid initialized aligned live storage; nonalias bounded buffers and representable vector/array sizes. Record append uses a distinct successful nonreentrant allocation service; full canonical append scope includes67 invariant-only instructions. Resource destruction reentry/release-before-clear is qualified. Manager/sink providers are typed partial views, not complete startup. Serialized words remainU32; native pointers retain full width. Seed state effects are qualified under the explicit-state portable API; raw volatile-return-register equality is not claimed. Whole251a50 resource caller, metadata sender stack tail, arbitrary allocation failure and unsupported SDK/startup remain unqualified.',
                confidenceJustification='Medium: complete canonical extents and original-byte identity; independent committed-source replay, complete declared raw arenas against separate models, native Windows/highA64 execution, byte-identical source-copy artifacts and returning wrong-source controls. All exclusions and67 append invariants remain explicit.')))
    if sum(x['originalInstructionBytes']for x in functions)!=2000:raise ValueError('Provider footprint differs')
    dependencies={}
    for folder in ['wave062','wave063']:
        for path in(ROOT/'src/native'/folder).iterdir():
            if path.suffix in ['.c','.h']:dependencies[path.relative_to(ROOT).as_posix()]=pin(path)
    build_units=read(ROOT/'config/build-units.json')['units']
    for source in ['src/native/wave012/memory_ops.c','src/native/wave013/outer_arena.c']:
        unit=next(x for x in build_units if x['source']==source)
        for relative in [source,*unit['headers']]:dependencies[relative]=pin(ROOT/relative)
    deps=[dependencies[k]for k in sorted(dependencies)]
    packet=dict(schemaVersion=1,status='coordinator-reviewed-bounded-resource-and-sdk-providers',
        moduleSha256=registry['moduleSha256'],functions=functions,
        headers=[x for x in deps if x['path'].endswith('.h')],sourceDependencies=deps,
        qualificationOnlySourceNames=['fixture062.c','heap_fixture062.c','command_fixture062.c','lifetime_fixture062.c','fixture063.c'],
        originalPackets=[pin(coor_path),pin(source_scope),pin(invariants_path),
            pin(ROOT/'evidence/verification/sdk063-peer-review.json')],producer=pin(Path(__file__).resolve()),
        acceptedSourceCreditGranted=0,exactMatchingClaimed=False,confirmedOverallSourceCoverageClaimed=False)
    output=ROOT/'evidence/functional/asset062-sdk063.json';output.write_text(json.dumps(packet,indent=2)+'\n')
    fragment=copy.deepcopy(registry);fragment['functions']=[dict(name=x['symbol'],confidence='medium',packet=pin(output),sourceLookup='repository-function-index')for x in functions]
    progress=read(ROOT/'build/update-content0/report.json')
    if len(functional_report.generate(ROOT,progress,fragment)['functions'])!=20:raise ValueError('Provider functional schema incomplete')
    folder=ROOT/'work/asset062-admission/negative-proofs-attempt002';folder.mkdir(exist_ok=False);controls=[]
    for name in ['missing-thumb-range','wrong-byte-count','wrong-source','wrong-mode','unsupported-confidence']:
        value=copy.deepcopy(packet);entry=next(x for x in value['functions']if x['symbol']=='fn_00100670')
        if name=='missing-thumb-range':entry['originalInstructionRanges']=[]
        elif name=='wrong-byte-count':entry['originalInstructionBytes']+=2
        elif name=='wrong-source':entry['source']=pin(ROOT/'src/native/wave063/sdk_words063.h')
        elif name=='wrong-mode':entry['canonicalIdentity']['mode']='ARM'
        else:entry['functionalConfidence']='high'
        path=folder/(name+'.json');path.write_text(json.dumps(value,indent=2)+'\n');test=copy.deepcopy(fragment)
        for row in test['functions']:row['packet']=pin(path)
        try:functional_report.generate(ROOT,progress,test)
        except ValueError as error:controls.append(dict(case=name,rejected=True,reason=str(error)))
        else:raise ValueError('Malformed provider proof accepted: '+name)
    proof=dict(status='twenty-medium-providers-schema-validated-pending-registry',packet=pin(output),
        functions=fragment['functions'],controls=controls,instructionFootprintBytes=2000,
        sourceCreditGranted=0,exactMatchingCreditGranted=0,wholeResourceCallerClaim=False,
        producer=pin(Path(__file__).resolve()))
    (ROOT/'evidence/verification/asset062-sdk063-functional-validation.json').write_text(json.dumps(proof,indent=2)+'\n')
    print(json.dumps(dict(functions=20,instructionBytes=2000,malformedProofControls=len(controls))))


if __name__=='__main__':main()
