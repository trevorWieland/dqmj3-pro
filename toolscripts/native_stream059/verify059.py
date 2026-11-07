import argparse
import hashlib
import json
from pathlib import Path

from build059 import ROOT,WORK,build
from run059 import Backend,execute,encoded
from session059 import Program
from inputs059 import inputs,guard
from measure059 import measure
import probe059
import supplement059
import grammar059
import streaming059
import header_probe059
import terminal059
import leaf059
import table_leaf059
from native_stream058_cases import corpus,caller_payloads
from native_stream058_caller import execute as frozen_caller


def equivalent(values,label):
    if any(value!=values['original']for value in values.values()):
        error=ValueError('059 four-profile initialized-state/ordered-callback mismatch '+label)
        error.observations=values
        raise error
    return values['original']


def flat_programs(backends):
    plans=[]
    for row in probe059.programs():plans.append(dict(**row,capacity=4608,flush=4,fail_at=0))
    plans+=supplement059.plans()
    for row in grammar059.programs():
        for capacity in [0,1,257,1024]:plans.append(dict(image=row['image'],window=-15,kind='grammar-'+row['name'],capacity=capacity,flush=4,fail_at=0))
    for window in [-15,15,31]:
        for level,strategy in [(0,0),(6,0),(6,4)]:
            for payload in [b'',b'hello',b'abcd0123456789'*400,bytes(range(256))*15]:
                plans.append(dict(image=encoded(payload,window,level,strategy),window=window,kind='original36-baseline',capacity=len(payload)+512,flush=4,fail_at=0))
    rows=[]
    for index,case in enumerate(plans):
        values={t:execute(b,case['image'],case['window'],case.get('capacity',2048),case['flush'],case['fail_at'])for t,b in backends.items()}
        observation=equivalent(values,'flat '+str(index)+' '+case['kind'])
        rows.append(dict(index=index,kind=case['kind'],window=case['window'],flush=case['flush'],failAt=case['fail_at'],inputSha256=hashlib.sha256(case['image']).hexdigest(),observation=observation))
    return rows


def streaming_programs(backends):
    rows=[]
    for index,plan in enumerate(streaming059.plans()):
        programs={t:Program(b,plan['image'],plan['window'])for t,b in backends.items()}
        end=0;journal=[]
        for step in range(1024):
            end=min(end+plan['input_step'],len(plan['image']))
            values={t:p.advance(end,plan['output_step'],4 if end==len(plan['image'])else 0)for t,p in programs.items()}
            observation=equivalent(values,'streaming '+str(index)+'/'+str(step));journal.append(observation)
            if observation['status']==1:break
            if observation['status']not in [0,-5]:raise ValueError('059 valid streaming reference failed')
        else:raise ValueError('059 valid streaming reference failed to finish')
        if journal[-1]['produced']!=len(plan['payload'])or journal[-1]['outputSha256']!=hashlib.sha256(plan['payload']).hexdigest():raise ValueError('059 streaming differs from independent payload')
        closed=equivalent({t:p.close()for t,p in programs.items()},'streaming cleanup')
        rows.append(dict(index=index,window=plan['window'],inputStep=plan['input_step'],outputStep=plan['output_step'],observations=journal,closed=closed))
    return rows


def header_programs(backends):
    rows=[]
    for index,case in enumerate(header_probe059.plans()):
        programs={t:Program(b,case['image'],case['window'])for t,b in backends.items()}
        for p in programs.values():p.attach_header(case['maximum'])
        journal=[]
        for step in range(1024):
            end=min(step+1,len(case['image']))if case['fragment']else len(case['image'])
            values={t:p.advance(end,1024,4 if end==len(case['image'])else 0)for t,p in programs.items()}
            observation=equivalent(values,'header '+str(index)+'/'+str(step));journal.append(observation)
            if observation['status']==1:break
        else:raise ValueError('059 header reference failed to finish')
        closed=equivalent({t:p.close()for t,p in programs.items()},'header cleanup')
        rows.append(dict(index=index,kind=case['kind'],maximum=case['maximum'],fragmented=case['fragment'],observations=journal,closed=closed))
    return rows


