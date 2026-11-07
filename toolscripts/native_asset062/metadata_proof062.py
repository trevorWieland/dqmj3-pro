import hashlib
import json
import struct
from pathlib import Path
from runtime062 import Runtime,SIZE

from coverage062 import coverage

WORK=Path(__file__).resolve().parent


def main(artifacts=None,output=None):
    artifacts=artifacts or WORK/'build'
    output=output or WORK/'metadata-proof.json'
    runtimes={t:Runtime(t,artifacts)for t in ['original','arm','windows','a64']};rows=[]
    try:
        for cursor in [-0x80000000,-2,-1,0,1,2,3]:
            for tail in [0,0xff]:
                before=bytearray(b'\xa7'*SIZE);before[0x9000:0x90f8]=bytes((i*17+9)&255 for i in range(248));before[0x6000:0x6080]=bytes((i*23+7)&255 for i in range(120))+bytes([tail])*8;struct.pack_into('<i',before,0x500,cursor)
                values={t:r.run('resource_metadata_receive062',before,[0x6000,0x9000,0x500])for t,r in runtimes.items()};expected=bytearray(before)
                if cursor<2:
                    offset=128 if cursor>0 else 0;count=min(128,248-offset);expected[0x9000+offset:0x9000+offset+count]=before[0x6000:0x6000+count];struct.pack_into('<i',expected,0x500,cursor+1)
                if any(after!=expected for returned,after in values.values()):raise ValueError('062 metadata actual receive whole arena differs')
                rows.append(dict(cursor=cursor,tail=tail,entireRawCallerArenaMatchesModel=True,arenaSha256=hashlib.sha256(expected).hexdigest()))
        output.write_text(json.dumps(dict(status='complete-metadata-receiver-raw-arena-corpus-passed',sets=rows,setCount=len(rows),fourProfileCalls=len(rows)*4,senderRawFrameEquivalenceClaim=False,coverage=coverage(runtimes['original'],[7137272]),sourceCreditGranted=0),separators=(',',':'))+'\n',encoding='utf-8');print('062 metadata14sets56calls whole arenas passed')
    finally:
        for runtime in runtimes.values():runtime.close()

if __name__=='__main__':main()
