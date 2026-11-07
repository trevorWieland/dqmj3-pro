import json

from native_wave013_common import ROOT,OUT,MODULE_SHA,record,save,sha
from native_wave013_nfa_original import load


NEW=[0x4c1f60,0x4c2a00,0x4c2c5c,0x4c2c80,0x6d4080,0x75559c]


def claim():
    original=load(NEW)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    census=json.loads((ROOT/original['census']['path']).read_text())
    known={row['address']:row for row in census['functions']}
    rows=[]
    for address in NEW:
        row=original['functions'][address]
        entry=known[address]
        rows.append({'canonicalIdentity':{'build':'owner-archive-update','programId':'0004000e001acb00',
            'module':'content0/.code-decompressed','moduleSha256':MODULE_SHA,'address':address,'mode':row['mode']},
            'instructionRanges':row['instructionRanges'],'literalPoolRanges':row['literalPoolRanges'],
            'instructionBytes':entry['textBodyBytes'],'directCalls':entry['calledFunctionAddresses'],
            'ownership':'frozen-seeded-census','sourceCreditRequested':0})
    root=known[0x4c3c20]
    pins=[record(OUT/'nfa/packet.json'),record(OUT/'nfa/verification.json'),
          record(ROOT/'evidence/lanes/wave012-native/transition-graph/packet.json'),
          record(OUT/'control-graph/packet.json'),record(ROOT/'evidence/lanes/wave010-native/packet.json')]
    value={'schemaVersion':1,'status':'claimed-complete-DFA-range-and-driver-frontier-before-source',
           'moduleSha256':MODULE_SHA,'producer':record(__import__('pathlib').Path(__file__)),
           'functions':rows,'newCandidateFunctions':len(rows),
           'candidateInstructionBytes':sum(row['instructionBytes'] for row in rows),
           'frozenSourceDependencies':pins,'outerRootNotYetClaimedAsSource':0x4c3c20,
           'outerRootCanonicalRanges':root['ranges'],'matchingSourceCreditGranted':0,
           'method':'Frozen census extents plus full original PC-relative pool decoding; no historical-boundary or source-completeness expansion',
           'logicalAllocationContract':'Keep target logical counts: pointer table ceil(N/4) blocks, membership ceil(N/16), MatchState3, edge2, range1. Physical blocks16 target/32 native. Raw membership bytes stay N.'}
    save(OUT/'dfa-claim.json',value)
    print(json.dumps({'functions':len(rows),'instructionBytes':value['candidateInstructionBytes']}),flush=True)


if __name__=='__main__':
    claim()
