import json
from controller5_measure import WORK,pin,original_image
from controller5_reference import execute
from controller5_program_target_probe import source
from controller5_program_native import Windows,machine


def cases():
    bits=[0,0x80000000,1,0x80000001,0x3f000000,0xbf000000,0x3f7fffff,0x3f800000,0x3f800001,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc01234]
    resource={0:1,0x81c:0xffffffff,**{0x804+index*4:0 for index in range(6)}}
    for index in range(256):
        resource[4+index*4]=bits[index%len(bits)]
        resource[0x404+index*4]=bits[(index*3+1)%len(bits)]
    def item(label,fields,context=None,bytes_=None,capacity=8192):
        return dict(label=label,selected=True,clip=False,rect=[0,0,0,0],size=[640,480],capacity=capacity,flags=64,mask=8,
                    selected_words={0x590:1,0x624:0,**fields},context_words={0x74:1,**(context or{})},
                    selected_bytes=bytes_ or{},resource_words=resource,storage_provider=True)
    for enabled in [1,2,4,8,16,32,63]:
        yield item('lighting-slots-'+str(enabled),{0xa0c:enabled})
    for slot in range(8):
        yield item('lighting-light-'+str(slot),{0xa0c:64},{}, {0xa20+slot*112:1})
    for capacity in [0,1,2,261,262,8192]:
        yield item('lighting-capacity-'+str(capacity),{0xa0c:63},capacity=capacity)
    for pending in [0,1,2,127,128,129]:
        case=item('lighting-pending-'+str(pending),{0xa0c:1},{0x10c:1,0x190:pending,0x214:1})
        case['resource_words']={**resource,0x804:0x2014000,0x81c:0xfffffffe}
        yield case


def run():
    image=original_image();claim=json.loads((WORK/'claim.json').read_text());windows=Windows();rows=[]
    try:
        for index,case in enumerate(cases()):
            original=execute(case,image,claim)
            assert original['returned'],case['label']
            authored=source(case)
            compared=['finalArenaSha256','finalControlSha256','finalPair','finalStageMode','storageProviderCursor','storageProviderObservationsSha256','allocationCacheObservations']
            different=[key for key in compared if original.get(key)!=authored.get(key)]
            row=dict(input=case,original=original,sourceArm=authored,different=different)
            rows.append(row)
            if different:
                print('MISMATCH',case['label'],different,flush=True)
                break
            row['actualWindows']=windows.execute(case)
            row['highAarch64']=machine(case)
            print(index+1,case['label'],'passed',flush=True)
    finally:windows.close()
    out=WORK/'lighting-frontier.json'
    report=dict(schemaVersion=1,status='private-partial-controller-lighting-LUT-frontier',cases=rows,caseSets=len(rows),
                producer=pin(__file__),allComparedEqual=all(not row['different']for row in rows),wholeControllerQualified=False,sourceCreditGranted=0)
    out.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(report=pin(out),sets=len(rows),different=[row['input']['label']for row in rows if row['different']])),flush=True)


if __name__=='__main__':run()
