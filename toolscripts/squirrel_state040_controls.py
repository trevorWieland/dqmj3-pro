import argparse
import ctypes
import time
from pathlib import Path

from native_wave013_common import ROOT,record,save
from native_archive032_gzip_reference import ReferenceImage
import squirrel_state040_build as build
from squirrel_state040_oracle import execute
from squirrel_state040_native import execute as native
from squirrel_state040_a64 import execute as a64


MUTATIONS=[
    ('reference-capacity','shared_constructor.c','references->capacity=4;','references->capacity=8;','fn_0014c4c8'),
    ('node-reference-count','shared_constructor.c','storage->nodes[index].references=0;','storage->nodes[index].references=1;','fn_0014c4c8'),
    ('constant-object-type','shared_constructor.c','sq_startup_null040(sq_shared_constants040(state));',
        'sq_startup_null040(sq_shared_constants040(state));\n    sq_shared_constants040(state)->type=0x05000002u;','fn_0014c4c8'),
    ('old-head-backlink','vm_constructor.c','prefix->chain->previous=&vm->reference;','prefix->chain->previous=0;','fn_0015467c'),
    ('suspended-target','vm_constructor.c','vm->suspended_target=-1;','vm->suspended_target=0;','fn_0015467c'),
    ('stack-capacity','vm_constructor.c','vm->stack.capacity=0;','vm->stack.capacity=1;','fn_0015467c')]


def run(folder):
    folder.mkdir(parents=True,exist_ok=True);started=time.monotonic();receipts=[];rows=[]
    baseline=build.arm(folder/'baseline',receipts);reference=ReferenceImage()
    originals={name:execute(baseline,name,reference,seed=29,has_head=True) for name in ['fn_0014c4c8','fn_0015467c']}
    for label,filename,before,after,name in MUTATIONS:
        source=ROOT/'source/squirrel-wave040'/filename;text=source.read_text()
        if text.count(before)!=1:raise ValueError('040 mutation source is ambiguous: '+label)
        root=folder/label;root.mkdir();wrong=root/filename;wrong.write_text(text.replace(before,after))
        override={filename:wrong};arm=build.arm(root/'arm',receipts,override)
        win=ctypes.CDLL(str(build.windows(root/'windows',receipts,override)));android=build.a64(root/'a64',receipts,override)
        profiles=[]
        for profile,value in [('arm',execute(arm,name,seed=29,has_head=True)),
            ('windows',native(win,name,29,True)),('a64',a64(android,name,29,True))]:
            expected=originals[name]
            mismatch=value['state']!=expected['state']
            if not mismatch or not value['returnedNormally'] or not value['returnedSelf'] or not value['immutableMemoryPreserved']:
                raise ValueError('040 normally returning semantic control was not rejected: '+label+'/'+profile)
            profiles.append({'platform':profile,'returnedNormally':True,'returnedSelf':True,'immutableMemoryPreserved':True,
                'semanticMismatchDetected':True,'wrongState':value['state'],'expectedState':expected['state'],
                'physicalAllocations':value['allocations']})
        rows.append({'mutation':label,'source':record(source),'wrongSource':record(wrong),'function':name,'profiles':profiles})
        print(label,flush=True)
    save(folder/'controls.json',{'status':'normally-returning-semantic-controls-rejected','producer':record(Path(__file__)),
        'rows':rows,'compilerReceipts':receipts,'elapsedSeconds':time.monotonic()-started,'acceptedSourceCreditGranted':0})


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/squirrel-state040/controls-first')
    run(parser.parse_args().work.resolve())
