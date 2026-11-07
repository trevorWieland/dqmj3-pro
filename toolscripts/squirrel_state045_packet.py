import argparse
import importlib.metadata
import json
import pickle
import platform
import subprocess
import sys
import time
from pathlib import Path

import capstone
import unicorn
from native_wave013_common import ROOT,record,save
from squirrel_state040_inputs import input_records
from squirrel_state040_constructor_packet import graph_record
import squirrel_state045_build as build
from squirrel_state045_android import build as android
from squirrel_state045_shared_cases import run as shared_cases
from squirrel_state045_mask_cases import run as mask_cases
from squirrel_state045_controls import run as controls
from squirrel_state045_heap import bootstrap
from squirrel_state045_views import run as views
from squirrel_state045_verify import verify


def run(work,output):
    work.mkdir(parents=True,exist_ok=True);output.mkdir(parents=True,exist_ok=True);started=time.monotonic();receipts=[]
    views();bootstrap()
    inputs=input_records(build.SOURCES,[Path(__file__),ROOT/'tests/test_squirrel_state045.py'])
    metadata=[ROOT/'docs/squirrel-initialization045.md',ROOT/'evidence/lanes/squirrel-state040/claim.json',
        *[ROOT/'evidence/lanes/squirrel-state040'/name for name in ['registration-tables.json','registration-source-registry-snapshot.json',
            'initialization045-claim.json','initialization045-shared-field-correction.json','initialization045-mask-switch-data.json',
            'initialization045-table-bindings.json','initialization045-heap-startup.json']]]
    inputs.extend(record(path) for path in metadata)
    arm=build.arm(work/'arm',receipts);dll=build.windows(work/'windows',receipts);a64=build.a64(work/'a64',receipts)
    graphs=work/'graphs.private.pkl';graphs.write_bytes(pickle.dumps((arm,dll,a64,receipts)))
    shared_cases(graphs,work/'shared');mask_cases(graphs,work/'masks')
    controls(work/'controls',work/'shared/complete-observed-state.json')
    pic=android(work/'android-pic',receipts)
    argv=[sys.executable,'-m','unittest','discover','-s','tests','-p','test_squirrel_state045.py','-v']
    result=subprocess.run(argv,cwd=ROOT,capture_output=True,timeout=180);log=work/'tests.log';log.write_bytes(result.stdout+result.stderr)
    if result.returncode or b'Ran 12 tests' not in result.stdout+result.stderr or b'skipped=' in result.stdout+result.stderr:
        raise ValueError('045 actual Windows observer tests did not all execute and pass')
    receipts.append({'argv':argv,'exitCode':result.returncode,'privateLog':record(log),'actualWindowsTestsPassed':12})
    destinations={}
    for key,source,name in [('sharedRows',work/'shared/rows.json','shared-rows.json'),
        ('sharedState',work/'shared/complete-observed-state.json','complete-shared-state.json'),
        ('maskRows',work/'masks/rows.json','mask-rows.json'),('negativeControls',work/'controls/controls.json','returning-controls.json')]:
        target=output/name;target.write_bytes(source.read_bytes());destinations[key]=record(target)
    original=json.loads((ROOT/'evidence/lanes/squirrel-state040/claim.json').read_text())['functions']
    support=json.loads((ROOT/'evidence/lanes/squirrel-state040/initialization045-claim.json').read_text())['functions']
    shared_path=set(json.loads((work/'shared/receipt.json').read_text())['originalCodePath'])
    mask_path=set(json.loads((work/'masks/receipt.json').read_text())['originalCodePath']);functions=[]
    for entry in [0x14a6a0,0x159264,0x1688cc,0x17875c]:
        row=next(value for value in [*original,*support] if value['entry']==entry);ranges=row.get('instructionRanges',row.get('ranges'))
        expected={pc for span in ranges for pc in range(span['start'],span['endExclusive'],4)};seen=shared_path|mask_path;symbol=f'fn_{entry:08x}'
        functions.append({'entry':entry,'symbol':symbol,'mode':'ARM','instructionBytes':row['instructionBytes'],'instructionRanges':ranges,
            'literalReadWitnesses':row['literalReadWitnesses'],'observedInstructionAddresses':sorted(expected&seen),
            'unobservedInstructionAddresses':sorted(expected-seen),
            'source':{key:value for key,value in arm['functions'][symbol].items() if key!='raw'}})
    if any(record(ROOT/row['path'])!=row for row in inputs):raise ValueError('045 source or metadata changed during sealing')
    packet={'schemaVersion':1,'status':'frozen-bounded-complete-shared-initialization-candidates-not-admission',
        'producer':record(Path(__file__)),'inputs':inputs,'moduleSha256':'d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126',
        'candidateFunctions':4,'candidateInstructionBytes':8556,'functions':functions,**destinations,
        'coreAbiManifest':record(ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json'),
        'originalInputIdentity':record(ROOT/'generated/update-content0/code.bin'),'armSourceGraph':graph_record(arm),
        'highAarch64SourceGraph':graph_record(a64),'androidPicComponent':pic,'compilerAndTestReceipts':receipts,
        'tools':{'python':platform.python_version(),'pythonExecutable':record(Path(sys.executable)),
            'clang':record(ROOT/'tools/clang-21/clang.exe'),'lld':record(ROOT/'tools/clang-21/ld.lld.exe'),
            'unicorn':{'distribution':importlib.metadata.version('unicorn'),'interface':unicorn.__version__,'runtime':unicorn.uc_version()},
            'capstone':{'distribution':importlib.metadata.version('capstone'),'interface':capstone.__version__,'runtime':capstone.cs_version()}},
        'actualWindowsExecution':True,'sourceMapsOriginalImageOrSdk':False,'referenceExecutesAuthoredAllocatorOrHelper':False,
        'declaredDomain':'Cold constructor+shared initialization; measured immutable tables; successful bounded allocation; one uncontended thread.',
        'liveAllocationRoles':227,'internedStrings':71,'tables':13,'closures':66,'gcNodes':79,
        'unresolvedUninvokedEngineCallbacks':56,'alreadyAdmittedActualArrayHandlerBindings':1,
        'sdkPrivateHeapRepresentationForcedEqual':False,'wholeMemoryEquivalenceClaimed':False,'universalEquivalenceClaimed':False,
        'factoryQualified':False,'vmInitializationQualified':False,'completeInterpreterOrGameQualified':False,
        'allocationFailureQualified':False,'arbitraryRepeatedSharedInitializationQualified':False,
        'androidOsOrDeviceExecuted':False,'sourceCreditGranted':0,'matchingCreditGranted':0,'sdkCreditGranted':0,
        'elapsedSeconds':time.monotonic()-started}
    save(output/'packet.json',packet);save(output/'verification.json',verify(ROOT,output/'packet.json'))
    owned=[*ROOT.joinpath('source/squirrel-wave045').glob('*'),*ROOT.joinpath('toolscripts').glob('squirrel_state045*.py'),
        ROOT/'tests/test_squirrel_state045.py',ROOT/'docs/squirrel-initialization045.md',*output.glob('*.json')]
    save(output/'frozen-manifest.json',{'schemaVersion':1,'status':'frozen-bounded-candidate-stage-not-admission',
        'files':[record(path) for path in sorted(owned) if path.is_file()],'producer':record(Path(__file__))})
    print(json.dumps({'packet':record(output/'packet.json'),'verification':record(output/'verification.json'),
        'manifest':record(output/'frozen-manifest.json'),'elapsedSeconds':time.monotonic()-started}),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/squirrel-state040/initialization045/sealing-v1')
    parser.add_argument('--output',type=Path,default=ROOT/'evidence/lanes/squirrel-state040/initialization045-v1')
    args=parser.parse_args();run(args.work.resolve(),args.output.resolve())
