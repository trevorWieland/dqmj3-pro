import json
import struct
from pathlib import Path

from native_wave013_common import ROOT,OUT,MODULE_SHA,record,save,sha
from native_wave013_nfa_original import load


NEW=[0x4c4104,0x4c4420,0x4c446c]


def claim():
    original=load(NEW)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    census=json.loads((ROOT/original['census']['path']).read_text())
    known={row['address']:row for row in census['functions']}
    rows=[]
    for address in NEW:
        item=original['functions'][address]
        rows.append({'canonicalIdentity':{'build':'owner-archive-update','programId':'0004000e001acb00',
            'module':'content0/.code-decompressed','moduleSha256':MODULE_SHA,'address':address,'mode':item['mode']},
            'instructionRanges':item['instructionRanges'],'literalPoolRanges':item['literalPoolRanges'],
            'instructionBytes':known[address]['textBodyBytes'],'directCalls':known[address]['calledFunctionAddresses'],
            'callerEntries':[entry['address'] for entry in census['functions'] if address in entry['calledFunctionAddresses']],
            'sourceCreditRequested':0})
    tables=[]
    for name,location,count in [('small-kana',0x4c46d8,12),('halfwidth-voiced',0x4c46dc,21),
        ('halfwidth-semivoiced',0x4c46e0,5),('halfwidth-single',0x4c46e4,58)]:
        address=struct.unpack_from('<I',image,location-0x100000)[0]
        raw=image[address-0x100000:address-0x100000+count*4]
        tables.append({'name':name,'pointerLoadLiteral':location,'start':address,'bytes':len(raw),
            'entries':count,'format':'two little-endian u16 code units per entry','sha256':sha(raw),
            'role':'nonexecutable character mapping data','originalDataSourceCredit':0})
    result={'schemaVersion':1,'status':'claimed-file-and-normalization-frontier-before-source',
        'producer':record(Path(__file__)),'moduleSha256':MODULE_SHA,'functions':rows,
        'candidateFunctions':3,'candidateInstructionBytes':1180,'canonicalInstructionRangesComplete':True,
        'lookupTables':tables,'sourceCreditGranted':0,
        'closedSourceDependency':record(OUT/'outer/packet.json'),
        'providerBoundary':{'logicalMethods':[{'targetVtableOffset':36,'role':'byte size'},
            {'targetVtableOffset':44,'role':'read into supplied buffer and return byte count'}],
            'thisAdjustmentObserved':0,'nativeRepresentation':'explicit typed callbacks; no ARM member-pointer words'},
        'owningViewProposal':{'fullClassClaimed':False,'patternPrefix':'frozen PatternRulePrefix as first member',
            'atSignBypassTargetByteOffset':26,'fileBufferTargetOffset':36,'candidateStorageTargetOffset':44,
            'fileBufferNativeOffset':40,'candidateStorageNativeOffset':56,'targetViewBytes':48,'nativeViewBytes':64,
            'candidateSlots':16,'candidateSlotRawBytes':128,'candidateSlotCodeUnits':64},
        'measuredSemantics':['remove ASCII/U+3000 spaces','fold fullwidth Latin letters and digits only',
            'hiragana range to katakana','twelve measured small-kana enlargements',
            'halfwidth kana single and voiced/semivoiced pairs','detect ASCII/fullwidth at sign',
            'BOM/byte-count checking, newline rule iteration and flag effects before file errors'],
        'qualificationNeeded':['public Unicode provenance for compatible mappings and explicit game-specific exceptions',
            'capacity/alias domains and exact source/output consumption','odd byte counts and signed upper-size comparison',
            'separate persistent buffers and scratch graph lifetimes across repeated pattern-line invocations']}
    save(OUT/'file/claim.json',result)
    print(json.dumps({'functions':3,'instructionBytes':1180,'dataTables':len(tables)}),flush=True)


if __name__=='__main__':
    claim()