def window_programs(backends):
    rows=[]
    for bits in [8,9,15]:
        size=1<<bits
        plans=[dict(count=count,chunk=count+512,reset=False)for count in [0,1,size-1,size,size+1]]
        plans.append(dict(count=size+100,chunk=max(size*3//4,200),reset=True))
        for case in plans:
            payload=bytes(i%17 for i in range(case['count']));image=encoded(payload,-9 if bits==8 else -bits)
            programs={t:Program(b,image,-bits)for t,b in backends.items()};journal=[]
            for phase in range(2 if case['reset']else 1):
                if phase:
                    for p in programs.values():
                        if p.call('fn_00733d78',[p.ram+0x100]):raise ValueError('059 genuine reset failed')
                        p.produced=0;p.consumed=0
                for step in range(512):
                    observation=equivalent({t:p.advance(len(image),case['chunk'],0)for t,p in programs.items()},'window/reset')
                    journal.append(observation)
                    if observation['status']==1:break
                else:raise ValueError('059 window reference failed to finish')
            closed=equivalent({t:p.close()for t,p in programs.items()},'window cleanup')
            rows.append(dict(bits=bits,payloadSha256=hashlib.sha256(payload).hexdigest(),observations=journal,closed=closed))
    return rows


def custom_programs(backends):
    rows=[]
    for window in [-8,-9,-15,15,31]:
        image=encoded(b'actual allocator argument observations '*19,-9 if window==-8 else window)
        programs={t:Program(b,image,window,custom_allocator=True)for t,b in backends.items()}
        observation=equivalent({t:p.advance(len(image),2048,0)for t,p in programs.items()},'raw allocator ABI')
        closed=equivalent({t:p.close()for t,p in programs.items()},'raw allocator cleanup')
        rows.append(dict(window=window,observation=observation,closed=closed))
    return rows


def checksum_cases(backends):
    rows=[]
    for index,(checksum,data,is_null,alignment)in enumerate(leaf059.cases()):
        value=equivalent({t:leaf059.execute(b,checksum,data,is_null,alignment)for t,b in backends.items()},'checksum '+str(index))
        if value!=leaf059.expected(checksum,data,is_null):raise ValueError('059 checksum differs from independent arithmetic model')
        rows.append(dict(index=index,checksum=checksum,count=len(data),isNull=is_null,alignment=alignment,inputSha256=hashlib.sha256(data).hexdigest(),result=value))
    return rows


def table_cases(backends):
    return [dict(index=index,case=case,observation=equivalent({t:table_leaf059.execute(b,case)for t,b in backends.items()},'table '+str(index)))for index,case in enumerate(table_leaf059.cases())]


def predecessors(backends):
    rows=[dict(case=case,observation=equivalent({t:b.execute(case)for t,b in backends.items()},'frozen058 model'))for case in corpus()]
    programs=[];unsupported=[]
    for index,payload in enumerate(caller_payloads()):
        try:values={t:frozen_caller(b,payload)for t,b in backends.items()}
        except ValueError as error:
            if str(error).startswith('Fixture is not a single final fixed-Huffman'):
                unsupported.append(dict(index=index,reason=str(error)));continue
            raise
        visible={t:{k:v for k,v in row.items()if k!='kernelEntries'}for t,row in values.items()}
        equivalent(visible,'frozen058 caller')
        if any(values[t]['kernelEntries']!=values['original']['kernelEntries']for t in ['arm','a64']):raise ValueError('059 changed frozen058 kernel-entry observations')
        programs.append(dict(index=index,payloadSha256=hashlib.sha256(payload).hexdigest(),observations=values))
    if len(rows)!=273 or len(programs)!=13:raise ValueError('059 predecessor case roster incomplete')
    return dict(canonicalCases=rows,callerPrograms=programs,unsupportedSyntheticFixtures=unsupported)


def verify(output):
    output.mkdir(parents=True,exist_ok=False)
    before=inputs();claim=measure()
    for target in ['arm','windows','a64']:build(output/'build'/target,target)
    backends={t:Backend(t,output/'build')for t in ['original','arm','windows','a64']}
    report=dict(schemaVersion=1,status='bounded-complete-controller-and-helper-source-candidate-passed',profiles=['original-arm','source-arm','real-windows','high-a64-cpu-model'],sourceCreditGranted=0,wholeRootCreditGranted=0,wholeGameClaim=False)
    phases=[('predecessors',predecessors),('flatPrograms',flat_programs),('streamingPrograms',streaming_programs),('borrowedHeaderPrograms',header_programs),('windowPrograms',window_programs),('customAllocatorPrograms',custom_programs),('terminalPrograms',terminal059.run),('checksumCases',checksum_cases),('tableCases',table_cases)]
    try:
        for name,function in phases:
            report[name]=function(backends)
            print('059 guarded phase',name,'passed',flush=True)
        original=backends['original'].machine
        report['coverage']=[dict(address=f['address'],instructionBytes=f['instructionBytes'],instructionPcs=len(f['instructionPcs']),visitedPcs=sorted(set(f['instructionPcs'])&original.coverage),unvisitedPcs=sorted(set(f['instructionPcs'])-original.coverage))for f in claim['functions']]
        report['canonicalInstructionBytes']=8616
        report['limits']='Declared valid memory/callback domain, explicit typed borrowed-header fixture boundary, no preset-dictionary setter/sync/production allocator/unsafe fragmented undersized-extra sink/physical-device/game/admission claim'
        guard(before,output)
        (output/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8')
        print('059 root/helper coverage',[(r['instructionPcs']-len(r['unvisitedPcs']),r['instructionPcs'])for r in report['coverage']],flush=True)
        return report
    except BaseException as error:
        if hasattr(error,'observations'):(output/'failure.json').write_text(json.dumps(dict(message=str(error),observations=error.observations),indent=2)+'\n',encoding='utf-8')
        raise
    finally:backends['windows'].machine.close()

if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,default=WORK/'qualification');args=parser.parse_args()
    if not args.output.resolve().is_relative_to(ROOT/'work/native-stream059'):raise ValueError('059 outputs must remain in its private workspace')
    verify(args.output.resolve())
