import hashlib
import json
import struct
from controller8_measure import ROOT,WORK,pin


def defaults():
    values=[0]*189;formats=[0]*189
    def put(index,value,mask=15):values[index]=value;formats[index]=mask
    put(41,0x1000,2)
    for index in[42,43,45,46,47,24,25,33,34,35,36,37]:put(index,0)
    put(44,9);put(48,0x1c00301);put(49,0xe0c08000);put(91,0x3c00)
    for index in range(26,33):put(index,0x1f1f1f1f)
    put(39,1);put(23,0xbf0000)
    for light in range(8):
        for component in range(11):
            value={5:0x3c00,7:0x800,8:1,10:0x3f000}.get(component,0)
            put(92+light*11+component,value)
    put(94,0xcc330cc)
    for index,value in enumerate([0xa0280a,0,0x88000400,0xffffffff,1,0x2222222,0,0,0],180):put(index,value)
    for index,value in enumerate([0,0,0x3c00,0x3c00,0,0,0,0x100,0xa00,0xe40100,0x10],80):put(index,value)
    formats[88]=7;formats[89]=13
    for stage in range(6):
        for component in range(5):put(50+stage*5+component,(0xeee0eee if stage==0 else 0xfff0fff)if component==0 else 0)
    return values,formats


def groups():
    first=[0,6,7,8,14,15,16,17,18,19,20,21,22,*range(25,33),38,40]
    auxiliary=list(range(9,14));primary=list(range(1,6));rest=[i for i in range(189)if i not in first+auxiliary+primary]
    rest.remove(84);rest.insert(rest.index(80),84)
    return first,auxiliary,primary,rest


def run():
    values,formats=defaults();reference=json.loads((ROOT/'work/native-state055/controller-init-v7/cache-constructor-reference.private.json').read_text())['cases'][0]['objectWords']
    expected_values=reference[0x1300//4:0x15f4//4];raw=struct.pack('<1501I',*reference);expected_formats=list(raw[0x16b1:0x176e])
    different=[i for i,(a,b)in enumerate(zip(values,expected_values))if a!=b];mask_diff=[i for i,(a,b)in enumerate(zip(formats,expected_formats))if a!=b]
    assert not different and not mask_diff,(different,mask_diff)
    output=dict(status='source-algorithm-defaults-derived-from-constructor-assignments-and-group-loops-before-C',producer=pin(__file__),defaultCount=189,everyDefaultAndFormatMatchesOriginal=True,
                defaultWordsSha256=hashlib.sha256(struct.pack('<189I',*values)).hexdigest(),formatBytesSha256=hashlib.sha256(bytes(formats)).hexdigest(),groupCounts=[len(x)for x in groups()],sourceCreditGranted=0)
    path=WORK/'defaults-model-v1.json';assert not path.exists();path.write_text(json.dumps(output,indent=2)+'\n');print(json.dumps(pin(path)))


if __name__=='__main__':run()
