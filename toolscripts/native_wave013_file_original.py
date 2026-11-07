import json
from native_wave013_outer_original import load as load_closed
from native_wave013_common import ROOT,OUT,sha


def load(canonical):
    graph=load_closed(canonical)
    claim=json.loads((OUT/'file/claim.json').read_text())
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    for table in claim['lookupTables']:
        start,count=table['start'],table['bytes']
        raw=image[start-0x100000:start-0x100000+count]
        if sha(raw)!=table['sha256']:
            raise ValueError('Original character table identity differs')
        graph['blocks'].append((start,raw))
        graph['readonlyData'].append({**table,'role':'reference-only readonly character facts'})
    return graph
