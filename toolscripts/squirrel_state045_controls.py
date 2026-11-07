import argparse
import ctypes
import json
import time
from pathlib import Path

from native_wave013_common import ROOT,record,save
import squirrel_state045_build as build
from squirrel_state045_shared_cases import identity
from squirrel_state045_oracle import execute
from squirrel_state045_native import execute as windows,maps as windows_maps
from squirrel_state045_a64 import execute as a64
from squirrel_state045_observe import Observer,source_maps


MUTATIONS=[
    ('delegate-publication-slots','shared_initialize.c','delegate_slots[]={0,1,2,3,5,4,6,7,8,9}',
        'delegate_slots[]={0,1,2,3,4,5,6,7,8,9}'),
    ('metamethod-index','shared_initialize.c','(SqPrototypeI32)(meta_names->size-1)','(SqPrototypeI32)meta_names->size'),
    ('integer-only-numeric-mask','parameter_mask.c',"case 'n':mask|=0x00006u;","case 'n':mask|=0x00002u;"),
    ('extra-vector-reference','vector_append.c','sq_prefix_retain(values[index].type,values[index].value);',
        'sq_prefix_retain(values[index].type,values[index].value);\n        sq_prefix_retain(values[index].type,values[index].value);'),
    ('closure-owner','delegate_create.c','return closure;','closure->shared=0;\n    return closure;'),
    ('gc-backlink','delegate_create.c','closure->shared->chain->previous=&closure->reference;','closure->shared->chain->previous=0;'),
    ('callback-identity','registration_tables.c','{(const SqStringByte015*)"len",required_engine_001bd5d8_045,1,(const SqStringByte015*)"t"}',
        '{(const SqStringByte015*)"len",required_engine_001bd64c_045,1,(const SqStringByte015*)"t"}')]


def run(folder,expected_path):
    folder.mkdir(parents=True,exist_ok=True);started=time.monotonic();receipts=[];rows=[]
    expected=json.loads(expected_path.read_text());expected_identity=identity(expected)
    for label,filename,before,after in MUTATIONS:
        source=ROOT/'source/squirrel-wave045'/filename;text=source.read_text()
        if text.count(before)!=1:raise ValueError('045 mutation source is ambiguous: '+label+' count'+str(text.count(before)))
        work=folder/label;work.mkdir();wrong=work/filename;wrong.write_text(text.replace(before,after));overrides={filename:wrong}
        arm=build.arm(work/'arm',receipts,overrides);dll=build.windows(work/'windows',receipts,overrides)
        high=build.a64(work/'a64',receipts,overrides);library=ctypes.CDLL(str(dll));profiles=[]
        for platform,result,mapping in [('arm',execute(arm,'shared',seed=61),source_maps(arm)),
            ('windows',windows(library,'shared',61),windows_maps(library)),('a64',a64(high,'shared',61),source_maps(high))]:
            if not result['returnedNormally']:raise ValueError('045 wrong source failed to return normally')
            observer=Observer(result,*mapping);actual=None;error=None
            try:actual=observer.observe()
            except ValueError as exception:error=str(exception)
            if actual==expected:raise ValueError('045 normally returning semantic mutation was accepted: '+label+'/'+platform)
            profiles.append({'platform':platform,'returnedNormally':True,'callerGuardsPreserved':True,'sourceOnlyExecution':True,
                'semanticMismatchDetected':True,'expectedStateSha256':expected_identity,
                'wrongStateSha256':identity(actual) if actual is not None else None,'typedObserverRejection':error})
        rows.append({'label':label,'source':record(source),'wrongSource':record(wrong),'profiles':profiles})
        save(folder/'progress.json',{'completedNormallyReturningControls':rows,'compilerReceipts':receipts,'sourceCreditGranted':0})
        print(json.dumps({'control':label,'elapsedSeconds':time.monotonic()-started}),flush=True)
    save(folder/'controls.json',{'status':'normally-returning-incorrect-shared-graphs-rejected','producer':record(Path(__file__)),
        'expectedOriginalState':record(expected_path),'controls':len(rows),'platformExecutions':3*len(rows),
        'rows':rows,'compilerReceipts':receipts,'elapsedSeconds':time.monotonic()-started,'sourceCreditGranted':0})


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,required=True);parser.add_argument('--expected',type=Path,required=True)
    args=parser.parse_args();run(args.work.resolve(),args.expected.resolve())
