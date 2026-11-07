import copy
import json
from controller5_measure import WORK,pin,original_image
from controller5_reference import execute
from controller5_program_target_probe import source
from controller5_attributes_probe import cases as first_cases


def cases():
    yield from first_cases()
    for count in [2,3,4,8,12,13,16]:
        for kind in ['constant','buffered']:
            selected={0x358+i*12:0xffffffff for i in range(16)};context={};bytes_={0x19:1}
            for index in range(count):
                selected[0x358+index*12]=15-index
                if kind=='buffered':
                    context.update({0x45c+index*24:1,0x460+index*24:0x1406,0x464+index*24:4,0x468+index*24:0x200e000,0x6a4+index*4:0x10000000+index*16})
                    bytes_[0x46d+index*24]=1
            yield dict(label=f'attributes-{kind}-{count}',selected=True,clip=False,rect=[0,0,0,0],size=[640,480],capacity=8192,flags=0x200,mask=0x8042,selected_words=selected,context_words=context,context_bytes=bytes_)
    original=list(first_cases())[-1]
    for stride in [0,4,8,12,16,20,28,32,48,64,128]:
        case=copy.deepcopy(original);case['label']='attributes-interleaved-stride-'+str(stride)
        case['context_words'][0x464]=stride;case['context_words'][0x464+2*24]=stride
        yield case
    for type_ in [0x1400,0x1401,0x1402,0x1406,0x7777]:
        for components in [1,2,3,4]:
            case=copy.deepcopy(list(first_cases())[2]);case['label']=f'attributes-type-{type_:x}-{components}'
            case['context_words'][0x460]=type_;case['context_words'][0x45c]=components
            case['context_words'][0x464]=components*({0x1400:1,0x1401:1,0x1402:2,0x1406:4}.get(type_,1))
            yield case


def run():
    image=original_image();claim=json.loads((WORK/'claim.json').read_text());rows=[]
    for case in cases():
        a=execute(case,image,claim);assert a['returned'],(case['label'],a)
        b=source(case)
        diff=[key for key in ['finalArenaSha256','finalControlSha256','finalPair','finalStageMode']if a[key]!=b[key]]
        if diff:
            print('MISMATCH',case['label'],diff,flush=True)
        rows.append(dict(input=case,original=a,source=b,different=diff))
    out=WORK/'attributes-extended.private.json';out.write_text(json.dumps(dict(cases=rows,producer=pin(__file__),wholeControllerQualified=False),indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),sets=len(rows),different=[row['input']['label']for row in rows if row['different']])),flush=True)


if __name__=='__main__':run()
