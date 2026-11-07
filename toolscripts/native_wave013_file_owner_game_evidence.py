from native_wave013_file_owner_original import load
from native_wave013_file_owner_evidence import evidence_inputs,headers
from native_wave013_dfa_boundaries import incoming_witnesses
from native_wave013_common import ROOT,OUT,MODULE_SHA,sha,record


NEW=[0x246e00,0x246e68,0x246e74,0x4c3b1c,0x6b5424]
OUTPUT=OUT/'file/owner/game'


def measured(source,reached):
    original=load(NEW)
    witnesses=incoming_witnesses(original,{'tables':[]},NEW)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    rows=[]
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
    if sum(row['originalInstructionBytes'] for row in rows)!=520:raise ValueError('Game complete extent total differs')
    return rows


def prerequisites():
    return [*[path for path in evidence_inputs() if path.name!='attempts.json'],
        OUT/'file/owner/orchestration/frozen-manifest.json',OUT/'file/owner/mount/frozen-manifest.json',
        OUT/'file/owner/game/initial-claim.json',OUT/'file/owner/mount-reference-entry-proposal.json',
        OUT/'file/owner/reference-sdk-exchange.json',ROOT/'evidence/lanes/executable-scope/scope.json']
