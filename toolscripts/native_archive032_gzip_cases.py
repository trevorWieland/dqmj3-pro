import random
import zlib


def encode(payload,level=6,strategy=zlib.Z_DEFAULT_STRATEGY):
    stream=zlib.compressobj(level,zlib.DEFLATED,31,8,strategy)
    return stream.compress(payload)+stream.flush()


def cases():
    values=[]
    def add(label,name='fn_005f5eac',**spec):values.append({'label':label,'name':name,'specification':spec})
    payloads=[b'',b'A',bytes(range(256)),b'BCH model material '*73,random.Random(32036).randbytes(1024),b'A'*1700+b'B'*1100+b'C'*700+b'D'*400+b'EFGH'*50]
    for index,payload in enumerate(payloads):
        for strategy,label,level in [(zlib.Z_DEFAULT_STRATEGY,'dynamic',6),(zlib.Z_FIXED,'fixed',6),(zlib.Z_DEFAULT_STRATEGY,'stored',0)]:
            image=encode(payload,level,strategy)
            for owned in [False,True]:
                add(f'{index}-{label}-owned{int(owned)}',input=image,owned=owned)
        image=encode(payload)
        for owned in [False,True]:
            for fail in [2,3,4]:add(f'{index}-failure{fail}-owned{int(owned)}',input=image,owned=owned,fail_at=fail)
    payload=b'bounded resource member '*23;image=encode(payload)
    variants={
        'bad-magic':bytes([image[0]^1])+image[1:],
        'bad-crc':image[:-8]+bytes([image[-8]^1])+image[-7:],
        'bad-length':image[:-4]+(len(payload)+1).to_bytes(4,'little'),
        'truncated-footer':image[:-4],
        'truncated-body':image[:len(image)//2],
        'four-byte-header':image[:4],
        'not-gzip':b'not a gzip image'+bytes(4),
        'trailing-data':image+b'TRAIL',
        'concatenated':image+encode(b'last member')}
    base=bytearray(image[:10]);base[3]=0x1e
    extra=b'XY'+(4).to_bytes(2,'little')+b'DATA'
    optional=bytes(base)+len(extra).to_bytes(2,'little')+extra+b'synthetic.xbb\0'+b'generated test\0'
    optional+=(zlib.crc32(optional)&0xffff).to_bytes(2,'little')
    optional+=image[10:]
    if zlib.decompress(optional,31)!=payload:raise ValueError('Generated optional gzip header is invalid')
    variants['optional-header']=optional
    invalid=bytearray(optional);invalid[len(optional)-len(image)+10-1]^=1
    variants['bad-header-crc']=bytes(invalid)
    for label,value in variants.items():
        for owned in [False,True]:
            add(f'{label}-owned{int(owned)}',input=value,owned=owned,budget=len(payload))
    for budget in [0,len(payload)-1,len(payload)+1,len(payload)+32]:
        for owned in [False,True]:add(f'output-budget{budget}-owned{int(owned)}',input=image,owned=owned,budget=budget)
    for label,value in [('valid',image),('bad-crc',variants['bad-crc']),('truncated',variants['truncated-body'])]:
        add('retained-owns-'+label,input=value,owns=1,budget=len(payload))
    add('initialization-failure-retains-old-owner',input=image,owns=1,old_output=True,fail_at=2)
    for fail in [0,1]:add('constructor-failure'+str(fail),'fn_005f5f90',input=image,fresh=True,fail_at=fail)
    for name in ['fn_005f5d60','fn_005f5d98','fn_006edec8','fn_005f601c']:
        for budget in [0,1,len(payload),len(payload)+9]:add(name+'-budget'+str(budget),name,input=image,budget=budget)
    for owns in [0,1]:
        add('constructor-reentrant-old-owned'+str(owns),'fn_005f5f90',input=image,fresh=True,
            reentry_mode=1,reentry_at=2,owns=owns,old_output=bool(owns))
    add('constructor-reentrant-fresh','fn_005f5f90',input=image,fresh=True,reentry_mode=2)
    add('release-null','fn_005f601c',input=image,fresh=True)
    add('release-owned-output','fn_005f601c',input=image,owns=1,old_output=True)
    for owned in [False,True]:
        for fail in [0,2,3]:
            add('api-lifecycle-owned'+str(int(owned))+'-fail'+str(fail),'gzip-lifecycle',
                input=image,fresh=True,session=True,owned=owned,fail_at=fail)
        add('api-lifecycle-bad-crc-owned'+str(int(owned)),'gzip-lifecycle',input=variants['bad-crc'],
            fresh=True,session=True,owned=owned)
    return values
