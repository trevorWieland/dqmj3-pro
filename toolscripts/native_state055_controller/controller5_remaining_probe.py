import json
from controller5_measure import WORK,pin,original_image
from controller5_reference import execute
from controller5_program_target_probe import source


def cases():
    bits=[0,0x80000000,1,0x80000001,0x3f000000,0xbf000000,0x3f7fffff,0x3f800000,0x3f800001,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc01234,0xffc01234]
    resource={0:1,0x81c:0xffffffff,**{0x804+index*4:0 for index in range(6)}}
    for index in range(256):
        resource[4+index*4]=bits[index%len(bits)]
        resource[0x404+index*4]=bits[(index*3+1)%len(bits)]
    for label,selected,mask in [('texture',{0xe0c:1,0x594:0xc000,0x624:0},32),('fog',{0x624:1},16),('components',{0x624:7},0x2000000),('all',{0x590:1,0xa0c:63,0xe0c:1,0x594:0xc000,0x624:7},0xffffffff)]:
        yield dict(label=label+'-initial-edge-floats',selected=True,clip=False,rect=[0,0,0,0],size=[640,480],capacity=8192,flags=64,mask=mask,
                   selected_words=selected,context_words={0x74:1},resource_words=resource,storage_provider=True)


def run():
    image=original_image();claim=json.loads((WORK/'claim.json').read_text());rows=[]
    for case in cases():
        a=execute(case,image,claim)
        print('REF',case['label'],a['returned'],a.get('error'),flush=True)
        assert a['returned']
        b=source(case)
        different=[key for key in ['finalArenaSha256','finalControlSha256','finalPair','finalStageMode','storageProviderCursor','storageProviderObservationsSha256','allocationCacheObservations']if a.get(key)!=b.get(key)]
        rows.append(dict(input=case,original=a,source=b,different=different))
        print('COMPARE',case['label'],different,flush=True)
    path=WORK/'remaining-tables-first.private.json';path.write_text(json.dumps(dict(cases=rows,producer=pin(__file__),wholeControllerQualified=False),indent=2)+'\n')
    print(json.dumps(dict(report=pin(path))),flush=True)


if __name__=='__main__':run()
