import json
import re
import struct

from native_wave013_common import ROOT,OUT,MODULE_SHA,record,sha
from native_wave013_file_owner_original import load
from native_wave013_dfa_boundaries import incoming_witnesses


NEW=[0x44f5b4,0x4c3e74,0x4c42fc,0x4c4358,0x4c43a8,0x6d40e4]


def headers(sources):
    pending=list(sources);found=set()
    while pending:
        path=pending.pop()
        for name in re.findall(r'^#include "([^"\n]+)"',path.read_text(),re.M):
            child=(path.parent/name).resolve()
            if not child.is_file() or not child.is_relative_to(ROOT):raise ValueError('Owner quoted include escapes repository')
            if child not in found:found.add(child);pending.append(child)
    return sorted(found)


def measured():
    original=load(NEW)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('Owner module differs')
    start=0x855dd4;raw=image[start-0x100000:start-0x100000+24]
    words=list(struct.unpack('<6I',raw))
    if words!=[0,0x4c43a8,0,0,0,0x4c3e74]:raise ValueError('Complete measured owner method table differs')
    table={'name':'file-owner-unadjusted-methods','start':start,'bytes':24,'sha256':sha(raw),
        'entries':[{'target':target,'slot':index,'slotOffset':4*index,'thisAdjustment':0,'mode':'ARM'}
            for index,target in enumerate(words) if target]}
    witnesses=incoming_witnesses(original,{'tables':[table]},NEW)
    return original,witnesses,table


def function_rows(source,reached,original,witnesses):
    image=(ROOT/'generated/update-content0/code.bin').read_bytes();rows=[]
    for address in NEW:
        target=original['functions'][address];name='fn_'+format(address,'08x');candidate=source['functions'][name]
        raw=b''.join(image[part['start']-0x100000:part['endExclusive']-0x100000] for part in target['instructionRanges'])
        owned=set(target['instructionAddresses'])
        exact=len(target['instructionRanges'])==1 and not target['literalPoolRanges'] and not candidate['objectOrigin']['relocations'] and candidate['raw']==raw
        rows.append({'canonicalIdentity':{'build':'owner-archive-update','programId':'0004000e001acb00',
            'module':'content0/.code-decompressed','moduleSha256':MODULE_SHA,'address':address,'mode':target['mode']},
            'symbol':name,'source':candidate['objectOrigin']['source'],'inventoryOwnership':'frozen-seeded-census',
            'originalInstructionRanges':target['instructionRanges'],'originalLiteralPoolRanges':target['literalPoolRanges'],
            'originalInstructionBytes':len(raw),'callerWitnesses':witnesses[address],'originalInstructions':len(owned),
            'originalInstructionsReached':len(owned&reached),'unhitInstructionAddresses':sorted(owned-reached),
            'provenExcludedInstructionAddresses':[],'candidateInstructionAndPoolBytes':candidate['bytes'],
            'candidatePoolBytes':candidate['poolBytes'],'candidateMappingSpans':candidate['mappingSpans'],
            'candidateObject':candidate['objectOrigin'],'candidateLinkedSpanSha256':candidate['linkedSpanSha256'],
            'exactLinkedSpanCandidate':exact,'functionalConfidence':'medium','sourceCreditRequested':0})
    if sum(row['originalInstructionBytes'] for row in rows)!=816:raise ValueError('Complete owner sub-batch extent total differs')
    return rows


def evidence_inputs():
    return [OUT/path for path in ['file/owner/orchestration/attempts.json','file/owner/initial-claim.json','file/owner/layout-qualification.json',
        'file/owner/reference-entry-proposal.json','file/owner/heap/packet.json','file/owner/heap/verification.json',
        'file/owner/locale/packet.json','file/owner/locale/verification.json','file/io/packet.json','file/io/verification.json',
        'file/text/packet.json','file/text/verification.json','outer/packet.json','outer/verification.json',
        'dfa/packet.json','nfa/packet.json','tokenizer/packet.json','method-dispatch-overlay.json','nfa-unicode-data-proposal.json']]
