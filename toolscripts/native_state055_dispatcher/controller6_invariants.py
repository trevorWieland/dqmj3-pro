import hashlib
import json
import struct
from controller6_measure import WORK,pin
from native_wave014_oracle import original_image


def run():
    image=original_image();claim=json.loads((WORK/'claim.json').read_text())
    def span(start,end):return dict(start=start,endExclusive=end,bytes=end-start,sha256=hashlib.sha256(image[start-0x100000:end-0x100000]).hexdigest())
    domains=[[],[],[],[]]
    for operation in range(65536):
        if operation!=100 and operation<100:domains[0].append(operation)
        if operation>100 and operation<176 and operation<162 and operation!=107 and operation<107:domains[1].append(operation)
        if operation>100 and operation<176 and operation<162 and operation>107 and operation<111:domains[2].append(operation)
        if operation>100 and operation<176 and operation>162:domains[3].append(operation)
    assert domains==[list(range(100)),list(range(101,107)),list(range(108,111)),list(range(163,176))]
    assert all(op<100 for op in domains[0])
    assert all(0<=op-101<6 for op in domains[1])
    assert all(op in[108,109,110]for op in domains[2])
    assert all(0<=op-163<13 for op in domains[3])
    unexecuted={0x73b824,0x73bd38,0x73bd70,0x73bd74,0x73bd98}
    assert not any(row['target']in unexecuted for row in claim['branchEdges'])
    for gap in claim['internalExcludedGaps']:
        for address in range((gap['start']+3)&~3,gap['endExclusive']-3,4):
            assert struct.unpack_from('<I',image,address-0x100000)[0]&~1 not in unexecuted
    rows=[
        dict(unexecuted=span(0x73b824,0x73b828),witness=span(0x73b7e8,0x73b828),admittedOperations=domains[0],
             reasoning='The 16-bit decoded operation equals100 only on the earlier equal branch. The following signed GE branch removes every operation>=100. Thus the index is0..99; unsigned LO at73b820 always transfers through the table, and73b824 is not reached.'),
        dict(unexecuted=span(0x73bd38,0x73bd3c),witness=span(0x73bd08,0x73bd3c),admittedOperations=domains[1],
             reasoning='Dominating comparisons leave only101..106. Subtract101 yields0..5, so LO against6 always transfers through the table at73bd34.'),
        dict(unexecuted=span(0x73bd70,0x73bd78),witness=span(0x73bd08,0x73bd78),admittedOperations=domains[2],
             reasoning='After excluding107 and the111-or-greater branch, only108..110 remain. The conditional compare chain tests108,109,110 and retains equal when any matches. Its BEQ always exits to73f1d4, so the following return pair is not reached.'),
        dict(unexecuted=span(0x73bd98,0x73bd9c),witness=span(0x73bd08,0x73bd9c),admittedOperations=domains[3],
             reasoning='The equal162 and equal176 paths have already exited; the dominating bounds leave163..175. Subtract163 yields0..12, so LO against13 always transfers through the table at73bd94.')]
    result=dict(status='five-redundant-dispatch-defense-instructions-accounted-by-bounded-integer-control-invariants',producer=pin(__file__),canonicalEntry=0x73b7a4,
                moduleSha256=hashlib.sha256(image).hexdigest(),decodedOperation='(location&0x3ffff)>>2',completeDecodedOperationDomain=[0,65535],
                finiteInputsChecked=65536,rows=rows,unexecutedInstructionsAccounted=5,
                individualOriginalByteWitnesses=[span(address,address+4)for address in sorted(unexecuted)],
                assumptions=['canonical function entry','unchanged code and literal tables','ordinary single-threaded storage and trusted caller stack','no external PC/register mutation'],
                noDirectOrLiteralTableEntryToUnexecutedInstructions=True,universalEquivalenceClaimed=False,sourceCreditGranted=0)
    out=WORK/'control-invariants.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(report=pin(out),instructions=5)))
    return result


if __name__=='__main__':run()
