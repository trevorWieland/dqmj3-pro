import hashlib
import json
from pathlib import Path
from run059 import Backend,execute

WORK=Path(__file__).resolve().parent
ORDER=[16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15]


class Bits:
    def __init__(self):self.bits=[]
    def add(self,value,count):self.bits.extend((value>>i)&1 for i in range(count))
    def align(self):
        while len(self.bits)%8:self.bits.append(0)
    def data(self):
        result=bytearray((len(self.bits)+7)//8)
        for i,bit in enumerate(self.bits):result[i//8]|=bit<<(i%8)
        return bytes(result)


def reverse(value,count):
    return int(format(value,'0'+str(count)+'b')[::-1],2)


def codes(lengths):
    counts=[lengths.count(i)for i in range(16)]
    counts[0]=0
    current=0
    starts={}
    for bits in range(1,16):
        current=(current+counts[bits-1])<<1
        starts[bits]=current
    result={}
    for symbol,bits in enumerate(lengths):
        if bits:
            result[symbol]=(reverse(starts[bits],bits),bits)
            starts[bits]+=1
    return result


def dynamic(lengths,distances):
    bits=Bits();bits.add(5,3);bits.add(len(lengths)-257,5);bits.add(len(distances)-1,5);bits.add(15,4)
    code_lengths=[4]*16+[0]*3
    for symbol in ORDER:bits.add(code_lengths[symbol],3)
    alphabet=codes(code_lengths)
    for length in lengths+distances:bits.add(*alphabet[length])
    return bits,codes(lengths),codes(distances)


def fixed(symbols,distances=None,last=1):
    bits=Bits();bits.add(last|2,3)
    alphabet=codes([8]*144+[9]*112+[7]*24+[8]*8)
    for symbol in symbols:bits.add(*alphabet[symbol])
    if distances:
        for symbol in distances:bits.add(reverse(symbol,5),5)
    return bits


def programs():
    result=[]
    def add(name,bits,expected=None):result.append(dict(name=name,image=bits.data(),expected=expected))
    bits=Bits();bits.add(7,3);add('invalid-block-type',bits)
    bits=Bits();bits.add(1,3);bits.align();bits.add(1,16);bits.add(0,16);add('bad-stored-complement',bits)
    bits=Bits();bits.add(1,3);bits.align();bits.add(0,16);bits.add(65535,16);add('empty-stored-block',bits,b'')
    for nlen,ndist in [(31,0),(0,31),(31,31)]:
        bits=Bits();bits.add(5,3);bits.add(nlen,5);bits.add(ndist,5);bits.add(0,4);add('bad-dynamic-count-'+str(nlen)+'-'+str(ndist),bits)
    for pattern,name in [([1,1,1,1],'oversubscribed-code-alphabet'),([0,0,0,0],'zero-length-alphabet'),([1,0,0,1],'repeat16-without-predecessor'),([0,0,1,1],'repeat18-overflow')]:
        bits=Bits();bits.add(5,3);bits.add(0,5);bits.add(0,5);bits.add(0,4)
        for value in pattern:bits.add(value,3)
        if name=='zero-length-alphabet':bits.add(0,258)
        if name=='repeat16-without-predecessor':bits.add(1,1);bits.add(0,2)
        if name=='repeat18-overflow':
            bits.add(1,1);bits.add(127,7);bits.add(1,1);bits.add(127,7)
        add(name,bits)
    lengths=[0]*257;lengths[0]=1;lengths[1]=1;lengths[256]=1
    bits,_,_=dynamic(lengths,[1]);add('oversubscribed-literal-alphabet',bits)
    lengths=[0]*257;lengths[256]=1
    bits,_,_=dynamic(lengths,[1,1,1]);add('oversubscribed-distance-alphabet',bits)
    bits=fixed([286]);add('invalid-fixed-literal',bits)
    bits=fixed([257],[30]);add('invalid-fixed-distance',bits)
    bits=fixed([257],[0]);add('distance-before-history',bits)
    lengths=[0]*257
    for symbol,depth in zip(list(range(14))+[65,256],list(range(1,15))+[15,15]):lengths[symbol]=depth
    bits,literal,_=dynamic(lengths,[1]);bits.add(*literal[65]);bits.add(*literal[256]);add('deep-literal-subtable',bits,b'A')
    lengths=[0]*258;lengths[65]=1;lengths[256]=2;lengths[257]=2
    bits,literal,distance=dynamic(lengths,list(range(1,15))+[15,15]);bits.add(*literal[65]);bits.add(*literal[257]);bits.add(*distance[15]);bits.add(0,6);add('deep-distance-subtable',bits)
    for suffix in [b'',bytes(8)]:
        bits=fixed([65,256]);case=dict(name='literal-output-boundary-'+str(len(suffix)),image=bits.data()+suffix,expected=b'A');result.append(case)
    return result


def main():
    output=WORK/'grammar-attempt001';output.mkdir(exist_ok=False)
    backends={t:Backend(t,WORK/'build')for t in ['original','arm','windows','a64']}
    rows=[]
    try:
        for index,case in enumerate(programs()):
            for capacity in [0,1,257,1024]:
                values={t:execute(b,case['image'],-15,capacity)for t,b in backends.items()}
                if any(v!=values['original']for v in values.values()):
                    (output/'failure.json').write_text(json.dumps(dict(index=index,name=case['name'],capacity=capacity,inputHex=case['image'].hex(),observations=values),indent=2)+'\n',encoding='utf-8')
                    raise ValueError('059 grammar mismatch retained '+case['name']+'/'+str(capacity))
                if case.get('expected')is not None and capacity>=len(case['expected'])and values['original']['status']==1:
                    if values['original']['outputSha256']!=hashlib.sha256(case['expected']).hexdigest():raise ValueError('059 grammar literal result differs')
                rows.append(dict(index=index,name=case['name'],capacity=capacity,inputSha256=hashlib.sha256(case['image']).hexdigest(),observation=values['original']))
        f=next(f for f in json.loads((WORK/'claim.json').read_bytes())['functions']if f['address']==0x7321e4)
        wanted={a for q in f['ranges']for a in range(q['start'],q['endExclusive'],4)}
        report=dict(status='RFC1951-generated-grammar-boundaries-passed',cases=rows,visitedRootPcs=sorted(wanted&backends['original'].machine.coverage),unvisitedRootPcs=sorted(wanted-backends['original'].machine.coverage),sourceCreditGranted=0)
        (output/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8');print('grammar',len(rows),'sets',len(report['visitedRootPcs']),'/',len(wanted),'PCs')
    finally:backends['windows'].machine.close()

if __name__=='__main__':main()
