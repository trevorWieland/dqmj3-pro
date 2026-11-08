import hashlib
import json
from controller7_measure import ROOT,WORK,pin
from native_wave014_oracle import original_image


def span(image,start,end):
    return dict(start=start,endExclusive=end,sha256=hashlib.sha256(image[start-0x100000:end-0x100000]).hexdigest())


def run():
    image=original_image();census=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    row=next(row for row in json.loads(census.read_text())['functions']if row['address']==0x12ab74)
    expected={pc for part in row['ranges']for pc in range(part['start'],part['endExclusive'],4)}
    reference=json.loads((WORK/'context-constructor-reference.private.json').read_text())
    visited=set().union(*(set(case['originalVisitedPcs'])for case in reference['cases']))&expected
    missing=expected-visited;assert missing=={0x12ac90,0x12ac94,0x12ac98,0x12acc8,0x12accc,0x12acd0,0x12ad00,0x12ad04,0x12ad08}
    groups=[]
    for branch,start,end,offset in[(0x12ac8c,0x12ac90,0x12ac9c,0x298),(0x12acc4,0x12acc8,0x12acd4,0x29c),(0x12acfc,0x12ad00,0x12ad0c,0x2a0)]:
        groups.append(dict(componentOffset=offset,branch=span(image,branch,branch+4),unexecutedInstructions=[span(image,p,p+4)for p in range(start,end,4)],
                           reason='For every one of the16 attributes the preceding original initialization loop stores binary32+0 to this RGB component; no callback or outside mutation occurs before conversion. BICS clears the sign bit of that zero and the immediately following BEQ always skips these3 nonzero-exponent extraction instructions.'))
    result=dict(status='bounded-constructor-PC-coverage-with-separated-constant-default-invariants',producer=pin(__file__),moduleSha256=hashlib.sha256(image).hexdigest(),census=pin(census),
                canonicalEntry=0x12ab74,canonicalInstructionBytes=row['textBodyBytes'],instructionRanges=[span(image,p['start'],p['endExclusive'])for p in row['ranges']],
                originalExecutedInstructionCount=len(visited),originalExecutedPcs=sorted(visited),unexecutedInstructionCount=len(missing),unexecutedPcs=sorted(missing),
                invariantGroups=groups,dominatingInitialization=span(image,0x12ac50,0x12ac7c),
                assumptions=['Call begins at canonical entry with a live naturally aligned owned object of sufficient size, disjoint from globals/code/caller stack.',
                             'Original helper code and immutable literals are hash-verified and no external PC/data mutation, debugger or asynchronous observer intervenes.',
                             'Original zero/fill helpers are reference dependencies only; their broader alignment/memory domains and SDK source credit are excluded.',
                             'Native Windows/AArch64 owner includes genuine declared sidecar fields initialized to null under the measured little-endian supported ABIs; no target pointer truncation.'],
                completeOwnerCacheResourceHardwareOrGameClaimed=False,canonicalInventoryChanged=False,sourceCreditGranted=0)
    out=WORK/'context-coverage-v1.json';assert not out.exists();out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(pin(out)))


if __name__=='__main__':run()
