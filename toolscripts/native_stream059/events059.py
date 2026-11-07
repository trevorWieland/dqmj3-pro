import ctypes
import sys
from pathlib import Path

ROOT=next(p for p in Path(__file__).resolve().parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from native_stream058_layout import get
from native_stream058_original import STREAM


def events(backend,ram,arena,state):
    p=backend.profile
    h=p['heap'];e=p['event'];st=p['state']
    count=get(arena,0x1000+h['event_count'])
    if count>32:raise ValueError('059 callback fixture capacity exceeded')
    window=get(arena,state-ram+st['window'],p['pointer'])
    symbols=backend.symbols
    default_dispose=0x734b3c if backend.target=='original'else symbols['fn_00734b3c']
    def pointer(value,kind):
        if value==0:return None
        if kind=='message':
            data=ctypes.string_at(value)if backend.target=='windows'else bytes(backend.machine.cpu.mem_read(value,100)).split(b'\0')[0]
            return data.decode('ascii')
        if kind=='disposer':
            if value==default_dispose:return 'default-disposer'
            for name in ['fixture_dispose058','fixture_alternate_dispose058']:
                if value==symbols[name]:return name
            raise ValueError('059 unknown callback function identity')
        if value==state:return 'actual-state'
        if window and value==window:return 'actual-window'
        if value==ram+STREAM:return 'actual-stream'
        if value==ram+0x1000:return 'primary-heap'
        if value==ram+0x2000:return 'alternate-heap'
        raise ValueError('059 unknown callback object identity '+hex(value))
    result=[]
    occupied=set()
    for index in range(count):
        base=0x1000+h['events']+index*p['event_size']
        row={}
        for name,offset in e.items():
            size=p['pointer']if name in ['memory','state','message','disposer','context']else 4
            occupied.update(range(base+offset,base+offset+size))
            value=get(arena,base+offset,size)
            if name in ['memory','state','message','disposer','context']:value=pointer(value,name)
            if name=='bytes'and index==0:
                if value!=p['state_size']:raise ValueError('059 state allocation size drift')
                value='sizeof-actual-state'
            row[name]=value
        result.append(row)
    start=0x1000+h['events']
    end=start+32*p['event_size']
    if any(arena[i]!=0 for i in range(start,end)if i not in occupied):
        raise ValueError('059 changed unused callback record/padding bytes')
    return result
