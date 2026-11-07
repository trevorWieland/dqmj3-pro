import hashlib
import json
import struct
from pathlib import Path
from runtime062 import Runtime,SIZE

from coverage062 import coverage

WORK=Path(__file__).resolve().parent


def main(artifacts=None,output=None):
    artifacts=artifacts or WORK/'build'
    output=output or WORK/'first-packet-proof.json'
    runtimes={t:Runtime(t,artifacts)for t in ['original','arm','windows','a64']};rows=[]
    try:
        for length in [-1,0,1,123,124,125,251,252,253,7656]:
            total=length+4 if length>0 else 7660;chunks=(total+127)//128
            packet=bytearray((i*17+3)&255 for i in range(7660));struct.pack_into('<i',packet,0,length)
            for cursor in sorted({0,1,max(chunks-1,0),chunks,chunks+1}):
                before=bytearray(b'\xa7'*SIZE);before[0x1000:0x1000+7660]=packet;struct.pack_into('<i',before,0x500,cursor)
                values={t:r.run('resource_packet_slice062',before,[0x6000,0x1000,0x500])for t,r in runtimes.items()}
                expected=bytearray(before);offset=cursor*128
                if cursor>=chunks:result=1
                else:
                    block=bytes(packet[offset:min(offset+128,total)]);expected[0x6000:0x6080]=block+bytes(128-len(block));result=int(len(block)<128)
                for returned,after in values.values():
                    if returned!=result or after!=expected:raise ValueError('062 packet slicer whole-arena/model disagreement')
                rows.append(dict(kind='slice',length=length,cursor=cursor,result=result,arenaSha256=hashlib.sha256(expected).hexdigest()))
            destination=bytearray(b'\xa7'*SIZE);struct.pack_into('<i',destination,0x500,0)
            for cursor in range(chunks+1):
                offset=cursor*128;block=bytes(packet[offset:min(offset+128,total)])if cursor<chunks else b'\xee'*128;block=block+bytes(128-len(block));destination[0x6000:0x6080]=block
                values={t:r.run('resource_packet_receive062',destination,[0x6000,0x1000,0x500])for t,r in runtimes.items()}
                expected=bytearray(destination)
                if cursor==0:expected[0x1004:0x1000+7660]=bytes(7656)
                if cursor<chunks:expected[0x1000+offset:0x1000+min(offset+128,total)]=block[:min(128,total-offset)]
                struct.pack_into('<i',expected,0x500,cursor+1);result=int(cursor>=chunks or total-offset<128)
                for returned,after in values.values():
                    if returned!=result or after!=expected:raise ValueError('062 packet receiver whole-arena/model disagreement')
                destination=expected;rows.append(dict(kind='receive',length=length,cursor=cursor,result=result,arenaSha256=hashlib.sha256(expected).hexdigest()))
        output.write_text(json.dumps(dict(status='first-whole-packet-helper-arenas-agree',sets=rows,coverage=coverage(runtimes['original'],[4472832, 7137056]),sourceCreditGranted=0),separators=(',',':'))+'\n',encoding='utf-8');print('062 first packet providers',len(rows),'four-profile sets passed')
    finally:
        for runtime in runtimes.values():runtime.close()

if __name__=='__main__':main()
