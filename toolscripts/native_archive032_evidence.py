from native_wave013_common import ROOT,record,sha
from native_archive032_build import SOURCES
from native_archive032_original import load
from native_wave013_dfa_boundaries import incoming_witnesses
from native_wave013_file_owner_evidence import headers


PRODUCERS=['native_archive032_packet.py','native_archive032_evidence.py','native_archive032_verify.py',
    'native_archive032_original.py','native_archive032_reference.py','native_archive032_oracle.py',
    'native_archive032_a64.py','native_archive032_model.py','native_archive032_compare.py',
    'native_archive032_fixtures.py','native_archive032_cases.py','native_archive032_build.py',
    'native_archive032_fixture.h','native_archive032_fixture.c','native_archive032_negative.py',
    'native_archive032_assets.py','native_archive032_mapping.py','native_archive032_platforms.py',
    'native_archive032_zlib.py','native_archive032_zlib.lock.json','native_archive032_survey.java']


def inputs(reference):
    paths={*(ROOT/'toolscripts'/name for name in PRODUCERS),*SOURCES,*headers(SOURCES),
        ROOT/'src/native/wave032/third_party/zlib-1.2.7/zlib.h',ROOT/'src/native/wave032/third_party/zlib-1.2.7/zconf.h',
        ROOT/'docs/native-archive032.md',ROOT/'tests/test_native_archive032.py',
        ROOT/'evidence/lanes/native-archive032/initial-claim.json',
        ROOT/'toolscripts/native_wave013_common.py',ROOT/'toolscripts/native_wave012_arena_oracle.py',
        ROOT/'toolscripts/native_wave012_ctor_runtime.py',ROOT/'toolscripts/native_wave013_dfa_boundaries.py',
        ROOT/'toolscripts/native_wave013_file_owner_evidence.py',ROOT/'toolscripts/native_wave013_file_owner_reference_image.py',
        ROOT/'toolscripts/inventory.py',ROOT/'toolscripts/native_census_overlay.py',ROOT/'config/native-function-overlays.json'}
    def nested(value):
        if isinstance(value,dict):
            if {'path','sha256','bytes'}<=value.keys():paths.add(ROOT/value['path'])
            for child in value.values():nested(child)
        elif isinstance(value,list):
            for child in value:nested(child)
    nested(reference.pins)
    return sorted(paths)


def function_rows(source,reached):
    original=load();table=original['operationTable']
    overlay={'tables':[{'name':'XBB-view-exact-two-slot-prefix','start':table['start'],'sha256':table['sha256'],
        'entries':[{'slotOffset':4*i,'target':target} for i,target in enumerate(table['targets'])]}]}
    witnesses=incoming_witnesses(original,overlay,[row['address'] for row in original['functions']])
    image=(ROOT/'generated/update-content0/code.bin').read_bytes();rows=[]
    for target in original['functions']:
        candidate=source['functions'][target['symbol']];owned=set(target['instructionAddresses'])
        raw=b''.join(image[part['start']-0x100000:part['endExclusive']-0x100000] for part in target['instructionRanges'])
        exact=len(target['instructionRanges'])==1 and not target['literalPoolRanges'] and not candidate['objectOrigin']['relocations'] and raw==candidate['raw']
        rows.append({**target,'source':candidate['objectOrigin']['source'],'callerWitnesses':witnesses[target['address']],
            'originalInstructions':len(owned),'originalInstructionsReached':len(owned&reached),
            'unhitInstructionAddresses':sorted(owned-reached),'provenExcludedInstructionAddresses':[],
            'candidateObject':candidate['objectOrigin'],'candidateLinkedSpanSha256':candidate['linkedSpanSha256'],
            'candidateInstructionAndPoolBytes':candidate['bytes'],'candidateMappingSpans':candidate['mappingSpans'],
            'candidatePoolBytes':candidate['poolBytes'],'exactLinkedSpanCandidate':exact})
    return rows
