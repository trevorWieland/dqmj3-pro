import hashlib
import json
import struct
from pathlib import Path
from build062 import build
from runtime062 import Runtime,SIZE
from records_proof062 import program
from seed_proof062 import observe
from manager_proof062 import case
from lifetime_proof062 import initialize,destroy

WORK=Path(__file__).resolve().parent


def packet(runtime,kind):
    before=bytearray(b'\xa7'*SIZE);expected=bytearray(before)
    if kind=='metadata-clip':
        before[0x6000:0x6080]=bytes(range(128));struct.pack_into('<i',before,0x500,1);expected=bytearray(before);expected[0x9080:0x90f8]=bytes(range(120));struct.pack_into('<i',expected,0x500,2)
        name='resource_metadata_receive062';args=[0x6000,0x9000,0x500];wanted=None
    elif kind=='packet-zero':
        before[0x6000:0x6080]=bytes(range(128));struct.pack_into('<i',before,0x6000,1);struct.pack_into('<i',before,0x500,0);expected=bytearray(before);expected[0x1004:0x1000+7660]=bytes(7656);expected[0x1000:0x1005]=before[0x6000:0x6005];struct.pack_into('<i',expected,0x500,1)
        name='resource_packet_receive062';args=[0x6000,0x1000,0x500];wanted=1
    else:
        before[0x1000:0x1000+7660]=bytes((i*17+3)&255 for i in range(7660));struct.pack_into('<i',before,0x1000,124);struct.pack_into('<i',before,0x500,0);expected=bytearray(before);expected[0x6000:0x6080]=before[0x1000:0x1080]
        name='resource_packet_slice062';args=[0x6000,0x1000,0x500];wanted=0
    result,after=runtime.run(name,before,args)
    if after!=expected or(wanted is not None and result!=wanted):raise ValueError('062 packet control differs from genuine reference/model')


def action(runtime,kind):
    runtime.last_return_completed=False
    if kind=='lifetime-order':destroy(runtime,True,0,0xa7)
    elif kind=='lifetime-constructor':initialize(runtime,0xa7)
    elif kind.startswith('seed'):observe(runtime,1)
    elif kind=='record-padding':program(runtime,1)
    elif kind=='record-growth':program(runtime,65)
    elif kind=='record-order':program(runtime,33)
    elif kind=='queue-valid':program(runtime,3,0)
    elif kind=='post-kind':case(runtime,'post-word',2)
    else:packet(runtime,kind)


