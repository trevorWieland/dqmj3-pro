import json
from pathlib import Path
from controller6_measure import WORK,pin,PREDECESSOR,EXPECTED_PREDECESSOR
from controller6_reference import execute as original
from controller6_uniform_probe import machine,Windows,independent as uniform_model,cases as uniforms
from controller6_property_probe import independent as property_model,cases as properties
from controller6_light_probe import cases as groups
from controller6_reduced_probe import cases as reduced
from controller6_fixed_probe import cases as fixed
from controller6_enum_probe import cases as enums
from controller6_scalar_probe import cases as scalars
from controller6_global_probe import cases as globals
from native_wave014_oracle import original_image

MUTATING={1,2,0x13,0x15,0x16,0x1f,0x20,0x21,0x23,0x26,0x27,0x28,0x29,0x2a,0x2c,*range(0x33,0x39),*range(0x41,0x71),*range(0xa1,0xb1),*range(0xcf,0xd6),*range(0x10e,0x121),0x126}


def model(case,before):
    if case['location']==0xffffffff or case.get('count',1)==0:return bytearray(before)
    return property_model(case,before)if case['location']&0x40000 else uniform_model(case,before)


def extra():
    for operation in range(0x127):
        if operation in MUTATING:continue
        for low in[0,3]:
            yield dict(label=f'no-op-{operation:03x}-{low}',location=0x40000|(operation<<2)|low,null_input=True)
    for operation in[0x127,0x128,0x1ff,0x200,0x1234,0x7fff,0xffff]:
        yield dict(label=f'large-no-op-{operation:04x}',location=0x80040000|(operation<<2),null_input=True)
    for location in[0xffffffff,0,0x40004]:
        yield dict(label=f'fast-{location:08x}',location=location,count=0 if location!=0xffffffff else 1,null_input=True,null_globals=True)
    for stage in[0,1]:
        for count in[0xffffffff,0x80000000,0x80000001]:
            for rows in[1,2,3,4]:
                yield dict(label=f'signed-count-{stage}-{count:08x}-{rows}',location=1,components=4,count=count,matrix=int(rows!=1),packing=(stage<<10)|((rows-1)<<13),null_input=True)
        for components in[0,0xffffffff,0x80000000]:
            for matrix in[0,1]:
                yield dict(label=f'signed-dimension-{stage}-{components:08x}-{matrix}',location=1,components=components,count=2,matrix=matrix,packing=(stage<<10)|(2<<13),null_input=True)


def cases():
    for factory in[uniforms,properties,groups,reduced,fixed,enums,scalars,globals,extra]:yield from factory()


def run(stage=None):
    work=Path(stage).resolve()if stage is not None else WORK
    assert work.is_relative_to(WORK)
    work.mkdir(parents=True,exist_ok=True)
    assert pin(PREDECESSOR)['sha256']==EXPECTED_PREDECESSOR and len(MUTATING)==112
    claim=json.loads((WORK/'claim.json').read_text());image=original_image();rows=[]
    native=Windows('state_dispatch6',model,work)
    try:
        for index,case in enumerate(cases()):
            expected=original(case,image,claim);assert expected['returned'],case['label']
            arm=machine(case,False,'state_dispatch6',model,stage=work)
            assert arm['finalArenaSha256']==expected['finalArenaSha256'],case['label']
            rows.append(dict(input=case,original=expected,sourceArm=arm,actualWindows=native.execute(case),highAarch64=machine(case,True,'state_dispatch6',model,stage=work)))
            if (index+1)%200==0:print('whole-entry',index+1,flush=True)
    except BaseException as error:
        (work/'attempts').mkdir(exist_ok=True)
        (work/'attempts/whole-entry-failure.json').write_text(json.dumps(dict(input=case,error=repr(error),completedSets=len(rows)),indent=2)+'\n');raise
    finally:native.close()
    visited=sorted({pc for row in rows for pc in row['original']['visitedPcs']})
    result=dict(status='complete-authored-algorithm-primary-frontier-pending-controls-replay',producer=pin(__file__),predecessor=pin(PREDECESSOR),
                caseSets=len(rows),observations=len(rows)*4,originalVisitedPcs=visited,originalInstructionCount=4574,sourceCreditGranted=0,
                unsupported=['nonfinite RGB/scale multiplication payload propagation','input overlapping mutable state','out-of-backed-range uniform spans','original state construction, hardware, GPU or game execution','observable FP exception status'],
                cases=rows,qualifiedReady=False)
    out=work/'execution.json';out.write_text(json.dumps(result,separators=(',',':'))+'\n')
    print(json.dumps(dict(report=pin(out),sets=len(rows),observations=len(rows)*4,originalVisitedPcs=len(visited))))


if __name__=='__main__':
    import argparse
    parser=argparse.ArgumentParser();parser.add_argument('--stage');args=parser.parse_args()
    run(args.stage)
