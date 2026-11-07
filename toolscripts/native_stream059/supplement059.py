import hashlib
import json
import struct
import zlib
from pathlib import Path
from run059 import Backend,execute,encoded

WORK=Path(__file__).resolve().parent


def gzip_optional(payload,flags):
    head=struct.pack('<BBBBIBB',31,139,8,flags,0x12345678,4,3)
    if flags&4:head+=struct.pack('<H',9)+b'extra\0abc'
    if flags&8:head+=b'game-name-\x80\0'
    if flags&16:head+=b'game-comment\0'
    if flags&2:head+=struct.pack('<H',zlib.crc32(head)&65535)
    body=encoded(payload,-15)
    return head+body+struct.pack('<II',zlib.crc32(payload),len(payload))


def plans():
    result=[]
    payload=b'valid optional header and body '*23
    for flags in range(32):
        image=gzip_optional(payload,flags)
        result.append(dict(window=31,image=image,flush=4,fail_at=0,kind='optional-gzip-'+str(flags)))
        for cut in [11,13,17,23,31]:
            result.append(dict(window=31,image=image[:cut],flush=4,fail_at=0,kind='optional-gzip-truncated-'+str(flags)+'-'+str(cut)))
        if flags&2:
            altered=bytearray(image);altered[len(image)-len(encoded(payload,-15))-9]^=1
            result.append(dict(window=31,image=bytes(altered),flush=4,fail_at=0,kind='bad-header-crc-'+str(flags)))
    dictionary=b'known external dictionary data'
    encoder=zlib.compressobj(zdict=dictionary)
    image=encoder.compress(dictionary+b' hello')+encoder.flush()
    result.append(dict(window=15,image=image,flush=4,fail_at=0,kind='genuine-dictionary-request'))
    for window in [-15,15,31]:
        for level in [0,6]:
            image=encoded(payload,window,level)
            for flush in [0,1,2,3,4,5,6,7,0x7fffffff,-1]:
                result.append(dict(window=window,image=image,flush=flush,fail_at=0,kind='flush-boundary'))
            for fail_at in [2]:
                result.append(dict(window=window,image=image[:-5],flush=0,fail_at=fail_at,kind='window-allocation-failure'))
    return result


def main():
    output=WORK/'supplement-attempt001';output.mkdir(exist_ok=False)
    backends={t:Backend(t,WORK/'build')for t in ['original','arm','windows','a64']}
    records=[]
    try:
        for index,case in enumerate(plans()):
            values={t:execute(b,case['image'],case['window'],2048,case['flush'],case['fail_at'])for t,b in backends.items()}
            if any(v!=values['original']for v in values.values()):
                (output/'failure.json').write_text(json.dumps(dict(index=index,kind=case['kind'],inputHex=case['image'].hex(),observations=values),indent=2)+'\n',encoding='utf-8')
                raise ValueError('059 supplemental mismatch retained '+str(index)+' '+case['kind'])
            records.append(dict(index=index,kind=case['kind'],window=case['window'],flush=case['flush'],fail_at=case['fail_at'],inputSha256=hashlib.sha256(case['image']).hexdigest(),observation=values['original']))
        report=dict(status='optional-header-dictionary-flush-failure-cohort-passed',programs=records,sourceCreditGranted=0)
        (output/'report.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8');print('supplement',len(records),'four-profile sets passed')
    finally:backends['windows'].machine.close()

if __name__=='__main__':main()
