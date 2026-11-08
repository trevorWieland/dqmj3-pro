import hashlib
import json
from controller7_measure import ROOT,WORK,pin
from native_wave014_oracle import original_image


def run():
    image=original_image();census=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json';rows=json.loads(census.read_text())['functions']
    reference=json.loads((WORK/'resource-index-queue-reference-v3.private.json').read_text())
    seen=set().union(*(set(case['originalVisitedPcs'])for case in reference['cases']));result=[]
    for entry,name in[(0x146510,'state_queue_node_create7'),(0x12a2e8,'state_queue_construct7'),(0x146f18,'state_single_resource_create7'),(0x146e50,'state_multiple_resource_create7'),(0x156f48,'state_resource_invalidate7'),(0x158318,'state_resource_buffers_release7'),(0x12b00c,'state_resource_index_construct7')]:
        row=next(row for row in rows if row['address']==entry);expected={pc for part in row['ranges']for pc in range(part['start'],part['endExclusive'],4)}
        observed=expected&seen
        result.append(dict(entry=entry,sourceName=name,canonicalInstructionBytes=row['textBodyBytes'],canonicalInstructionCount=len(expected),observedInstructions=len(observed),observedPcs=sorted(observed),
                           unexecutedPcs=sorted(expected-observed),completePcQualificationClaimed=False,
                           instructionRanges=[dict(**part,sha256=hashlib.sha256(image[part['start']-0x100000:part['endExclusive']-0x100000]).hexdigest())for part in row['ranges']]))
    output=dict(status='explicit-constructor-cohort-PC-accounting-no-unexecuted-path-relabeling',producer=pin(__file__),moduleSha256=hashlib.sha256(image).hexdigest(),census=pin(census),reference=pin(WORK/'resource-index-queue-reference-v3.private.json'),functions=result,
                limitations=['Queue-node allocation failure, absent allocation/release callbacks, live linked-record invalidation, and nonzero resource-region parameters remain outside this initial cohort.',
                             'Resource buffer release currently executes the zero-kind clear-only path; the authored nonzero-kind callback branches are not yet qualified.',
                             'Index OOM1/2 returns are qualified only with explicit release observers retaining physical backing; source post-callback lifetime access does not establish SDK deallocation behavior.',
                             'Third allocation failure is an original terminal null clear and authored terminal trap, not a returning-success case or identical failure mechanism.',
                             'No complete upstream11a6a8 return, cache1774B construction source, hardware, renderer, whole game, Android OS or physical-device claim.'],
                sourceCreditGranted=0,canonicalInventoryChanged=False)
    path=WORK/'resource-coverage-v1.json';assert not path.exists();path.write_text(json.dumps(output,indent=2)+'\n');print(json.dumps(dict(report=pin(path),coverage=[dict(entry=hex(row['entry']),observed=row['observedInstructions'],total=row['canonicalInstructionCount'])for row in result])))


if __name__=='__main__':run()
