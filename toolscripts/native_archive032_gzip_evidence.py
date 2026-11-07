from native_wave013_common import ROOT,record,sha
from native_wave013_file_owner_evidence import headers


def inputs(reference):
    paths={*ROOT.joinpath('toolscripts').glob('native_archive032_gzip*'),
        *ROOT.joinpath('src/native/wave036').rglob('*.c'),*ROOT.joinpath('src/native/wave036').rglob('*.h'),
        ROOT/'src/native/wave032/archive_lookup.c',ROOT/'src/native/wave032/archive_members.c',
        ROOT/'src/native/wave032/archive_owner.c',ROOT/'tools/clang-21/clang.exe',ROOT/'tools/clang-21/ld.lld.exe',ROOT/'src/native/wave002/views_03.c',
        ROOT/'src/native/wave032/third_party/zlib-1.2.7/zlib.h',ROOT/'src/native/wave032/third_party/zlib-1.2.7/zconf.h',
        ROOT/'toolscripts/native_archive032_zlib.py',ROOT/'toolscripts/native_archive032_zlib.lock.json',
        ROOT/'toolscripts/native_archive032_assets.py',ROOT/'toolscripts/native_wave013_common.py',
        ROOT/'toolscripts/native_wave012_arena_oracle.py',ROOT/'toolscripts/native_wave012_ctor_runtime.py',
        ROOT/'toolscripts/native_wave013_file_owner_reference_image.py',ROOT/'toolscripts/native_wave013_dfa_boundaries.py',
        ROOT/'toolscripts/native_wave013_file_owner_evidence.py',ROOT/'toolscripts/inventory.py',
        ROOT/'toolscripts/native_census_overlay.py',ROOT/'config/native-function-overlays.json',ROOT/'project.json',
        ROOT/'evidence/inventory/base.json',ROOT/'docs/native-archive032-gzip.md',
        ROOT/'tests/test_native_archive032_gzip.py',ROOT/'evidence/lanes/native-archive032/gzip-attempts.json',ROOT/'evidence/lanes/native-archive032/gzip-boundary-claim.json'}
    paths|=set(headers(list(ROOT.joinpath('src/native/wave036').glob('*.c'))+[ROOT/'src/native/wave032/archive_owner.c',ROOT/'src/native/wave002/views_03.c']))
    def walk(value):
        if isinstance(value,dict):
            if {'path','sha256','bytes'}<=value.keys():paths.add(ROOT/value['path'])
            for child in value.values():walk(child)
        elif isinstance(value,list):
            for child in value:walk(child)
    walk(reference.pins)
    if any(not path.is_file() for path in paths):raise ValueError('A declared gzip proof input is missing')
    return sorted(paths)


def graph_record(graph):
    return {key:graph[key] for key in ['linkedElf','linkerScript','objects','executableRanges','readonlyRanges',
        'writableRanges','mutableSourceObjects']}|{'functions':[{'symbol':name,**{key:value for key,value in row.items() if key!='raw'}}
            for name,row in sorted(graph['functions'].items())]}


def function_rows(original,graphs,reached):
    rows=[]
    for target in original['functions']:
        candidates={}
        for name,graph in graphs.items():
            row=graph['functions'][target['symbol']]
            candidates[name]={'object':row['objectOrigin'],'linkedSpanSha256':row['linkedSpanSha256'],
                'instructionAndPoolBytes':row['bytes'],'mappingSpans':row['mappingSpans'],'poolBytes':row['poolBytes']}
        selected=candidates['modern14'];owned=set(target['instructionAddresses'])
        if not target['literalPoolRanges']:
            original_sha=target['instructionRanges'][0]['sha256']
            for candidate in candidates.values():
                if candidate['object']['sha256']==original_sha and candidate['linkedSpanSha256']==original_sha:
                    raise ValueError('Unexpected exact candidate needs separate ownership review')
        rows.append({**target,'source':selected['object']['source'],'candidateObject':selected['object'],
            'candidateLinkedSpanSha256':selected['linkedSpanSha256'],
            'candidateInstructionAndPoolBytes':selected['instructionAndPoolBytes'],
            'candidateMappingSpans':selected['mappingSpans'],'candidatePoolBytes':selected['poolBytes'],
            'dependencyProfileCandidates':candidates,'exactLinkedSpanCandidate':False,
            'originalInstructions':len(owned),'originalInstructionsReached':len(owned&reached),
            'unhitInstructionAddresses':sorted(owned-reached),'provenExcludedInstructionAddresses':[]})
    return rows


def getter(original,graphs,image):
    row=original['existingAcceptedSourceDependencies'][0];address=row['address'];raw=image[address-0x100000:address-0x100000+12]
    candidates={}
    for profile,graph in graphs.items():
        source=graph['functions']['archive_gzip_output_size']
        if source['raw']!=raw or source['objectOrigin']['relocations'] or source['poolBytes']:
            raise ValueError('Existing getter native adapter lost ARM body invariance')
        candidates[profile]={'object':source['objectOrigin'],'linkedSpanSha256':source['linkedSpanSha256'],
            'armBodyInvariant':True,'newMatchingCreditGranted':0}
    return {**row,'nativeAdapterCandidates':candidates,'originalSpanSha256':sha(raw),'newSourceCreditGranted':0}
