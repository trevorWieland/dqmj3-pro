import json
from controller6_measure import WORK,pin
from controller6_reference import execute as original
from controller6_uniform_probe import machine,Windows
from controller6_property_probe import independent
from native_wave014_oracle import original_image


def cases():
    profiles=[0,0x80000000,1,0x3f800000,0xbf800000,0x3f000000,0x3eaaaaab,0x40000000,0x47000000,
              0x7f800000,0xff800000,0x7fc12345,0x7f812345,0x00800000,0x7f7fffff]
    for operation in[1,0x1f,0x20,0x21,0x23,0x26,0x28,0x29,0x2a,0x2c]:
        for profile,value in enumerate(profiles):
            for force in[0,1]:
                for bias_mode in([0,1,2] if operation==0x21 else[0]):
                    context={12:force,0x44:0x3f000000,0x4c:0x3f400000,0x50:0x3e000000,0x54:int(bias_mode!=0),0x68c:int(bias_mode==2)}
                    yield dict(label=f'scalar-{operation:03x}-{profile}-{force}-{bias_mode}',location=0x40000|(operation<<2),
                               input_words=[value,value^0x80000000,0x3f000000,value]*16,components=4,count=1,context_words=context,
                               selection_words={0xe3c:0x3e800000,0xe40:0x3f000000,0x7d8:0x1234,0x7dc:0x98,0x7e0:0x6701},
                               cache_words={0x100c+identifier*4:0x5a55aa55 for identifier in range(189)})


def run():
    claim=json.loads((WORK/'claim.json').read_text());image=original_image();rows=[]
    native=Windows('state_dispatch_property_component6',independent)
    try:
        for index,case in enumerate(cases()):
            expected=original(case,image,claim);assert expected['returned']
            arm=machine(case,False,'state_dispatch_property_component6',independent)
            assert arm['finalArenaSha256']==expected['finalArenaSha256'],case['label']
            rows.append(dict(input=case,original=expected,sourceArm=arm,actualWindows=native.execute(case),highAarch64=machine(case,True,'state_dispatch_property_component6',independent)))
            if (index+1)%100==0:print('scalar frontier',index+1,flush=True)
    except BaseException as error:
        (WORK/'attempts/scalar-frontier-failure.json').write_text(json.dumps(dict(input=case,error=repr(error),completedSets=len(rows)),indent=2)+'\n');raise
    finally:native.close()
    out=WORK/'scalar-component-frontier.json'
    out.write_text(json.dumps(dict(status='ten-scalar-branches-only-full-dispatcher-still-in-progress',producer=pin(__file__),caseSets=len(rows),observations=len(rows)*4,cases=rows,
                                  wholeFunctionClaimed=False,sourceCreditGranted=0,androidOsOrDeviceClaimed=False),separators=(',',':'))+'\n')
    print(json.dumps(dict(report=pin(out),sets=len(rows),observations=len(rows)*4)))


if __name__=='__main__':run()
