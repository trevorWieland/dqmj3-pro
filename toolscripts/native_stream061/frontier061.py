import hashlib
import json
import struct
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())


def frontier():
    raw=(ROOT/'generated/update-content0/code.bin').read_bytes()
    census_raw=(ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes()
    if hashlib.sha256(raw).hexdigest()!='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126':raise ValueError('061 original module changed')
    functions=json.loads(census_raw)['functions']
    targets=[0x733d78,0x7456a4,0x730208,0x7321e4,0x7321e0,0x7457cc]
    branches={target:[]for target in targets}
    for function in functions:
        if function['mode']!='ARM':continue
        for span in function['ranges']:
            for pc in range(span['start'],span['endExclusive'],4):
                word=struct.unpack_from('<I',raw,pc-0x100000)[0]
                if(word>>25)&7!=5:continue
                immediate=word&0xffffff
                if immediate&0x800000:immediate-=0x1000000
                target=(pc+8+(immediate<<2)+(2 if(word>>28)==15 and(word>>24)&1 else 0))&0xffffffff
                if target in branches:branches[target].append(dict(caller=function['address'],instruction=pc,instructionSha256=hashlib.sha256(raw[pc-0x100000:pc-0x100000+4]).hexdigest(),link=bool(word&(1<<24)),condition=word>>28))
    rows=[]
    for target in targets:
        needle=struct.pack('<I',target);at=raw.find(needle);references=[]
        while at!=-1:
            if at%4==0:references.append(dict(codeBinOffset=at,flatAddress=at+0x100000,wordSha256=hashlib.sha256(raw[at:at+4]).hexdigest()))
            at=raw.find(needle,at+1)
        rows.append(dict(target=target,verifiedDirectArmBranches=branches[target],alignedStoredWords=references))
    return dict(schemaVersion=1,status='bounded-read-only-direct-code-and-stored-pointer-frontier',moduleSha256=hashlib.sha256(raw).hexdigest(),censusSha256=hashlib.sha256(census_raw).hexdigest(),targets=rows,noIdentifiedInflateDictionarySetter=True,noIdentifiedInflateSync=True,absenceNotProvedGlobally=True,scope='ARM direct calls and aligned stored words for known helper entries; not an exhaustive proof against inlining, unresolved indirect calls or other modules',distinction='No ownership claimed for unlocated public APIs; only059 closed initialized/no-external-state-mutation graph excludes those states',sourceCreditGranted=0)

if __name__=='__main__':(WORK/'api-frontier.json').write_text(json.dumps(frontier(),indent=2)+'\n',encoding='utf-8')
