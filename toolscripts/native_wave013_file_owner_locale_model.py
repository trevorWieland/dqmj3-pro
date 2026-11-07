import random


SIZE=8192
COUNT=0x200
FILES=0x208
CONTEXT=0x700


def encode(specification,base,p,seed,callbacks):
    data=bytearray(random.Random(seed+482).randbytes(SIZE))
    data[FILES:FILES+8]=bytes(range(0xa0,0xa8))
    data[COUNT:COUNT+4]=(0x7f102030).to_bytes(4,'little')
    regions=specification.get('regions',[0,0])
    data[CONTEXT:CONTEXT+4]=bytes([regions[0],regions[-1],specification.get('language',0),0])
    data[CONTEXT+4:CONTEXT+16]=bytes(12)
    data[CONTEXT+16:CONTEXT+16+p]=(base+COUNT).to_bytes(p,'little')
    observations=CONTEXT+16+p
    data[observations:observations+24]=bytes(24)
    for index,name in enumerate(['region','language','failure']):
        data[0x600+index*p:0x600+(index+1)*p]=callbacks[name].to_bytes(p,'little')
    data[0x600+3*p:0x600+4*p]=(base+CONTEXT).to_bytes(p,'little')
    return {'base':base,'pointerBytes':p,'before':bytes(data),'observationsOffset':observations,
        'contextBytes':16+p+24,'specification':specification,
        'mutable':[(COUNT,COUNT+4),(FILES,FILES+8),(CONTEXT+4,CONTEXT+16),(observations,observations+24)]}


def project(original,native):
    expected=bytearray(native['before'])
    expected[COUNT:COUNT+4]=original['after'][COUNT:COUNT+4]
    expected[FILES:FILES+8]=original['after'][FILES:FILES+8]
    trace=original['serviceTrace']
    regions=sum(row['kind']=='region' for row in trace)
    languages=sum(row['kind']=='language' for row in trace)
    expected[CONTEXT+4:CONTEXT+16]=regions.to_bytes(4,'little')+languages.to_bytes(4,'little')+bytes(4)
    at=native['observationsOffset']
    for index,row in enumerate(trace):
        expected[at+index*4:at+index*4+4]=row['watchedCount'].to_bytes(4,'little')
        expected[at+16+index]=1 if row['kind']=='region' else 2
    expected[at+20:at+24]=len(trace).to_bytes(4,'little')
    return bytes(expected)
