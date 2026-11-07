import json

from elftools.elf.elffile import ELFFile
from squirrel_coercion026_build import ROOT,pin,save


def validate_segments(rows):
    loads=[row for row in rows if row['type']=='PT_LOAD']
    if not loads or any(row['alignment']<16384 or (row['address']-row['offset'])%16384 for row in loads):
        raise ValueError('026 Android PT_LOAD alignment is below16KiB')
    for row in rows:
        if row['type']=='PT_GNU_RELRO':
            end=row['address']+row['bytes']
            page_end=(end+16383)&-16384
            if any(load['flags']&2 and load['address']<page_end and load['address']+load['bytes']>end
                    for load in loads) and end%16384:
                raise ValueError('026 Android RELRO end before writable storage is not16KiB aligned')
    return True


def inspect(path,require=True):
    with path.open('rb') as stream:
        elf=ELFFile(stream)
        if elf['e_machine']!='EM_AARCH64':raise ValueError('026 Android artifact is not AArch64')
        rows=[{'type':row['p_type'],'address':row['p_vaddr'],'offset':row['p_offset'],
            'bytes':row['p_memsz'],'alignment':row['p_align'],'flags':row['p_flags']} for row in elf.iter_segments()]
    error=None
    try:validate_segments(rows)
    except ValueError as exception:
        error=str(exception)
        if require:raise
    relro=[]
    for row in rows:
        if row['type']=='PT_GNU_RELRO':
            end=row['address']+row['bytes'];page_end=(end+16383)&-16384
            relro.append({'start':row['address'],'endExclusive':end,'trailingPageEndExclusive':page_end,
                'containingWritableLoads':[[load['address'],load['address']+load['bytes']] for load in rows
                    if load['type']=='PT_LOAD' and load['flags']&2 and load['address']<=row['address']<load['address']+load['bytes']],
                'writableLoadBytesSharingTrailingPage':[[max(end,load['address']),min(page_end,load['address']+load['bytes'])]
                    for load in rows if load['type']=='PT_LOAD' and load['flags']&2 and load['address']<page_end and load['address']+load['bytes']>end]})
    return {'artifact':pin(path),'segments':rows,'relroExtentChecks':relro,
        'sixteenKiBLoadAndRelroContractPassed':error is None,
        'officialGuidance':'https://developer.android.com/guide/practices/page-sizes',
        'error':error,'operatingSystemOrPhysicalPageSizeExecutionClaimed':False}


if __name__=='__main__':
    import argparse
    from pathlib import Path
    parser=argparse.ArgumentParser()
    parser.add_argument('artifacts',type=Path,nargs='+')
    arguments=parser.parse_args()
    print(json.dumps([inspect(path.resolve(),False) for path in arguments.artifacts],indent=2))
