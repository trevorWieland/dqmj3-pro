import argparse
import json
from pathlib import Path

from native_stream058_build import ROOT,WORK,SOURCE,build
from native_stream058_execution import Backend
from native_stream058_cases import corpus
from native_stream058_caller import execute as caller
from native_stream058_inputs import inputs

MUTATIONS=[
    ('wrong-major','initialize058.c',"version[0] != '1'","version[0] != '2'",1,'family'),
    ('omit-window-reset','initialize058.c','state->window_size = 0;','state->window_size = state->window_size;',1,'family'),
    ('overwrite-raw-checksum','initialize058.c','if (state->wrap != 0)','if (1)',1,'family'),
    ('wrong-back','initialize058.c','state->back = -1;','state->back = 0;',1,'family'),
    ('overwrite-mode-padding','initialize058.c','state->mode = 0;','state->mode_padding[0] = 0; state->mode = 0;',1,'family'),
    ('cached-final-state','initialize058.c','stream->dispose(stream->context, stream->state);','stream->dispose(stream->context, state);',1,'family'),
    ('cached-final-disposer','initialize058.c','stream->dispose(stream->context, stream->state);','dispose(stream->context, stream->state);',1,'family'),
    ('wrong-unsigned-product','initialize058.c','count * bytes','count + bytes',1,'family'),
    ('retain-disposed-state','initialize058.c','stream->state = (void *)0;','stream->state = stream->state;',2,'family'),
    ('wrong-gzip-crc','fixed_gzip058.c','checksum = fn_007305b8(0, output, produced);','checksum = fn_007305b8(1, output, produced);',1,'caller'),
]


def verify(output):
    if not output.resolve().is_relative_to(ROOT/'work/native-stream058'):
        raise ValueError('058 controls must stay in the private workspace')
    output.mkdir(parents=True,exist_ok=True);results=[];before_inputs=inputs()
    for name,filename,old,new,count,kind in MUTATIONS:
        source=(SOURCE/filename).read_text(encoding='utf-8')
        if source.count(old)!=count:raise ValueError('058 control location changed:'+name)
        folder=output/name;folder.mkdir(parents=True,exist_ok=True);mutant=folder/filename
        mutant.write_text(source.replace(old,new))
        artifacts=folder/'build'
        for target in('arm','windows','a64'):build(artifacts/target,target,{filename:mutant})
        backends={target:Backend(target,artifacts)for target in('arm','windows','a64')}
        winner=None
        if kind=='family':
            for case in corpus():
                try:backends['arm'].execute(case)
                except ValueError as error:
                    if not getattr(error,'normal_return',False):raise
                    winner=case;break
            if winner is None:raise ValueError('058 control survived:'+name)
        checks=[]
        for target,backend in backends.items():
            try:
                if kind=='family':backend.execute(winner)
                else:caller(backend,b'abcd0123456789'*400)
            except ValueError as error:
                normal=getattr(error,'normal_return',False)or str(error).startswith('058 real-input caller mismatch')
                if not normal:raise
                checks.append(dict(target=target,normalReturn=True,rejectedBySemanticMismatch=True))
            else:raise ValueError('058 returning control survived '+target+':'+name)
        results.append(dict(name=name,case=winner,checks=checks))
        backends['windows'].machine.close()
        print('058 returning control rejected',name,flush=True)
    report=dict(schemaVersion=1,controls=len(results),normalReturningChecks=sum(len(row['checks'])for row in results),results=results)
    (output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    if inputs()!=before_inputs:raise ValueError('058 source/runtime inputs changed during controls')
    (output/'input-guard.json').write_text(json.dumps(dict(before=before_inputs,after=inputs(),unchanged=True),indent=2)+'\n')
    return report


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--output',type=Path,default=WORK/'controls')
    args=parser.parse_args()
    verify(args.output.resolve())
