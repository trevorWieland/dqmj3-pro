import copy
import hashlib
import json
from controller5_measure import WORK,pin,original_image
from controller5_reference import execute
from controller5_program_target_probe import source
from controller5_program_native import Windows,machine
from controller5_attributes_extended import cases as attribute_cases
from controller5_remaining_probe import cases as table_cases


def corpus():
    result=[]
    files=['program-target-frontier.json','values-frontier.json','range-frontier.json','footer-frontier.json','lighting-frontier.json',
           'uniform-first.private.json','attributes-sequence.private.json']
    inputs=[]
    for name in files:
        report=json.loads((WORK/name).read_text())
        result.append(pin(WORK/name))
        inputs.extend(row['input']for row in report['cases'])
    inputs.extend(attribute_cases());inputs.extend(table_cases())
    for number,attribute_case in enumerate(list(attribute_cases())[2:5]):
        case=copy.deepcopy(attribute_case);tables=copy.deepcopy(list(table_cases())[-1])
        case['label']='mixed-attributes-tables-'+str(number)
        for key in ['selected_words','context_words','resource_words']:
            case[key]={**case.get(key,{}),**tables.get(key,{})}
        case.update(flags=0x1fff,mask=0xffffffff,storage_provider=True,stream_counts=[128,128],record_count=1)
        inputs.append(case)
    seen=set();unique=[]
    for case in inputs:
        if case['label']in seen:continue
        seen.add(case['label']);unique.append(case)
    out=WORK/'full-corpus.json';out.write_text(json.dumps(dict(inputs=unique,origins=result,originalAnswersReused=False),indent=2)+'\n')
    return unique


def compact(row):
    out=dict(row)
    if 'writes'in out:
        raw=json.dumps(out.pop('writes'),separators=(',',':')).encode()
        out['writeTraceSha256']=hashlib.sha256(raw).hexdigest()
    return out


def run():
    inputs=corpus();image=original_image();claim=json.loads((WORK/'claim.json').read_text());rows=[];windows=Windows()
    try:
        for index,case in enumerate(inputs):
            original=execute(case,image,claim)
            assert original['returned'],(case['label'],original)
            authored=source(case)
            compared=['finalArenaSha256','finalControlSha256','finalPair','finalStageMode']
            if case.get('storage_provider'):compared+=['storageProviderObservationsSha256','storageProviderCursor','allocationCacheObservations']
            different=[key for key in compared if original.get(key)!=authored.get(key)]
            row=dict(inputLabel=case['label'],original=compact(original),sourceArm=authored,different=different)
            rows.append(row)
            if different:
                print('MISMATCH',index,case['label'],different,flush=True)
                continue
            row['actualWindows']=windows.execute(case);row['highAarch64']=machine(case)
            if index%32==0:print(index+1,len(inputs),case['label'],flush=True)
    finally:windows.close()
    path=WORK/'full-frontier.private.json'
    result=dict(schemaVersion=1,status='full-algorithm-unfrozen-qualified-domain-frontier',producer=pin(__file__),corpus=pin(WORK/'full-corpus.json'),
                cases=rows,caseSets=len(rows),sourceCreditGranted=0,wholeControllerAdmitted=False)
    path.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(report=pin(path),sets=len(rows),different=[row['inputLabel']for row in rows if row['different']])),flush=True)


if __name__=='__main__':run()
