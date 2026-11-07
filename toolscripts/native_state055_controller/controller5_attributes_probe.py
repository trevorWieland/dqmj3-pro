import json
from controller5_measure import WORK,pin,original_image
from controller5_reference import execute
from controller5_program_target_probe import source


def cases():
    for label,buffered,constants in [('empty',[],[]),('one-constant',[],[3]),('one-buffer',[(0,3,0x1406,12,0x10000000)],[]),('buffer-and-constant',[(2,3,0x1406,16,0x10000000)],[3]),('interleaved',[(0,1,0x1406,16,0x10000000),(2,3,0x1406,16,0x10000004)],[])]:
        selected={0x358+i*12:0xffffffff for i in range(16)}
        context={};bytes_={0x19:1}
        for i in constants:selected[0x358+i*12]=i
        for i,components,type_,stride,address in buffered:
            selected[0x358+i*12]=i
            context.update({0x45c+i*24:components,0x460+i*24:type_,0x464+i*24:stride,0x468+i*24:0x200e000,0x6a4+i*4:address})
            bytes_[0x46d+i*24]=1
        yield dict(label='attributes-'+label,selected=True,clip=False,rect=[0,0,0,0],size=[640,480],capacity=8192,flags=0x200,mask=0x8042,
                   selected_words=selected,context_words=context,context_bytes=bytes_)


def run():
    image=original_image();claim=json.loads((WORK/'claim.json').read_text());rows=[]
    for case in cases():
        a=execute(case,image,claim)
        print('REF',case['label'],a['returned'],a.get('error'),flush=True)
        if not a['returned']:break
        b=source(case)
        diff=[key for key in ['finalArenaSha256','finalControlSha256','finalPair','finalStageMode']if a[key]!=b[key]]
        rows.append(dict(input=case,original=a,source=b,different=diff));print('ARM',case['label'],diff,flush=True)
    out=WORK/'attributes-first.private.json';out.write_text(json.dumps(dict(cases=rows,producer=pin(__file__),wholeControllerQualified=False),indent=2)+'\n')
    print(json.dumps(dict(report=pin(out))),flush=True)


if __name__=='__main__':run()
