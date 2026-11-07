import random
import zlib
from first061 import compressed


def corpus():
    rows=[];randomizer=random.Random(610044)
    for count in [0,1,31,257,1024,4096,8192]:
        payload=bytes((i*7)%23 for i in range(count))if count%2 else bytes(randomizer.randrange(256)for _ in range(count))
        for level,strategy in [(0,0),(6,0),(6,4)]:
            image=compressed(payload,level,strategy)
            for capacity in [0,1,max(0,count-1),count,count+64]:
                for seed in [0,0xa7]:rows.append(dict(kind='valid-zlib',image=image,payload=payload,capacity=capacity,seed=seed))
    payload=b'actual game boundary error and table data '*31;image=compressed(payload)
    for at in [0,1,2,5,len(image)-4,len(image)-1]:rows.append(dict(kind='truncated',image=image[:at],capacity=2048,seed=0xa7))
    for at in [0,1,2,len(image)-4,len(image)-3,len(image)-2,len(image)-1]:
        modified=bytearray(image);modified[at]^=0x80;rows.append(dict(kind='corrupted',image=bytes(modified),capacity=2048,seed=0))
    for window in [-15,31]:rows.append(dict(kind='wrong-wrapper-format',image=compressed(payload,window=window),capacity=2048,seed=0xa7))
    dictionary=b'game dictionary common asset prefix';encoder=zlib.compressobj(zdict=dictionary);rows.append(dict(kind='dictionary-required-without-setter',image=encoder.compress(dictionary*3)+encoder.flush(),capacity=2048,seed=0))
    return rows


def baseline():
    rows=[]
    for payload in [b'',b'a',b'game asset payload '*97,bytes(range(256))*13]:
        for level,strategy in [(0,0),(6,0),(6,4)]:
            for capacity in [0,max(0,len(payload)-1),len(payload),len(payload)+512]:
                rows.append(dict(kind='preserved-first-baseline',image=compressed(payload,level,strategy),payload=payload,capacity=capacity,seed=0xa7))
    return rows
