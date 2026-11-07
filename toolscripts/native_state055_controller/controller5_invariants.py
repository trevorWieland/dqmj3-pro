import hashlib
import json
from controller5_measure import WORK,pin,original_image


def run():
    image=original_image()
    def span(a,b):
        return dict(start=a,endExclusive=b,bytes=b-a,sha256=hashlib.sha256(image[a-0x100000:b-0x100000]).hexdigest())
    allowed=[]
    for used in range(1,13):
        for words in range(49):
            if (words+3)//4<=12-used:
                remaining=words&~3
                assert remaining<=44
                total=remaining+0x80000001
                high=total>0xffffffff and(total&0xffffffff)!=0
                assert not high
                allowed.append([used,words,remaining])
    result=dict(schemaVersion=1,status='bounded-control-flow-and-integer-invariants',producer=pin(__file__),
                moduleSha256=hashlib.sha256(image).hexdigest(),canonicalEntry=0x6fb25c,
                sortedInsert=dict(unexecuted=span(0x6fb92c,0x6fb930),witness=span(0x6fb900,0x6fb930),
                                  reasoning='r1 is nonzero on entry to 6fb908 because 6fb900/904 branches away on zero; no instruction through 6fb928 changes r1; hence 6fb928 always branches and 6fb92c is not reached',
                                  asynchronousRegisterMutationExcluded=True),
                paddingLoop=dict(unexecuted=span(0x6fc27c,0x6fc2bc),witness=span(0x6fc168,0x6fc2bc),
                                 assumptions=['buffered plus constant attribute count at most 12 when compact packing runs','in_group is between 1 and 12 by construction and closes at 12','single-threaded ordinary storage'],
                                 reasoning='The guard requires ceil(words/4) <= 12-in_group. Thus words <= 44, so words&~3 <=44. CMN with 0x80000001 cannot set unsigned HI; 6fc278 always selects the other bounded padding loop.',
                                 finiteAdmittedPairs=allowed,largerWordsProof='words>=45 implies ceil(words/4)>=12, greater than 12-in_group for in_group>=1'),
                sourceCreditGranted=0,universalEquivalenceClaimed=False)
    out=WORK/'control-invariants.json';out.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),unexecutedInstructionsAccounted=17)))


if __name__=='__main__':run()