def mutations():
    packet_source=(WORK/'source/packets062.c').read_text(encoding='utf-8');record_source=(WORK/'source/records062.c').read_text(encoding='utf-8');queue_source=(WORK/'source/commands062.c').read_text(encoding='utf-8');random_source=(WORK/'source/random062.c').read_text(encoding='utf-8')
    rows=[]
    def change(name,file,source,old,new,kind):
        if source.count(old)!=1:raise ValueError('062 semantic-control anchor not unique: '+name)
        rows.append(dict(name=name,file=file,source=source.replace(old,new),kind=kind))
    change('full-block-premature-completion','packets062.c',packet_source,'fn_00301a9c(block->bytes, (const Byte062 *)packet + offset, 128);\n        return 0;','fn_00301a9c(block->bytes, (const Byte062 *)packet + offset, 128);\n        return 1;','full-completion')
    change('missing-receive-clear','packets062.c',packet_source,'fn_00301f50(packet->bytes, 7656);','(void)packet;','packet-zero')
    start=packet_source.index('void resource_metadata_receive062');end=packet_source.index('static Word062 packet_bytes062');segment=packet_source[start:end]
    changed=segment.replace('bytes = 248 - offset;','bytes = 247 - offset;');rows.append(dict(name='metadata-last-byte-dropped',file='packets062.c',source=packet_source[:start]+changed+packet_source[end:],kind='metadata-clip'))
    change('record-padding-copied','records062.c',record_source,'fn_0017821c(destination->record, source->record, 240);','fn_0017821c(destination, source, sizeof(*destination));','record-padding')
    change('wrong-vector-growth','records062.c',record_source,'count + count / 2 + count / 8','count + count / 2','record-growth')
    old="""    if (vector->begin != (void *)0)
        heap->dispose(heap->context, vector->begin);
    vector->begin = storage;
    vector->end = storage + count + 1;
    vector->limit = storage + capacity;"""
    new="""    ResourceRecord062 *old = vector->begin;
    vector->begin = storage;
    vector->end = storage + count + 1;
    vector->limit = storage + capacity;
    if (old != (void *)0)
        heap->dispose(heap->context, old);"""
    change('publish-before-old-disposal','records062.c',record_source,old,new,'record-order')
    change('flag-canonicalized','commands062.c',queue_source,'record.valid = (Byte062)valid;','record.valid = valid != 0;','queue-valid')
    change('wrong-word-command-kind','commands062.c',queue_source,'manager->pending.kind = 2;','manager->pending.kind = 8;','post-kind')
    change('wrong-lcg','random062.c',random_source,'value * 69069','value * 69070','seed-lcg')
    change('missing-warmup-round','random062.c',random_source,'index < 20','index < 19','seed-warmup')
    change('wrong-table-cursor','random062.c',random_source,'state->words + 31','state->words + 32','seed-cursor')
    life=(WORK/'source/lifetime062.c').read_text(encoding='utf-8')
    change('member-last-byte-not-initialized','lifetime062.c',life,'fn_00301f50(memory, 2696);','fn_00301f50(memory, 2695);','lifetime-constructor')
    change('scratch-cleared-before-release','lifetime062.c',life,'heap->dispose(heap->context, memory);\n        resource->scratch = (void *)0;','resource->scratch = (void *)0;\n        heap->dispose(heap->context, memory);','lifetime-order')
    return rows


def controls(folder,artifacts=None):
    artifacts=artifacts or WORK/'build'
    folder.mkdir(exist_ok=False);rows=[]
    for mutation in mutations():
        directory=folder/mutation['name'];directory.mkdir();source=directory/mutation['file'];source.write_text(mutation['source'],encoding='utf-8');checks=[]
        baseline=Runtime('original',artifacts,heap_services=True,seed_entry=True,manager_entry=True,lifetime_entry=True)
        try:action(baseline,mutation['kind'])
        finally:baseline.close()
        for target in ['arm','windows','a64']:
            correct=Runtime(target,artifacts)
            try:action(correct,mutation['kind'])
            finally:correct.close()
            build(directory/target,target,{mutation['file']:source});runtime=Runtime(target,directory)
            try:
                try:action(runtime,mutation['kind'])
                except ValueError as error:
                    if not runtime.last_return_completed:raise
                    same_final=False
                    if mutation['kind']in ['record-order','lifetime-order']:
                        actual=bytearray(runtime.last_raw_arena);expected=bytearray(runtime.last_model_arena);at,size=runtime.last_event_region if mutation['kind']=='record-order'else runtime.last_lifetime_observer_region;actual[at:at+size]=bytes(size);expected[at:at+size]=bytes(size);same_final=actual==expected
                        if not same_final:raise ValueError('062 expected same-final-heap ordering control differs elsewhere')
                    checks.append(dict(target=target,normallyReturned=True,rejected=True,reason=str(error),sameFinalArenaOutsideObservedEvents=same_final));continue
                raise ValueError('062 wrong source survived semantic check')
            finally:runtime.close()
        rows.append(dict(name=mutation['name'],kind=mutation['kind'],sourceSha256=hashlib.sha256(source.read_bytes()).hexdigest(),checks=checks))
    report=dict(status='thirteen-genuine-returning-source-controls-rejected',controls=rows,checks=len(rows)*3,sourceCreditGranted=0,wholeResourceCallerClaim=False)
    (folder/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8');print('062 controls',len(rows),'returning variants',len(rows)*3,'checks passed')
    return report

if __name__=='__main__':controls(WORK/'controls-attempt002')
