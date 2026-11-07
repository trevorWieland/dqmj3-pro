import json
from pathlib import Path

WORK=Path(__file__).resolve().parent


def coverage(runtime,entries):
    claims=json.loads((WORK/'claim.json').read_text(encoding='utf-8'));rows={f['address']:f for f in claims['functions']}
    for entry,ranges,mode in [(0x615ecc,[(0x615ecc,0x615ee4)],'ARM'),(0x107aac,[(0x100668,0x100670),(0x107aac,0x107ab8)],'ARM'),(0x100670,[(0x100670,0x10069c)],'Thumb'),(0x10d9d4,[(0x10d9d4,0x10da44)],'ARM'),(0x6cb234,[(0x6cb234,0x6cb248)],'ARM'),(0x251e64,[(0x251e64,0x251ec4)],'ARM'),(0x251ec8,[(0x251ec8,0x251f18)],'ARM'),(0x662a34,[(0x662a34,0x662a44)],'ARM'),(0x664800,[(0x664800,0x664818)],'ARM')]:
        rows[entry]=dict(mode=mode,ranges=[dict(start=a,endExclusive=z,bytes=z-a)for a,z in ranges])
    result=[]
    for entry in entries:
        row=rows[entry];step=2 if row['mode']=='Thumb'else 4;pcs={p for q in row['ranges']for p in range(q['start'],q['endExclusive'],step)};visited=pcs&runtime.original.coverage
        result.append(dict(address=entry,mode=row['mode'],instructionBytes=sum(q['bytes']for q in row['ranges']),instructionPcs=len(pcs),visitedPcs=sorted(visited),missingPcs=sorted(pcs-visited)))
    return result
