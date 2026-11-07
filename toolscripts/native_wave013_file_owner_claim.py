import json
from pathlib import Path

from native_wave013_common import ROOT,OUT,MODULE_SHA,record,save
from native_wave013_file_owner_original import load


NEW=[0x4c3e08,0x4c3e74,0x4c4068,0x4c42fc,0x4c4358,0x4c43a8,0x4c46e8]


def claim():
    original=load(NEW)
    census=json.loads((ROOT/original['census']['path']).read_text())
    rows=[]
    for address in NEW:
        row=original['functions'][address]
        rows.append({'address':address,'mode':row['mode'],'instructionRanges':row['instructionRanges'],
            'literalPoolRanges':row['literalPoolRanges'],'callerEntries':[item['address'] for item in census['functions']
                if address in item['calledFunctionAddresses']],'sourceCreditRequested':0})
    result={'schemaVersion':1,'status':'candidate-owner-family-measured-before-source','moduleSha256':MODULE_SHA,
      'producer':record(Path(__file__)),'originalReader':record(ROOT/'toolscripts/native_wave013_file_owner_original.py'),
      'functions':rows,'candidateFunctions':7,'candidateInstructionBytes':1528,'constructorMinimumTargetViewBytes':49,
      'fullClassSizeClaimed':False,'ownerVtable':{'address':0x855dd4,'destructorSlotOffset':4,
        'destructorTarget':0x4c43a8,'applySlotOffset':20,'applyTarget':0x4c3e74,'otherSlotsUnqualified':True},
      'embeddedAllocation':{'targetOffset':4,'targetMinimumBytes':17,
        'fields':[{'targetOffset':0,'role':'intrusive next pointer'},{'targetOffset':4,'role':'intrusive previous pointer'},
          {'targetOffset':8,'role':'allocation data pointer'},{'targetOffset':12,'role':'physical allocation byte count'},
          {'targetOffset':16,'role':'allocation flag byte'}],
        'readWriteWitnessFunctions':[0x14e0a8,0x15e1b0,0x44f54c,0x44f5b4],'nativePointersWillRemainTyped':True},
      'storagePartition':{'originalLogicalRequestBytes':65536,'arenaScratchBytes':45056,'fileBufferOffset':45056,
        'fileBufferBytes':16384,'resourceWorkOffset':61440,'resourceWorkBytes':2048,'candidateStorageOffset':63488,
        'candidateStorageBytes':2048,'nativeArenaBlocksWidenOnly':True,'frozenArenaLogicalRequestsUnchanged':True},
      'qualifiedOwnerOffsets':{'initializedByte':24,'mountedByte':25,'atSignBypassByte':26,'fileIdByte':27,
        'basePointer':28,'scratchPointer':32,'fileBufferPointer':36,'resourceWorkPointer':40,'candidateStoragePointer':44,'finalByte':48},
      'nativeDesign':'Separate expanded typed owner/storage; use borrowed frozen FileRuleView adapters rather than encode native pointers in opaque bytes',
      'serviceClosureStillUnderReview':['heap allocation/free rings and synchronization','archive mount/open/read/release',
        'UTF16 decimal path formatting','configuration language and region queries','owner deallocation'],
      'surveyReceipts':[record(ROOT/'work/wave013-native'/folder/'receipt.private.json') for folder in
        ['file-owner-survey','file-owner-dependency-survey','file-owner-service-survey']],
      'frozenHeadersChanged':False,'sourceNotYetWritten':True,'sourceCreditGranted':0}
    save(OUT/'file/owner/initial-claim.json',result)
    print(json.dumps({'functions':7,'instructionBytes':1528,'status':result['status']}),flush=True)


if __name__=='__main__':
    claim()
