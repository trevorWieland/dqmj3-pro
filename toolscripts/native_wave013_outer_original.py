from native_wave013_nfa_original import load as load_functions
from native_wave013_common import ROOT,sha


def load(canonical):
    graph=load_functions(canonical)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    raw=image[0x4c3e04-0x100000:0x4c3e06-0x100000]
    if raw!=bytes(2):
        raise ValueError('Measured original empty UTF16 literal differs')
    graph['blocks'].append((0x4c3e04,raw))
    graph['readonlyData'].append({'start':0x4c3e04,'bytes':2,'sha256':sha(raw),'role':'outer-empty-UTF16-literal'})
    return graph
