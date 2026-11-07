import json
from controller5_measure import WORK,pin


def run():
    inputs=list(json.loads((WORK/'full-corpus.json').read_text())['inputs'])
    for name in ['coverage-cases.private.json','coverage2-cases.private.json','coverage3-cases.private.json','multiple-resources.json']:
        inputs.extend(row['input']for row in json.loads((WORK/name).read_text())['cases'])
    inputs.append(json.loads((WORK/'all-values-order.private.json').read_text())['input'])
    assert len({row['label']for row in inputs})==len(inputs)
    out=WORK/'inputs.json'
    out.write_text(json.dumps(dict(schemaVersion=1,inputs=inputs,originalAnswersReused=False,callerFrameInitialBytes=0,
                                  originalResourceAllocatorClaimed=False,physicalDeviceExecutionClaimed=False),indent=2)+'\n')
    print(json.dumps(dict(inputs=pin(out),caseSets=len(inputs))))


if __name__=='__main__':run()
