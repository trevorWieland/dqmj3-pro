import json
from pathlib import Path

from native_wave013_common import ROOT,OUT,MODULE_SHA,record,save,sha
from native_wave013_nfa_original import load


NEW=[0x4c3c20,0x4c0060,0x4bffa8,0x100b58,0x4c0380,0x4c3b08,0x4c3974,0x158f6c,0x301f50]


def claim():
    original=load(NEW)
    census=json.loads((ROOT/original['census']['path']).read_text())
    known={row['address']:row for row in census['functions']}
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    rows=[]
    for address in NEW:
        row=original['functions'][address]
        incoming=[{'address':entry['address'],'mode':entry['mode']} for entry in census['functions']
                  if address in entry['calledFunctionAddresses']]
        rows.append({'canonicalIdentity':{'build':'owner-archive-update','programId':'0004000e001acb00',
            'module':'content0/.code-decompressed','moduleSha256':MODULE_SHA,'address':address,'mode':row['mode']},
            'instructionRanges':row['instructionRanges'],'literalPoolRanges':row['literalPoolRanges'],
            'instructionBytes':known[address]['textBodyBytes'],'directCalls':known[address]['calledFunctionAddresses'],
            'directCallerEntries':incoming,'ownership':'frozen-seeded-census','sourceCreditRequested':0})
    value={'schemaVersion':1,'status':'claimed-complete-outer-and-literal-frontier-before-source',
           'moduleSha256':MODULE_SHA,'producer':record(Path(__file__)),'functions':rows,
           'newCandidateFunctions':len(rows),'candidateInstructionBytes':sum(row['instructionBytes'] for row in rows),
           'frozenSourceDependencies':[record(OUT/'nfa/packet.json'),record(OUT/'tokenizer/packet.json'),
              record(OUT/'control-graph/packet.json'),record(ROOT/'evidence/lanes/wave010-native/packet.json'),
              record(ROOT/'evidence/lanes/wave012-native/transition-graph/packet.json')],
           'DfaSourceDependencyPendingFreeze':str((OUT/'dfa/packet.json').relative_to(ROOT)).replace(chr(92),'/'),
           'interiorSharedTailEdges':[{'branchAddresses':[0x158f7c,0x158f94],'target':0x301f54,
              'owner':0x301f50,'ownerRanges':known[0x301f50]['ranges'],
              'method':'Direct ARM branch targets inside the complete seeded aligned-zero function; dependency receives zero duplicate byte credit'}],
           'readOnlyLiteralService':[{'address':0x4c3e04,'bytes':2,
              'sha256':sha(image[0x4c3e04-0x100000:0x4c3e06-0x100000]),'role':'NUL UTF16 string',
              'sourceReplacement':'Ordinary constant zero code unit','originalDataSourceCredit':0}],
           'rulePrefixProposal':{'targetBytes':36,'nativeBytes':40,'opaquePrefixBytes':27,
              'signedBitIndexTargetOffset':27,'signedBitIndexNativeOffset':27,
              'opaqueMiddleBytes':4,'scratchPointerTargetOffset':32,'scratchPointerNativeOffset':32,
              'qualifyingReadSites':[0x4c3c44],'fullOwningClassClaimed':False,'qualification':'borrowed measured prefix only'},
           'arenaContract':{'targetLogicalSlotBytes':16,'nativePhysicalSlotBytes':32,'slots':2624,
              'rawBitmapAndHeaderBytes':3072,'storageOffsetTarget':3072,'storageOffsetNative':3072,
              'initialObjectLogicalBlocks':{'lexer':2,'literalMatcher':1,'NfaBuilder':2,'CompileContext':2,'cursor':1}},
           'returnQualification':{'outer':'Actual observed caller ignores private stack-address return; source API void, unknown indirect uses remain unqualified',
              'fastMatcher':'0 unsupported,1 matched,2 supported pattern but not matched',
              'zero':'Destination end pointer after exactly the requested raw byte count'},
           'matchingSourceCreditGranted':0,'method':'Frozen census extents, direct branches, caller loads and private full decompilation; no generated compiler output or emulator source'}
    save(OUT/'outer-claim.json',value)
    print(json.dumps({'functions':len(rows),'instructionBytes':value['candidateInstructionBytes']}),flush=True)


if __name__=='__main__':
    claim()
