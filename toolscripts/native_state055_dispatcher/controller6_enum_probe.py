import json
import struct
from controller6_measure import WORK,pin
from controller6_reference import execute as original
from controller6_uniform_probe import machine,Windows
from controller6_property_probe import independent
from native_wave014_oracle import original_image


def cases():
    values=[0,0.25,0.5,0.75,1,1.25,1.5,2,2.25,2.5,3,4,4.5,8,8.25,-1,float('inf'),float('-inf'),float('nan')]
    for operation in[*range(0xcf,0xd6),*range(0x10e,0x114)]:
        for profile,value in enumerate(values):
            for force in[0,1]:
                bits=struct.unpack('<I',struct.pack('<f',value))[0]
                yield dict(label=f'enum-{operation:03x}-{profile}-{force}',location=0x40000|(operation<<2),input_words=[bits]*64,
                           components=4,count=1,context_words={12:force},selection_words={0x7d0:0xa5c39e17,0x7d8:0x1234,0x7dc:0x98,0x7e0:0x6701},
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
            if (index+1)%100==0:print('enum frontier',index+1,flush=True)
    except BaseException as error:
        (WORK/'attempts/enum-frontier-failure.json').write_text(json.dumps(dict(input=case,error=repr(error),completedSets=len(rows)),indent=2)+'\n');raise
    finally:native.close()
    out=WORK/'enum-component-frontier.json'
    out.write_text(json.dumps(dict(status='thirteen-enum-branches-only-full-dispatcher-still-in-progress',producer=pin(__file__),caseSets=len(rows),observations=len(rows)*4,cases=rows,
                                  wholeFunctionClaimed=False,sourceCreditGranted=0,androidOsOrDeviceClaimed=False),separators=(',',':'))+'\n')
    print(json.dumps(dict(report=pin(out),sets=len(rows),observations=len(rows)*4)))


if __name__=='__main__':run()
