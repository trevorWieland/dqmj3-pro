import hashlib
import json
from pathlib import Path
from build061 import build
from runtime061 import Runtime,execute
from helper061 import allocate
from first061 import compressed,visible

WORK=Path(__file__).resolve().parent


def observation(runtime,kind):
    if kind=='allocator-wrap':return allocate(runtime,16,0,0x80000000,2)
    if kind=='allocator-state':return allocate(runtime,16,0,1,8)
    payload=b'bounded asset source return and checksum'*3
    image=compressed(payload,window=31 if kind=='gzip'else 15)
    if kind=='corrupt':image=image[:-1]+bytes([image[-1]^0x80])
    return visible(execute(runtime,image,256,0))


def controls(output,artifacts=None):
    artifacts=artifacts or WORK/'build'
    output.mkdir(exist_ok=False);source=(WORK/'source/asset061.c').read_text(encoding='utf-8')
    mutations=[('exact-fit',' < bytes)',' <= bytes)','valid'),('no-advance','space->cursor += bytes;','space->cursor += 0 * bytes;','allocator-state'),('wide-product','Word058 bytes = count * size;','unsigned long long bytes = (unsigned long long)count * size;','allocator-wrap'),('wrong-return','(Signed058)produced :','(Signed058)(produced + bytes - produced) :','valid'),('wrong-wrapper','(&stream, 15,','(&stream, 31,','gzip'),('wrong-status','status == -4 || status == -2','status == -4 || status == -2 || status == -3','corrupt')]
    rows=[]
    for name,old,new,kind in mutations:
        if source.count(old)!=1:raise ValueError('061 mutation anchor not unique')
        folder=output/name;folder.mkdir();mutant=folder/'asset061.c';mutant.write_text(source.replace(old,new),encoding='utf-8');observations=[]
        reference=Runtime('original',artifacts)
        try:baseline=observation(reference,kind)
        finally:reference.close()
        for target in ['arm','windows','a64']:
            baseline_runtime=Runtime(target,artifacts)
            try:
                if observation(baseline_runtime,kind)!=baseline:raise ValueError('061 control baseline differs')
            finally:baseline_runtime.close()
            build(folder/target,target,{'asset061.c':mutant});runtime=Runtime(target,folder);runtime.last_raw_return=None
            try:
                try:actual=observation(runtime,kind)
                except ValueError as error:
                    if runtime.last_raw_return is None:raise
                    actual=dict(normallyReturned=True,postReturnMismatch=str(error))
                if actual==baseline:raise ValueError('061 returning semantic control survived')
                if runtime.last_raw_return is None:raise ValueError('061 negative did not demonstrably return')
                observations.append(dict(target=target,returnedNormally=True,rejected=True,observation=actual))
            finally:runtime.close()
        rows.append(dict(name=name,sourceSha256=hashlib.sha256(mutant.read_bytes()).hexdigest(),kind=kind,baseline=baseline,observations=observations))
    report=dict(status='six-compiled-returning-controls-rejected',controls=rows,checks=len(rows)*3,sourceCreditGranted=0)
    (output/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8');print('061 controls',len(rows)*3,'passed',flush=True)
    return report

if __name__=='__main__':controls(WORK/'controls-attempt002')
