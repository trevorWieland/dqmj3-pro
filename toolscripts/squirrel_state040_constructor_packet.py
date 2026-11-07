import argparse
import importlib.metadata
import json
import platform
import subprocess
import sys
import time
from pathlib import Path

import capstone
import unicorn
from native_wave013_common import ROOT,record,save
import squirrel_state040_build as build
from squirrel_state040_inputs import input_records
from squirrel_state040_constructors import run as positive
from squirrel_state040_controls import run as negative
from squirrel_state040_android import build as android
from squirrel_state040_constructor_verify import verify


def graph_record(graph):
    return {key:value for key,value in graph.items() if key!='blocks' and key!='functions'}|{
        'functions':{name:{key:value for key,value in row.items() if key!='raw'} for name,row in graph['functions'].items()},
        'retainedOriginalExecutableBytes':0}


def run(work,output):
    started=time.monotonic();work.mkdir(parents=True,exist_ok=True);output.mkdir(parents=True,exist_ok=True);receipts=[]
    inputs=input_records(build.SOURCES,[Path(__file__),ROOT/'tests/test_squirrel_state040.py'])
    inputs.extend(record(path) for path in [ROOT/'docs/squirrel-state040-constructors.md',ROOT/'evidence/lanes/squirrel-state040/claim.json'])
    positive(work/'cases');negative(work/'controls')
    arm=build.arm(work/'object-proof-arm',receipts);a64=build.a64(work/'object-proof-a64',receipts)
    component=android(work/'android-pic',receipts)
    argv=[sys.executable,'-m','unittest','discover','-s','tests','-p','test_squirrel_state040.py','-v']
    result=subprocess.run(argv,cwd=ROOT,capture_output=True,timeout=120);log=work/'tests.log';log.write_bytes(result.stdout+result.stderr)
    if result.returncode or b'Ran 12 tests' not in result.stdout+result.stderr or b'skipped=' in result.stdout+result.stderr:
        raise ValueError('040 actual Windows constructor observer tests did not all execute and pass')
    receipts.append({'argv':argv,'exitCode':result.returncode,'privateLog':record(log),'actualWindowsTestsPassed':12,
        'normalUnittestProgressOnStderrIsNotACompilerDiagnostic':True})
    rows=json.loads((work/'cases/constructor-rows.json').read_text())
    save(output/'case-rows.json',rows)
    controls=json.loads((work/'controls/controls.json').read_text());save(output/'returning-controls.json',controls)
    claim=json.loads((ROOT/'evidence/lanes/squirrel-state040/claim.json').read_text());functions=[]
    for row in claim['functions']:
        if row['entry'] not in [0x14c4c8,0x15467c]:continue
        symbol=f"fn_{row['entry']:08x}";expected={pc for span in row['instructionRanges'] for pc in range(span['start'],span['endExclusive'],4)}
        visited={pc for result in rows if result['function']==symbol for pc in result['originalCodePath']}
        function={**row,'symbol':symbol,'observedInstructionBytes':4*len(expected&visited),
            'unobservedInstructionAddresses':sorted(expected-visited),
            'source':{key:value for key,value in arm['functions'][symbol].items() if key!='raw'}}
        functions.append(function)
    tools={'python':{'version':platform.python_version(),'executable':record(Path(sys.executable))},
        'clang':record(ROOT/'tools/clang-21/clang.exe'),'lld':record(ROOT/'tools/clang-21/ld.lld.exe'),
        'unicorn':{'distribution':importlib.metadata.version('unicorn'),'interface':unicorn.__version__,'runtime':unicorn.uc_version()},
        'capstone':{'distribution':importlib.metadata.version('capstone'),'interface':capstone.__version__,'runtime':capstone.cs_version()},
        'pyelftools':importlib.metadata.version('pyelftools')}
    if any(record(ROOT/row['path'])!=row for row in inputs):raise ValueError('040 constructor sealing inputs changed')
    packet={'schemaVersion':1,'status':'frozen-bounded-complete-constructor-candidate-stage-not-admission',
        'moduleSha256':claim['moduleSha256'],'producer':record(Path(__file__)),'inputs':inputs,'tools':tools,
        'candidateFunctions':2,'candidateInstructionBytes':516,'functions':functions,'cases':32,
        'caseRows':record(output/'case-rows.json'),'negativeControls':record(output/'returning-controls.json'),
        'coreAbiHandoff':record(ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/handoff.json'),
        'coreAbiManifest':record(ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json'),
        'startupTemplateExecution':record(ROOT/'evidence/lanes/squirrel-state040/startup-template-execution.json'),
        'originalInputIdentity':record(ROOT/'generated/update-content0/code.bin'),
        'armSourceGraph':graph_record(arm),'highAarch64SourceGraph':graph_record(a64),'androidPicComponent':component,
        'compilerAndTestReceipts':receipts,'elapsedSeconds':time.monotonic()-started,'actualWindowsExecution':True,
        'originalSdkExecutionIsReferenceOnly':True,'sourceExecutionMapsOriginalExecutableOrSdk':False,
        'platformHeapRequestContract':{'initialReferenceBlock':{'targetBytes':80,'nativeBytes':160,'targetAlignment':4,'nativeAlignment':8},
            'allocationFailureQualified':False,'vmConstructorMakesAllocationRequests':False},
        'wholeMemoryEquivalenceClaimed':False,'universalEquivalenceClaimed':False,'engineCallbacksQualified':False,
        'vmMethodsQualified':False,'sharedInitializationQualified':False,'vmInitializationQualified':False,'factoryQualified':False,
        'completeInterpreterOrGameQualified':False,'androidOsOrDeviceExecuted':False,
        'acceptedSourceCreditGranted':0,'exactMatchingCreditGranted':0,'sdkCreditGranted':0,
        'earlierAttempts':{'initialCoalescedFlagStoreGuardRejection':{'preservedLocation':'tool transcript and work/squirrel-state040/graphs-first',
            'repair':'Merge adjacent declared writable byte intervals; no constructor C edit.'},
            'preFinalAllocatorAndFloatingGuardsRuns':['work/squirrel-state040/constructors-first','work/squirrel-state040/controls-first']}}
    save(output/'packet.json',packet);verification=verify(ROOT,output/'packet.json');save(output/'verification.json',verification)
    owned=[ROOT/'source/squirrel-wave040'/name for name in ['startup.h','bindings.c','shared_constructor.c','vm_constructor.c','fixture.h','fixture.c','layout.c']]
    owned.extend(ROOT/'toolscripts'/name for name in ['squirrel_state040_build.py','squirrel_state040_model.py','squirrel_state040_native.py',
        'squirrel_state040_oracle.py','squirrel_state040_a64.py','squirrel_state040_inputs.py','squirrel_state040_constructors.py',
        'squirrel_state040_controls.py','squirrel_state040_android.py','squirrel_state040_constructor_verify.py','squirrel_state040_constructor_packet.py'])
    owned.extend([ROOT/'tests/test_squirrel_state040.py',ROOT/'docs/squirrel-state040-constructors.md',*output.glob('*.json')])
    save(output/'frozen-manifest.json',{'schemaVersion':1,'status':'frozen-bounded-constructor-stage-not-admission',
        'files':[record(path) for path in sorted(owned)],'producer':record(Path(__file__))})
    print(json.dumps({'packet':record(output/'packet.json'),'verification':record(output/'verification.json'),
        'manifest':record(output/'frozen-manifest.json'),'elapsedSeconds':time.monotonic()-started}))


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/squirrel-state040/constructor-stage-v1')
    parser.add_argument('--output',type=Path,default=ROOT/'evidence/lanes/squirrel-state040/constructors-v1')
    args=parser.parse_args();run(args.work.resolve(),args.output.resolve())
