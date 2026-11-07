import hashlib
import json
from pathlib import Path
from native_state_deps055_helpers_measure import SOURCE,WORK,pin,original_image


def prove():
    image=original_image()
    reference=json.loads((WORK/'reference.json').read_text(encoding='utf-8'))
    missing=list(range(0x1669ac,0x166a0c,4))
    assert reference['coverage']['fixed']['missing']==missing
    rows=[]
    for block in range(129):
        even=block&~1
        prefix=0
        while even&14:
            even-=2
            prefix+=2
        assert even%16==0 and 0<=even<=128 and prefix+even==(block&~1)
        total=even+0x80000001
        carry=total>=0x100000000
        zero=(total&0xffffffff)==0
        assert not carry and not zero
        rows.append(dict(block=block,pairedPrefixWords=prefix,remainingWords=even,carry=carry,zero=zero,blsTaken=True))
    witnesses=[dict(start=start,endExclusive=end,bytes=end-start,sha256=hashlib.sha256(image[start-0x100000:end-0x100000]).hexdigest())
               for start,end in [(0x166954,0x166960),(0x166968,0x1669ac)]]
    report=dict(schemaVersion=1,status='finite-block-bound-proof-for-unexecuted-optimized-copy',
                countDomain=[0,4096],rows=rows,unvisitedInstructionPcs=missing,
                controllingOriginalInstructions=witnesses,externalMemcpyCall=0x1669d4,
                externalMemcpyEntry=0x18437c,externalMemcpySourceClaimed=False,
                reasoning='The block is clamped to128 and rounded down to even. Paired prefix copies leave a multiple of16 between0 and128. CMN adds0x80000001 with neither carry nor zero, so BLS skips all24 optimized-copy PCs including BL18437c.',
                reference=pin(WORK/'reference.json'),sourceCreditGranted=0,producer=pin(Path(__file__).resolve()))
    path=WORK/'invariant.json'
    path.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(pin(path)))
    return report


if __name__=='__main__':
    prove()
