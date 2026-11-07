import hashlib
import json
from pathlib import Path

from build059 import build
from run059 import Backend,encoded
from session059 import Program
from supplement059 import gzip_optional

WORK=Path(__file__).resolve().parent


def control_cases():
    payload=b'checksum and window history payload '*29
    raw=encoded(payload,-15)
    zlib_image=encoded(payload,15)
    gzip_image=bytearray(encoded(payload,31));gzip_image[-8]^=1
    return dict(dynamic=dict(image=encoded(b'abcd0123456789'*400,-15),window=-15,capacity=6112,flush=4),
                partial=dict(image=zlib_image[:2],window=15,capacity=512,flush=4),
                zlib=dict(image=zlib_image,window=15,capacity=2048,flush=4),
                crc=dict(image=bytes(gzip_image),window=31,capacity=2048,flush=4),
                history=dict(image=raw,window=-15,capacity=17,flush=0),
                ring=dict(image=encoded(bytes(i%17 for i in range(900)),-9),window=-8,capacity=128,flush=0,steps=2),
                dictionary=dict(image=bytes.fromhex('78bb12345678'),window=15,capacity=512,flush=4),
                arguments=dict(image=raw,window=-15,capacity=2048,flush=0,custom=True),
                header=dict(image=gzip_optional(payload,31),window=31,capacity=2048,flush=4,header=64))


def mutants():
    return [
        ('wrong-258-extra','table059.c','index == 28 ? 16 : index == 29 ? 78 : 68','index == 28 ? 22 : index == 29 ? 78 : 68','dynamic'),
        ('early-block-marker','body059.c','goto block_header;','state->mode = BLOCK_BODY059; goto block_header;','partial'),
        ('wrong-adler-modulus','checksum059.c','65521','65519','zlib'),
        ('ignore-data-check','inflate059.c','if (expected != state->untouched_0018)','if (expected != state->untouched_0018 && flow->flush == -123456)','crc'),
        ('discard-history-count','window059.c','state->window_have += first;','state->window_have = 0;','history'),
        ('wrong-ring-wrap','window059.c','if (state->window_next == state->window_size)\n            state->window_next = 0;','if (state->window_next == state->window_size)\n            state->window_next = 1;','ring'),
        ('wrong-byte-reversal','utility059.c','return (value >> 24) | ((value >> 8) & 0xff00) |\n        ((value << 8) & 0xff0000) | (value << 24);','return value;','zlib'),
        ('lost-dictionary-status','inflate059.c','return 2;','return 0;','dictionary'),
        ('swapped-allocator-arguments','window059.c','stream->allocate(stream->context, 1u << state->window_bits, 1)','stream->allocate(stream->context, 1, 1u << state->window_bits)','arguments'),
        ('wrong-extra-header-length','header059.c','header->extra_length = flow->hold;','header->extra_length = flow->hold + 1;','header')]


def execute_case(backend,case):
    program=Program(backend,case['image'],case['window'],custom_allocator=case.get('custom',False))
    if 'header'in case:program.attach_header(case['header'])
    rows=[]
    try:
        for step in range(case.get('steps',1)):
            program.last_raw_return=None
            rows.append(program.advance(len(case['image']),case['capacity'],case['flush']))
    except ValueError as error:
        if program.last_raw_return is None:raise ValueError('059 negative failed to return; cannot credit rejection')from error
        raw=program.last_raw_return
        program.close()
        return dict(postReturnObserverRejected=True,actualRawStatus=raw,reason=str(error))
    return dict(rows=rows,closed=program.close())


def run(output):
    output.mkdir(exist_ok=False,parents=True)
    cases=control_cases()
    original=Backend('original',WORK/'build')
    expected={name:execute_case(original,case)for name,case in cases.items()}
    if any(v.get('postReturnObserverRejected')for v in expected.values()):raise ValueError('059 negative reference fixture invalid')
    rows=[]
    for name,filename,old,new,case_name in mutants():
        source=(WORK/'source'/filename).read_text(encoding='utf-8')
        if old not in source:raise ValueError('059 mutation witness changed '+name)
        wrong=output/name/filename;wrong.parent.mkdir()
        wrong.write_text(source.replace(old,new),encoding='utf-8')
        for target in ['arm','windows','a64']:
            build(wrong.parent/'build'/target,target,{filename:wrong})
            backend=Backend(target,wrong.parent/'build')
            try:
                observed=execute_case(backend,cases[case_name])
                if observed==expected[case_name]:raise ValueError('059 returning wrong source was not rejected '+name+' '+target)
                rows.append(dict(name=name,target=target,case=case_name,normalReturn=True,rejected=True,observed=observed,expected=expected[case_name],mutatedSourceSha256=hashlib.sha256(wrong.read_bytes()).hexdigest()))
            finally:
                if target=='windows':backend.machine.close()
        print('059 returning control',name,'rejected on ARM/Windows/A64',flush=True)
    report=dict(status='compiled-returning-controls-rejected',compiledControls=10,returningChecks=len(rows),checks=rows,sourceCreditGranted=0)
    (output/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8')
    return report

if __name__=='__main__':run(WORK/'controls-attempt003')
