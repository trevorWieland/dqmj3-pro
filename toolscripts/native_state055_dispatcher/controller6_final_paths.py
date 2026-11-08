import json
from controller6_measure import WORK,pin
from controller6_execution import model
from controller6_reference import execute as original
from controller6_uniform_probe import machine,Windows
from controller6_scalar_probe import cases as scalars
from controller6_global_probe import cases as globals
from native_wave014_oracle import original_image


def cases():
    first=next(c for c in scalars()if c['label']=='scalar-01f-3-0-0')
    first=dict(first,label='same-derived-pair-return',selection_words=dict(first['selection_words'],**{'1616':0xbc003d00}))
    yield first
    second=next(c for c in globals()if c['label']=='global-038-0-0-0')
    second=dict(second,label='unscaled-eight-entry-positive-red-clamp',selection_words=dict(second['selection_words'],**{'2644':0x40000000}))
    yield second


def run():
    claim=json.loads((WORK/'claim.json').read_text());image=original_image();rows=[]
    for case in cases():
            expected=original(case,image,claim);assert expected['returned']
            a=machine(case,False,'state_dispatch6',model);b=machine(case,False,'state_dispatch6',model,stage=WORK/'replay-v1')
            assert a==b and a['finalArenaSha256']==expected['finalArenaSha256']
            main=Windows('state_dispatch6',model)
            try:native=main.execute(case)
            finally:main.close()
            copied=Windows('state_dispatch6',model,WORK/'replay-v1')
            try:replay_native=copied.execute(case)
            finally:copied.close()
            assert native==replay_native
            high=machine(case,True,'state_dispatch6',model);replay_high=machine(case,True,'state_dispatch6',model,stage=WORK/'replay-v1');assert high==replay_high
            rows.append(dict(input=case,original=expected,sourceArm=a,actualWindows=native,highAarch64=high,
                             copiedSourceArm=b,copiedActualWindows=replay_native,copiedHighAarch64=replay_high))
    out=WORK/'final-path-supplement.json'
    out.write_text(json.dumps(dict(status='genuine-remaining-data-conditions-supplement',producer=pin(__file__),caseSets=len(rows),observations=len(rows)*7,cases=rows,sourceCreditGranted=0),separators=(',',':'))+'\n')
    print(json.dumps(dict(report=pin(out),visited=sorted({pc for row in rows for pc in row['original']['visitedPcs']}))))


if __name__=='__main__':run()
